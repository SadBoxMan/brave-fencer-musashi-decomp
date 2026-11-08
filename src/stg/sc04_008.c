#include "common.h"
#include "gte.h"
#include "psyq.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc04_008_8017BE9C(void) {
}

void func_sc04_008_8017BEA4(void) {
}

void func_sc04_008_8017BEAC(void) {
}

void func_sc04_008_8017BEB4(void) {
}

typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_4;
typedef struct { s16 field_0[6]; } struct_C_3;
extern void (*D_sc04_008_80182500[])();
typedef struct { s16 field_0, field_2; } struct_4_2;
typedef struct { struct_4_2 field_0; s16 field_4; s16 field_6; struct_4_2 field_8; s32 field_C; s32 field_10; s32 field_14; s32 field_18; } struct_1C;
typedef struct { s32 field_0, field_4, field_8; } struct_C_4;
void func_sc04_008_8017D03C(void);
extern void func_800167B8();
extern s32 func_800167F0();
void func_sc04_008_8017D064(void);
extern void func_800D1EBC();
extern void (*D_sc04_008_80182514[])();
extern u8 D_sc04_008_80182520;
extern void func_8016EE40();
extern u8 D_sc04_008_80182524;
extern void func_sc04_008_8017D12C();
extern void (*D_sc04_008_80182530[])();
extern void (*D_sc04_008_8018255C[])();
extern void (*D_sc04_008_80182564[])();
extern void (*D_sc04_008_80182570[])();
extern void (*D_sc04_008_801825AC[])();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

extern s32 D_sc04_008_80182538[];
extern s32 func_8013B7F4();

extern void func_8012BF4C();
extern void func_8012AD50();
extern void func_80146E90();
extern u8 D_sc04_008_801825A0;
extern void func_800159E4();
extern void func_8001CC3C();
extern s32 func_80146E98();
extern void func_8012C218();
extern void (*D_sc04_008_8018EE98[])();
extern s32 func_80143C74();

extern void func_8013CB84();

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

extern s32 D_8011F9C4;
extern u8 D_sc04_008_80182694;
extern u8 D_sc04_008_80182B6C;
extern void func_80029124();
extern void func_800291F0();
s32 func_sc04_008_8017D3A8(s32 arg0);
extern s32 *D_801274C8;
extern s32 *D_801274CC;
extern u8 D_80126B58;
extern s32 func_8012BEE8();
extern s32 func_8017267C();
extern void func_sc04_008_8017E030();
extern void *D_80126B78;

typedef struct { s16 field_0[3][3]; s16 field_12; s32 field_14[3]; } struct_20_3;
typedef struct { u32 field_0; u32 field_4; u32 field_8; u32 field_C; u32 *field_10; } struct_14_2;
typedef struct { s32 field_0; s32 field_4; s32 field_8; s32 field_C; s32 field_10; s32 field_14; s32 field_18; } struct_1C_2;
extern u8 *D_800A5E60;
extern u16 D_800B9A02;
extern u32 D_800A6610[2][0x1000];

void func_sc04_008_8017BEBC(u8 *obj) {
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

void func_sc04_008_8017CD9C(void) {
    D_8011F9C4 = 1;
    func_80029124(0xD6, 1);
    func_800291F0(4, 0xD6);
    func_8002D4C8(6, 0);
    D_801274C8 = &D_sc04_008_80182694;
    D_801274CC = &D_sc04_008_80182B6C;
    func_sc04_008_8017D3A8(0);
}

void func_sc04_008_8017CE0C(u8 *arg0) {
    D_sc04_008_80182500[AF(arg0, u8, 0x15)]();
}

s32 func_sc04_008_8017CE48(u8 *arg0) {
    func_sc04_008_8017D03C();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc04_008_8017CE8C(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

s32 func_sc04_008_8017CEB0(u8 *arg0) {
    func_sc04_008_8017D064();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc04_008_8017CEF0(u8 *arg0) {
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

void func_sc04_008_8017CF6C(void) {
    func_800D1EBC();
}

void func_sc04_008_8017CF8C(u8 *arg0) {
    D_sc04_008_80182514[AF(arg0, u8, 0x15)]();
}

s32 func_sc04_008_8017CFC8(u8 *arg0) {
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

void func_sc04_008_8017D03C(void) {
    func_8016EE40((s32) &D_sc04_008_80182520, 0x01000000);
}

void func_sc04_008_8017D064(void) {
    func_8016EE40((s32) &D_sc04_008_80182524, 0x01000000);
}

void func_sc04_008_8017D08C(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x320;
    D_80126968 = 0x155;
    D_8012696A = 0x600;
    D_80126978 = -0x60;
    D_8012696C = 0;
    D_80126976 = 0;
    D_8012697A = 0x30;
    func_8012A018((s32) func_sc04_008_8017D12C, 0);
    func_8012A094((s32) &D_80126948);
    func_sc04_008_8017D12C((s32) &D_80126948);
}

void func_sc04_008_8017D12C(s32 arg0) {
    D_sc04_008_80182530[AF(arg0, u8, 4)]();
}

extern u8 D_sc04_008_80191F40;
extern void func_8001CD9C();
extern void func_800233CC();
extern void func_sc04_008_8017DCB4();
extern void *D_sc04_008_8019334C;

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
extern void func_sc04_008_8017D210();
extern s32 func_80012C6C();
extern s32 func_80012ABC();
extern void func_8012F14C();

extern s32 func_8012E544();
extern u16 D_801202A0;
extern u8 D_sc04_008_80182578;
extern s32 func_801290DC();
extern void func_80149350();

extern s32 func_8012CBCC();

extern struct_14_3 D_800A651C[];
extern u8 D_800AF648;
extern u8 *func_80010A08(s32 n);
extern s32 GetTPage();
extern void SetDrawMode();
extern void AddPrim();
extern void SetLineF2();
extern void SetSemiTrans();

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
extern void func_8001C214();
extern s32 func_8012C658();
extern s16 D_80126B96;
extern s32 func_8012B1B4();
extern void func_8012B2CC();
extern s16 D_80126B62;
extern s32 func_8014CB7C();
extern s32 func_8012BE54();
extern s32 func_8012B8A4();
extern u8 D_sc04_008_8018ED38;
extern u8 D_sc04_008_8018ED50;
extern u8 D_sc04_008_8018F508;
extern s32 func_8012D624();

extern u8 D_80126B5C;
extern u8 D_sc04_008_8018253C;
extern u8 D_sc04_008_80182544;
extern s8 D_sc04_008_80191F3F;
extern s32 D_sc04_008_80193340;
extern s16 D_sc04_008_80193344;
extern u8 D_sc04_008_80191EF0[];
extern void func_80015978();
extern void *D_sc04_008_80193348;
extern void func_800139C8();
static inline void func_sc04_008_8017DCB4_inline(s16 *p, s16 x, s16 lim) {
    if (x > lim) {
        *p = x - lim;
    } else if (-lim > x) {
        *p = x + lim;
    }
}

typedef union { s32 m0; struct_4_2 m1; } union_4_2;
typedef struct { s16 field_0, field_2, field_4, field_6, field_8; u16 field_A; s16 field_C, field_E; s32 field_10; } struct_14_5;
extern s32 func_8012C354();
extern s32 func_8012B23C();
extern u8 D_sc04_008_8018ECE4;
extern u8 D_sc04_008_8018ED18;
extern u8 D_sc04_008_8018F488;

extern void func_sc04_008_8017DE40();
extern void func_801292C8();
typedef struct { u32 field_0_b0 : 24; u32 field_3_b0 : 8; } struct_4_7;
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_8;
typedef struct { struct_4_7 field_0; u8 field_4, field_5, field_6, field_7; s16 field_8, field_A, field_C, field_E, field_10, field_12, field_14, field_16; } struct_18;
extern u8 D_sc04_008_8018ED58;
extern u8 D_sc04_008_8018EE58;

typedef struct { unsigned field_0_b0 : 31; unsigned field_3_b7 : 1; } struct_4_8;
typedef struct { s16 field_0, field_2, field_4; } struct_6;
typedef struct { s32 field_0[4]; } struct_10_6;
typedef struct { s16 field_0, field_2; s32 field_4; } struct_8_12;
typedef struct { struct_8_4 field_0[3]; struct_4_4 field_18[3]; s32 field_24; } struct_28_2;
typedef struct { s32 field_0; s32 field_4; s32 field_8; s16 field_C; s16 field_E; s32 field_10[2]; s32 field_18; s32 field_1C; s32 field_20; } struct_24;
typedef struct { s16 field_0, field_2, field_4, field_6; s16 field_8, field_A, field_C, field_E; s32 field_10; } struct_14_6;
typedef struct { struct_8_4 field_0[4]; s32 field_20, field_24, field_28, field_2C, field_30, field_34; } struct_38_2;
typedef struct { s16 field_0; s16 field_2[5]; } struct_C_7;
typedef struct { u8 field_0; u8 field_1[11]; } struct_C_8;
typedef struct { u32 field_0; u32 field_4; s16 field_8, field_A; u8 field_C, field_D; u16 field_E; s16 field_10, field_12; } struct_14_7;
typedef struct { s8 field_0; u8 field_1; } struct_2;
typedef struct { u16 field_0; } struct_2_2;
typedef struct { u32 field_0; u8 field_4, field_5, field_6, field_7; s16 field_8, field_A; u8 field_C, field_D, field_E, field_F; s16 field_10, field_12; u8 field_14, field_15, field_16, field_17; s16 field_18, field_1A; u8 field_1C, field_1D, field_1E, field_1F; s16 field_20, field_22; } struct_24_2;
typedef struct { s32 field_0; } struct_4_9;
typedef struct { s32 field_0; u8 field_4[8]; } struct_C_9;
typedef struct { s32 field_0; s32 field_4; } struct_8_13;
typedef struct { struct_8_7 field_0[4]; s32 field_20[4]; s32 field_30; s32 field_34; u8 field_38; } struct_3C;
typedef struct { u32 field_0, field_4, field_8, field_C; u32 *field_10; } struct_14_8;


extern s32 func_80148800();
extern u8 D_80126940;
extern s16 D_sc04_008_80182534[];

void func_sc04_008_8017D168(u8 *arg0) {
    struct_8_4 v;
    u8 t;

    if (func_80148800((s32) &D_80126B58) & 3) {
        t = (AF(arg0, u8, 5) + 1) & 1;
        AF(arg0, u8, 5) = t;
        AF(arg0, s32, 0x14) = D_sc04_008_80182534[t];
    }
    v = *(struct_8_4 *)&D_80126940;
    v.field_4 = -0x480;
    func_sc04_008_8017D210(arg0, &v);
}

void func_sc04_008_8017D210(u8 *arg0, u8 *arg1) {
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

s32 func_sc04_008_8017D3A8(s32 arg0) {
    return func_8013B7F4(D_sc04_008_80182538[arg0], 0);
}

void func_sc04_008_8017D3D8(void) {
    func_8013CB84();
}

void func_sc04_008_8017D3F8(u8 *o) {
    struct_8_4 a;
    struct_8_4 b;
    s32 p;
    s32 flag;
    s32 i;
    u8 *prim;
    u8 *line;
    s32 otz;
    s16 *px;
    s16 *py;

    if (AF(o, u16, 2) == 0) {
        func_8002D4C8(0x98C, 0);
        px = (s16 *)(o + 0xDC);
        AF(o, u16, 2)++;
        for (i = 0; i < 8; i++) {
            px[0] = AF(o, u16, 6) + rand() % 0x980 - 0x4C0;
            px[1] = AF(o, u16, 0xA) + rand() % 0x1FF;
            px += 2;
        }
        return;
    }
    px = (s16 *)(o + 0xDC);
    a.field_4 = b.field_4 = -0x4D0;
    for (i = 0; i < 8; px += 2, i++) {
        py = px + 1;
        if ((*px -= 0x40) < -0x4E0) {
            *px = AF(o, u16, 6) + rand() % 0x980 - 0x4C0;
            *py = AF(o, u16, 0xA);
        } else {
            *py += 0x20;
        }
        a.field_0 = *px;
        a.field_2 = *py;
        b.field_0 = a.field_0 - 0x200;
        b.field_2 = a.field_2 + 0x100;
        prim = func_80010A08(0x1C);
        if (prim == 0) {
            return;
        }
        line = prim + 0xC;
        SetDrawMode(prim, 0, 0, GetTPage(0, rand() & 1, 0, 0) & 0xFFFF, 0);
        AF(prim, s32, 0x10) = 0xFFFFFF;
        SetLineF2(line);
        SetSemiTrans(line, 1);
        SetRotMatrix(&D_800AF648);
        SetTransMatrix(&D_800AF648);
        otz = RotTransPers(&a, prim + 0x14, &p, &flag);
        if (otz <= 0 || flag < 0) {
            return;
        }
        if (RotTransPers(&b, prim + 0x18, &p, &flag) <= 0 || flag < 0) {
            return;
        }
        AddPrim(D_800A651C[D_800B9A02].field_0 + otz, line);
        AddPrim(D_800A651C[D_800B9A02].field_0 + otz, prim);
    }
}

s32 func_sc04_008_8017D738(void) {
    return 0x55;
}

void func_sc04_008_8017D740(u8 *arg0) {
    D_sc04_008_8018255C[AF(arg0, u16, 2)]();
}

void func_sc04_008_8017D77C(u8 *o) {
    typedef struct { u8 field_0[0x70]; s16 field_70; u8 field_72[0xDC - 0x72]; s32 field_DC; u8 field_E0[0xFC - 0xE0]; s16 field_FC; } struct_100;
    struct_8_4 v;
    s32 i;
    u8 *e;
    s8 *p;

    D_sc04_008_80193340 = ((struct_100 *) o)->field_FC;
    D_sc04_008_80193344 = ((struct_100 *) o)->field_DC;
    D_sc04_008_80193348 = &D_sc04_008_8018253C + ((struct_100 *) o)->field_70 * 4;
    D_sc04_008_8019334C = &D_sc04_008_80182544 + ((struct_100 *) o)->field_70 * 8;
    func_80015978(&D_80126B5C, &v);
    i = 0x4F;
    v.field_2 = AF(o, s16, 0xA);
    p = &D_sc04_008_80191F3F;
    do {
        *p = 0;
        i--;
        p--;
    } while (i >= 0);
    for (i = 0; i < D_sc04_008_80193340; i++) {
        e = (u8 *) func_801290DC(0x61, &v);
        if (e != 0) {
            D_sc04_008_80191EF0[i] = 1;
            AF(e, s32, 0x34) = i;
            func_sc04_008_8017DCB4(e);
            AF(e, s16, 0xA) += (rand() & 0xF) * 0x30;
        }
    }
    func_8012AD50(o);
}

void func_sc04_008_8017D8C4(u8 *o) {
    struct_8_4 v;
    s32 i;
    s32 idx;
    u8 *e;

    idx = -1;
    func_80015978(&D_80126B5C, &v);
    v.field_2 = AF(o, s16, 0xA);
    for (i = 0; i < D_sc04_008_80193340; i++) {
        if (idx != -1) {
            break;
        }
        if (D_sc04_008_80191EF0[i] == 0) {
            idx = i;
        }
    }
    if (idx != -1) {
        e = (u8 *) func_801290DC(0x61, &v);
        if (e != 0) {
            D_sc04_008_80191EF0[idx] = 1;
            AF(e, s32, 0x34) = idx;
        }
    }
}

void func_sc04_008_8017D990(u8 *arg0) {
    D_sc04_008_80182564[AF(arg0, u16, 2)]();
}

void func_sc04_008_8017D9CC(u8 *arg0) {
    s16 temp_v1;
    s32 temp_a1;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s4;
    s32 temp_v0;
    void *temp_s0;
    void *p;
    s32 t;


    temp_s4 = AF(arg0, s32, 0x20);
    temp_s0 = (AF(arg0, s32, 0x34) << 6) + &D_sc04_008_80191F40;
    func_8001CD9C(temp_s4, (s32) temp_s0);
    func_800233CC((s32) temp_s0, 0x10);
    temp_v0 = (rand() & 7) + 1;
    temp_a1 = (temp_v0 << 7) | ((temp_v0 << 0x17) | (temp_v0 << 0xF));
    AF(temp_s0, s32, 0) = temp_a1;
    AF(temp_s0, s32, 4) = 0;
    AF(temp_s4, s32, 4) = (s32) (AF(temp_s4, s32, 4) | 0x50000000);
    func_sc04_008_8017DCB4((s32) arg0, temp_a1);
    temp_v1 = (rand() & 3) * 0x555;
    p = D_sc04_008_8019334C;
    AF(temp_s4, s16, 0x1A) = temp_v1;
    AF(temp_s4, s16, 0x18) = temp_v1;
    AF(arg0, s16, 0x12) = (s16) (AF(arg0, u16, 6) + AF(p, u16, 2));
    t = AF(arg0, u16, 0xE) + AF(p, u16, 6);
    AF(arg0, s16, 0x10) = 0;
    AF(arg0, s16, 0x18) = 0;
    AF(arg0, s16, 0x1A) = t;
    temp_s0_2 = rand((s32) p);
    temp_s1 = rand();
    temp_s2 = rand();
    AF(temp_s4, s16, 0x12) = (s16) (((temp_s0_2 & 3) << 0xA) + ((temp_s1 & 0x1F) << 5) + ((temp_s2 & 3) << 8) + (rand() & 0xFF));
    AF(arg0, s16, 0x2E) = (s16) ((rand() & 7) * 0xB);
    AF(arg0, s16, 0x2C) = (s16) ((rand() & 0x1F) + 4);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc04_008_8017DB64(u8 *o0) {
    typedef struct { u8 field_0[2]; s16 field_2; u8 field_4[2]; s16 field_6; u8 field_8[2]; s16 field_A; u8 field_C[2]; s16 field_E; s16 field_10; s16 field_12; u8 field_14[2]; s16 field_16; s16 field_18; s16 field_1A; u8 field_1C[4]; u8 *field_20; u8 field_24[8]; s16 field_2C; s16 field_2E; } struct_30_3;
    struct_30_3 *o = (struct_30_3 *)o0;
    u8 *e;
    u16 *p;
    struct_8_4 v;

    e = o->field_20;
    v.field_0 = v.field_2 = 0;
    v.field_4 = o->field_2C;
    AF(e, s16, 0x12) += o->field_2E;
    func_800139C8(AF(e, s16, 0x12), &v, &v);
    o->field_6 = o->field_12 + v.field_0;
    o->field_E = o->field_1A + v.field_4;
    o->field_A += o->field_16;
    p = D_sc04_008_8019334C;
    o->field_10 += p[0];
    o->field_12 -= o->field_10;
    o->field_18 += p[1];
    o->field_1A -= o->field_18;
    if (D_sc04_008_80193344 < o->field_A) {
        o->field_2++;
    }
}

void func_sc04_008_8017DC54(s32 arg0) {
    s32 temp_a1;
    u8 *temp_a2;

    temp_a2 = (AF(arg0, s32, 0x34) << 6) + &D_sc04_008_80191F40;
    temp_a1 = *temp_a2;
    temp_a1 -= 8;
    if (temp_a1 <= 0) {
        func_sc04_008_8017DE40(arg0);
    } else {
        temp_a1 |= (temp_a1 << 0x10) | (temp_a1 << 8);
        AF(temp_a2, s32, 0) = temp_a1;
    }
}

void func_sc04_008_8017DCB4(u8 *o) {
    struct_8_4 v;
    s32 a;
    s32 b;
    s32 c;
    s32 e;
    s32 f;
    s32 g;
    s32 h;
    s32 x;
    s32 lim;

    a = rand();
    b = rand();
    c = rand();
    a &= 1;
    a <<= 8;
    b &= 0x1F;
    b <<= 3;
    a += b;
    a += c & 0x1F;
    v.field_0 = a;
    v.field_4 = 0;
    v.field_2 = 0;
    e = rand();
    f = rand();
    g = rand();
    h = rand();
    e &= 3;
    e <<= 10;
    f &= 0x1F;
    f <<= 5;
    e += f;
    g &= 3;
    g <<= 8;
    e += g;
    func_800139C8(e + (h & 0xFF), &v, &v);
    func_sc04_008_8017DCB4_inline(&v.field_0, v.field_0, ((s16 *) D_sc04_008_80193348)[0]);
    func_sc04_008_8017DCB4_inline(&v.field_4, v.field_4, ((s16 *) D_sc04_008_80193348)[1]);
    AF(o, s16, 6) += v.field_0;
    AF(o, s16, 0xA) += v.field_2;
    AF(o, s16, 0xE) += v.field_4;
    AF(o, s16, 0x16) = (rand() & 7) + 8;
}

void func_sc04_008_8017DE40(s32 arg0) {
    D_sc04_008_80191EF0[AF(arg0, s32, 0x34)] = 0;
    func_801292C8(arg0);
}

void func_sc04_008_8017DE70(u8 *arg0) {
    D_sc04_008_80182570[AF(arg0, u16, 2)]();
}

void func_sc04_008_8017DEAC(s32 arg0) {
    func_8012BF4C(arg0, 0);
    func_8012AD50(arg0);
}

void func_sc04_008_8017DEE0(u8 *arg0) {
    s16 temp_v1;
    s32 var_s0;
    s32 var_s0_2;

    if (func_8012BEE8() != 0) {
        temp_v1 = AF(arg0, s16, 0x70);
        switch (temp_v1) {                          /* irregular */
        case 0:
            if ((AF(D_80126B78, s32, 4) >= 0) && (func_8017267C((s32) &D_80126B58) == 0)) {
            case 1:
                func_sc04_008_8017E030((s32) arg0);
                var_s0 = 0;
loop_7:
                if (!(rand() & 1)) {
                    func_sc04_008_8017E030((s32) arg0);
                }
                if (!(rand() & 3)) {
                    func_sc04_008_8017E030((s32) arg0);
                }
                var_s0 += 1;
                if (var_s0 < 3) {
                    goto loop_7;
                }
            }
            break;
        default:
            func_sc04_008_8017E030((s32) arg0);
            var_s0_2 = 0;
            do {
                if (!(rand() & 1)) {
                    func_sc04_008_8017E030((s32) arg0);
                }
                if (!(rand() & 3)) {
                    func_sc04_008_8017E030((s32) arg0);
                }
                var_s0_2 += 1;
            } while (var_s0_2 <= 0);
            break;
        }
        func_8012BF4C((s32) arg0, (rand() & 0x1F) | 0x20);
    }
}

void func_sc04_008_8017E030(s32 arg0) {
    s32 sp10;
    s16 t;
    s32 i;
    s32 v;
    u8 *q;
    u8 *p;

    t = AF(arg0, s16, 0x70);
    p = (t * 8) + (u8 *)&D_sc04_008_80182578;
    switch (t) {
    case 0:
        func_80149350((s32) &D_80126B58, (s32) p, (s32) &sp10);
        func_801290DC(0x56, (s32) &sp10);
        break;
    case 1:
        v = func_8012E544(0x245);
        if (v != 0) {
            func_8012F214(v, (s32) p, (s32) &sp10);
            func_801290DC(0x56, (s32) &sp10);
        }
        break;
    default:
        q = (u8 *)&D_801202A0;
        for (i = 0; i < 0x60; i++, q += 0x10C) {
            if (*(u16 *)q == AF(p, s16, 6)) {
                func_8012F214((s32) q, (s32) p, (s32) &sp10);
                func_801290DC(0x56, (s32) &sp10);
            }
        }
        break;
    }
}

void func_sc04_008_8017E11C(u8 *arg0) {
    D_sc04_008_801825AC[AF(arg0, u16, 2)]();
}

void func_sc04_008_8017E158(u8 *arg0) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = AF(arg0, s32, 0x20);
    func_800159E4(arg0 + 4, (s32) (arg0 + 0x10));
    func_8001CC3C(temp_s1, (s32) &D_sc04_008_801825A0, 0x270, 0x100);
    AF(temp_s1, u8, 0x27) = 0x9C;
    AF(temp_s1, u8, 0x26) = 0x40;
    AF(temp_s1, u8, 0x25) = 0x40;
    AF(temp_s1, u8, 0x24) = 0x40;
    AF(temp_s1, s32, 4) = (s32) (AF(temp_s1, s32, 4) | 0xD0000000);
    AF(arg0, s32, 0x2C) = 0;
    AF(arg0, s16, 0x30) = (s16) ((rand() & 3) + 1);
    temp_s0 = rand();
    AF(temp_s1, s16, 0x12) = (s16) (((temp_s0 & 3) << 0xA) + ((rand() & 0xF) * 0x44));
    func_80146E90((s32) arg0, rand() & 0xF);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc04_008_8017E23C(u8 *arg0) {
    void *temp_s1;

    temp_s1 = AF(arg0, void *, 0x20);
    if (func_80146E98((s32) arg0) != 0) {
        AF(temp_s1, s32, 4) = (s32) (AF(temp_s1, s32, 4) & 0x7FFFFFFF);
        func_80146E90((s32) arg0, 0x10);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc04_008_8017E2A8(u8 *o) {
    u8 *p;
    struct_8_4 v;
    u16 a;

    p = AF(o, u8 *, 0x20);
    a = AF(o, u16, 0x2C) + 0x40;
    AF(o, u16, 0x2C) = a;
    v.field_4 = rsin((s16)a) / 256;
    v.field_0 = v.field_2 = 0;
    func_800139C8(AF(p, s16, 0x12), &v, &v);
    AF(o, s16, 6) = AF(o, s16, 0x12) + v.field_0;
    AF(o, s16, 0xE) = AF(o, s16, 0x1A) + v.field_4;
    AF(o, s16, 0xA) -= AF(o, s16, 0x30);
    AF(o, s16, 0x2E) += 0x10;
    AF(p, s16, 0x18) = AF(p, s16, 0x1A) = AF(p, s16, 0x1A) + AF(o, s16, 0x2E);
    AF(p, u8, 0x24) = AF(p, u8, 0x25) = AF(p, u8, 0x26) = AF(p, u8, 0x26) - 4;
    if (func_80146E98(o) != 0) {
        func_801292C8(o);
    }
}

void func_sc04_008_8017E394(u8 *o) {
    u8 *c;
    s32 i;
    s32 lim;
    s16 dy;

    if (func_8014CB7C(o) != 0) {
        if (func_8012BE54(o) < 0x1000) {
            lim = 0x40;
            if (AF(o, s16, 0x70) != 0) {
                lim = 0x80;
            }
            dy = AF(o, u16, 0xA) - D_80126B62;
            if (dy >= 0 && dy <= lim) {
                AF(AF(o, u8 *, 0x20), s16, 0x12) = func_8012B8A4(o);
                AF(o, s16, 0xFC) = (rand() & 0xFF) - 0x80;
                AF(o, s16, 0xFE) = (rand() & 0xFF) - 0x80;
                AF(o, s16, 0x100) = (rand() & 0xFF) - 0x80;
                func_8012B2CC(o);
                func_8012B1B4(o, &D_sc04_008_8018ED38);
                AF(o, s16, 0x16) = -0x18;
                AF(o, s32, 0x1C) = 0x3C;
                AF(o, s16, 0x5C) = 0;
                AF(o, u16, 2)++;
                if (AF(o, s16, 0x70) != 0) {
                    func_8012A828(o, &D_sc04_008_8018ED50);
                    AF(o, u16, 0xA) -= 0x40;
                    func_8002D4C8(0xB41, 0);
                } else {
                    func_8001C214(AF(o, u8 *, 0x20), &D_sc04_008_8018F508);
                    for (i = 0; i < 3; i++) {
                        c = (u8 *)func_8012C658(0x244, 3, o);
                        if (c != 0) {
                            AF(AF(c, u8 *, 0x20), u16, 0x12) = AF(AF(AF(c, u8 *, 0x64), u8 *, 0x20), s16, 0x12) - 0x200 + (rand() & 0x3FF);
                            AF(c, s16, 0xFC) = (rand() & 0xFF) - 0x80;
                            AF(c, s16, 0xFE) = (rand() & 0xFF) - 0x80;
                            AF(c, s16, 0x100) = (rand() & 0xFF) - 0x80;
                            func_8012B2CC(c);
                            func_8012B1B4(c, &D_sc04_008_8018ED38);
                            AF(c, s16, 0x16) = -0x18;
                            AF(c, s32, 0x1C) = 0x3C;
                            func_8002D4C8(0xB42, 0);
                        }
                    }
                }
            }
        }
    } else if (AF(o, s16, 0x70) != 0) {
        if (AF(o, u8, 0x74) != 0 && func_8012D624(o, 0x100, 0xA) != 0) {
            D_80126B96 = 0x4007;
        }
    } else {
        AF(o, u16, 0xA) -= 0x40;
        if (func_8012D624(o, 0x18, 0xA) != 0) {
            D_80126B96 = 0x4007;
        }
        AF(o, u16, 0xA) += 0x40;
    }
}

void func_sc04_008_8017E628(u8 *arg0) {
    s16 temp_v0_2;
    s32 temp_v0_3;
    void *temp_v0;
    void *temp_v1;
    void *temp_v1_2;

    D_sc04_008_8018EE98[AF(arg0, u16, 2)]();
    if (AF(arg0, s16, 0x102) != 0) {
        temp_v0 = AF(arg0, void *, 0x20);
        AF(temp_v0, u16, 0x18) = (u16) (AF(temp_v0, u16, 0x18) - 0x80);
        temp_v1 = AF(arg0, void *, 0x20);
        if ((s16) AF(temp_v1, u16, 0x18) < 0x100) {
            func_8012C218((s32) arg0);
            return;
        }
        AF(temp_v1, u16, 0x1A) = (u16) (AF(temp_v1, u16, 0x1A) - 0x80);
        temp_v1_2 = AF(arg0, void *, 0x20);
        AF(temp_v1_2, u16, 0x1C) = (u16) (AF(temp_v1_2, u16, 0x1C) - 0x80);
        temp_v0_2 = (u16) AF(arg0, s16, 0x102) - 1;
        AF(arg0, s16, 0x102) = temp_v0_2;
        if ((temp_v0_2 << 0x10) == 0) {
            AF(arg0, s16, 0x102) = 3;
            temp_v0_3 = func_80143C74((s32) arg0, 0);
            if (temp_v0_3 != 0) {
                AF(temp_v0_3, s16, 0x16) = -8;
                AF(temp_v0_3, u16, 0xA) = (u16) (AF(temp_v0_3, u16, 0xA) - 0x20);
                AF(temp_v0_3, s16, 0x12) = (s16) ((rand() & 7) - 4);
                AF(temp_v0_3, s16, 0x1A) = (s16) ((rand() & 7) - 4);
            }
        }
    }
}

void func_sc04_008_8017E754(u8 *arg0) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, s16, 0x5E) = 0;
    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, s16, 0x102) = 3;
    AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
}

void func_sc04_008_8017E780(u8 *o) {
    if (func_8012C354(o, &D_sc04_008_8018ECE4) == 0) {
        return;
    }
    AF(o, u8, 0xC0) = 1;
    AF(o, s32, 0xB4) = 0;
    AF(o, s32, 0xC4) = 3;
    AF(o, u8 *, 0xBC) = &D_sc04_008_8018ED18;
    AF(o, u16, 2)++;
    func_8012B23C(o);
    switch (AF(o, s16, 0x70)) {
    case 0:
        AF(o, s16, 0xAE) = -5;
        AF(o, u8, 0x75) = 0xC;
        break;
    case 1:
        AF(o, s16, 0xAE) = -1;
        AF(o, u8, 0x75) = 8;
        func_8001C214(AF(o, u8 *, 0x20), &D_sc04_008_8018F488);
        AF(o, u16, 0x5C) |= 0xC00;
        break;
    case 2:
        AF(AF(o, u8 *, 0x20), u32, 4) |= 0x80000000;
        AF(o, s16, 0x5C) = 0;
        AF(o, s16, 2) = 3;
        break;
    case 3:
        AF(o, s16, 0x5C) = 0;
        func_8001C214(AF(o, u8 *, 0x20), &D_sc04_008_8018F508);
        AF(o, s16, 2) = 2;
        break;
    }
}

void func_sc04_008_8017E8B8(u8 *arg0) {
    s32 r;
    s32 t;

    r = func_8012CBCC(arg0);
    if (r != 0) {
        AF(arg0, u16, 0xFC) = -AF(arg0, u16, 0xFC);
        AF(arg0, u16, 0xFE) = -AF(arg0, u16, 0xFE);
        AF(arg0, u16, 0x100) = -AF(arg0, u16, 0x100);
        if (r & 0x8000) {
            AF(arg0, s32, 0x10) = -AF(arg0, s32, 0x10);
            AF(arg0, s32, 0x18) = -AF(arg0, s32, 0x18);
        }
        if (r & 0x6000) {
            AF(arg0, s32, 0x14) = -8;
        }
    }
    AF(AF(arg0, u8 *, 0x20), u16, 0x10) += AF(arg0, u16, 0xFC);
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) += AF(arg0, u16, 0xFE);
    AF(AF(arg0, u8 *, 0x20), u16, 0x14) += AF(arg0, u16, 0x100);
    t = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = t;
    if (t < 0x10) {
        AF(AF(arg0, u8 *, 0x20), s32, 4) ^= 0x80000000;
        if (AF(arg0, s32, 0x1C) == 0) {
            func_8012C218(arg0);
        }
    }
}

void func_sc04_008_8017E9D8(u8 *arg0) {
    s32 t;

    if (AF(arg0, s32, 0x1C) != 0) {
        AF(arg0, s32, 0x1C)--;
        return;
    }
    t = (AF(arg0, u16, 0xFC) + 1) & 7;
    AF(arg0, u16, 0xFC) = t;
    if (t == 0) {
        AF(arg0, s32, 0x1C) = (rand() & 0x1F) + 0xA;
        LoadImage((RECT *)&D_sc04_008_8018EE58, (u32 *)&D_sc04_008_8018ED58);
        return;
    }
    MoveImage(&D_sc04_008_8018EE58 + t * 8, 0x2F0, 0x120);
}
