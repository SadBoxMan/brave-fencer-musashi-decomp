#include "common.h"
#include "gte.h"
#include "psyq.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc01_000_8017BE9C(void) {
}

void func_sc01_000_8017BEA4(void) {
}

void func_sc01_000_8017BEAC(void) {
}

void func_sc01_000_8017BEB4(void) {
}

typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_4;
typedef struct { s16 field_0[6]; } struct_C_3;
extern void (*D_sc01_000_80182668[])();
extern s32 func_800167F0();
extern void (*D_sc01_000_80182670[])();
typedef struct { s16 field_0, field_2; } struct_4_2;
typedef struct { struct_4_2 field_0; s16 field_4; s16 field_6; struct_4_2 field_8; s32 field_C; s32 field_10; s32 field_14; s32 field_18; } struct_1C;
typedef struct { s32 field_0, field_4, field_8; } struct_C_4;
void func_sc01_000_8017CFFC(void);
extern void (*D_sc01_000_8018267C[])();
extern u8 D_sc01_000_80182688;
extern void func_8016EE40();
extern u8 D_sc01_000_80182694;
extern void func_sc01_000_8017D1B4();
extern void (*D_sc01_000_801826A8[])();

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

extern s32 func_sc01_000_8017EB54();

extern void func_800167B8();
extern void func_80019028();
void func_sc01_000_8017CFD4(void);
extern void func_800CFBCC();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern s32 func_sc01_000_8017EB28();

extern s16 D_sc01_000_80182698;
extern s16 D_sc01_000_8018269A;
extern s16 D_sc01_000_8018269C;
extern s16 D_sc01_000_801826A0;
extern s16 D_sc01_000_801826A2;
extern s16 D_sc01_000_801826A4;
extern s16 D_800AF7CE;
extern s32 func_80016224();


typedef struct { s16 field_0[3][3]; s16 field_12; s32 field_14[3]; } struct_20_3;
typedef struct { u32 field_0; u32 field_4; u32 field_8; u32 field_C; u32 *field_10; } struct_14_2;
typedef struct { s32 field_0; s32 field_4; s32 field_8; s32 field_C; s32 field_10; s32 field_14; s32 field_18; } struct_1C_2;
extern s32 ReadGeomScreen();
extern void GsGetLs();
extern void GsSetLsMatrix();
extern u8 *D_800A5E60;
extern u16 D_800B9A02;
extern u32 D_800A6610[2][0x1000];

void func_sc01_000_8017BEBC(u8 *obj) {
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

void func_sc01_000_8017CD9C(u8 *arg0) {
    D_sc01_000_80182668[AF(arg0, u8, 0x15)]();
}

s32 func_sc01_000_8017CDD8(u8 *arg0) {
    func_80019028();
    func_sc01_000_8017CFD4();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc01_000_8017CE24(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc01_000_8017CE48(u8 *arg0) {
    D_sc01_000_80182670[AF(arg0, u8, 0x15)]();
}

s32 func_sc01_000_8017CE84(u8 *arg0) {
    func_sc01_000_8017CFFC();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc01_000_8017CEC4(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_8002D4C8(0x1C, 0);
        func_8001BFD0();
        func_8002D4C8(0x1D, 0);
        func_800D0C48(1);
        func_sc01_000_8017EB28();
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

s32 func_sc01_000_8017CF40(void) {
    return func_sc01_000_8017EB54() != 0;
}

void func_sc01_000_8017CF60(u8 *arg0) {
    D_sc01_000_8018267C[AF(arg0, u8, 0x15)]();
}

s32 func_sc01_000_8017CF9C(void) {
    if (func_800167F0(4) & 0xFFFF) {
        func_800CFBCC(0);
        return 1;
    }
    return 0;
}

void func_sc01_000_8017CFD4(void) {
    func_8016EE40((s32) &D_sc01_000_80182688, 0x01000000);
}

void func_sc01_000_8017CFFC(void) {
    func_8016EE40((s32) &D_sc01_000_80182694, 0x01000000);
}

void func_sc01_000_8017D024(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x4B0;
    D_80126968 = 0x2AA;
    D_8012696A = 0x800;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc01_000_8017D1B4, 0);
    func_8012A094((s32) &D_80126948);
    func_sc01_000_8017D1B4((s32) &D_80126948);
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
extern u8 D_sc01_000_801826B0[];
extern s32 func_80148800();
extern void func_sc01_000_8017D290();
extern s32 func_80012C6C();
extern s32 func_80012ABC();
extern void func_8012F14C();

extern u8 D_sc01_000_801826EC;
extern u16 D_sc01_000_801826F0;
extern u16 D_sc01_000_801826F2;
extern u16 D_sc01_000_801826F8;
extern u16 D_sc01_000_801826FA;
extern u16 D_sc01_000_80182700;
extern u16 D_sc01_000_80182702;
extern u16 D_sc01_000_80182708;
extern u16 D_sc01_000_8018270A;
extern u16 D_sc01_000_80182710;
extern u16 D_sc01_000_80182712;
extern u16 D_sc01_000_80182718;
extern u16 D_sc01_000_8018271A;
extern u16 D_sc01_000_80182720;
extern u16 D_sc01_000_80182722;
extern u16 D_sc01_000_80182728;
extern u16 D_sc01_000_8018272A;
extern u16 D_sc01_000_80182730;
extern u16 D_sc01_000_80182732;
extern s32 D_sc01_000_801A5734;
extern u32 D_800AA60C[][0x1000];
extern void func_sc01_000_8017E1A8();

extern u32 D_800AA608[][0x1000];


extern s32 D_80126984;
extern s32 D_80126988;
extern s32 D_8012698C;
extern s32 D_80126990;
extern s32 D_80126994;
extern s32 D_80126998;
extern u8 D_800AF630;

void func_sc01_000_8017D0BC(void) {
    D_80126984 = D_sc01_000_80182698;
    D_80126988 = D_sc01_000_8018269A;
    D_8012698C = D_sc01_000_8018269C;
    D_80126990 = D_sc01_000_801826A0;
    D_80126994 = D_sc01_000_801826A2;
    D_80126998 = D_sc01_000_801826A4;
    func_8012A018((s32) func_sc01_000_8017D1B4, 1);
    func_8012A094((s32) &D_80126948);
    func_sc01_000_8017D1B4((s32) &D_80126948);
}

void func_sc01_000_8017D164(u8 *a, u8 *b) {
    D_sc01_000_80182698 = AF(a, s16, 0);
    D_sc01_000_8018269A = AF(a, s16, 2);
    D_sc01_000_8018269C = AF(a, s16, 4);
    D_sc01_000_801826A0 = AF(b, s16, 0);
    D_sc01_000_801826A2 = AF(b, s16, 2);
    D_sc01_000_801826A4 = AF(b, s16, 4);
}

void func_sc01_000_8017D1B4(s32 arg0) {
    D_sc01_000_801826A8[AF(arg0, u8, 4)]();
}

void func_sc01_000_8017D1F0(u8 *arg0) {
    struct_8_8 v;
    u8 t;

    if (func_80148800((s32) &D_80126B58) & 3) {
        t = (AF(arg0, u8, 5) + 1) & 1;
        AF(arg0, u8, 5) = t;
        AF(arg0, s32, 0x14) = ((s16 *)&D_sc01_000_801826B0)[t];
    }
    v = *(struct_8_8 *)&D_80126940;
    func_sc01_000_8017D290((s32) arg0, (s32) &v);
}

void func_sc01_000_8017D290(u8 *arg0, u8 *arg1) {
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

void func_sc01_000_8017D428(u8 *arg0) {
    AF(arg0, s32, 0x3C) = (s32) D_sc01_000_80182698;
    AF(arg0, s32, 0x40) = (s32) D_sc01_000_8018269A;
    AF(arg0, s32, 0x44) = (s32) D_sc01_000_8018269C;
    AF(arg0, s32, 0x48) = (s32) D_sc01_000_801826A0;
    AF(arg0, s32, 0x4C) = (s32) D_sc01_000_801826A2;
    AF(arg0, s32, 0x50) = (s32) D_sc01_000_801826A4;
}

s32 func_sc01_000_8017D488(void) {
    return 0x80;
}

extern s32 func_800149E0();
extern void func_800D1724();
extern void func_80174E9C();
extern s32 func_80174ED4();
extern u8 D_sc01_000_8018263C;
extern u8 D_sc01_000_80182618;
extern u8 D_sc01_000_801A1E94;
extern u8 D_sc01_000_801A2770;
extern void func_sc01_000_8017E4A0();
void func_sc01_000_8017DD04(s32 arg0, s32 arg1);
void func_sc01_000_8017E210(s32 c);
void func_sc01_000_8017E3A0(s32 x0, s32 y0, s32 x1, s32 y1, s32 c, s32 blue);
void func_sc01_000_8017E594(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern s32 D_sc01_000_801A5718;
extern u16 D_sc01_000_801A571A;
extern s32 D_sc01_000_801A571C;
extern u16 D_sc01_000_801A571E;
extern s32 D_sc01_000_801A5720;
extern s16 D_sc01_000_801A5722;
extern s16 D_sc01_000_801A5724;
extern s16 D_sc01_000_801A5726;
extern s16 D_sc01_000_801A5728;
extern s16 D_sc01_000_801A572C;
extern s16 D_sc01_000_801A572E;
extern s16 D_sc01_000_801A5730;
extern s32 D_sc01_000_801A5738;
extern s32 D_sc01_000_801A573C;
extern s32 D_sc01_000_801A5740;
extern s32 D_sc01_000_801A5744;
extern s32 D_sc01_000_801A5748;
extern s32 D_sc01_000_801A574C;
extern s16 D_sc01_000_801A574E;
extern s32 D_sc01_000_801A5750;
extern s16 D_sc01_000_801A5752;
extern s32 D_sc01_000_801A5754;
extern s32 D_sc01_000_801A5758;
extern s32 D_sc01_000_801A575C;
extern s16 D_sc01_000_801A575E;
extern s32 D_sc01_000_801A5760;
extern s16 D_sc01_000_801A5762;
extern s32 D_sc01_000_801A5764;
extern s32 D_sc01_000_801A5768;
extern s32 D_sc01_000_801A576C;
extern s32 D_sc01_000_801A5770;
extern s32 D_sc01_000_801A585C;

/* symbol split: splat split one original object into neighbouring symbols; read through the neighbour (offset form), as the original */
void func_sc01_000_8017D490(void) {
    u8 *w;
    s32 pad;
    s16 *a;
    s16 *c;
    s32 *p;
    s32 *q;
    s32 *r;
    s32 *t;

    w = &D_80126948;
    pad = func_800149E0(0);
    if (D_sc01_000_801A585C < 0xE && (pad & 0x840)) {
        func_800D1724(&D_sc01_000_8018263C);
        D_sc01_000_801A585C = 0xF;
    }
    switch (D_sc01_000_801A585C) {
    case 0:
        a = &D_sc01_000_801A5724;
        c = &D_sc01_000_801A572C;
        AF(w, s32, 8) = 0x190;
        D_sc01_000_801A5718 = 0xFB550000;
        D_sc01_000_801A571C = 0xFAC10000;
        *a = 0x4C8;
        D_sc01_000_801A5726 = D_sc01_000_801A571A;
        D_sc01_000_801A5728 = -0x18C;
        *c = 0x151;
        D_sc01_000_801A572E = D_sc01_000_801A571E;
        D_sc01_000_801A5730 = -0x18C;
        func_sc01_000_8017D164((u8 *)a, (u8 *)c);
        D_sc01_000_801A5720 = 0;
        D_sc01_000_801A5734 = 0x16F8;
        func_sc01_000_8017DD04(0, ((s16 *)&D_sc01_000_801A5720)[1]);
        D_sc01_000_801A5738 = 0x3C;
        D_sc01_000_801A5740 = 0;
        func_8002D4C8(0xB5B, 0);
        D_sc01_000_801A585C++;
        break;
    case 1:
        func_sc01_000_8017DD04(0, D_sc01_000_801A5722);
        if (--D_sc01_000_801A5738 == 0) {
            D_sc01_000_801A585C++;
        }
        break;
    case 2:
        func_sc01_000_8017DD04(0, D_sc01_000_801A5722);
        func_sc01_000_8017E210(D_sc01_000_801A5740);
        D_sc01_000_801A5740 += 8;
        if (D_sc01_000_801A5740 >= 0x80) {
            D_sc01_000_801A5738 = 0x1E;
            D_sc01_000_801A585C++;
        }
        break;
    case 3:
        func_sc01_000_8017DD04(0, D_sc01_000_801A5722);
        func_sc01_000_8017E210(D_sc01_000_801A5740);
        if (--D_sc01_000_801A5738 == 0) {
            D_sc01_000_801A585C++;
        }
        break;
    case 4:
        func_sc01_000_8017DD04(0, D_sc01_000_801A5722);
        D_sc01_000_801A5740 -= 8;
        if (D_sc01_000_801A5740 <= 0) {
            D_sc01_000_801A5740 = 0;
            D_sc01_000_801A585C++;
        }
        func_sc01_000_8017E210(D_sc01_000_801A5740);
        break;
    case 5:
        func_sc01_000_8017DD04(0, D_sc01_000_801A5722);
        D_sc01_000_801A5734 -= 0x50;
        if (D_sc01_000_801A5734 <= 0x1000) {
            D_sc01_000_801A5734 = 0x1000;
            D_sc01_000_801A574C = 0xFF800000;
            D_sc01_000_801A5750 = 0xFF800000;
            D_sc01_000_801A5758 = -0x10;
            D_sc01_000_801A5754 = 0x200000;
            D_sc01_000_801A575C = 0x800000;
            D_sc01_000_801A5760 = 0x800000;
            D_sc01_000_801A5768 = 0x10;
            D_sc01_000_801A5764 = 0xFFE00000;
            D_sc01_000_801A576C = 0x10;
            D_sc01_000_801A585C++;
        }
        break;
    case 6:
        func_sc01_000_8017DD04(0, D_sc01_000_801A5722);
        p = &D_sc01_000_801A5750;
        q = &D_sc01_000_801A5754;
        *p += *q;
        *q += 0xC0000;
        if (D_sc01_000_801A5752 >= 0x80) {
            D_sc01_000_801A5752 = 0x80;
        }
        func_sc01_000_8017E3A0(D_sc01_000_801A574E, D_sc01_000_801A5758, D_sc01_000_801A5752, D_sc01_000_801A5758, D_sc01_000_801A576C, 0);
        r = &D_sc01_000_801A5760;
        t = &D_sc01_000_801A5764;
        *r += *t;
        *t -= 0xC0000;
        if (D_sc01_000_801A5762 < -0x7F) {
            D_sc01_000_801A5762 = -0x80;
            D_sc01_000_801A585C++;
        }
        func_sc01_000_8017E3A0(D_sc01_000_801A575E, D_sc01_000_801A5768, D_sc01_000_801A5762, D_sc01_000_801A5768, D_sc01_000_801A576C, 1);
        D_sc01_000_801A576C += 0x10;
        break;
    case 7:
        func_sc01_000_8017DD04(0, D_sc01_000_801A5722);
        D_sc01_000_801A576C += 0x10;
        if (D_sc01_000_801A576C >= 0x100) {
            D_sc01_000_801A576C = 0xFF;
            D_sc01_000_801A5770 = 0;
            D_sc01_000_801A5748 = 0x80;
            D_sc01_000_801A585C++;
        }
        func_sc01_000_8017E3A0(D_sc01_000_801A574E, D_sc01_000_801A5758, D_sc01_000_801A5752, D_sc01_000_801A5758, D_sc01_000_801A576C, 0);
        func_sc01_000_8017E3A0(D_sc01_000_801A575E, D_sc01_000_801A5768, D_sc01_000_801A5762, D_sc01_000_801A5768, D_sc01_000_801A576C, 1);
        break;
    case 8:
        func_sc01_000_8017DD04(0, D_sc01_000_801A5722);
        func_sc01_000_8017E3A0(D_sc01_000_801A574E, D_sc01_000_801A5758, D_sc01_000_801A5752, D_sc01_000_801A5758, D_sc01_000_801A576C, 0);
        func_sc01_000_8017E3A0(D_sc01_000_801A575E, D_sc01_000_801A5768, D_sc01_000_801A5762, D_sc01_000_801A5768, D_sc01_000_801A576C, 1);
        func_sc01_000_8017E594(D_sc01_000_801A5770, -0x10, 0x10, D_sc01_000_801A5748);
        if (++D_sc01_000_801A5770 >= 0x10) {
            D_sc01_000_801A5738 = 0x3C;
            D_sc01_000_801A585C++;
        }
        break;
    case 9:
        func_sc01_000_8017DD04(0, D_sc01_000_801A5722);
        func_sc01_000_8017E594(D_sc01_000_801A5770, -0x10, 0x10, D_sc01_000_801A5748);
        if (--D_sc01_000_801A5738 == 0) {
            D_sc01_000_801A585C++;
        }
        break;
    case 10:
        func_sc01_000_8017DD04(0, D_sc01_000_801A5722);
        if (D_sc01_000_801A5748 != 0) {
            D_sc01_000_801A5748 -= 8;
            if (D_sc01_000_801A5748 <= 0) {
                D_sc01_000_801A5748 = 0;
                D_sc01_000_801A585C++;
                func_80174E9C(&D_sc01_000_801A1E94);
                D_sc01_000_801A5744 = 0;
                D_sc01_000_801A573C = 0;
            }
            func_sc01_000_8017E594(D_sc01_000_801A5770, -0x10, 0x10, D_sc01_000_801A5748);
        }
        break;
    case 11:
        func_sc01_000_8017DD04(0, D_sc01_000_801A5722);
        if (++D_sc01_000_801A573C < 0xA0) {
            D_sc01_000_801A5720 += -0x18000;
        }
        if ((func_80174ED4() << 16) != 0) {
            D_sc01_000_801A5738 = 0x3C;
            D_sc01_000_801A585C++;
        }
        break;
    case 12:
        func_sc01_000_8017DD04(0, D_sc01_000_801A5722);
        func_sc01_000_8017E4A0();
        if (--D_sc01_000_801A5738 == 0) {
            func_80174E9C(&D_sc01_000_801A2770);
            D_sc01_000_801A5738 = 0x2C;
            D_sc01_000_801A585C++;
        }
        break;
    case 13:
        func_sc01_000_8017DD04(0, D_sc01_000_801A5722);
        if ((func_80174ED4() << 16) != 0 || --D_sc01_000_801A5738 == 0) {
            func_800D1724(&D_sc01_000_80182618);
            D_sc01_000_801A585C++;
        }
        break;
    case 14:
        func_sc01_000_8017DD04(0, D_sc01_000_801A5722);
        break;
    case 15:
        break;
    }
}

void func_sc01_000_8017DD04(s32 arg0, s32 arg1) {
    u8 *p;

    func_sc01_000_8017E1A8(&D_sc01_000_801826EC, arg0, arg1, D_sc01_000_801A5734);
    p = D_800A5E60;
    AF(p, u8, 3) = 9;
    AF(p, u8, 7) = 0x2C;
    AF(p, s16, 0x16) = 0x8E;
    AF(p, s16, 0xE) = 0x7DC0;
    AF(p, u8, 4) = AF(p, u8, 5) = AF(p, u8, 6) = 0x80;
    AF(p, u8, 0xC) = 0x0;
    AF(p, u8, 0xD) = 0x0;
    AF(p, u8, 0x14) = 0xFF;
    AF(p, u8, 0x15) = 0x0;
    AF(p, u8, 0x1C) = 0x0;
    AF(p, u8, 0x1D) = 0xFF;
    AF(p, u8, 0x24) = 0xFF;
    AF(p, u8, 0x25) = 0xFF;
    AF(p, s16, 0x8) = D_sc01_000_801826F0;
    AF(p, s16, 0xA) = D_sc01_000_801826F2;
    AF(p, s16, 0x10) = D_sc01_000_801826F8;
    AF(p, s16, 0x12) = D_sc01_000_801826FA;
    AF(p, s16, 0x18) = D_sc01_000_80182708;
    AF(p, s16, 0x1A) = D_sc01_000_8018270A;
    AF(p, s16, 0x20) = D_sc01_000_80182710;
    AF(p, s16, 0x22) = D_sc01_000_80182712;
    *(u32 *)p = (*(u32 *)p & 0xFF000000) | (getaddr(D_800AA60C[D_800B9A02]) & 0xFFFFFF);
    setaddr(D_800AA60C[D_800B9A02], p);
    p += 0x28;
    AF(p, u8, 3) = 9;
    AF(p, u8, 7) = 0x2C;
    AF(p, s16, 0x16) = 0x9F;
    AF(p, s16, 0xE) = 0x7DC0;
    AF(p, u8, 4) = AF(p, u8, 5) = AF(p, u8, 6) = 0x80;
    AF(p, u8, 0xC) = 0x40;
    AF(p, u8, 0xD) = 0x0;
    AF(p, u8, 0x14) = 0x7F;
    AF(p, u8, 0x15) = 0x0;
    AF(p, u8, 0x1C) = 0x40;
    AF(p, u8, 0x1D) = 0xFF;
    AF(p, u8, 0x24) = 0x7F;
    AF(p, u8, 0x25) = 0xFF;
    AF(p, s16, 0x8) = D_sc01_000_801826F8;
    AF(p, s16, 0xA) = D_sc01_000_801826FA;
    AF(p, s16, 0x10) = D_sc01_000_80182700;
    AF(p, s16, 0x12) = D_sc01_000_80182702;
    AF(p, s16, 0x18) = D_sc01_000_80182710;
    AF(p, s16, 0x1A) = D_sc01_000_80182712;
    AF(p, s16, 0x20) = D_sc01_000_80182718;
    AF(p, s16, 0x22) = D_sc01_000_8018271A;
    *(u32 *)p = (*(u32 *)p & 0xFF000000) | (getaddr(D_800AA60C[D_800B9A02]) & 0xFFFFFF);
    setaddr(D_800AA60C[D_800B9A02], p);
    p += 0x28;
    AF(p, u8, 3) = 9;
    AF(p, u8, 7) = 0x2C;
    AF(p, s16, 0x16) = 0x8C;
    AF(p, s16, 0xE) = 0x7DC0;
    AF(p, u8, 4) = AF(p, u8, 5) = AF(p, u8, 6) = 0x80;
    AF(p, u8, 0xC) = 0x0;
    AF(p, u8, 0xD) = 0x0;
    AF(p, u8, 0x14) = 0xFF;
    AF(p, u8, 0x15) = 0x0;
    AF(p, u8, 0x1C) = 0x0;
    AF(p, u8, 0x1D) = 0xDF;
    AF(p, u8, 0x24) = 0xFF;
    AF(p, u8, 0x25) = 0xDF;
    AF(p, s16, 0x8) = D_sc01_000_80182708;
    AF(p, s16, 0xA) = D_sc01_000_8018270A;
    AF(p, s16, 0x10) = D_sc01_000_80182710;
    AF(p, s16, 0x12) = D_sc01_000_80182712;
    AF(p, s16, 0x18) = D_sc01_000_80182720;
    AF(p, s16, 0x1A) = D_sc01_000_80182722;
    AF(p, s16, 0x20) = D_sc01_000_80182728;
    AF(p, s16, 0x22) = D_sc01_000_8018272A;
    *(u32 *)p = (*(u32 *)p & 0xFF000000) | (getaddr(D_800AA60C[D_800B9A02]) & 0xFFFFFF);
    setaddr(D_800AA60C[D_800B9A02], p);
    p += 0x28;
    AF(p, u8, 3) = 9;
    AF(p, u8, 7) = 0x2C;
    AF(p, s16, 0x16) = 0x9F;
    AF(p, s16, 0xE) = 0x7DC0;
    AF(p, u8, 4) = AF(p, u8, 5) = AF(p, u8, 6) = 0x80;
    AF(p, u8, 0xC) = 0x0;
    AF(p, u8, 0xD) = 0x0;
    AF(p, u8, 0x14) = 0x3F;
    AF(p, u8, 0x15) = 0x0;
    AF(p, u8, 0x1C) = 0x0;
    AF(p, u8, 0x1D) = 0xDF;
    AF(p, u8, 0x24) = 0x3F;
    AF(p, u8, 0x25) = 0xDF;
    AF(p, s16, 0x8) = D_sc01_000_80182710;
    AF(p, s16, 0xA) = D_sc01_000_80182712;
    AF(p, s16, 0x10) = D_sc01_000_80182718;
    AF(p, s16, 0x12) = D_sc01_000_8018271A;
    AF(p, s16, 0x18) = D_sc01_000_80182728;
    AF(p, s16, 0x1A) = D_sc01_000_8018272A;
    AF(p, s16, 0x20) = D_sc01_000_80182730;
    AF(p, s16, 0x22) = D_sc01_000_80182732;
    *(u32 *)p = (*(u32 *)p & 0xFF000000) | (getaddr(D_800AA60C[D_800B9A02]) & 0xFFFFFF);
    setaddr(D_800AA60C[D_800B9A02], p);
    p += 0x28;
    D_800A5E60 = p;
}

void func_sc01_000_8017E1A8(struct_8_4 *p, s32 x, s32 y, s32 s) {
    s32 i;
    s32 a;
    s32 b;

    for (i = 0; i < 9; i++) {
        a = p[i].field_0 - 0xA0;
        b = p[i].field_2 - 0x78;
        a = (a * s) / 4096;
        b = (b * s) / 4096;
        p[i].field_4 = a + x;
        p[i].field_6 = b + y;
    }
}

void func_sc01_000_8017E210(s32 c) {
    u8 *p;

    p = D_800A5E60;
    AF(p, u8, 3) = 5;
    AF(p, u32, 4) = 0xE100003E;
    AF(p, u8, 0xB) = 0x64;
    AF(p, u8, 8) = AF(p, u8, 9) = AF(p, u8, 0xA) = c;
    AF(p, s16, 0xC) = -0x50;
    AF(p, s16, 0xE) = -0x10;
    AF(p, u8, 0x10) = 0;
    AF(p, u8, 0x11) = 0;
    AF(p, s16, 0x12) = 0x4017;
    AF(p, s16, 0x14) = 0xA0;
    AF(p, s16, 0x16) = 0x20;
    AF(p, u8, 0xB) = 0x66;
    *(u32 *)p = (*(u32 *)p & 0xFF000000) | (getaddr(D_800AA608[D_800B9A02]) & 0xFFFFFF);
    setaddr(D_800AA608[D_800B9A02], p);
    p += 0x18;
    AF(p, u8, 3) = 5;
    AF(p, u32, 4) = 0xE100005E;
    AF(p, u8, 0xB) = 0x64;
    AF(p, u8, 8) = AF(p, u8, 9) = AF(p, u8, 0xA) = c;
    AF(p, s16, 0xC) = -0x50;
    AF(p, s16, 0xE) = -0x10;
    AF(p, u8, 0x10) = 0;
    AF(p, u8, 0x11) = 0x20;
    AF(p, s16, 0x12) = 0x4057;
    AF(p, s16, 0x14) = 0xA0;
    AF(p, s16, 0x16) = 0x20;
    AF(p, u8, 0xB) = 0x66;
    *(u32 *)p = (*(u32 *)p & 0xFF000000) | (getaddr(D_800AA608[D_800B9A02]) & 0xFFFFFF);
    setaddr(D_800AA608[D_800B9A02], p);
    p += 0x18;
    D_800A5E60 = p;
}

void func_sc01_000_8017E3A0(s32 x0, s32 y0, s32 x1, s32 y1, s32 c, s32 blue) {
    u8 *p;
    u8 *w;

    w = &D_800AF630;
    p = D_800A5E60;
    AF(p, u8, 3) = 4;
    AF(p, u8, 7) = 0x50;
    if (blue == 0) {
        AF(p, u8, 0xC) = 0xFF;
        AF(p, u8, 0xE) = 0;
        AF(p, u8, 0xD) = 0;
        AF(p, u8, 4) = c;
        AF(p, u8, 6) = 0;
        AF(p, u8, 5) = 0;
    } else {
        AF(p, u8, 0xE) = 0xFF;
        AF(p, u8, 0xD) = 0;
        AF(p, u8, 0xC) = 0;
        AF(p, u8, 6) = c;
        AF(p, u8, 4) = 0;
        AF(p, u8, 5) = 0;
    }
    AF(p, s16, 0xA) = y0;
    AF(p, s16, 8) = x0;
    AF(p, s16, 0x10) = x1;
    AF(p, s16, 0x12) = y1;
    *(u32 *)p = (*(u32 *)p & 0xFF000000) | (getaddr(D_800AA608[AF(w, u16, 0xA3D2)]) & 0xFFFFFF);
    setaddr(D_800AA608[AF(w, u16, 0xA3D2)], p);
    p += 0x14;
    D_800A5E60 = p;
}

typedef struct { u32 field_0; u32 field_4; u8 field_8, field_9, field_A, field_B; s16 field_C, field_E; u8 field_10, field_11; u16 field_12; s16 field_14, field_16; } struct_18;
extern u32 D_800A6614[][0x1000];

void func_sc01_000_8017E4A0(void) {
    struct_18 *p;
    u32 c;

    p = (struct_18 *)D_800A5E60;
    ((u8 *)p)[3] = 5;
    c = 0xE100001E;
    p->field_4 = c;
    p->field_B = 0x64;
    c = 0x80;
    p->field_8 = p->field_9 = p->field_A = c;
    p->field_C = -0x40;
    p->field_E = 0x50;
    p->field_10 = 0;
    p->field_11 = c;
    p->field_12 = 0x40D7;
    p->field_14 = 0xA0;
    p->field_16 = 0x20;
    p->field_14 = 0x80;
    p->field_16 = 0x10;
    c = *(u32 *)p & 0xFF000000;
    c |= getaddr(D_800A6614[D_800B9A02]) & 0xFFFFFF;
    *(u32 *)p = c;
    setaddr(D_800A6614[D_800B9A02], p);
    p++;
    D_800A5E60 = (u8 *)p;
}

void func_sc01_000_8017E594(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 *p;

    p = D_800A5E60;
    AF(p, u8, 3) = 5;
    AF(p, u32, 4) = 0xE100003E;
    AF(p, u8, 0xB) = 0x64;
    AF(p, u8, 8) = AF(p, u8, 9) = AF(p, u8, 0xA) = arg3;
    AF(p, s16, 0xC) = -0x80;
    AF(p, s16, 0xE) = 0;
    AF(p, u8, 0x10) = 0;
    AF(p, u8, 0x11) = 0x40;
    AF(p, u16, 0x12) = 0x4097;
    AF(p, s16, 0x14) = 0xA0;
    AF(p, s16, 0x16) = 0x20;
    AF(p, u8, 0xB) = 0x66;
    AF(p, s16, 0xE) = arg1 - arg0;
    AF(p, s16, 0x14) = 0x100;
    AF(p, s16, 0x16) = arg0;
    *(u32 *)p = (*(u32 *)p & 0xFF000000) | (getaddr(&D_800A6610[D_800B9A02][0xFFE]) & 0xFFFFFF);
    setaddr(&D_800A6610[D_800B9A02][0xFFE], p);
    p += 0x18;
    AF(p, u8, 3) = 5;
    AF(p, u32, 4) = 0xE100005E;
    AF(p, u8, 0xB) = 0x64;
    AF(p, u8, 8) = AF(p, u8, 9) = AF(p, u8, 0xA) = arg3;
    AF(p, s16, 0xC) = -0x80;
    AF(p, s16, 0xE) = 0;
    AF(p, u8, 0x10) = 0;
    AF(p, u8, 0x11) = 0x90;
    AF(p, u16, 0x12) = 0x4117;
    AF(p, s16, 0x14) = 0xA0;
    AF(p, s16, 0x16) = 0x20;
    AF(p, u8, 0xB) = 0x66;
    AF(p, s16, 0xE) = arg1 - arg0;
    AF(p, s16, 0x14) = 0x100;
    AF(p, s16, 0x16) = arg0;
    *(u32 *)p = (*(u32 *)p & 0xFF000000) | (getaddr(&D_800A6610[D_800B9A02][0xFFE]) & 0xFFFFFF);
    setaddr(&D_800A6610[D_800B9A02][0xFFE], p);
    p += 0x18;
    AF(p, u8, 3) = 5;
    AF(p, u32, 4) = 0xE100003E;
    AF(p, u8, 0xB) = 0x64;
    AF(p, u8, 8) = AF(p, u8, 9) = AF(p, u8, 0xA) = arg3;
    AF(p, s16, 0xC) = -0x80;
    AF(p, s16, 0xE) = 0;
    AF(p, u8, 0x10) = 0;
    AF(p, u8, 0x11) = 0x5F - arg0;
    AF(p, u16, 0x12) = 0x4097;
    AF(p, s16, 0x14) = 0xA0;
    AF(p, s16, 0x16) = 0x20;
    AF(p, u8, 0xB) = 0x66;
    AF(p, s16, 0xE) = arg1;
    AF(p, s16, 0x14) = 0x100;
    AF(p, s16, 0x16) = arg0 + 1;
    *(u32 *)p = (*(u32 *)p & 0xFF000000) | (getaddr(&D_800A6610[D_800B9A02][0xFFE]) & 0xFFFFFF);
    setaddr(&D_800A6610[D_800B9A02][0xFFE], p);
    p += 0x18;
    AF(p, u8, 3) = 5;
    AF(p, u32, 4) = 0xE100005E;
    AF(p, u8, 0xB) = 0x64;
    AF(p, u8, 8) = AF(p, u8, 9) = AF(p, u8, 0xA) = arg3;
    AF(p, s16, 0xC) = -0x80;
    AF(p, s16, 0xE) = 0;
    AF(p, u8, 0x10) = 0;
    AF(p, u8, 0x11) = 0xAF - arg0;
    AF(p, u16, 0x12) = 0x4117;
    AF(p, s16, 0x14) = 0xA0;
    AF(p, s16, 0x16) = 0x20;
    AF(p, u8, 0xB) = 0x66;
    AF(p, s16, 0xE) = arg1;
    AF(p, s16, 0x14) = 0x100;
    AF(p, s16, 0x16) = arg0 + 1;
    *(u32 *)p = (*(u32 *)p & 0xFF000000) | (getaddr(&D_800A6610[D_800B9A02][0xFFE]) & 0xFFFFFF);
    setaddr(&D_800A6610[D_800B9A02][0xFFE], p);
    p += 0x18;
    AF(p, u8, 3) = 5;
    AF(p, u32, 4) = 0xE100003E;
    AF(p, u8, 0xB) = 0x64;
    AF(p, u8, 8) = AF(p, u8, 9) = AF(p, u8, 0xA) = arg3;
    AF(p, s16, 0xC) = -0x80;
    AF(p, s16, 0xE) = 0;
    AF(p, u8, 0x10) = 0;
    AF(p, u8, 0x11) = 0x60;
    AF(p, u16, 0x12) = 0x4097;
    AF(p, s16, 0x14) = 0xA0;
    AF(p, s16, 0x16) = 0x20;
    AF(p, u8, 0xB) = 0x66;
    AF(p, s16, 0xE) = arg2 - arg0;
    AF(p, s16, 0x14) = 0x100;
    AF(p, s16, 0x16) = arg0;
    *(u32 *)p = (*(u32 *)p & 0xFF000000) | (getaddr(&D_800A6610[D_800B9A02][0xFFE]) & 0xFFFFFF);
    setaddr(&D_800A6610[D_800B9A02][0xFFE], p);
    p += 0x18;
    AF(p, u8, 3) = 5;
    AF(p, u32, 4) = 0xE100005E;
    AF(p, u8, 0xB) = 0x64;
    AF(p, u8, 8) = AF(p, u8, 9) = AF(p, u8, 0xA) = arg3;
    AF(p, s16, 0xC) = -0x80;
    AF(p, s16, 0xE) = 0;
    AF(p, u8, 0x10) = 0;
    AF(p, u8, 0x11) = 0xB0;
    AF(p, u16, 0x12) = 0x4117;
    AF(p, s16, 0x14) = 0xA0;
    AF(p, s16, 0x16) = 0x20;
    AF(p, u8, 0xB) = 0x66;
    AF(p, s16, 0xE) = arg2 - arg0;
    AF(p, s16, 0x14) = 0x100;
    AF(p, s16, 0x16) = arg0;
    *(u32 *)p = (*(u32 *)p & 0xFF000000) | (getaddr(&D_800A6610[D_800B9A02][0xFFE]) & 0xFFFFFF);
    setaddr(&D_800A6610[D_800B9A02][0xFFE], p);
    p += 0x18;
    AF(p, u8, 3) = 5;
    AF(p, u32, 4) = 0xE100003E;
    AF(p, u8, 0xB) = 0x64;
    AF(p, u8, 8) = AF(p, u8, 9) = AF(p, u8, 0xA) = arg3;
    AF(p, s16, 0xC) = -0x80;
    AF(p, s16, 0xE) = 0;
    AF(p, u8, 0x10) = 0;
    AF(p, u8, 0x11) = 0x7F - arg0;
    AF(p, u16, 0x12) = 0x4097;
    AF(p, s16, 0x14) = 0xA0;
    AF(p, s16, 0x16) = 0x20;
    AF(p, u8, 0xB) = 0x66;
    AF(p, s16, 0xE) = arg2;
    AF(p, s16, 0x14) = 0x100;
    AF(p, s16, 0x16) = arg0 + 1;
    *(u32 *)p = (*(u32 *)p & 0xFF000000) | (getaddr(&D_800A6610[D_800B9A02][0xFFE]) & 0xFFFFFF);
    setaddr(&D_800A6610[D_800B9A02][0xFFE], p);
    p += 0x18;
    AF(p, u8, 3) = 5;
    AF(p, u32, 4) = 0xE100005E;
    AF(p, u8, 0xB) = 0x64;
    AF(p, u8, 8) = AF(p, u8, 9) = AF(p, u8, 0xA) = arg3;
    AF(p, s16, 0xC) = -0x80;
    AF(p, s16, 0xE) = 0;
    AF(p, u8, 0x10) = 0;
    AF(p, u8, 0x11) = 0xCF - arg0;
    AF(p, u16, 0x12) = 0x4117;
    AF(p, s16, 0x14) = 0xA0;
    AF(p, s16, 0x16) = 0x20;
    AF(p, u8, 0xB) = 0x66;
    AF(p, s16, 0xE) = arg2;
    AF(p, s16, 0x14) = 0x100;
    AF(p, s16, 0x16) = arg0 + 1;
    *(u32 *)p = (*(u32 *)p & 0xFF000000) | (getaddr(&D_800A6610[D_800B9A02][0xFFE]) & 0xFFFFFF);
    setaddr(&D_800A6610[D_800B9A02][0xFFE], p);
    p += 0x18;
    D_800A5E60 = p;
}

s32 func_sc01_000_8017EB28(s32 arg0) {
    D_800AF7CE = 0;
    return func_80016224(0, 0);
}

s32 func_sc01_000_8017EB54(void) {
    u16 temp_v0;

    temp_v0 = D_800AF7CE + 4;
    D_800AF7CE = temp_v0;
    if ((u32) (temp_v0 & 0xFFFF) >= 0x100U) {
        D_800AF7CE = 0xFF;
    }
    func_80016224((s32) (u8) D_800AF7CE, 0);
    return (u16) D_800AF7CE >= 0xFFU;
}
