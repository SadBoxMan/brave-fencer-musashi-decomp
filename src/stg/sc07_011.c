#include "common.h"
#include "gte.h"
#include "psyq.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc07_011_8017BE9C(void) {
}

void func_sc07_011_8017BEA4(void) {
}

void func_sc07_011_8017BEAC(void) {
}

void func_sc07_011_8017BEB4(void) {
}

typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_4;
typedef struct { s16 field_0[6]; } struct_C_3;
extern void (*D_sc07_011_80182178[])();
typedef struct { s16 field_0, field_2; } struct_4_2;
typedef struct { struct_4_2 field_0; s16 field_4; s16 field_6; struct_4_2 field_8; s32 field_C; s32 field_10; s32 field_14; s32 field_18; } struct_1C;
typedef struct { s32 field_0, field_4, field_8; } struct_C_4;
void func_sc07_011_8017D558(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc07_011_80182180[])();
extern void (*D_sc07_011_8018218C[])();
void func_sc07_011_8017D650(void);
extern void (*D_sc07_011_80182194[])();
void func_sc07_011_8017D720(void);
extern void (*D_sc07_011_8018219C[])();
void func_sc07_011_8017D7F0(void);
extern void (*D_sc07_011_801821A4[])();
extern void (*D_sc07_011_801821B0[])();
extern void (*D_sc07_011_801821BC[])();
extern u8 D_sc07_011_801821C8;
extern void func_8016EE40();
extern u8 D_sc07_011_80182204;
extern u8 D_sc07_011_80182218;
extern u8 D_sc07_011_80182268;
extern u8 D_sc07_011_801822B8;
extern void func_sc07_011_8017D930();
extern void (*D_sc07_011_80182308[])();
extern void (*D_sc07_011_8018230C[])();
extern void (*D_sc07_011_80182320[])();
extern void (*D_sc07_011_8018237C[])();
extern void (*D_sc07_011_8018BC48[])();
extern s32 func_sc07_011_8017E56C();



extern void func_80171928();
extern void func_sc07_011_8017E5F0();
extern void func_8012AD50();
extern void func_80146C3C();
extern s32 func_sc07_011_8017E5C4();
extern s32 func_80146994();
extern u8 D_80126B58;
extern s32 func_8014C050();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();

extern void func_80171A80();
extern void func_80171990();
extern s32 func_80171A88();
extern u8 D_sc07_011_80182090;
extern void func_800D1724();
extern u8 D_sc07_011_801820B4;
extern u8 D_sc07_011_801820D8;
extern u8 D_80126948;
extern s32 D_80126954;
extern s32 D_8012695C;
extern s16 D_80126968;
extern s16 D_8012696A;
extern s16 D_8012696C;
extern s16 D_80126976;
extern s16 D_80126978;
extern s16 D_8012697A;
extern void func_8012A018();
extern void func_8012A094();
extern s16 D_800B9B0E;
extern s32 D_80126950;
extern u8 D_sc07_011_80189F0C;
extern void func_80175014();
extern void func_80129FF4();
extern void func_80174E9C();
extern s32 func_8012B2CC();
extern void func_80016714();
extern s32 func_8012C098();

extern void func_800CFBCC();
extern u8 D_sc07_011_8018BB50;
extern u8 D_sc07_011_8018BB78;
extern void func_80017254();
extern void func_800176F0();

extern u8 D_sc07_011_80182330;
extern void func_8001C214();

typedef struct { s16 field_0[3][3]; s16 field_12; s32 field_14[3]; } struct_20_3;
typedef struct { u32 field_0; u32 field_4; u32 field_8; u32 field_C; u32 *field_10; } struct_14_2;
typedef struct { s32 field_0; s32 field_4; s32 field_8; s32 field_C; s32 field_10; s32 field_14; s32 field_18; } struct_1C_2;
extern u8 *D_800A5E60;
extern u16 D_800B9A02;
extern u32 D_800A6610[2][0x1000];

void func_sc07_011_8017BEBC(u8 *obj) {
    s32 tmp[3];
    volatile struct_8_4 box[8];
    struct_8_4 scr[8];
    struct_20_3 ls;
    struct_1C_2 g;
    s32 zlim;
    s32 i;
    s32 n;
    u8 *pk;
    u32 *ot;
    u8 *hdr;
    u8 *verts;
    struct_14_2 *c;
    u32 *poly;
    u32 nf;
    u32 j;
    u32 w;
    u32 x, y;
    s32 hi, lo, hi2, lo2, h, l;
    s16 xh, xl, yh, yl;
    s32 a, b;
    s32 type;
    u8 *d;
    u8 *d3;
    u32 w2;
    u32 *t;

    zlim = ReadGeomScreen() + AF(obj, s32, 0x64);
    GsGetLs(obj + 0x10, &ls);
    GsSetLsMatrix(&ls);
    pk = D_800A5E60;
    ot = D_800A6610[D_800B9A02];
    c = AF(obj, struct_14_2 *, 0xC);
    hdr = AF(obj, u8 *, 8);
    n = AF(hdr, s32, 8);
    verts = AF(hdr, u8 *, 0x10);
    for (i = 0; i < n; i++, c++) {
        y = c->field_4;
        xl = c->field_0;
        xh = c->field_0 >> 16;
        yl = y;
        yh = y >> 16;
        x = c->field_8;
        y = x >> 16;
        box[0].field_0 = xl; box[0].field_2 = yl;
        box[1].field_0 = xh; box[1].field_2 = yl;
        box[2].field_0 = xl; box[2].field_2 = yl;
        box[3].field_0 = xh; box[3].field_2 = yl;
        box[4].field_0 = xl; box[4].field_2 = yh;
        box[5].field_0 = xh; box[5].field_2 = yh;
        box[6].field_0 = xl; box[6].field_2 = yh;
        box[7].field_0 = xh; box[7].field_2 = yh;
        box[0].field_4 = x;
        box[1].field_4 = x;
        box[4].field_4 = x;
        box[5].field_4 = x;
        box[2].field_4 = y;
        box[3].field_4 = y;
        box[6].field_4 = y;
        box[7].field_4 = y;
        gte_ldv3c(&box[0]);
        gte_rtpt();
        gte_stsxy3(&scr[0], &scr[1], &scr[2]);
        gte_ldv0(&box[3]);
        gte_rtps();
        gte_stsxy(&scr[3]);
        gte_ldv3c(&box[4]);
        gte_rtpt();
        gte_stsxy3(&scr[4], &scr[5], &scr[6]);
        gte_ldv0(&box[7]);
        gte_rtps();
        gte_stsxy(&scr[7]);
        gte_stszotz(&g.field_0);
        if (g.field_0 > zlim) continue;

        if (scr[0].field_0 > scr[1].field_0) { hi = scr[0].field_0; lo = scr[1].field_0; } else { lo = scr[0].field_0; hi = scr[1].field_0; }
        if (scr[2].field_0 > hi) hi = scr[2].field_0; else if (scr[2].field_0 < lo) lo = scr[2].field_0;
        if (scr[3].field_0 > hi) hi = scr[3].field_0; else if (scr[3].field_0 < lo) lo = scr[3].field_0;
        if (scr[4].field_0 > scr[5].field_0) { hi2 = scr[4].field_0; lo2 = scr[5].field_0; } else { lo2 = scr[4].field_0; hi2 = scr[5].field_0; }
        if (scr[6].field_0 > hi2) hi2 = scr[6].field_0; else if (scr[6].field_0 < lo2) lo2 = scr[6].field_0;
        if (scr[7].field_0 > hi2) hi2 = scr[7].field_0; else if (scr[7].field_0 < lo2) lo2 = scr[7].field_0;
        l = lo; if (lo2 < l) l = lo2;
        h = hi; if (h < hi2) h = hi2;
        if ((s16)h < -160 || (s16)l > 160) continue;

        if (scr[0].field_2 > scr[1].field_2) { hi = scr[0].field_2; lo = scr[1].field_2; } else { lo = scr[0].field_2; hi = scr[1].field_2; }
        if (scr[2].field_2 > hi) hi = scr[2].field_2; else if (scr[2].field_2 < lo) lo = scr[2].field_2;
        if (scr[3].field_2 > hi) hi = scr[3].field_2; else if (scr[3].field_2 < lo) lo = scr[3].field_2;
        if (scr[4].field_2 > scr[5].field_2) { hi2 = scr[4].field_2; lo2 = scr[5].field_2; } else { lo2 = scr[4].field_2; hi2 = scr[5].field_2; }
        if (scr[6].field_2 > hi2) hi2 = scr[6].field_2; else if (scr[6].field_2 < lo2) lo2 = scr[6].field_2;
        if (scr[7].field_2 > hi2) hi2 = scr[7].field_2; else if (scr[7].field_2 < lo2) lo2 = scr[7].field_2;
        l = lo; if (lo2 < l) l = lo2;
        h = hi; if (h < hi2) h = hi2;
        if ((s16)h < -120 || (s16)l > 120) continue;

        poly = c->field_10;
        nf = c->field_C;
        for (j = 0; j < nf; j++, poly += 3) {
            w = poly[1];
            a = (s32)(verts + (w & 0xFFFF));
            b = (s32)(verts + (w >> 16));
            w = poly[2];
            d3 = verts + (w & 0xFFFF);
            w >>= 16;
            gte_ldv3(a, b, d3);
            gte_rtpt();
            gte_stflg(&g.field_4);
            if (g.field_4 & 0x7F85E000) continue;
            gte_nclip();
            type = w & 7;
            d = verts + (w & 0xFFF8);
            gte_stopz(&g.field_8);
            if (g.field_8 <= 0) continue;
            switch (type) {
            case 4:
            case 5:
            { u32 *otp; s16 p0, p1, p2, q0, q1, q2; s32 m, m2;
                gte_stsxy3_f3(pk);
                gte_stsz3(&g.field_C, &g.field_10, &g.field_14);
                p0 = AF(pk, s16, 8); p1 = AF(pk, s16, 0xC);
                if (p0 > p1) { xh = p0; xl = p1; } else { xl = p0; xh = p1; }
                p2 = AF(pk, s16, 0x10);
                if (p2 > xh) xh = p2; else if (p2 < xl) xl = p2;
                if (xh < -160 || xl > 160) continue;
                q0 = AF(pk, s16, 0xA); q1 = AF(pk, s16, 0xE);
                if (q0 > q1) { yh = q0; yl = q1; } else { yl = q0; yh = q1; }
                q2 = AF(pk, s16, 0x12);
                if (q2 > yh) yh = q2; else if (q2 < yl) yl = q2;
                if (yh < -120 || yl > 120) continue;
                if (g.field_C > g.field_10) { m = g.field_C; if (m < g.field_14) m = g.field_14; } else { m = g.field_10; if (m < g.field_14) m = g.field_14; }
                g.field_8 = m;
                if (type != 4) g.field_8 = m + 0x200;
                AF(pk, u32, 4) = poly[0];
                otp = (u32 *)(((g.field_8 >> 2) << 2) + (u32)ot);
                *(u32 *)pk = (*otp & 0xFFFFFF) | 0x4000000;
                *otp = (*otp & 0xFF000000) | ((u32)pk & 0xFFFFFF);
                pk += 0x14;
                break;
            }
            case 6:
            case 7:
            { u32 *otp; s16 p0, p1, p2, q0, q1, q2; s32 m, m2;
                gte_stsxy3_ft3(pk);
                gte_stsz3(&g.field_C, &g.field_10, &g.field_14);
                p0 = AF(pk, s16, 8); p1 = AF(pk, s16, 0x10);
                if (p0 > p1) { xh = p0; xl = p1; } else { xl = p0; xh = p1; }
                p2 = AF(pk, s16, 0x18);
                if (p2 > xh) xh = p2; else if (p2 < xl) xl = p2;
                if (xh < -160 || xl > 160) continue;
                q0 = AF(pk, s16, 0xA); q1 = AF(pk, s16, 0x12);
                if (q0 > q1) { yh = q0; yl = q1; } else { yl = q0; yh = q1; }
                q2 = AF(pk, s16, 0x1A);
                if (q2 > yh) yh = q2; else if (q2 < yl) yl = q2;
                if (yh < -120 || yl > 120) continue;
                if (g.field_C > g.field_10) { m = g.field_C; if (m < g.field_14) m = g.field_14; } else { m = g.field_10; if (m < g.field_14) m = g.field_14; }
                g.field_8 = m;
                if (type == 7) g.field_8 = m + 0x200;
                t = (u32 *)poly[0];
                AF(pk, u32, 4) = t[0];
                AF(pk, u32, 0xC) = t[1];
                AF(pk, u32, 0x14) = t[2];
                AF(pk, u16, 0x1C) = t[3];
                otp = (u32 *)(((g.field_8 >> 2) << 2) + (u32)ot);
                *(u32 *)pk = (*otp & 0xFFFFFF) | 0x7000000;
                *otp = (*otp & 0xFF000000) | ((u32)pk & 0xFFFFFF);
                pk += 0x20;
                break;
            }
            case 0:
            case 1:
            { u32 *otp; s16 p0, p1, p2, p3, q0, q1, q2, q3; s32 za, zb, zc;
                gte_stsxy3_f4(pk);
                gte_ldv0(d);
                gte_rtps();
                p0 = AF(pk, s16, 8); p1 = AF(pk, s16, 0xC);
                if (p0 > p1) { xh = p0; xl = p1; } else { xl = p0; xh = p1; }
                p2 = AF(pk, s16, 0x10);
                if (p2 > xh) xh = p2; else if (p2 < xl) xl = p2;
                q0 = AF(pk, s16, 0xA); q1 = AF(pk, s16, 0xE);
                if (q0 > q1) { yh = q0; yl = q1; } else { yl = q0; yh = q1; }
                q2 = AF(pk, s16, 0x12);
                if (q2 > yh) yh = q2; else if (q2 < yl) yl = q2;
                gte_stflg(&g.field_4);
                if (g.field_4 & 0x7F85E000) continue;
                gte_stsz4(&g.field_C, &g.field_10, &g.field_14, &g.field_18);
                gte_stsxy(pk + 0x14);
                p3 = AF(pk, s16, 0x14);
                if (p3 < xl) xl = p3; else if (p3 > xh) xh = p3;
                if (xh < -160 || xl > 160) continue;
                q3 = AF(pk, s16, 0x16);
                if (q3 < yl) yl = q3; else if (q3 > yh) yh = q3;
                if (yh < -120 || yl > 120) continue;
                za = g.field_14; if (za < g.field_18) za = g.field_18;
                zb = g.field_C; if (zb < g.field_10) zb = g.field_10;
                zc = zb;
                if (zc < za) zc = za;
                g.field_8 = zc;
                otp = (u32 *)(((zc >> 2) << 2) + (u32)ot);
                AF(pk, u32, 4) = poly[0];
                *(u32 *)pk = (*otp & 0xFFFFFF) | 0x5000000;
                *otp = (*otp & 0xFF000000) | ((u32)pk & 0xFFFFFF);
                pk += 0x18;
                break;
            }
            case 2:
            case 3:
            { u32 *otp; u32 tw; s16 p0, p1, p2, p3, q0, q1, q2, q3; s32 za, zb, zc;
                gte_stsxy3c(tmp);
                gte_ldv0(d);
                gte_rtps();
                p0 = AF(tmp, s16, 0); p1 = AF(tmp, s16, 4);
                if (p0 > p1) { xh = p0; xl = p1; } else { xl = p0; xh = p1; }
                p2 = AF(tmp, s16, 8);
                if (p2 > xh) xh = p2; else if (p2 < xl) xl = p2;
                q0 = AF(tmp, s16, 2); q1 = AF(tmp, s16, 6);
                if (q0 > q1) { yh = q0; yl = q1; } else { yl = q0; yh = q1; }
                q2 = AF(tmp, s16, 0xA);
                if (q2 > yh) yh = q2; else if (q2 < yl) yl = q2;
                gte_stflg(&g.field_4);
                if (g.field_4 & 0x7F85E000) continue;
                gte_stsz4(&g.field_C, &g.field_10, &g.field_14, &g.field_18);
                gte_stsxy(pk + 0x20);
                p3 = AF(pk, s16, 0x20);
                if (p3 < xl) xl = p3; else if (p3 > xh) xh = p3;
                if (xh < -160 || xl > 160) continue;
                q3 = AF(pk, s16, 0x22);
                if (q3 < yl) yl = q3; else if (q3 > yh) yh = q3;
                if (yh < -120 || yl > 120) continue;
                za = g.field_14; if (za < g.field_18) za = g.field_18;
                zb = g.field_C; if (zb < g.field_10) zb = g.field_10;
                if (zb < za) zb = za;
                g.field_8 = zb;
                if (type == 3) g.field_8 = zb + 0x200;
                AF(pk, s32, 8) = tmp[0];
                AF(pk, s32, 0x10) = tmp[1];
                AF(pk, s32, 0x18) = tmp[2];
                t = (u32 *)poly[0];
                AF(pk, u32, 4) = t[0];
                AF(pk, u32, 0xC) = t[1];
                AF(pk, u32, 0x14) = t[2];
                tw = t[3];
                AF(pk, u16, 0x1C) = tw;
                tw >>= 16;
                AF(pk, u16, 0x24) = tw;
                otp = (u32 *)(((g.field_8 >> 2) << 2) + (u32)ot);
                *(u32 *)pk = (*otp & 0xFFFFFF) | 0x9000000;
                *otp = (*otp & 0xFF000000) | ((u32)pk & 0xFFFFFF);
                pk += 0x28;
                break;
            }
            }
        }
    }
    D_800A5E60 = pk;
}

typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_4;
typedef struct { u8 field_0, field_1, field_2, field_3; } struct_4_3;
typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_5;
typedef struct { u16 field_0[6]; } struct_C_5;
typedef struct { u16 field_0, field_2, field_4, field_6; } struct_8_6;
typedef struct { u8 field_0, field_1, field_2, field_3; } struct_4_4;
typedef struct { struct_8_6 field_0; struct_8_6 field_8; struct_4_4 field_10; struct_4_4 field_14; s32 field_18; } struct_1C_3;
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_5;
typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_7;
typedef struct { struct_8_7 field_0[4]; struct_4_4 field_20[4]; s32 field_30; } struct_34_2;
typedef struct { s32 field_0, field_4, field_8, field_C; } struct_10;
typedef struct { u16 field_0; s16 field_2; s16 field_4; s16 field_6; s32 field_8; s32 field_C; } struct_10_2;
typedef struct { s16 field_0, field_2, field_4, field_6; u8 field_8, field_9; s16 field_A; struct_10_2 field_C[16]; } struct_10C_2;
typedef struct { u32 *field_0; u8 field_4[0x10]; } struct_14_3;
typedef struct { u8 field_0[0x14]; } struct_14_4;
typedef struct { unsigned field_0_b0 : 24; unsigned field_3_b0 : 8; } struct_4_5;
typedef struct { u8 field_0[8]; } struct_8_8;
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_6;
typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_9;
extern void func_sc07_011_8017D9B4();
extern s32 func_80012C6C();
extern s32 func_80012ABC();
extern void func_8012F14C();

typedef struct { struct_C_5 field_0[9]; } struct_6C;
typedef struct { s32 field_0, field_4, field_8, field_C; } struct_10_3;
typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_10;
typedef struct { s32 field_0, field_4, field_8, field_C; } struct_10_4;
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_7;
typedef struct { u8 field_0, field_1, field_2, field_3; } struct_4_6;
typedef struct { struct_8_10 field_0[4]; struct_4_6 field_20[4]; s32 field_30; } struct_34_3;
typedef struct { s32 field_0, field_4, field_8; } struct_C_6;
typedef void (*type_2)();
typedef struct { u8 field_0[0x18]; struct_20_5 field_18; } struct_38;
typedef struct { s32 field_0[4]; } struct_10_5;
typedef struct { struct_10_5 field_0, field_10, field_20; } struct_30_2;
typedef struct { u8 field_0[0x34]; } struct_34_4;
typedef struct { u8 field_0[0x10]; struct_4_2 field_10[12]; } struct_40;
typedef struct {
    u32 field_0;
    u8 field_4, field_5, field_6, field_7;
    s16 field_8, field_A;
    u8 field_C, field_D;
    u16 field_E;
    s16 field_10, field_12;
    u8 field_14, field_15;
    u16 field_16;
    s16 field_18, field_1A;
    u8 field_1C, field_1D;
    u16 field_1E;
    s16 field_20, field_22;
    u8 field_24, field_25;
    u16 field_26;
} struct_28;
typedef struct { u32 field_0; u32 field_4; } struct_8_11;
typedef struct { u8 field_0[0x10]; struct_4_2 field_10[13]; } struct_44;
extern u8 D_80126940;

typedef struct { u32 field_0_b0 : 24; u32 field_3_b0 : 8; } struct_4_7;
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_8;
typedef struct { struct_4_7 field_0; u8 field_4, field_5, field_6, field_7; s16 field_8, field_A, field_C, field_E, field_10, field_12, field_14, field_16; } struct_18;
typedef union { s32 m0; struct_4_2 m1; } union_4_2;
typedef struct { s16 field_0, field_2, field_4, field_6, field_8, field_A, field_C, field_E; s32 field_10; } struct_14_5;
typedef struct { struct_8_7 field_0[4]; s32 field_20[4]; s32 field_30; } struct_34_5;
typedef struct { struct_8_4 field_0[4]; s16 field_20[8]; s32 field_30; s32 field_34; u8 field_38; u8 field_39[7]; } struct_40_2;
typedef struct { s16 field_0, field_2, field_4, field_6, field_8; u16 field_A; s16 field_C, field_E; s32 field_10; } struct_14_6;
typedef struct { struct_4_3 field_0; struct_4_3 field_4; u8 field_8[0x38]; } struct_40_3;
typedef struct { u8 field_0[4]; } struct_4_8;
extern s32 func_801465C0();
extern struct_4_2 D_sc07_011_8018BAD4[];
extern u8 D_sc07_011_8018BB00[];
extern struct_4_8 D_sc07_011_8018BB0C[];
extern u8 D_sc07_011_8018BB38;
extern struct_4_8 D_sc07_011_8018BC38, D_sc07_011_8018BC34, D_sc07_011_8018BC04, D_sc07_011_8018BC00, D_sc07_011_8018BBD0, D_sc07_011_8018BBCC, D_sc07_011_8018BB9C, D_sc07_011_8018BB98, D_sc07_011_8018BB70;
extern void func_8001CBDC();

extern struct_8_4 D_sc07_011_8018233C[];
extern s32 func_800159E4();
extern s32 func_8012BB3C();
extern s32 func_80015978();

extern s32 D_800B9ADC[];
extern u8 D_sc07_011_80189DA4;
extern u8 D_sc07_011_80189DE0;
extern s32 *D_801274C8;
extern s32 *D_801274CC;

void func_sc07_011_8017CD9C(void) {
    D_801274C8 = &D_sc07_011_80189DA4;
    D_801274CC = &D_sc07_011_80189DE0;
    D_800B9ADC[0] |= 0x50000000;
}

extern u8 D_sc07_011_80189DF4;
extern u8 D_sc07_011_80189E30;
extern u8 D_sc07_011_80189E44;
extern u8 D_sc07_011_80189EF8;

void func_sc07_011_8017CDD8(void) {
    D_801274C8 = &D_sc07_011_80189DF4;
    D_801274CC = &D_sc07_011_80189E30;
    D_800B9ADC[0] |= 0x50000000;
}

void func_sc07_011_8017CE14(void) {
    D_801274C8 = &D_sc07_011_80189E44;
    D_801274CC = &D_sc07_011_80189EF8;
    D_800B9ADC[0] |= 0x50000000;
}

void func_sc07_011_8017CE50(u8 *arg0) {
    D_sc07_011_80182178[AF(arg0, u8, 0x15)]();
}

s32 func_sc07_011_8017CE8C(u8 *arg0) {
    func_sc07_011_8017D558();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc07_011_8017CED0(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc07_011_8017CEF4(u8 *arg0) {
    D_sc07_011_80182180[AF(arg0, u8, 0x15)]();
}

s32 func_sc07_011_8017CF30(u8 *arg0) {
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc07_011_8017CF4C(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_8002D4C8(0x1C, 0);
        func_8001BFD0();
        func_8002D4C8(0x1D, 0);
        func_800167B8(4);
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

s32 func_sc07_011_8017CFC0(void) {
    return (func_800167F0(4) & 0xFFFF) != 0;
}

void func_sc07_011_8017CFE4(u8 *arg0) {
    D_sc07_011_8018218C[AF(arg0, u8, 0x15)]();
}

s32 func_sc07_011_8017D020(u8 *arg0) {
    func_sc07_011_8017D650();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc07_011_8017D064(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc07_011_8017D088(u8 *arg0) {
    D_sc07_011_80182194[AF(arg0, u8, 0x15)]();
}

s32 func_sc07_011_8017D0C4(u8 *arg0) {
    func_sc07_011_8017D720();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc07_011_8017D108(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc07_011_8017D12C(u8 *arg0) {
    D_sc07_011_8018219C[AF(arg0, u8, 0x15)]();
}

s32 func_sc07_011_8017D168(u8 *arg0) {
    func_sc07_011_8017D7F0();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc07_011_8017D1AC(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc07_011_8017D1D0(u8 *arg0) {
    D_sc07_011_801821A4[AF(arg0, u8, 0x15)]();
}

s32 func_sc07_011_8017D20C(u8 *arg0) {
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc07_011_8017D228(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_8002D4C8(0x1C, 0);
        func_8001BFD0();
        func_8002D4C8(0x1D, 0);
        func_800D0C48(1);
        func_800167B8(4);
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

s32 func_sc07_011_8017D2A4(void) {
    if (func_800167F0(4) & 0xFFFF) {
        func_800CFBCC(2);
        return 1;
    }
    return 0;
}

void func_sc07_011_8017D2DC(u8 *arg0) {
    D_sc07_011_801821B0[AF(arg0, u8, 0x15)]();
}

s32 func_sc07_011_8017D318(u8 *arg0) {
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc07_011_8017D334(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_8002D4C8(0x1C, 0);
        func_8001BFD0();
        func_8002D4C8(0x1D, 0);
        func_800D0C48(1);
        func_800167B8(4);
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

s32 func_sc07_011_8017D3B0(void) {
    if (func_800167F0(4) & 0xFFFF) {
        func_800CFBCC(3);
        return 1;
    }
    return 0;
}

void func_sc07_011_8017D3E8(u8 *arg0) {
    D_sc07_011_801821BC[AF(arg0, u8, 0x15)]();
}

s32 func_sc07_011_8017D424(u8 *arg0) {
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc07_011_8017D440(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_8002D4C8(0x1C, 0);
        func_8001BFD0();
        func_8002D4C8(0x1D, 0);
        func_800D0C48(1);
        func_800167B8(4);
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

s32 func_sc07_011_8017D4BC(void) {
    if (func_800167F0(4) & 0xFFFF) {
        func_800CFBCC(4);
        return 1;
    }
    return 0;
}

void func_sc07_011_8017D4F4(s32 arg0) {
    func_sc07_011_8017E5C4(8);
    func_80171928(arg0);
}

void func_sc07_011_8017D528(s32 arg0) {
    func_sc07_011_8017E5F0();
    func_80171928(arg0);
}

void func_sc07_011_8017D558(void) {
    func_8016EE40((s32) &D_sc07_011_801821C8, 0x01000000);
}

void func_sc07_011_8017D580(void) {
    func_8016EE40((s32) &D_sc07_011_80182204, 0x01000000);
}

void func_sc07_011_8017D5A8(s32 arg0) {
    func_80171A80(arg0, 0x1E);
    func_80171990(arg0);
}

void func_sc07_011_8017D5DC(s32 arg0) {
    if (func_80171A88() != 0) {
        func_80171990(arg0);
    }
}

void func_sc07_011_8017D614(s32 arg0) {
    func_800D1724((s32) &D_sc07_011_80182090);
    func_80171928(arg0);
}

void func_sc07_011_8017D650(void) {
    func_8016EE40((s32) &D_sc07_011_80182218, 0x01000000);
}

void func_sc07_011_8017D678(s32 arg0) {
    func_80171A80(arg0, 0x1E);
    func_80171990(arg0);
}

void func_sc07_011_8017D6AC(s32 arg0) {
    if (func_80171A88() != 0) {
        func_80171990(arg0);
    }
}

void func_sc07_011_8017D6E4(s32 arg0) {
    func_800D1724((s32) &D_sc07_011_801820B4);
    func_80171928(arg0);
}

void func_sc07_011_8017D720(void) {
    func_8016EE40((s32) &D_sc07_011_80182268, 0x01000000);
}

void func_sc07_011_8017D748(s32 arg0) {
    func_80171A80(arg0, 0x1E);
    func_80171990(arg0);
}

void func_sc07_011_8017D77C(s32 arg0) {
    if (func_80171A88() != 0) {
        func_80171990(arg0);
    }
}

void func_sc07_011_8017D7B4(s32 arg0) {
    func_800D1724((s32) &D_sc07_011_801820D8);
    func_80171928(arg0);
}

void func_sc07_011_8017D7F0(void) {
    func_8016EE40((s32) &D_sc07_011_801822B8, 0x01000000);
}

void func_sc07_011_8017D818(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x4B0;
    D_80126968 = 0x155;
    D_8012696A = 0xA00;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc07_011_8017D930, 0);
    func_8012A094((s32) &D_80126948);
    func_sc07_011_8017D930((s32) &D_80126948);
}

void func_sc07_011_8017D8B0(void) {
    D_80126950 = 0x190;
    func_80175014((s32) &D_80126948, (s32) &D_sc07_011_80189F0C, 0);
    func_80129FF4();
    D_800B9B0E = 0;
}

void func_sc07_011_8017D8FC(void) {
    D_80126950 = 0x190;
    func_80174E9C((s32) &D_sc07_011_80189F0C);
}

void func_sc07_011_8017D930(s32 arg0) {
    D_sc07_011_80182308[AF(arg0, u8, 4)]();
}

void func_sc07_011_8017D96C(s32 arg0) {
    struct_8_8 v;

    v = *(struct_8_8 *)&D_80126940;
    func_sc07_011_8017D9B4(arg0, (s32) &v);
}

void func_sc07_011_8017D9B4(u8 *arg0, u8 *arg1) {
    struct_20_6 m;
    struct_8_9 v;
    struct_8_9 o;

    AF(arg0, s32, 8) = (s16) func_80012C6C(AF(arg0, s16, 8), AF(arg0, s16, 0xC), 4);
    AF(arg0, s32, 0x10) = (s16) func_80012C6C(AF(arg0, s16, 0x10), AF(arg0, s16, 0x14), 4);
    AF(arg0, s16, 0x18) = func_80012ABC(AF(arg0, s16, 0x18), AF(arg0, s16, 0x20), 4);
    AF(arg0, s16, 0x1A) = func_80012ABC(AF(arg0, s16, 0x1A), AF(arg0, s16, 0x22), 4);
    AF(arg0, s16, 0x1C) = func_80012ABC(AF(arg0, s16, 0x1C), AF(arg0, s16, 0x24), 4);
    AF(arg0, s16, 0x28) = func_80012C6C(AF(arg0, s16, 0x28), AF(arg0, s16, 0x2E), 0x10);
    AF(arg0, s16, 0x2A) = func_80012C6C(AF(arg0, s16, 0x2A), AF(arg0, s16, 0x30), 0x10);
    AF(arg0, s16, 0x2C) = func_80012C6C(AF(arg0, s16, 0x2C), AF(arg0, s16, 0x32), 0x10);
    AF(arg0, s32, 0x48) = AF(arg0, s16, 0x28) + AF(arg1, s16, 0);
    AF(arg0, s32, 0x4C) = AF(arg0, s16, 0x2A) + AF(arg1, s16, 2);
    AF(arg0, s32, 0x50) = AF(arg0, s16, 0x2C) + AF(arg1, s16, 4);
    RotMatrixZYX(arg0 + 0x18, &m);
    m.field_14[0] = AF(arg0, s16, 0x28) + AF(arg1, s16, 0);
    m.field_14[1] = AF(arg0, s16, 0x2A) + AF(arg1, s16, 2);
    m.field_14[2] = AF(arg0, s16, 0x2C) + AF(arg1, s16, 4);
    v.field_0 = 0;
    v.field_2 = 0;
    v.field_4 = AF(arg0, s32, 0x10);
    func_8012F14C(&m, &v, &o);
    AF(arg0, s32, 0x3C) = o.field_0;
    AF(arg0, s32, 0x40) = o.field_2;
    AF(arg0, s32, 0x44) = o.field_4;
}

s32 func_sc07_011_8017DB4C(void) {
    return 0x8D;
}

void func_sc07_011_8017DB54(u8 *arg0) {
    D_sc07_011_8018230C[AF(arg0, u16, 2)]();
}

extern s32 func_80014C54();
extern s32 func_800CF8B4();
extern s32 D_sc07_011_80182314[];
extern void func_80029514();
extern void func_8002AC00();
void func_sc07_011_8017DB90(u8 *o) {
    if ((s16)func_80014C54(0, 0, 0x800) != 0 || (s16)func_80014C54(0, 0, 0x40) != 0) {
        if (func_800CF8B4() != 0) {
            func_800D1724(D_sc07_011_80182314[AF(o, s16, 0x70)]);
            switch (AF(o, s16, 0x70)) {
            case 1:
                break;
            case 2:
                func_80029514(0x398);
                func_8002AC00(0x1D);
                break;
            case 0:
                break;
            }
            func_8012AD50((s32) o);
        }
    }
}

void func_sc07_011_8017DC50(void) {
}

void func_sc07_011_8017DC58(u8 *arg0) {
    D_sc07_011_80182320[AF(arg0, u16, 2)]();
}

void func_sc07_011_8017DC94(u8 *arg0) {
    AF(arg0, s16, 0xFC) = 0;
    func_8012AD50((s32) arg0);
}

extern s32 func_8012A758();
extern s16 D_800B9AB8;
extern s16 D_800B9B0C;
extern void func_8012A7D4();
extern u8 D_sc07_011_80182328;
extern s32 func_80013294();
void func_sc07_011_8017DCB4(u8 *o) {
    struct_8_4 a;
    struct_8_4 b;
    s16 v;
    s16 n;

    v = func_8012A758(o);
    D_800B9AB8 = v * 320 / 4096;
    n = AF(o, s16, 0xFC) + 1;
    AF(o, s16, 0xFC) = n;
    D_800B9B0C = n - v * 2560 / 4096;
    func_8012A7D4(&a, &b);
    D_800B9B0E = -((s16)func_80013294(&D_sc07_011_80182328, &a) / 6);
}

void func_sc07_011_8017DD78(u8 *arg0) {
    D_sc07_011_8018237C[AF(arg0, u16, 2)]();
}

extern s32 func_8012C1B8();
extern void func_8001C2C4();
extern s32 func_sc07_011_8017E294(s32 arg0);
extern s32 func_sc07_011_8017DF70(s32 arg0, s32 arg1, s32 arg2);
extern u8 D_sc07_011_8018D244;
extern u8 D_sc07_011_8018D51C;
extern u8 D_sc07_011_8018D7F4;
void func_sc07_011_8017DDB4(u8 *o) {
    s32 m;

    AF(o, s32, 0x20) = 0;
    AF(o, s32, 0xCC) = 0;
    AF(o, s32, 0xD0) = 0;
    AF(o, s32, 0x20) = m = func_8012C1B8();
    if (m != 0) {
        func_8001C2C4(m);
        AF(o, s32, 0xCC) = m = func_8012C1B8();
        if (m != 0) {
            func_8001C2C4(m);
            AF(o, s32, 0xD0) = m = func_8012C1B8();
            if (m != 0) {
                func_8001C2C4(m);
            }
        }
    }
    if (m == 0) {
        func_sc07_011_8017E294((s32) o);
        return;
    }
    func_sc07_011_8017DF70((s32) o, AF(o, s32, 0x20), (s32) &D_sc07_011_8018D244);
    func_sc07_011_8017DF70((s32) o, AF(o, s32, 0xCC), (s32) &D_sc07_011_8018D51C);
    func_sc07_011_8017DF70((s32) o, AF(o, s32, 0xD0), (s32) &D_sc07_011_8018D7F4);
    AF(o, s16, 0xFC) = (rand() & 3) << 10;
    AF(o, s16, 0xFE) = 0;
    func_8012AD50((s32) o);
}

extern void func_sc07_011_8017DFE8();
extern s32 func_sc07_011_8017E01C(s32 arg0);
extern void func_sc07_011_8017E078(u8 *o);
void func_sc07_011_8017DE9C(u8 *o) {
    s16 a;

    func_sc07_011_8017DFE8(o);
    func_sc07_011_8017E01C((s32) o);
    switch (AF(o, u16, 0x70) & 0xF) {
    case 0:
        a = AF(o, s16, 0xFC) + 0x22;
        AF(o, s16, 0xFC) = a;
        AF(o, s16, 0xA) = AF(o, u16, 0x8A) + rsin(a) / 256;
        break;
    case 1:
        a = AF(o, s16, 0xFC) + 0x22;
        AF(o, s16, 0xFC) = a;
        AF(o, s16, 0xA) = AF(o, u16, 0x8A) + rsin(a) / 256;
        func_sc07_011_8017E078(o);
        break;
    }
}

s32 func_sc07_011_8017DF70(s32 arg0, s32 arg1, s32 arg2) {
    u16 temp_v0;

    func_8001C214(arg1, arg2);
    AF(arg1, u16, 0x2C) = (u16) (AF(arg1, u16, 0x2C) | 0x10);
    temp_v0 = *(u16 *)((u8 *)&D_sc07_011_80182330 + (((u16) AF(arg0, u16, 0x70) >> 3) & 0x1E));
    AF(arg1, u16, 0x1C) = temp_v0;
    AF(arg1, u16, 0x1A) = temp_v0;
    AF(arg1, u16, 0x18) = temp_v0;
    return (s32) temp_v0;
}

void func_sc07_011_8017DFE8(u8 *o) {
    AF(AF(o, u8 *, 0xCC), s16, 0x12) += 0x155;
    AF(AF(o, u8 *, 0xD0), s16, 0x12) -= 0x155;
}

s32 func_sc07_011_8017E01C(s32 arg0) {
    s32 temp_s1;
    s32 temp_v0;

    temp_s1 = AF(arg0, s32, 0x20);
    func_8012B2CC(arg0);
    AF(arg0, s32, 0x20) = (s32) AF(arg0, s32, 0xCC);
    func_8012B2CC(arg0);
    AF(arg0, s32, 0x20) = (s32) AF(arg0, s32, 0xD0);
    temp_v0 = func_8012B2CC(arg0);
    AF(arg0, s32, 0x20) = temp_s1;
    return temp_v0;
}

void func_sc07_011_8017E078(u8 *o) {
    s32 buf[4];
    struct_8_4 *e;

    e = &D_sc07_011_8018233C[AF(o, s32, 0xDC) * 4 + AF(o, s16, 0xFE)];
    switch (AF(o, s32, 0xE8)) {
    case 0:
        AF(o, s32, 0xE4) = e->field_6;
        AF(o, s32, 0xE8)++;
    case 1:
        func_800159E4(o + 4, buf);
        AF(o, s16, 6) = AF(o, u16, 0x88) + (e[1].field_0 - e->field_0) * AF(o, s32, 0xE0) / AF(o, s32, 0xE4);
        AF(o, s16, 0xA) = AF(o, u16, 0x8A) + (e[1].field_2 - e->field_2) * AF(o, s32, 0xE0) / AF(o, s32, 0xE4);
        AF(o, s16, 0xE) = AF(o, u16, 0x8C) + (e[1].field_4 - e->field_4) * AF(o, s32, 0xE0) / AF(o, s32, 0xE4);
        AF(AF(o, u8 *, 0x20), s16, 0x12) += func_8012BB3C(buf, o + 4, AF(AF(o, u8 *, 0x20), s16, 0x12), 4);
        if (++AF(o, s32, 0xE0) == AF(o, s32, 0xE4)) {
            func_80015978(o + 4, o + 0x88);
            AF(o, s16, 0xFE) += 2;
            if (AF(o, s16, 0xFE) == 4) {
                AF(o, s16, 0xFE) = 0;
            }
            AF(o, s32, 0xE0) = 0;
        }
        break;
    }
}

s32 func_sc07_011_8017E294(s32 arg0) {
    s32 temp_a0;
    s32 temp_a0_2;

    temp_a0 = AF(arg0, s32, 0xCC);
    if (temp_a0 != 0) {
        func_80016714(temp_a0, 0x84);
    }
    temp_a0_2 = AF(arg0, s32, 0xD0);
    if (temp_a0_2 != 0) {
        func_80016714(temp_a0_2, 0x84);
    }
    return func_8012C098(arg0);
}

void func_sc07_011_8017E2F0(u8 *arg0) {
    D_sc07_011_8018BC48[AF(arg0, u16, 2)]();
}

void func_sc07_011_8017E32C(u8 *o) {
    u8 *a;
    struct_4_8 *p;

    a = func_801465C0();
    if (a != 0) {
        AF(o, u8 *, 0x20) = a;
        func_8001CBDC(a, &D_sc07_011_8018BB38, D_sc07_011_8018BAD4[AF(o, s32, 0x2C)].field_0, D_sc07_011_8018BAD4[AF(o, s32, 0x2C)].field_2);
        AF(a, u8, 0x27) = D_sc07_011_8018BB00[AF(o, s32, 0x2C)];
        AF(a, s16, 0x2C) = 3;
        AF(o, s16, 6) = 0;
        AF(o, s16, 0xA) = 0x50;
        D_sc07_011_8018BC38 = D_sc07_011_8018BB0C[AF(o, s32, 0x2C)];
        D_sc07_011_8018BC34 = AF(&D_sc07_011_8018BC34, struct_4_8, 0x4);
        D_sc07_011_8018BC04 = AF(&D_sc07_011_8018BC04, struct_4_8, 0x30);
        D_sc07_011_8018BC00 = AF(&D_sc07_011_8018BC00, struct_4_8, 0x4);
        D_sc07_011_8018BBD0 = AF(&D_sc07_011_8018BBD0, struct_4_8, 0x30);
        D_sc07_011_8018BBCC = AF(&D_sc07_011_8018BBCC, struct_4_8, 0x4);
        D_sc07_011_8018BB9C = AF(&D_sc07_011_8018BB9C, struct_4_8, 0x30);
        p = &D_sc07_011_8018BB98;
        *p = D_sc07_011_8018BB9C;
        D_sc07_011_8018BB70 = *p;
        AF(o, s16, 2)++;
    } else {
        func_80146C3C(o);
    }
}

void func_sc07_011_8017E52C(s32 arg0) {
    func_sc07_011_8017E56C(arg0);
}

void func_sc07_011_8017E54C(s32 arg0) {
    func_80146C3C(arg0);
}

s32 func_sc07_011_8017E56C(void) {
    s32 *var_s0;
    s32 temp_v0;
    s32 var_s1;

    func_80017254((s32) &D_sc07_011_8018BB50);
    var_s1 = 0;
    var_s0 = &D_sc07_011_8018BB78;
    do {
        func_800176F0((s32) var_s0);
        var_s1 += 1;
        temp_v0 = var_s1 < 4;
        var_s0 = (s32 *)((u8 *)var_s0 + 0x34);
    } while (temp_v0 != 0);
    return temp_v0;
}

s32 func_sc07_011_8017E5C4(s32 arg0) {
    return func_80146994(0x28, 0, arg0, 0);
}

void func_sc07_011_8017E5F0(void) {
    s32 temp_v0;

    temp_v0 = func_8014C050((s32) &D_80126B58, 0x28);
    if (temp_v0 != 0) {
        AF(temp_v0, u16, 2) = (u16) (AF(temp_v0, u16, 2) + 1);
    }
}
