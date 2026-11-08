#ifndef GAME_H
#define GAME_H

#include "psyq.h"

/*
 * Game structures established by the asset and decomp work (r12, 2026-10-13). Offsets are verified against the
 * code named in each comment; fields still unknown are padding. Nothing here changes code generation until a
 * function uses it. Sources: docs/animation_controller.md, docs/actor_parts_faces.md, docs/draw_code.md,
 * tools/pose_decode.py, tools/live_log.py, and the matched functions in src/.
 */

/* ---- PsyQ libgs coordinate system (as laid out in memory; 0x50 bytes) ---- */
typedef struct {
    s16 field_0[3][3];    /* rotation, 4096 = 1.0 */
    s16 field_12;
    s32 field_14[3];       /* translation */
} struct_20_2;       /* same layout as PsyQ MATRIX */

typedef struct struct_50 {
    u32 field_0;                    /* +0x00 */
    struct_20_2 field_4;           /* +0x04 local matrix */
    struct_20_2 field_24;           /* +0x24 world matrix (GsGetLw) */
    void *field_44;                /* +0x44 */
    struct struct_50 *field_48;   /* +0x48 parent */
    struct struct_50 *field_4C;     /* +0x4C */
} struct_50;                   /* same layout as PsyQ GsCOORDINATE2, 0x50 bytes */

/*
 * Model object: one drawn model instance (the live logger's object array, stride 0x84; func_8001C2C4 family
 * initialises it, func_8001C1E4 links it to a parent). The live logger reads +0x20 pose, +0x24 part table,
 * +0x34..+0x44 rotation and +0x48..+0x50 position: those are pose, parts and coord.coord.
 */
typedef struct {
    /* 0x00 */ u16 field_0;            /* 0 free, 1 a model (0x84 bytes), 2 a 0x38-byte object (func_8001C2C4 / C448 / C558 set it) */
    /* 0x02 */ s16 field_2;            /* 0, 1, 7 ... set by the init variant */
    /* 0x04 */ u32 field_4;           /* bit 31 cleared, set and toggled by stage func_8012E88C / 8A8 / 8C4 */
    /* 0x08 */ s16 field_8[3];          /* the owner's position (integer part); coord's translation follows it */
    /* 0x0E */ u8 field_E[2];
    /* 0x10 */ SVECTOR field_10;         /* rotation, turned into coord's matrix (stage func_8012B2CC and its kin) */
    /* 0x18 */ SVECTOR field_18;       /* 0x1000 = 1.0; x and z eased together (stage func_8012E470) */
    /* 0x20 */ void *field_20;          /* current pose: per-part records (8- or 12-byte form) */
    /* 0x24 */ u32 *field_24;          /* part table: one draw word per part; bit 24 hides it (func_8001D150/func_8001D130) */
    /* 0x28 */ u32 field_28;
    /* 0x2C */ u16 field_2C;           /* bit 0: the position changed (stage func_8012B260) */
    /* 0x2E */ u16 field_2E;
    /* 0x30 */ struct_50 field_30;    /* +0x34 rotation, +0x48 position, +0x78 parent */
    /* 0x80 */ u8 field_80[4];
} struct_84;                         /* 0x84 bytes */

/* a 16.16 fixed-point value; the integer half is the high word */
typedef union {
    s32 m0;
    struct { u16 field_0; s16 field_2; } m1;
} union_4;

/* A spawn definition: what func_8012C890 makes an actor from (stage data, or built on the stack by func_8012C588) */
typedef struct struct_14 {
    /* 0x00 */ s16 field_0, field_2, field_4;
    /* 0x06 */ s16 field_6;
    /* 0x08 */ s16 field_8;
    /* 0x0A */ u16 field_A;           /* bit 15: an actor from it is out (cleared when that actor is freed in range) */
    /* 0x0C */ s16 field_C;
    /* 0x0E */ s16 field_E;
    /* 0x10 */ s32 field_10;
} struct_14; /* size 0x14 */

/*
 * Stage actor: the engine's per-character state (96 of them, 0x10C bytes each, at 0x801202A0 in dump_10's stage;
 * the animation controller 0x8012AAAC, the part routines 0x801552F4.., the face routines 0x80154ED8..).
 */
typedef struct struct_10C {
    /* 0x000 */ u16 field_0;          /* 0: unused (the animation stepper skips it) */
    /* 0x002 */ u16 field_2;            /* sub-state: func_8012AD44 sets it, func_8012AD50 steps it, both restart field_34 */
    /* 0x004 */ union_4 field_4[3];       /* 16.16 */
    /* 0x010 */ s32 field_10[3];
    /* 0x01C */ s32 field_1C;          /* a countdown (struct_60's timer) */
    /* 0x020 */ struct_84 *field_20;    /* the drawn model; the controller writes model->field_20 */
    /* 0x024 */ u8 field_24[0x10];
    /* 0x034 */ u16 field_34;        /* a count kept in the sub-state (func_8012AD64 sets, func_8012AD6C steps) */
    /* 0x036 */ u16 field_36;             /* a serial number, from D_801270C4 at spawn (never 0) */
    /* 0x038 */ union_4 field_38[3];      /* the position before the last move (struct_60.field_38) */
    /* 0x044 */ u32 field_44;        /* display flags: 0x30000000 all parts shown, 0x20000000, 0x10000000,
                                       0x400 / 0x20000 / 0x4 weapon rules (func_80155150), 0xC0 face distance */
    /* 0x048 */ u8 field_48[5];
    /* 0x04D */ u8 field_4D;       /* 1 = func_80147060, 2 = func_8014706C */
    /* 0x04E */ u8 field_4E;         /* small state byte: func_80155458 calls table[state-1] */
    /* 0x04F */ u8 field_4F;
    /* 0x050 */ s16 field_50[3];         /* added to the position given to the model */
    /* 0x056 */ u8 field_56[2];
    /* 0x058 */ u32 field_58;        /* collision data; the top nibble holds flags (0x60000000 at set-up) */
    /* 0x05C */ u16 field_5C;        /* from the init record; bit 15 set and cleared by func_8012BF54/68 */
    /* 0x05E */ s16 field_5E;
    /* 0x060 */ s16 field_60;
    /* 0x062 */ s16 field_62;          /* a heading (the model's plus half a turn, func_8012E4C8) */
    /* 0x064 */ struct struct_10C *field_64;  /* the actor that spawned it (func_8012C890), else NULL */
    /* 0x068 */ struct struct_14 *field_68;  /* the definition it was spawned from (func_8012C890) */
    /* 0x06C */ u8 field_6C[4];
    /* 0x070 */ s16 field_70;          /* the definition's field_8 */
    /* 0x072 */ u16 field_72;      /* 0x4000 wrapped, 0x2000 marker passed, 0x0400 stepped back, 0x0600 cleared on func_8012A828 */
    /* 0x074 */ u8 field_74;           /* picks func_8012E014 (nonzero) or func_8012E138 (func_8012DFD4) */
    /* 0x075 */ u8 field_75;
    /* 0x076 */ s16 field_76;          /* the init record's first value (x1.5 unless D_80078EAE is set) */
    /* 0x078 */ void *field_78;         /* the init record (func_8012C354) */
    /* 0x07C */ s16 field_7C[3];       /* where it was when hit (damage type 0x1D, func_8012E9C0) */
    /* 0x082 */ u16 field_82;        /* bit 0: the hit finished it (func_8012E9C0) */
    /* 0x084 */ u8 field_84[4];
    /* 0x088 */ s16 field_88[3];      /* where it was spawned */
    /* 0x08E */ u8 field_8E[2];
    /* 0x090 */ struct struct_8_2 *field_90;   /* current animation script */
    /* 0x094 */ s32 field_94;          /* current entry */
    /* 0x098 */ s16 field_98;          /* frames left on the current pose */
    /* 0x09A */ s16 field_9A;       /* return entry of a called script (-3) */
    /* 0x09C */ struct struct_8_2 *field_9C;
    /* 0x0A0 */ u8 field_A0[0x0A];
    /* 0x0AA */ s16 field_AA;          /* nonzero: it cannot hit Musashi (func_8012DF34) */
    /* 0x0AC */ s16 field_AC;          /* added to a linked object's height (func_8012FB54) */
    /* 0x0AE */ u8 field_AE[2];
    /* 0x0B0 */ s32 field_B0;          /* the reaction step running (func_80131E00 sets it and calls table 0x8018D9DC) */
    /* 0x0B4 */ u32 field_B4;          /* reaction flags: 4, 8, 0x80 pick the steps of func_8012F75C.. */
    /* 0x0B8 */ u8 field_B8[4];
    /* 0x0BC */ s32 *field_BC;       /* key / value pairs (func_80131CF4 looks one up; key 0xD continues at a pointer) */
    /* 0x0C0 */ u8 field_C0;
    /* 0x0C1 */ u8 field_C1;           /* 0x11: the animation stepper leaves it alone */
    /* 0x0C2 */ u8 field_C2;
    /* 0x0C3 */ u8 field_C3;
    /* 0x0C4 */ u32 field_C4;          /* bit 1: skips the hit reaction (func_8012F5F4) */
    /* 0x0C8 */ u32 field_C8;           /* face word (func_80154ED8); bit 0x40000000 = copy from the face rect table */
    /* 0x0CC */ u32 **field_CC;    /* face scripts by number */
    /* 0x0D0 */ u32 *field_D0;    /* face script being played */
    /* 0x0D4 */ s32 field_D4;
    /* 0x0D8 */ s32 field_D8;
    /* 0x0DC */ void *field_DC[2];  /* NPC record message pointers (more follow in the record) */
    /* 0x0E4 */ u8 field_E4[0x18];
    /* 0x0FC */ u16 field_FC;          /* the definition's field_E */
    /* 0x0FE */ u8 field_FE[0x0E];
} struct_10C;                       /* 0x10C bytes */

/* Animation script entry: value >= 0 shows `pose` for `value` frames; value < 0 is a command
   (-1 end/return, -2 stop, -3 call `pose` as a script, -4 jump, -5 replay previous, -50 marker). */
typedef struct struct_8_2 {
    void *field_0;
    s16 field_4;
    s16 field_6;
} struct_8_2;

/* Pose records, one per part. 12-byte form (func_80020248): translation and three 12-bit angles. */
typedef struct {
    s16 field_0[3];
    u16 field_6[3];
} struct_C;

/* 8-byte form: angles packed in nibbles of b0 plus b1/b2/a0, translation as signed bytes:
   a0 = rec.a0 & 0xFFF, a1 = (b0 & 0xF) << 8 | b1, a2 = (b0 & 0xF0) << 4 | b2. */
typedef struct {
    u8 field_0, field_1, field_2;
    s8 field_3[3];
    u16 field_6;
} struct_8_3;

/* an object that moves by velocity and acceleration (not a struct_10C: +0x44 is the display word there) */
typedef struct {
    /* 0x00 */ u16 field_0;
    /* 0x02 */ u16 field_2;
    /* 0x04 */ union_4 field_4[3];
    /* 0x10 */ s32 field_10[3];
    /* 0x1C */ s32 field_1C;           /* a countdown (func_8012BEE8) */
    /* 0x20 */ struct_84 *field_20;
    /* 0x24 */ u8 field_24[0x14];
    /* 0x38 */ union_4 field_38[3];       /* the position before this frame's move (func_8012CC88) */
    /* 0x44 */ s32 field_44[3];
    /* 0x50 */ s16 field_50[3];          /* added to the position given to the model (func_8012B260) */
    /* 0x56 */ u8 field_56[2];
    /* 0x58 */ void *field_58;       /* the model's collision data (func_80135888) */
    /* 0x5C */ u16 field_5C;
} struct_60;

/* Musashi's object at 0x80126B58: an actor's header (state, 16.16 position), then his own fields */
typedef struct {
    /* 0x000 */ u16 field_0;
    /* 0x002 */ u16 field_2;
    /* 0x004 */ union_4 field_4[3];
    /* 0x010 */ u8 field_10[0x10];
    /* 0x020 */ struct_84 *field_20;
    /* 0x024 */ u8 field_24[0x14];
    /* 0x038 */ void *field_38;      /* his model's collision data (func_80135888) */
    /* 0x03C */ u16 field_3C;       /* hits noted this frame (func_8012F568) */
    /* 0x03E */ s16 field_3E;
    /* 0x040 */ s16 field_40;          /* set by a hit test (func_8012D5E4) */
    /* 0x042 */ s16 field_42;          /* the facing of what hit him (func_8012DEB8) */
    /* 0x044 */ u8 field_44[0x9C];
    /* 0x0E0 */ SVECTOR field_E0;      /* the hit's two points */
    /* 0x0E8 */ SVECTOR field_E8;
    /* 0x0F0 */ u8 field_F0[0x64];
    /* 0x154 */ s16 field_154[3];       /* the point the camera follows */
    /* 0x15A */ u8 field_15A[2];
    /* 0x15C */ s16 field_15C[3];      /* another point of his (objects turn to it, func_8012B864) */
    /* 0x162 */ s16 field_162;         /* nonzero: that point is not set (func_8012BCCC) */
    /* 0x164 */ u8 field_164[0x24];
    /* 0x188 */ s16 field_188;         /* 0 to 0x90: sets an actor's squash target (func_8012E364) */
} struct_18C;
extern struct_18C D_80126B58;       /* Musashi */

#endif
