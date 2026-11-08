#include "common.h"
#include "gte.h"
#include "psyq.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc04_009_8017BE9C(void) {
}

void func_sc04_009_8017BEA4(void) {
}

void func_sc04_009_8017BEAC(void) {
}

void func_sc04_009_8017BEB4(void) {
}

typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_4;
typedef struct { s16 field_0[6]; } struct_C_3;
extern void (*D_sc04_009_80182550[])();
typedef struct { s16 field_0, field_2; } struct_4_2;
typedef struct { struct_4_2 field_0; s16 field_4; s16 field_6; struct_4_2 field_8; s32 field_C; s32 field_10; s32 field_14; s32 field_18; } struct_1C;
typedef struct { s32 field_0, field_4, field_8; } struct_C_4;
void func_sc04_009_8017D078(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc04_009_80182558[])();
void func_sc04_009_8017D0A0(void);
extern void func_800D1EBC();
extern void (*D_sc04_009_80182564[])();
extern u8 D_sc04_009_80182570;
extern void func_8016EE40();
extern u8 D_sc04_009_80182574;
extern void func_sc04_009_8017D170();
extern void (*D_sc04_009_80182580[])();
extern void (*D_sc04_009_8018260C[])();
extern void (*D_sc04_009_8018278C[])();
extern void (*D_sc04_009_80182794[])();
extern void (*D_sc04_009_801827D0[])();
extern void (*D_sc04_009_80194ED0[])();
extern s32 func_8012C354();
extern s32 func_801788B8();
extern u8 D_sc04_009_8017EE1C;
extern s32 func_80029178();
extern void func_8012CAE4();
extern u8 D_sc04_009_80194BC0;
extern s32 * func_sc04_009_8017E520();
extern s32 D_sc04_009_80194C28[];
extern s32 func_8012C658();
extern void func_80029124();
extern void func_80178CBC();
extern s32 D_sc04_009_80194DF4;
extern s32 D_sc04_009_80194DF8;
extern s32 D_sc04_009_80194E0C;
extern s32 D_sc04_009_80194E20;
extern s32 D_sc04_009_80194E8C;
extern s32 D_sc04_009_80194D70[];
extern s32 D_sc04_009_80194CEC[];
extern void func_80178D18();
extern void func_8002AC00();
extern void func_8012C218();
extern s32 func_801789AC();
extern void func_80029514();
extern void func_80145EE8();
extern s32 func_sc04_009_8017E2C8();
extern u8 D_80126B58;
extern void func_8014ADA8();
extern s32 func_80174764();
extern void (*D_sc04_009_80194EF8[])();
extern u8 D_sc04_009_80194BF4;
extern u8 D_sc04_009_801954E4;
extern u8 D_sc04_009_80195704;
extern void func_8002D4C8();
extern u8 D_sc04_009_801954F4;
extern u8 D_sc04_009_801955FC;
extern void (*D_sc04_009_80195024[])();
extern u8 D_sc04_009_80194FD4;

extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

extern s32 D_sc04_009_80182588[];
extern s32 func_8013B7F4();
extern u8 D_sc04_009_80194F24;
extern s32 * func_sc04_009_8017E950();
extern s32 D_sc04_009_80198114;
extern void func_800296F8();

extern void func_8012BF4C();
extern void func_8012AD50();
extern void func_80146E90();
extern u8 D_sc04_009_801827C4;
extern void func_800159E4();
extern void func_8001CC3C();
extern s32 func_80146E98();

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
extern void func_sc04_009_8017D5E4();
extern u8 D_sc04_009_8018259C;
extern void func_80178B18();
extern s32 func_80178970();

extern void func_sc04_009_8017D638();

extern u8 D_sc04_009_801825FC;
extern u8 D_sc04_009_80194B98;
extern s32 func_8012C1B8();
extern s32 func_8001C214();

extern s32 D_8011F9C4;
extern u8 D_sc04_009_80182994;
extern u8 D_sc04_009_80182A20;
extern void func_800291F0();
s32 func_sc04_009_8017D420(s32 arg0);
extern s32 *D_801274C8;
extern s32 *D_801274CC;
extern s32 func_8012BEE8();
extern s32 func_8017267C();
extern void func_sc04_009_8017DAD4();
extern void *D_80126B78;

typedef struct { s16 field_0[3][3]; s16 field_12; s32 field_14[3]; } struct_20_3;
typedef struct { u32 field_0; u32 field_4; u32 field_8; u32 field_C; u32 *field_10; } struct_14_2;
typedef struct { s32 field_0; s32 field_4; s32 field_8; s32 field_C; s32 field_10; s32 field_14; s32 field_18; } struct_1C_2;
extern u8 *D_800A5E60;
extern u16 D_800B9A02;
extern u32 D_800A6610[2][0x1000];

void func_sc04_009_8017BEBC(u8 *obj) {
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

void func_sc04_009_8017CD9C(void) {
    D_8011F9C4 = 1;
    func_80029124(0xD7, 1);
    func_800291F0(4, 0xD7);
    func_8002D4C8(6, 0);
    D_801274C8 = &D_sc04_009_80182994;
    D_801274CC = &D_sc04_009_80182A20;
    func_sc04_009_8017D420(0);
}

void func_sc04_009_8017CE0C(u8 *arg0) {
    D_sc04_009_80182550[AF(arg0, u8, 0x15)]();
}

s32 func_sc04_009_8017CE48(u8 *arg0) {
    func_sc04_009_8017D078();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc04_009_8017CE8C(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc04_009_8017CEB0(u8 *arg0) {
    D_sc04_009_80182558[AF(arg0, u8, 0x15)]();
}

s32 func_sc04_009_8017CEEC(u8 *arg0) {
    func_sc04_009_8017D0A0();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc04_009_8017CF2C(u8 *arg0) {
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

void func_sc04_009_8017CFA8(void) {
    func_800D1EBC();
}

void func_sc04_009_8017CFC8(u8 *arg0) {
    D_sc04_009_80182564[AF(arg0, u8, 0x15)]();
}

s32 func_sc04_009_8017D004(u8 *arg0) {
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

void func_sc04_009_8017D078(void) {
    func_8016EE40((s32) &D_sc04_009_80182570, 0x01000000);
}

void func_sc04_009_8017D0A0(void) {
    func_8016EE40((s32) &D_sc04_009_80182574, 0x01000000);
}

void func_sc04_009_8017D0C8(void) {
    D_80126954 = 0x1F4;
    D_8012695C = 0x384;
    D_80126968 = 0x1C7;
    D_8012696A = 0x600;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc04_009_8017D170, 0);
    func_8012A094((s32) &D_80126948);
    func_sc04_009_8017D170((s32) &D_80126948);
    func_8012A094((s32) &D_80126948);
    func_sc04_009_8017D170((s32) &D_80126948);
}

void func_sc04_009_8017D170(s32 arg0) {
    D_sc04_009_80182580[AF(arg0, u8, 4)]();
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
extern void func_sc04_009_8017D288();
extern s32 func_80012C6C();
extern s32 func_80012ABC();
extern void func_8012F14C();

extern s32 func_8012E544();
extern u16 D_801202A0;
extern u8 D_sc04_009_8018279C;
extern s32 func_801290DC();
extern void func_80149350();

typedef struct { struct_C_5 field_0[9]; } struct_6C;
typedef struct { s32 field_0, field_4, field_8, field_C; } struct_10_3;
typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_10;
typedef struct { s32 field_0, field_4, field_8, field_C; } struct_10_4;
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_7;
typedef struct { u8 field_0, field_1, field_2, field_3; } struct_4_6;
typedef struct { struct_8_10 field_0[4]; struct_4_6 field_20[4]; s32 field_30; } struct_34_3;
typedef struct { s32 field_0, field_4, field_8; } struct_C_6;
typedef struct { u32 field_0_b0 : 24; u32 field_3_b0 : 8; } struct_4_7;
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_8;
typedef struct { struct_4_7 field_0; u8 field_4, field_5, field_6, field_7; s16 field_8, field_A, field_C, field_E, field_10, field_12, field_14, field_16; } struct_18;
typedef union { s32 m0; struct_4_2 m1; } union_4_2;
typedef void (*type_2)();
typedef struct { u8 field_0[0x18]; struct_20_5 field_18; } struct_38;
typedef struct { s32 field_0[4]; } struct_10_5;
typedef struct { struct_10_5 field_0, field_10, field_20; } struct_30_2;
typedef struct { u8 field_0[0x34]; } struct_34_4;
typedef struct { unsigned field_0_b0 : 31; unsigned field_3_b7 : 1; } struct_4_8;
typedef struct { s16 field_0, field_2, field_4, field_6, field_8; u16 field_A; s16 field_C, field_E; s32 field_10; } struct_14_5;
extern void func_80172710();
extern void func_80178BF8();
extern struct_8_4 D_sc04_009_80195040[];
extern s32 func_80135888();
extern s32 func_8012BDBC();


typedef struct { s16 field_0, field_2, field_4; } struct_6;
typedef struct { s32 field_0[4]; } struct_10_6;
typedef struct { s16 field_0, field_2; s32 field_4; } struct_8_11;
typedef struct { struct_8_4 field_0[3]; struct_4_4 field_18[3]; s32 field_24; } struct_28;
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
} struct_28_2;
typedef struct { u32 field_0; u32 field_4; } struct_8_12;
typedef struct { u8 field_0[0x10]; struct_4_2 field_10[13]; } struct_44;
typedef struct { s32 field_0; u8 field_4[8]; } struct_C_9;
typedef struct { s32 field_0; s32 field_4; } struct_8_13;
typedef struct { struct_8_7 field_0[4]; s32 field_20[4]; s32 field_30; s32 field_34; u8 field_38; } struct_3C;
extern struct_8_4 D_sc04_009_80194EE8[];

typedef struct { u32 field_0, field_4, field_8, field_C; u32 *field_10; } struct_14_8;
extern void func_801292C8();
extern void func_800139C8();

extern s32 func_80148800();
extern s16 D_sc04_009_80182584[];
extern struct_8_4 D_80126940;

void func_sc04_009_8017D1AC(u8 *o) {
    struct_8_4 v;

    if (func_80148800(&D_80126B58) & 3) {
        AF(o, u8, 5) = (AF(o, u8, 5) + 1) & 1;
        AF(o, s32, 0x14) = D_sc04_009_80182584[AF(o, u8, 5)];
    }
    v = D_80126940;
    AF(o, s16, 0x20) = (v.field_2 < -0x680 || (v.field_2 < -0x602 && v.field_0 >= 0x81)) ? 0x2AA : 0x1C7;
    func_sc04_009_8017D288(o, &v);
}

void func_sc04_009_8017D288(u8 *arg0, u8 *arg1) {
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

s32 func_sc04_009_8017D420(s32 arg0) {
    return func_8013B7F4(D_sc04_009_80182588[arg0], 0);
}

void func_sc04_009_8017D450(u8 *arg0) {
    D_sc04_009_8018260C[AF(arg0, u16, 2)]();
}

void func_sc04_009_8017D48C(u8 *arg0) {
    AF(arg0, s16, 0x100) = 0;
    AF(arg0, s16, 0x104) = 0;
    AF(arg0, s16, 0x108) = 0;
    AF(arg0, u16, 0x102) = (u16) AF(arg0, u16, 0xE);
    AF(arg0, u16, 0x106) = (u16) AF(arg0, u16, 0xA);
}

s32 func_sc04_009_8017D4AC(u8 *o) {
    switch (AF(o, s16, 0x100)) {
    case 0:
        AF(o, s16, 0x104) += 8;
        AF(o, s16, 0xE) = AF(o, s16, 0x102) + AF(o, s16, 0x104);
        if (AF(o, s16, 0x104) >= 0x30) {
            AF(o, s16, 0x100)++;
            func_8002D4C8(0xA48, 0);
        }
        return 0;
    case 1:
        AF(o, s16, 0x108) -= 4;
        AF(o, s16, 0xA) = AF(o, s16, 0x106) + AF(o, s16, 0x108);
        if (AF(o, s16, 0x108) < -0xBF) {
            AF(AF(o, u8 *, 0x20), s32, 4) |= 0x80000000;
            func_8002D4C8(4, 0xA48);
            return 1;
        }
        return 0;
    }
}

void func_sc04_009_8017D57C(u8 *arg0) {
    D_sc04_009_8018278C[AF(arg0, u16, 2)]();
}

void func_sc04_009_8017D5B8(s32 arg0) {
    func_sc04_009_8017D5E4(arg0);
    func_8002D4C8(0xC5F, 0);
}

void func_sc04_009_8017D5E4(s32 arg0) {
    void *temp_v1;

    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, s16, 0xAE) = -1;
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, s16, 0x5E) = 0;
    func_sc04_009_8017D638();
    temp_v1 = AF(arg0, void *, 0x64);
    AF(temp_v1, u16, 0xFE) = (u16) (AF(temp_v1, u16, 0xFE) - 1);
}

extern void func_8001CA1C();
extern u8 D_sc04_009_80182614;
extern u8 D_sc04_009_801826D4;

void func_sc04_009_8017D638(u8 *o) {
    func_8001CA1C(AF(o, s32, 0x20), &D_sc04_009_80182614);
    AF(AF(o, u8 *, 0x20), s16, 0x18) = 0x2800;
    AF(AF(o, u8 *, 0x20), s16, 0x1A) = 0x2800;
    AF(AF(o, u8 *, 0x20), s32, 4) |= 0x50000000;
    func_8012A828(o, &D_sc04_009_801826D4);
}

void func_sc04_009_8017D6A8(u8 *arg0) {
    s32 temp_a3;
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if ((temp_v0 == 0) || (func_8001C214(temp_v0, (u32) &D_sc04_009_80194B98), temp_a3 = AF(arg0, u32, 0x20), AF(temp_a3, u32, 4) = (u32) (AF(temp_a3, u32, 4) | 0x01000000), AF(arg0, u16, 0x5C) = 0xC800, AF(arg0, u32 *, 0x58) = &D_sc04_009_801825FC, AF(arg0, s8, 0x75) = 0, func_8012C658(0x286, 0, (u32) arg0), func_8012C658(0x286, 1, (u32) arg0), AF(arg0, u16, 0xFE) = 2, ((func_80029178(0xDD) & 0xFF) != 0))) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8012AD50((s32) arg0);
}

void func_sc04_009_8017D768(u8 *arg0) {
    u16 temp_v1;

    temp_v1 = AF(arg0, u16, 0x34);
    switch (temp_v1) {                              /* irregular */
    case 0:
        if (AF(arg0, s16, 0xFE) == 0) {
            func_80029124(0xDD, 1);
            func_80178B18((s32) arg0, (s32) &D_sc04_009_8018259C);
            AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
            return;
        }
        return;
    case 1:
        if (func_80178970((s32) arg0) != 0) {
            func_80178D18((s32) arg0);
            func_8012C218((s32) arg0);
        }
        break;
    }
}

extern void func_8001C2C4();
extern u16 D_sc04_009_8018277C[];
extern u16 D_sc04_009_8018277E[];
extern u16 D_sc04_009_80182780[];
extern u8 D_sc04_009_8018275C;
extern u8 D_sc04_009_8018276C;

void func_sc04_009_8017D808(u8 *o) {
    s32 t;

    t = func_8012C1B8();
    AF(o, s32, 0x20) = t;
    if (t == 0) {
        func_8012CAE4(o);
        return;
    }
    func_8001C2C4(t);
    AF(o, u16, 6) = D_sc04_009_8018277C[AF(o, s16, 0x70) * 4];
    AF(o, u16, 0xA) = D_sc04_009_8018277E[AF(o, s16, 0x70) * 4];
    AF(o, u16, 0xE) = D_sc04_009_80182780[AF(o, s16, 0x70) * 4];
    AF(o, u8, 0xC0) = 1;
    AF(o, u16, 0x5C) = 0x8000;
    AF(o, s16, 0xAE) = -5;
    AF(o, s32, 0xB4) = 0;
    AF(o, void *, 0xBC) = &D_sc04_009_8018276C;
    AF(o, s32, 0xC4) |= 2;
    AF(o, void *, 0x58) = &D_sc04_009_8018275C;
    if (func_80029178(0xDD) & 0xFF) {
        func_sc04_009_8017D5E4(o);
    }
    func_8012AD50(o);
}

void func_sc04_009_8017D904(void) {
}

s32 func_sc04_009_8017D90C(void) {
    return 0x55;
}

void func_sc04_009_8017D914(u8 *arg0) {
    D_sc04_009_80182794[AF(arg0, u16, 2)]();
}

void func_sc04_009_8017D950(s32 arg0) {
    func_8012BF4C(arg0, 0);
    func_8012AD50(arg0);
}

void func_sc04_009_8017D984(u8 *arg0) {
    s16 temp_v1;
    s32 var_s0;
    s32 var_s0_2;

    if (func_8012BEE8() != 0) {
        temp_v1 = AF(arg0, s16, 0x70);
        switch (temp_v1) {                          /* irregular */
        case 0:
            if ((AF(D_80126B78, s32, 4) >= 0) && (func_8017267C((s32) &D_80126B58) == 0)) {
            case 1:
                func_sc04_009_8017DAD4((s32) arg0);
                var_s0 = 0;
loop_7:
                if (!(rand() & 1)) {
                    func_sc04_009_8017DAD4((s32) arg0);
                }
                if (!(rand() & 3)) {
                    func_sc04_009_8017DAD4((s32) arg0);
                }
                var_s0 += 1;
                if (var_s0 < 3) {
                    goto loop_7;
                }
            }
            break;
        default:
            func_sc04_009_8017DAD4((s32) arg0);
            var_s0_2 = 0;
            do {
                if (!(rand() & 1)) {
                    func_sc04_009_8017DAD4((s32) arg0);
                }
                if (!(rand() & 3)) {
                    func_sc04_009_8017DAD4((s32) arg0);
                }
                var_s0_2 += 1;
            } while (var_s0_2 <= 0);
            break;
        }
        func_8012BF4C((s32) arg0, (rand() & 0x1F) | 0x20);
    }
}

void func_sc04_009_8017DAD4(s32 arg0) {
    s32 sp10;
    s16 t;
    s32 i;
    s32 v;
    u8 *q;
    u8 *p;

    t = AF(arg0, s16, 0x70);
    p = (t * 8) + (u8 *)&D_sc04_009_8018279C;
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

void func_sc04_009_8017DBC0(u8 *arg0) {
    D_sc04_009_801827D0[AF(arg0, u16, 2)]();
}

void func_sc04_009_8017DBFC(u8 *arg0) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = AF(arg0, s32, 0x20);
    func_800159E4(arg0 + 4, (s32) (arg0 + 0x10));
    func_8001CC3C(temp_s1, (s32) &D_sc04_009_801827C4, 0x270, 0x100);
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

void func_sc04_009_8017DCE0(u8 *arg0) {
    void *temp_s1;

    temp_s1 = AF(arg0, void *, 0x20);
    if (func_80146E98((s32) arg0) != 0) {
        AF(temp_s1, s32, 4) = (s32) (AF(temp_s1, s32, 4) & 0x7FFFFFFF);
        func_80146E90((s32) arg0, 0x10);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc04_009_8017DD4C(u8 *o) {
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

void func_sc04_009_8017DE38(u8 *arg0) {
    D_sc04_009_80194ED0[AF(arg0, u16, 2)]();
}

void func_sc04_009_8017DE74(s32 arg0) {
    s32 temp_v0;

    if (func_8012C354(arg0, (s32) &D_sc04_009_80194BC0) != 0) {
        if (!(func_80029178(D_sc04_009_80194C28[AF(AF(arg0, void *, 0xDC), u16, 0xA)]) & 0xFF)) {
            AF(arg0, s32, 0xCC) = func_801788B8(arg0, (s32) &func_sc04_009_8017E520);
        } else {
            AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) | 0x4000);
        }
        temp_v0 = func_8012C658(0x8F, (s32) (s16) AF(arg0, u16, 0x70), arg0);
        AF(arg0, s32, 0x6C) = temp_v0;
        if (temp_v0 == 0) {
            func_8012CAE4(arg0);
            return;
        }
        func_8012A828(arg0, (s32) &D_sc04_009_8017EE1C);
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc04_009_8017DF48(u8 *arg0) {
    AF(AF(AF(arg0, void *, 0x6C), void *, 0x20), s16, 0x12) = (s16) ((AF(AF(arg0, void *, 0x20), u16, 0x12) + 0x800) & 0xFFF);
    AF(arg0, s16, 2) = 2;
}

void func_sc04_009_8017DF70(void) {
}

void func_sc04_009_8017DF78(u8 *arg0) {
    s32 *var_a1;
    s32 var_v0;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0xDC);
    if (!(AF(temp_s0, u16, 8) & 0x8000)) {
        if (func_80029178(0x1D) & 0xFF) {
            D_sc04_009_80194E0C = AF(temp_s0, s32, 4);
            if (!(AF(temp_s0, u16, 8) & 0x4000)) {
                var_v0 = D_sc04_009_80194D70[AF(temp_s0, u16, 0xC)];
                goto block_6;
            }
            D_sc04_009_80194DF8 = 0;
            func_80029124(D_sc04_009_80194D70[AF(temp_s0, u16, 0xC)], 1);
            D_sc04_009_80194DF4 = 2;
        } else {
            D_sc04_009_80194E0C = AF(temp_s0, s32, 0);
            var_v0 = D_sc04_009_80194CEC[AF(temp_s0, u16, 0xC)];
block_6:
            D_sc04_009_80194DF4 = 0;
            D_sc04_009_80194DF8 = var_v0;
        }
        func_80178CBC((s32) arg0, (s32) &D_sc04_009_80194E20);
    } else {
        var_a1 = &D_sc04_009_80194E8C;
        *var_a1 = AF(temp_s0, s32, 0);
        func_80178CBC((s32) arg0, (s32) (var_a1 - 7));
    }
    AF(arg0, s16, 2) = 4;
    AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) | 0x8000);
}

void func_sc04_009_8017E0C4(u8 *arg0) {
    void *temp_s2;

    temp_s2 = AF(arg0, void *, 0xDC);
    if (func_801789AC((s32) arg0) != 0) {
        func_80178D18((s32) arg0);
        if (func_80029178(D_sc04_009_80194C28[AF(temp_s2, u16, 0xA)]) & 0xFF) {
            if (D_sc04_009_80194C28[AF(temp_s2, u16, 0xA)] == 0x54) {
                func_80029514(0x5A);
                func_80029124(0xEA, 1);
            }
            if ((AF(temp_s2, u16, 8) & 0x4000) && (func_80029178(0x1D) & 0xFF)) {
                func_80145EE8(0);
            }
            if (func_sc04_009_8017E2C8() == 1) {
                func_8002AC00(0x26);
            }
            AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) & 0x8000);
            func_8012C218(AF(arg0, s32, 0xCC));
        }
        AF(arg0, s16, 2) = 2;
    }
}

void func_sc04_009_8017E1E4(u8 *arg0) {
    AF(arg0, s16, 2) = 2;
    func_8012C218(AF(arg0, s32, 0xCC));
}

void func_sc04_009_8017E210(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 1;
}

void func_sc04_009_8017E220(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 2;
}

void func_sc04_009_8017E230(u8 *arg0) {
    func_80029124(D_sc04_009_80194C28[AF(AF(arg0, void *, 0xDC), u16, 0xA)], 1);
}

void func_sc04_009_8017E270(u8 *arg0) {
    func_8014ADA8((s32) &D_80126B58, (s32) AF(AF(arg0, void *, 0xDC), u16, 0xC));
}

s32 func_sc04_009_8017E2A4(void) {
    return func_80174764() == 1;
}

s32 func_sc04_009_8017E2C8(void) {
    s32 i;

    for (i = 0; i < 0x26; i++) {
        if (!(func_80029178(D_sc04_009_80194C28[i]) & 0xFF)) {
            return 0;
        }
    }
    return 1;
}

void func_sc04_009_8017E32C(u8 *arg0) {
    D_sc04_009_80194EF8[AF(arg0, u16, 2)]();
}

void func_sc04_009_8017E368(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc04_009_80194BF4) != 0) {
        AF(arg0, u16, 0xFC) = (u16) AF(AF(arg0, void *, 0x64), u16, 0x36);
        if (AF(arg0, u16, 0x70) & 0x4000) {
            func_8012A828(arg0, (s32) &D_sc04_009_80195704);
            AF(arg0, s16, 0x5C) = 0;
        } else {
            func_8012A828(arg0, (s32) &D_sc04_009_801954E4);
        }
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc04_009_8017E3F0(u8 *arg0, s32 arg1) {
    s16 temp_v1;

    if (AF(arg0, s16, 0xFC) != AF(AF(arg0, void *, 0x64), s16, 0x36)) {
        func_8012C218((s32) arg0, arg1);
        return;
    }
    temp_v1 = AF(arg0, s16, 0xFE);
    if (temp_v1 == 1) {
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x1C) = 0x20;
        func_8012A828((s32) arg0, (s32) &D_sc04_009_801954F4);
        AF(arg0, s16, 0x5C) = 0;
        func_8002D4C8(0x5BF, 0);
    } else if (temp_v1 == 2) {
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x1C) = 0x20;
        func_8012A828((s32) arg0, (s32) &D_sc04_009_801955FC);
        AF(arg0, u16, 0x5C) = 0x8C00;
    }
}

void func_sc04_009_8017E4B0(u8 *arg0) {
    s32 f;

    if (AF(arg0, s16, 0x98) == 0) {
        f = AF(arg0, s16, 0xFE);
        AF(arg0, s16, 2) = 1;
        if (f == 1) {
            func_8012A828((s32) arg0, (s32) &D_sc04_009_80195704);
        } else {
            func_8012A828((s32) arg0, (s32) &D_sc04_009_801954E4);
        }
        AF(arg0, s16, 0xFE) = 0;
    }
}

s32 *func_sc04_009_8017E520(u8 *o) {
    struct_8_4 a;
    struct_8_4 b;
    s32 f;
    u8 *p;
    s32 *r;

    p = AF(o, u8 *, 0x64);
    gte_SetRotMatrix((u8 *) D_80126B78 + 0x34);
    gte_SetTransMatrix((u8 *) D_80126B78 + 0x34);
    RotTransSV(&D_sc04_009_80194EE8[0], &a, &f);
    RotTransSV(&D_sc04_009_80194EE8[1], &b, &f);
    if (func_80135888(AF(p, s32, 0x20), AF(p, s32, 0x58), &a, &b) != 0 && func_8012BDBC(p, 0x300) != 0) {
        AF(p, s16, 2) = 3;
        func_80178BF8();
        r = (s32 *) &func_80172710;
    } else {
        r = NULL;
    }
    return r;
}

void func_sc04_009_8017E618(u8 *arg0) {
    D_sc04_009_80195024[AF(arg0, u16, 2)]();
}

void func_sc04_009_8017E654(u8 *arg0) {
    s32 temp_v0;

    if (func_8012C354((s32) arg0, (s32) (((AF(arg0, u16, 0x70) & 0xF) * 0x34) + &D_sc04_009_80194F24)) != 0) {
        if (!(AF(arg0, u16, 0x70) & 1)) {
            temp_v0 = func_8012C658(0x1E3, 1, (s32) arg0);
            AF(arg0, s32, 0x6C) = temp_v0;
            if (temp_v0 == 0) {
                func_8012CAE4((s32) arg0);
                return;
            }
            AF(arg0, s16, 2) = 1;
            AF(arg0, s32, 0xCC) = func_801788B8((s32) arg0, (s32) &func_sc04_009_8017E950);
            return;
        }
        AF(arg0, s16, 2) = 5;
        AF(arg0, u16, 0x100) = (u16) AF(AF(arg0, void *, 0x64), u16, 0x36);
        func_8012A828((s32) arg0, (s32) &D_sc04_009_801954E4);
    }
}

void func_sc04_009_8017E72C(u8 *arg0) {
    AF(AF(AF(arg0, void *, 0x6C), void *, 0x20), s16, 0x12) = (s16) ((AF(AF(arg0, void *, 0x20), u16, 0x12) + 0x800) & 0xFFF);
    AF(arg0, s16, 2) = 2;
}

void func_sc04_009_8017E754(void) {
}

void func_sc04_009_8017E75C(u8 *arg0) {
    AF(arg0, s16, 2) = 4;
    func_80178CBC((s32) arg0, (s32) &D_sc04_009_80194FD4);
}

void func_sc04_009_8017E788(s32 arg0) {
    if (func_801789AC(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 2;
    }
}

void func_sc04_009_8017E7C8(u8 *arg0, s32 arg1) {
    s16 temp_v1;

    if (AF(arg0, s16, 0x100) != AF(AF(arg0, void *, 0x64), s16, 0x36)) {
        func_8012C218((s32) arg0, arg1);
        return;
    }
    temp_v1 = AF(arg0, s16, 0xFE);
    if (temp_v1 == 1) {
        AF(arg0, s16, 2) = 6;
        AF(arg0, s32, 0x1C) = 0x20;
        func_8012A828((s32) arg0, (s32) &D_sc04_009_801954F4);
        AF(arg0, s16, 0x5C) = 0;
        func_8002D4C8(0x5BF, 0);
    } else if (temp_v1 == 2) {
        AF(arg0, s16, 2) = 6;
        AF(arg0, s32, 0x1C) = 0x20;
        func_8012A828((s32) arg0, (s32) &D_sc04_009_801955FC);
        AF(arg0, u16, 0x5C) = 0x8C00;
    }
}

void func_sc04_009_8017E888(u8 *arg0, s32 arg1, s32 arg2) {
    if (AF(arg0, s16, 0x98) == 0) {
        if (AF(arg0, s16, 0xFE) == 2) {
            func_8002D4C8(0x888, 0, arg2);
            func_8012A828((s32) arg0, (s32) &D_sc04_009_801954E4);
        }
        AF(arg0, s16, 2) = 5;
        AF(arg0, s16, 0xFE) = 0;
    }
}

void func_sc04_009_8017E8F4(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 1;
}

void func_sc04_009_8017E904(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 2;
}

s32 func_sc04_009_8017E914(void) {
    return D_sc04_009_80198114 == 1;
}

void func_sc04_009_8017E92C(u8 *arg0) {
    func_800296F8(AF(arg0, s32, 0xDC));
}

s32 *func_sc04_009_8017E950(u8 *o) {
    struct_20_5 m;
    struct_8_4 a;
    struct_8_4 b;
    s32 flag;
    u8 *q;

    q = AF(o, u8 *, 0x64);
    m = AF(D_80126B78, struct_20_5, 0x34);
    gte_SetRotMatrix(&m);
    gte_SetTransMatrix(&m);
    RotTransSV(&D_sc04_009_80195040[0], &a, &flag);
    RotTransSV(&D_sc04_009_80195040[1], &b, &flag);
    if (func_80135888(AF(AF(o, u8 *, 0x64), s32, 0x20), AF(AF(o, u8 *, 0x64), s32, 0x58), &a, &b) != 0
        && func_8012BDBC(q, 0x300) != 0) {
        AF(q, s16, 2) = 3;
        func_80178BF8();
        return (s32 *)&func_80172710;
    }
    return 0;
}
