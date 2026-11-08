#include "common.h"
#include "gte.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc05_011_8017BE9C(void) {
}

void func_sc05_011_8017BEA4(void) {
}

void func_sc05_011_8017BEAC(void) {
}

void func_sc05_011_8017BEB4(void) {
}

typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_4;
typedef struct { s16 field_0[6]; } struct_C_3;
extern void (*D_sc05_011_80181754[])();
typedef struct { s16 field_0, field_2; } struct_4_2;
typedef struct { struct_4_2 field_0; s16 field_4; s16 field_6; struct_4_2 field_8; s32 field_C; s32 field_10; s32 field_14; s32 field_18; } struct_1C;
typedef struct { s32 field_0, field_4, field_8; } struct_C_4;
void func_sc05_011_8017CF70(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc05_011_8018175C[])();
void func_sc05_011_8017CF98(void);
extern u8 D_sc05_011_80181768;
extern void func_8016EE40();
extern u8 D_sc05_011_80181774;
extern void func_sc05_011_8017D010();
extern void (*D_sc05_011_80181778[])();
extern void (*D_sc05_011_801823B0[])();
extern void func_sc05_011_8017D818();

extern u8 D_sc05_011_80181808;
extern u8 D_sc05_011_801818A0;
extern u8 D_sc05_011_801819B0;
extern u8 D_sc05_011_80181A40;
extern u8 D_sc05_011_80181B20;
extern u8 D_sc05_011_80181B48;

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();

extern void func_800CFBCC();

extern u8 D_80126948;
extern s32 D_80126950;
extern s32 D_80126954;
extern s32 D_80126958;
extern s32 D_8012695C;
extern s32 D_sc05_011_8019D068;
extern s32 D_sc05_011_8019D154;
extern void func_sc05_011_8017D174();
extern u8 D_sc05_011_80182230;
extern void func_80029124();
extern void func_80178B18();
extern u8 D_sc05_011_80181878;
extern u8 D_sc05_011_80181CA0;
extern u8 D_sc05_011_801821D0;
extern u8 D_sc05_011_801821E0;
extern s32 func_800149E0();
extern s32 func_800CF8B4();
extern s32 func_80029178();
extern void func_8017B490();
extern s32 func_801789AC();
extern void func_80178D18();
extern u8 D_sc05_011_80181728;
extern void func_80029514();
extern void func_8002AC00();
extern void func_800D1724();

extern u8 D_sc05_011_80181D80;
extern u8 D_sc05_011_80181EF0;
extern u8 D_sc05_011_80181FB8;


extern s32 func_80012ABC();

typedef struct { s16 field_0[3][3]; s16 field_12; s32 field_14[3]; } struct_20_3;
typedef struct { u32 field_0; u32 field_4; u32 field_8; u32 field_C; u32 *field_10; } struct_14_2;
typedef struct { s32 field_0; s32 field_4; s32 field_8; s32 field_C; s32 field_10; s32 field_14; s32 field_18; } struct_1C_2;
extern u8 *D_800A5E60;
extern u16 D_800B9A02;
extern u32 D_800A6610[2][0x1000];

void func_sc05_011_8017BEBC(u8 *obj) {
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

void func_sc05_011_8017CD9C(u8 *arg0) {
    D_sc05_011_80181754[AF(arg0, u8, 0x15)]();
}

s32 func_sc05_011_8017CDD8(u8 *arg0) {
    func_sc05_011_8017CF70();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc05_011_8017CE1C(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc05_011_8017CE40(u8 *arg0) {
    D_sc05_011_8018175C[AF(arg0, u8, 0x15)]();
}

s32 func_sc05_011_8017CE7C(u8 *arg0) {
    func_sc05_011_8017CF98();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc05_011_8017CEBC(u8 *arg0) {
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

s32 func_sc05_011_8017CF38(void) {
    if (func_800167F0(4) & 0xFFFF) {
        func_800CFBCC(4);
        return 1;
    }
    return 0;
}

void func_sc05_011_8017CF70(void) {
    func_8016EE40((s32) &D_sc05_011_80181768, 0x01000000);
}

void func_sc05_011_8017CF98(void) {
    func_8016EE40((s32) &D_sc05_011_80181774, 0x01000000);
}

void func_sc05_011_8017CFC0(void) {
    D_80126954 = 0x190;
    D_80126950 = 0x190;
    D_8012695C = 0x4B0;
    D_80126958 = 0x4B0;
    func_sc05_011_8017D010((s32) &D_80126948);
}

void func_sc05_011_8017D010(s32 arg0) {
    D_sc05_011_80181778[AF(arg0, u8, 4)]();
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
extern u8 D_80126B58;
extern u8 D_80126940;
extern u8 D_sc05_011_8018177C[];
extern s32 func_80148800();

void func_sc05_011_8017D04C(u8 *arg0) {
    struct_8_8 v;
    u8 t;

    if (func_80148800((s32) &D_80126B58) & 3) {
        t = (AF(arg0, u8, 5) + 1) & 1;
        AF(arg0, u8, 5) = t;
        AF(arg0, s32, 0x14) = ((s16 *)&D_sc05_011_8018177C)[t];
    }
    v = *(struct_8_8 *)&D_80126940;
    func_sc05_011_8017D0EC((s32) arg0, (s32) &v);
}

void func_sc05_011_8017D0EC(s32 arg0, s32 arg1) {
    AF(arg0, s32, 0x40) = -0x341;
    AF(arg0, s32, 0x44) = -0x612;
    AF(arg0, s32, 0x4C) = -0x26B;
    AF(arg0, s32, 0x3C) = 0;
    AF(arg0, s32, 0x48) = 0;
    AF(arg0, s32, 0x50) = -0x171;
}

void func_sc05_011_8017D118(void) {
    switch (D_sc05_011_8019D154) {                  /* irregular */
    case 0:
        D_sc05_011_8019D068 = 0;
        D_sc05_011_8019D154 = 1;
        return;
    case 1:
        func_sc05_011_8017D174();
        return;
    }
}

extern s32 func_8012C1B8();
extern void func_8001C2C4();
extern s32 func_8012C51C();
extern void func_8001C214();
extern void func_8001D0E8();
extern void func_80143994();
extern u8 D_sc05_011_8018C384;
extern u8 D_sc05_011_80181780;
extern u8 D_sc05_011_8018F8B4;
extern u8 D_sc05_011_80194F6C;
extern u8 D_sc05_011_80181DE8;
extern u8 D_sc05_011_80181E40;
extern u8 D_sc05_011_801820B0;
extern u8 D_sc05_011_80182138;
extern u8 D_sc05_011_80181D48;
extern void func_800183E0();
extern u8 D_sc05_011_8019A07C;
extern u8 D_sc05_011_8019A61C;
extern u8 D_sc05_011_8019A34C;

extern u8 D_sc05_011_80181928;
extern u8 D_sc05_011_80181970;
extern u8 D_sc05_011_801819F0;
extern u8 D_sc05_011_80181C18;
extern u8 D_sc05_011_801920E0;
extern u8 D_sc05_011_801922F0;
extern u8 D_sc05_011_80192500;

extern s32 MoveImage();
void func_sc05_011_8017D174(void) {
    struct_8_4 r1;
    struct_8_4 r2;
    s32 n = *(u8 *)&D_sc05_011_8019D068;

    if (n == 0) {
        r1.field_0 = 0x300;
        r1.field_2 = 0x180;
        r1.field_4 = 0x100;
        r1.field_6 = 0x80;
        MoveImage(&r1, 0x300, 0x100);
    } else {
        r1.field_0 = n + 0x300;
        r1.field_2 = 0x180;
        r1.field_4 = 0x100 - n;
        r1.field_6 = 0x80;
        MoveImage(&r1, 0x300, 0x100);
        r2.field_0 = 0x300;
        r2.field_2 = 0x180;
        r2.field_4 = n;
        r2.field_6 = 0x80;
        MoveImage(&r2, 0x400 - n, 0x100);
    }
    D_sc05_011_8019D068--;
}

void func_sc05_011_8017D25C(u8 *o) {
    struct { s16 field_0, field_2, field_4, field_6, field_8, field_A, field_C, field_E; s32 field_10; } s;
    s32 v;
    u8 *scr;
    u8 *scp;
    s32 n;
    s32 m;

    if (AF(o, s16, 0x70) & 0x8000) {
        v = func_8012C1B8();
        AF(o, s32, 0x20) = v;
        if (v == 0) {
            return;
        }
        func_8001C2C4(v);
        s.field_6 = 0x385;
        s.field_A = 0;
        s.field_C = 0;
        s.field_E = 0;
        s.field_10 = 0;
        s.field_2 = -0x202;
        if (AF(o, s32, 0xCC) == 0) {
            s.field_8 = 0;
            s.field_0 = 0;
            s.field_4 = -0x140;
            AF(o, s32, 0xCC) = func_8012C51C(&s, o);
        }
        if (AF(o, s32, 0xD0) == 0) {
            s.field_8 = 1;
            s.field_0 = 0x40;
            s.field_4 = -0x60;
            AF(o, s32, 0xD0) = func_8012C51C(&s, o);
        }
        if (AF(o, s32, 0xD4) == 0) {
            s.field_8 = 2;
            s.field_0 = -0x40;
            s.field_4 = -0x60;
            AF(o, s32, 0xD4) = func_8012C51C(&s, o);
        }
        if (AF(o, s32, 0xCC) != 0 && AF(o, s32, 0xD0) != 0 && AF(o, s32, 0xD4) != 0) {
            AF(o, s16, 2)++;
        }
        return;
    }
    v = func_8012C1B8();
    AF(o, s32, 0x20) = v;
    if (v == 0) {
        return;
    }
    switch (AF(o, s16, 0x70)) {
    case 0:
        scr = &D_sc05_011_8018C384;
        scp = &D_sc05_011_80181780;
        n = 0;
        m = 5;
        break;
    case 1:
        scr = &D_sc05_011_8018F8B4;
        scp = &D_sc05_011_80181878;
        n = 0;
        m = 6;
        break;
    case 2:
        scr = &D_sc05_011_80194F6C;
        scp = &D_sc05_011_80181CA0;
        n = 0;
        m = 7;
        break;
    }
    func_8001C214(AF(o, s32, 0x20), scr);
    func_8001D0E8(AF(o, s32, 0x20), 0x7FFF, 0x7FFF);
    func_8012A828(o, scp);
    func_80143994(o, 0x3000);
    AF(AF(o, u8 *, 0x20), s16, 0x12) = n;
    AF(o, s16, 2) = m;
}

void func_sc05_011_8017D4A4(u8 *o) {
    if (AF(o, u8 *, 0x90) == &D_sc05_011_80181928 && AF(o, s16, 0x98) == 0) {
        func_8012A828(o, &D_sc05_011_80181970);
    }
    if (AF(o, u8 *, 0x90) == &D_sc05_011_80181B48 && AF(o, s16, 0x98) == 0) {
        func_8012A828(o, &D_sc05_011_80181C18);
    }
    if (func_80029178(0x127) & 0xFF) {
        func_80029124(0x127, 0);
        func_8012A828(o, &D_sc05_011_80181928);
    }
    if (func_80029178(0x129) & 0xFF) {
        func_80029124(0x129, 0);
        func_8012A828(o, &D_sc05_011_801819F0);
    }
    switch (AF(o, s16, 0x108)--) {
    case 0:
        AF(o, s16, 0x108) = (rand() & 0x3F) + 0x28;
        break;
    case 1:
        func_800183E0(&D_sc05_011_801920E0);
        break;
    case 5:
        func_800183E0(&D_sc05_011_80192500);
        break;
    case 3:
    case 7:
        func_800183E0(&D_sc05_011_801922F0);
        break;
    }
}

void func_sc05_011_8017D610(u8 *o) {
    if (AF(o, u8 *, 0x90) == &D_sc05_011_80181DE8 && AF(o, s16, 0x98) == 0) {
        func_8012A828(o, &D_sc05_011_80181E40);
    }
    if (AF(o, u8 *, 0x90) == &D_sc05_011_80181FB8 && AF(o, s16, 0x98) == 0) {
        func_8012A828(o, &D_sc05_011_801820B0);
    }
    if (AF(o, u8 *, 0x90) == &D_sc05_011_80182138 && AF(o, s16, 0x98) == 0) {
        func_8012A828(o, &D_sc05_011_801820B0);
    }
    if (func_80029178(0x128) & 0xFF) {
        func_80029124(0x128, 0);
        func_8012A828(o, &D_sc05_011_80181DE8);
    }
    if (func_80029178(0x12A) & 0xFF) {
        func_80029124(0x12A, 0);
        func_8012A828(o, &D_sc05_011_80181D48);
    }
    if (func_80029178(0x12C) & 0xFF) {
        func_80029124(0x12C, 0);
        func_8012A828(o, &D_sc05_011_80182138);
    }
    switch (AF(o, s16, 0x108)--) {
    case 0:
        AF(o, s16, 0x108) = (rand() & 0x3F) + 0x3C;
        break;
    case 1:
        func_800183E0(&D_sc05_011_8019A07C);
        break;
    case 5:
        func_800183E0(&D_sc05_011_8019A61C);
        break;
    case 3:
    case 7:
        func_800183E0(&D_sc05_011_8019A34C);
        break;
    }
}

void func_sc05_011_8017D7DC(u8 *arg0) {
    D_sc05_011_801823B0[AF(arg0, u16, 2)]();
}

void func_sc05_011_8017D818(s32 arg0) {
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

void func_sc05_011_8017D8A0(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s16, 0x10A) = -0x7800;
}

void func_sc05_011_8017D8B0(u8 *arg0) {
    func_8012A828(AF(arg0, s32, 0xCC), (s32) &D_sc05_011_80181808);
}

void func_sc05_011_8017D8DC(u8 *arg0) {
    func_8012A828(AF(arg0, s32, 0xD0), (s32) &D_sc05_011_801818A0);
}

void func_sc05_011_8017D908(u8 *arg0) {
    func_8012A828(AF(arg0, s32, 0xD0), (s32) &D_sc05_011_801819B0);
}

void func_sc05_011_8017D934(u8 *arg0) {
    func_8012A828(AF(arg0, s32, 0xD0), (s32) &D_sc05_011_80181A40);
}

void func_sc05_011_8017D960(u8 *arg0) {
    func_8012A828(AF(arg0, s32, 0xD0), (s32) &D_sc05_011_80181B20);
}

void func_sc05_011_8017D98C(u8 *arg0) {
    func_8012A828(AF(arg0, s32, 0xD0), (s32) &D_sc05_011_80181B48);
}

void func_sc05_011_8017D9B8(u8 *arg0, s32 arg1, s32 arg2) {
    func_8012A828(AF(arg0, s32, 0xD4), (s32) &D_sc05_011_80181D80, arg2);
}

void func_sc05_011_8017D9E4(u8 *arg0, s32 arg1, s32 arg2) {
    func_8012A828(AF(arg0, s32, 0xD4), (s32) &D_sc05_011_80181CA0, arg2);
}

void func_sc05_011_8017DA10(u8 *arg0, s32 arg1, s32 arg2) {
    func_8012A828(AF(arg0, s32, 0xD4), (s32) &D_sc05_011_80181EF0, arg2);
}

void func_sc05_011_8017DA3C(u8 *arg0, s32 arg1, s32 arg2) {
    func_8012A828(AF(arg0, s32, 0xD4), (s32) &D_sc05_011_80181FB8, arg2);
}

void func_sc05_011_8017DA68(u8 *arg0) {
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
    func_80029124(0x130, 0);
    func_80029124(0x131, 0);
    func_80029124(0x133, 0);
    func_80178B18((s32) arg0, (s32) &D_sc05_011_80182230);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc05_011_8017DB54(s32 arg0) {
    if (!(func_800149E0(0) & 0x840) || (func_800CF8B4() == 0)) {
        if (func_80029178(0x125) & 0xFF) {
            func_8017B490(arg0, (s32) &D_sc05_011_801821D0);
        }
        if (func_80029178(0x126) & 0xFF) {
            func_8017B490(arg0, (s32) &D_sc05_011_801821E0);
        }
        if (func_80029178(0x12B) & 0xFF) {
            func_80029124(0x12B, 0);
            func_8012A828(AF(arg0, s32, 0xD0), (s32) &D_sc05_011_80181878);
            func_8012A828(AF(arg0, s32, 0xD4), (s32) &D_sc05_011_80181CA0);
        }
        if (func_801789AC(arg0) != 0) {
            func_80178D18(arg0);
            goto block_10;
        }
    } else {
block_10:
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc05_011_8017DC50(u8 *arg0) {
    func_80029514(0x398);
    func_8002AC00(0x1D);
    func_800D1724((s32) &D_sc05_011_80181728);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc05_011_8017DCA4(void) {
}

void func_sc05_011_8017DCAC(s32 arg0) {
    func_sc05_011_8017D818(arg0);
}
