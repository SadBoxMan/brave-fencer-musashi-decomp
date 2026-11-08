/*
 * Stage engine, 0x8013B568-0x8013C98C: a source file built without optimisation (-O0: an fp frame, every
 * local and argument in its stack slot, no delay slots filled). Its neighbours are -O2 files: engine_8012F5F4.c
 * before it, engine_8013C98C.c after it (docs/stage_engine.md, "Source files"; docs/decomp_recipes.md section 6).
 */
#include "common.h"
#include "psyq.h"

/* 0x1C-byte records at D_801EF328 */
typedef struct {
    /* 0x00 */ s32 field_0;
    /* 0x04 */ u16 field_4;
    /* 0x06 */ u16 field_6;
    /* 0x08 */ u16 field_8;
    /* 0x0A */ u16 field_A;
    /* 0x0C */ s32 field_C;
    /* 0x10 */ s32 field_10;
    /* 0x14 */ s32 field_14;
    /* 0x18 */ s32 field_18;
} struct_1C;
extern struct_1C D_801EF328[];
typedef struct { u16 field_0, field_2, field_4; } struct_6;
/* D_801EF3F8: a sequence player (engine.c's frame step runs it while active) */
typedef struct {
    /* 0x00 */ s32 field_0;
    /* 0x04 */ s32 field_4;
    /* 0x08 */ s32 field_8;
    /* 0x0C */ s32 field_C;
    /* 0x10 */ u8 field_10[0x58];
    /* 0x68 */ s32 field_68;
} struct_6C;
extern void (*D_8018DC60)(void);
extern s32 D_801EF45C;
extern struct_6C D_801EF3F8;
extern void (*D_8018D4BC[])(struct_6C *p);
extern s32 D_801EF3DC;
extern s32 D_801EF3E0;
extern s32 D_801EF3E4;
extern u8 D_801EF408[];     /* a GsCOORDINATE2 */
extern s32 D_801EF458;
extern s32 D_801EF460;      /* the loaded block's mode ('B' 0, 'C' to 'N' 1 to 0x10) */
extern s16 D_800B9A0E;
extern void GsInitCoordinate2(void *super, void *c);
void func_8013B83C(u8 *a, u8 *b, s32 c);
void func_8013C08C(struct_6C *p, s32 n);
void func_8013BD74(struct_6C *p, u8 *a);
void func_8013C0F8(s32 *h);

void func_8013B568(void (*f)(void)) {
    D_8018DC60 = f;
}

void func_8013B598(s32 i, struct_6 *v) {
    D_801EF328[i].field_0 = 1;
    D_801EF328[i].field_4 = v->field_0;
    D_801EF328[i].field_6 = v->field_2;
    D_801EF328[i].field_8 = v->field_4;
    D_801EF328[i].field_C = 0x100;
}

void func_8013B6A0(s32 i, struct_6 *v, s32 n) {
    D_801EF328[i].field_0 = 1;
    D_801EF328[i].field_4 = v->field_0;
    D_801EF328[i].field_6 = v->field_2;
    D_801EF328[i].field_8 = v->field_4;
    D_801EF328[i].field_C = n;
}

void func_8013B7AC(s32 i) {
    D_801EF328[i].field_0 = 0;
}

void func_8013B7F4(u8 *a, u8 *b) {
    func_8013B83C(a, b, D_801EF45C);
}

extern RECT D_801EF2D0;
/* a loaded block's relocation record (12 bytes): the word to patch, its type in the top byte */
typedef struct {
    /* 0x00 */ u8 field_0, field_1, field_2;      /* the word to patch (24 bits) */
    /* 0x03 */ u8 field_3;
    /* 0x04 */ s32 field_4;
    /* 0x08 */ s32 field_8;
} struct_C_3;
/* a section of a loaded block (0x14 bytes) */
typedef struct {
    /* 0x00 */ s32 field_0;
    /* 0x04 */ s32 field_4;
    /* 0x08 */ s32 field_8;
    /* 0x0C */ u32 field_C;
    /* 0x10 */ struct_C_3 *field_10;
} struct_14_2;

void func_8013B83C(u8 *a, u8 *b, s32 c) {
    s32 i;

    D_801EF3F8.field_0 = 0;
    D_801EF3E4 = 0;
    D_801EF3E0 = 0;
    D_801EF3DC = 0;
    GsInitCoordinate2(NULL, D_801EF408);
    if (a == NULL) {
        return;
    }
    D_801EF458 = c + 500;
    D_801EF45C = c;
    for (i = 0; i < 4; i++) {
        D_801EF328[i].field_0 = 0;
        D_801EF328[i].field_4 = D_801EF328[i].field_6 = D_801EF328[i].field_8 = 0x6000;
        D_801EF328[i].field_C = 0x100;
        D_801EF328[i].field_18 = 0;
    }
    switch (a[0]) {
    case 'B':
        if (D_800B9A0E == 0) {
            func_8013BD74(&D_801EF3F8, a);
        } else {
            func_8013BD74(&D_801EF3F8, b);
        }
        D_801EF460 = 0;
        break;
    case 'C':
        func_8013C08C(&D_801EF3F8, (s32)a);
        D_801EF460 = 1;
        break;
    case 'D':
        func_8013C08C(&D_801EF3F8, (s32)a);
        D_801EF460 = 2;
        break;
    case 'E':
        func_8013C08C(&D_801EF3F8, (s32)a);
        D_801EF460 = 3;
        break;
    case 'F':
        func_8013C08C(&D_801EF3F8, (s32)a);
        D_801EF460 = 4;
        break;
    case 'G':
        func_8013C08C(&D_801EF3F8, (s32)a);
        D_801EF460 = 5;
        break;
    case 'H':
        func_8013C08C(&D_801EF3F8, (s32)a);
        D_801EF460 = 6;
        break;
    case 'I':
        func_8013C08C(&D_801EF3F8, (s32)a);
        D_801EF460 = 9;
        break;
    case 'J':
        func_8013C08C(&D_801EF3F8, (s32)a);
        D_801EF460 = 0xC;
        break;
    case 'K':
        func_8013C08C(&D_801EF3F8, (s32)a);
        D_801EF460 = 0xD;
        break;
    case 'L':
        func_8013C08C(&D_801EF3F8, (s32)a);
        D_801EF460 = 0xE;
        break;
    case 'M':
        func_8013C08C(&D_801EF3F8, (s32)a);
        D_801EF460 = 0xF;
        break;
    case 'N':
        func_8013C08C(&D_801EF3F8, (s32)a);
        D_801EF460 = 0x10;
        break;
    }
}

void func_8013BC7C(struct_6C *p) {
    D_8018D4BC[p->field_68](p);
}

void func_8013BCDC(void) {
    s32 unused[4];

    if (D_8018DC60 != NULL) {
        D_8018DC60();
    }
}

void func_8013BD34(u8 *a) {
    func_8013BD74(&D_801EF3F8, a);
}

void func_8013BD74(struct_6C *p, u8 *a) {
    s32 *m;
    s32 *e;
    s32 i;
    s32 unusedC;
    s32 unused10;
    struct_C_3 *r;
    struct_C_3 *end;
    s32 unused1C;
    s32 k;

    D_801EF2D0.x = -0xA0;
    D_801EF2D0.y = -0x78;
    D_801EF2D0.w = 0x140;
    D_801EF2D0.h = 0xF0;
    p->field_8 = (s32)a;
    p->field_C = (s32)(a + 8);
    k = (s32)(a + 0x4008);
    if (a[4] == 0) {
        for (e = (s32 *)p->field_C, i = 0; i < 0x1000; e++, i++) {
            if (*e != 0) {
                *e = *e + p->field_C;
                m = (s32 *)*e;
                m[0] = m[0] + (s32)m;
                m[5] = m[5] + (s32)m;
                r = (struct_C_3 *)m[5];
                m[6] = m[6] * 12 + m[5];
                end = (struct_C_3 *)m[6];
                for (; r < end; r++) {
                    switch (r->field_3) {
                    case 0x24: case 0x2C: case 0x34: case 0x3C:
                        *(u32 *)r = (*(u32 *)r & 0xFFFFFF) + k;
                        break;
                    case 0x26: case 0x2E: case 0x36: case 0x3E:
                        *(u32 *)r = (*(u32 *)r & 0xFFFFFF) + k;
                        break;
                    }
                }
            }
        }
        a[4] = 1;
    }
}

void func_8013C08C(struct_6C *p, s32 n) {
    s32 q = n;
    p->field_8 = n;
    p->field_C = q + 0x14;
    func_8013C0F8((s32 *)n);
}

void func_8013C0F8(s32 *h) {
    s32 *base;
    s32 t;
    u32 i;
    u32 j;
    struct_C_3 *r;
    struct_14_2 *s;

    base = h + 5;
    if (*(u8 *)(h + 1) == 0) {
        t = (s32)base + h[3];
        h[3] = t;
        h[4] = h[4] + (s32)base;
        for (s = (struct_14_2 *)base, i = 0; i < h[2]; i++, s++) {
            s->field_10 = (struct_C_3 *)((s32)s->field_10 + (s32)base);
            for (r = s->field_10, j = 0; j < s->field_C; j++, r++) {
                switch (r->field_3) {
                case 0x24: case 0x2C: case 0x34: case 0x3C:
                    *(u32 *)r = (*(u32 *)r & 0xFFFFFF) + t;
                    break;
                case 0x26: case 0x2E: case 0x36: case 0x3E:
                    *(u32 *)r = (*(u32 *)r & 0xFFFFFF) + t;
                    break;
                }
            }
        }
        *(u8 *)(h + 1) = 1;
    }
}

void func_8013C360(s32 *p) {
    s32 *e = p + 4;
    u32 i;
    for (i = 0; i < p[2]; i++) {
        *(s32 *)e[0] = e[1];
        e += 3;
    }
}

void func_8013C414(u8 *a, s32 *b) {
    s32 base;
    s32 *e;
    s32 *m;
    s32 k0;
    s32 k1;
    u32 i;
    s32 unused;
    s32 k2;
    struct_C_3 *r;
    struct_C_3 *end;

    if (b[1] == 0) {
        base = (s32)(b + 4);
        k0 = (s32)(a + 0x4008);
        k1 = b[3] + base;
        k2 = (s32)(a + 8);
        for (e = (s32 *)base, i = 0; i < b[2]; e += 3, i++) {
            e[0] = e[0] + k2;
            if (e[1] != 0) {
                e[1] = e[1] + base;
                m = (s32 *)e[1];
                m[0] = m[0] + (s32)m;
                m[5] = m[5] + (s32)m;
                r = (struct_C_3 *)m[5];
                m[6] = m[6] * 12 + m[5];
                end = (struct_C_3 *)m[6];
                for (; r < end; r++) {
                    switch (r->field_3) {
                    case 0x24: case 0x2C: case 0x34: case 0x3C:
                        if (*(u32 *)r & 0x800000) {
                            *(u32 *)r = (*(u32 *)r & 0x7FFFFF) + k1;
                        } else {
                            *(u32 *)r = (*(u32 *)r & 0xFFFFFF) + k0;
                        }
                        break;
                    case 0x26: case 0x2E: case 0x36: case 0x3E:
                        if (*(u32 *)r & 0x800000) {
                            *(u32 *)r = (*(u32 *)r & 0x7FFFFF) + k1;
                        } else {
                            *(u32 *)r = (*(u32 *)r & 0xFFFFFF) + k0;
                        }
                        break;
                    }
                }
            }
        }
        b[1] = 1;
        for (e = b + 4, i = 0; i < b[2]; e += 3, i++) {
            if (e[2] == 0) {
                e[2] = *(s32 *)e[0];
            }
        }
    } else {
        for (e = b + 4, i = 0; i < b[2]; e += 3, i++) {
            *(s32 *)e[0] = e[2];
        }
    }
}

void func_8013C938(void) {
    D_801EF3F8.field_0 = 1;
}

void func_8013C964(void) {
    D_801EF3F8.field_0 = 0;
}
