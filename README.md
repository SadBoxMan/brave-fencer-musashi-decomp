# Brave Fencer Musashi: the matching decompilation

A matching decompilation of Brave Fencer Musashi (PlayStation, NTSC-U, SLUS-00726): C source that GCC 2.7.2 (PsyQ)
builds back to the original executable, overlays and stage images byte for byte. This repository is the **source of
truth for the game's original code**: the matching decompilation in its original form, kept for research. It uses
the splitter's address-based names (`func_8012CB64`, `D_80126B5E`), neutral names for the structures
(`struct_10C`, `field_20`), and the code exactly as matched, with no restructuring. The working project, Twinblade,
is the readable version: it renames functions and adds structures on top of the same code.

## How this repository changes

* **Additions only.** Its history is never rewritten. Commits are only ever added on top.
* **Only matched code.** An addition brings in more of the game's original code (see "Not covered" below) once it
  builds byte-identical to the original, in the same address-based naming.
* **Every commit verified.** Before a commit is published, its tree is built from nothing and checked against the
  original files, and this README says exactly what that commit covers and what it does not.
* **Readability lives elsewhere.** Names, structures and other changes for readability go to Twinblade, never here.

## The Phase 1 commits

| Commit | Date (US Eastern) | What it is |
|---|---|---|
| 1, "Phase 1 complete" | 5 Nov 2026, 11:30 | the working repository's commit `93205e05` (local tag `phase1-complete`): every function of the 182 checked images matched |
| 2, "Phase 1 final" | 7 Nov 2026, 13:59 | the working repository's commit `ec96cf48` (local tag `phase1-final`): commit 1 plus two cleanups that removed the last frame-padding locals marked `MATCH-TRICK` (r292, `src/stage/engine_8012F5F4.c`: three pad locals and the plain statement forms that replace them; r373, `src/stg/sc03_014_post.c` and `sc03_015_post.c`: one `u8 c[0];` line each). Nothing else in the decomp sources changed between the two |
| 3, "Original address names restored" | 8 Nov 2026, 15:21 | the working repository's commit `bf15da33` (local tag `phase1-pristine`): commit 2's code with every name the working project gave during Phase 1 replaced by a neutral one (see "Names" below). A pure rename: no type, size, layout, expression or statement changed |
| 4, "Old names in comments replaced" | 8 Nov 2026, 15:51 | the working repository's commit `8f456aa0` (local tag `phase1-pristine-comments`): commit 3 with the descriptive comments kept and the working project's names inside them replaced by the new names (177 replacements in 15 files). Comments only: the code is commit 3's |

Commits 1 and 2 are the code exactly as it was matched, so they still carry the names the working project gave
while matching (215 functions and data, the structures of `include/game.h`, `include/work.h` and
`include/abil.h`, and the small structures each source file declares); commit 3 is the same code with those names
neutral. Each commit holds only the decomp files of the working repository at that commit (the allowlist
`tools/publish/manifest_phase1.txt` of the working repository; the commit messages give the file counts). Commit 3
also adds the renaming tool, `tools/pristine_names.py`, and the SDK name list it reads,
`tools/pristine_sdk_names.txt`. The port, the recompiler, the publisher and every extracted asset stayed local. The
dates are the original commits' dates.

## Names

Since commit 3, every name in the code is one of these:

* **Functions and data:** the splitter's (splat's) address name in the form of the image that owns the address:
  `func_8001xxxx` / `D_8001xxxx` in the executable, the mode overlays, the shared stage engine and the village;
  `func_scXX_YYY_<address>` / `D_scXX_YYY_<address>` for a stage image's own code and data;
  `func_ovlNN_<address>` / `D_ovlNN_<address>` for an ability package's own.
* **Inline helpers** (`static inline`, inlined, so with no address of their own): `<first caller>_inline`, with
  `_inline_2` and so on for further helpers of the same caller.
* **Structures:** `struct_<SIZE>` / `union_<SIZE>` (the size in hex), `_2`, `_3` and so on for further types of the
  same size in one file (the shared headers are numbered first); fields `field_<OFFSET>` (the byte offset in hex),
  union members `m0`, `m1` and so on, bit-fields `field_<OFFSET>_b<BIT>`. Every such offset and size was checked
  against the compiler. Function-pointer typedefs are `type_<N>`.
* **Kept as they are:** the PsyQ library's names (`symbol_addrs_psyq.txt`), the SDK's own types and their fields
  (`MATRIX`, `SVECTOR`, `RECT`, `DRAWENV`, `GsSPRITE` ...; the names declared by the Runtime Library 4.0 headers,
  listed in `tools/pristine_sdk_names.txt`), `main`, the basic types `s8` to `u32`, every macro, local variables,
  parameters and labels (no address form exists for them), and every comment (since commit 4 with the old names
  inside them replaced by the new ones).

The notes in `docs/` were written by the working project and still use its names in places (`StageActor`,
`SetScript`, `g_SoundSlot` ...). To map an old name to its new one, run
`python tools/pristine_names.py plan --out <dir>` on commit 2's tree: it writes every rename (old, new, address or
offset, where it was defined) to `<dir>/renames.csv` and every kept name with its reason to `<dir>/kept.csv`
(it needs `pycparser` in the virtual environment; the build does not).

## What "100 %" means here, and what it does not

**Checked (`make regress`): 182 images**, each rebuilt from this source and compared with the original as a whole
file (SHA-1 and size in `tools/regress_baseline.txt`):

| Area | Images | Original it must equal |
|---|---|---|
| main | the executable SLUS_007.26 | `disc/files/SLUS_007.26` |
| ovl | 7: `main_01`, the shared stage engine with the village (SC03_001), the mode overlays 36, 37, 39, 3A, 3B | `disc/overlays/`, `disc/pac4/` |
| abil | the 35 ability packages | `disc/overlays/code/` |
| stg | the other 139 stage images | `disc/pac4/` |

Every commit was rebuilt from nothing on 8 Nov 2026 (a fresh checkout, no earlier build output) and gave **182 of
182 byte-identical**, with the engine check below passing. In the checked images, every function the compiler made
is written in C that GCC 2.7.2 + maspsx compiles to the original instructions. A small number of those functions
carry one marked line that steers the compiler without changing what the code does (`/* MATCH-TRICK: ... */`: 154
lines in commit 1, 149 in commits 2 to 4; `docs/decomp_recipes.md` explains the forms). No function is left as
`NON_MATCHING` C.

**Not C, by design or by ruling:**

* `func_80020F34` (in `src/code_800123F0.c`) stays `INCLUDE_ASM`: the original is hand-written assembly (an
  instruction order no compiler produces), so there is no C source to recover. It is the only `INCLUDE_ASM` left.
* The PsyQ library code linked into the executable (about 161 KB, named in `symbol_addrs_psyq.txt`) is assembled
  from the splitter's output, not written as C. It is Sony's SDK, not game code, and it is byte-checked like the rest.
* Data (tables, strings, images inside the code images) is assembled from the splitter's output of your own disc.

**Covered indirectly:** the 139 other stage images each carry a copy of the shared stage engine. The build takes
those copies from the disc as binary pieces rather than rebuilding them; the engine's C is built and checked through
the village image, and a separate check (`tools/coverage.py`, run by a full `make regress`) shows that the engine in
all 140 stage images is word for word the village's, apart from relocated addresses.

**Not covered at all (do not read "100 %" as including these):**

* **34 more code blocks in the stage archives** (loaded behind stage images: SC02_009, SC07_003, SC07_004,
  SC03_053 / 054 / 056 and 28 shop rooms; about 1,500 functions) and **MAIN.CD entry 12** (the Continue and save
  screens' copy of the engine, with a few functions of its own). They were found on 7 Nov 2026, after the Phase 1 commits;
  this source has no configuration for them and the build never touches them. (MAIN.CD entry 9 is never loaded.)
* The rest of MAIN.CD outside its code blocks, and every non-code file on the disc.
* That the C means the same thing on another compiler: GCC 2.7.2 at -O2 for the R3000 is one reading of it.

## Building it

You need your own copy of the game: NTSC-U, SLUS-00726. This repository holds no game data, no assembly from the
game (`asm/`, which the splitter writes from your disc) and nothing extracted from it.

The toolchain used for the 8 Nov verification (on Windows 11, with MSYS2; other versions and other systems were not
tested):

| Tool | Version | Where it goes |
|---|---|---|
| GCC 2.7.2, PSX-patched (`cpp`, `cc1`) | built by `tools/build_old_gcc.sh 2.7.2` with the patches of github.com/decompals/old-gcc | `tools/compilers/gcc-2.7.2-psx/` |
| GNU binutils (`as`, `ld`, `objcopy`) for mipsel-none-elf | 2.40 | `tools/toolchain/bin/mipsel-none-elf-*` |
| maspsx | github.com/mkst/maspsx, commit `e85ecb373828aabea96d7e6400974d4f91ce8c74`, unmodified (`tools/maspsx_tw.py` wraps it) | `tools/maspsx/` |
| Python | 3.12, in a virtual environment at `.venv/` (`.venv/Scripts/python.exe`, as the Makefile names it) | `.venv/` |
| splat64, spimdisasm, rabbitizer, PyYAML, pylibyaml | 0.50.0, 1.42.4, 1.16.2, 6.0.3, 0.1.0 | `pip install` into `.venv` |
| GNU make (MSYS2) | 4.4.1 | `C:\msys64\usr\bin` |

Set up the disc files (from the repository root, with the virtual environment's Python):

```
python tools/extract_disc.py <your track 1 .bin (MODE2/2352)> disc/files
python tools/lzss_pac4.py disc/files disc/pac4
python tools/stage_chunks.py
make overlays
```

Then split and check (from PowerShell or cmd, with `C:\msys64\usr\bin` first on PATH; `tools/regress.py` puts it
there itself for its own runs):

```
make split
make regress
```

`make regress` prints one PASS / FAIL row per area and the engine check, and exits 1 on any failure. If your disc
files differ from the ones this was checked against, it says "original changed" instead of comparing against the
wrong bytes.

## Where to read

* `docs/decomp_recipes.md`: what GCC 2.7.2 wants, by symptom, and the `MATCH-TRICK` forms with their reasons
* `docs/test_infrastructure.md`: the regression suite and what each check proves
* `docs/stage_engine.md`, `docs/overlays.md`, `docs/stage_loader.md`: how the code is split and loaded
* `docs/stage_status.md`: functions per stage image

These notes come from the working project and may use its names; "Names" above says how to map them.

Brave Fencer Musashi is a trademark of its owners. This repository contains no part of the game; it is source code
written to reproduce the game's code when built against your own copy.
