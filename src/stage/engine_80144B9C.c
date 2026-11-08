/*
 * Stage engine, 0x80144B9C-0x801458E0: the second source file built without optimisation (-O0), between
 * engine_8013C98C.c and engine_801458E0.c (docs/stage_engine.md, "Source files"; docs/decomp_recipes.md section 6).
 */
#include "common.h"
#include "psyq.h"
#include "work.h"

/* the stage's room records (docs/demos.md); word 0 is the default */
extern s32 D_8018D220[];

/* a map's room record (func_801457A4) */
typedef struct {
    /* 0x00 */ s16 field_0, field_2, field_4;          /* func_8002850C */
    /* 0x06 */ s16 field_6, field_8, field_A;    /* the three lights' directions and colours */
    /* 0x0C */ u8 field_C, field_D, field_E;
    /* 0x0F */ u8 field_F;
    /* 0x10 */ s16 field_10, field_12, field_14;
    /* 0x16 */ u8 field_16, field_17, field_18;
    /* 0x19 */ u8 field_19;
    /* 0x1A */ s16 field_1A, field_1C, field_1E;
    /* 0x20 */ u8 field_20, field_21, field_22;
    /* 0x23 */ u8 field_23;
    /* 0x24 */ u16 field_24, field_26;
    /* 0x28 */ s32 field_28, field_2C, field_30, field_34;
    /* 0x38 */ u16 field_38, field_3A, field_3C, field_3E;
    /* 0x40 */ u8 field_40[12];
    /* 0x4C */ s32 field_4C, field_50, field_54, field_58;
    /* 0x5C */ s32 field_5C, field_60, field_64;
    /* 0x68 */ u8 field_68[0x20];
    /* 0x88 */ s32 field_88, field_8C, field_90;     /* func_801336E8 */
    /* 0x94 */ u8 *field_94, *field_98;           /* func_8013B83C */
    /* 0x9C */ s32 field_9C, field_A0, field_A4;
    /* 0xA8 */ void (*field_A8)(void);         /* func_8013B568 */
    /* 0xAC */ u8 field_AC[8];
    /* 0xB4 */ s32 field_B4, field_B8, field_BC, field_C0, field_C4;
    /* 0xC8 */ s32 *field_C8;                /* the entry records */
    /* 0xCC */ s32 field_CC[2];
    /* 0xD4 */ s32 field_D4, field_D8;
} struct_DC;
/* a stage entry record (0x24 bytes): where Musashi starts and what runs; the one used is kept at D_80078E50 */
typedef struct {
    /* 0x00 */ u8 field_0[3];
    /* 0x03 */ u8 field_3;              /* the camera's mode (Camera +0xA0) */
    /* 0x04 */ s32 field_4;
    /* 0x08 */ s32 field_8;
    /* 0x0C */ s32 field_C;             /* Musashi's +0x198 unless it is D_8010F5C8 */
    /* 0x10 */ u16 field_10, field_12, field_14;
    /* 0x16 */ u16 field_16;
    /* 0x18 */ void (*field_18)(void);
    /* 0x1C */ s32 field_1C;
    /* 0x20 */ void (*field_20)(void);
} struct_24;
/* the stage request at D_800AE6A8 (which entry, where to place Musashi) */
typedef struct {
    /* 0x00 */ s32 field_0;
    /* 0x04 */ struct_24 *field_4;
    /* 0x08 */ s32 field_8;            /* zero on a fresh load */
    /* 0x0C */ s32 field_C;
    /* 0x10 */ s32 field_10;
    /* 0x14 */ u8 field_14;
    /* 0x15 */ u8 field_15;
    /* 0x16 */ u8 field_16;          /* 0xFF: D_80078E50 */
    /* 0x17 */ u8 field_17;
    /* 0x18 */ u8 field_18;
    /* 0x19 */ u8 field_19[3];
    /* 0x1C */ s32 *field_1C;
    /* 0x20 */ u16 field_20, field_22, field_24, field_26;
} struct_28;
/* a model object: only its facing is set here */
typedef struct {
    /* 0x00 */ u8 field_0[0x12];
    /* 0x12 */ u16 field_12;
} struct_14_2;
/* Musashi (game.h's Player at D_80126B58) as the loader sets him up */
typedef struct {
    /* 0x000 */ u8 field_0[4];
    /* 0x004 */ u16 field_4;
    /* 0x006 */ s16 field_6;
    /* 0x008 */ u16 field_8;
    /* 0x00A */ s16 field_A;
    /* 0x00C */ u16 field_C;
    /* 0x00E */ s16 field_E;
    /* 0x010 */ u8 field_10[0x10];
    /* 0x020 */ struct_14_2 *field_20;
    /* 0x024 */ u8 field_24[0x29];
    /* 0x04D */ u8 field_4D;
    /* 0x04E */ u8 field_4E[0x3A];
    /* 0x088 */ s16 field_88, field_8A, field_8C;
    /* 0x08E */ u8 field_8E[2];
    /* 0x090 */ s16 field_90, field_92, field_94;
    /* 0x096 */ u8 field_96[0x1A];
    /* 0x0B0 */ s32 field_B0;
    /* 0x0B4 */ u8 field_B4[0x18];
    /* 0x0CC */ s32 field_CC;
    /* 0x0D0 */ u8 field_D0[0x84];
    /* 0x154 */ s16 field_154[3];
    /* 0x15A */ u8 field_15A[2];
    /* 0x15C */ s16 field_15C[3];
    /* 0x162 */ u8 field_162[0x36];
    /* 0x198 */ s32 field_198;
    /* 0x19C */ u8 *field_19C;
    /* 0x1A0 */ u8 field_1A0[0x48];
    /* 0x1E8 */ s32 field_1E8;
    /* 0x1EC */ s32 field_1EC;
    /* 0x1F0 */ s32 field_1F0;
} struct_1F4;
typedef struct {
    /* 0x00 */ u8 field_0[0x3A];
    /* 0x3A */ u16 field_3A;
    /* 0x3C */ u16 field_3C;
    /* 0x3E */ u16 field_3E;
} struct_40;
/* the camera (engine.c's Camera at D_80126948); the loader writes +0xA0 as a byte */
typedef struct {
    /* 0x00 */ u8 field_0[0xA0];
    /* 0xA0 */ u8 field_A0;
} struct_A1;
typedef struct {
    /* 0x0 */ s32 field_0;
    /* 0x4 */ s32 field_4;
    /* 0x8 */ s32 field_8;
    /* 0xC */ u8 field_C;
    /* 0xD */ u8 field_D;
    /* 0xE */ u8 field_E;
} struct_10; /* GsF_LIGHT */
extern struct_1F4 D_80126B58;
extern struct_40 D_80078E78;
extern struct_28 D_800AE6A8;
extern struct_A1 D_80126948;
extern struct_24 D_80078E50;
extern u8 D_8010F5C8;
extern s32 D_8011DB14;
extern s32 D_8011DB1C;
extern s32 D_80128150;
extern u8 D_80126DB0[];
extern u16 D_80126DB6;
extern struct_A1 *D_801151D4;
extern struct_10 D_800A5E88[3];
extern u16 D_800B9AAC, D_800B9B00, D_800B9AB2, D_800B9B06, D_800B9AB6, D_800B9B0A;
extern s32 D_800B9AC4, D_800B9B18, D_800B9AC8, D_800B9B1C;
extern u8 D_800B9ABC, D_800B9ABD, D_800B9ABE, D_800B9B10, D_800B9B11, D_800B9B12;
extern u8 D_800B9ABF, D_800B9AC0, D_800B9AC1, D_800B9B13, D_800B9B14, D_800B9B15;
extern s32 D_80126728, D_8011DB08, D_80126AEC;
extern u8 D_801151F0[8];
extern s32 D_801274C8, D_801274CC, D_801274D0, D_801274D4, D_801270B8, D_80127520;
extern s32 D_801151D8, D_8011DB28;
extern void func_80019018(void);
extern void func_80018E78(void);
extern void func_8002AB64(void);
extern void func_80015978(void *a, void *b);
extern void func_8012A1BC(void);
extern void func_8002850C(s32 x, s32 y, s32 z);
extern void func_80028620(s32 n, struct_10 *l);
extern void func_80129398(void);
extern void func_8012944C(void);
extern void func_801336E8(s32 a, s32 b, s32 c);
void func_8013B83C(u8 *a, u8 *b, s32 c);
void func_8013B568(void (*f)(void));
extern void func_800D02C0(s32 a);
extern void func_80011E84(s32 a);
extern void func_8013D3D4(s32 a, s32 b);
extern void func_8002D4C8(s32 a, s32 b);
extern void *memcpy(void *dst, const void *src, u32 n);
extern s32 func_800CF854(void);
extern void func_8001C14C(void);
extern void func_8012A110(void);
s32 func_801457A4(s32 id);

/* the stage loader: the room record of the map, the entry, Musashi's place, lights, the stage's code blocks */
void func_80144B9C(void) {
    struct_1F4 *g = &D_80126B58;
    struct_40 *q = &D_80078E78;
    register struct_A444 *w = &D_800AF630;
    struct_28 *cd = &D_800AE6A8;
    struct_A1 *h = &D_80126948;
    struct_DC *room;
    struct_24 *entry;
    s32 *tbl;
    s16 i;
    void (*fn)(void);
    s32 first;

    func_80019018();
    func_80018E78();
    if (cd->field_8 == 0) {
        room = (struct_DC *)func_801457A4(w->field_A3D8);
        cd->field_16 = 0;
        first = 1;
        D_8011DB14 = q->field_3A;
        D_8011DB1C = q->field_3E;
        D_80128150 = 100;
        func_8002AB64();
    } else {
        room = (struct_DC *)func_801457A4(w->field_A3D8);
        first = 0;
    }
    cd->field_1C = room->field_C8;
    tbl = room->field_C8;
    if (cd->field_16 == 0xFF) {
        entry = &D_80078E50;
    } else {
        entry = (struct_24 *)tbl[cd->field_16];
    }
    cd->field_C = entry->field_8;
    cd->field_14 = 0;
    g->field_4D = 0;
    if (entry->field_C != (s32)&D_8010F5C8) {
        g->field_198 = entry->field_C;
    }
    if (w->field_A3DA == 0x1000 && w->field_A3DC == 0x1000) {
        g->field_6 = g->field_88 = g->field_90 = cd->field_20;
        g->field_A = g->field_8A = g->field_92 = cd->field_22;
        g->field_E = g->field_8C = g->field_94 = cd->field_24;
        g->field_20->field_12 = cd->field_26;
        cd->field_18 = 0;
    } else {
        g->field_6 = g->field_88 = g->field_90 = entry->field_10;
        g->field_A = g->field_8A = g->field_92 = entry->field_12;
        g->field_E = g->field_8C = g->field_94 = entry->field_14;
        g->field_20->field_12 = entry->field_16;
    }
    g->field_154[0] = g->field_15C[0] = g->field_6;
    g->field_154[1] = g->field_15C[1] = g->field_A;
    g->field_154[2] = g->field_15C[2] = g->field_E;
    func_80015978(&g->field_4, D_80126DB0);
    D_80126DB6 = g->field_20->field_12;
    if (w->field_A3DA == 0x1000 && (w->field_A3DC == 0x1000 || w->field_A3DC == 0x2000) && first == 0) {
        entry->field_18();
        func_8012A1BC();
    } else {
        if (w->field_A3DA == 0x1000 && w->field_A3DC == 0x3000) {
            h->field_A0 = entry->field_3;
        } else {
            h->field_A0 = 0;
        }
        entry->field_18();
    }
    if (w->field_A3D8 == 0x3069) {
        h->field_A0 = entry->field_3;
    }
    D_801151D4 = h;
    func_8002850C(room->field_0, room->field_2, room->field_4);
    D_800A5E88[0].field_0 = room->field_6;
    D_800A5E88[0].field_4 = room->field_8;
    D_800A5E88[0].field_8 = room->field_A;
    D_800A5E88[0].field_C = room->field_C;
    D_800A5E88[0].field_D = room->field_D;
    D_800A5E88[0].field_E = room->field_E;
    func_80028620(0, &D_800A5E88[0]);
    D_800A5E88[1].field_0 = room->field_10;
    D_800A5E88[1].field_4 = room->field_12;
    D_800A5E88[1].field_8 = room->field_14;
    D_800A5E88[1].field_C = room->field_16;
    D_800A5E88[1].field_D = room->field_17;
    D_800A5E88[1].field_E = room->field_18;
    func_80028620(1, &D_800A5E88[1]);
    D_800A5E88[2].field_0 = room->field_1A;
    D_800A5E88[2].field_4 = room->field_1C;
    D_800A5E88[2].field_8 = room->field_1E;
    D_800A5E88[2].field_C = room->field_20;
    D_800A5E88[2].field_D = room->field_21;
    D_800A5E88[2].field_E = room->field_22;
    func_80028620(2, &D_800A5E88[2]);
    func_80129398();
    D_800B9AAC = room->field_24;
    D_800B9B00 = room->field_26;
    D_800B9AC4 = room->field_28;
    D_800B9B18 = room->field_2C;
    D_800B9AC8 = room->field_30;
    D_800B9B1C = room->field_34;
    D_800B9AB2 = room->field_38;
    D_800B9B06 = room->field_3A;
    D_800B9AB6 = room->field_3C;
    D_800B9B0A = room->field_3E;
    D_800B9ABC = room->field_40[0];
    D_800B9ABD = room->field_40[1];
    D_800B9ABE = room->field_40[2];
    D_800B9B10 = room->field_40[3];
    D_800B9B11 = room->field_40[4];
    D_800B9B12 = room->field_40[5];
    D_800B9ABF = room->field_40[6];
    D_800B9AC0 = room->field_40[7];
    D_800B9AC1 = room->field_40[8];
    D_800B9B13 = room->field_40[9];
    D_800B9B14 = room->field_40[10];
    D_800B9B15 = room->field_40[11];
    func_8012944C();
    g->field_B0 = room->field_4C;
    g->field_CC = room->field_50;
    g->field_1E8 = room->field_54;
    g->field_1F0 = room->field_58;
    D_80126728 = room->field_5C;
    D_8011DB08 = room->field_60;
    D_80126AEC = room->field_64;
    g->field_19C = room->field_68;
    func_801336E8(room->field_88, room->field_8C, room->field_90);
    func_8013B83C(room->field_94, room->field_98, room->field_9C);
    func_8013B568(room->field_A8);
    func_800D02C0(room->field_D4);
    func_80011E84(room->field_D8);
    for (i = 0; i < 8; i++) {
        D_801151F0[i] = *(i + (u8 *)room + 0xAC);  /* not room->unkAC[i]: -O0 adds i to room first */
    }
    D_801274C8 = room->field_B4;
    D_801274CC = room->field_B8;
    D_801274D0 = room->field_BC;
    D_801274D4 = room->field_C0;
    D_801270B8 = room->field_C4;
    D_80127520 = room->field_C4;
    D_801151D8 = 0;
    D_8011DB28 = 0;
    fn = entry->field_20;
    fn();
    func_8013D3D4(room->field_A0, room->field_A4);
    func_8002D4C8(0x1E, 0);
    if (cd->field_8 == 0) {
        D_80078E50 = *entry;
    }
    cd->field_4 = &D_80078E50;
    cd->field_8 = cd->field_8 & 0x7F000000;
    if (func_800CF854() != 0) {
        func_8001C14C();
        func_8012A110();
    }
}

/* the room record of a map id; the -O0 `break` after the default's return still emits its jump */
s32 func_801457A4(s32 id) {
    switch (id) {
    case 0x1010: case 0x1052: case 0x1077: case 0x1094: case 0x2013:
    case 0x2015: case 0x2016: case 0x2017: case 0x2018: case 0x2019: case 0x201A:
    case 0x2055: case 0x2056: case 0x2057: case 0x2058: case 0x2059: case 0x205A: case 0x205B:
    case 0x207A: case 0x207B: case 0x207C: case 0x207D: case 0x207E: case 0x207F: case 0x2080:
    case 0x2097: case 0x2098: case 0x2099: case 0x209A: case 0x209B: case 0x209C: case 0x209D:
        return D_8018D220[id & 0xFFFF0FFF];
    default: return D_8018D220[0]; break;
    }
}
