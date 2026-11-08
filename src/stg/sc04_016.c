#include "common.h"
#include "gte.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc04_016_8017BE9C(void) {
}

void func_sc04_016_8017BEA4(void) {
}

void func_sc04_016_8017BEAC(void) {
}

void func_sc04_016_8017BEB4(void) {
}

typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_4;
typedef struct { s16 field_0[6]; } struct_C_3;
extern void (*D_sc04_016_80183A38[])();
typedef struct { s16 field_0, field_2; } struct_4_2;
typedef struct { struct_4_2 field_0; s16 field_4; s16 field_6; struct_4_2 field_8; s32 field_C; s32 field_10; s32 field_14; s32 field_18; } struct_1C;
typedef struct { s32 field_0, field_4, field_8; } struct_C_4;
void func_sc04_016_8017CF70(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc04_016_80183A40[])();
void func_sc04_016_8017CF98(void);
extern u8 D_sc04_016_80183A4C;
extern void func_8016EE40();
extern u8 D_sc04_016_80183A58;
extern void func_sc04_016_8017D010();
extern void (*D_sc04_016_80183A5C[])();
extern void (*D_sc04_016_80184C34[])();
extern void (*D_sc04_016_801A35AC[])();
extern void (*D_sc04_016_801A35BC[])();

extern void func_8012931C();
extern void func_801292C8();
extern void func_sc04_016_8017F82C();
extern void func_sc04_016_8017F8A8();
extern s32 func_sc04_016_8017FF08();
extern s32 func_801290DC();

extern u8 D_sc04_016_80183A64;
extern u8 D_sc04_016_80183FF4;
extern u8 D_sc04_016_80183DFC;
extern u8 D_sc04_016_801840EC;

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();

extern void func_800CFBCC();

extern u8 D_80126948;
extern s32 D_80126950;
extern s32 D_80126954;
extern s32 D_80126958;
extern s32 D_8012695C;
extern u8 D_sc04_016_80183C54;
extern u8 D_sc04_016_80183EAC;
extern u8 D_sc04_016_8018458C;
extern u8 D_sc04_016_8018492C;
extern s32 func_800149E0();
extern s32 func_800CF8B4();
extern s32 func_80029178();
extern void func_8017B368();
extern void func_80029124();
extern s32 func_801789AC();
extern void func_80178D18();
extern u8 D_sc04_016_80183B5C;
extern u8 D_sc04_016_801946E4;
extern u8 D_sc04_016_80194934;
extern u8 D_sc04_016_80194B84;
extern u8 D_sc04_016_80194DD4;
extern u8 D_sc04_016_80195024;
extern u8 D_sc04_016_80195274;
extern u8 D_sc04_016_801954C4;
extern void func_sc04_016_8017DD18();
extern void func_800183E0();
extern void func_8012C218();
extern u8 D_sc04_016_801844E4;
extern u8 D_sc04_016_801849BC;
extern u8 D_sc04_016_80184174;
extern u8 D_sc04_016_8018430C;
extern u8 D_sc04_016_801849AC;
extern u8 D_sc04_016_8018435C;
extern u8 D_sc04_016_801849B4;
extern u8 D_sc04_016_801849CC;
extern u8 D_sc04_016_80184A0C;
extern void func_80178B18();
extern u8 D_sc04_016_80183A0C;
extern void func_800D1724();
extern u8 D_sc04_016_80184404;
extern s32 func_sc04_016_8017DDA0();
extern s32 func_sc04_016_8017E6E0();
extern void func_sc04_016_8017DF8C();
extern void func_sc04_016_8017E26C();
extern void func_sc04_016_8017EA74();
extern s32 D_sc04_016_801A35B4[];
extern s32 func_8012C1B8();
extern void func_8001C214();
extern void func_8001D0E8();
extern void func_8012AD50();
extern void func_8012C098();

extern s32 func_80012ABC();

extern u8 D_sc04_016_801A6B40[];

typedef struct { s16 field_0[3][3]; s16 field_12; s32 field_14[3]; } struct_20_3;
typedef struct { u32 field_0; u32 field_4; u32 field_8; u32 field_C; u32 *field_10; } struct_14_2;
typedef struct { s32 field_0; s32 field_4; s32 field_8; s32 field_C; s32 field_10; s32 field_14; s32 field_18; } struct_1C_2;
extern u8 *D_800A5E60;
extern u16 D_800B9A02;
extern u32 D_800A6610[2][0x1000];
typedef struct { u32 field_0_b0 : 24; u32 field_3_b0 : 8; } struct_4_3;
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_4;
typedef struct { struct_4_3 field_0; u8 field_4, field_5, field_6, field_7; s16 field_8, field_A, field_C, field_E, field_10, field_12, field_14, field_16; } struct_18;
typedef union { s32 m0; struct_4_2 m1; } union_4_2;
extern s32 D_800AF648[];

void func_sc04_016_8017BEBC(u8 *obj) {
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

void func_sc04_016_8017CD9C(u8 *arg0) {
    D_sc04_016_80183A38[AF(arg0, u8, 0x15)]();
}

s32 func_sc04_016_8017CDD8(u8 *arg0) {
    func_sc04_016_8017CF70();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc04_016_8017CE1C(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc04_016_8017CE40(u8 *arg0) {
    D_sc04_016_80183A40[AF(arg0, u8, 0x15)]();
}

s32 func_sc04_016_8017CE7C(u8 *arg0) {
    func_sc04_016_8017CF98();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc04_016_8017CEBC(u8 *arg0) {
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

s32 func_sc04_016_8017CF38(void) {
    if (func_800167F0(4) & 0xFFFF) {
        func_800CFBCC(3);
        return 1;
    }
    return 0;
}

void func_sc04_016_8017CF70(void) {
    func_8016EE40((s32) &D_sc04_016_80183A4C, 0x01000000);
}

void func_sc04_016_8017CF98(void) {
    func_8016EE40((s32) &D_sc04_016_80183A58, 0x01000000);
}

void func_sc04_016_8017CFC0(void) {
    D_80126954 = 0x190;
    D_80126950 = 0x190;
    D_8012695C = 0x4B0;
    D_80126958 = 0x4B0;
    func_sc04_016_8017D010((s32) &D_80126948);
}

void func_sc04_016_8017D010(s32 arg0) {
    D_sc04_016_80183A5C[AF(arg0, u8, 4)]();
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
extern u8 D_sc04_016_80183A60[];
extern s32 func_80148800();

void func_sc04_016_8017D04C(u8 *arg0) {
    struct_8_8 v;
    u8 t;

    if (func_80148800((s32) &D_80126B58) & 3) {
        t = (AF(arg0, u8, 5) + 1) & 1;
        AF(arg0, u8, 5) = t;
        AF(arg0, s32, 0x14) = ((s16 *)&D_sc04_016_80183A60)[t];
    }
    v = *(struct_8_8 *)&D_80126940;
    func_sc04_016_8017D0EC((s32) arg0, (s32) &v);
}

void func_sc04_016_8017D0EC(s32 arg0, s32 arg1) {
    AF(arg0, s32, 0x3C) = 0x18C;
    AF(arg0, s32, 0x40) = -0x610;
    AF(arg0, s32, 0x48) = -0xCD;
    AF(arg0, s32, 0x44) = 0;
    AF(arg0, s32, 0x4C) = -0x202;
    AF(arg0, s32, 0x50) = 0;
}

typedef void (*type_2)();
typedef struct { u8 field_0[0x18]; struct_20_6 field_18; } struct_38;
typedef struct { s32 field_0[4]; } struct_10_3;
typedef struct { struct_10_3 field_0, field_10, field_20; } struct_30_2;
typedef struct { u8 field_0[0x34]; } struct_34_3;
typedef struct { s16 field_0, field_2, field_4, field_6, field_8, field_A, field_C, field_E; s32 field_10; } struct_14_5;


extern void func_8001C2C4();
extern s32 func_8012C51C();
extern void func_8001C810();
extern void func_800233CC();
extern void func_8001CA88();
extern void func_sc04_016_8017E6A0();
extern void func_80143994();
extern u8 D_sc04_016_80190580;
extern u8 D_sc04_016_8018490C;
extern u8 D_sc04_016_80198108;
extern u8 D_sc04_016_8019E610;
extern u8 D_sc04_016_8018445C;
extern u8 D_sc04_016_801A1CA0;
extern u8 D_sc04_016_80184724;
extern u8 D_sc04_016_801A33C0;
extern u8 D_sc04_016_80180328;
extern u8 D_sc04_016_801A6B00;
extern u8 D_sc04_016_801A6B01;
extern u8 D_sc04_016_801A6B02;
extern u8 D_sc04_016_801A6B04;
extern u8 D_sc04_016_801A6B05;
extern u8 D_sc04_016_801A6B06;

void func_sc04_016_8017D118(u8 *o) {
    struct { s16 field_0, field_2, field_4, field_6, field_8; u16 field_A; s16 field_C, field_E; s32 field_10; } d;
    u8 *anim;
    u8 *script;
    s32 rot;
    s32 next;
    s32 m;

    if (AF(o, s16, 0x70) & 0x8000) {
        m = func_8012C1B8();
        AF(o, s32, 0x20) = m;
        if (m == 0) {
            return;
        }
        func_8001C2C4(m);
        d.field_6 = 0x337;
        d.field_A = 0;
        d.field_C = 0;
        d.field_E = 0;
        d.field_10 = 0;
        if (AF(o, s32, 0xCC) == 0) {
            d.field_8 = 0;
            d.field_0 = -0x100;
            d.field_2 = -0x202;
            d.field_4 = 0;
            AF(o, s32, 0xCC) = func_8012C51C(&d, o);
        }
        if (AF(o, s32, 0xD4) == 0) {
            d.field_8 = 2;
            d.field_0 = -0xF8;
            d.field_2 = -0x502;
            d.field_4 = 0x60;
            AF(o, s32, 0xD4) = func_8012C51C(&d, o);
        }
        if (AF(o, s32, 0xD0) == 0) {
            d.field_8 = 1;
            d.field_0 = 0x1C0;
            d.field_2 = -0x202;
            d.field_4 = 0x160;
            AF(o, s32, 0xD0) = func_8012C51C(&d, o);
        }
        if (AF(o, s32, 0xD8) == 0) {
            d.field_8 = 3;
            d.field_0 = -0x100;
            d.field_2 = -0x202;
            d.field_4 = 0x60;
            AF(o, s32, 0xD8) = func_8012C51C(&d, o);
        }
        if (AF(o, s32, 0xF8) == 0) {
            d.field_8 = 4;
            d.field_0 = -0x100;
            d.field_2 = -0x202;
            d.field_4 = 0x60;
            AF(o, s32, 0xF8) = func_8012C51C(&d, o);
        }
        if (AF(o, s32, 0xF4) == 0) {
            d.field_8 = 5;
            d.field_0 = -0x100;
            d.field_2 = -0x252;
            d.field_4 = 0x60;
            AF(o, s32, 0xF4) = func_8012C51C(&d, o);
        }
        if (AF(o, s32, 0xCC) != 0 && AF(o, s32, 0xD0) != 0 && AF(o, s32, 0xD4) != 0 &&
            AF(o, s32, 0xD8) != 0 && AF(o, s32, 0xF8) != 0 && AF(o, s32, 0xF4) != 0) {
            AF(o, u16, 2)++;
        }
        return;
    }
    m = func_8012C1B8();
    AF(o, s32, 0x20) = m;
    if (m == 0) {
        return;
    }
    switch (AF(o, s16, 0x70)) {
    case 0:
        anim = &D_sc04_016_80190580;
        script = &D_sc04_016_8018490C;
        rot = 0xC80;
        next = 5;
        break;
    case 1:
        anim = &D_sc04_016_80198108;
        script = &D_sc04_016_801840EC;
        rot = 0;
        next = 6;
        break;
    case 2:
        anim = &D_sc04_016_8019E610;
        script = &D_sc04_016_8018445C;
        rot = 0;
        next = 7;
        break;
    case 3:
        anim = &D_sc04_016_801A1CA0;
        script = &D_sc04_016_80184724;
        rot = 0;
        func_8001C810(AF(o, s32, 0x20), anim);
        next = 8;
        AF(AF(o, u8 *, 0x20), s32, 4) |= 0x50000000;
        break;
    case 4:
        anim = &D_sc04_016_801A33C0;
        script = &D_sc04_016_80180328;
        rot = 0xC00;
        func_8001C810(AF(o, s32, 0x20), anim);
        next = 9;
        AF(AF(o, u8 *, 0x20), s32, 4) |= 0x70000000;
        break;
    case 5:
        { u8 *p = &D_sc04_016_801A6B00;
        *p = D_sc04_016_801A6B02 = 0x20;
        D_sc04_016_801A6B01 = 0x80;
        D_sc04_016_801A6B04 = D_sc04_016_801A6B05 = D_sc04_016_801A6B06 = 0;
        func_800233CC(p, 0x30);
        func_8001CA88(AF(o, s32, 0x20), p);
        rot = 0;
        script = 0; }
        AF(AF(o, u8 *, 0x20), s16, 0x1A) = 0x2000;
        next = 0xA;
        AF(AF(o, u8 *, 0x20), s32, 4) |= 0x50000000;
        break;
    case 6:
        func_sc04_016_8017DF68();
        next = 0xC;
        func_sc04_016_8017E6A0(o);
        func_8002D4C8(0xB90, 0);
        break;
    case 7:
        func_8001C2C4(AF(o, s32, 0x20));
        next = 0xD;
        AF(AF(o, u8 *, 0x20), s16, 0x12) = 0xC00;
        break;
    }
    if (AF(o, s16, 0x70) < 6) {
        if (AF(o, s16, 0x70) < 3) {
            func_8001C214(AF(o, s32, 0x20), anim);
            func_80143994(o, 0x3000);
        }
        if (script != 0) {
            func_8012A828(o, script);
        }
        AF(AF(o, u8 *, 0x20), s16, 0x12) = rot;
    }
    AF(o, s16, 2) = next;
}

void func_sc04_016_8017D588(s32 arg0) {
    if (!(func_800149E0(0) & 0x840) || (func_800CF8B4() == 0)) {
        if (func_80029178(0x125) & 0xFF) {
            func_8017B368(arg0, (s32) &D_sc04_016_8018492C);
        }
        if (func_80029178(0x126) & 0xFF) {
            func_80029124(0x126, 0);
            func_8012A828(AF(arg0, s32, 0xCC), (s32) &D_sc04_016_80183C54);
        }
        if (func_80029178(0x131) & 0xFF) {
            func_80029124(0x131, 0);
            func_8012A828(AF(arg0, s32, 0xCC), (s32) &D_sc04_016_80183EAC);
        }
        if (func_80029178(0x127) & 0xFF) {
            AF(AF(arg0, void *, 0xD4), s16, 0x10A) = -0x7300;
        } else {
            AF(AF(arg0, void *, 0xD4), s16, 0x10A) = -0x7100;
        }
        if (func_80029178(0x133) & 0xFF) {
            func_80029124(0x133, 0);
            func_8012A828((s32) AF(arg0, void *, 0xD4), (s32) &D_sc04_016_8018458C);
        }
        if (func_801789AC(arg0) != 0) {
            func_80178D18(arg0);
            goto block_15;
        }
    } else {
block_15:
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc04_016_8017D6D8(u8 *arg0) {
    s32 temp_s1;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_v0;
    s32 var_v0_2;

    if ((AF(arg0, s32, 0x90) == &D_sc04_016_80183A64) && (AF(arg0, s16, 0x98) == 0)) {
        func_8012A828((s32) arg0, (s32) &D_sc04_016_80183B5C);
    }
    temp_s1 = AF(arg0, s32, 0x90);
    if (temp_s1 == &D_sc04_016_80183C54) {
        if (AF(arg0, s16, 0x98) == 0) {
            func_8012A828((s32) arg0, (s32) &D_sc04_016_80183DFC);
        }
        if ((AF(arg0, s32, 0x90) == temp_s1) && (AF(arg0, s16, 0x98) == 0)) {
            func_8012A828((s32) arg0, (s32) &D_sc04_016_80183DFC);
        }
    }
    func_sc04_016_8017DD18((s32) arg0);
    if (func_80029178(0x128) & 0xFF) {
        func_80029124(0x128, 0);
        AF(arg0, s32, 0x1C) = 0;
    }
    if (func_80029178(0x129) & 0xFF) {
        temp_v1 = AF(arg0, s32, 0x1C);
        if (temp_v1 == 0) {
            func_800183E0((s32) &D_sc04_016_80195274);
            var_v0 = (rand() & 0x1F) + 0x1E;
        } else {
            if (temp_v1 == 2) {
                func_800183E0((s32) &D_sc04_016_801954C4);
            }
            var_v0 = AF(arg0, s32, 0x1C) - 1;
        }
        AF(arg0, s32, 0x1C) = var_v0;
    }
    if (func_80029178(0x12A) & 0xFF) {
        temp_v1_2 = AF(arg0, s32, 0x1C);
        if (temp_v1_2 == 0) {
            func_800183E0((s32) &D_sc04_016_801946E4);
            var_v0_2 = (rand() & 0x1F) + 0x23;
        } else {
            if (temp_v1_2 == 2) {
                func_800183E0((s32) &D_sc04_016_80194934);
            }
            var_v0_2 = AF(arg0, s32, 0x1C) - 1;
        }
        AF(arg0, s32, 0x1C) = var_v0_2;
    }
    if (func_80029178(0x12B) & 0xFF) {
        func_800183E0((s32) &D_sc04_016_80194B84);
        AF(arg0, s32, 0x1C) = 0;
    }
    if (func_80029178(0x12C) & 0xFF) {
        func_800183E0((s32) &D_sc04_016_80194DD4);
        AF(arg0, s32, 0x1C) = 0;
    }
    if (func_80029178(0x130) & 0xFF) {
        func_800183E0((s32) &D_sc04_016_80195024);
        AF(arg0, s32, 0x1C) = 0;
    }
}

extern u8 D_sc04_016_801849F8;
extern void func_80017738();
extern void func_8013C9C4();
extern void func_80028428();

extern u8 D_sc04_016_801ABB40[];
extern struct_8_6 D_sc04_016_80184C88[];
extern u8 *func_8001D074();
extern void func_8001CD9C();

extern void func_800D20C0();
static inline void func_sc04_016_8017D924_inline(s32 c) {
    D_sc04_016_801A6B01 = c;
    D_sc04_016_801A6B00 = D_sc04_016_801A6B02 = (u8)c >> 2;
}
extern u8 D_sc04_016_801A1280;
extern u8 D_sc04_016_801A1AA0;
extern u8 D_sc04_016_801A1690;

void func_sc04_016_8017D924(u8 *o) {
    struct_8_4 v;
    struct_8_4 w;
    s32 n;
    s32 c;

    v.field_0 = -0x100;
    v.field_2 = -0x252;
    v.field_4 = 0x60;
    func_800D20C0(&v, &w, 5);
    AF(o, s16, 6) = v.field_0;
    AF(o, s16, 0xA) = v.field_2;
    AF(o, s16, 0xE) = v.field_4;
    n = AF(o, s32, 0x1C);
    if (n < 0x20) {
        func_sc04_016_8017D924_inline(n * 2 - 0x80);
    } else {
        func_sc04_016_8017D924_inline((0x20 - n) * 2 - 0x40);
    }
    if (++AF(o, s32, 0x1C) >= 0x40) {
        AF(o, s32, 0x1C) = 0;
    }
    if (AF(o, s16, 0xFC) != 0) {
        D_sc04_016_801A6B00 = D_sc04_016_801A6B02 = 0xE0;
        D_sc04_016_801A6B01 = 0xFF;
        AF(AF(o, u8 *, 0x20), s16, 0x18) = 0x1800;
        AF(AF(o, u8 *, 0x20), s16, 0x1A) = 0x2000;
        AF(o, s32, 0x1C) = 0x20;
        AF(o, s16, 2)++;
    }
}

void func_sc04_016_8017DA50(u8 *o) {
    struct_34_2 q;
    s32 s;
    s16 a, b, c;

    if (AF(o, s32, 0x1C)++ < 0x55) {
        if (AF(o, s32, 0x1C) < 5) {
            s = 0xA0 - AF(o, s32, 0x1C) * 8;
        } else {
            s = (AF(o, s32, 0x1C) - 5) * 4;
            if (AF(o, s32, 0x1C) == 5) {
                func_8013C9C4(&D_sc04_016_801849F8);
                func_8002D4C8(0xB91, 0);
            }
        }
        a = 0xC0 - s;
        if ((s16)a < 0) a = 0;
        b = 0xE0 - s;
        if ((s16)b < 0) b = 0;
        c = 0x20 - s;
        if ((s16)c < 0) c = 0;
        q.field_0[0].field_0 = q.field_0[1].field_0 = -0x40;
        q.field_0[2].field_0 = q.field_0[3].field_0 = -0x50;
        q.field_0[0].field_2 = q.field_0[2].field_2 = -0xF0;
        q.field_0[1].field_2 = q.field_0[3].field_2 = 0;
        q.field_0[0].field_4 = q.field_0[1].field_4 = 0;
        q.field_0[2].field_4 = q.field_0[3].field_4 = -0x100;
        q.field_20[0].field_0 = q.field_20[1].field_0 = a;
        q.field_20[2].field_0 = q.field_20[3].field_0 = 0;
        q.field_20[0].field_1 = q.field_20[1].field_1 = b;
        q.field_20[2].field_1 = q.field_20[3].field_1 = c;
        q.field_20[0].field_2 = q.field_20[1].field_2 = b;
        q.field_20[2].field_2 = q.field_20[3].field_2 = c;
        q.field_30 = 0x50000000;
        func_80017738(&q, AF(o, u8 *, 0x20) + 0x34);
        q.field_0[1].field_0 = 0x40;
        q.field_0[3].field_0 = 0x50;
        q.field_0[1].field_2 = q.field_0[3].field_2 = -0xF0;
        func_80017738(&q, AF(o, u8 *, 0x20) + 0x34);
        q.field_0[0].field_0 = 0x40;
        q.field_0[2].field_0 = 0x50;
        q.field_0[0].field_2 = q.field_0[2].field_2 = 0;
        func_80017738(&q, AF(o, u8 *, 0x20) + 0x34);
        q.field_0[1].field_0 = -0x40;
        q.field_0[3].field_0 = -0x50;
        q.field_0[1].field_2 = q.field_0[3].field_2 = 0;
        func_80017738(&q, AF(o, u8 *, 0x20) + 0x34);
        q.field_0[0].field_0 = 0x50;
        q.field_0[1].field_0 = -0x50;
        q.field_0[0].field_2 = q.field_0[1].field_2 = -0xF0;
        q.field_0[0].field_4 = q.field_0[1].field_4 = -0x100;
        q.field_20[0].field_0 = q.field_20[1].field_0 = q.field_20[2].field_0 = q.field_20[3].field_0 = a >> 1;
        q.field_20[0].field_1 = q.field_20[1].field_1 = q.field_20[2].field_1 = q.field_20[3].field_1 = b >> 1;
        q.field_20[0].field_2 = q.field_20[1].field_2 = q.field_20[2].field_2 = q.field_20[3].field_2 = b >> 1;
        func_80017738(&q, AF(o, u8 *, 0x20) + 0x34);
    } else {
        func_80028428(0, 0x66, 0x33, 0x4D);
        func_8012C218(o);
    }
}

void func_sc04_016_8017DCDC(u8 *arg0) {
    D_sc04_016_80184C34[AF(arg0, u16, 2)]();
}

void func_sc04_016_8017DD18(s32 arg0) {
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

extern struct_4_2 D_sc04_016_80184D08[];
extern u16 D_800B99DC;
extern void func_sc04_016_8017E960();

extern u8 D_sc04_016_801AC280;

extern s32 func_8012C194();
extern u8 D_sc04_016_801AC130;
s32 func_sc04_016_8017F5D0(s32 arg0, s32 arg1);
extern u16 D_800B99DA;
extern void func_sc04_016_8017F62C();
extern void func_800139C8();
extern void func_8001382C();
extern struct_8_4 D_sc04_016_801A35C4;
extern struct_8_4 D_sc04_016_801A35CC;
extern s32 D_sc04_016_801A35D8;
extern s32 D_sc04_016_801A35DC;
s32 func_sc04_016_8017FED4(s32 arg0, s32 arg1, s32 arg2);

extern void func_8012B200();
extern void func_8012B2CC();
extern void func_8012B1B4();
extern void func_8012AD80();
s32 func_sc04_016_8017DDA0(u8 *o) {
    s16 *p;

    p = AF(o, s16 *, 0xDC);
    if (p != 0) {
        if (AF(o, s32, 0x1C) == 0) {
            if (*p == 0) {
                func_8012B200(o);
                if (AF(o, s32, 0xEC) != 0) {
                    func_8012A828(o, AF(o, s32, 0xEC));
                }
                AF(o, s32, 0xEC) = 0;
                AF(o, s16 *, 0xDC) = 0;
                return 0;
            }
            AF(o, s32, 0x1C) = *p++;
            AF(AF(o, u8 *, 0x20), s16, 0x12) = *p++;
            AF(o, s16, 0xEA) = *p++;
            func_8012B2CC(o);
            AF(o, s16 *, 0xDC) = p;
        }
        AF(o, s32, 0x1C) -= 1;
        func_8012B1B4(o, o + 0xE0);
        func_8012AD80(o);
        return 1;
    }
    return 0;
}

extern struct_8_4 D_sc04_016_80184C6C;
extern struct_8_4 D_sc04_016_80184C74;
extern s32 D_sc04_016_80184C80;
extern s32 D_sc04_016_80184C84;
void func_sc04_016_8017DE80(u8 *o, s32 n0) {
    s32 vel[4];
    struct_8_4 v;
    s16 n = n0;
    s32 r;
    s16 d;
    func_800139C8(n, &D_sc04_016_80184C6C, &v);
    v.field_0 += AF(o, u16, 6);
    d = (rand() & 0xF) + 0x38;
    v.field_2 += AF(o, u16, 0xA) - d;
    v.field_4 += AF(o, u16, 0xE);
    v.field_6 = 5;
    func_8001382C(n, &D_sc04_016_80184C74, vel);
    vel[3] = D_sc04_016_80184C80;
    r = func_sc04_016_8017FED4((s32)&v, (s32)vel, D_sc04_016_80184C84);
    if (r != 0) {
        AF(AF(r, u8 *, 0x20), s16, 0x18) = 0x124;
    }
}

s32 func_sc04_016_8017DF68(void) {
    s32 var_v0;

    var_v0 = 0x4FB0;
    do {
        (*(s32 *)&D_sc04_016_801A6B40[var_v0]) = 0;
        var_v0 -= 0x50;
    } while (var_v0 >= 0);
    return var_v0;
}

void func_sc04_016_8017DF8C(u8 *o) {
    s32 i, j, k, n;
    struct_4_2 *e;
    s16 *py;
    u8 unused[8];

    if ((++AF(o, u16, 0xFE) & 7) != 0) {
        return;
    }
    k = AF(o, s16, 0xFC);
    for (i = k & 1; i < 16; i++) {
        k = (k + 7) & 0xF;

        for (j = 0; j < 0x100; j++) {
            n = j * 0x50;
            if ((*(s32 *)&D_sc04_016_801A6B40[n + 0x0]) == 0) {
                (*(s32 *)&D_sc04_016_801A6B40[n + 0x0]) = 1;
                (*(s32 *)&D_sc04_016_801A6B40[n + 0x14]) = 0xFF000000;
                (*(s32 *)&D_sc04_016_801A6B40[n + 0x18]) = 0xFDAE0000;
                (*(s32 *)&D_sc04_016_801A6B40[n + 0x1C]) = 0x600000;
                (*(s32 *)&D_sc04_016_801A6B40[n + 0x8]) = ((AF(o, u16, 0xFC) & 0x1F) << 19) + 0xFF000000;
                py = &D_sc04_016_80184D08[k].field_2;
                e = &D_sc04_016_80184D08[k];
                (*(s32 *)&D_sc04_016_801A6B40[n + 0xC]) = (*py << 15) + 0xFDAE0000;
                (*(s32 *)&D_sc04_016_801A6B40[n + 0x10]) = (e->field_0 << 15) + 0x600000;
                (*(struct_C_4 *)&D_sc04_016_801A6B40[n + 0x2C]) = (*(struct_C_4 *)&D_sc04_016_801A6B40[n + 0x8]);
                func_sc04_016_8017E960(&(*(struct_C_4 *)&D_sc04_016_801A6B40[n + 0x8]), &(*(struct_C_4 *)&D_sc04_016_801A6B40[n + 0x14]), &(*(struct_C_4 *)&D_sc04_016_801A6B40[n + 0x20]));
                (*(s32 *)&D_sc04_016_801A6B40[n + 0x38]) = (*(s32 *)&D_sc04_016_801A6B40[n + 0x20]) * 2;
                (*(s32 *)&D_sc04_016_801A6B40[n + 0x3C]) = (*(s32 *)&D_sc04_016_801A6B40[n + 0x24]) * 2;
                (*(s32 *)&D_sc04_016_801A6B40[n + 0x40]) = (*(s32 *)&D_sc04_016_801A6B40[n + 0x28]) * 2;
                (*(s32 *)&D_sc04_016_801A6B40[n + 0x38]) = 0;
                (*(s32 *)&D_sc04_016_801A6B40[n + 0x3C]) = 0;
                (*(s32 *)&D_sc04_016_801A6B40[n + 0x40]) = 0;
                (*(s32 *)&D_sc04_016_801A6B40[n + 0x44]) = (*(s32 *)&D_sc04_016_801A6B40[n + 0x20]) / 2;
                (*(s32 *)&D_sc04_016_801A6B40[n + 0x48]) = (*(s32 *)&D_sc04_016_801A6B40[n + 0x24]) / 2;
                (*(s32 *)&D_sc04_016_801A6B40[n + 0x4C]) = (*(s32 *)&D_sc04_016_801A6B40[n + 0x28]) / 2;
                (*(s32 *)&D_sc04_016_801A6B40[n + 0x4]) = (D_800B99DC & 3) + 8;
                break;
            }
        }
        AF(o, u16, 0xFC) += 7;
    }
}

void func_sc04_016_8017E26C()
{
    struct_20_4 ls;
    struct_8_4 a;
    struct_8_4 b;
    s32 flag;
    s32 sz0;
    s32 sz1;
    s32 sz2;
    u8 *pk;
    u32 *ot;
    u32 *otp;
    s32 z;
    s16 c;
    s32 off;
    s32 i;

    GsGetLs(&D_sc04_016_801AC280, &ls);
    GsSetLsMatrix(&ls);
    pk = D_800A5E60;
    ot = D_800A6610[D_800B9A02];
    for (i = 0; i < 0x100; i++) {
        off = i * 0x50;
        if (AF(D_sc04_016_801A6B40, s32, (i * 5) << 4) == 0) {
            continue;
        }
        a.field_0 = AF(D_sc04_016_801A6B40 + 0xA, s16, off);
        a.field_2 = AF(D_sc04_016_801A6B40 + 0xE, s16, off);
        a.field_4 = AF(D_sc04_016_801A6B40 + 0x12, s16, off);
        b.field_0 = AF(D_sc04_016_801A6B40 + 0x2E, s16, off);
        b.field_2 = AF(D_sc04_016_801A6B40 + 0x32, s16, off);
        b.field_4 = AF(D_sc04_016_801A6B40 + 0x36, s16, off);
        AF(D_sc04_016_801A6B40 + 0x8, s32, off) += AF(D_sc04_016_801A6B40 + 0x38, s32, off);
        AF(D_sc04_016_801A6B40 + 0xC, s32, off) += AF(D_sc04_016_801A6B40 + 0x3C, s32, off);
        AF(D_sc04_016_801A6B40 + 0x10, s32, off) += AF(D_sc04_016_801A6B40 + 0x40, s32, off);
        if (AF(D_sc04_016_801A6B40 + 0x4, s32, off) == 0) {
            AF(D_sc04_016_801A6B40 + 0x2C, s32, off) += AF(D_sc04_016_801A6B40 + 0x38, s32, off);
            AF(D_sc04_016_801A6B40 + 0x30, s32, off) += AF(D_sc04_016_801A6B40 + 0x3C, s32, off);
            AF(D_sc04_016_801A6B40 + 0x34, s32, off) += AF(D_sc04_016_801A6B40 + 0x40, s32, off);
        } else {
            AF(D_sc04_016_801A6B40 + 0x4, s32, off)--;
        }
        AF(D_sc04_016_801A6B40 + 0x38, s32, off) += AF(D_sc04_016_801A6B40 + 0x44, s32, off);
        AF(D_sc04_016_801A6B40 + 0x3C, s32, off) += AF(D_sc04_016_801A6B40 + 0x48, s32, off);
        AF(D_sc04_016_801A6B40 + 0x40, s32, off) += AF(D_sc04_016_801A6B40 + 0x4C, s32, off);
        if (AF(D_sc04_016_801A6B40 + 0x38, s32, off) > 0) {
            c = AF(D_sc04_016_801A6B40 + 0x8, s32, off) > AF(D_sc04_016_801A6B40 + 0x14, s32, off);
        } else {
            c = AF(D_sc04_016_801A6B40 + 0x8, s32, off) < AF(D_sc04_016_801A6B40 + 0x14, s32, off);
        }
        if (c) {
            AF(D_sc04_016_801A6B40, volatile s32, off) = 0; /* MATCH-TRICK: volatile keeps the clear out of the test giv */
        }
        if (AF(D_sc04_016_801A6B40, s32, (i * 5) << 4) == 0) {
            continue;
        }
        gte_ldv3(&a, &b, &b);
        gte_rtpt();
        gte_stflg(&flag);
        if (flag & 0x7F85E000) {
            continue;
        }
        gte_stsxy01(pk + 0xC, pk + 0x14);
        gte_stsz3(&sz0, &sz1, &sz2);
        z = (sz0 + sz1) / 8;
        pk[3] = 5;
        pk[0xB] = 0x52;
        AF(pk, u32, 4) = 0xE1000020;
        pk[8] = 0x20;
        pk[9] = 0xE0;
        pk[0xA] = 0x80;
        pk[0x10] = 8;
        pk[0x11] = 0x40;
        pk[0x12] = 0x20;
        otp = (u32 *)((z << 2) + (s32)ot);
        ((struct_4_3 *)pk)->field_0_b0 = ((struct_4_3 *)otp)->field_0_b0;
        ((struct_4_3 *)otp)->field_0_b0 = (u32)pk;
        pk += 0x18;
    }
    D_800A5E60 = pk;
}

void func_sc04_016_8017E6A0(u8 *o) {
    s32 i;
    s32 n;

    for (i = 0, n = 0; i < 20; i++) {
        *(s32 *)&D_sc04_016_801ABB40[n] = 0;
        *(s32 *)&D_sc04_016_801ABB40[n + 4] = 0;
        n += 0x4C;
    }
    AF(o, s16, 0x100) = 0;
    AF(o, s16, 0x102) = 0x40;
}

s32 func_sc04_016_8017E6E0(o)
    u8 *o;
{
    s32 i, n, v;
    s32 m;
    u8 *p;
    u8 *q;

    for (i = 0; i < 20; i++) {
        n = i * 0x4C;
        if (*(s32 *)&D_sc04_016_801ABB40[n] != 0 && *(s32 *)&D_sc04_016_801ABB40[n + 8] > 0x10) {
            v = *(s32 *)&D_sc04_016_801ABB40[n + 8] - 4;
            *(s32 *)&D_sc04_016_801ABB40[n + 8] = v;
            func_800233CC(&D_sc04_016_801ABB40[i * 0x4C + 0xC], (u16)v);
        }
    }
    if (AF(o, s16, 0x100) >= 0xC) {
        return 1;
    }
    if (--AF(o, s16, 0x102) != -1) {
        return 0;
    }
    if (AF(o, s16, 0x100) < 4) {
        AF(o, s16, 0x102) = 8;
    } else {
        AF(o, s16, 0x102) = 1;
    }
    AF(o, u16, 0x104) += 4;
    for (i = 0; i < 20; i++) {
        m = i * 0x4C;
        if (*(s32 *)&D_sc04_016_801ABB40[m] == 0) {
            p = func_8001D074(0x3E, 0x7D);
            *(u8 **)&D_sc04_016_801ABB40[m + 4] = p;
            if (p == 0) {
                return 0;
            }
            *(s32 *)&D_sc04_016_801ABB40[m] = 1;
            *(s32 *)&D_sc04_016_801ABB40[m + 8] = 0x80;
            q = &D_sc04_016_801ABB40[m + 0xC];
            func_8001CD9C(*(u8 **)&D_sc04_016_801ABB40[m + 4], q);
            D_sc04_016_801ABB40[m + 0xD] = 0xE0;
            D_sc04_016_801ABB40[m + 0xC] = 0;
            D_sc04_016_801ABB40[m + 0xE] = 0x88;
            D_sc04_016_801ABB40[m + 0x10] = 0;
            D_sc04_016_801ABB40[m + 0x11] = 0;
            D_sc04_016_801ABB40[m + 0x12] = 0;
            func_800233CC(q, *(u16 *)&D_sc04_016_801ABB40[m + 8]);
            AF(*(u8 **)&D_sc04_016_801ABB40[m + 4], u16, 8) = D_sc04_016_80184C88[AF(o, s16, 0x100)].field_0;
            AF(*(u8 **)&D_sc04_016_801ABB40[m + 4], u16, 0xA) = D_sc04_016_80184C88[AF(o, s16, 0x100)].field_2;
            AF(*(u8 **)&D_sc04_016_801ABB40[m + 4], u16, 0xC) = D_sc04_016_80184C88[AF(o, s16, 0x100)].field_4;
            AF(*(u8 **)&D_sc04_016_801ABB40[m + 4], s32, 4) |= 0x50000040;
            AF(o, s16, 0x100)++;
            break;
        }
    }
    return 0;
}

void func_sc04_016_8017E960(struct_C_4 *a, struct_C_4 *b, struct_C_4 *out) {
    s32 dx, dy, dz;
    s32 ax, az;
    s32 m;

    dx = AF(b, s16, 2) - AF(a, s16, 2);
    dy = AF(b, s16, 6) - AF(a, s16, 6);
    dz = AF(b, s16, 0xA) - AF(a, s16, 0xA);
    ax = dx;
    if (dx < 0) ax = -dx;
    if (dy >= 0) m = dy; else m = -dy;
    az = dz;
    if (dz < 0) az = -dz;
    if (m < ax) m = ax;
    if (m < az) m = az;
    out->field_0 = (dx << 16) / m;
    out->field_4 = (dy << 16) / m;
    out->field_8 = (dz << 16) / m;
}

extern void func_80016714();

void func_sc04_016_8017EA74(void) {
    u8 *p;
    s32 n;
    u16 *a;
    s32 i;
    s32 one;

    one = 1;
    p = D_sc04_016_801ABB40;
    n = 0;
    do {
        if (*(s32 *)p != 0) {
            a = *(u16 **)&D_sc04_016_801ABB40[n + 4];
            if (*a == one) {
                func_80016714(a, 0x84);
            } else if (a != 0) {
                func_80016714(a, 0x38);
            }
            *(s32 *)p = 0;
        }
        p += 0x4C;
        n += 0x4C;
    } while ((s32)p < (s32)(D_sc04_016_801ABB40 + 0x5F0));
    for (i = 0x4FB0; i >= 0; i -= 0x50) {
        *(s32 *)&D_sc04_016_801A6B40[i] = 0;
    }
}

void func_sc04_016_8017EB30(u8 *arg0) {
    func_8012A828(AF(arg0, s32, 0xCC), (s32) &D_sc04_016_80183A64);
}

void func_sc04_016_8017EB5C(u8 *arg0) {
    func_8012A828(AF(arg0, s32, 0xCC), (s32) &D_sc04_016_80183FF4);
}

void func_sc04_016_8017EB88(u8 *arg0) {
    func_8012A828(AF(arg0, s32, 0xCC), (s32) &D_sc04_016_80183DFC);
}

void func_sc04_016_8017EBB4(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s16, 0x10A) = -0x7500;
}

void func_sc04_016_8017EBC4(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s16, 0x10A) = -0x7400;
}

void func_sc04_016_8017EBD4(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s16, 0x10A) = -0x7300;
}

void func_sc04_016_8017EBE4(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s16, 0x10A) = -0x7200;
}

void func_sc04_016_8017EBF4(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    AF(AF(arg0, void *, 0xD4), s16, 0xA) = -0x202;
    func_8012C218(AF(arg0, s32, 0xD8), arg1, arg2, arg3);
    func_8012C218(AF(arg0, s32, 0xF8));
    AF(AF(arg0, void *, 0xF4), s16, 0xFC) = 1;
}

void func_sc04_016_8017EC48(u8 *arg0) {
    s32 temp_s0;

    temp_s0 = AF(arg0, s32, 0xD4);
    func_8012A828(temp_s0, (s32) &D_sc04_016_801844E4);
    AF(temp_s0, s32, 0x1C) = 0;
    AF(temp_s0, s32 *, 0xDC) = &D_sc04_016_801849BC;
    AF(temp_s0, s32, 0xEC) = 0;
}

void func_sc04_016_8017EC90(u8 *arg0) {
    s32 temp_s0;

    temp_s0 = AF(arg0, s32, 0xD0);
    func_8012A828(temp_s0, (s32) &D_sc04_016_80184174);
    AF(temp_s0, s32 *, 0xDC) = &D_sc04_016_801849AC;
    AF(temp_s0, s32, 0x1C) = 0;
    AF(temp_s0, s32 *, 0xEC) = &D_sc04_016_8018430C;
}

void func_sc04_016_8017ECE0(u8 *arg0) {
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0xD0);
    AF(temp_s0, s16, 6) = 0xE0;
    AF(temp_s0, s16, 0xE) = 0;
    AF(AF(temp_s0, void *, 0x20), s16, 0x12) = 0x400;
    func_8012A828((s32) temp_s0, (s32) &D_sc04_016_80184174);
    AF(temp_s0, s32 *, 0xDC) = &D_sc04_016_801849B4;
    AF(temp_s0, s32, 0x1C) = 0;
    AF(temp_s0, s32 *, 0xEC) = &D_sc04_016_8018435C;
}

void func_sc04_016_8017ED48(u8 *arg0) {
    s32 temp_s0;

    temp_s0 = AF(arg0, s32, 0xD0);
    func_8012A828(temp_s0, (s32) &D_sc04_016_80184174);
    AF(temp_s0, s32 *, 0xDC) = &D_sc04_016_801849CC;
    AF(temp_s0, s32, 0x1C) = 0;
    AF(temp_s0, s32 *, 0xEC) = &D_sc04_016_801840EC;
}

void func_sc04_016_8017ED98(u8 *arg0) {
    func_8012A828(AF(arg0, s32, 0xD0), (s32) &D_sc04_016_801840EC);
}

void func_sc04_016_8017EDC4(u8 *o) {
    struct { s16 field_0, field_2, field_4, field_6, field_8; u16 field_A; s16 field_C, field_E; s32 field_10; } d;

    d.field_6 = 0x337;
    d.field_A = 0;
    d.field_C = 0;
    d.field_E = 0;
    d.field_10 = 0;
    d.field_8 = 6;
    d.field_0 = -0x100;
    d.field_2 = -0x202;
    d.field_4 = 0x60;
    func_8012C51C(&d, o);
}

void func_sc04_016_8017EE20(u8 *o) {
    struct { s16 field_0, field_2, field_4, field_6, field_8; u16 field_A; s16 field_C, field_E; s32 field_10; } d;

    d.field_6 = 0x337;
    d.field_A = 0;
    d.field_C = 0;
    d.field_E = 0;
    d.field_10 = 0;
    d.field_8 = 7;
    d.field_0 = 0x120;
    d.field_2 = -0x202;
    d.field_4 = 0;
    func_8012C51C(&d, o);
}

void func_sc04_016_8017EE78(u8 *arg0) {
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
    func_80029124(0x131, 0);
    func_80029124(0x133, 0);
    func_80178B18((s32) arg0, (s32) &D_sc04_016_80184A0C);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc04_016_8017EF58(u8 *arg0) {
    func_800D1724((s32) &D_sc04_016_80183A0C);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc04_016_8017EF9C(void) {
}

void func_sc04_016_8017EFA4(u8 *arg0) {
    s32 temp_v1;

    if ((AF(arg0, s32, 0x90) == &D_sc04_016_8018435C) && (AF(arg0, s16, 0x98) == 0)) {
        func_8012A828((s32) arg0, (s32) &D_sc04_016_80184404);
    }
    if ((AF(arg0, s32, 0x90) == &D_sc04_016_80184174) && ((temp_v1 = AF(arg0, s32, 0x94), (temp_v1 == 0)) || (temp_v1 == 8))) {
        func_8002D4C8(0xB8F, 0);
    }
    func_sc04_016_8017DDA0((s32) arg0);
}

void func_sc04_016_8017F03C(u8 *o) {
    if (AF(o, u8 *, 0x90) == &D_sc04_016_8018458C && AF(o, s16, 0x98) == 0) {
        func_8012A828(o, &D_sc04_016_8018445C);
    }
    if (AF(o, s32, 0xDC) == 0) {
        func_sc04_016_8017DD18(o);
    } else {
        func_sc04_016_8017DDA0(o);
    }
    switch (AF(o, s16, 0x108)--) {
    case 0:
        AF(o, s16, 0x108) = (rand() & 0x3F) + 0x28;
        break;
    case 1:
        func_800183E0(&D_sc04_016_801A1280);
        break;
    case 5:
        func_800183E0(&D_sc04_016_801A1AA0);
        break;
    case 3:
    case 7:
        func_800183E0(&D_sc04_016_801A1690);
        break;
    }
}

void func_sc04_016_8017F140(u8 *o) {
    s16 i;

    for (i = 0; i < 2; i++) {
        func_sc04_016_8017DE80(o, (s16)(AF(o, u16, 0x100) + ((i << 16) >> 6)));
    }
    AF(o, u16, 0x100) += 0xE3;
}

void func_sc04_016_8017F1BC(void) {
}

void func_sc04_016_8017F1C4(u8 *o) {
    struct_8_4 v;
    struct_8_4 w;

    v.field_0 = -0xF8;
    v.field_2 = -0x222;
    v.field_4 = 0x60;
    func_800D20C0(&v, &w, 6);
    AF(o, s16, 6) = v.field_0;
    AF(o, s16, 0xA) = v.field_2;
    AF(o, s16, 0xE) = v.field_4;
    if (--AF(o, s32, 0x1C) != 0) {
        D_sc04_016_801A6B00 = D_sc04_016_801A6B02 -= 2;
        D_sc04_016_801A6B01 -= 2;
        AF(AF(o, u8 *, 0x20), s16, 0x18) -= 0x99;
        AF(AF(o, u8 *, 0x20), s16, 0x1A) -= 0xCC;
    } else {
        func_8012C218(o);
    }
}

void func_sc04_016_8017F2AC(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0x78) {
        if (func_sc04_016_8017E6E0() == 0) {
            func_sc04_016_8017DF8C((s32) arg0);
        }
        func_sc04_016_8017E26C((s32) arg0);
        return;
    }
    func_sc04_016_8017EA74();
    func_8012C218((s32) arg0);
}

void func_sc04_016_8017F320(u8 *arg0) {
    D_sc04_016_801A35AC[AF(arg0, u16, 2)]();
}

void func_sc04_016_8017F35C(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_8001C214(temp_v0, D_sc04_016_801A35B4[AF(arg0, s16, 0x70)]);
        func_8001D0E8(temp_v0, 0x7FFF, 0x7FFF);
        AF(arg0, s16, 0xFC) = 0;
        AF(arg0, s32, 0x14) = (s32) AF(arg0, s32, 8);
        func_8012AD50((s32) arg0);
        return;
    }
    func_8012C098((s32) arg0);
}

void func_sc04_016_8017F3EC(u8 *arg0) {
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

void func_sc04_016_8017F464(u8 *arg0) {
    D_sc04_016_801A35BC[AF(arg0, u16, 2)]();
}

void func_sc04_016_8017F4A0(u8 *o) {
    s32 p;
    u8 *d;
    p = func_8012C194();
    d = &D_sc04_016_801AC130;
    AF(o, s32, 0x20) = p;
    if (p != 0) {
        func_8001CD9C(p, d);
        AF(p, s16, 0x1A) = 0x3000;
        AF(p, s32, 4) |= 0x50000000;
        func_800233CC(d, 0x80);
        func_sc04_016_8017F5D0((s32)o, (s32)d);
        AF(o, s16, 0x100) = 0;
        func_8012AD50((s32)o);
        return;
    }
    func_8012C098((s32)o);
}

void func_sc04_016_8017F544(u8 *o) {
    s32 i;
    func_sc04_016_8017F5D0((s32)o, (s32)&D_sc04_016_801AC130);
    if (D_800B99DA & 1) {
        for (i = 0; i < 4; i++) {
            func_sc04_016_8017F62C(o, (s16)(AF(o, u16, 0x100) + (i << 10)));
        }
        AF(o, u16, 0x100) += 0xE3;
    }
}

s32 func_sc04_016_8017F5D0(s32 arg0, s32 arg1) {
    s32 temp_v0;
    u16 temp_v0_2;

    temp_v0_2 = AF(arg0, u16, 0xFC) + 0x2D;
    AF(arg0, u16, 0xFC) = temp_v0_2;
    temp_v0 = ((rsin((s32) (s16) temp_v0_2) / 64) + 0x80) << 8;
    AF(arg1, s32, 0) = temp_v0;
    AF(arg1, s32, 4) = 0;
    return temp_v0;
}

void func_sc04_016_8017F62C(u8 *o, s32 n0) {
    s32 vel[4];
    struct_8_4 v;
    s16 n = n0;
    s32 r1, r2, dy, r;
    func_800139C8(n, &D_sc04_016_801A35C4, &v);
    v.field_0 += AF(o, u16, 6);
    r1 = rand();
    r2 = rand();
    dy = (r1 & 0xF) - 0xC0;
    v.field_2 += AF(o, u16, 0xA) - dy - (r2 & 0xF);
    v.field_4 += AF(o, u16, 0xE);
    v.field_6 = 8;
    func_8001382C(n, &D_sc04_016_801A35CC, vel);
    vel[3] = D_sc04_016_801A35D8;
    r = func_sc04_016_8017FED4((s32)&v, (s32)vel, D_sc04_016_801A35DC);
    if (r != 0) {
        AF(AF(r, u8 *, 0x20), s16, 0x18) = 0x200;
    }
}

void func_sc04_016_8017F72C(u8 *arg0) {
    s32 temp_v0;
    void *temp_a0;

    if (AF(arg0, u16, 2) == 0) {
        func_sc04_016_8017F82C();
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
    func_sc04_016_8017F8A8((s32) AF(arg0, void *, 0x20));
}

void func_sc04_016_8017F82C(u8 *o) {
    u8 *p = AF(o, u8 *, 0x20);
    AF(p, s16, 2) = 0xB;
    AF(p, s32, 4) |= 0x50000000;
    if (AF(p, s16, 0x18) == 0) AF(p, s16, 0x18) = 0x600;
    AF(p, s16, 0x14) = rand() & 0xFF0;
    AF(o, s16, 0x30) = 0x100;
    AF(o, s16, 2)++;
}

void func_sc04_016_8017F8A8(u8 *arg0) {
    struct_4_2 sxy;
    struct_20_4 m;
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

void func_sc04_016_8017FD48(u16 *cnt, s16 *pos, s16 *rng, s32 sh, s32 arg4) {
    struct_8_4 v;
    u8 *r;
    if (!(*cnt & (s16)((1 << sh) - 1))) {
        v.field_0 = pos[0] + rand() % (rng[0] * 2) - rng[0];
        v.field_2 = pos[1] + rand() % (rng[1] * 2) - rng[1];
        v.field_4 = pos[2] + rand() % (rng[2] * 2) - rng[2];
        v.field_6 = rng[3];
        r = func_sc04_016_8017FF08(&v, 0, arg4);
        if (r != 0) {
            AF(AF(r, u8 *, 0x20), s16, 0x18) = pos[3];
        }
    }
    (*cnt)++;
}

s32 func_sc04_016_8017FED4(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = func_sc04_016_8017FF08(arg0, arg1, arg2);
    if (temp_v0 != 0) {
        AF(temp_v0, s16, 0x32) = 1;
    }
    return temp_v0;
}

s32 func_sc04_016_8017FF08(s32 arg0, s32 arg1, s32 arg2) {
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
