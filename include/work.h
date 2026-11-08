/*
 * The game's main work/state block at 0x800AF630 (D_800AF630).
 * Almost every function keeps a `register struct_A444 *w` pointing at it.
 * Only fields seen so far are named; the rest is padding.
 */
#ifndef WORK_H
#define WORK_H

#include "psyq.h"

/* Per-frame primitive scratch buffer (0x640 bytes each) */
typedef struct {
    /* 0x0 */ s32 field_0;
    /* 0x4 */ s32 field_4;
    /* 0x8 */ u8 *field_8;
} struct_C_2; /* size 0xC */

typedef struct {
    /* 0x0000 */ struct_C_2 field_0[2];
    /* 0x0018 */ MATRIX field_18;         /* the world-to-screen matrix, copied each frame once the view is set (stage func_80129CF8) */
    /* 0x0038 */ DRAWENV field_38[2];
    /* 0x00F0 */ u8 field_F0[0x5C];
    /* 0x014C */ DISPENV field_14C[2];
    /* 0x0174 */ u8 field_174[0x14];
    /* 0x0188 */ u16 field_188;      /* DISPENV shown this frame */
    /* 0x018A */ u16 field_18A;      /* DRAWENV drawn into next (0/1) */
    /* 0x018C */ u8 field_18C[0xA3A8 - 0x18C];
    /* 0xA3A8 */ u16 field_A3A8;          /* incremented every rendered frame (stage code blinks on its low bits) */
    /* 0xA3AA */ u8 field_A3AA[2];
    /* 0xA3AC */ u16 field_A3AC;       /* += tick every rendered frame */
    /* 0xA3AE */ u16 field_A3AE;         /* index into the mode handler table (D_800629F4) */
    /* 0xA3B0 */ u16 field_A3B0;       /* kept for the whole mode; cleared by func_80011818 / func_80011778 */
    /* 0xA3B2 */ u8 field_A3B2[2];
    /* 0xA3B4 */ u16 field_A3B4;         /* step within the current mode */
    /* 0xA3B6 */ u16 field_A3B6;          /* set by the running overlay when its mode is finished */
    /* 0xA3B8 */ s16 field_A3B8;        /* per-step frame counter */
    /* 0xA3BA */ u16 field_A3BA;       /* func_800119F0 / func_80011998 */
    /* 0xA3BC */ u16 field_A3BC;
    /* 0xA3BE */ s16 field_A3BE;
    /* 0xA3C0 */ u16 field_A3C0;         /* the game state inside the field overlay: func_80011B7C, which clears the eight below */
    /* 0xA3C2 */ s16 field_A3C2;
    /* 0xA3C4 */ s16 field_A3C4;
    /* 0xA3C6 */ s16 field_A3C6;
    /* 0xA3C8 */ s16 field_A3C8;
    /* 0xA3CA */ s16 field_A3CA;
    /* 0xA3CC */ s16 field_A3CC;
    /* 0xA3CE */ s16 field_A3CE;
    /* 0xA3D0 */ s16 field_A3D0;
    /* 0xA3D2 */ u16 field_A3D2;        /* double-buffer index (0/1) */
    /* 0xA3D4 */ u16 field_A3D4;     /* nonzero leaves the main frame loop */
    /* 0xA3D6 */ u8 field_A3D6[2];
    /* 0xA3D8 */ s16 field_A3D8;        /* the stage map being loaded (func_801457A4 finds its room record) */
    /* 0xA3DA */ s16 field_A3DA;      /* the map id's group (id & 0xF000); with field_A3DC, how it was entered: 0x1000/0x1000 places Musashi from D_800AE6A8 */
    /* 0xA3DC */ s16 field_A3DC;
    /* 0xA3DE */ s16 field_A3DE;      /* cleared by the debug menu's entry (ovl37 func_800CEF00) */
    /* 0xA3E0 */ u8 field_A3E0;        /* cleared by the reset mode handler func_80010BB4 */
    /* 0xA3E1 */ u8 field_A3E1;
    /* 0xA3E2 */ u8 field_A3E2;
    /* 0xA3E3 */ u8 field_A3E3;      /* 0 closed, else the field's pause menu kind + 1: main() runs its update instead of func_80010B40 */
    /* 0xA3E4 */ u8 field_A3E4;
    /* 0xA3E5 */ u8 field_A3E5;       /* set by func_80015208 before func_801281D8 */
    /* 0xA3E6 */ u8 field_A3E6[2];
    /* 0xA3E8 */ s32 field_A3E8;    /* passed to VSync() each frame */
    /* 0xA3EC */ u8 field_A3EC[0xA434 - 0xA3EC];
    /* 0xA434 */ s8 field_A434;     /* an attract demo is running (set by func_80010F80, cleared by func_8001125C / func_80011680) */
    /* 0xA435 */ u8 field_A435[0xA444 - 0xA435];
} struct_A444; /* size 0xA444, cleared by func_80014238 */

extern struct_A444 D_800AF630;

/*
 * -O2 code reaches struct_A444 through this fixed-address pointer rather than the
 * symbol: a constant address is never cached in a register, and being a
 * struct member it is reloaded after stores through other pointers.
 */
#define WORK ((struct_A444 *)0x800AF630)

#endif /* WORK_H */
