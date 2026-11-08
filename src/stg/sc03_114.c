#include "common.h"
#include "gte.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc03_114_8017BE9C(void) {
}

void func_sc03_114_8017BEA4(void) {
}

void func_sc03_114_8017BEAC(void) {
}

void func_sc03_114_8017BEB4(void) {
}

typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_4;
typedef struct { s16 field_0[6]; } struct_C_3;
extern void (*D_sc03_114_8018247C[])();
typedef struct { s16 field_0, field_2; } struct_4_2;
typedef struct { struct_4_2 field_0; s16 field_4; s16 field_6; struct_4_2 field_8; s32 field_C; s32 field_10; s32 field_14; s32 field_18; } struct_1C;
typedef struct { s32 field_0, field_4, field_8; } struct_C_4;
void func_sc03_114_8017CF70(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc03_114_80182484[])();
void func_sc03_114_8017CF98(void);
extern u8 D_sc03_114_80182490;
extern void func_8016EE40();
extern u8 D_sc03_114_8018249C;
extern void func_sc03_114_8017D008();
extern void (*D_sc03_114_801824A0[])();
extern void (*D_sc03_114_80183228[])();
extern void (*D_sc03_114_80183254[])();
extern void (*D_sc03_114_80183264[])();

extern void func_8012931C();
extern void func_801292C8();
extern void func_sc03_114_8017E270();
extern void func_sc03_114_8017E2EC();
extern s32 func_sc03_114_8017E94C();
extern s32 func_801290DC();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();

extern void func_800CFBCC();

extern u8 D_80126948;
extern s32 D_80126950;
extern s32 D_80126954;
extern s32 D_80126958;
extern u8 D_sc03_114_80183140;
extern void func_80029124();
extern void func_80178B18();
extern u8 D_sc03_114_80182450;
extern void func_800D1724();
extern u8 D_sc03_114_80182F88;
extern u8 D_sc03_114_80183050;
extern u8 D_sc03_114_801A5EFC;
extern u8 D_sc03_114_801A614C;
extern void func_800183E0();
extern void func_sc03_114_8017D740();
extern s32 D_sc03_114_8018325C[];
extern s32 func_8012C1B8();
extern void func_8001C214();
extern void func_8001D0E8();
extern void func_8012AD50();
extern void func_8012C098();

extern s32 func_80012ABC();

extern u8 D_sc03_114_80182BD0;
extern u8 D_sc03_114_80182908;

typedef struct { u32 field_0_b0 : 24; u32 field_3_b0 : 8; } struct_4_3;
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_3;
typedef struct { struct_4_3 field_0; u8 field_4, field_5, field_6, field_7; s16 field_8, field_A, field_C, field_E, field_10, field_12, field_14, field_16; } struct_18;
typedef union { s32 m0; struct_4_2 m1; } union_4_2;
extern s32 D_800AF648[];
extern u16 D_800B9A02;
extern u32 D_800A6610[2][0x1000];
extern u8 *D_800A5E60;
extern s32 RotMatrixZ();

typedef struct { s16 field_0[3][3]; s16 field_12; s32 field_14[3]; } struct_20_4;
typedef struct { u32 field_0; u32 field_4; u32 field_8; u32 field_C; u32 *field_10; } struct_14_2;
typedef struct { s32 field_0; s32 field_4; s32 field_8; s32 field_C; s32 field_10; s32 field_14; s32 field_18; } struct_1C_2;

void func_sc03_114_8017BEBC(u8 *obj) {
    s32 tmp[3];
    volatile struct_8_4 box[8];
    struct_8_4 scr[8];
    struct_20_4 ls;
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

void func_sc03_114_8017CD9C(u8 *arg0) {
    D_sc03_114_8018247C[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_114_8017CDD8(u8 *arg0) {
    func_sc03_114_8017CF70();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_114_8017CE1C(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc03_114_8017CE40(u8 *arg0) {
    D_sc03_114_80182484[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_114_8017CE7C(u8 *arg0) {
    func_sc03_114_8017CF98();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_114_8017CEBC(u8 *arg0) {
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

s32 func_sc03_114_8017CF38(void) {
    if (func_800167F0(4) & 0xFFFF) {
        func_800CFBCC(2);
        return 1;
    }
    return 0;
}

void func_sc03_114_8017CF70(void) {
    func_8016EE40((s32) &D_sc03_114_80182490, 0x01000000);
}

void func_sc03_114_8017CF98(void) {
    func_8016EE40((s32) &D_sc03_114_8018249C, 0x01000000);
}

void func_sc03_114_8017CFC0(void) {
    D_80126954 = 0x190;
    D_80126950 = 0x190;
    D_80126958 = 0x4B0;
    func_sc03_114_8017D008((s32) &D_80126948);
}

void func_sc03_114_8017D008(s32 arg0) {
    D_sc03_114_801824A0[AF(arg0, u8, 4)]();
}

typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_5;
typedef struct { u8 field_0, field_1, field_2, field_3; } struct_4_4;
typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_5;
typedef struct { u16 field_0[6]; } struct_C_5;
typedef struct { u16 field_0, field_2, field_4, field_6; } struct_8_6;
typedef struct { u8 field_0, field_1, field_2, field_3; } struct_4_5;
typedef struct { struct_8_6 field_0; struct_8_6 field_8; struct_4_5 field_10; struct_4_5 field_14; s32 field_18; } struct_1C_3;
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_6;
typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_7;
typedef struct { struct_8_7 field_0[4]; struct_4_5 field_20[4]; s32 field_30; } struct_34_2;
typedef struct { s32 field_0, field_4, field_8, field_C; } struct_10;
typedef struct { u16 field_0; s16 field_2; s16 field_4; s16 field_6; s32 field_8; s32 field_C; } struct_10_2;
typedef struct { s16 field_0, field_2, field_4, field_6; u8 field_8, field_9; s16 field_A; struct_10_2 field_C[16]; } struct_10C_2;
typedef struct { u32 *field_0; u8 field_4[0x10]; } struct_14_3;
typedef struct { u8 field_0[0x14]; } struct_14_4;
typedef struct { unsigned field_0_b0 : 24; unsigned field_3_b0 : 8; } struct_4_6;
typedef struct { u8 field_0[8]; } struct_8_8;
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_7;
typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_9;
extern u8 D_80126B58;
extern u8 D_80126940;
extern u8 D_sc03_114_801824A4[];
extern s32 func_80148800();

void func_sc03_114_8017D044(u8 *arg0) {
    struct_8_8 v;
    u8 t;

    if (func_80148800((s32) &D_80126B58) & 3) {
        t = (AF(arg0, u8, 5) + 1) & 1;
        AF(arg0, u8, 5) = t;
        AF(arg0, s32, 0x14) = ((s16 *)&D_sc03_114_801824A4)[t];
    }
    v = *(struct_8_8 *)&D_80126940;
    func_sc03_114_8017D0E4((s32) arg0, (s32) &v);
}

void func_sc03_114_8017D0E4(s32 arg0, s32 arg1) {
    AF(arg0, s32, 0x40) = -0x38D;
    AF(arg0, s32, 0x44) = -0x44E;
    AF(arg0, s32, 0x4C) = -0x2ED;
    AF(arg0, s32, 0x3C) = 0;
    AF(arg0, s32, 0x48) = 0;
    AF(arg0, s32, 0x50) = -0xD8;
}

extern s32 func_8012C51C();
extern void func_800233CC();
extern void func_8001CA88();
extern void func_8001C2C4();
extern void func_80143994();
extern u8 D_sc03_114_801A9678;
extern u8 D_sc03_114_801A9679;
extern u8 D_sc03_114_801A967A;
extern u8 D_sc03_114_801A967C;
extern u8 D_sc03_114_801A967D;
extern u8 D_sc03_114_801A967E;
extern u8 D_sc03_114_80196BD0;
extern u8 D_sc03_114_801824A8;
extern u8 D_sc03_114_8019A0D0;
extern u8 D_sc03_114_80182840;
extern u8 D_sc03_114_8019D894;
extern u8 D_sc03_114_801830B0;
extern u8 D_sc03_114_801A4CC0;
extern u8 D_sc03_114_80182F00;

void func_sc03_114_8017D110(u8 *arg0) {
    struct { s16 field_0, field_2, field_4, field_6, field_8; u16 field_A; s16 field_C, field_E; s32 field_10; } d;
    s32 next;
    u8 *script;
    u8 *anim;
    s32 rot;
    s32 r;

    if (AF(arg0, s16, 0x70) & 0x8000) {
        d.field_6 = 0x336;
        d.field_A = 0;
        d.field_C = 0;
        d.field_E = 0;
        d.field_10 = 0;
        d.field_2 = -0x202;
        if (AF(arg0, s32, 0xCC) == 0) {
            d.field_2 = -0x260;
            d.field_8 = 0;
            d.field_0 = 0;
            d.field_4 = 0x318;
            AF(arg0, s32, 0xCC) = func_8012C51C(&d, arg0);
        }
        if (AF(arg0, s32, 0xD0) == 0) {
            d.field_8 = 1;
            d.field_0 = 0x70;
            d.field_2 = -0x202;
            d.field_4 = 0x1E0;
            AF(arg0, s32, 0xD0) = func_8012C51C(&d, arg0);
        }
        if (AF(arg0, s32, 0xD4) == 0) {
            d.field_8 = 2;
            d.field_0 = 0;
            d.field_2 = -0x202;
            d.field_4 = 0x140;
            AF(arg0, s32, 0xD4) = func_8012C51C(&d, arg0);
        }
        if (AF(arg0, s32, 0xD8) == 0) {
            d.field_8 = 3;
            d.field_0 = 0x40;
            d.field_2 = -0x202;
            d.field_4 = -0x320;
            AF(arg0, s32, 0xD8) = func_8012C51C(&d, arg0);
        }
        if (AF(arg0, s32, 0xEC) == 0) {
            d.field_8 = 4;
            d.field_0 = -9;
            d.field_2 = -0x2A6;
            d.field_4 = 0x304;
            AF(arg0, s32, 0xEC) = func_8012C51C(&d, arg0);
        }
        if (AF(arg0, s32, 0xF0) == 0) {
            d.field_8 = 5;
            d.field_0 = 9;
            d.field_2 = -0x2A6;
            d.field_4 = 0x304;
            AF(arg0, s32, 0xF0) = func_8012C51C(&d, arg0);
        }
        if (AF(arg0, s32, 0xF4) == 0) {
            d.field_8 = 6;
            d.field_2 = -0x2AC;
            d.field_0 = 0;
            d.field_4 = 0x2F0;
            AF(arg0, s32, 0xF4) = func_8012C51C(&d, arg0);
        }
        if (AF(arg0, s32, 0xCC) != 0 && AF(arg0, s32, 0xD0) != 0 && AF(arg0, s32, 0xD4) != 0 &&
            AF(arg0, s32, 0xD8) != 0 && AF(arg0, s32, 0xEC) != 0 && AF(arg0, s32, 0xF0) != 0 &&
            AF(arg0, s32, 0xF4) != 0) {
            u8 *p = &D_sc03_114_801A9678;
            *p = 0xF0;
            D_sc03_114_801A967A = 0xA0;
            D_sc03_114_801A9679 = 0xA0;
            D_sc03_114_801A967D = 0;
            D_sc03_114_801A967C = 0;
            D_sc03_114_801A967E = 0;
            func_800233CC(p, 0xB);
            AF(arg0, u16, 2)++;
        }
        return;
    }
    r = func_8012C1B8();
    AF(arg0, s32, 0x20) = r;
    if (r == 0) {
        return;
    }
    switch (AF(arg0, s16, 0x70)) {
    case 0:
        anim = &D_sc03_114_80196BD0;
        script = &D_sc03_114_801824A8;
        rot = 0;
        next = 5;
        break;
    case 1:
        anim = &D_sc03_114_8019A0D0;
        script = &D_sc03_114_80182840;
        rot = 0xC0;
        next = 6;
        break;
    case 2:
        anim = &D_sc03_114_8019D894;
        script = &D_sc03_114_801830B0;
        rot = 0x800;
        next = 7;
        break;
    case 3:
        anim = &D_sc03_114_801A4CC0;
        script = &D_sc03_114_80182F00;
        rot = 0x800;
        next = 8;
        break;
    case 4:
    case 5:
        next = 9;
        func_8001CA88(AF(arg0, s32, 0x20), &D_sc03_114_801A9678);
        AF(AF(arg0, s32, 0x20), s32, 4) |= 0x50000000;
        AF(AF(arg0, s32, 0x20), u16, 0x2E) = 0xC010;
        break;
    case 6:
        next = 10;
        func_8001C2C4(AF(arg0, s32, 0x20));
        AF(AF(arg0, s32, 0x20), s16, 0x10) = -0xC0;
        break;
    }
    if (AF(arg0, s16, 0x70) < 4) {
        func_8001C214(AF(arg0, s32, 0x20), anim);
        func_8012A828(arg0, script);
        func_80143994(arg0, 0x3000);
        AF(AF(arg0, s32, 0x20), s16, 0x12) = rot;
    }
    AF(arg0, s16, 2) = next;
}

typedef void (*type_2)();
typedef struct { u8 field_0[0x18]; struct_20_6 field_18; } struct_38;
typedef struct { s32 field_0[4]; } struct_10_3;
typedef struct { struct_10_3 field_0, field_10, field_20; } struct_30_2;
typedef struct { u8 field_0[0x34]; } struct_34_3;
typedef struct { s16 field_0, field_2, field_4, field_6, field_8, field_A, field_C, field_E; s32 field_10; } struct_14_5;

extern s32 func_800149E0();
extern s32 func_800CF8B4();
extern s32 func_80029178();
extern void func_8017B368();
extern void func_8017B490();
extern s32 func_801789AC();
extern void func_80178D18();
extern u8 D_sc03_114_801830F0;
extern u8 D_sc03_114_80183110;
extern u8 D_sc03_114_80183120;
extern u8 D_sc03_114_80182AB0;
extern u8 D_sc03_114_80182B60;
extern u8 D_sc03_114_8019A6CC;

void func_sc03_114_8017D518(u8 *o) {
    u8 *p;

    if ((func_800149E0(0) & 0x840) && func_800CF8B4() != 0) {
        AF(o, s16, 2)++;
        return;
    }
    p = AF(o, u8 *, 0xCC);
    if ((u8)func_80029178(0x125) != 0) {
        func_80029124(0x125, 0);
        func_8017B368(AF(o, u8 *, 0xCC), &D_sc03_114_801830F0);
    }
    if ((u8)func_80029178(0x126) != 0) {
        func_80029124(0x126, 0);
        func_8017B368(AF(o, u8 *, 0xCC), &D_sc03_114_80183110);
    }
    if ((u8)func_80029178(0x127) != 0) {
        func_80029124(0x127, 0);
        func_8017B490(AF(o, u8 *, 0xCC), &D_sc03_114_80183120);
    }
    if ((u8)func_80029178(0x128) != 0) {
        func_80029124(0x128, 0);
        AF(AF(AF(AF(o, u8 *, 0xCC), u8 *, 0x64), u8 *, 0xD8), u8 *, 0xF8) = &D_sc03_114_80182F88;
    }
    if ((u8)func_80029178(0x129) != 0) {
        func_80029124(0x129, 0);
        AF(AF(AF(AF(o, u8 *, 0xCC), u8 *, 0x64), u8 *, 0xD4), u8 *, 0xF8) = &D_sc03_114_80182AB0;
    }
    if ((u8)func_80029178(0x12A) != 0) {
        func_80029124(0x12A, 0);
        AF(AF(AF(AF(o, u8 *, 0xCC), u8 *, 0x64), u8 *, 0xD4), u8 *, 0xF8) = &D_sc03_114_80182B60;
    }
    if ((u8)func_80029178(0x12B) != 0) {
        func_80029124(0x12B, 0);
        func_800183E0(&D_sc03_114_8019A6CC);
    }
    if (func_801789AC(p) != 0) {
        func_80178D18(p);
        AF(o, s16, 2)++;
    }
}

void func_sc03_114_8017D704(u8 *arg0) {
    D_sc03_114_80183228[AF(arg0, u16, 2)]();
}

void func_sc03_114_8017D740(s32 arg0) {
    s16 temp_v0;
    s32 temp_a1;

    temp_v0 = AF(arg0, s16, 0x10A);
    if (temp_v0 & 0x8000) {
        AF(AF(arg0, void *, 0x20), s16, 0x12) = func_80012ABC((s32) AF(AF(arg0, void *, 0x20), s16, 0x12), temp_v0 & 0xFFF, 4);
    }
    temp_a1 = AF(arg0, s32, 0xF8);
    if ((temp_a1 != 0) && (AF(arg0, s32, 0x90) != temp_a1)) {
        func_8012A828(arg0, temp_a1);
        AF(arg0, s32, 0xF8) = 0;
    }
}

void func_sc03_114_8017D7C8(u8 *arg0) {
    AF(AF(AF(arg0, void *, 0x64), void *, 0xD4), s16, 0x10A) = -0x7020;
    AF(AF(AF(arg0, void *, 0x64), void *, 0xD4), s32, 0xF8) = &D_sc03_114_80182BD0;
}

void func_sc03_114_8017D7F8(u8 *arg0) {
    AF(AF(AF(arg0, void *, 0x64), void *, 0xD4), s32, 0xF8) = &D_sc03_114_80182908;
}

void func_sc03_114_8017D814(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    if (temp_v0 != 0) {
        AF(arg0, s32, 0x1C) = (s32) (temp_v0 - 1);
        return;
    }
    func_80029124(0x125, 0);
    func_80029124(0x126, 0);
    func_80029124(0x127, 0);
    func_80029124(0x128, 0);
    func_80029124(0x129, 0);
    func_80029124(0x12A, 0);
    func_80029124(0x12B, 0);
    func_80029124(0x12C, 0);
    func_80029124(0x130, 0);
    func_80178B18((s32) arg0, (s32) &D_sc03_114_80183140);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_114_8017D8DC(u8 *arg0) {
    func_800D1724((s32) &D_sc03_114_80182450);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_114_8017D920(void) {
}

extern u8 D_sc03_114_80182A60;
extern u8 D_sc03_114_80182C58;
extern u8 D_sc03_114_80182E58;
extern u8 D_sc03_114_801A1F84;
extern u8 D_sc03_114_801A1A64;
extern u8 D_sc03_114_801A1CF4;
extern s32 func_8012A828();
extern s32 rand();

extern void func_8001CD9C();
extern s32 func_8012C194();
extern u8 D_sc03_114_801A96B8;
s32 func_sc03_114_8017E014(s32 arg0, s32 arg1);
extern u16 D_800B99DA;
extern void func_sc03_114_8017E070();
extern void func_800139C8();
extern void func_8001382C();
extern struct_8_4 D_sc03_114_8018326C;
extern struct_8_4 D_sc03_114_80183274;
extern s32 D_sc03_114_80183280;
extern s32 D_sc03_114_80183284;
s32 func_sc03_114_8017E918(s32 arg0, s32 arg1, s32 arg2);

extern void func_80017738();
extern u8 D_sc03_114_80182640;
extern u8 D_sc03_114_80182778;

void func_sc03_114_8017D928(u8 *o) {
    u8 *s = AF(o, u8 *, 0x90);

    if (s == &D_sc03_114_801824A8) {
        if (AF(o, s32, 0x1C) != 0 && --AF(o, s32, 0x1C) == 0) {
            AF(o, s32, 0x1C) = 0;
            AF(o, s16, 0x98) = 1;
        }
        if (AF(o, u16, 0x72) & 0x4000) {
            AF(o, s16, 0x98) = 0;
            AF(o, s32, 0x1C) = 0x14;
        }
        if ((u8) func_80029178(0x12C)) {
            func_8012A828(o, &D_sc03_114_80182640);
            AF(o, s32, 0x1C) = 0;
        }
    } else if (s == &D_sc03_114_80182640) {
        if ((u8) func_80029178(0x130)) {
            func_8012A828(o, &D_sc03_114_80182778);
        } else if (!(u8) func_80029178(0x12C)) {
            func_8012A828(o, &D_sc03_114_801824A8);
        }
    }
}

void func_sc03_114_8017DA28(void) {
}

void func_sc03_114_8017DA30(u8 *o) {
    s32 v;

    if (AF(o, s16, 0x98) == 0) {
        if (AF(o, s32, 0x90) == (s32)&D_sc03_114_80182908) {
            func_8012A828((s32)o, (s32)&D_sc03_114_80182A60);
            AF(o, s32, 0xF8) = 0;
        } else if (AF(o, s32, 0x90) == (s32)&D_sc03_114_80182BD0) {
            func_8012A828((s32)o, (s32)&D_sc03_114_80182C58);
            AF(o, s32, 0xF8) = 0;
            func_800183E0((s32)&D_sc03_114_801A1F84);
        } else if (AF(o, s32, 0x90) == (s32)&D_sc03_114_80182C58) {
            func_8012A828((s32)o, (s32)&D_sc03_114_80182E58);
            AF(o, s32, 0xF8) = 0;
        }
    }
    if ((AF(o, s32, 0x90) != (s32)&D_sc03_114_80182C58) && (AF(o, s32, 0x90) != (s32)&D_sc03_114_80182E58)) {
        if (AF(o, s32, 0x1C) == 0) {
            func_800183E0((s32)&D_sc03_114_801A1A64);
            v = (rand() & 0x1F) + 0xF;
        } else {
            if (AF(o, s32, 0x1C) == 2) {
                func_800183E0((s32)&D_sc03_114_801A1CF4);
            }
            v = AF(o, s32, 0x1C) - 1;
        }
        AF(o, s32, 0x1C) = v;
    }
    func_sc03_114_8017D740((s32)o);
}

void func_sc03_114_8017DB74(u8 *arg0) {
    s32 temp_v1;
    s32 var_v0;

    if ((AF(arg0, s32, 0x90) == &D_sc03_114_80182F88) && (AF(arg0, s16, 0x98) == 0)) {
        func_8012A828((s32) arg0, (s32) &D_sc03_114_80183050);
        AF(arg0, s32, 0xF8) = 0;
    }
    temp_v1 = AF(arg0, s32, 0x1C);
    if (temp_v1 == 0) {
        func_800183E0((s32) &D_sc03_114_801A5EFC);
        var_v0 = (rand() & 0x1F) + 0x14;
    } else {
        if (temp_v1 == 2) {
            func_800183E0((s32) &D_sc03_114_801A614C);
        }
        var_v0 = AF(arg0, s32, 0x1C) - 1;
    }
    AF(arg0, s32, 0x1C) = var_v0;
    func_sc03_114_8017D740((s32) arg0);
}

void func_sc03_114_8017DC38(u8 *o) {
    s32 n;

    if ((u8) func_80029178(0x130)) {
        n = AF(o, s32, 0x1C);
        if (n < 0x15) {
            AF(o, s32, 0x1C) = n + 1;
            if (n % 3 == 0) {
                AF(o, s16, 6)++;
            }
        }
    }
}

void func_sc03_114_8017DCC0(u8 *o) {
    struct_34_2 q;

    q.field_0[0].field_0 = q.field_0[2].field_0 = -0x2A;
    q.field_0[1].field_0 = q.field_0[3].field_0 = 0x2A;
    q.field_0[0].field_2 = q.field_0[1].field_2 = -0x2C;
    q.field_0[2].field_2 = q.field_0[3].field_2 = 0x2C;
    q.field_20[1].field_0 = q.field_20[1].field_1 = q.field_20[1].field_2 = q.field_20[0].field_0 = q.field_20[0].field_1 = q.field_20[0].field_2 = 0xA0;
    q.field_0[0].field_4 = q.field_0[1].field_4 = q.field_0[2].field_4 = q.field_0[3].field_4 = 0;
    q.field_20[3].field_0 = q.field_20[3].field_1 = q.field_20[3].field_2 = q.field_20[2].field_0 = q.field_20[2].field_1 = q.field_20[2].field_2 = 0;
    q.field_30 = 0x60000000;
    func_80017738(&q, AF(o, u8 *, 0x20) + 0x34);
}

void func_sc03_114_8017DD64(u8 *arg0) {
    D_sc03_114_80183254[AF(arg0, u16, 2)]();
}

void func_sc03_114_8017DDA0(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_8001C214(temp_v0, D_sc03_114_8018325C[AF(arg0, s16, 0x70)]);
        func_8001D0E8(temp_v0, 0x7FFF, 0x7FFF);
        AF(arg0, s16, 0xFC) = 0;
        AF(arg0, s32, 0x14) = (s32) AF(arg0, s32, 8);
        func_8012AD50((s32) arg0);
        return;
    }
    func_8012C098((s32) arg0);
}

void func_sc03_114_8017DE30(u8 *arg0) {
    s32 var_v1;
    u16 temp_a0;
    void *temp_s1;

    temp_s1 = AF(arg0, void *, 0x20);
    temp_a0 = AF(arg0, u16, 0xFC) + 0x22;
    AF(arg0, u16, 0xFC) = temp_a0;
    var_v1 = rsin((s32) (s16) temp_a0);
    if (var_v1 < 0) {
        var_v1 += 0xFF;
    }
    AF(arg0, s16, 0xA) = (s16) (AF(arg0, u16, 0x16) + (var_v1 >> 8));
    AF(temp_s1, u16, 0x12) = (u16) (AF(temp_s1, u16, 0x12) + 8);
}

void func_sc03_114_8017DEA8(u8 *arg0) {
    D_sc03_114_80183264[AF(arg0, u16, 2)]();
}

void func_sc03_114_8017DEE4(u8 *o) {
    s32 p;
    u8 *d;
    p = func_8012C194();
    d = &D_sc03_114_801A96B8;
    AF(o, s32, 0x20) = p;
    if (p != 0) {
        func_8001CD9C(p, d);
        AF(p, s16, 0x1A) = 0x3000;
        AF(p, s32, 4) |= 0x50000000;
        func_800233CC(d, 0x80);
        func_sc03_114_8017E014((s32)o, (s32)d);
        AF(o, s16, 0x100) = 0;
        func_8012AD50((s32)o);
        return;
    }
    func_8012C098((s32)o);
}

void func_sc03_114_8017DF88(u8 *o) {
    s32 i;
    func_sc03_114_8017E014((s32)o, (s32)&D_sc03_114_801A96B8);
    if (D_800B99DA & 1) {
        for (i = 0; i < 4; i++) {
            func_sc03_114_8017E070(o, (s16)(AF(o, u16, 0x100) + (i << 10)));
        }
        AF(o, u16, 0x100) += 0xE3;
    }
}

s32 func_sc03_114_8017E014(s32 arg0, s32 arg1) {
    s32 temp_v0;
    u16 temp_v0_2;

    temp_v0_2 = AF(arg0, u16, 0xFC) + 0x2D;
    AF(arg0, u16, 0xFC) = temp_v0_2;
    temp_v0 = ((rsin((s32) (s16) temp_v0_2) / 64) + 0x80) << 8;
    AF(arg1, s32, 0) = temp_v0;
    AF(arg1, s32, 4) = 0;
    return temp_v0;
}

void func_sc03_114_8017E070(u8 *o, s32 n0) {
    s32 vel[4];
    struct_8_4 v;
    s16 n = n0;
    s32 r1, r2, dy, r;
    func_800139C8(n, &D_sc03_114_8018326C, &v);
    v.field_0 += AF(o, u16, 6);
    r1 = rand();
    r2 = rand();
    dy = (r1 & 0xF) - 0xC0;
    v.field_2 += AF(o, u16, 0xA) - dy - (r2 & 0xF);
    v.field_4 += AF(o, u16, 0xE);
    v.field_6 = 8;
    func_8001382C(n, &D_sc03_114_80183274, vel);
    vel[3] = D_sc03_114_80183280;
    r = func_sc03_114_8017E918((s32)&v, (s32)vel, D_sc03_114_80183284);
    if (r != 0) {
        AF(AF(r, u8 *, 0x20), s16, 0x18) = 0x200;
    }
}

void func_sc03_114_8017E170(u8 *arg0) {
    s32 temp_v0;
    void *temp_a0;

    if (AF(arg0, u16, 2) == 0) {
        func_sc03_114_8017E270();
        return;
    }
    temp_v0 = AF(arg0, s32, 0x1C);
    if ((temp_v0 == 0) || ((AF(arg0, s32, 0x1C) = (s32) (temp_v0 - 1), func_8012931C((s32) arg0), (AF(arg0, s16, 0x32) == 0)) && ((u32) ((AF(arg0, u16, 0xA) + 0x1000) & 0xFFFF) >= 0x1001U))) {
        func_801292C8((s32) arg0);
        return;
    }
    temp_a0 = AF(arg0, void *, 0x20);
    AF(arg0, s32, 0x14) = (s32) (AF(arg0, s32, 0x14) + AF(arg0, s32, 0x34));
    AF(temp_a0, u16, 0x14) = (u16) (AF(temp_a0, u16, 0x14) + AF(arg0, u16, 0x30));
    AF(AF(arg0, void *, 0x20), u16, 8) = (u16) AF(arg0, u16, 6);
    AF(AF(arg0, void *, 0x20), u16, 0xA) = (u16) AF(arg0, u16, 0xA);
    AF(AF(arg0, void *, 0x20), u16, 0xC) = (u16) AF(arg0, u16, 0xE);
    func_sc03_114_8017E2EC((s32) AF(arg0, void *, 0x20));
}

void func_sc03_114_8017E270(u8 *o) {
    u8 *p = AF(o, u8 *, 0x20);
    AF(p, s16, 2) = 0xB;
    AF(p, s32, 4) |= 0x50000000;
    if (AF(p, s16, 0x18) == 0) AF(p, s16, 0x18) = 0x600;
    AF(p, s16, 0x14) = rand() & 0xFF0;
    AF(o, s16, 0x30) = 0x100;
    AF(o, s16, 2)++;
}

void func_sc03_114_8017E2EC(u8 *arg0) {
    struct_4_2 sxy;
    struct_20_3 m;
    struct_8_4 v;
    s32 unused[6];
    s32 flag;
    s32 sz;
    s32 otz;
    union_4_2 d;
    u32 fl;
    s32 z;
    u32 *ot;
    u16 h;
    s32 r;
    s32 hi;
    struct_18 *p;
    struct_18 *p1;
    u32 semi;
    struct_4_3 *t;
    s32 *wm;

    wm = D_800AF648;
    fl = AF(arg0, u32, 4);
    gte_SetRotMatrix(wm);
    gte_SetTransMatrix(wm);
    gte_ldv0(arg0 + 8);
    gte_rtps();
    gte_stsxy(&sxy);
    gte_stflg(&flag);
    gte_stsz(&sz);
    gte_stszotz(&otz);
    if (flag & ~0x1000) return;
    z = otz + 1;
    ot = D_800A6610[D_800B9A02];
    h = AF(arg0, u16, 0x2C);
    if ((h & 0xC000) != 0) {
        if ((h & 0xC000) == 0xC000) {
            z -= h & 0xFFF;
            if (z < 0) z = 0;
        } else {
            z += h & 0xFFF;
        }
    }
    if ((u32)z >= 0x1000) return;
    m.field_0[0][0] = AF(arg0, s16, 0x18);
    m.field_0[0][1] = 0;
    m.field_0[0][2] = 0;
    m.field_0[1][0] = 0;
    m.field_0[1][1] = AF(arg0, s16, 0x18);
    m.field_0[1][2] = 0;
    m.field_0[2][0] = 0;
    m.field_0[2][1] = 0;
    m.field_0[2][2] = 0x1000;
    m.field_14[2] = 0;
    m.field_14[1] = 0;
    m.field_14[0] = 0;
    r = (s32)&m;
    RotMatrixZ(AF(arg0, s16, 0x14), r);
    gte_SetRotMatrix(r);
    gte_SetTransMatrix(r);
    v.field_0 = 0x20;
    v.field_2 = 0;
    v.field_4 = sz;
    gte_ldv0(&v);
    gte_rtps();
    gte_stsxy(&d);
    r = (d.m1.field_0 >> 3) & 0xFFFF;
    r |= (d.m1.field_2 >> 3) << 16;
    p = (struct_18 *)D_800A5E60;
    p1 = p + 1;
    p->field_0.field_3_b0 = 5;
    p->field_7 = 0x28;
    p1->field_0.field_3_b0 = 5;
    p1->field_7 = 0x28;
    semi = fl & 0x40000000;
    if (semi) {
        p->field_7 |= 2;
        p1->field_7 |= 2;
    }
    p->field_4 = arg0[0x24];
    p->field_5 = arg0[0x25];
    p->field_6 = arg0[0x26];
    p1->field_4 = arg0[0x24];
    p1->field_5 = arg0[0x25];
    p1->field_6 = arg0[0x26];
    hi = r >> 16;
    p->field_8 = sxy.field_0 + d.m1.field_0;
    p->field_A = sxy.field_2 + d.m1.field_2;
    p->field_C = sxy.field_0 - hi;
    p->field_E = sxy.field_2 + r;
    p->field_10 = sxy.field_0 + hi;
    p->field_12 = sxy.field_2 - r;
    p->field_14 = sxy.field_0 - d.m1.field_0;
    p->field_16 = sxy.field_2 - d.m1.field_2;
    p1->field_8 = sxy.field_0 - d.m1.field_2;
    p1->field_A = sxy.field_2 + d.m1.field_0;
    p1->field_C = sxy.field_0 - r;
    p1->field_E = sxy.field_2 - hi;
    p1->field_10 = sxy.field_0 + r;
    p1->field_12 = sxy.field_2 + hi;
    p1->field_14 = sxy.field_0 + d.m1.field_2;
    p1->field_16 = sxy.field_2 - d.m1.field_0;
    p->field_0.field_0_b0 = ((struct_4_3 *)(ot + z))->field_0_b0;
    ((struct_4_3 *)(ot + z))->field_0_b0 = (u32)p;
    p1->field_0.field_0_b0 = ((struct_4_3 *)(ot + z))->field_0_b0;
    ((struct_4_3 *)(ot + z))->field_0_b0 = (u32)p1;
    D_800A5E60 += 0x30;
    if (semi) {
        s32 unused2[2];
        t = (struct_4_3 *)D_800A5E60;
        D_800A5E60 += 8;
        t->field_3_b0 = 1;
        ((u32 *)t)[1] = 0xE1000000 | ((fl >> 23) & 0x60);
        t->field_0_b0 = ((struct_4_3 *)(ot + z))->field_0_b0;
        ((struct_4_3 *)(ot + z))->field_0_b0 = (u32)t;
    }
}

void func_sc03_114_8017E78C(u16 *cnt, s16 *pos, s16 *rng, s32 sh, s32 arg4) {
    struct_8_4 v;
    u8 *r;
    if (!(*cnt & (s16)((1 << sh) - 1))) {
        v.field_0 = pos[0] + rand() % (rng[0] * 2) - rng[0];
        v.field_2 = pos[1] + rand() % (rng[1] * 2) - rng[1];
        v.field_4 = pos[2] + rand() % (rng[2] * 2) - rng[2];
        v.field_6 = rng[3];
        r = func_sc03_114_8017E94C(&v, 0, arg4);
        if (r != 0) {
            AF(AF(r, u8 *, 0x20), s16, 0x18) = pos[3];
        }
    }
    (*cnt)++;
}

s32 func_sc03_114_8017E918(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = func_sc03_114_8017E94C(arg0, arg1, arg2);
    if (temp_v0 != 0) {
        AF(temp_v0, s16, 0x32) = 1;
    }
    return temp_v0;
}

s32 func_sc03_114_8017E94C(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = func_801290DC(0x55, arg0);
    if (temp_v0 != 0) {
        AF(temp_v0, s32, 0x1C) = (s32) AF(arg0, s16, 6);
        if (arg1 != 0) {
            AF(temp_v0, s32, 0x10) = (s32) AF(arg1, s32, 0);
            AF(temp_v0, s32, 0x14) = (s32) AF(arg1, s32, 4);
            AF(temp_v0, s32, 0x18) = (s32) AF(arg1, s32, 8);
            AF(temp_v0, s32, 0x34) = (s32) AF(arg1, s32, 0xC);
        }
        if (arg2 != 0) {
            AF(AF(temp_v0, void *, 0x20), s32, 0x24) = arg2;
        }
    }
    return temp_v0;
}
