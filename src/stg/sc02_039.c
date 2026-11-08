#include "common.h"
#include "gte.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc02_039_8017BE9C(void) {
}

void func_sc02_039_8017BEA4(void) {
}

void func_sc02_039_8017BEAC(void) {
}

void func_sc02_039_8017BEB4(void) {
}

typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_4;
typedef struct { s16 field_0[6]; } struct_C_3;
extern void (*D_sc02_039_80182B38[])();
typedef struct { s16 field_0, field_2; } struct_4_2;
typedef struct { struct_4_2 field_0; s16 field_4; s16 field_6; struct_4_2 field_8; s32 field_C; s32 field_10; s32 field_14; s32 field_18; } struct_1C;
typedef struct { s32 field_0, field_4, field_8; } struct_C_4;
void func_sc02_039_8017CFCC(void);
extern void func_800167B8();
extern s32 func_800167F0();
void func_sc02_039_8017CFF4(void);
extern void func_800D1EBC();
extern void (*D_sc02_039_80182B4C[])();
extern u8 D_sc02_039_80182B58;
extern void func_8016EE40();
extern u8 D_sc02_039_80182B64;
extern void func_sc02_039_8017D0D4();
extern void (*D_sc02_039_80182B78[])();
extern void (*D_sc02_039_8019B58C[])();
extern void (*D_sc02_039_8019B5A4[])();
extern void (*D_sc02_039_8019B634[])();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

extern void (*D_sc02_039_8019B574[])();
extern void func_8012B2CC();

extern u8 D_80126948;
extern s32 D_80126950;
extern s32 D_80126954;
extern s32 D_8012695C;
extern s16 D_80126968;
extern s16 D_8012696A;
extern s16 D_8012696C;
extern s16 D_80126976;
extern s16 D_80126978;
extern s16 D_8012697A;
extern u16 D_801269E8;
extern u16 D_sc02_039_801A0C88;
extern void func_8012A018();
extern void func_8012A094();
extern s16 D_80126B96;
extern u16 D_80126B98;
extern s32 D_sc02_039_8019B618[];
extern s32 func_sc02_039_8017EF5C();
extern s32 func_8012C1B8();
extern void func_8012CAE4();
extern void func_8001C2C4();
extern void func_8012AD50();

typedef struct { s16 field_0[3][3]; s16 field_12; s32 field_14[3]; } struct_20_3;
typedef struct { u32 field_0; u32 field_4; u32 field_8; u32 field_C; u32 *field_10; } struct_14_2;
typedef struct { s32 field_0; s32 field_4; s32 field_8; s32 field_C; s32 field_10; s32 field_14; s32 field_18; } struct_1C_2;
extern u8 *D_800A5E60;
extern u16 D_800B9A02;
extern u32 D_800A6610[2][0x1000];

void func_sc02_039_8017BEBC(u8 *obj) {
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

void func_sc02_039_8017CD9C(u8 *arg0) {
    D_sc02_039_80182B38[AF(arg0, u8, 0x15)]();
}

s32 func_sc02_039_8017CDD8(u8 *arg0) {
    func_sc02_039_8017CFCC();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc02_039_8017CE1C(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

s32 func_sc02_039_8017CE40(u8 *arg0) {
    func_sc02_039_8017CFF4();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc02_039_8017CE80(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_8002D4C8(0x1C, 0);
        func_8001BFD0();
        func_8002D4C8(0x1D, 0);
        func_800D0C48(1);
        func_800D1E28();
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

void func_sc02_039_8017CEFC(void) {
    func_800D1EBC();
}

void func_sc02_039_8017CF1C(u8 *arg0) {
    D_sc02_039_80182B4C[AF(arg0, u8, 0x15)]();
}

s32 func_sc02_039_8017CF58(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_8002D4C8(0x1C, 0);
        func_8001BFD0();
        func_8002D4C8(0x1D, 0);
        func_800D1E28();
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

void func_sc02_039_8017CFCC(void) {
    func_8016EE40((s32) &D_sc02_039_80182B58, 0x01000000);
}

void func_sc02_039_8017CFF4(void) {
    func_8016EE40((s32) &D_sc02_039_80182B64, 0x01000000);
}

void func_sc02_039_8017D01C(void) {
    D_80126954 = 0x190;
    D_80126950 = 0x190;
    D_8012695C = 0x3E8;
    D_80126968 = 0xE3;
    D_8012696A = 0;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x50;
    D_8012697A = 0;
    func_8012A018((s32) func_sc02_039_8017D0D4, 0);
    func_8012A094((s32) &D_80126948);
    func_sc02_039_8017D0D4((s32) &D_80126948);
    func_8012A094((s32) &D_80126948);
    D_sc02_039_801A0C88 = D_801269E8;
}

void func_sc02_039_8017D0D4(s32 arg0) {
    D_sc02_039_80182B78[AF(arg0, u8, 4)]();
}

typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_5;
typedef struct { u16 field_0[6]; } struct_C_5;
typedef struct { u16 field_0, field_2, field_4, field_6; } struct_8_6;
typedef struct { u8 field_0, field_1, field_2, field_3; } struct_4_3;
typedef struct { struct_8_6 field_0; struct_8_6 field_8; struct_4_3 field_10; struct_4_3 field_14; s32 field_18; } struct_1C_3;
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_4;
typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_7;
typedef struct { struct_8_7 field_0[4]; struct_4_3 field_20[4]; s32 field_30; } struct_34_2;
typedef struct { u16 field_0; s16 field_2; s16 field_4; s16 field_6; s32 field_8; s32 field_C; } struct_10;
typedef struct { s16 field_0, field_2, field_4, field_6; u8 field_8, field_9; s16 field_A; struct_10 field_C[16]; } struct_10C_2;
extern s32 func_sc02_039_8017DBD0();
extern s32 func_sc02_039_8017DB14();

typedef struct { s32 field_0, field_4, field_8, field_C; } struct_10_2;
extern s32 func_80012C6C();
extern s32 func_80012ABC();

extern u16 D_80126CAC;
extern s16 D_sc02_039_8019B568[];
extern void func_8002D59C();

extern struct_20_4 D_800AE620;
extern struct_8_4 D_sc02_039_8019B5AC;
extern void RotMatrixY();
extern void SetRotMatrix();
extern void SetTransMatrix();
extern void RotTransSV();
extern void func_8012E32C();
extern s32 RotTransPers();
typedef struct { u8 field_0, field_1; } struct_2;
extern struct_2 D_sc02_039_8019B594[];
extern void func_sc02_039_8017E794();
extern s32 func_8012BEE8();
extern s32 rand();
extern s32 func_8012C658();
extern s32 func_8012DEB8();
extern void func_sc02_039_8017E25C();
extern void func_sc02_039_8017E024();
extern s32 func_sc02_039_8017E2F4();
extern u8 D_sc02_039_8019B57C;
extern void func_8001C810();
extern void func_8001C1E4();
extern u8 D_sc02_039_8019CDBC;
extern u8 D_sc02_039_8019D81C;

typedef struct { u8 field_0; u8 field_1; s16 field_2[2]; s16 field_6[2]; s16 field_A; s16 field_C; } struct_E;
extern s32 func_sc02_039_8017D5F4();
extern s32 func_sc02_039_8017D6AC();
extern s32 ratan2();
extern u8 D_801202A0;
extern u8 D_80126B58;
extern void *D_80126B78;
extern struct_8_4 D_80126940;
extern s16 D_sc02_039_80182BC4[];
extern u8 D_sc02_039_80182B7C;
extern s32 func_80148800();
extern s32 rsin();
extern s32 rcos();
extern s32 func_sc02_039_8017D484();
extern s32 func_80012DBC();
extern void func_8001C214();
extern u8 D_sc02_039_8019E298;
extern struct_10_2 D_sc02_039_8019B5C0[];
extern struct_8_4 D_sc02_039_8019B5E6[];
extern struct_10_2 D_sc02_039_8019B5B4[];
extern u8 D_sc02_039_8019B624;
extern void ApplyMatrixLV();
extern s32 D_80126B5C;
extern s32 D_80126B60;
extern s32 D_80126B64;
extern struct_8_4 D_sc02_039_8019F93C;
extern s16 D_sc02_039_8019B584;
extern void RotMatrixZ();
extern void func_8012F0BC();
extern void func_8012F1A4();
extern s32 func_80132784();

void func_sc02_039_8017D110(u8 *o) {
    struct_8_4 v;
    struct_8_4 w;
    s16 r;

    if (func_80148800(&D_80126B58) & 3) {
        AF(o, u8, 5) = (AF(o, u8, 5) + 1) & 1;
        AF(o, s32, 0x14) = D_sc02_039_80182BC4[AF(o, u8, 5)];
    }
    v = D_80126940;
    w.field_0 = v.field_0 - rsin(AF(D_80126B78, s16, 0x12)) / 128;
    w.field_4 = v.field_4 - rcos(AF(D_80126B78, s16, 0x12)) / 128;
    w.field_2 = v.field_2;
    AF(o, s16, 0xA0) = func_sc02_039_8017D484(&D_sc02_039_80182B7C, &v, &w);
    if (v.field_2 > 0) {
        v.field_2 = 0;
    }
    if (v.field_4 > -0x80) {
        v.field_4 = -0x80;
    }
    if (AF(o, s16, 0xA0) > 0xB80) {
        AF(o, s16, 0xA0) = 0xB80;
    }
    if (AF(o, s16, 0xA0) < 0x480) {
        AF(o, s16, 0xA0) = 0x480;
    }
    r = func_80012DBC((s16)D_sc02_039_801A0C88, AF(o, s16, 0xA0), 4, 1);
    D_sc02_039_801A0C88 = r;
    func_sc02_039_8017D2B8(o, r, &v);
}

void func_sc02_039_8017D2B8(s32 arg0, s32 arg1, s32 arg2) {
    struct_20_4 m;
    struct_8_5 a;
    u16 o[4];
    struct_8_5 r;

    AF(arg0, s32, 8) = (s16) func_80012C6C(AF(arg0, s16, 8), AF(arg0, s16, 0xC), 4);
    AF(arg0, s32, 0x10) = (s16) func_80012C6C(AF(arg0, s16, 0x10), AF(arg0, s16, 0x14), 4);
    AF(arg0, s16, 0x18) = func_80012ABC(AF(arg0, s16, 0x18), AF(arg0, s16, 0x20), 4);
    AF(arg0, s16, 0x1A) = func_80012ABC(AF(arg0, s16, 0x1A), AF(arg0, s16, 0x22), 4);
    AF(arg0, s16, 0x1C) = func_80012ABC(AF(arg0, s16, 0x1C), AF(arg0, s16, 0x24), 4);
    AF(arg0, s16, 0x28) = func_80012C6C(AF(arg0, s16, 0x28), AF(arg0, s16, 0x2E), 0x10);
    AF(arg0, s16, 0x2A) = func_80012C6C(AF(arg0, s16, 0x2A), AF(arg0, s16, 0x30), 0x10);
    AF(arg0, s16, 0x2C) = func_80012C6C(AF(arg0, s16, 0x2C), AF(arg0, s16, 0x32), 0x10);
    AF(arg0, s32, 0x48) = AF(arg0, s16, 0x28) + AF(arg2, s16, 0);
    AF(arg0, s32, 0x4C) = AF(arg0, s16, 0x2A) + AF(arg2, s16, 2);
    AF(arg0, s32, 0x50) = AF(arg0, s16, 0x2C) + AF(arg2, s16, 4);
    r.field_0 = AF(arg0, s16, 0x18);
    r.field_2 = AF(arg0, s16, 0x1A) + arg1;
    r.field_4 = AF(arg0, s16, 0x1C);
    func_sc02_039_8017D930(&r, &m);
    a.field_0 = 0;
    a.field_2 = 0;
    a.field_4 = AF(arg0, s32, 0x10);
    ApplyMatrixSV(&m, &a, o);
    AF(arg0, s32, 0x3C) = ((s16) o[0] >> 3) + AF(arg0, s16, 0x28) + AF(arg2, s16, 0);
    AF(arg0, s32, 0x40) = ((s16) o[1] >> 3) + AF(arg0, s16, 0x2A) + AF(arg2, s16, 2);
    AF(arg0, s32, 0x44) = ((s16) o[2] >> 3) + AF(arg0, s16, 0x2C) + AF(arg2, s16, 4);
}

s32 func_sc02_039_8017D484(struct_E *e, s32 arg1, s16 *w) {
    s32 r;

    for (;;) {
        switch (e->field_0) {
        case 0:
            r = func_sc02_039_8017D5F4(e->field_2, e->field_6, arg1);
            break;
        case 1:
            r = func_sc02_039_8017D6AC(e->field_2, e->field_6, arg1);
            break;
        case 0xFF:
            r = 0;
            break;
        }
        if (r == 0) {
            switch (e->field_1) {
            case 0:
                return ratan2(w[0] - e->field_A, w[2] - e->field_C) & 0xFFF;
            case 1:
                return ratan2(e->field_A - w[0], e->field_C - w[2]) & 0xFFF;
            case 2:
                return 0x800;
            }
        }
        e++;
    }
}

extern struct_8_4 D_sc02_039_8019B5E4[];
extern s32 func_8012CC64();
extern s32 func_8012CC40();
extern void func_8012C218();
extern u8 *func_80132EF4();

extern s32 NormalClip();

s32 func_sc02_039_8017D5F4(s16 *a, s16 *b, s16 *c) {
    s16 cx, cz, ax, ay, bx, by;
    s32 r;
    union { struct { s16 field_0, field_2; } m0; s32 m1; } p0, p1, p2;

    cx = c[0];
    ax = a[0];
    if (cx < ax) {
        r = 0;
    } else {
        bx = b[0];
        if (bx < cx) {
            r = 1;
        } else {
            cz = c[2];
            by = b[1];
            if (cz < by) {
                r = 0;
            } else {
                ay = a[1];
                if (ay < cz) {
                    r = 1;
                } else {
                    p0.m0.field_0 = ax;
                    p0.m0.field_2 = ay;
                    p1.m0.field_0 = bx;
                    p1.m0.field_2 = by;
                    p2.m0.field_0 = cx;
                    p2.m0.field_2 = cz;
                    r = NormalClip(p0.m1, p1.m1, p2.m1) >= 0;
                }
            }
        }
    }
    return r;
}

s32 func_sc02_039_8017D6AC(s16 *a, s16 *b, s16 *c) {
    s16 cx, cz, ax, ay, bx, by;
    s32 r;
    union { struct { s16 field_0, field_2; } m0; s32 m1; } p0, p1, p2;

    cx = c[0];
    bx = b[0];
    if (cx < bx) {
        r = 0;
    } else {
        ax = a[0];
        if (ax < cx) {
            r = 1;
        } else {
            cz = c[2];
            ay = a[1];
            if (cz > ay) {
                r = 0;
            } else {
                by = b[1];
                if (cz < by) {
                    r = 1;
                } else {
                    p0.m0.field_0 = ax;
                    p0.m0.field_2 = ay;
                    p1.m0.field_0 = bx;
                    p1.m0.field_2 = by;
                    p2.m0.field_0 = cx;
                    p2.m0.field_2 = cz;
                    r = NormalClip(p0.m1, p1.m1, p2.m1) >= 0;
                }
            }
        }
    }
    return r;
}

s32 func_sc02_039_8017D764(void) {
    return 0x49;
}

typedef struct { u32 *field_0; u8 field_4[0x10]; } struct_14_3;
typedef struct { u8 field_0[0x14]; } struct_14_4;
typedef struct { unsigned field_0_b0 : 24; unsigned field_3_b0 : 8; } struct_4_4;
typedef struct { struct_C_5 field_0[9]; } struct_6C;
typedef struct { s32 field_0, field_4, field_8, field_C; } struct_10_3;
typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_8;
typedef struct { s32 field_0, field_4, field_8, field_C; } struct_10_4;
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_5;
typedef struct { u8 field_0, field_1, field_2, field_3; } struct_4_5;
typedef struct { struct_8_8 field_0[4]; struct_4_5 field_20[4]; s32 field_30; } struct_34_3;
typedef struct { s32 field_0, field_4, field_8; } struct_C_6;
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_6;
typedef struct { u8 field_0, field_1, field_2, field_3; } struct_4_6;
typedef struct { u32 field_0_b0 : 24; u32 field_3_b0 : 8; } struct_4_7;
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_7;
typedef struct { struct_4_7 field_0; u8 field_4, field_5, field_6, field_7; s16 field_8, field_A, field_C, field_E, field_10, field_12, field_14, field_16; } struct_18;
typedef union { s32 m0; struct_4_2 m1; } union_4_2;
typedef void (*type_2)();
typedef struct { u8 field_0[0x18]; struct_20_4 field_18; } struct_38;
typedef struct { s32 field_0[4]; } struct_10_5;
typedef struct { struct_10_5 field_0, field_10, field_20; } struct_30_2;
typedef struct { u8 field_0[0x34]; } struct_34_4;
typedef struct { u8 field_0[8]; } struct_8_9;
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_8;
typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_10;
typedef struct { s16 field_0, field_2, field_4, field_6, field_8; u16 field_A; s16 field_C, field_E; s32 field_10; } struct_14_5;
typedef struct { unsigned field_0_b0 : 31; unsigned field_3_b7 : 1; } struct_4_8;
extern void func_80013F3C();
extern s16 D_sc02_039_8019AD38[];

void func_sc02_039_8017D76C(s32 arg0, s32 arg1, s32 arg2) {
    struct_20_4 m;

    func_80013F3C(&m);
    func_sc02_039_8017D7D0((s16)arg0, &m);
    ApplyMatrixSV(&m, arg1, arg2);
}

void func_sc02_039_8017D7D0(s32 arg0, struct_20_4 *m) {
    struct_20_4 r;
    s32 a;
    s16 c;
    s16 s;

    a = arg0 & 0xFFF;
    c = func_sc02_039_8017DBD0(a);
    s = func_sc02_039_8017DB14(a);
    r.field_0[0][0] = c;
    r.field_0[0][1] = 0;
    r.field_0[0][2] = s;
    r.field_0[1][0] = 0;
    r.field_0[1][1] = 0x7FF8;
    r.field_0[1][2] = 0;
    r.field_0[2][0] = -s;
    r.field_0[2][1] = 0;
    r.field_0[2][2] = c;
    gte_SetRotMatrix(m);
    gte_ldclmv(&r.field_0[0][0]);
    gte_rtir();
    gte_stclmv(&m->field_0[0][0]);
    gte_ldclmv(&r.field_0[0][1]);
    gte_rtir();
    gte_stclmv(&m->field_0[0][1]);
    gte_ldclmv(&r.field_0[0][2]);
    gte_rtir();
    gte_stclmv(&m->field_0[0][2]);
}

void func_sc02_039_8017D930(u16 *r, s16 *m) {
    s16 sx;
    s16 cx;
    s16 sy;
    s16 cy;
    s16 sz;
    s16 cz;
    s32 a;
    s32 b;
    s32 c;

    sx = func_sc02_039_8017DBD0(r[0] & 0xFFF);
    cx = func_sc02_039_8017DB14(r[0] & 0xFFF);
    sy = func_sc02_039_8017DBD0(r[1] & 0xFFF);
    cy = func_sc02_039_8017DB14(r[1] & 0xFFF);
    sz = func_sc02_039_8017DBD0(r[2] & 0xFFF);
    cz = func_sc02_039_8017DB14(r[2] & 0xFFF);
    c = (sx * cz) >> 15;
    b = (sx * sz) >> 15;
    a = (cx * cy) >> 15;
    m[0] = (sz * sy) >> 15;
    m[1] = ((a * sz) >> 15) - c;
    m[2] = ((b * cy) >> 15) + ((cx * cz) >> 15);
    m[3] = (cz * sy) >> 15;
    m[4] = ((a * cz) >> 15) + b;
    m[5] = ((c * cy) >> 15) - ((cx * sz) >> 15);
    m[6] = -cy;
    m[7] = (sy * cx) >> 15;
    m[8] = (sy * sx) >> 15;
}

s32 func_sc02_039_8017DB14(u32 a) {
    if (a < 0x400) {
        return D_sc02_039_8019AD38[a];
    }
    if (a - 0x400 < 0x400) {
        return D_sc02_039_8019AD38[0x7FF - a];
    }
    if (a - 0x800 < 0x400) {
        return (s16)-D_sc02_039_8019AD38[a - 0x800];
    }
    if (a - 0xC00 < 0x400) {
        return (s16)-D_sc02_039_8019AD38[0xFFF - a];
    }
}

s32 func_sc02_039_8017DBD0(s32 a) {
    if (a >= 0 && a < 0x400) {
        return D_sc02_039_8019AD38[0x3FF - a];
    }
    if (a >= 0x400 && a < 0x800) {
        return (s16)-D_sc02_039_8019AD38[a - 0x400];
    }
    if (a >= 0x800 && a < 0xC00) {
        return (s16)-D_sc02_039_8019AD38[0xBFF - a];
    }
    if (a >= 0xC00 && a < 0x1000) {
        return D_sc02_039_8019AD38[a - 0xC00];
    }
}

void func_sc02_039_8017DC7C(u8 *p) {
    s16 d;
    s16 t;
    s16 v;

    d = AF(p, u16, 6) - D_80126CAC;
    if (d < 0) {
        d = -d;
    }
    if (d > 0x800) {
        AF(AF(p, u8 *, 0x20), u32, 4) |= 0x80000000;
    } else {
        AF(AF(p, u8 *, 0x20), u32, 4) &= 0x7FFFFFFF;
        AF(AF(p, u8 *, 0x20), u16, 0x14) += D_sc02_039_8019B568[AF(p, s16, 0x70)];
    }
    t = d - 0x140;
    if (t < 0) {
        v = 0x7F;
    } else if (t >= 0x200) {
        v = 0;
    } else {
        v = 0x7F - (t >> 2);
    }
    if (v == 0) {
        if (AF(p, s16, 0x84) != 0) {
            func_8002D59C(4, 0x6DD, AF(p, u16, 0x70));
            AF(p, s16, 0x84) = 0;
        }
    } else {
        func_8002D59C(0x6DD, (v | 0x1000) & 0xFFFF, AF(p, u16, 0x70));
        AF(p, s16, 0x84) = 1;
    }
}

void func_sc02_039_8017DDB0(u8 *arg0) {
    D_sc02_039_8019B574[AF(arg0, u16, 2)]();
    func_8012B2CC((s32) arg0);
}

extern u16 D_sc02_039_8019B538[][4];

void func_sc02_039_8017DE00(u8 *o) {
    s32 i;

    for (i = 0; i < 4; i++) {
        func_8012C658(0x199, (s16)((i << 10) + D_sc02_039_8019B538[AF(o, s16, 0x70)][i]), o);
    }
}

void func_sc02_039_8017DE84(u8 *o) {
    s32 r;
    s16 k;

    r = func_8012C1B8(o);
    AF(o, s32, 0x20) = r;
    if (r == 0) {
        func_8012CAE4(o);
        return;
    }
    k = AF(o, u16, 0x70) & 3;
    AF(o, s16, 0xFE) = k;
    switch (k) {
    case 0:
        func_8001C810(AF(o, s32, 0x20), &D_sc02_039_8019CDBC);
        AF(AF(o, u8 *, 0x20), s32, 4) |= 0x8040;
        func_8012C658(0x199, 2, o);
        break;
    case 1:
        func_8001C810(AF(o, s32, 0x20), &D_sc02_039_8019D81C);
        AF(AF(o, u8 *, 0x20), s32, 4) |= 0x8040;
        func_8012C658(0x199, 3, o);
        break;
    case 2:
    case 3:
        func_8001C2C4(AF(o, s32, 0x20));
        func_8001C1E4(AF(o, s32, 0x20), AF(AF(o, u8 *, 0x64), s32, 0x20));
        AF(o, s16, 0xA) = 0x90;
        AF(o, s32, 0x58) = (s32)&D_sc02_039_8019B57C | 0x40000000;
        AF(o, s16, 0x5C) = 0x4400;
        AF(o, s16, 6) = 0;
        AF(o, s16, 0xE) = 0;
        AF(o, u8, 0x75) = 4;
        break;
    }
    AF(o, s16, 0x100) = AF(o, u16, 0x70) & 0xFF0;
    AF(AF(o, u8 *, 0x20), s32, 4) |= 0x8000;
    func_8012AD50(o);
}

void func_sc02_039_8017DFE8(u8 *arg0) {
    D_sc02_039_8019B58C[AF(arg0, u16, 2)]();
}

void func_sc02_039_8017E024(u8 *o) {
    u8 unused[16];
    struct_8_4 v;
    struct_10_2 a;
    struct_10_2 r;
    struct_10_2 b;
    struct_20_4 m;
    s32 flag;
    u8 *g;

    m = *(struct_20_4 *)(AF(AF(o, u8 *, 0x64), u8 *, 0x20) + 0x34);
    g = &D_80126B58;
    if (AF(o, u16, 0xFE) < 2) {
        v = D_sc02_039_8019F93C;
        RotMatrixZ(AF(o, s16, 0x100), &m);
        gte_SetRotMatrix(&m);
        gte_SetTransMatrix(&m);
        gte_ldv0(&v);
        gte_rtv0tr();
        gte_stlvnl(&r);
        gte_stflg(&flag);
        AF(o, s16, 6) = r.field_0;
        AF(o, s16, 0xA) = r.field_4;
        AF(o, s16, 0xE) = r.field_8;
    } else {
        if (AF(o, u8, 0x74) != 0) {
            a.field_0 = D_80126B5C;
            a.field_4 = D_80126B60;
            a.field_8 = D_80126B64;
            func_8012F0BC(AF(o, u8 *, 0x20) + 0x34, &a, &b);
            if (AF(o, u8, 0x102) == 0) {
                AF(AF(o, u8 *, 0x64), s32, 0xE0) += b.field_0 >> 2;
            }
        }
        func_80132784(o, AF(o, u8 *, 0x64), 0);
        if (AF(o, u8, 0x74) != 0) {
            b.field_4 = (D_sc02_039_8019B584 - 1) << 16;
            func_8012F1A4(AF(o, u8 *, 0x20) + 0x34, &b, &r);
            AF(g, s32, 4) = r.field_0;
            AF(g, s32, 8) = r.field_4;
            AF(g, s32, 0xC) = r.field_8;
        }
    }
}


void func_sc02_039_8017E25C(u8 *o) {
    s16 v;
    s32 t;

    v = AF(o, s16, 0xDE);
    if (v < -2) {
        AF(o, s32, 0xE0) += 0x20000;
    } else if (v > 2) {
        AF(o, s32, 0xE0) += -0x20000;
    }
    if (AF(o, s32, 0xE0) < 0) {
        t = AF(o, s32, 0xE0) + 0x8000;
        AF(o, s32, 0xE0) = t;
        if (t > 0) {
            AF(o, s32, 0xE0) = 0;
        }
    } else if (AF(o, s32, 0xE0) > 0) {
        t = AF(o, s32, 0xE0) - 0x8000;
        AF(o, s32, 0xE0) = t;
        if (t < 0) {
            AF(o, s32, 0xE0) = 0;
        }
    }
    AF(o, s32, 0xDC) += AF(o, s32, 0xE0);
    AF(AF(o, u8 *, 0x20), u16, 0x14) = AF(o, u16, 0xDE);
}

s32 func_sc02_039_8017E2F4(u8 *o, u8 *b) {
    struct_8_4 p;
    struct_8_4 q;
    s16 m;

    p.field_0 = q.field_0 = AF(b, u16, 4);
    p.field_2 = q.field_2 = AF(b, u16, 8) - 0x10;
    p.field_4 = AF(b, u16, 0xC);
    q.field_4 = AF(b, u16, 0xE);
    if (func_8012DEB8(o, &p, &q) != 0) {
        return 1;
    }
    m = (AF(b, s16, 4) + AF(b, s16, 6)) >> 1;
    p.field_0 = q.field_0 = m;
    if (func_8012DEB8(o, &p, &q) != 0) {
        return 1;
    }
    p.field_0 = q.field_0 = (AF(b, s16, 4) + m) >> 1;
    if (func_8012DEB8(o, &p, &q) != 0) {
        return 1;
    }
    p.field_0 = q.field_0 = (AF(b, s16, 6) + m) >> 1;
    if (func_8012DEB8(o, &p, &q) == 0) {
        p.field_0 = q.field_0 = AF(b, u16, 6);
        return func_8012DEB8(o, &p, &q) != 0;
    }
    return 1;
}

extern u8 D_sc02_039_8019CA6C;
extern u8 D_sc02_039_8019DEE0;

void func_sc02_039_8017E428(u8 *o) {
    u8 *p;
    s32 r;

    r = func_8012C1B8();
    AF(o, s32, 0x20) = r;
    if (r == 0) {
        func_8012CAE4(o);
        return;
    }
    func_8001C810(r, &D_sc02_039_8019CA6C);
    AF(AF(o, u8 *, 0x20), s32, 4) |= 0x8040;
    AF(AF(o, u8 *, 0x20), s32, 0x28) = 0x1800180;
    p = (u8 *)func_8012C1B8();
    if (p != 0) {
        func_8001C214(p, &D_sc02_039_8019DEE0);
        AF(p, s16, 8) = AF(o, u16, 6);
        AF(p, s16, 0xA) = AF(o, u16, 0xA) + 0xC0;
        AF(p, s16, 0xC) = AF(o, u16, 0xE) - 0xB0;
    }
    func_sc02_039_8017DE00(o);
    func_8012AD50(o);
}

void func_sc02_039_8017E500(u8 *o) {
    s16 d;

    if (AF(o, u16, 0xFE) < 2) {
        d = AF(o, u16, 6) - D_80126CAC;
        if (d < 0) {
            d = -d;
        }
        if (d > 0x800) {
            AF(AF(o, u8 *, 0x20), u32, 4) |= 0x80000000;
        } else {
            func_sc02_039_8017E25C(o);
            AF(AF(o, u8 *, 0x20), u32, 4) &= 0x7FFFFFFF;
            func_sc02_039_8017E024(o);
        }
    } else {
        if (AF(AF(AF(o, u8 *, 0x64), u8 *, 0x20), s32, 4) < 0) {
            AF(o, s16, 0x5C) = 0;
            return;
        }
        AF(o, u16, 0x5C) |= 0x4400;
        func_sc02_039_8017E024(o);
        if (AF(o, s16, 0xFE) == 3 && func_sc02_039_8017E2F4(o, &D_sc02_039_8019B57C) != 0) {
            D_80126B96 = 0x4007;
            D_80126B98 = 0x20;
        }
        AF(o, u8, 0x102) = AF(o, u8, 0x74);
    }
}

void func_sc02_039_8017E640(u8 *o) {
    s32 a;
    s32 r;
    struct_2 *t;

    if (AF(o, s16, 0x70) == 0) {
        func_sc02_039_8017E794();
    }
    if (func_8012BEE8(o) != 0) {
        t = D_sc02_039_8019B594;
        if (t[AF(o, s16, 0xFE)].field_0 == 0xFF) {
            AF(o, s16, 0xFE) = 0;
        }
        a = t[AF(o, s16, 0xFE)].field_0;
        if (a & 4) {
            r = rand() & 1;
            a = r | 0x40;
            if ((s16)r == 0) {
                a = r | 0x80;
            }
        }
        AF(o, s32, 0x1C) = D_sc02_039_8019B594[AF(o, s16, 0xFE)].field_1;
        if ((u16)(AF(o, u16, 0x100) + 0xFF) < 0x1FF && AF(o, s32, 0xE0) < 0x150) {
            func_8012C658(0x1A9, a, o);
        }
        AF(o, s16, 0xFE)++;
    }
}

void func_sc02_039_8017E758(u8 *arg0) {
    D_sc02_039_8019B5A4[AF(arg0, u16, 2)]();
}

void func_sc02_039_8017E794(u8 *o) {
    u8 *p;
    u8 *bp;
    s32 i;
    s16 best;
    s16 bx;
    s16 d;
    u16 c;
    s32 s;

    best = 0x7FFF;
    bx = 0x7FFF;
    bp = 0;
    p = &D_801202A0;
    for (i = 0; i < 0x60; i++, p += 0x10C) {
        if (AF(p, u16, 0) == 0x1A8) {
            func_sc02_039_8017E910(p);
            d = AF(p, s16, 0x100);
            if (d < 0) {
                d = -d;
            }
            if (best > d) {
                bx = AF(p, s16, 0x100);
                best = d;
                bp = p;
            }
        }
    }
    c = AF(o, u16, 0x84) + 1;
    AF(o, u16, 0x84) = c;
    if (best < 0xA0 && AF(bp, s32, 0xE0) < 0x150) {
        if ((c & 3) == 0) {
            s = (bx + 0xA0) / 20;
            func_8002D4C8(0x6DA, (u16)((0x7F - (best >> 1)) | ((s << 8) | 0x3000)));
            AF(o, s16, 0x102) = 1;
        }
    } else if (AF(o, s16, 0x102) == 1) {
        func_8002D4C8(4, 0x6DA);
        AF(o, s16, 0x102) = 0;
    }
}

void func_sc02_039_8017E910(u8 *o) {
    struct_8_4 v;
    struct_20_4 m;
    s32 flag;
    s32 sxy;
    s32 p;
    s32 f;

    m = D_800AE620;
    m.field_14[0] = AF(o, s16, 6);
    m.field_14[1] = AF(o, s16, 0xA);
    m.field_14[2] = AF(o, s16, 0xE);
    RotMatrixY(AF(AF(o, u8 *, 0x20), s16, 0x12), &m);
    SetRotMatrix(&m);
    SetTransMatrix(&m);
    RotTransSV(&D_sc02_039_8019B5AC, &v, &flag);
    func_8012E32C();
    AF(o, s32, 0xE0) = RotTransPers(&v, &sxy, &p, &flag);
    f = flag;
    AF(o, s16, 0x100) = ((s16 *)&sxy)[0];
    if (f < 0) {
        AF(o, s16, 0x100) = -999;
    }
}

void func_sc02_039_8017EA20(u8 *o) {
    s32 r;
    s16 k;
    s16 v;
    s32 x;
    s32 t;

    r = func_8012C1B8(o);
    AF(o, s32, 0x20) = r;
    if (r == 0) {
        func_8012CAE4(o);
        return;
    }
    func_8001C214(r, &D_sc02_039_8019E298);
    k = AF(o, u16, 0x70) & 0xF;
    AF(o, s16, 0x102) = k;
    if (k != 0) {
        x = rand();
        t = D_sc02_039_8019B5C0[AF(o, s16, 0x102)].field_0;
        AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x10;
        AF(AF(o, u8 *, 0x20), s16, 0x18) = AF(AF(o, u8 *, 0x20), s16, 0x1A) = AF(AF(o, u8 *, 0x20), s16, 0x1C) = t + (x & 0xFF);
    }
    AF(o, s32, 0x48) = 0x18000;
    AF(o, s16, 0x100) = 0x1000 / D_sc02_039_8019B5E6[AF(o, s16, 0x102)].field_0;
    v = AF(AF(o, u8 *, 0x20), s16, 0x18);
    if (v >= 0x1000) {
        AF(o, s16, 0x100) = 0x40;
    } else {
        AF(o, s16, 0x100) = (0x1400 - v) >> 4;
    }
    if (AF(o, s16, 0x102) != 2) {
        AF(AF(o, u8 *, 0x20), s16, 0x12) = AF(AF(AF(o, u8 *, 0x64), u8 *, 0x20), u16, 0x12) + (rand() & 0xFF) - 0x80;
    } else {
        AF(AF(o, u8 *, 0x20), s16, 0x12) = AF(AF(AF(o, u8 *, 0x64), u8 *, 0x20), u16, 0x12) + (rand() & 1) * 0x1C0 - 0xE0;
    }
    func_8012B2CC(o);
    ApplyMatrixLV(AF(o, u8 *, 0x20) + 0x34, &D_sc02_039_8019B5B4[AF(o, s16, 0x102)], o + 0x10);
    x = rand();
    AF(o, s32, 0x58) = (s32)&D_sc02_039_8019B624 | 0x20000000 | 0x40000000;
    AF(o, u16, 0x5C) = 0xC000;
    AF(o, u8, 0x75) = 0;
    AF(o, u16, 0xE) -= x & 0x1F;
    func_8012AD50(o);
}

void func_sc02_039_8017EC34(u8 *o) {
    struct_8_4 pos;
    s32 sxy;
    s32 p;
    s32 flag;
    s32 r;
    u16 s;
    u8 *q;
    s16 x;
    s16 pan;
    s16 vol;
    s16 t;

    if (AF(o, s16, 0x102) == 0) {
        r = func_8012CC64(o, D_sc02_039_8019B5E4);
    } else {
        r = func_8012CC40(o, &D_sc02_039_8019B5E4[AF(o, s16, 0x102)]);
    }
    if (AF(o, s16, 0xA) >= -0x200) {
        func_8012C218(o);
        return;
    }
    if (r != 0) {
        s = D_sc02_039_8019B5E6[AF(o, s16, 0x102)].field_4;
        r &= 0x2000;
        if (r != 0) {
            AF(o, s16, 0x16) = -AF(o, u16, 0x16);
            if (AF(o, s16, 0xFE) == 0) {
                AF(o, s16, 0xFE)++;
                AF(o, s16, 0x16) -= 8;
            }
        } else {
            AF(o, s16, 0xFE) = 0;
            AF(o, s16, 0x16) = -4;
            if (AF(o, s16, 0x102) < 2 && (rand() & 0x7FFF) < (s16)s) {
                func_8012C658(0x1A9, 2, o);
            }
        }
        if (s != 0) {
            q = func_80132EF4(o, 0x22);
            if (q != 0) {
                t = AF(q, u16, 0xA) + D_sc02_039_8019B5E6[AF(o, s16, 0x102)].field_0;
                AF(q, s16, 0x34) = s + 1;
                AF(q, s16, 0xA) = t;
            }
        }
        s = (AF(o, u16, 0x70) & 0x80) ? 0x6DC : 0;
        if (AF(o, u16, 0x70) & 0x40) {
            s = 0x6DB;
        }
        if (s != 0) {
            pos.field_0 = AF(o, u16, 6);
            pos.field_2 = AF(o, u16, 0xA);
            pos.field_4 = AF(o, u16, 0xE);
            func_8012E32C();
            RotTransPers(&pos, &sxy, &p, &flag);
            x = ((s16 *)&sxy)[0];
            pan = (x + 0xA0) / 20;
            if (x < 0) {
                vol = (x >> 1) + 0x7F;
            } else {
                vol = 0x7F - (x >> 1);
            }
            if (pan >= 0 && pan < 0x10 && vol >= 0x2F && vol < 0x80) {
                func_8002D4C8(s, (u16)(vol | ((pan << 8) | 0x3000)));
            }
        }
    }
    AF(AF(o, u8 *, 0x20), s16, 0x10) += AF(o, u16, 0x100);
    func_sc02_039_8017EED8(o);
}

void func_sc02_039_8017EE9C(u8 *arg0) {
    D_sc02_039_8019B634[AF(arg0, u16, 2)]();
}

void func_sc02_039_8017EED8(s32 arg0, s32 arg1) {
    s32 temp_s1;

    temp_s1 = D_sc02_039_8019B618[AF(arg0, s16, 0x102)];
    if (temp_s1 != 0) {
        func_8012B2CC(arg0, arg1);
        if (func_sc02_039_8017EF5C(arg0, temp_s1) != 0) {
            D_80126B96 = AF(temp_s1, u16, 4);
            D_80126B98 = AF(temp_s1, u16, 6);
        }
    }
}


s32 func_sc02_039_8017EF5C(u8 *o, u8 *p) {
    struct_8_4 a, b;
    s32 i, j;

    b.field_0 = AF(p, u16, 2) >> 1;
    a.field_0 = -b.field_0;
    for (i = 0; i < AF(p, u16, 0); i++) {
        a.field_2 = b.field_2 = AF(p, s16, 8 + i * 2);
        for (j = 0; j < AF(p, u16, 0); j++) {
            a.field_4 = b.field_4 = AF(p, s16, 8 + j * 2);
            if (func_8012DEB8(o, &a, &b)) return 1;
        }
    }
    return 0;
}

void func_sc02_039_8017F050(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8(arg0);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C2C4(temp_v0);
    AF(arg0, s16, 0xFE) = 0;
    AF(arg0, s16, 0x102) = 0;
    AF(arg0, s32, 0x1C) = (s32) AF(arg0, s16, 0xFC);
    func_8012AD50(arg0);
}
