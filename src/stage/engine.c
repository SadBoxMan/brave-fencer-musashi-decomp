#include "common.h"
#include "psyq.h"
#include "work.h"
#include "game.h"
#include "gte.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

extern s32 func_80029178(s32 n);
#define PARTS(a) (*(s32 *)(*(u8 **)((a) + 0x20) + 0x24))

extern s16 D_80078E96;
extern s16 D_80078E9E;
extern s16 D_80078EA6;
extern u8 D_800D8D10[];
extern void func_800183E0(s32 w);

void func_80128288(void);

void func_80128158(void) {
    func_80128288();
}

typedef struct { s32 field_0; u8 *field_4; } struct_8_4;   /* the loader's fifth argument (as ovl38's) */
extern struct_8_4 D_800C7C60;
extern u8 D_800A2E20[];
extern s32 D_801EBC68;          /* where the stage's extra loads go */
extern s32 D_800AF558[];        /* archive file locations (g_ArchiveFileLoc entries) */
extern s32 D_800AF560[];
extern s32 D_800AECB0[];
extern s32 D_800AECB8[];
extern s32 D_800AEFD0[];
extern s32 func_8001ABBC(s32 kind, s32 id, s32 *file, s32 dest, struct_8_4 *param);
extern u16 D_800B99F6;          /* Work +0xA3C6: the stage step */
extern s16 D_800B9A08;          /* Work +0xA3D8: the map id */
extern u8 D_800B9A10;
extern u8 D_800B9A11;
extern u8 D_800B9A17;
extern u8 D_800B9A64;
extern s16 D_800B99F2;
extern void (*D_8018D7A4[])(void);
extern void func_80011B7C(s32 a);
extern void func_80011C10(void);
extern void func_80011E24(void);
extern void func_80011A3C(void);
extern void func_80010E14(void);
extern void func_80015310(void);
extern void func_8001C0C8(void);
extern void func_800285AC(void);
extern void func_8002AEF8(void);
extern s32 func_80029504(void);
extern void func_8002D4C8(s32 a, s32 b);
extern s32 func_800CF854(void);
extern void func_800CFBBC(void);
extern s32 func_800D0588(void);
extern void func_800D0630(void);
void func_801282EC(void);
void func_801285E4(void);
void func_80128678(void);
void func_80128714(void);
void func_80128A28(void);
void func_80128AF4(void);
void func_80128C14(void);
void func_80129220(void);
void func_80129258(void);
void func_80129C40(s32 a);
void func_8013C98C(void);
void func_8013E558(void);
void func_8013E67C(void);
void func_80144B9C(void);
void func_80145CEC(void);
void func_80146074(void);
void func_8016E8F0(void);
void func_80175308(void);
void func_80175494(void);
void func_801378F0(void);
void func_80178608(void);
s32 func_801288B0(void);
s32 func_801288E8(void);
s32 func_80128940(void);
s32 func_80128998(void);
s32 func_801289F0(void);

void func_80128178(void) {
    func_801285E4();
}

void func_80128198(void) {
    func_80128678();
}

void func_801281B8(void) {
    func_80128714();
}

void func_801281D8(void) {
    func_8013E67C();
}

void func_801281F8(void) {
    func_8013E558();
}

s32 func_80128218(void) {
    return D_801EBC68;
}

void func_80128228(void) {
    func_80128A28();
}

void func_80128248(void) {
    func_80128AF4();
}

void func_80128268(void) {
    func_801282EC();
}

/* the stage's step: one handler per stage step (0-8) */
void func_80128288(void) {
    if (D_800B99F6 < 9) {
        D_8018D7A4[D_800B99F6]();
    }
}

void func_801282CC(void) {
    func_80011B7C(0x11);
}

void func_801282EC(void) {
    func_8001C0C8();
    func_80015310();
    func_80129258();
    func_801378F0();
    func_80010E14();
}

/* a few maps load an extra file before the stage goes on */
void func_8012832C(void) {
    s32 t = func_80029504();
    s32 r;
    switch (D_800B9A08) {
    case 0x300E:
        if (func_800CF854() == 0) {
            r = func_80128998();
        } else {
            r = func_801289F0();
        }
        break;
    case 0x30A0:
        if (t < 0x640) {
            r = func_801288E8();
        } else {
            r = func_80128940();
        }
        break;
    case 0x3014:
        if (t != 0x4B0 || (func_80029178(0x138) & 0xFF) != 0) {
            r = 1;
        } else {
            r = func_801288B0();
        }
        break;
    default:
        func_80011C10();
        return;
    }
    if (r) {
        func_80011C10();
    }
}

void func_80128420(void) {
    func_80129220();
    func_801378F0();
    func_80011E24();
    func_80128C14();
    func_8002AEF8();
    func_800CFBBC();
    func_80015310();
    func_800285AC();
    D_800B9A17 = 0;
    D_800B9A10 = 0;
    func_8013C98C();
    func_80129C40(0);
    func_800D0630();
    func_80145CEC();
    func_80144B9C();
    func_80011C10();
}

void func_801284B8(void) {
    if (func_800D0588() != 0) {
        func_80015310();
        func_80011C10();
    }
}

void func_801284F0(void) {
    func_80175308();
    func_8016E8F0();
    if (D_800B9A64 != 0) {
        func_80175494();
    }
    func_80011C10();
}

void func_8012853C(void) {
    func_80146074();
    func_80011C10();
}

void func_80128564(void) {
    SetSpadStack();
    func_80178608();
    ResetSpadStack();
    if (D_800B9A08 == 0x300A) {
        func_8002D4C8(6, 0);
    }
    func_80011A3C();
    D_800B99F2 = 1;
}

void func_801285D4(void) {
    D_800B9A11 = 0;
}

/* the stage's hooks: a mode overlay fills them in (zero in the file) */
extern void (*D_8018D4D8)(void);
extern s16 (*D_8018D4DC)(void);
extern void (*D_8018D4E4)(void);
extern s16 (*D_8018D4E8)(void);
extern s32 D_801ED340;
extern s32 D_801ED344;
extern s16 D_800B9A00;
extern u16 D_800B99DA;
extern s32 D_801EF3F8;
extern s32 D_800AE830[][2];
extern s16 D_8018D7BC[];
extern s16 D_8018D7CC[];
extern u8 D_801EBC6C[];
/* a frame list: each frame shows its value for flags & 0x3F frames; flag 0x80 goes back to the first frame, 0xC0 ends */
typedef struct {
    union {
        s32 m0;
        struct { u16 field_0, field_2; } m1;
    } field_0;
    s32 field_4;
} struct_8_5;
typedef struct {
    /* 0x0 */ struct_8_5 *field_0;
    /* 0x4 */ s16 field_4;
    /* 0x6 */ s16 field_6;
} struct_8_6;

/* the stage's prop pool: 128 entries of 0x38 bytes, each run by its kind's handler and drawn with its own model */
typedef struct {
    /* 0x00 */ u16 field_0;
    /* 0x02 */ u8 field_2[2];
    /* 0x04 */ union_4 field_4[3];
    /* 0x10 */ s32 field_10[3];
    /* 0x1C */ u8 field_1C[4];
    /* 0x20 */ u8 *field_20;
    /* 0x24 */ u8 field_24[0x14];
} struct_38;

extern s16 D_8011DB2C;
extern struct_38 D_8011DB30[];
extern void (**D_80126AEC)(struct_38 *e);
extern s32 func_800D18DC(void);
extern s32 func_800D19F0(void);
extern void func_800D1754(void);
extern void func_80029444(void);
extern void func_8014607C(void);
extern void func_8001903C(void);
extern void func_80018FC8(void);
extern void func_80010DE0(void);
extern s32 func_8002AF08(void);
extern s32 func_800CFBE8(void);
extern void func_80010AE0(s32 n);
extern void func_80018450(s32 mode, s32 w);
extern void func_8001534C(s16 n, s32 x, s16 a, s16 b, u8 c, u8 d);
extern void func_800153CC(s16 n, s32 x, s16 a, s16 b, u8 c, u8 d);
extern void func_80016714(void *p, s32 size);
extern u8 *func_8001D074(s32 a, s32 b);
extern void func_8001CC3C(u8 *o, void *p, s16 x, s16 y);
extern void func_8001212C(void);
extern void func_800190AC(void);
void func_801287B8(void);
void func_80129010(void);
void func_80129CF8(void);
void func_8012956C(void);
void func_8013BC7C(s32 *p);
void func_8013BCDC(void);
void func_8013CA14(void);
void func_801379FC(void);
void func_8014FDF4(struct_18C *p);
void func_801505FC(struct_18C *p);
void func_801508B4(struct_18C *p);
void func_801627E8(void);
void func_80162B1C(void);
void func_80165CA0(void);
void func_80165E90(void);
void func_8016E95C(void);
void func_801754A8(void);
void func_8017849C(void);
struct_38 *func_8012913C(u16 kind);
struct_38 *func_801291C0(void);

void func_801285E4(void) {
    SetSpadStack();
    D_801ED344 = func_800D18DC();
    ResetSpadStack();
    func_8014607C();
    SetSpadStack();
    func_801287B8();
    ResetSpadStack();
    if (D_801ED344 != 0) {
        func_80011A3C();
    }
}

void func_80128678(void) {
    SetSpadStack();
    func_80029444();
    ResetSpadStack();
    func_8014607C();
    SetSpadStack();
    func_801287B8();
    ResetSpadStack();
    SetSpadStack();
    func_800D1754();
    ResetSpadStack();
}

void func_80128714(void) {
    SetSpadStack();
    D_801ED344 = func_800D19F0();
    ResetSpadStack();
    if (D_801ED344 == 0) {
        func_8014607C();
        SetSpadStack();
        func_801287B8();
        ResetSpadStack();
    } else {
        func_8001903C();
        func_80018FC8();
    }
}

void func_801287B8(void) {
    func_80129CF8();
    func_8017849C();
    func_8014FDF4(&D_80126B58);
    func_801505FC(&D_80126B58);
    func_801508B4(&D_80126B58);
    func_80165E90();
    func_801627E8();
    func_80162B1C();
    func_80165CA0();
    func_80129010();
    func_8013CA14();
    func_800190AC();
    func_8012956C();
    func_8016E95C();
    func_801754A8();
    {
        s32 *p = &D_801EF3F8;
        if (*p == 0) {
            func_8013BC7C(p);
        }
    }
    func_8013BCDC();
    func_801379FC();
    D_800B99DA++;
    if (D_800B9A64 != 0) {
        func_8001212C();
    }
}

s32 func_801288B0(void) {
    return func_8001ABBC(0, 0, D_800AEFD0, D_801EBC68, NULL);
}

s32 func_801288E8(void) {
    D_800C7C60.field_0 = 0x60;
    D_800C7C60.field_4 = D_800A2E20;
    return func_8001ABBC(0, 0, D_800AF558, D_801EBC68, &D_800C7C60);
}

s32 func_80128940(void) {
    D_800C7C60.field_0 = 0x5E;
    D_800C7C60.field_4 = D_800A2E20;
    return func_8001ABBC(0, 0, D_800AF560, D_801EBC68, &D_800C7C60);
}

s32 func_80128998(void) {
    D_800C7C60.field_0 = 0xD;
    D_800C7C60.field_4 = D_800A2E20;
    return func_8001ABBC(0, 0, D_800AECB0, D_801EBC68, &D_800C7C60);
}

s32 func_801289F0(void) {
    return func_8001ABBC(0, 0, D_800AECB8, D_801EBC68, NULL);
}

void func_80128A28(void) {
    s16 r;
    switch (D_800B99F6) {
    case 1:
        D_8018D4D8();
    case 0:
        func_80011C10();
        break;
    case 2:
        r = D_8018D4DC();
        if (r != 0) {
            if (r < 0) {
                func_80011B7C(0);
                D_800B9A00 = 1;
            } else {
                func_80010DE0();
            }
        }
        break;
    }
}

void func_80128AF4(void) {
    switch (D_800B99F6) {
    case 0:
        D_801ED340 = func_8002AF08();
        func_80011C10();
        break;
    case 1:
        D_8018D4E4();
        func_80011C10();
        break;
    case 2:
        if (D_8018D4E8() != 0) {
            if (D_801ED340 == 1) {
                if (func_800CFBE8() != 0) {
                    func_800CFBBC();
                    func_80011B7C(0x13);
                } else {
                    func_80011B7C(4);
                }
            } else {
                func_80010DE0();
            }
            func_8002AEF8();
        }
        break;
    }
}

void func_80128C14(void) {
    s32 n;
    switch (D_800B9A08) {
    case 0x3023:
        n = 0x4E0;
        break;
    case 0x3081:
        n = 0x420;
        break;
    case 0x3067:
        n = 0x480;
        break;
    default:
        n = 0x3E0;
        break;
    case 0x3093:
    case 0x30A5:
        n = 0xFFB;
        break;
    }
    func_80010AE0(n);
}

s32 func_80128C98(s32 i) {
    s16 n = D_8018D7BC[i];
    if (n < 0) {
        return 1;
    }
    return func_8001ABBC(0, 0, D_800AE830[n], D_801EBC68, NULL);
}

s32 func_80128CFC(s32 i) {
    s16 n = D_8018D7CC[i];
    if (n < 0) {
        return 1;
    }
    return func_8001ABBC(0, 0, D_800AE830[n], D_801EBC68, NULL);
}

void func_80128D60(s32 mode, struct_8_6 *p, struct_8_5 *f) {
    p->field_0 = f;
    p->field_4 = 0;
    p->field_6 = f->field_4 & 0x3F;
    if (mode != 0) {
        func_80018450(mode, f->field_0.m0);
    } else {
        func_800183E0(f->field_0.m0);
    }
}

s32 func_80128DB4(s32 mode, struct_8_6 *p) {
    struct_8_5 *frames = p->field_0;
    s32 flags;
    if (p->field_6 == 0) {
        return 1;
    }
    if (--p->field_6 > 0) {
        return 0;
    }
    flags = frames[p->field_4].field_4;
    if ((flags & 0xC0) == 0xC0) {
        p->field_6 = 0;
        return 1;
    }
    if (flags & 0x80) {
        p->field_4 = 0;
    } else {
        p->field_4++;
    }
    p->field_6 = frames[p->field_4].field_4 & 0x3F;
    if (mode != 0) {
        func_80018450(mode, frames[p->field_4].field_0.m0);
    } else {
        func_800183E0(frames[p->field_4].field_0.m0);
    }
    return 0;
}

void func_80128EA8(u8 *o, struct_8_6 *p, struct_8_5 *f) {
    p->field_0 = f;
    p->field_4 = 0;
    p->field_6 = f->field_4 & 0x3F;
    *(u16 *)(o + 0x28) = f->field_0.m1.field_0;
    *(u16 *)(o + 0x2A) = f->field_0.m1.field_2;
}

s32 func_80128ED8(u8 *o, struct_8_6 *p) {
    struct_8_5 *frames = p->field_0;
    s32 flags;
    if (p->field_6 == 0) {
        return 1;
    }
    if (--p->field_6 <= 0) {
        flags = frames[p->field_4].field_4;
        if ((flags & 0xC0) == 0xC0) {
            p->field_6 = 0;
            return 1;
        }
        if (flags & 0x80) {
            p->field_4 = 0;
        } else {
            p->field_4++;
        }
        p->field_6 = frames[p->field_4].field_4 & 0x3F;
        *(u16 *)(o + 0x28) = frames[p->field_4].field_0.m1.field_0;
        *(u16 *)(o + 0x2A) = frames[p->field_4].field_0.m1.field_2;
    }
    return 0;
}

void func_80128FAC(u16 *n) {
    func_8001534C(4, (s32)D_801EBC6C, 0x80, 0x90, 0, 0);
    func_800153CC(5, *n, 0xA8, 0x90, 0x40, 0);
}

void func_80129010(void) {
    struct_38 *e = D_8011DB30;
    s32 i;
    if (D_8011DB2C != 0) {
        for (i = 0; i < 0x80; i++, e++) {
            if (e->field_0 != 0) {
                D_80126AEC[e->field_0](e);
                if (e->field_20 != NULL) {
                    *(u16 *)(e->field_20 + 8) = e->field_4[0].m1.field_2;
                    *(u16 *)(e->field_20 + 0xA) = e->field_4[1].m1.field_2;
                    *(u16 *)(e->field_20 + 0xC) = e->field_4[2].m1.field_2;
                }
            }
        }
    }
}

struct_38 *func_801290DC(u16 kind, u16 *pos) {
    struct_38 *e = func_8012913C(kind);
    if (e != NULL) {
        e->field_4[0].m1.field_2 = pos[0];
        e->field_4[1].m1.field_2 = pos[1];
        e->field_4[2].m1.field_2 = pos[2];
    }
    return e;
}

struct_38 *func_8012913C(u16 kind) {
    u8 *m = func_8001D074(0x7E, 0x100);
    struct_38 *e;
    if (m == NULL) {
        return NULL;
    }
    e = func_801291C0();
    if (e == NULL) {
        return NULL;
    }
    e->field_0 = kind;
    e->field_20 = m;
    func_8001CC3C(m, 0, 0, 0);
    return e;
}

struct_38 *func_801291C0(void) {
    struct_38 *e = D_8011DB30;
    s32 i;
    for (i = 0; i < 0x80; i++, e++) {
        if (e->field_0 == 0) {
            func_80016714(e, sizeof(struct_38));
            return e;
        }
    }
    return NULL;
}

/* a background layer (two of them, at 0x800B9A78): a cell map and its GsBG. pri is the OT priority, or 0x7FFF off,
   0x7FFE a two-colour gradient, 0x7FFD the three-band sky gradient */
typedef struct {
    /* 0x00 */ GsMAP field_0;
    /* 0x10 */ GsBG field_10;
    /* 0x34 */ u16 field_34;
    /* 0x36 */ u16 field_36;        /* nonzero: drawn with GsSortBg, else GsSortFastBg */
    /* 0x38 */ u16 field_38;
    /* 0x3A */ s16 field_3A;
    /* 0x3C */ u16 field_3C;
    /* 0x3E */ s16 field_3E;
    /* 0x40 */ s16 field_40, field_42;
    /* 0x44 */ u8 field_44[6];          /* a gradient's two colours, scaled by the stage's fade (func_801299C8) */
    /* 0x4A */ u8 field_4A[2];
    /* 0x4C */ u8 *field_4C;           /* the cell file: GsCELLs from +8 */
    /* 0x50 */ u8 *field_50;         /* the map file: ncellw, ncellh, cellw, cellh at +4, the cell index from +8 */
} struct_54; /* size 0x54 */
extern struct_54 D_800B9A78[2];
extern s16 D_80114EE0;          /* the layers are on */
extern s32 D_8005128C;
extern u8 D_801ED348[4][4];     /* the gradients' colours (r, g, b) */
extern u8 D_801EF3F2;           /* the stage's fade: red, green, blue */
extern u8 D_801EF2F2;
extern u8 D_801EF2C8;
extern u8 D_801EF3C0;
extern GsOT D_800A6518[2];
extern void func_80015B6C(s16 x, s16 y, s16 w, s16 h, u8 r0, u8 g0, u8 b0, u8 r1, u8 g1, u8 b1);
void func_80129248(s16 on);
void func_801292C8(struct_38 *e);
void func_801298F4(struct_54 *l);
void func_801299C8(s16 on, s16 kind, struct_54 *l);

void func_80129220(void) {
    func_80129258();
    func_80129248(1);
}

void func_80129248(s16 on) {
    D_8011DB2C = on;
}

void func_80129258(void) {
    struct_38 *e = D_8011DB30;
    s32 i;
    for (i = 0; i < 0x80; i++, e++) {
        e->field_0 = 0;
    }
}

void func_8012927C(void) {
    struct_38 *e = D_8011DB30;
    s32 i;
    for (i = 0; i < 0x80; i++, e++) {
        func_801292C8(e);
    }
}

void func_801292C8(struct_38 *e) {
    if (e->field_20 != NULL) {
        func_80016714(e->field_20, *(u16 *)e->field_20 == 1 ? 0x84 : 0x38);
    }
    e->field_0 = 0;
}

void func_8012931C(struct_38 *e) {
    e->field_4[0].m0 += e->field_10[0];
    e->field_4[1].m0 += e->field_10[1];
    e->field_4[2].m0 += e->field_10[2];
}

void func_80129350(struct_38 *e, struct_38 *from) {
    e->field_4[0].m0 = from->field_4[0].m0;
    e->field_4[1].m0 = from->field_4[1].m0;
    e->field_4[2].m0 = from->field_4[2].m0;
}

void func_80129374(struct_38 *e, struct_38 *from) {
    e->field_10[0] = from->field_10[0];
    e->field_10[1] = from->field_10[1];
    e->field_10[2] = from->field_10[2];
}

void func_80129398(void) {
    s32 i;
    for (i = 0; i < 2; i++) {
        D_800B9A78[i].field_34 = 0x7FFF;
        D_800B9A78[i].field_36 = 0;
        D_800B9A78[i].field_38 = 0xFFFF;
        D_800B9A78[i].field_3A = 0;
        D_800B9A78[i].field_3C = 0x140;
        D_800B9A78[i].field_3E = 0xEE;
        D_800B9A78[i].field_40 = 0;
        D_800B9A78[i].field_42 = 0;
    }
}

void func_80129428(void) {
    D_80114EE0 = 1;
}

void func_8012943C(void) {
    D_80114EE0 = 0;
}

void func_8012944C(void) {
    struct_54 *l;
    s32 i;
    s32 *p = &D_8005128C;
    if (*p == 0x34420200) {
        *p = 0;
    }
    D_80114EE0 = 1;
    for (l = D_800B9A78, i = 0; i < 2; l++, i++) {
        switch (l->field_34) {
        case 0x7FFF:
            break;
        case 0x7FFD:
            if (i == 0) {
                func_801299C8(1, 1, l);
            }
            break;
        case 0x7FFE:
            func_801299C8(1, i * 2, l);
            break;
        default:
            func_801298F4(l);
            l->field_10.scrolly = l->field_42 + l->field_3A;
            func_801299C8(1, i + 3, l);
            break;
        }
    }
}

void func_8012956C(void) {
    GsMAP *map = (GsMAP *)0x1F800000;
    GsBG *bg = (GsBG *)0x1F800010;
    register struct_A444 *w = &D_800AF630;
    struct_54 *l;
    s32 i;
    if (D_80114EE0 != 0) {
        for (l = D_800B9A78, i = 0; i < 2; l++, i++) {
            switch (l->field_34) {
            case 0x7FFF:
                break;
            case 0x7FFD:
                if (i == 0) {
                    func_801299C8(D_801EF3C0, 1, l);
                }
                func_80015B6C(-0xA0, -0x74, 0x140, 0x8C, D_801ED348[0][0], D_801ED348[0][1], D_801ED348[0][2],
                              D_801ED348[1][0], D_801ED348[1][1], D_801ED348[1][2]);
                func_80015B6C(-0xA0, 0x18, 0x140, 0x3C, D_801ED348[1][0], D_801ED348[1][1], D_801ED348[1][2],
                              D_801ED348[2][0], D_801ED348[2][1], D_801ED348[2][2]);
                func_80015B6C(-0xA0, 0x54, 0x140, 0x28, D_801ED348[2][0], D_801ED348[2][1], D_801ED348[2][2],
                              D_801ED348[3][0], D_801ED348[3][1], D_801ED348[3][2]);
                break;
            case 0x7FFE:
                func_801299C8(D_801EF3C0, i * 2, l);
                func_80015B6C(-0xA0, l->field_3A, 0x140, l->field_3E, D_801ED348[i * 2][0], D_801ED348[i * 2][1], D_801ED348[i * 2][2],
                              D_801ED348[i * 2 + 1][0], D_801ED348[i * 2 + 1][1], D_801ED348[i * 2 + 1][2]);
                break;
            default:
                l->field_10.scrollx = l->field_40 + l->field_38;
                l->field_10.scrolly = l->field_42 + l->field_3A;
                func_801299C8(D_801EF3C0, i + 3, l);
                *map = l->field_0;
                *bg = l->field_10;
                bg->map = map;
                if (l->field_36 == 0) {
                    GsSortFastBg(bg, &D_800A6518[w->field_A3D2], l->field_34);
                } else {
                    GsSortBg(bg, &D_800A6518[w->field_A3D2], l->field_34);
                }
                break;
            }
        }
    }
}

void func_801298F4(struct_54 *l) {
    u8 *cells;
    u8 *p;
    u8 c;
    cells = l->field_4C;
    cells += 8;
    p = l->field_50;
    p += 4;
    c = *p++;
    l->field_0.ncellw = c;
    c = *p++;
    l->field_0.ncellh = c;
    c = *p++;
    l->field_0.cellw = c;
    c = *p++;
    l->field_0.cellh = c;
    l->field_0.base = cells;
    l->field_0.index = (u16 *)p;
    l->field_10.attribute = ((cells[6] >> 7) << 24) | 0x08000000;
    l->field_10.x = l->field_38;
    l->field_10.y = l->field_3A;
    l->field_10.w = l->field_3C;
    l->field_10.h = l->field_3E;
    if (D_800AF630.field_A3C0 == 0) {
        l->field_10.scrollx = l->field_10.scrolly = 0;
    }
    l->field_10.r = l->field_10.g = l->field_10.b = 0x80;
    l->field_10.mx = 0xA0;
    l->field_10.my = 0x78;
    l->field_10.map = &l->field_0;
    l->field_10.scalex = l->field_10.scaley = 0x1000;
    l->field_10.rotate = 0;
}

/* the layers' colours under the stage's fade: kind 1 the sky's four, 0 and 2 a gradient's two (from the layer),
   3 and 4 a map layer's tint */
void func_801299C8(s16 on, s16 kind, struct_54 *l) {
    s32 r, g, b;
    if (on != 0) {
        switch (kind) {
        case 1:
            r = D_801EF3F2;
            g = D_801EF2F2;
            b = D_801EF2C8;
            D_801ED348[0][0] = (r * 10) >> 4;
            D_801ED348[0][1] = (g * 128) >> 4;
            D_801ED348[0][2] = (b * 255) >> 4;
            D_801ED348[1][0] = (r * 143) >> 4;
            D_801ED348[1][1] = (g * 200) >> 4;
            D_801ED348[1][2] = (b * 255) >> 4;
            D_801ED348[2][0] = (r * 255) >> 4;
            D_801ED348[2][1] = (g * 255) >> 4;
            D_801ED348[2][2] = (b * 255) >> 4;
            D_801ED348[3][0] = (r * 143) >> 4;
            D_801ED348[3][1] = (g * 255) >> 4;
            D_801ED348[3][2] = (b * 180) >> 4;
            break;
        case 0:
        case 2:
            D_801ED348[kind][0] = (l->field_44[0] * D_801EF3F2) >> 4;
            D_801ED348[kind][1] = (l->field_44[1] * D_801EF2F2) >> 4;
            D_801ED348[kind][2] = (l->field_44[2] * D_801EF2C8) >> 4;
            D_801ED348[kind + 1][0] = (l->field_44[3] * D_801EF3F2) >> 4;
            D_801ED348[kind + 1][1] = (l->field_44[4] * D_801EF2F2) >> 4;
            D_801ED348[kind + 1][2] = (l->field_44[5] * D_801EF2C8) >> 4;
            break;
        case 3:
        case 4:
            l->field_10.r = D_801EF3F2 * 8;
            l->field_10.g = D_801EF2F2 * 8;
            l->field_10.b = D_801EF2C8 * 8;
            break;
        }
    }
}

typedef struct { s16 field_0, field_2, field_4; } struct_6;
/* a camera (0xA4 bytes): the main one at 0x80126948, three alternates from 0x80126E60 (D_801150D6 1-3 picks one),
   three saved from 0x80114EE8, one kept across a map change at 0x801201F8, and the blend at 0x80126DB8 that eases
   toward the picked one. The pairs from +0x08 are (current, target); func_8012A094 snaps current to target. */
typedef struct struct_A4 {
    /* 0x00 */ void (*field_0)(struct struct_A4 *c);
    /* 0x04 */ u8 field_4;
    /* 0x05 */ u8 field_5[3];
    /* 0x08 */ s32 field_8;            /* passed to GsSetProjection every frame (0x12C at boot) */
    /* 0x0C */ s32 field_C;
    /* 0x10 */ s32 field_10;
    /* 0x14 */ s32 field_14;
    /* 0x18 */ SVECTOR field_18;
    /* 0x20 */ SVECTOR field_20;
    /* 0x28 */ struct_6 field_28;
    /* 0x2E */ struct_6 field_2E;
    /* 0x34 */ u8 field_34[8];
    /* 0x3C */ GsRVIEW2 field_3C;       /* the view before the offsets */
    /* 0x5C */ GsRVIEW2 field_5C;      /* base + offset, given to GsSetRefView2L */
    /* 0x7C */ s32 field_7C[7];
    /* 0x98 */ u8 field_98[4];
    /* 0x9C */ s32 field_9C;
    /* 0xA0 */ s16 field_A0;
    /* 0xA2 */ s16 field_A2;
} struct_A4; /* size 0xA4 */
extern struct_A4 D_80126948;
extern struct_A4 D_80126DB8;
extern struct_A4 D_80126E60[3];
extern struct_A4 D_80114EE8[3];
extern struct_A4 D_801201F8;
extern struct_A4 *D_801151D4;      /* the camera used this frame */
extern u8 D_801150D6;           /* 0 the main camera, 1-3 an alternate */
extern u8 D_80127504;           /* frames left of easing the blend */
extern u8 D_801152C0;           /* the height follow is limited (func_8012A304) */
extern s16 D_801152C2;
extern s16 D_80127080;
extern s16 D_80126940;          /* the point the camera follows */
extern s16 D_80126942;
extern s16 D_80126944;
extern MATRIX D_800AE688;       /* the world-to-screen matrix GsSetRefView2L sets */
extern void func_800144D4(void);
extern void GsSetProjection(s32 proj);
extern s16 func_80012F74(s16 a, s16 b, s16 c, s16 d);
void func_8012A018(void (*update)(struct_A4 *c), u8 mode);
void func_8012A048(struct_A4 *c, void (*update)(struct_A4 *c), u8 mode);
void func_8012A100(u8 n);
void func_8012A328(void);

void func_80129C40(s32 a) {
    func_80016714(&D_80126DB8, sizeof(struct_A4));
    func_80016714(&D_80126948, sizeof(struct_A4));
    func_80016714(&D_80114EE8[0], sizeof(struct_A4));
    func_80016714(&D_80114EE8[1], sizeof(struct_A4));
    func_80016714(&D_80114EE8[2], sizeof(struct_A4));
    func_80016714(&D_80126E60[0], sizeof(struct_A4));
    func_80016714(&D_80126E60[1], sizeof(struct_A4));
    func_80016714(&D_80126E60[2], sizeof(struct_A4));
    D_801150D6 = 0;
    D_801152C0 = 0;
    D_80127504 = 0;
    func_800144D4();
}

void func_80129CF8(void) {
    register struct_A444 *w;
    struct_A4 *b;
    struct_A4 *c;
    MATRIX unused;                  /* the original's frame has room for one */
    func_8012A328();
    w = &D_800AF630;
    b = &D_80126DB8;
    if (D_801150D6 == 1) {
        c = &D_80126E60[0];
    } else if (D_801150D6 == 2) {
        c = &D_80126E60[1];
    } else if (D_801150D6 == 3) {
        c = &D_80126E60[2];
    } else {
        c = &D_80126948;
    }
    if (c->field_0 != NULL) {
        c->field_0(c);
    }
    GsSetProjection(c->field_8);
    if (D_80127504 != 0) {
        b->field_3C.vpx = func_80012F74(b->field_3C.vpx, c->field_3C.vpx, 2, 1);
        b->field_3C.vpy = func_80012F74(b->field_3C.vpy, c->field_3C.vpy, 2, 1);
        b->field_3C.vpz = func_80012F74(b->field_3C.vpz, c->field_3C.vpz, 2, 1);
        b->field_3C.vrx = func_80012F74(b->field_3C.vrx, c->field_3C.vrx, 2, 1);
        b->field_3C.vry = func_80012F74(b->field_3C.vry, c->field_3C.vry, 2, 1);
        b->field_3C.vrz = func_80012F74(b->field_3C.vrz, c->field_3C.vrz, 2, 1);
        b->field_3C.rz = func_80012F74(b->field_3C.rz, c->field_3C.rz, 2, 1);
        D_80127504--;
    } else {
        b->field_3C.vpx = c->field_3C.vpx;
        b->field_3C.vpy = c->field_3C.vpy;
        b->field_3C.vpz = c->field_3C.vpz;
        b->field_3C.vrx = c->field_3C.vrx;
        b->field_3C.vry = c->field_3C.vry;
        b->field_3C.vrz = c->field_3C.vrz;
        b->field_3C.rz = c->field_3C.rz;
    }
    c->field_5C.vpx = b->field_3C.vpx + c->field_7C[0];
    c->field_5C.vpy = b->field_3C.vpy + c->field_7C[1];
    c->field_5C.vpz = b->field_3C.vpz + c->field_7C[2];
    c->field_5C.vrx = b->field_3C.vrx + c->field_7C[3];
    c->field_5C.vry = b->field_3C.vry + c->field_7C[4];
    c->field_5C.vrz = b->field_3C.vrz + c->field_7C[5];
    c->field_5C.rz = b->field_3C.rz + c->field_7C[6];
    c->field_5C.super = c->field_3C.super;
    GsSetRefView2L(&c->field_5C);
    w->field_18 = D_800AE688;
    D_801151D4 = c;
}

void func_80129FF4(void) {
    func_8012A018(0, 0);
}

void func_8012A018(void (*update)(struct_A4 *c), u8 mode) {
    func_8012A048(&D_80126948, update, mode);
}

void func_8012A048(struct_A4 *c, void (*update)(struct_A4 *c), u8 mode) {
    c->field_0 = update;
    c->field_4 = mode;
    c->field_9C = 0;
    c->field_A0 = 0;
    c->field_A2 = 0;
    D_80126940 = D_80126B58.field_4[0].m1.field_2;
    D_80126942 = D_80126B58.field_4[1].m1.field_2;
    D_80126944 = D_80126B58.field_4[2].m1.field_2;
}

void func_8012A094(struct_A4 *c) {
    c->field_8 = c->field_C;
    c->field_10 = c->field_14;
    c->field_18 = c->field_20;
    c->field_28.field_0 = c->field_2E.field_0;
    c->field_28.field_2 = c->field_2E.field_2;
    c->field_28.field_4 = c->field_2E.field_4;
}

void func_8012A0E0(void) {
    func_8012A100(0);
}

void func_8012A100(u8 n) {
    D_801150D6 = n;
}

void func_8012A110(void) {
    D_801201F8.field_8 = D_801201F8.field_C = 0x1F4;
    D_801201F8.field_10 = D_801201F8.field_14 = 0x5DC;
    D_801201F8.field_18.vx = D_801201F8.field_20.vx = 0x238;
    D_801201F8.field_18.vy = D_801201F8.field_20.vy = 0;
    D_801201F8.field_18.vz = D_801201F8.field_20.vz = 0;
    D_801201F8.field_28.field_0 = D_801201F8.field_2E.field_0 = 0;
    D_801201F8.field_28.field_2 = D_801201F8.field_2E.field_2 = 0;
    D_801201F8.field_28.field_4 = D_801201F8.field_2E.field_4 = 0;
    D_801201F8.field_9C = 0;
    D_801201F8.field_A0 = 0;
    D_801201F8.field_A2 = 0;
}

void func_8012A1BC(void) {
    D_80126948.field_8 = D_801201F8.field_8;
    D_80126948.field_C = D_801201F8.field_C;
    D_80126948.field_10 = D_801201F8.field_10;
    D_80126948.field_14 = D_801201F8.field_14;
    D_80126948.field_18 = D_801201F8.field_18;
    D_80126948.field_20 = D_801201F8.field_20;
    D_80126948.field_28.field_0 = D_801201F8.field_28.field_0;
    D_80126948.field_28.field_2 = D_801201F8.field_28.field_2;
    D_80126948.field_28.field_4 = D_801201F8.field_28.field_4;
    D_80126948.field_2E.field_0 = D_801201F8.field_2E.field_0;
    D_80126948.field_2E.field_2 = D_801201F8.field_2E.field_2;
    D_80126948.field_2E.field_4 = D_801201F8.field_2E.field_4;
    D_80126948.field_9C = D_801201F8.field_9C;
    D_80126948.field_A0 = D_801201F8.field_A0;
    D_80126948.field_A2 = D_801201F8.field_A2;
}

void func_8012A2F4(void) {
    D_801152C0 = 0;
}

void func_8012A304(s16 y, s16 range) {
    D_801152C0 = 1;
    D_80127080 = y;
    D_801152C2 = range;
}

/* the followed point: Musashi's, its height eased; with a limit set (func_8012A304) the height stays at the given
   one while Musashi is within range of it */
void func_8012A328(void) {
    struct_18C *m = &D_80126B58;
    s32 d;
    if (D_801152C0 != 0) {
        d = D_80127080 - D_80126B58.field_154[1];
        if ((d < 0 ? D_80126B58.field_154[1] - D_80127080 : d) > D_801152C2) {
            s16 *v = &D_80126942;
            *v = func_80012F74(*v, m->field_154[1], 4, 1);
        } else {
            s16 *v = &D_80126942;
            *v = func_80012F74(*v, D_80127080, 4, 1);
        }
    } else {
        s16 *v = &D_80126942;
        *v = func_80012F74(*v, D_80126B58.field_154[1], 4, 1);
    }
    D_80126940 = m->field_154[0];
    D_80126944 = m->field_154[2];
}

void func_8012A418(void) {
    D_80114EE8[0] = *D_801151D4;
}

extern s32 SquareRoot0(s32 a);
extern s32 ratan2(s32 y, s32 x);
extern struct_10C D_801202A0[]; /* the stage's actors (96) */
extern s16 D_801270C0;          /* 1: step every actor's animation */
void func_8012A598(void);
void func_8012A62C(u8 frames);
s16 func_8012A6D0(SVECTOR *a, SVECTOR *b);
s16 func_8012A79C(SVECTOR *a, SVECTOR *b);
void func_8012A7D4(SVECTOR *vp, SVECTOR *vr);
void func_8012A988(struct_10C *a);
void func_8012AAAC(struct_10C *a);
s32 func_8012ACE0(struct_10C *obj);

void func_8012A464(void) {
    D_80114EE8[0].field_3C = D_801151D4->field_3C;
}

/* back to the saved camera, eased from the current one over 48 frames */
void func_8012A4BC(void) {
    D_80126DB8 = *D_801151D4;
    *D_801151D4 = D_80114EE8[0];
    D_80127504 = 0x30;
}

void func_8012A568(void (*f)(void)) {
    func_8012A598();
    f();
}

/* start easing from the current camera, over 48 frames */
void func_8012A598(void) {
    D_80126DB8 = *D_801151D4;
    D_80127504 = 0x30;
}

void func_8012A5F8(void (*f)(void), u8 frames) {
    func_8012A62C(frames);
    f();
}

void func_8012A62C(u8 frames) {
    D_80126DB8 = *D_801151D4;
    D_80127504 = frames;
}

/* the camera's pitch */
s16 func_8012A68C(void) {
    SVECTOR vp;
    SVECTOR vr;
    func_8012A7D4(&vp, &vr);
    return func_8012A6D0(&vp, &vr);
}

s16 func_8012A6D0(SVECTOR *a, SVECTOR *b) {
    s32 dz = a->vz - b->vz;
    s32 dx = a->vx - b->vx;
    s16 d = SquareRoot0(dz * dz + dx * dx);
    return ratan2(a->vy - b->vy, d);
}

/* the camera's heading */
s16 func_8012A758(void) {
    SVECTOR vp;
    SVECTOR vr;
    func_8012A7D4(&vp, &vr);
    return func_8012A79C(&vp, &vr);
}

s16 func_8012A79C(SVECTOR *a, SVECTOR *b) {
    return ratan2(a->vx - b->vx, a->vz - b->vz);
}

void func_8012A7D4(SVECTOR *vp, SVECTOR *vr) {
    vp->vx = D_801151D4->field_3C.vpx;
    vp->vy = D_801151D4->field_3C.vpy;
    vp->vz = D_801151D4->field_3C.vpz;
    vr->vx = D_801151D4->field_3C.vrx;
    vr->vy = D_801151D4->field_3C.vry;
    vr->vz = D_801151D4->field_3C.vrz;
}

void func_8012A828(struct_10C *a, struct_8_2 *script) {
    a->field_90 = script;
    a->field_94 = 0;
    a->field_9C = NULL;
    a->field_9A = 0;
    a->field_72 &= 0xF9FF;
    func_8012AAAC(a);
}

/* SetScriptAtEnd: the same, from the last entry, playing backwards (0x200) */
void func_8012A860(struct_10C *a, struct_8_2 *script) {
    a->field_90 = script;
    a->field_94 = func_8012ACE0(a) - 1;
    a->field_9C = NULL;
    a->field_9A = 0;
    a->field_72 |= 0x200;
    func_8012AAAC(a);
}

void func_8012A8B0(struct_10C *a, struct_8_2 *script) {
    a->field_90 = script;
    a->field_94 = 0;
    a->field_9C = NULL;
    a->field_9A = 0;
    a->field_72 &= 0xF9FF;
    func_8012AAAC(a);
}

void func_8012A8E8(struct_10C *a) {
    func_8012AAAC(a);
}

/* every actor's animation, once a frame: those with flag 0x1000, or all of them while D_801270C0 is 1 */
void func_8012A908(void) {
    struct_10C *a = D_801202A0;
    s32 i;
    for (i = 0; i < 0x60; i++, a++) {
        if (D_801270C0 == 1 || (a->field_72 & 0x1000)) {
            func_8012A988(a);
        }
    }
}

/* one actor's animation frame: count down the pose, then move to the next entry (forwards, backwards for 0x200, or
   back to the start for 0x400) and show it */
void func_8012A988(struct_10C *a) {
    s32 n;
    a->field_72 &= 0x9FFF;
    if (a->field_0 == 0) {
        return;
    }
    if (a->field_C1 == 0x11) {
        return;
    }
    if (a->field_98 == 0) {
        return;
    }
    if (--a->field_98 > 0) {
        return;
    }
    if (a->field_90 == NULL) {
        return;
    }
    if (a->field_72 & 0x400) {
        if (--a->field_94 < 0) {
            a->field_94 = 1;
            a->field_72 &= 0xFBFF;
        }
    } else if (a->field_72 & 0x200) {
        if (--a->field_94 < 0) {
            n = func_8012ACE0(a);
            if (a->field_90[n].field_4 != -1) {
                a->field_94 = 0;
                a->field_98 = 0;
                return;
            }
            a->field_94 = n - 1;
        }
    } else {
        a->field_94++;
    }
    func_8012AAAC(a);
}

extern struct_8_2 D_8018D838[];  /* the default script (an idle) */

/* one step of an actor's animation script: show the entry's pose for its frames, or run its command
   (docs/animation_controller.md) */
void func_8012AAAC(struct_10C *a) {
    struct_8_2 *e;
    struct_8_2 *old;
    struct_8_2 *r;
    s32 n;
    a->field_72 &= 0xBFFF;
    e = &a->field_90[a->field_94];
    if (e->field_4 < 0) {
        switch (e->field_4) {
        case -2:
            r = a->field_9C;
            if (r == NULL) {
                a->field_98 = 0;
                break;
            }
            goto ret;
        case -1:
            r = a->field_9C;
            if (r != NULL) {
            ret:
                a->field_90 = r;
                a->field_94 = a->field_9A;
                a->field_9C = NULL;
                a->field_9A = 0;
                func_8012AAAC(a);
            } else {
                a->field_94 = 0;
                func_8012AAAC(a);
                a->field_72 |= 0x4000;
            }
            break;
        case -4:
            a->field_90 = e->field_0;
            a->field_94 = 0;
            a->field_9C = NULL;
            a->field_9A = 0;
            a->field_72 &= 0xF9FF;
            func_8012AAAC(a);
            break;
        case -3:
            n = ++a->field_94;
            if (a->field_9C != NULL) {
                func_8012AAAC(a);
            } else {
                old = a->field_90;
                a->field_90 = e->field_0;
                a->field_94 = 0;
                a->field_9C = NULL;
                a->field_9A = 0;
                a->field_72 &= 0xF9FF;
                func_8012AAAC(a);
                a->field_9C = old;
                a->field_9A = n;
            }
            break;
        case -50:
            a->field_94++;
            func_8012AAAC(a);
            a->field_72 |= 0x2000;
            break;
        case -5:
            a->field_72 |= 0x400;
            a->field_94--;
            func_8012AAAC(a);
            break;
        }
    } else {
        a->field_20->field_20 = e->field_0;
        a->field_98 = e->field_4;
    }
}

/* back to the default script */
void func_8012ACA0(struct_10C *a) {
    a->field_90 = D_8018D838;
    a->field_94 = 0;
    a->field_9C = NULL;
    a->field_9A = 0;
    a->field_72 &= 0xF9FF;
    func_8012AAAC(a);
}

/* The number of entries in the actor's animation script before its first stop (-2), end (-1) or 0 */
s32 func_8012ACE0(struct_10C *obj) {
    s32 i;
    i = 0;
    while (1) {
        switch (obj->field_90[i].field_4) {
        case -2:
        case -1:
        case 0:
            return i;
        case -50:
        case -3:
        case -4:
            break;
        }
        i++;
    }
}

void func_8012AD44(struct_10C *a, u16 sub) {
    a->field_2 = sub;
    a->field_34 = 0;
}

void func_8012AD50(struct_10C *a) {
    a->field_34 = 0;
    a->field_2++;
}

void func_8012AD64(struct_10C *a, u16 n) {
    a->field_34 = n;
}

void func_8012AD6C(struct_10C *a) {
    a->field_34++;
}

inline void func_8012AD80(struct_60 *m) {
    m->field_10[0] += m->field_44[0];
    m->field_10[1] += m->field_44[1];
    m->field_10[2] += m->field_44[2];
    m->field_4[0].m0 += m->field_10[0];
    m->field_4[1].m0 += m->field_10[1];
    m->field_4[2].m0 += m->field_10[2];
}

void func_8012ADE4(struct_60 *m) {
    m->field_4[0].m0 = m->field_38[0].m0;
    m->field_4[1].m0 = m->field_38[1].m0;
    m->field_4[2].m0 = m->field_38[2].m0;
}

/* two s16 packed in a word, x low and y high */
typedef union {
    s32 m0;
    struct { s16 field_0, field_2; } m1;
} union_4_2;
extern s32 func_80135888(struct_84 *model, void *hitData, SVECTOR *from, SVECTOR *to);
extern s32 func_80134510(SVECTOR *p);
extern s32 func_80013478(s16 *a, s16 *b);
extern s32 func_800132BC(s16 *a, s16 *b);
extern s32 rsin(s32 a);
extern s32 rcos(s32 a);
extern void ApplyMatrixLV(MATRIX *m, VECTOR *v0, VECTOR *v1);

/* undo the move if the way from the last position to here crosses Musashi's model and he is nearer the last position */
s32 func_8012AE00(struct_60 *m) {
    struct_18C *p = &D_80126B58;
    SVECTOR from;
    SVECTOR to;
    SVECTOR hit;
    from.vx = m->field_38[0].m1.field_2;
    from.vy = m->field_38[1].m1.field_2;
    from.vz = m->field_38[2].m1.field_2;
    to.vx = m->field_4[0].m1.field_2;
    to.vy = m->field_4[1].m1.field_2;
    to.vz = m->field_4[2].m1.field_2;
    hit = to;
    if (func_80135888(p->field_20, p->field_38, &from, &hit) == 0) {
        return 0;
    }
    if (func_80013478((s16 *)&p->field_4, &from.vx) < func_80013478((s16 *)&p->field_4, &to.vx)) {
        return 0;
    }
    m->field_4[0].m0 = m->field_38[0].m0;
    m->field_4[1].m0 = m->field_38[1].m0;
    m->field_4[2].m0 = m->field_38[2].m0;
    return 1;
}

/* the same against another object's model */
s32 func_8012AF0C(struct_60 *m, struct_60 *o) {
    SVECTOR from;
    SVECTOR to;
    SVECTOR hit;
    SVECTOR at;
    from.vx = m->field_38[0].m1.field_2;
    from.vy = m->field_38[1].m1.field_2;
    from.vz = m->field_38[2].m1.field_2;
    to.vx = m->field_4[0].m1.field_2;
    to.vy = m->field_4[1].m1.field_2;
    to.vz = m->field_4[2].m1.field_2;
    hit = to;
    if (func_80135888(o->field_20, o->field_58, &from, &hit) == 0) {
        return 0;
    }
    at.vx = o->field_4[0].m1.field_2;
    at.vy = o->field_4[1].m1.field_2;
    at.vz = o->field_4[2].m1.field_2;
    if (func_800132BC(&at.vx, &from.vx) < func_800132BC(&at.vx, &to.vx)) {
        return 0;
    }
    m->field_4[0].m0 = m->field_38[0].m0;
    m->field_4[1].m0 = m->field_38[1].m0;
    m->field_4[2].m0 = m->field_38[2].m0;
    return 1;
}

s32 func_8012B030(struct_60 *m) {
    SVECTOR p;
    p.vx = m->field_4[0].m1.field_2;
    p.vy = m->field_4[1].m1.field_2;
    p.vz = m->field_4[2].m1.field_2;
    if (func_80134510(&p) == 0) {
        return 0;
    }
    m->field_4[0].m1.field_2 = p.vx;
    m->field_4[1].m1.field_2 = p.vy;
    m->field_4[2].m1.field_2 = p.vz;
    m->field_4[0].m1.field_0 = m->field_4[1].m1.field_0 = m->field_4[2].m1.field_0 = 0;
    return 1;
}

/* a 2D vector of length len at an angle (4096 a turn) */
union_4_2 *func_8012B0B4(union_4_2 *out, s32 angle, s32 len) {
    union_4_2 v;
    angle = (angle - 0x400) & 0xFFF;
    v.m1.field_0 = (rcos(angle) * len) >> 12;
    v.m1.field_2 = (rsin(angle) * -len) >> 12;
    *out = v;
    return out;
}

/* velocity from a vector in the model's frame */
void func_8012B14C(struct_60 *m, VECTOR *v) {
    ApplyMatrixLV((MATRIX *)&m->field_20->field_30.field_4, v, (VECTOR *)m->field_10);
}

/* velocity: straight ahead in the model's frame */
void func_8012B178(struct_60 *m, s32 speed) {
    VECTOR v;
    v.vz = speed;
    v.vx = v.vy = 0;
    ApplyMatrixLV((MATRIX *)&m->field_20->field_30.field_4, &v, (VECTOR *)m->field_10);
}

/* the horizontal velocity from a vector in the model's frame */
void func_8012B1B4(struct_60 *m, VECTOR *v) {
    VECTOR w;
    ApplyMatrixLV((MATRIX *)&m->field_20->field_30.field_4, v, &w);
    m->field_10[0] = w.vx;
    m->field_10[2] = w.vz;
}

void func_8012B200(struct_60 *m) {
    m->field_10[0] = m->field_10[1] = m->field_10[2] = 0;
    m->field_44[0] = m->field_44[1] = m->field_44[2] = 0;
}

/* stop, with gravity 0.75 */
void func_8012B21C(struct_60 *m) {
    m->field_10[0] = m->field_10[1] = m->field_10[2] = 0;
    m->field_44[0] = m->field_44[2] = 0;
    m->field_44[1] = 0xC000;
}

/* stop, with gravity 1.5 */
void func_8012B23C(struct_60 *m) {
    m->field_10[0] = m->field_10[1] = m->field_10[2] = 0;
    m->field_44[0] = m->field_44[2] = 0;
    m->field_44[1] = 0x18000;
}

/* the model follows: position plus offset */
void func_8012B260(struct_60 *m) {
    struct_84 *o = m->field_20;
    o->field_30.field_4.field_14[0] = o->field_8[0] = m->field_4[0].m1.field_2 + m->field_50[0];
    o->field_30.field_4.field_14[1] = o->field_8[1] = m->field_4[1].m1.field_2 + m->field_50[1];
    o->field_30.field_4.field_14[2] = o->field_8[2] = m->field_4[2].m1.field_2 + m->field_50[2];
    o->field_2C |= 1;
}

extern MATRIX *RotMatrix(SVECTOR *r, MATRIX *m);
extern MATRIX *RotMatrixZYX(SVECTOR *r, MATRIX *m);
extern MATRIX *RotMatrixYXZ(SVECTOR *r, MATRIX *m);

/* the model's matrix from its rotation (ZYX), then the model follows (as func_8012B260) */
inline void func_8012B2CC(struct_60 *m) {
    struct_84 *o;
    if (m->field_20 != NULL) {
        RotMatrixZYX(&m->field_20->field_10, (MATRIX *)&m->field_20->field_30.field_4);
        o = m->field_20;
        o->field_30.field_4.field_14[0] = o->field_8[0] = m->field_4[0].m1.field_2 + m->field_50[0];
        o->field_30.field_4.field_14[1] = o->field_8[1] = m->field_4[1].m1.field_2 + m->field_50[1];
        o->field_30.field_4.field_14[2] = o->field_8[2] = m->field_4[2].m1.field_2 + m->field_50[2];
        o->field_2C |= 1;
    }
}

/* the same in YXZ order, then the model follows (as func_8012B260) */
void func_8012B370(struct_60 *m) {
    struct_84 *o;
    if (m->field_20 != NULL) {
        RotMatrixYXZ(&m->field_20->field_10, (MATRIX *)&m->field_20->field_30.field_4);
        o = m->field_20;
        o->field_30.field_4.field_14[0] = o->field_8[0] = m->field_4[0].m1.field_2 + m->field_50[0];
        o->field_30.field_4.field_14[1] = o->field_8[1] = m->field_4[1].m1.field_2 + m->field_50[1];
        o->field_30.field_4.field_14[2] = o->field_8[2] = m->field_4[2].m1.field_2 + m->field_50[2];
        o->field_2C |= 1;
    }
}

/* the same with RotMatrix, then the model follows (as func_8012B260) */
void func_8012B414(struct_60 *m) {
    struct_84 *o;
    if (m->field_20 != NULL) {
        RotMatrix(&m->field_20->field_10, (MATRIX *)&m->field_20->field_30.field_4);
        o = m->field_20;
        o->field_30.field_4.field_14[0] = o->field_8[0] = m->field_4[0].m1.field_2 + m->field_50[0];
        o->field_30.field_4.field_14[1] = o->field_8[1] = m->field_4[1].m1.field_2 + m->field_50[1];
        o->field_30.field_4.field_14[2] = o->field_8[2] = m->field_4[2].m1.field_2 + m->field_50[2];
        o->field_2C |= 1;
    }
}

extern void Square0(VECTOR *in, VECTOR *out);
extern s32 func_80013350(s16 *a, s16 *b);
extern s32 (*D_801274D4)(struct_60 *m);    /* replaces the range test below when set */
extern s32 D_801274E0;
s32 func_8012B608(s32 a, s32 b, s32 n);
s32 func_8012B6D4(union_4 *a, union_4 *b);
s32 func_8012B864(struct_60 *m);
s32 func_8012B8A4(struct_60 *m);
s32 func_8012BDBC(struct_60 *m, s16 range);
s32 func_8012BE98(struct_60 *m, SVECTOR *p);

extern struct_10C D_80120194[97];   /* the actor table; slot 0 is never handed out */
extern struct_84 D_800B3DF0[];       /* the end of the model pool */
extern u8 *func_8001CFDC(s32 a, s32 b);
void func_8012C218(struct_10C *a);

extern u8 D_80078EAE[];         /* nonzero: init values taken as they are (else x1.5) */
extern void func_8001C214(u8 *o, void *data);
extern void func_8001C810(u8 *o, void *data);
void func_8012CAE4(struct_10C *a);
struct_10C *func_8012C284(struct_10C *a);
struct_10C *func_8012C890(struct_14 *d, struct_10C *a, struct_10C *parent);
/* an actor's set-up record */
typedef struct {
    /* 0x0 */ s16 field_0;
    /* 0x2 */ u16 field_2;
    /* 0x4 */ void *field_4;          /* the model's data (none: no model) */
    /* 0x8 */ u32 field_8;
    /* 0xC */ u8 field_C[0x24];
    /* 0x30 */ s16 field_30;     /* 0x1000 = damage as dealt (func_8012E9C0) */
} struct_34_2;

struct_10C *func_8012C31C(void);
struct_10C *func_8012C51C(struct_14 *d, struct_10C *parent);
struct_10C *func_8012C724(struct_14 *d, struct_10C *a);

extern u8 D_80190D1C[];         /* the default init record */
extern s16 D_801270C4[];        /* the next actor id */
extern u16 D_801274E4[];        /* bit 0: the kind's set-up turned the actor down */
extern void (**D_8011DB08)(struct_10C *a);   /* the set-up handler of each kind */

extern SVECTOR D_800D3918;      /* no offset */
s32 func_8012CC88(struct_60 *m, s32 mode, SVECTOR *ofs);

void func_8012AD80(struct_60 *m);
s32 func_8012CEB0(SVECTOR *from, SVECTOR *to, s32 mode);
extern s32 func_80133784(s16 mode, SVECTOR *from, SVECTOR *to);
extern u8 *func_80010A08(s32 n);
extern void SetPolyF3(POLY_F3 *p);
extern void SetRotMatrix(MATRIX *m);
extern void SetTransMatrix(MATRIX *m);
extern s32 RotTransPers(SVECTOR *v, s32 *sxy, s32 *p, s32 *flag);
extern void AddPrim(void *ot, void *p);

extern void SetLineF2(LINE_F2 *p);
extern void RotTransSV(SVECTOR *in, SVECTOR *out, s32 *flag);
extern u8 D_8018D848[];
void func_8012D098(struct_10C *a, s32 n);
s32 func_8012D664(SVECTOR *p, s32 r, s32 x);
s32 func_8012DEB8(struct_10C *a, SVECTOR *p0, SVECTOR *p1);
s32 func_8012DF34(struct_10C *a, SVECTOR *w0, SVECTOR *w1);
void func_8012F568(s32 flags, s32 b, s32 facing, s32 v, SVECTOR *p0, void *p1);
void func_8012F214(struct_10C *a, SVECTOR *in, SVECTOR *out);

extern struct_10C *D_801ED364;  /* the actor iterator's cursor */
extern struct_10C *D_801ED360;  /* the actor it skips */
extern u8 D_801152A8[];
void func_8012E014(struct_10C *a);
void func_8012E138(struct_10C *a);

extern u16 GetTPage(s32 tp, s32 abr, s32 x, s32 y);
extern void SetDrawMode(void *p, s32 dfe, s32 dtd, s32 tpage, RECT *tw);
void func_8012E32C(void);

extern s32 D_80126B5C;          /* his position words (read on their own here: as the struct, CSE folds them to one base) */
extern s32 D_80126B60;
extern s32 D_80126B64;
extern s16 D_80126B5E;          /* and their whole-unit halves */
extern s16 D_80126B62;
extern s16 D_80126B66;
void func_8012B2CC(struct_60 *m);
void func_8012F0BC(MATRIX *m, VECTOR *in, VECTOR *out);
void func_8012F1A4(MATRIX *m, VECTOR *in, VECTOR *out);
void func_8012F038(MATRIX *m, SVECTOR *in, SVECTOR *out);
void func_8012F14C(MATRIX *m, SVECTOR *in, SVECTOR *out);

extern s32 D_801ED358;          /* the squash scale (0x1000 = 1.0) */
extern s32 D_801ED35C;
void func_8012E5CC(SVECTOR *v, u16 a, u16 b);

extern u8 D_8018D860[];
extern void func_80019064(u8 *p);
void func_8016AA50(struct_10C *a, s32 n);
void func_8016B428(struct_10C *a);

extern s32 func_8002A4FC(void);
extern void ApplyTransposeMatrixLV(MATRIX *m, VECTOR *v0, VECTOR *v1);
s32 func_8012EFB8(SVECTOR *v, s32 *sxy);

extern void func_80015978(union_4 *pos, SVECTOR *out);
extern void func_80015954(SVECTOR *in, union_4 *pos);

s32 *func_8012F40C(s32 *out, SVECTOR *v);

extern SVECTOR D_8018D850;
extern u8 D_8018D858[];
extern void func_8014C978();

extern MATRIX *RotMatrixX(s32 r, MATRIX *m);
extern MATRIX *RotMatrixY(s32 r, MATRIX *m);
extern MATRIX *RotMatrixZ(s32 r, MATRIX *m);
extern MATRIX D_800AE620;       /* an identity matrix (BSS, filled at boot) */

/* the model matrix from the rotation (X, Z, Y) and the position from the 16.16 position plus the offset.
   Matched 17 Oct: the identity copy inside `do { } while (0)` (a macro in the original, docs/decomp_recipes.md) */
void func_8012B4B8(struct_60 *m) {
    struct_84 *o;
    struct_84 *p;
    MATRIX mat;
    o = m->field_20;
    if (o != NULL) {
        do { mat = D_800AE620; } while (0);  /* a loop's end note ends cse's block: each RotMatrix call recomputes &mat */
        RotMatrixX(o->field_10.vx, &mat);
        RotMatrixZ(o->field_10.vz, &mat);
        RotMatrixY(o->field_10.vy, &mat);
        *(MATRIX *)&o->field_30.field_4 = mat;
        p = m->field_20;
        p->field_30.field_4.field_14[0] = p->field_8[0] = m->field_4[0].m1.field_2 + m->field_50[0];
        p->field_30.field_4.field_14[1] = p->field_8[1] = m->field_4[1].m1.field_2 + m->field_50[1];
        p->field_30.field_4.field_14[2] = p->field_8[2] = m->field_4[2].m1.field_2 + m->field_50[2];
        p->field_2C |= 1;
    }
}

/* a step from angle a toward angle b (4096 a turn, the short way round): the difference over n, at least 1.
   b is never assigned (the masked heading is a local): the inliner then keeps the parameter read-only and does not copy
   the argument, which func_8012BB3C needs (docs/decomp_recipes.md) */
inline s32 func_8012B608(s32 a, s32 b, s32 n) {
    s32 d;
    s32 t;
    s32 h;
    a &= 0xFFF;
    h = b & 0xFFF;
    if (a == h) {
        return 0;
    }
    d = h - a;
    if (d > 0x800) {
        t = a + 0x1000;
        d = h - t;
    }
    if (d < -0x800) {
        t = a - 0x1000;
        d = h - t;
    }
    if (d >= 0) {
        d /= n;
        if (d == 0) {
            d = 1;
        }
    } else {
        d /= n;
        if (d == 0) {
            d = -1;
        }
    }
    return d;
}

/* headings (4096 a turn) from one point to another on the ground */
inline s32 func_8012B6D4(union_4 *a, union_4 *b) {
    return (ratan2(a[2].m1.field_2 - b[2].m1.field_2, b[0].m1.field_2 - a[0].m1.field_2) - 0x400) & 0xFFF;
}

s32 func_8012B70C(SVECTOR *a, SVECTOR *b) {
    return (ratan2(a->vz - b->vz, b->vx - a->vx) - 0x400) & 0xFFF;
}

s32 func_8012B744(union_4 *a, SVECTOR *b) {
    return (ratan2(a[2].m1.field_2 - b->vz, b->vx - a[0].m1.field_2) - 0x400) & 0xFFF;
}

/* the heading (high half) and pitch (low half) from a to b */
union_4_2 *func_8012B77C(union_4_2 *out, union_4 *a, union_4 *b) {
    union_4_2 v;
    s32 dz = b[2].m1.field_2 - a[2].m1.field_2;
    s32 dx = b[0].m1.field_2 - a[0].m1.field_2;
    s32 dy = b[1].m1.field_2 - a[1].m1.field_2;
    s32 yaw;
    s32 c;
    yaw = (ratan2(-dz, dx) - 0x400) & 0xFFF;
    v.m1.field_2 = yaw;
    c = rcos(yaw);
    dz = (dz * c + dx * rsin(yaw)) >> 12;
    v.m1.field_0 = ratan2(dy, -dz);
    *out = v;
    return out;
}

/* the heading from an object to Musashi's other point */
inline s32 func_8012B864(struct_60 *m) {
    return (ratan2(m->field_4[2].m1.field_2 - D_80126B58.field_15C[2], D_80126B58.field_15C[0] - m->field_4[0].m1.field_2) - 0x400) & 0xFFF;
}

/* the heading from an object to Musashi */
inline s32 func_8012B8A4(struct_60 *m) {
    return (ratan2(m->field_4[2].m1.field_2 - D_80126B58.field_4[2].m1.field_2, D_80126B58.field_4[0].m1.field_2 - m->field_4[0].m1.field_2) - 0x400) & 0xFFF;
}

/* a turn step for the model toward Musashi's other point */
s32 func_8012B8E4(struct_60 *m, s16 n) {
    return func_8012B608(m->field_20->field_10.vy, func_8012B864(m), n);
}

/* a turn step for the model toward Musashi */
s32 func_8012BA10(struct_60 *m, s16 n) {
    return func_8012B608(m->field_20->field_10.vy, func_8012B8A4(m), n);
}

extern struct_10C D_801202A0[];     /* the actor table from slot 1 (its own symbol: func_8012C2D0) */

/* a turn step from an angle toward the heading from a to b. Matched 17 Oct, night: the heading in a local before the call (its
   `- 0x400` is then emitted at once, not deferred to the inline's parameter copy) and func_8012B608's b never assigned
   (docs/decomp_recipes.md) */
s16 func_8012BB3C(union_4 *a, union_4 *b, s32 cur, s16 n) {
    s32 h = ratan2(a[2].m1.field_2 - b[2].m1.field_2, b[0].m1.field_2 - a[0].m1.field_2) - 0x400;
    return func_8012B608(cur, h, n);
}

/* squared distance between two 16.16 points (integer parts) */
s32 func_8012BC60(union_4 *a, union_4 *b) {
    VECTOR d;
    d.vx = a[0].m1.field_2 - b[0].m1.field_2;
    d.vy = a[1].m1.field_2 - b[1].m1.field_2;
    d.vz = a[2].m1.field_2 - b[2].m1.field_2;
    Square0(&d, &d);
    return d.vx + d.vy + d.vz;
}

/* squared distance to Musashi's other point, or the most there is when it is not set */
s32 func_8012BCCC(struct_60 *m) {
    struct_18C *p = &D_80126B58;
    if (p->field_162 != 0) {
        return 0x7FFFFFFF;
    }
    return func_80013478((s16 *)m->field_4, p->field_15C);
}

/* squared distance to Musashi */
s32 func_8012BD14(struct_60 *m) {
    return func_80013350((s16 *)m->field_4, (s16 *)D_80126B58.field_4);
}

/* func_8012BCCC's test as func_8012BD3C has it inlined (its own copy: the address is not taken through a pointer) */
static inline s32 func_8012BD3C_inline(struct_60 *m) {
    if (D_80126B58.field_162 != 0) {
        return 0x7FFFFFFF;
    }
    return func_80013478((s16 *)m->field_4, D_80126B58.field_15C);
}

/* Musashi's other point is within dist (squared) and within range of the model's facing */
s32 func_8012BD3C(struct_60 *m, s16 range, s32 dist) {
    if (func_8012BD3C_inline(m) > dist) {
        return 0;
    }
    return func_8012BDBC(m, range);
}

/* Musashi's other point is within range of the model's facing */
s32 func_8012BDBC(struct_60 *m, s16 range) {
    s32 d = (func_8012B864(m) - m->field_20->field_10.vy) & 0xFFF;
    if (d < 0x800) {
        return d < range;
    }
    return (0x1000 - d) < range;
}

/* squared distance to Musashi on the ground */
s32 func_8012BE54(struct_60 *m) {
    SVECTOR p;
    p.vx = D_80126B58.field_4[0].m1.field_2;
    p.vy = D_80126B58.field_4[1].m1.field_2;
    p.vz = D_80126B58.field_4[2].m1.field_2;
    return func_8012BE98(m, &p);
}

/* squared distance to a point on the ground (heights left out) */
s32 func_8012BE98(struct_60 *m, SVECTOR *p) {
    SVECTOR a;
    SVECTOR b;
    a.vx = m->field_4[0].m1.field_2;
    a.vy = 0;
    a.vz = m->field_4[2].m1.field_2;
    b.vx = p->vx;
    b.vy = 0;
    b.vz = p->vz;
    return func_800132BC(&a.vx, &b.vx);
}

/* count the timer down: 1 when it is (or reaches) 0 */
s32 func_8012BEE8(struct_60 *m) {
    if (m->field_1C != 0) {
        return --m->field_1C == 0;
    }
    return 1;
}

/* the same, restarting it at n when it runs out */
s32 func_8012BF10(struct_60 *m, s32 n) {
    s32 r;
    if (m->field_1C == 0) {
        r = 1;
    } else {
        r = --m->field_1C == 0;
    }
    if (r) {
        m->field_1C = n;
        return 1;
    }
    return 0;
}

void func_8012BF4C(struct_60 *m, s32 n) {
    m->field_1C = n;
}

void func_8012BF54(struct_60 *m) {
    m->field_5C |= 0x8000;
}

void func_8012BF68(struct_60 *m) {
    m->field_5C &= 0x7FFF;
}

/* far from Musashi's focus in depth (0x360 or more) */
s32 func_8012BF7C(struct_60 *m) {
    s32 d;
    if ((d = m->field_4[2].m1.field_2 - D_80126B58.field_154[2]) < 0) {
        d = -d;
    }
    return d >= 0x360;
}

/* far from Musashi's focus (squared distance over 0xFFFFF) */
s32 func_8012BFA8(struct_60 *m) {
    s32 v[3];
    s32 r[3];
    v[0] = D_80126B58.field_154[0] - m->field_4[0].m1.field_2;
    v[1] = D_80126B58.field_154[1] - m->field_4[1].m1.field_2;
    v[2] = D_80126B58.field_154[2] - m->field_4[2].m1.field_2;
    gte_ldlvl(v);
    gte_sqr0();
    gte_stlvnl(r);
    return r[0] + r[1] + r[2] > 0xFFFFF;
}

/* in range of Musashi's focus: at least D_801274E0 (squared), or the stage's own test when it set one */
s32 func_8012C044(struct_60 *m) {
    if (D_801274D4 != NULL) {
        return D_801274D4(m);
    }
    return func_80013478((s16 *)m->field_4, D_80126B58.field_154) >= D_801274E0;
}

/* free an actor; one marked 0x8000 also marks its spawn definition as free again */
inline void func_8012C098(struct_10C *a) {
    if (a->field_68 != NULL && ((s16)a->field_72 & 0x8000)) {
        a->field_68->field_A &= 0x7FFF;
    }
    func_8012C218(a);
}

/* func_8012C044's test as func_8012C0EC has it inlined (its own copy, the test the other way round) */
static inline s32 func_8012C0EC_inline(struct_60 *m) {
    if (D_801274D4 == NULL) {
        return func_80013478((s16 *)m->field_4, D_80126B58.field_154) >= D_801274E0;
    }
    return D_801274D4(m);
}

/* free the actor if it is in range of Musashi's focus */
s32 func_8012C0EC(struct_10C *a) {
    if (!func_8012C0EC_inline((struct_60 *)a)) {
        return 0;
    }
    func_8012C098(a);
    return 1;
}

u8 *func_8012C194(void) {
    return func_8001D074(0x3E, 0x7D);
}

u8 *func_8012C1B8(void) {
    return func_8001CFDC(0x26, 0x85);
}

/* the next free model after this actor's */
struct_84 *func_8012C1DC(struct_10C *a) {
    struct_84 *o;
    struct_84 *end = D_800B3DF0;
    for (o = a->field_20 + 1; o != end; o++) {
        if (o->field_0 == 0) {
            return o;
        }
    }
    return NULL;
}

/* clear an actor and its model */
inline void func_8012C218(struct_10C *a) {
    struct_84 *o = a->field_20;
    if (o != NULL) {
        switch (o->field_0) {
        case 2:
            func_80016714(o, 0x38);
            break;
        case 1:
            func_80016714(o, 0x84);
            break;
        }
    }
    func_80016714(a, sizeof(struct_10C));
}

/* the next free actor after a (from the first when a is NULL) */
inline struct_10C *func_8012C284(struct_10C *a) {
    struct_10C *end = &D_80120194[97];
    if (a == NULL) {
        a = &D_80120194[1];
    } else {
        a++;
    }
    for (; a != end; a++) {
        if (a->field_0 == 0) {
            return a;
        }
    }
    return NULL;
}

/* the first free actor slot (slot 0 is never handed out). Matched 17 Oct: the start of the search as a separate
   single-use pointer to its own symbol and the base as the loop variable itself (docs/decomp_recipes.md) */
inline struct_10C *func_8012C2D0(void) {
    struct_10C *first = D_801202A0;
    struct_10C *a = D_80120194;
    struct_10C *end;
    goto test;
found:
    return a;
test:
    end = a + 97;
    for (a = first; a != end; a++) {
        if (a->field_0 == 0) {
            goto found;
        }
    }
    return NULL;
}

/* the last free actor */
inline struct_10C *func_8012C31C(void) {
    struct_10C *a;
    struct_10C *end = D_80120194;
    for (a = end + 96; a != end; a--) {
        if (a->field_0 == 0) {
            return a;
        }
    }
    return NULL;
}

/* set an actor up from its init record, with a model (func_8001C214's kind); 0 when no model is free */
s32 func_8012C354(struct_10C *a, struct_34_2 *init) {
    u8 *o;
    a->field_78 = init;
    if (D_80078EAE[0] == 0) {
        a->field_76 = init->field_0 * 24 / 16;
    } else {
        a->field_76 = init->field_0;
    }
    a->field_5C = init->field_2;
    if (init->field_4 != NULL) {
        o = func_8001CFDC(0x26, 0x85);
        a->field_20 = (struct_84 *)o;
        if (o == NULL) {
            func_8012CAE4(a);
            return 0;
        }
        func_8001C214(o, init->field_4);
    }
    if (init->field_8 != 0) {
        a->field_58 = init->field_8 | 0x60000000;
    }
    return 1;
}

/* the same with func_8001C810's kind of model */
s32 func_8012C438(struct_10C *a, struct_34_2 *init) {
    u8 *o;
    a->field_78 = init;
    if (D_80078EAE[0] == 0) {
        a->field_76 = init->field_0 * 24 / 16;
    } else {
        a->field_76 = init->field_0;
    }
    a->field_5C = init->field_2;
    if (init->field_4 != NULL) {
        o = func_8001CFDC(0x26, 0x85);
        a->field_20 = (struct_84 *)o;
        if (o == NULL) {
            func_8012CAE4(a);
            return 0;
        }
        func_8001C810(o, init->field_4);
    }
    if (init->field_8 != 0) {
        a->field_58 = init->field_8 | 0x60000000;
    }
    return 1;
}

/* spawn from a definition into the next free actor after parent */
inline struct_10C *func_8012C51C(struct_14 *d, struct_10C *parent) {
    struct_10C *a = func_8012C284(parent);
    if (a == NULL) {
        return 0;
    }
    return func_8012C890(d, a, parent);
}

/* spawn an actor of a kind at the parent's position (or the origin) */
struct_10C *func_8012C588(s16 kind, struct_10C *parent) {
    struct_14 d;
    if (parent != NULL && parent->field_0 != 0) {
        d.field_0 = parent->field_4[0].m1.field_2;
        d.field_2 = parent->field_4[1].m1.field_2;
        d.field_4 = parent->field_4[2].m1.field_2;
    } else {
        d.field_0 = d.field_2 = d.field_4 = 0;
    }
    d.field_6 = kind;
    d.field_8 = d.field_A = 0;
    d.field_E = d.field_10 = 0;
    d.field_C = 0x7FFF;
    return func_8012C51C(&d, parent);
}

/* spawn an actor of a kind (with its second value) at the parent's position (or the origin) */
struct_10C *func_8012C658(s16 kind, s16 unk8, struct_10C *parent) {
    struct_14 d;
    if (parent != NULL && parent->field_0 != 0) {
        d.field_0 = parent->field_4[0].m1.field_2;
        d.field_2 = parent->field_4[1].m1.field_2;
        d.field_4 = parent->field_4[2].m1.field_2;
    } else {
        d.field_0 = d.field_2 = d.field_4 = 0;
    }
    d.field_6 = kind;
    d.field_8 = unk8;
    d.field_A = 0;
    d.field_E = d.field_10 = 0;
    d.field_C = 0x7FFF;
    return func_8012C51C(&d, parent);
}

/* spawn from a definition, marking it as out */
inline struct_10C *func_8012C724(struct_14 *d, struct_10C *a) {
    d->field_A |= 0x8000;
    return func_8012C890(d, a, NULL);
}

/* spawn from a definition into the last free actor (flag 0x800) or the first. Matched 17 Oct, night: the result doubles as the
   first-free search's end (`a = p + 97`, so the loop pointer conflicts with it and cannot inherit its a1 preference), and
   the call arm is written first with func_8012C724's body (jump.c swaps the arms of an if/else whose arms both end in a
   jump to the same place, docs/decomp_recipes.md) */
struct_10C *func_8012C750(struct_14 *d) {
    struct_10C *a;
    if (d->field_A & 0x800) {
        a = func_8012C31C();
    } else {
        struct_10C *first = D_801202A0;
        struct_10C *p = D_80120194;
        goto test;
found:
        a = p;
        goto done;
test:
        a = p + 97;
        for (p = first; p != a; p++) {
            if (p->field_0 == 0) {
                goto found;
            }
        }
        a = NULL;
    }
done:
    if (a != NULL) {
        d->field_A |= 0x8000;
        return func_8012C890(d, a, NULL);
    }
    return 0;
}

/* spawn from a definition into the last free actor */
struct_10C *func_8012C820(struct_14 *d) {
    struct_10C *a = func_8012C31C();
    if (a == NULL) {
        return 0;
    }
    return func_8012C724(d, a);
}

/* make an actor from a spawn definition: position, flags and message from it, a serial id, the parent or the definition
   linked, then the kind's set-up handler. NULL (and the actor cleared, the definition free again) when that turns it down */
struct_10C *func_8012C890(struct_14 *d, struct_10C *a, struct_10C *parent) {
    u16 *flg;
    a->field_0 = d->field_6;
    a->field_88[0] = a->field_4[0].m1.field_2 = d->field_0;
    a->field_88[1] = a->field_4[1].m1.field_2 = d->field_2;
    a->field_88[2] = a->field_4[2].m1.field_2 = d->field_4;
    a->field_4[0].m1.field_0 = a->field_4[1].m1.field_0 = a->field_4[2].m1.field_0 = 0;
    a->field_70 = d->field_8;
    a->field_72 = d->field_A & 0xF7FF;
    a->field_FC = d->field_E;
    a->field_DC[0] = (void *)d->field_10;
    a->field_78 = D_80190D1C;
    a->field_36 = D_801270C4[0];
    if (++D_801270C4[0] == 0) {
        D_801270C4[0] = 1;
    }
    if (parent != NULL) {
        a->field_64 = parent;
        a->field_68 = NULL;
    } else {
        a->field_64 = NULL;
        a->field_68 = d;
    }
    d->field_A |= 0x8000;
    a->field_2 = 0;
    flg = D_801274E4;
    *flg &= 0xFFFE;
    D_8011DB08[a->field_0](a);
    if (*flg & 1) {
        func_8012C218(a);
        d->field_A &= 0x7FFF;
        return NULL;
    }
    if (a->field_64 == NULL && a->field_20 != NULL && a->field_20->field_0 == 1 && d->field_C != 0x7FFF) {
        a->field_20->field_10.vy = d->field_C;
    }
    if (a->field_20 != NULL) {
        a->field_20->field_8[0] = a->field_4[0].m1.field_2 + a->field_50[0];
        a->field_20->field_8[1] = a->field_4[1].m1.field_2 + a->field_50[1];
        a->field_20->field_8[2] = a->field_4[2].m1.field_2 + a->field_50[2];
    }
    return a;
}

/* a kind's set-up turns its actor down: flag it for the spawner and clear the actor */
void func_8012CAE4(struct_10C *a) {
    D_801274E4[0] |= 1;
    func_8012C218(a);
}

s32 func_8012CB64(SVECTOR *p, s32 x0, s32 x1, s32 z0, s32 z1) {
    if (p->vx >= x0 && p->vx < x1 && p->vz >= z0 && p->vz < z1) return 1;
    return 0;
}

s32 func_8012CBA4(struct_60 *m) {
    return func_8012CC88(m, 0, &D_800D3918);
}

s32 func_8012CBCC(struct_60 *m) {
    return func_8012CC88(m, 1, &D_800D3918);
}

s32 func_8012CBF4(struct_60 *m) {
    return func_8012CC88(m, 0x11, &D_800D3918);
}

s32 func_8012CC1C(struct_60 *m, SVECTOR *ofs) {
    return func_8012CC88(m, 0, ofs);
}

s32 func_8012CC40(struct_60 *m, SVECTOR *ofs) {
    return func_8012CC88(m, 1, ofs);
}

s32 func_8012CC64(struct_60 *m, SVECTOR *ofs) {
    return func_8012CC88(m, 0x11, ofs);
}

/* one move: velocity and position stepped, then the way from the last position (both plus ofs) resolved by
   func_8012CEB0; the result's 0x6000 bits stop the fall */
s32 func_8012CC88(struct_60 *m, s32 mode, SVECTOR *ofs) {
    SVECTOR from;
    SVECTOR to;
    s32 r;
    from.vx = m->field_38[0].m1.field_2;
    from.vy = m->field_38[1].m1.field_2;
    from.vz = m->field_38[2].m1.field_2;
    from.vx += ofs->vx;
    from.vy += ofs->vy;
    from.vz += ofs->vz;
    func_8012AD80(m);
    to.vx = m->field_4[0].m1.field_2;
    to.vy = m->field_4[1].m1.field_2;
    to.vz = m->field_4[2].m1.field_2;
    to.vx += ofs->vx;
    to.vy += ofs->vy;
    to.vz += ofs->vz;
    r = func_8012CEB0(&from, &to, mode);
    to.vx -= ofs->vx;
    to.vy -= ofs->vy;
    to.vz -= ofs->vz;
    m->field_4[0].m1.field_2 = to.vx;
    m->field_4[1].m1.field_2 = to.vy;
    m->field_4[2].m1.field_2 = to.vz;
    if (r & 0x6000) {
        m->field_10[1] = 0;
    }
    return r;
}

/* standing on something: a short ray down from the position (8 units) leaves the height where it was */
s32 func_8012CE2C(struct_60 *m) {
    SVECTOR p;
    SVECTOR q;
    p.vx = m->field_4[0].m1.field_2;
    p.vy = m->field_4[1].m1.field_2;
    p.vz = m->field_4[2].m1.field_2;
    q = p;
    q.vy += 8;
    func_80133784(1, &p, &q);
    return p.vy == q.vy;
}

/* the move resolve: the first query's result, or a second query from the resolved point with the first's
   ground bit kept. Matched 17 Oct: `r2 &= 0xFFFF7FFF; r2 |= r & 0x8000;` as two statements (docs/decomp_recipes.md) */
s32 func_8012CEB0(SVECTOR *from, SVECTOR *to, s32 mode) {
    s32 r;
    s32 r2;
    s32 type;
    SVECTOR hit;
    if (mode & 1) {
        r = func_80133784(mode, from, to) | ((u8 *)to)[6];
        if (((u8 *)to)[6] == 2 || ((u8 *)to)[6] == 0x1B) {
            r |= 0x1000;
        }
        return r;
    }
    r = func_80133784(0, from, to);
    if (r == 0) {
        return 0;
    }
    r2 = func_80133784(2, to, &hit);
    if (!(r2 & 0x6000)) {
        return 0;
    }
    r2 &= 0xFFFF7FFF;
    r2 |= r & 0x8000;
    type = ((u8 *)to)[6];
    to->vy = hit.vy;
    r2 |= type;
    if (type == 2 || type == 0x1B) {
        r2 |= 0x1000;
    }
    return r2;
}

/* a small red marker triangle at a point, 0x20 in front of its depth */
void func_8012CFA8(SVECTOR *v) {
    POLY_F3 *p;
    s32 sxy;
    s32 dummy;
    s32 flag;
    s32 z;
    p = (POLY_F3 *)func_80010A08(sizeof(POLY_F3));
    *(u32 *)&p->r0 = 0xFF;
    SetPolyF3(p);
    SetRotMatrix(&D_800AF630.field_18);
    SetTransMatrix(&D_800AF630.field_18);
    z = (RotTransPers(v, &sxy, &dummy, &flag) >> 2) - 0x20;
    if (z > 0) {
        *(s32 *)&p->x0 = sxy;
        p->x1 = p->x0 + 8;
        p->y1 = p->y0;
        p->x2 = p->x0;
        p->y2 = p->y0 + 8;
        AddPrim(D_800A6518[D_800AF630.field_A3D2].org + z, p);
    }
}

extern void func_8012D3B4();

/* the actor's hit box (or the box n points at) drawn as 12 white lines (debug drawing)
   PORT NOTE: void, as the original (the return-delay slot holds lui v0): the file's s32 prototype becomes void and
   func_8012D38C calls it through ((s32 (*)())func_8012D098)(a, 0) */
void func_8012D098(struct_10C *a, s32 n) {
    SVECTOR v[8];
    SVECTOR in;

    if (a != NULL && a->field_0 != 0) {
        if (n == 0) {
            if (a->field_58 == 0) {
                return;
            }
            n = (a->field_58 & 0x0FFFFFFF) | 0x80000000;
        }
        in.vx = AF(n, u16, 4); in.vy = AF(n, u16, 8); in.vz = AF(n, u16, 0xC);
        func_8012F214(a, &in, &v[0]);
        in.vx = AF(n, u16, 6); in.vy = AF(n, u16, 8); in.vz = AF(n, u16, 0xC);
        func_8012F214(a, &in, &v[1]);
        in.vx = AF(n, u16, 4); in.vy = AF(n, u16, 0xA); in.vz = AF(n, u16, 0xC);
        func_8012F214(a, &in, &v[2]);
        in.vx = AF(n, u16, 6); in.vy = AF(n, u16, 0xA); in.vz = AF(n, u16, 0xC);
        func_8012F214(a, &in, &v[3]);
        in.vx = AF(n, u16, 4); in.vy = AF(n, u16, 8); in.vz = AF(n, u16, 0xE);
        func_8012F214(a, &in, &v[4]);
        in.vx = AF(n, u16, 6); in.vy = AF(n, u16, 8); in.vz = AF(n, u16, 0xE);
        func_8012F214(a, &in, &v[5]);
        in.vx = AF(n, u16, 4); in.vy = AF(n, u16, 0xA); in.vz = AF(n, u16, 0xE);
        func_8012F214(a, &in, &v[6]);
        in.vx = AF(n, u16, 6); in.vy = AF(n, u16, 0xA); in.vz = AF(n, u16, 0xE);
        func_8012F214(a, &in, &v[7]);
        func_8012D3B4(&v[0], &v[1], 0xFFFFFF);
        func_8012D3B4(&v[1], &v[3], 0xFFFFFF);
        func_8012D3B4(&v[3], &v[2], 0xFFFFFF);
        func_8012D3B4(&v[2], &v[0], 0xFFFFFF);
        func_8012D3B4(&v[4], &v[5], 0xFFFFFF);
        func_8012D3B4(&v[5], &v[7], 0xFFFFFF);
        func_8012D3B4(&v[7], &v[6], 0xFFFFFF);
        func_8012D3B4(&v[6], &v[4], 0xFFFFFF);
        func_8012D3B4(&v[0], &v[4], 0xFFFFFF);
        func_8012D3B4(&v[1], &v[5], 0xFFFFFF);
        func_8012D3B4(&v[2], &v[6], 0xFFFFFF);
        func_8012D3B4(&v[3], &v[7], 0xFFFFFF);
    }
}

s32 func_8012D38C(struct_10C *a) {
    return ((s32 (*)())func_8012D098)(a, 0);
}

void func_8012D3AC(void) {
}

/* a line between two world points, in the colour given (debug drawing) */
void func_8012D3B4(SVECTOR *a, SVECTOR *b, u32 colour) {
    LINE_F2 *p;
    s32 dummy;
    s32 flag;
    s32 z;
    p = (LINE_F2 *)func_80010A08(sizeof(LINE_F2));
    *(u32 *)&p->r0 = colour;
    SetLineF2(p);
    SetRotMatrix(&D_800AF630.field_18);
    SetTransMatrix(&D_800AF630.field_18);
    z = RotTransPers(a, (s32 *)&p->x0, &dummy, &flag);
    if (z > 0 && flag >= 0 && RotTransPers(b, (s32 *)&p->x1, &dummy, &flag) > 0 && flag >= 0) {
        AddPrim(D_800A6518[D_800AF630.field_A3D2].org + z, p);
    }
}

/* a line between two points of an actor's model frame */
void func_8012D4B4(struct_10C *a, SVECTOR *p0, SVECTOR *p1, u32 colour) {
    SVECTOR w0;
    SVECTOR w1;
    LINE_F2 *p;
    s32 dummy;
    s32 flag;
    s32 z;
    func_8012F214(a, p0, &w0);
    func_8012F214(a, p1, &w1);
    p = (LINE_F2 *)func_80010A08(sizeof(LINE_F2));
    *(u32 *)&p->r0 = colour;
    SetLineF2(p);
    SetRotMatrix(&D_800AF630.field_18);
    SetTransMatrix(&D_800AF630.field_18);
    z = RotTransPers(&w0, (s32 *)&p->x0, &dummy, &flag);
    if (z > 0 && flag >= 0 && RotTransPers(&w1, (s32 *)&p->x1, &dummy, &flag) > 0 && flag >= 0) {
        AddPrim(D_800A6518[D_800AF630.field_A3D2].org + z, p);
    }
}

void func_8012D5DC(void) {
}

/* the hit test of func_8012DEB8, also leaving v in Musashi's +0x40 */
s32 func_8012D5E4(struct_10C *a, SVECTOR *p0, SVECTOR *p1, s16 v) {
    if (func_8012DEB8(a, p0, p1) != 0) {
        D_80126B58.field_40 = v;
        return 1;
    }
    return 0;
}

s32 func_8012D624(struct_60 *m, s32 r, s32 x) {
    SVECTOR p;
    p.vx = m->field_4[0].m1.field_2;
    p.vy = m->field_4[1].m1.field_2;
    p.vz = m->field_4[2].m1.field_2;
    return func_8012D664(&p, r, x);
}

/* within r (plus 0x20) of Musashi's chest (0x40 above his position): then func_8012F568 */
s32 func_8012D664(SVECTOR *p, s32 r, s32 x) {
    SVECTOR m;
    m.vx = D_80126B58.field_4[0].m1.field_2;
    m.vy = D_80126B58.field_4[1].m1.field_2 - 0x40;
    m.vz = D_80126B58.field_4[2].m1.field_2;
    if (func_800132BC(&p->vx, &m.vx) < (r + 0x20) * (r + 0x20)) {
        func_8012F568(1, 1, 0, x, p, D_8018D848);
        return 1;
    }
    return 0;
}

/* the actor's collision box (x0 x1 y0 y1 z0 z1 at +4) edges hit Musashi: bit 1 the four x edges, 2 the y, 4 the z */
s32 func_8012D714(struct_10C *a, s32 edges) {
    SVECTOR p0;
    SVECTOR p1;
    s16 *h = (s16 *)((a->field_58 & 0x0FFFFFFF) | 0x80000000);

    if (edges & 1) {
        p0.vx = h[2]; p0.vy = h[4]; p0.vz = h[6];
        p1.vx = h[3]; p1.vy = h[4]; p1.vz = h[6];
        if (func_8012DEB8(a, &p0, &p1) != 0) return 1;
        p0.vx = h[2]; p0.vy = h[5]; p0.vz = h[6];
        p1.vx = h[3]; p1.vy = h[5]; p1.vz = h[6];
        if (func_8012DEB8(a, &p0, &p1) != 0) return 1;
        p0.vx = h[2]; p0.vy = h[4]; p0.vz = h[7];
        p1.vx = h[3]; p1.vy = h[4]; p1.vz = h[7];
        if (func_8012DEB8(a, &p0, &p1) != 0) return 1;
        p0.vx = h[2]; p0.vy = h[5]; p0.vz = h[7];
        p1.vx = h[3]; p1.vy = h[5]; p1.vz = h[7];
        if (func_8012DEB8(a, &p0, &p1) != 0) return 1;
    }
    if (edges & 2) {
        p0.vx = h[2]; p0.vy = h[4]; p0.vz = h[6];
        p1.vx = h[2]; p1.vy = h[5]; p1.vz = h[6];
        if (func_8012DEB8(a, &p0, &p1) != 0) return 1;
        p0.vx = h[2]; p0.vy = h[4]; p0.vz = h[7];
        p1.vx = h[2]; p1.vy = h[5]; p1.vz = h[7];
        if (func_8012DEB8(a, &p0, &p1) != 0) return 1;
        p0.vx = h[3]; p0.vy = h[4]; p0.vz = h[6];
        p1.vx = h[3]; p1.vy = h[5]; p1.vz = h[6];
        if (func_8012DEB8(a, &p0, &p1) != 0) return 1;
        p0.vx = h[3]; p0.vy = h[4]; p0.vz = h[7];
        p1.vx = h[3]; p1.vy = h[5]; p1.vz = h[7];
        if (func_8012DEB8(a, &p0, &p1) != 0) return 1;
    }
    if (edges & 4) {
        p0.vx = h[2]; p0.vy = h[4]; p0.vz = h[6];
        p1.vx = h[2]; p1.vy = h[4]; p1.vz = h[7];
        if (func_8012DEB8(a, &p0, &p1) != 0) return 1;
        p0.vx = h[2]; p0.vy = h[5]; p0.vz = h[6];
        p1.vx = h[2]; p1.vy = h[5]; p1.vz = h[7];
        if (func_8012DEB8(a, &p0, &p1) != 0) return 1;
        p0.vx = h[3]; p0.vy = h[4]; p0.vz = h[6];
        p1.vx = h[3]; p1.vy = h[4]; p1.vz = h[7];
        if (func_8012DEB8(a, &p0, &p1) != 0) return 1;
        p0.vx = h[3]; p0.vy = h[5]; p0.vz = h[6];
        p1.vx = h[3]; p1.vy = h[5]; p1.vz = h[7];
        if (func_8012DEB8(a, &p0, &p1) != 0) return 1;
    }
    return 0;
}

/* Matched 17 Oct: the first call written without its argument (the callee reads this function's a0, as the
   pass-through row of docs/decomp_recipes.md); with `func_8014C978(a)` the `a0 = 1` of the second call depends on the
   first and sched1 places it ahead of the stack arguments' addresses */
void func_8012DB84(struct_10C *a) {
    func_8014C978();
    func_8012F568(1, 0xC001, 0, 1000, &D_8018D850, D_8018D858);
}

struct_10C *func_8012DE2C(struct_10C *skip);
struct_10C *func_8012DDA4(void);

s32 func_8012DBD0(struct_10C *a, s32 speed, s32 angle, s32 n) {
    struct_10C *o;
    s32 r;
    s32 v;
    s16 *h;

    o = func_8012DE2C(a);
    if (o != NULL) {
        if (a->field_58 == 0) {
            r = 0x80;
        } else {
            h = (s16 *)(a->field_58 & 0x0FFFFFFF);
            r = abs(h[2]);
            v = abs(h[3]);
            if (r < v) r = v;
            v = abs(h[4]);
            if (r < v) r = v;
            v = abs(h[5]);
            if (r < v) r = v;
            v = abs(h[6]);
            if (r < v) r = v;
            v = abs(h[7]);
            if (r < v) r = v;
        }
        r = r * r;
        do {
            if (o->field_5C & 0x8000) {
                if (!(o->field_5C & 0x4000) && (u16)o->field_5E != n
                    && !(*(u16 *)o->field_AE & 1) && func_80013350((s16 *)a->field_4, (s16 *)o->field_4) < r) {
                    o->field_60 = speed;
                    o->field_62 = angle;
                    o->field_5E = n;
                    o->field_5C |= 1;
                }
            }
            o = func_8012DDA4();
        } while (o != NULL);
    }
    return 0;
}

/* the actor iterator: the next live actor that is not the one skipped */
struct_10C *func_8012DDA4(void) {
    struct_10C *a;
    struct_10C *end = &D_80120194[97];
    struct_10C *skip;
    if (D_801ED364 != end) {
        skip = D_801ED360;
        do {
            a = D_801ED364;
            if (a->field_0 != 0 && a != skip) {
                D_801ED364 = a + 1;
                return a;
            }
            D_801ED364++;
        } while (D_801ED364 != end);
    }
    D_801ED364 = NULL;
    return NULL;
}

/* start the iterator, skipping one actor (or none), and return the first */
struct_10C *func_8012DE2C(struct_10C *skip) {
    struct_10C *a;
    struct_10C *start = &D_80120194[1];
    struct_10C *end = start + 96;
    D_801ED364 = start;
    D_801ED360 = skip;
    for (; D_801ED364 != end; D_801ED364++) {
        a = D_801ED364;
        if (a->field_0 != 0 && a != skip) {
            D_801ED364 = a + 1;
            return a;
        }
    }
    D_801ED364 = NULL;
    return NULL;
}

/* the segment between two points of an actor's model frame hits Musashi (func_8012DF34): note its facing */
s32 func_8012DEB8(struct_10C *a, SVECTOR *p0, SVECTOR *p1) {
    SVECTOR w0;
    SVECTOR w1;
    func_8012F214(a, p0, &w0);
    func_8012F214(a, p1, &w1);
    if (func_8012DF34(a, &w0, &w1) != 0) {
        D_80126B58.field_42 = a->field_20->field_10.vy;
        return 1;
    }
    return 0;
}

/* the segment between two world points hits Musashi's model (unless the actor is marked not to), then func_8012F568 */
s32 func_8012DF34(struct_10C *a, SVECTOR *w0, SVECTOR *w1) {
    struct_18C *p = &D_80126B58;
    if (a != NULL && a->field_AA != 0) {
        return 0;
    }
    if (func_80135888(p->field_20, p->field_38, w0, w1) != 0) {
        func_8012F568(1, 1, 0, 10, w1, D_801152A8);
        return 1;
    }
    return 0;
}

void func_8012DFBC(void) {
    VECTOR unused;
}

void func_8012DFCC(void) {
}

void func_8012DFD4(struct_10C *a) {
    if (a->field_74 != 0) {
        func_8012E014(a);
    } else {
        func_8012E138(a);
    }
}

/* Musashi rides the actor's model: his position into its frame, the model turned and moved, and back out */
void func_8012E014(struct_10C *a) {
    VECTOR wp;
    VECTOR out;
    VECTOR local;
    wp.vx = D_80126B5C;
    wp.vy = D_80126B60;
    wp.vz = D_80126B64;
    func_8012F0BC((MATRIX *)&a->field_20->field_30.field_4, &wp, &local);
    func_8012B2CC((struct_60 *)a);
    func_8012F1A4((MATRIX *)&a->field_20->field_30.field_4, &local, &out);
    D_80126B5C = out.vx;
    D_80126B60 = out.vy;
    D_80126B64 = out.vz;
}

/* the same with whole units, Musashi moved only where the way is clear of the model (func_80135888) */
void func_8012E138(struct_10C *a) {
    SVECTOR p;
    SVECTOR np;
    SVECTOR local;
    p.vx = D_80126B5E;
    p.vy = D_80126B62;
    p.vz = D_80126B66;
    func_8012F038((MATRIX *)&a->field_20->field_30.field_4, &p, &local);
    func_8012B2CC((struct_60 *)a);
    func_8012F14C((MATRIX *)&a->field_20->field_30.field_4, &local, &np);
    if (func_80135888(a->field_20, (void *)a->field_58, &np, &p) != 0) {
        D_80126B5E = p.vx;
        D_80126B62 = p.vy;
        D_80126B66 = p.vz;
    }
}

s32 func_8012E27C(void) {
    return 1;
}

void func_8012E284(void) {
}

/* a draw-mode primitive at a depth: semi-transparency mode abr from there on */
void func_8012E28C(s32 z, s32 abr) {
    u32 *ot;
    u8 *p;
    if (z > 0) {
        ot = D_800A6518[D_800AF630.field_A3D2].org + z;
        p = func_80010A08(0xC);
        SetDrawMode(p, 0, 0, GetTPage(0, abr, 0, 0), NULL);
        AddPrim(ot, p);
    }
}

/* the GTE's matrices: world to screen */
inline void func_8012E32C(void) {
    SetRotMatrix(&D_800AF630.field_18);
    SetTransMatrix(&D_800AF630.field_18);
}

/* squash and stretch: ease the scale toward a target set by Musashi's +0x188 (1.0 at 0, a third more at 0x90), then
   give the model that height and the inverse width. The quotient goes back into t (a global pseudo the allocator
   cannot tie), k is set before d (sched1's tie-break), o1 is the block's own temporary and abs() is one insn
   (docs/decomp_recipes.md) */
void func_8012E364(struct_60 *m) {
    s32 t;
    s32 d;
    s32 old;
    s32 v;
    s32 k;
    struct_84 *o;
    struct_84 *o1;
    m->field_5C = 0;
    t = D_80126B58.field_188;
    if (t == 0) {
        D_801ED358 = 0x1000;
        D_801ED35C = 0x1000;
    }
    k = 0x1000;
    m->field_1C++;
    t = ((0x90 - t) << 12) / 144;
    d = D_801ED358 - t;
    if (d > 0) {
        D_801ED358 -= d >> 2;
    } else if (d < 0) {
        D_801ED358 += -d / 4;
    }
    old = D_801ED35C;
    o1 = m->field_20;
    v = D_801ED358 - old + k;
    D_801ED35C = k;
    D_801ED358 = v;
    o1->field_2C |= 0x10;
    o = m->field_20;
    o->field_18.vx = o->field_18.vz = abs(v);
    m->field_20->field_18.vy = 0x1000;
}

/* ease the model's scale (x and z) a quarter of the way to 1.0, and count the timer down */
s32 func_8012E470(struct_60 *m) {
    struct_84 *o;
    s32 v;
    o = m->field_20;
    v = o->field_18.vx;
    v += (0x1000 - v) / 4;
    o->field_18.vx = o->field_18.vz = v;
    if (m->field_1C != 0) {
        return --m->field_1C == 0;
    }
    return 1;
}

void func_8012E4C8(struct_10C *a) {
    a->field_20->field_18.vx = a->field_20->field_18.vz = 0x1000;
    a->field_60 = 0;
    a->field_5C |= 1;
    a->field_62 = a->field_20->field_10.vy + 0x800;
    a->field_5E = 1;
}

/* the first live actor of a kind other than skip */
struct_10C *func_8012E504(struct_10C *skip, s32 kind) {
    struct_10C *a = &D_80120194[1];
    struct_10C *end = a + 96;
    for (; a != end; a++) {
        if (a != skip && a->field_0 == kind) {
            return a;
        }
    }
    return NULL;
}

/* the first actor of a kind */
struct_10C *func_8012E544(s32 kind) {
    struct_10C *a = &D_80120194[1];
    struct_10C *end = a + 96;
    for (; a != end; a++) {
        if (a->field_0 == kind) {
            return a;
        }
    }
    return NULL;
}

/* the first actor of a kind with a given +0x70 */
struct_10C *func_8012E57C(s32 kind, s16 n) {
    struct_10C *a = &D_80120194[1];
    struct_10C *end = a + 96;
    for (; a != end; a++) {
        if (a->field_0 == kind && a->field_70 == n) {
            return a;
        }
    }
    return NULL;
}

/* func_8002D4C8(a, b) when the point is on screen (within 199 by 169 of the centre) */
inline void func_8012E5CC(SVECTOR *v, u16 a, u16 b) {
    s32 sxy;
    s32 p;
    s32 flag;
    func_8012E32C();
    RotTransPers(v, &sxy, &p, &flag);
    if (flag >= 0 && (u16)(((s16 *)&sxy)[0] + 199) < 399 && (u16)(((s16 *)&sxy)[1] + 169) < 339) {
        func_8002D4C8(a, b);
    }
}

/* func_8002D4C8(a, b), from the actor's model position when it is on screen (always, without a model) */
void func_8012E688(struct_10C *a, u16 x, u16 y) {
    SVECTOR v;
    if (a->field_20 == NULL) {
        func_8002D4C8(x, y);
        return;
    }
    v.vx = a->field_20->field_30.field_4.field_14[0];
    v.vy = a->field_20->field_30.field_4.field_14[1];
    v.vz = a->field_20->field_30.field_4.field_14[2];
    func_8012E5CC(&v, x, y);
}

/* the object is on screen within a box: x limit in the low half of lim, y limit in the high half */
s32 func_8012E778(struct_60 *m, s32 lim) {
    s32 v[3];
    s32 sxy;
    s32 lx;
    s32 ly;
    s16 x;
    s16 y;
    MATRIX *mt;
    v[0] = m->field_4[0].m1.field_2;
    v[1] = m->field_4[1].m1.field_2;
    v[2] = m->field_4[2].m1.field_2;
    mt = &D_800AF630.field_18;
    gte_SetRotMatrix(mt);
    gte_SetTransMatrix(mt);
    gte_ldlv0(v);
    gte_rtps();
    gte_stsxy(&sxy);
    x = ((s16 *)&sxy)[0];
    lx = (s16)lim;
    if (x >= 0) {
        if (lx < x) {
        out_x:
            return 0;
        }
    } else if (lx < -x) {
        goto out_x;
    }
    y = ((s16 *)&sxy)[1];
    ly = lim >> 16;
    if (y >= 0) {
        if (ly < y) {
        out_y:
            return 0;
        }
    } else {
        if (ly < -y) {
            goto out_y;
        }
    }
    return 1;
}

void func_8012E88C(struct_10C *a) {
    a->field_20->field_4 &= 0x7FFFFFFF;
}

void func_8012E8A8(struct_10C *a) {
    a->field_20->field_4 |= 0x80000000;
}

void func_8012E8C4(struct_10C *a) {
    a->field_20->field_4 ^= 0x80000000;
}

/* put an object at a point, facing its pad (heading), and update its model */
void func_8012E8E0(struct_60 *m, SVECTOR *p) {
    struct_84 *o = m->field_20;
    m->field_4[0].m1.field_2 = p->vx;
    m->field_4[1].m1.field_2 = p->vy;
    m->field_4[2].m1.field_2 = p->vz;
    m->field_4[0].m1.field_0 = m->field_4[1].m1.field_0 = m->field_4[2].m1.field_0 = 0;
    if (o != NULL) {
        o->field_10.vy = p->pad;
        func_8012B2CC(m);
    }
}

/* take pending damage (+0x60), scaled by the init record's damageScale (at least 1); a type 0x1D hit notes the position */
void func_8012E9C0(struct_10C *a) {
    s32 n;
    if (a->field_60 != 0) {
        if (*(u8 *)&a->field_5E == 0x1D) {
            a->field_82 = 0;
            a->field_7C[0] = a->field_4[0].m1.field_2;
            a->field_7C[1] = a->field_4[1].m1.field_2;
            a->field_7C[2] = a->field_4[2].m1.field_2;
        }
        if (a->field_78 != NULL) {
            n = (a->field_60 * ((struct_34_2 *)a->field_78)->field_30) >> 12;
            if (n <= 0) {
                n = 1;
            }
        } else {
            n = a->field_60;
        }
        func_8016AA50(a, n);
        if (a->field_82 & 1) {
            func_8016B428(a);
            func_80019064(D_8018D860);
        }
    }
}

/* a part's local matrix from the model's current pose (8- or 12-byte records; none: the model's own matrix) */
void func_8012EA90(struct_10C *a, s32 part, MATRIX *out) {
    struct_84 *o = a->field_20;
    struct_C *p = o->field_20;
    SVECTOR r;
    SVECTOR unused;                 /* the original's frame has room for a second vector */
    if (p == NULL) {
        *out = *(MATRIX *)&o->field_30.field_4;
    } else if ((u32)p & 0x01000000) {
        struct_8_3 *q = (struct_8_3 *)((u32)p & 0xFEFFFFFF) + part;
        s32 w;
        r.vx = q->field_6;
        w = *(s32 *)q;
        r.vy = q->field_1 | ((w & 0xF) << 8);
        r.vz = ((w >> 16) & 0xFF) | ((w & 0xF0) << 4);
        RotMatrixZYX(&r, out);
        out->t[0] = q->field_3[0];
        out->t[1] = q->field_3[1];
        out->t[2] = q->field_3[2];
    } else {
        p += part;
        r.vx = p->field_6[0];
        r.vy = p->field_6[1];
        r.vz = p->field_6[2];
        RotMatrixZYX(&r, out);
        out->t[0] = p->field_0[0];
        out->t[1] = p->field_0[1];
        out->t[2] = p->field_0[2];
    }
}

void func_8012EC04(struct_10C *a, s32 part, MATRIX *out) {
    struct_84 *o = a->field_20;
    struct_C *p = o->field_20;
    SVECTOR r;
    SVECTOR unused;
    if (p == NULL) {
        *out = *(MATRIX *)&o->field_30.field_4;
    } else if ((u32)p & 0x01000000) {
        struct_8_3 *q = (struct_8_3 *)((u32)p & 0xFEFFFFFF) + part;
        s32 w;
        r.vx = q->field_6;
        w = *(s32 *)q;
        r.vy = q->field_1 | ((w & 0xF) << 8);
        r.vz = ((w >> 16) & 0xFF) | ((w & 0xF0) << 4);
        RotMatrixZYX(&r, out);
        out->t[0] = q->field_3[0];
        out->t[1] = q->field_3[1];
        out->t[2] = q->field_3[2];
    } else {
        p += part;
        r.vx = p->field_6[0];
        r.vy = p->field_6[1];
        r.vz = p->field_6[2];
        RotMatrixZYX(&r, out);
        out->t[0] = p->field_0[0];
        out->t[1] = p->field_0[1];
        out->t[2] = p->field_0[2];
    }
    gte_SetRotMatrix(&a->field_20->field_30.field_4);
    gte_ldclmv(&out->m[0][0]);
    gte_rtir();
    gte_stclmv(&out->m[0][0]);
    gte_ldclmv(&out->m[0][1]);
    gte_rtir();
    gte_stclmv(&out->m[0][1]);
    gte_ldclmv(&out->m[0][2]);
    gte_rtir();
    gte_stclmv(&out->m[0][2]);
    gte_SetTransMatrix(&a->field_20->field_30.field_4);
    gte_ldlv0(out->t);
    gte_rtv0tr();
    gte_stlvnl(out->t);
}

/* x less x * func_8002A4FC() * 100 / 7680 */
s32 func_8012EECC(s32 x) {
    return x - x * func_8002A4FC() * 100 / 7680;
}

/* a point to the screen: xy and depth (SZ) */
s32 func_8012EF34(SVECTOR *v, SVECTOR *out) {
    s32 z;
    s32 flag = func_8012EFB8(v, (s32 *)out);
    gte_stsz(&z);
    out->vz = z;
    return flag;
}

/* the same with the depth over 4 (an OT index) */
s32 func_8012EF70(SVECTOR *v, SVECTOR *out) {
    s32 z;
    s32 flag = func_8012EFB8(v, (s32 *)out);
    gte_stszotz(&z);
    out->vz = z;
    return flag;
}

/* a point through the world-to-screen matrix; returns the GTE flag */
s32 func_8012EFB8(SVECTOR *v, s32 *sxy) {
    MATRIX *mt;
    s32 flag;
    mt = &D_800AF630.field_18;
    gte_SetRotMatrix(mt);
    gte_SetTransMatrix(mt);
    gte_ldv0(v);
    gte_rtps();
    gte_stsxy(sxy);
    gte_stflg(&flag);
    return flag;
}

/* a world point (whole units) into a matrix's frame */
inline void func_8012F038(MATRIX *m, SVECTOR *in, SVECTOR *out) {
    VECTOR d;
    VECTOR r;
    d.vx = in->vx - m->t[0];
    d.vy = in->vy - m->t[1];
    d.vz = in->vz - m->t[2];
    ApplyTransposeMatrixLV(m, &d, &r);
    out->vx = r.vx;
    out->vy = r.vy;
    out->vz = r.vz;
}

/* the same for a 16.16 point */
void func_8012F0BC(MATRIX *m, VECTOR *in, VECTOR *out) {
    VECTOR d;
    VECTOR r;
    d.vx = in->vx - (m->t[0] << 16);
    d.vy = in->vy - (m->t[1] << 16);
    d.vz = in->vz - (m->t[2] << 16);
    ApplyTransposeMatrixLV(m, &d, &r);
    out->vx = r.vx;
    out->vy = r.vy;
    out->vz = r.vz;
}

/* a point of a matrix's frame into the world (whole units) */
void func_8012F14C(MATRIX *m, SVECTOR *in, SVECTOR *out) {
    s32 flag;
    SetRotMatrix(m);
    SetTransMatrix(m);
    RotTransSV(in, out, &flag);
}

/* the same for a 16.16 point */
void func_8012F1A4(MATRIX *m, VECTOR *in, VECTOR *out) {
    ApplyMatrixLV(m, in, out);
    out->vx += m->t[0] << 16;
    out->vy += m->t[1] << 16;
    out->vz += m->t[2] << 16;
}

/* a point of an actor's model frame in the world (named before its use was known) */
inline void func_8012F214(struct_10C *a, SVECTOR *in, SVECTOR *out) {
    MATRIX *m = (MATRIX *)&a->field_20->field_30.field_4;
    s32 flag;
    SetRotMatrix(m);
    SetTransMatrix(m);
    RotTransSV(in, out, &flag);
}

/* a 16.16 point from the actor's model frame into the world (whole units) */
void func_8012F274(struct_10C *a, union_4 *p) {
    SVECTOR in;
    SVECTOR out;
    func_80015978(p, &in);
    func_8012F214(a, &in, &out);
    func_80015954(&out, p);
}

/* a world point into the actor's model frame */
void func_8012F2E8(struct_10C *a, SVECTOR *in, SVECTOR *out) {
    func_8012F038((MATRIX *)&a->field_20->field_30.field_4, in, out);
}

/* Musashi's other point in the actor's model frame */
void func_8012F374(struct_10C *a, SVECTOR *out) {
    func_8012F038((MATRIX *)&a->field_20->field_30.field_4, (SVECTOR *)D_80126B58.field_15C, out);
}

/* a point on the screen (0 when the GTE flags an error) */
inline s32 *func_8012F40C(s32 *out, SVECTOR *v) {
    s32 sxy = 0;
    s32 p;
    s32 flag;
    func_8012E32C();
    RotTransPers(v, &sxy, &p, &flag);
    if (flag < 0) {
        *out = sxy = 0;
    } else {
        *out = sxy;
    }
    return out;
}

/* Matched 17 Oct: &w through a pointer variable, so its pseudo has two uses and stays in s0 across the inlined call
   (docs/decomp_recipes.md). A point of the actor's model frame on the screen (0 when the GTE flags an error) */
s32 *func_8012F49C(s32 *out, struct_10C *a, SVECTOR *v) {
    SVECTOR w;
    s32 r;
    SVECTOR *wp = &w;
    MATRIX *m = (MATRIX *)&a->field_20->field_30.field_4;
    SetRotMatrix(m);
    SetTransMatrix(m);
    RotTransSV(v, wp, &r);
    *out = *func_8012F40C(&r, wp);
    return out;
}

/* note a hit on Musashi: flags, three values and the two points */
void func_8012F568(s32 flags, s32 b, s32 facing, s32 v, SVECTOR *p0, void *p1) {
    D_80126B58.field_E0 = *p0;
    D_80126B58.field_E8 = *(SVECTOR *)p1;
    D_80126B58.field_3E = b;
    D_80126B58.field_42 = facing;
    D_80126B58.field_40 = v;
    D_80126B58.field_3C |= flags;
}
