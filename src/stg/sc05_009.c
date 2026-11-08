#include "common.h"
#include "gte.h"
#include "psyq.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc05_009_8017BE9C(void) {
}

void func_sc05_009_8017BEA4(void) {
}

void func_sc05_009_8017BEAC(void) {
}

void func_sc05_009_8017BEB4(void) {
}

typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_4;
typedef struct { s16 field_0[6]; } struct_C_3;
extern void (*D_sc05_009_80182524[])();
typedef struct { s16 field_0, field_2; } struct_4_2;
typedef struct { struct_4_2 field_0; s16 field_4; s16 field_6; struct_4_2 field_8; s32 field_C; s32 field_10; s32 field_14; s32 field_18; } struct_1C;
typedef struct { s32 field_0, field_4, field_8; } struct_C_4;
void func_sc05_009_8017CFA0(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc05_009_8018252C[])();
void func_sc05_009_8017CFC8(void);
extern void func_800D1EBC();
extern u8 D_sc05_009_80182538;
extern void func_8016EE40();
extern u8 D_sc05_009_8018253C;
extern void func_sc05_009_8017D1D4();
extern void (*D_sc05_009_80182544[])();
extern void (*D_sc05_009_80182580[])();
extern void (*D_sc05_009_801825DC[])();
extern void (*D_sc05_009_80191A7C[])();
void func_sc05_009_8017DD50(u8 *arg0);
extern void (*D_sc05_009_80193894[])();
extern void (*D_sc05_009_8019389C[])();
extern void (*D_sc05_009_801939C4[])();
extern u8 D_sc05_009_80193974;
extern void func_80178CBC();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

extern s32 func_sc05_009_8017DD28();
extern s32 func_8012C658();
extern s32 func_8012C354();
extern s32 func_801788B8();
extern void func_8012CAE4();
extern u8 D_sc05_009_80193E84;
extern u8 D_sc05_009_801938C4;
extern s32 * func_sc05_009_8017E894();
extern void func_80178D18();
extern s32 func_801789AC();
extern s32 D_sc05_009_80196AEC;
extern void func_800296F8();

extern void func_sc05_009_8017CFF0();
extern s32 D_sc05_009_80196A90;
extern u8 D_sc05_009_80191A54;
extern void func_80154274();
extern void func_801477E8();
extern void func_80146DE8();
extern void func_80147814();
extern void func_80147460();
extern void func_80147B18();
extern void func_801473EC();
extern void func_80147AD4();
extern void func_8014C010();
extern void func_8001AAA0();
extern void func_80154150();
extern u8 D_80126B58;

extern void func_sc05_009_8017CFF0();
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
extern u8 D_sc05_009_80182594;
extern s32 func_8016F1AC();
extern void func_80178B18();
extern void func_8012AD50();
extern s32 func_80178970();
extern void func_80146E90();
extern s32 func_8012BEE8();
extern void func_8012C098();
extern void func_80147324();

extern u8 D_sc05_009_80193874;
extern s32 func_8012C1B8();
extern void func_8001C214();

typedef struct { s16 field_0[3][3]; s16 field_12; s32 field_14[3]; } struct_20_3;
typedef struct { u32 field_0; u32 field_4; u32 field_8; u32 field_C; u32 *field_10; } struct_14_2;
typedef struct { s32 field_0; s32 field_4; s32 field_8; s32 field_C; s32 field_10; s32 field_14; s32 field_18; } struct_1C_2;
extern u8 *D_800A5E60;
extern u16 D_800B9A02;
extern u32 D_800A6610[2][0x1000];

void func_sc05_009_8017BEBC(u8 *obj) {
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

void func_sc05_009_8017CD9C(void) {
    func_sc05_009_8017CFF0(1);
}

void func_sc05_009_8017CDBC(void) {
    func_8001AAA0(0x6B);
    func_sc05_009_8017CFF0(0);
}

void func_sc05_009_8017CDE4(u8 *arg0) {
    D_sc05_009_80182524[AF(arg0, u8, 0x15)]();
}

s32 func_sc05_009_8017CE20(u8 *arg0) {
    func_sc05_009_8017CFA0();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc05_009_8017CE64(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc05_009_8017CE88(u8 *arg0) {
    D_sc05_009_8018252C[AF(arg0, u8, 0x15)]();
}

s32 func_sc05_009_8017CEC4(u8 *arg0) {
    func_sc05_009_8017CFC8();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc05_009_8017CF04(u8 *arg0) {
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

void func_sc05_009_8017CF80(void) {
    func_800D1EBC();
}

void func_sc05_009_8017CFA0(void) {
    func_8016EE40((s32) &D_sc05_009_80182538, 0x01000000);
}

void func_sc05_009_8017CFC8(void) {
    func_8016EE40((s32) &D_sc05_009_8018253C, 0x01000000);
}

void func_sc05_009_8017CFF0(s32 arg0) {
    D_sc05_009_80196A90 = arg0;
}

s32 func_sc05_009_8017D000(s32 arg0) {
    return D_sc05_009_80196A90;
}

void func_sc05_009_8017D010(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x4B0;
    D_80126968 = 0xE3;
    D_8012696A = 0xA00;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x90;
    D_8012697A = 0;
    func_8012A018((s32) func_sc05_009_8017D1D4, 0);
    func_8012A094((s32) &D_80126948);
    func_sc05_009_8017D1D4((s32) &D_80126948);
}

void func_sc05_009_8017D0AC(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x244;
    D_80126968 = 0xE3;
    D_8012696A = 0xA00;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x90;
    D_8012697A = 0;
    func_8012A018((s32) func_sc05_009_8017D1D4, 1);
    func_8012A094((s32) &D_80126948);
    func_sc05_009_8017D1D4((s32) &D_80126948);
}

void func_sc05_009_8017D148(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x4B0;
    D_80126968 = 0xE3;
    D_8012696A = 0xA00;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x90;
    D_8012697A = 0;
    func_8012A018((s32) func_sc05_009_8017D1D4, 2);
    func_sc05_009_8017D1D4((s32) &D_80126948);
}

void func_sc05_009_8017D1D4(s32 arg0) {
    D_sc05_009_80182544[AF(arg0, u8, 4)]();
}

extern u8 D_sc05_009_80191A30;

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
extern u8 D_80126940;
extern u8 D_sc05_009_80182550[];
extern s32 func_80148800();
extern void func_sc05_009_8017D340();
extern s32 func_80012C6C();
extern s32 func_80012ABC();
extern void func_8012F14C();

void func_sc05_009_8017D210(u8 *arg0) {
    struct_8_8 v;
    u8 t;

    if (func_80148800((s32) &D_80126B58) & 3) {
        t = (AF(arg0, u8, 5) + 1) & 1;
        AF(arg0, u8, 5) = t;
        AF(arg0, s32, 0x14) = ((s16 *)&D_sc05_009_80182550)[t];
    }
    v = *(struct_8_8 *)&D_80126940;
    func_sc05_009_8017D340((s32) arg0, (s32) &v);
}

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
extern void func_sc05_009_8017D4D8();

void func_sc05_009_8017D2B0(s32 arg0) {
    struct_8_8 v;

    v = *(struct_8_8 *)&D_80126940;
    func_sc05_009_8017D340(arg0, (s32) &v);
}

void func_sc05_009_8017D2F8(s32 arg0) {
    struct_8_8 v;

    v = *(struct_8_8 *)&D_80126940;
    func_sc05_009_8017D4D8(arg0, (s32) &v);
}

void func_sc05_009_8017D340(u8 *arg0, u8 *arg1) {
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

extern u8 D_sc05_009_80182554;
extern s32 D_sc05_009_80193820;
extern s32 D_sc05_009_80193824;
extern s32 D_sc05_009_80193828;
extern s32 D_sc05_009_8019382C;
extern s32 D_sc05_009_80193830;
extern s32 D_sc05_009_80193834;
extern struct_C_5 D_sc05_009_80193838[];
extern s32 D_sc05_009_80196A98[];
extern s32 D_sc05_009_80196A9C;
extern s32 D_sc05_009_80196AA0;
extern s32 D_sc05_009_80196AA4;
extern s32 D_sc05_009_80196AA8;
extern s32 D_sc05_009_80196AAC;
extern s32 func_8014BFD4();
extern void func_8001C2C4();
extern void func_8012AD44();

void func_sc05_009_8017D4D8(u8 *arg0, u8 *arg1) {
    struct_20_6 m;
    struct_8_9 v;
    struct_8_9 o;

    AF(arg0, s32, 8) = (s16) func_80012C6C(AF(arg0, s16, 8), AF(arg0, s16, 0xC), 0x10);
    AF(arg0, s32, 0x10) = (s16) func_80012C6C(AF(arg0, s16, 0x10), AF(arg0, s16, 0x14), 0x10);
    AF(arg0, s16, 0x18) = func_80012ABC(AF(arg0, s16, 0x18), AF(arg0, s16, 0x20), 0x10);
    AF(arg0, s16, 0x1A) = func_80012ABC(AF(arg0, s16, 0x1A), AF(arg0, s16, 0x22), 0x10);
    AF(arg0, s16, 0x1C) = func_80012ABC(AF(arg0, s16, 0x1C), AF(arg0, s16, 0x24), 0x10);
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

void func_sc05_009_8017D670(u8 *arg0) {
    D_sc05_009_80182580[AF(arg0, u16, 2)]();
}

void func_sc05_009_8017D6AC(u8 *o) {
    s32 n;
    u8 *p;
    s32 *q;

    n = func_8014BFD4() & 0xFF;
    if (((s32 (*)()) func_sc05_009_8017D000)() == 0) {
        return;
    }
    p = (u8 *) func_8012C1B8();
    AF(o, u8 *, 0x20) = p;
    if (p == 0) {
        return;
    }
    if (AF(o, s16, 0xFC) != 0) {
        func_8001C2C4(p);
        AF(o, void *, 0x58) = &D_sc05_009_80182554;
        AF(o, u8, 0x75) = 5;
        AF(o, u16, 0x5C) |= 0x400;
        func_8012AD44(o, 4);
        return;
    }
    q = D_sc05_009_80196A98;
    *q = D_sc05_009_80193820;
    D_sc05_009_80196A9C = D_sc05_009_80193824;
    D_sc05_009_80196AA0 = D_sc05_009_80193828;
    D_sc05_009_80196AA4 = D_sc05_009_8019382C;
    D_sc05_009_80196AA8 = D_sc05_009_80193830;
    D_sc05_009_80196AAC = D_sc05_009_80193834;
    func_8001C214(p, q);
    AF(p, void *, 0x20) = D_sc05_009_80193838;
    if (n < 4) {
        *q |= 0x1000000;
    }
    if (n < 3) {
        D_sc05_009_80196A9C |= 0x1000000;
    }
    if (n < 2) {
        D_sc05_009_80196AA0 |= 0x1000000;
    }
    func_8012AD50(o);
}

void func_sc05_009_8017D840(s32 arg0) {
    if (func_8016F1AC() == 0) {
        func_80178B18(arg0, (s32) &D_sc05_009_80182594);
        func_8012AD50(arg0);
    }
}

void func_sc05_009_8017D888(s32 arg0) {
    if (func_80178970() != 0) {
        func_80178D18(arg0);
        func_80146E90(arg0, 1);
        func_8012AD50(arg0);
    }
}

void func_sc05_009_8017D8D4(s32 arg0) {
    if (func_8012BEE8() != 0) {
        func_8012C098(arg0);
    }
}

void func_sc05_009_8017D90C(void) {
}

void func_sc05_009_8017D914(u8 *arg0) {
    func_80147324(0x9D2);
    AF(arg0, s32, 0xDC) = 0x200000;
    AF(arg0, u16, 0xFC) = (u16) AF(arg0, u16, 6);
}

extern s32 *D_sc05_009_801825E4[];

extern void func_8012C218();
extern s32 func_8012BE54();
extern s32 func_8014CB8C();
extern u8 D_80062BD0;
extern void func_80019064();
extern s32 func_8012C588();
extern u16 D_sc05_009_8019387C[];
extern s16 D_80126B62;
extern u16 D_80126B5E;
extern u16 D_80126B66;
extern void func_sc05_009_8017E2BC();
extern s32 func_80132EF4();

typedef struct { u32 field_0_b0 : 24; u32 field_3_b0 : 8; } struct_4_7;
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_8;
typedef struct { struct_4_7 field_0; u8 field_4, field_5, field_6, field_7; s16 field_8, field_A, field_C, field_E, field_10, field_12, field_14, field_16; } struct_18;
typedef union { s32 m0; struct_4_2 m1; } union_4_2;
typedef struct { unsigned field_0_b0 : 31; unsigned field_3_b7 : 1; } struct_4_8;
typedef struct { s16 field_0, field_2, field_4, field_6, field_8; u16 field_A; s16 field_C, field_E; s32 field_10; } struct_14_5;
extern void func_80172710();
extern void func_80178BF8();
extern void *D_80126B78;
extern struct_8_4 D_sc05_009_801939E0[];
extern s32 func_80135888();
extern s32 func_8012BDBC();

typedef struct { s32 field_0; s32 field_4; s32 field_8; s16 field_C; s16 field_E; s32 field_10[2]; s32 field_18; s32 field_1C; s32 field_20; } struct_24;
typedef struct { s16 field_0, field_2, field_4, field_6; s16 field_8, field_A, field_C, field_E; s32 field_10; } struct_14_6;
typedef struct { struct_8_4 field_0[4]; s32 field_20, field_24, field_28, field_2C, field_30, field_34; } struct_38_2;
typedef struct { s16 field_0, field_2, field_4, field_6, field_8, field_A, field_C, field_E; s32 field_10; } struct_14_7;
extern u8 D_sc05_009_80193E94;
extern u8 D_sc05_009_80193F9C;
typedef struct { u32 field_0, field_4, field_8, field_C; u32 *field_10; } struct_14_8;
extern u8 D_80126CAC;
extern s32 D_801274D8;
extern s32 D_801274DC;
extern s32 func_800132BC();

typedef struct { s16 field_0, field_2, field_4; } struct_6;
typedef struct { s32 field_0[4]; } struct_10_6;
typedef struct { s16 field_0, field_2; s32 field_4; } struct_8_12;
typedef struct { struct_8_4 field_0[3]; struct_4_4 field_18[3]; s32 field_24; } struct_28_2;
extern struct_20_5 D_800AE620;

extern s32 func_80019198();
extern u8 D_sc05_009_80182578;
extern void func_80172310();
extern void func_sc05_009_8017DF34();
s32 func_sc05_009_8017D950(u8 *o) {
    struct_8_4 v;

    if (func_80019198() == 0) {
        func_80019064(&D_sc05_009_80182578);
    }
    AF(o, s16, 6) = AF(o, u16, 0xFC);
    v.field_0 = AF(o, s16, 0xFC) += AF(o, u16, 0xDE);
    v.field_2 = D_80126B62;
    v.field_4 = AF(o, s16, 0xE);
    v.field_6 = 0xC00;
    func_80172310(&v);
    if (AF(o, s16, 6) >= 0x121) {
        func_sc05_009_8017DF34();
        return 1;
    }
    return 0;
}

extern u8 D_sc05_009_80182564;
extern void func_8013C9C4();
extern void func_80147364();
s32 func_sc05_009_8017D9F0(u8 *o) {
    u8 unused[8]; /* MATCH-TRICK: pads the frame to 0x20 */

    AF(o, s16, 6) = AF(o, u16, 0xFC);
    AF(o, s16, 0xFC) += AF(o, u16, 0xDE);
    if (AF(o, s16, 6) >= 0x1A1) {
        func_8012C658(0x251, 0, o);
        func_8012C658(0x251, 1, o);
        func_8012C658(0x251, 2, o);
        func_8012C658(0x251, 3, o);
        func_8012C658(0x251, 4, o);
        func_8013C9C4(&D_sc05_009_80182564);
        func_80147324(0x807);
        func_80147364(4, 0x9D2);
        return 1;
    }
    return 0;
}

void func_sc05_009_8017DAB8(u8 *arg0) {
    D_sc05_009_801825DC[AF(arg0, u16, 2)]();
}

void func_sc05_009_8017DAF4(u8 *o) {
    s32 *t;
    u8 *m;

    t = D_sc05_009_801825E4[AF(o, s16, 0x70)];
    m = (u8 *)func_8012C1B8();
    AF(o, u8 *, 0x20) = m;
    if (m != 0) {
        t[0] = D_sc05_009_80196A98[AF(o, s16, 0x70)];
        t[1] = 0;
        func_8001C214(m, t);
        AF(m, struct_8_4, 0x10) = AF(AF(AF(o, u8 *, 0x64), u8 *, 0x20), struct_8_4, 0x10);
        AF(o, s16, 6) += D_sc05_009_80193838[AF(o, s16, 0x70)].field_0[0];
        AF(o, s16, 0xA) += D_sc05_009_80193838[AF(o, s16, 0x70)].field_0[1];
        AF(o, s16, 0xE) += D_sc05_009_80193838[AF(o, s16, 0x70)].field_0[2];
        AF(o, s16, 0xFC) = (rand() & 0x1F) * 16 + 0xE3;
        AF(o, s16, 0xFE) = (rand() & 0x1F) * 16 + 0xE3;
        AF(o, s32, 0x10) = AF(AF(o, u8 *, 0x64), s32, 0xDC);
        AF(o, s32, 0x14) = -0x40000 - (rand() & 0x3F) * 0x800;
        AF(o, s32, 0x18) = 0;
        AF(o, s32, 0x44) = (rand() & 0x3F) * 0x80 + 0x1000;
        AF(o, s32, 0x48) = (rand() & 0x3F) * 0x80 + 0x1000;
        AF(o, s32, 0x4C) = 0;
        func_8012AD50(o);
    }
}

extern void func_8012AD80();
void func_sc05_009_8017DCB0(u8 *o) {
    u8 *m = AF(o, u8 *, 0x20);

    AF(m, s16, 0x10) += AF(o, u16, 0xFC);
    AF(m, s16, 0x14) += AF(o, u16, 0xFE);
    func_8012AD80(o);
    if (AF(o, s16, 6) > 0x1000) {
        func_8012C098(o);
    }
}

s32 func_sc05_009_8017DD20(void) {
    return 0x6A;
}

s32 func_sc05_009_8017DD28()
{
    return func_80174684((s32) func_sc05_009_8017DD50);
}

void func_sc05_009_8017DD50(u8 *arg0) {
    D_sc05_009_80191A7C[AF(arg0, u8, 0x214)]();
}

void func_sc05_009_8017DD8C(s32 arg0) {
    func_8014706C();
    func_80154274(arg0, (s32) &D_sc05_009_80191A30);
    AF(AF(arg0, void *, 0x20), s16, 0x12) = 0xC00;
    func_80171A1C(arg0);
    func_sc05_009_8017DDE0(arg0);
}

void func_sc05_009_8017DDE0(void) {
}

void func_sc05_009_8017DDE8(s32 arg0) {
    func_80154274(arg0, (s32) &D_sc05_009_80191A54);
    func_801477E8(arg0, -0x20000);
    func_80146DE8(arg0, 0, 0, -0x400000);
    func_80171A1C(arg0);
}

void func_sc05_009_8017DE40(s32 arg0) {
    func_80147814(arg0, 0x10000);
    func_80147460(arg0);
    func_80147B18(arg0, 0, 0, 0x10000);
    func_801473EC(arg0);
    if (AF(arg0, s16, 0xA) >= -0x2C1) {
        AF(arg0, s16, 0xA) = -0x2C2;
        func_80171A1C(arg0);
    }
}

void func_sc05_009_8017DEB0(s32 arg0) {
    func_80147AD4(arg0, 0, 0, 0x20000);
    func_801473EC(arg0);
    func_8014C010(arg0, 2);
    if (AF(arg0, s32, 0x2C) > 0) {
        func_8001AAA0(0x6B);
        func_80154150(arg0, 1);
        func_80171A1C(arg0);
        func_80174650(arg0);
    }
}

void func_sc05_009_8017DF2C(void) {
}

void func_sc05_009_8017DF34(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_80171A1C((s32) &D_80126B58, arg1, arg2, arg3);
}

void func_sc05_009_8017DF5C(u8 *o) {
    u8 *d = &D_80126B58;
    s16 r = 0;
    u8 *p;
    s16 t;
    s32 k;
    if (AF(o, u8, 0x74) != 0) {
        if (func_8012BE54() < 0x4000 && func_8014CB8C() != 0) {
            AF(o, s16, 0xFE)++;
            func_80019064(&D_80062BD0);
            func_8012C588(0x27D, o);
            r = 1;
            if (AF(o, s16, 0xFE) >= 9) {
                AF(o, s16, 0xA)++;
                AF(AF(o, u8 *, 0x20), s16, 0x18) -= 0x10;
                p = AF(o, u8 *, 0x20);
                AF(p, s16, 0x1C) = AF(p, s16, 0x18);
            }
        }
        k = D_sc05_009_8019387C[AF(o, s16, 0x100) * 8] - 1;
        AF(d, s16, 0xA) = AF(o, s16, 0xA) + k;
    }
    if (r == 0) {
        AF(o, s16, 0xFE) = 0;
    }
    t = AF(o, s16, 0xFC);
    if (t != 0 && (AF(o, u16, 0xFE) & 0xF) == 1) {
        func_8002D4C8((u16) t, 0);
    }
    if (AF(o, s16, 0x102) + 0xA0 < AF(o, s16, 0xA)) {
        func_8012C218(o);
    }
}

void func_sc05_009_8017E0B8(u8 *arg0) {
    D_sc05_009_80193894[AF(arg0, u16, 2)]();
}

void func_sc05_009_8017E0F4(u8 *o) {
    s16 n;
    s32 *tbl;
    u8 *e;
    u8 *p;
    u8 *q;
    s16 v;

    tbl = AF(AF(o, u8 *, 0x64), s32 *, 0xDC);
    n = (rand() & 1) + 1;
    e = (u8 *) func_8012C1B8();
    AF(o, u8 *, 0x20) = e;
    if (e == 0 || tbl == 0 || tbl[n] == 0) {
        func_8012CAE4(o);
        return;
    }
    func_8001C214(e, tbl[n]);
    AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x10;
    v = (rand() & 0x3F0) + 0xA00;
    p = AF(o, u8 *, 0x20);
    AF(p, s16, 0x18) = AF(p, s16, 0x1A) = AF(p, s16, 0x1C) = v;
    AF(AF(o, u8 *, 0x20), s16, 0x12) = rand() & 0xFF0;
    AF(o, s16, 6) = AF(o, s16, 0xFE) = D_80126B5E;
    AF(o, s16, 0xA) = D_80126B62;
    AF(o, s16, 0xE) = AF(o, s16, 0x100) = D_80126B66;
    AF(o, s16, 0xE2) = (rand() & 0x1C) + 0x18;
    AF(o, s32, 0x14) = 0xFFE80000;
    AF(o, s32, 0x48) = 0x8000;
    AF(o, s32, 0x18) = 0x50000;
    AF(o, s16, 0x106) = rand() & 0xF0;
    AF(o, s16, 0x108) = rand() & 0xF0;
    func_sc05_009_8017E2BC(o);
    if (n != 1) {
        q = (u8 *) func_80132EF4(o, 0x22);
        if (q != 0) {
            AF(q, s16, 0x34) = 0x3001;
            AF(q, s32, 0x14) = 0xFFFC0000;
        }
    }
    func_8012AD50(o);
}

void func_sc05_009_8017E280(u8 *arg0) {
    D_sc05_009_8019389C[AF(arg0, u16, 2)]();
}

void func_sc05_009_8017E2BC(u8 *o) {
    struct_20_5 m;
    struct_8_4 v;
    s32 flag;

    m = D_800AE620;
    RotMatrixY(AF(AF(o, u8 *, 0x20), s16, 0x12), &m);
    m.field_14[0] = AF(o, s16, 0xFE);
    m.field_14[1] = AF(o, s16, 0xA);
    m.field_14[2] = AF(o, s16, 0x100);
    SetRotMatrix(&m);
    SetTransMatrix(&m);
    v.field_0 = 0;
    v.field_2 = 0;
    v.field_4 = AF(o, s16, 0xE2);
    RotTransSV(&v, &v, &flag);
    AF(o, s16, 6) = v.field_0;
    AF(o, s16, 0xE) = v.field_4;
}

void func_sc05_009_8017E3AC(u8 *arg0) {
    s32 *temp_s1;
    s32 temp_a1;
    s32 temp_v0;
    s32 temp_v1;

    temp_s1 = AF(arg0, s32 *, 0xDC);
    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if ((temp_v0 == 0) || (temp_s1 == NULL) || (temp_a1 = *temp_s1, (temp_a1 == 0))) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C214(temp_v0, temp_a1);
    temp_v1 = AF(arg0, s32, 0x20);
    AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
    AF(AF(arg0, s32, 0x20), u16, 0x18) = (u16) AF(arg0, u16, 0x70);
    AF(AF(arg0, s32, 0x20), u16, 0x1C) = (u16) AF(arg0, u16, 0x70);
    AF(arg0, s16, 0x100) = 0;
    AF(arg0, u16, 0x102) = (u16) AF(arg0, u16, 0xA);
    if ((s16) AF(arg0, u16, 0x70) >= 0x1001) {
        AF(arg0, s16, 0x100) = 1;
    }
    AF(arg0, u16, 0x5C) = 0x8400;
    AF(arg0, u8, 0x75) = 2;
    AF(arg0, void *, 0x58) = (void *) ((AF(arg0, s16, 0x100) * 0x10) + &D_sc05_009_80193874);
    func_8012AD50((s32) arg0);
}

void func_sc05_009_8017E4A4(u8 *arg0) {
    AF(arg0, s32, 8) += AF(arg0, s32, 0x14);
    AF(arg0, s32, 0x14) += AF(arg0, s32, 0x48);
    if (AF(arg0, s32, 0x14) > -0x20000) {
        func_8012C218(arg0);
        return;
    }
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) += 0x30;
    AF(AF(arg0, u8 *, 0x20), u16, 0x10) += AF(arg0, u16, 0x106);
    AF(AF(arg0, u8 *, 0x20), u16, 0x14) += AF(arg0, u16, 0x108);
    AF(arg0, s32, 0xE0) += AF(arg0, s32, 0x18);
    func_sc05_009_8017E2BC(arg0);
}

void func_sc05_009_8017E55C(u8 *arg0) {
    D_sc05_009_801939C4[AF(arg0, u16, 2)]();
}

void func_sc05_009_8017E598(u8 *arg0) {
    s32 temp_v0;

    if (func_8012C354((s32) arg0, (s32) (((AF(arg0, u16, 0x70) & 0xF) * 0x34) + &D_sc05_009_801938C4)) != 0) {
        if (!(AF(arg0, u16, 0x70) & 1)) {
            temp_v0 = func_8012C658(0x1E3, 1, (s32) arg0);
            AF(arg0, s32, 0x6C) = temp_v0;
            if (temp_v0 == 0) {
                func_8012CAE4((s32) arg0);
                return;
            }
            AF(arg0, s16, 2) = 1;
            AF(arg0, s32, 0xCC) = func_801788B8((s32) arg0, (s32) &func_sc05_009_8017E894);
            return;
        }
        AF(arg0, s16, 2) = 5;
        AF(arg0, u16, 0x100) = (u16) AF(AF(arg0, void *, 0x64), u16, 0x36);
        func_8012A828((s32) arg0, (s32) &D_sc05_009_80193E84);
    }
}

void func_sc05_009_8017E670(u8 *arg0) {
    AF(AF(AF(arg0, void *, 0x6C), void *, 0x20), s16, 0x12) = (s16) ((AF(AF(arg0, void *, 0x20), u16, 0x12) + 0x800) & 0xFFF);
    AF(arg0, s16, 2) = 2;
}

void func_sc05_009_8017E698(void) {
}

void func_sc05_009_8017E6A0(u8 *arg0) {
    AF(arg0, s16, 2) = 4;
    func_80178CBC((s32) arg0, (s32) &D_sc05_009_80193974);
}

void func_sc05_009_8017E6CC(s32 arg0) {
    if (func_801789AC(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 2;
    }
}

void func_sc05_009_8017E70C(u8 *arg0, s32 arg1) {
    s16 temp_v1;

    if (AF(arg0, s16, 0x100) != AF(AF(arg0, void *, 0x64), s16, 0x36)) {
        func_8012C218((s32) arg0, arg1);
        return;
    }
    temp_v1 = AF(arg0, s16, 0xFE);
    if (temp_v1 == 1) {
        AF(arg0, s16, 2) = 6;
        AF(arg0, s32, 0x1C) = 0x20;
        func_8012A828((s32) arg0, (s32) &D_sc05_009_80193E94);
        AF(arg0, s16, 0x5C) = 0;
        func_8002D4C8(0x5BF, 0);
    } else if (temp_v1 == 2) {
        AF(arg0, s16, 2) = 6;
        AF(arg0, s32, 0x1C) = 0x20;
        func_8012A828((s32) arg0, (s32) &D_sc05_009_80193F9C);
        AF(arg0, u16, 0x5C) = 0x8C00;
    }
}

void func_sc05_009_8017E7CC(u8 *arg0, s32 arg1, s32 arg2) {
    if (AF(arg0, s16, 0x98) == 0) {
        if (AF(arg0, s16, 0xFE) == 2) {
            func_8002D4C8(0x888, 0, arg2);
            func_8012A828((s32) arg0, (s32) &D_sc05_009_80193E84);
        }
        AF(arg0, s16, 2) = 5;
        AF(arg0, s16, 0xFE) = 0;
    }
}

void func_sc05_009_8017E838(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 1;
}

void func_sc05_009_8017E848(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 2;
}

s32 func_sc05_009_8017E858(void) {
    return D_sc05_009_80196AEC == 1;
}

void func_sc05_009_8017E870(u8 *arg0) {
    func_800296F8(AF(arg0, s32, 0xDC));
}

s32 *func_sc05_009_8017E894(u8 *o) {
    struct_20_5 m;
    struct_8_4 a;
    struct_8_4 b;
    s32 flag;
    u8 *q;

    q = AF(o, u8 *, 0x64);
    m = AF(D_80126B78, struct_20_5, 0x34);
    gte_SetRotMatrix(&m);
    gte_SetTransMatrix(&m);
    RotTransSV(&D_sc05_009_801939E0[0], &a, &flag);
    RotTransSV(&D_sc05_009_801939E0[1], &b, &flag);
    if (func_80135888(AF(AF(o, u8 *, 0x64), s32, 0x20), AF(AF(o, u8 *, 0x64), s32, 0x58), &a, &b) != 0
        && func_8012BDBC(q, 0x300) != 0) {
        AF(q, s16, 2) = 3;
        func_80178BF8();
        return (s32 *)&func_80172710;
    }
    return 0;
}

s32 func_sc05_009_8017E9E8(u8 *arg0) {
    s32 t;
    u16 id = AF(arg0, u16, 6);
    if ((u16)(id - 0x31) < 2) {
        return 1;
    }
    if (id == 0x33 || id == 0x27B) {
        return 1;
    }
    t = func_800132BC((s32) &D_80126CAC, arg0);
    if (D_801274D8 < t && t < D_801274DC) {
        return 1;
    }
    return 0;
}
