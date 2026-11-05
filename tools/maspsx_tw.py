#!/usr/bin/env python3
"""maspsx as this game's assembler used it (r192): tools/maspsx/maspsx.py (a gitignored clone, kept unmodified) with
the assembler rules that --aspsx-version=2.79 turns off but the game's build still had:
  sltu_at   `sltu rd,rs,-N` as `li $at,-N; sltu rd,rs,$at` (func_sc03_105_801803A0; asm/ has no negative sltiu)
Same command line as maspsx.py; used by the Makefile (MASPSX) and tools/cmp_func.py.
"""
import importlib.util
import os
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
MASPSX_DIR = os.path.join(HERE, 'maspsx')
sys.path.insert(0, MASPSX_DIR)                       # its `maspsx` package
spec = importlib.util.spec_from_file_location('maspsx_cli', os.path.join(MASPSX_DIR, 'maspsx.py'))
cli = importlib.util.module_from_spec(spec)
spec.loader.exec_module(cli)
_config = cli.config_for_aspsx_version


def config_for_aspsx_version(arg):
    c = _config(arg)
    c.sltu_at = True
    return c


cli.config_for_aspsx_version = config_for_aspsx_version
if __name__ == '__main__':
    cli.main()
