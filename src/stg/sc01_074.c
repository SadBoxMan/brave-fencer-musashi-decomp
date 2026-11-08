#include "common.h"
#include "gte.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_4;
typedef struct { s16 field_0[6]; } struct_C_3;
extern void (*D_sc01_074_80182138[])();
typedef struct { s16 field_0, field_2; } struct_4_2;
typedef struct { struct_4_2 field_0; s16 field_4; s16 field_6; struct_4_2 field_8; s32 field_C; s32 field_10; s32 field_14; s32 field_18; } struct_1C;
typedef struct { s32 field_0, field_4, field_8; } struct_C_4;
void func_sc01_074_8017D3FC(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc01_074_80182140[])();
extern void func_800D1EBC();
extern void (*D_sc01_074_8018214C[])();
extern void (*D_sc01_074_80182158[])();
void func_sc01_074_8017D6D4(void);
extern void (*D_sc01_074_80182160[])();
void func_sc01_074_8017D964(void);
extern u8 D_sc01_074_80182194;
extern void func_8016EE40();
extern u8 D_sc01_074_801821A0;
extern u8 D_sc01_074_801821B4;
extern void (*D_sc01_074_801821E8[])();
extern u8 D_sc01_074_801821D0;
extern void (*D_sc01_074_80182210[])();
extern u8 D_sc01_074_80182208;
extern void func_sc01_074_8017DD1C();
extern void (*D_sc01_074_8018222C[])();
extern void (*D_sc01_074_8018223C[])();
extern void (*D_sc01_074_80182254[])();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();


extern void (*D_sc01_074_801821BC[])();
extern void func_sc01_074_8017D2F8();
extern void func_8014708C();
extern void func_801472C8();
extern void func_sc01_074_8017D98C();
extern void func_80171990();
extern void func_sc01_074_8017DB04();
extern void func_8012AD50();

extern void func_80171928();
extern u8 D_sc01_074_80182050;
extern void func_800D1724();

extern u8 D_sc01_074_80182168;
extern void func_80154274();
extern void func_80146DE8();
extern void func_80147324();
extern u8 D_sc01_074_8018202C;
extern void func_80147AD4();
extern void func_801473EC();
extern void func_sc01_074_8017D364();
extern u8 D_sc01_074_80182200[];
extern s32 func_sc01_074_8017D918();
extern u8 D_sc01_074_801821D8;
extern s32 func_8012E544();
extern s32 func_80015954();
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
extern u8 D_sc01_074_80195D14;
extern s32 func_8012C1B8();
extern void func_8001C214();


typedef struct { s16 field_0[3][3]; s16 field_12; s32 field_14[3]; } struct_20_3;
typedef struct { u32 field_0; u32 field_4; u32 field_8; u32 field_C; u32 *field_10; } struct_14_2;
typedef struct { s32 field_0; s32 field_4; s32 field_8; s32 field_C; s32 field_10; s32 field_14; s32 field_18; } struct_1C_2;
extern u8 *D_800A5E60;
extern u16 D_800B9A02;
extern u32 D_800A6610[2][0x1000];

void func_sc01_074_8017BE9C(u8 *obj) {
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

void func_sc01_074_8017CD7C(u8 *arg0) {
    D_sc01_074_80182138[AF(arg0, u8, 0x15)]();
}

s32 func_sc01_074_8017CDB8(u8 *arg0) {
    func_sc01_074_8017D3FC();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc01_074_8017CDFC(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc01_074_8017CE20(u8 *arg0) {
    D_sc01_074_80182140[AF(arg0, u8, 0x15)]();
}

s32 func_sc01_074_8017CE5C(u8 *arg0) {
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc01_074_8017CE78(u8 *arg0) {
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

void func_sc01_074_8017CEF4(void) {
    func_800D1EBC();
}

void func_sc01_074_8017CF14(u8 *arg0) {
    D_sc01_074_8018214C[AF(arg0, u8, 0x15)]();
}

s32 func_sc01_074_8017CF50(u8 *arg0) {
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
extern void func_sc01_074_8017DE88();
extern s32 func_80012C6C();
extern s32 func_80012ABC();
extern void func_8012F14C();

extern s32 D_sc01_074_80182244;
extern s32 D_sc01_074_80182248;
extern s32 D_sc01_074_8018224C;
extern s32 D_sc01_074_80182250;
extern void func_80016ED4();
typedef struct { struct_8_7 field_0[4]; s32 field_20[4]; s32 field_30; s32 field_34; u8 field_38; } struct_3C;

extern s16 D_sc01_074_801821DA;
extern s16 D_sc01_074_801821DC;
extern s16 D_sc01_074_801821E0;
extern s16 D_sc01_074_801821E2;
extern s16 D_sc01_074_801821E4;
extern s32 func_8012EF70();
void func_sc01_074_8017E3E0(struct_8_7 *a, struct_8_7 *b, struct_8_7 *c, struct_8_7 *d);

extern void func_800139C8();
extern void func_80013E94();
extern u16 D_800B99DA;
extern void func_80146A6C();
extern u8 D_sc01_074_801821C8;

extern u8 D_80078EAE;
extern s32 func_80029504();
extern u8 D_sc01_074_801820A8;
extern u8 D_sc01_074_801820CC;
extern u8 D_sc01_074_801820F0;
extern u8 D_sc01_074_80182114;
extern struct_8_4 D_80126940;
extern struct_8_4 D_801274E8;

u8 *func_sc01_074_8017CFC4(void) {
    s32 v = func_80029504();
    if (v >= 0x384) {
        return &D_sc01_074_80182114;
    }
    if (v >= 0x258) {
        return &D_sc01_074_801820F0;
    }
    if (v >= 0xC8) {
        return &D_sc01_074_801820CC;
    }
    return &D_sc01_074_801820A8;
}

void func_sc01_074_8017D034(u8 *arg0) {
    D_sc01_074_80182158[AF(arg0, u8, 0x15)]();
}

s32 func_sc01_074_8017D070(u8 *arg0) {
    func_sc01_074_8017D6D4();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

void func_sc01_074_8017D0B4(u8 *arg0) {
    D_sc01_074_80182160[AF(arg0, u8, 0x15)]();
}

s32 func_sc01_074_8017D0F0(u8 *arg0) {
    func_sc01_074_8017D964();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

void func_sc01_074_8017D134(void) {
    func_8016EE40((s32) &D_sc01_074_80182194, 0x01000000);
}

void func_sc01_074_8017D15C(void) {
    func_8016EE40((s32) &D_sc01_074_801821A0, 0x01000000);
}

void func_sc01_074_8017D184(u8 *arg0) {
    D_sc01_074_801821BC[AF(arg0, u8, 0x216)]();
    func_sc01_074_8017D2F8((s32) arg0, (s32) AF(arg0, s16, 0x20C));
}

void func_sc01_074_8017D1D8(s32 arg0) {
    func_8014706C();
    func_80154274(arg0, (s32) &D_sc01_074_80182168);
    func_80146DE8(arg0, 0, 0x20000, 0);
    AF(arg0, s32, 0x200) = 0x40;
    AF(arg0, s16, 0x20C) = 1;
    func_80147324(0xBCA);
    func_80171990(arg0);
}

void func_sc01_074_8017D244(s32 arg0) {
    s32 temp_v0;

    func_80147AD4(arg0, 0, 0, -0x8000);
    func_801473EC(arg0);
    temp_v0 = AF(arg0, s32, 0x200) - 1;
    AF(arg0, s32, 0x200) = temp_v0;
    if (temp_v0 == -1) {
        func_800D1724((s32) &D_sc01_074_8018202C);
        func_80171990(arg0);
    }
    func_sc01_074_8017D364(arg0);
}

void func_sc01_074_8017D2B4(s32 arg0) {
    func_80147AD4(arg0, 0, 0, -0x8000);
    func_801473EC(arg0);
    func_sc01_074_8017D364(arg0);
}

void func_sc01_074_8017D2F8(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_8012E544(0x195);
    if (temp_v0 != 0) {
        AF(temp_v0, s32, 4) = (s32) AF(arg0, s32, 4);
        AF(temp_v0, s32, 8) = (s32) (AF(arg0, s32, 8) + 0xFFC00000);
        AF(temp_v0, s32, 0xC) = (s32) AF(arg0, s32, 0xC);
        AF(temp_v0, s16, 0xFC) = (s16) arg1;
    }
}

void func_sc01_074_8017D364(u8 *o) {
    struct_8_4 v;
    u32 c;
    func_800139C8(AF(AF(o, u8 *, 0x20), s16, 0x12), &D_sc01_074_801821C8, &v);
    func_80013E94(&v, &c);
    c |= 0x80000000;
    if (!(D_800B99DA & 3)) {
        func_80146A6C(6, o, AF(o, s16, 6), (s16)(AF(o, u16, 0xA) - 0x40), AF(o, s16, 0xE), c, 0);
    }
}

void func_sc01_074_8017D3FC(void) {
    func_8016EE40((s32) &D_sc01_074_801821B4, 0x01000000);
}

void func_sc01_074_8017D424(u8 *arg0) {
    D_sc01_074_801821E8[AF(arg0, u8, 0x216)]();
}

void func_sc01_074_8017D460(s32 arg0) {
    func_8014706C(arg0);
    func_8014708C(arg0);
    func_801472C8(arg0);
    AF(arg0, s32, 0x200) = 0x316;
    AF(arg0, s32, 0x204) = 0;
    AF(arg0, s16, 0x20C) = 1;
    func_sc01_074_8017D98C(arg0, 1, AF(arg0, s32, 0x200), 0);
    AF(arg0, s16, 0x20E) = 0x1E;
    func_80171990(arg0);
}

void func_sc01_074_8017D4D0(u8 *arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x20E) - 1;
    AF(arg0, u16, 0x20E) = temp_v0;
    if ((s16) temp_v0 == -1) {
        func_8002D4C8(0xBE8, 0);
        AF(arg0, u16, 0x20E) = 0U;
        func_80171990((s32) arg0);
    }
}

void func_sc01_074_8017D528(u8 *arg0) {
    u16 temp_v0;
    u8 temp_s1;

    temp_v0 = AF(arg0, u16, 0x20E);
    AF(arg0, u16, 0x20E) = (u16) (temp_v0 + 1);
    temp_s1 = D_sc01_074_80182200[(s16) temp_v0];
    if (temp_s1 == 0) {
        func_8002D4C8(0xBE7, 0);
        func_80171990((s32) arg0);
    }
    func_sc01_074_8017D98C((s32) arg0, (s32) AF(arg0, s16, 0x20C), AF(arg0, s32, 0x200), (s32) temp_s1);
}

void func_sc01_074_8017D5A8(u8 *arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = AF(arg0, s32, 0x204) + 0x4000;
    AF(arg0, s32, 0x204) = temp_v0;
    if (temp_v0 > 0xA0000) {
        AF(arg0, s32, 0x204) = 0xA0000;
    }
    temp_v0_2 = AF(arg0, s32, 0x200) - AF(arg0, s16, 0x206);
    AF(arg0, s32, 0x200) = temp_v0_2;
    if (temp_v0_2 < 0x259) {
        func_80171990((s32) arg0, arg1);
    }
    func_sc01_074_8017D98C((s32) arg0, (s32) AF(arg0, s16, 0x20C), AF(arg0, s32, 0x200), 0);
    func_sc01_074_8017DB04((s32) arg0, 0);
}

extern u8 D_sc01_074_80182074;
extern u8 D_sc01_074_80182008;
extern u8 D_sc01_074_80182224;
extern struct_8_4 D_sc01_074_80182234;
extern struct_8_7 D_sc01_074_8019A8B0;
extern struct_8_7 D_sc01_074_8019A8B8;
extern void func_80015978();
void func_sc01_074_8017E158(struct_8_7 *a, struct_8_7 *b);

void func_sc01_074_8017D634(u8 *o) {
    s32 v = func_80029504();

    AF(o, s32, 0x200) -= 10;
    if (AF(o, s32, 0x200) < 0x6F) {
        if (v == 0x488) {
            func_800D1724(&D_sc01_074_80182074);
        } else {
            func_800D1724(&D_sc01_074_80182008);
        }
        func_80171990(o);
    }
    func_sc01_074_8017D98C(o, AF(o, s16, 0x20C), AF(o, s32, 0x200), 0);
    func_sc01_074_8017DB04(o, 0);
}

void func_sc01_074_8017D6CC(void) {
}

void func_sc01_074_8017D6D4(void) {
    func_8016EE40((s32) &D_sc01_074_801821D0, 0x01000000);
}

void func_sc01_074_8017D6FC(u8 *arg0) {
    D_sc01_074_80182210[AF(arg0, u8, 0x216)]();
}

void func_sc01_074_8017D738(s32 arg0) {
    func_8014706C();
    func_8014708C(arg0);
    func_801472C8(arg0);
    AF(arg0, s32, 0x200) = 0x190;
    AF(arg0, s16, 0x20C) = 1;
    func_sc01_074_8017D98C(arg0, 1, AF(arg0, s32, 0x200), 0);
    func_80147324(0xC26);
    func_80171990(arg0);
}

void func_sc01_074_8017D7A4(u8 *arg0) {
    s32 temp_v0;

    func_sc01_074_8017D98C((s32) arg0, (s32) AF(arg0, s16, 0x20C), AF(arg0, s32, 0x200), 0);
    func_sc01_074_8017DB04((s32) arg0, 0);
    temp_v0 = AF(arg0, s32, 0x200) + 0xA;
    AF(arg0, s32, 0x200) = temp_v0;
    if (temp_v0 >= 0x258) {
        AF(arg0, s32, 0x204) = 0xA0000;
        func_80171990((s32) arg0);
    }
}

void func_sc01_074_8017D80C(u8 *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    func_sc01_074_8017D98C((s32) arg0, (s32) AF(arg0, s16, 0x20C), AF(arg0, s32, 0x200), 0);
    func_sc01_074_8017DB04((s32) arg0, 0);
    temp_v1 = AF(arg0, s32, 0x204) - 0x4000;
    AF(arg0, s32, 0x204) = temp_v1;
    if (temp_v1 <= 0xFFFF) {
        AF(arg0, s32, 0x204) = 0x10000;
    }
    temp_v0 = AF(arg0, s32, 0x200) + AF(arg0, s16, 0x206);
    AF(arg0, s32, 0x200) = temp_v0;
    if (temp_v0 >= 0x316) {
        AF(arg0, s32, 0x200) = 0x1E;
        func_sc01_074_8017D918((s32) arg0);
        func_80147324(0xC25);
        func_80171990((s32) arg0);
    }
}

void func_sc01_074_8017D8A8(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x200) - 1;
    AF(arg0, s32, 0x200) = temp_v0;
    if (temp_v0 == -1) {
        func_80171990((s32) arg0);
    }
}

void func_sc01_074_8017D8DC(s32 arg0) {
    func_800D1724((s32) &D_sc01_074_80182050);
    func_80171928(arg0);
}

s32 func_sc01_074_8017D918(s32 arg0) {
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = func_8012E544(0x19C);
    if (temp_v0 != 0) {
        AF(temp_v0, s16, 0xFC) = 0;
    }
    var_v0 = func_8012E544(0x29A);
    if (var_v0 != 0) {
        var_v0 = func_80015954((s32) &D_sc01_074_801821D8, var_v0 + 4);
    }
    return var_v0;
}

void func_sc01_074_8017D964(void) {
    func_8016EE40((s32) &D_sc01_074_80182208, 0x01000000);
}

void func_sc01_074_8017D98C(u8 *o, s32 a1, s32 t, s32 dy) {
    struct_8_4 sv;
    s32 p;

    sv.field_0 = D_sc01_074_801821E0 + (AF(&D_sc01_074_801821D8, s16, 0) - D_sc01_074_801821E0) * t / 800;
    sv.field_2 = D_sc01_074_801821E2 + (D_sc01_074_801821DA - D_sc01_074_801821E2) * t / 800;
    sv.field_4 = D_sc01_074_801821E4 + (D_sc01_074_801821DC - D_sc01_074_801821E4) * t / 800;
    sv.field_2 += dy;
    func_80015954(&sv, o + 4);
    p = func_8012E544(0x195);
    if (p != 0) {
        AF(p, s32, 4) = AF(o, s32, 4);
        AF(p, s32, 8) = AF(o, s32, 8);
        AF(p, s32, 0xC) = AF(o, s32, 0xC);
        AF(p, s16, 0xFC) = a1;
    }
    p = func_8012E544(0x285);
    if (p != 0) {
        AF(p, s32, 4) = AF(o, s32, 4);
        AF(p, s32, 8) = AF(o, s32, 8);
        AF(p, s32, 0xC) = AF(o, s32, 0xC);
    }
}

void func_sc01_074_8017DB04(u8 *o, s32 a1) {
    struct_8_4 v;
    u32 c;
    func_800139C8((s16)(AF(AF(o, u8 *, 0x20), u16, 0x12) + a1), &D_sc01_074_80182224, &v);
    func_80013E94(&v, &c);
    c |= 0x80000000;
    if (!(D_800B99DA & 3)) {
        func_80146A6C(6, o, AF(o, s16, 6), AF(o, s16, 0xA), AF(o, s16, 0xE), c, 0);
    }
}

void func_sc01_074_8017DBA0(void) {
    D_80126954 = 0x12C;
    D_8012695C = 0x7D0;
    D_80126968 = 0x18E;
    D_8012696A = 0xDE0;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x19;
    D_8012697A = 0;
    func_8012A018((s32) func_sc01_074_8017DD1C, 0);
    func_8012A094((s32) &D_80126948);
    func_sc01_074_8017DD1C((s32) &D_80126948);
}

extern s32 D_801269E4;

void func_sc01_074_8017DC3C(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x384;
    D_80126968 = 0;
    D_8012696A = -0xE3;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0x40;
    D_8012697A = 0;
    func_8012A018((s32) func_sc01_074_8017DD1C, 1);
    func_8012A094((s32) &D_80126948);
    D_801269E4 = 0x5A;
    func_sc01_074_8017DD1C((s32) &D_80126948);
    D_801274E8 = D_80126940;
    D_801269E4 = 0x5A;
}

void func_sc01_074_8017DD1C(s32 arg0) {
    D_sc01_074_8018222C[AF(arg0, u8, 4)]();
}

void func_sc01_074_8017DD58(u8 *o) {
    s16 t;

    D_80126940 = D_sc01_074_80182234;
    t = AF(o, u16, 0x20) - 5;
    AF(o, s16, 0x20) = t;
    AF(o, s16, 0x18) = t;
    if (t < 0) {
        AF(o, s16, 0x20) = 0;
        AF(o, s16, 0x18) = 0;
    }
    t = AF(o, u16, 0x22) + 6;
    AF(o, s16, 0x22) = t;
    AF(o, s16, 0x1A) = t;
    if (t > 0xFE0) {
        AF(o, s16, 0x22) = 0xFE0;
        AF(o, s16, 0x1A) = 0xFE0;
    }
    func_sc01_074_8017DE88(o, &D_80126940);
}

void func_sc01_074_8017DE0C(u8 *o) {
    if (AF(o, s32, 0x9C) != 0) {
        D_801274E8 = D_80126940;
        AF(o, s32, 0x9C)--;
    }
    func_sc01_074_8017DE88(o, &D_801274E8);
}

void func_sc01_074_8017DE88(u8 *arg0, u8 *arg1) {
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

void func_sc01_074_8017E020(u8 *arg0) {
    D_sc01_074_8018223C[AF(arg0, u16, 2)]();
}

void func_sc01_074_8017E05C(u8 *arg0) {
    AF(arg0, s16, 0xFC) = 0;
    func_8012AD50((s32) arg0);
}

void func_sc01_074_8017E07C(u8 *o) {
    struct_8_7 a = D_sc01_074_8019A8B0;
    struct_8_7 b = D_sc01_074_8019A8B8;
    struct_8_7 c;

    if (AF(o, s16, 0xFC) == 0) {
        func_sc01_074_8017E158(&a, &b);
        return;
    }
    func_80015978(o + 4, &c);
    if (a.field_4 > c.field_4) {
        func_sc01_074_8017E158(&a, &b);
    } else {
        func_sc01_074_8017E158(&a, &c);
        func_sc01_074_8017E158(&c, &b);
    }
}

void func_sc01_074_8017E158(struct_8_7 *a, struct_8_7 *b) {
    struct_8_7 cur;
    struct_8_7 nxt;
    struct_8_7 pa;
    struct_8_7 pb;
    struct_8_7 sa;
    struct_8_7 sb;
    struct_8_7 sc;
    struct_8_7 sd;
    s32 more;

    more = 1;
    nxt = *a;
    do {
        cur = nxt;
        nxt.field_4 += 0x40;
        nxt.field_2 = a->field_2 + (b->field_2 - a->field_2) * (nxt.field_4 - a->field_4) / (b->field_4 - a->field_4);
        if (nxt.field_4 >= b->field_4) {
            nxt.field_4 = b->field_4;
            more = 0;
        }
        pa = cur;
        pa.field_2 -= 4;
        pb = nxt;
        pb.field_2 -= 4;
        if ((func_8012EF70(&pa, &sa) & ~0x1000) == 0 && (func_8012EF70(&pb, &sb) & ~0x1000) == 0) {
            pa = cur;
            pa.field_2 += 4;
            pb = nxt;
            pb.field_2 += 4;
            if ((func_8012EF70(&pa, &sc) & ~0x1000) == 0 && (func_8012EF70(&pb, &sd) & ~0x1000) == 0) {
                func_sc01_074_8017E3E0(&sa, &sb, &sc, &sd);
            }
        }
    } while (more);
}

void func_sc01_074_8017E3E0(struct_8_7 *a, struct_8_7 *b, struct_8_7 *c, struct_8_7 *d) {
    struct_3C q;

    q.field_0[0] = *a;
    q.field_0[1] = *b;
    q.field_0[2] = *c;
    q.field_0[3] = *d;
    q.field_30 = 0x808080;
    q.field_34 = 0;
    q.field_38 = 0x50;
    q.field_20[0] = D_sc01_074_80182244;
    q.field_20[1] = D_sc01_074_80182248;
    q.field_20[2] = D_sc01_074_8018224C;
    q.field_20[3] = D_sc01_074_80182250;
    func_80016ED4(&q);
}

void func_sc01_074_8017E4C8(u8 *arg0) {
    D_sc01_074_80182254[AF(arg0, u16, 2)]();
}

void func_sc01_074_8017E504(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_8001C214(temp_v0, (s32) &D_sc01_074_80195D14);
        func_8012AD50((s32) arg0);
    }
}

void func_sc01_074_8017E54C(void) {
}

s32 func_sc01_074_8017E554(s32 a) {
    if (a == 10) {
        return 0x32;
    }
    if (a == 0x488) {
        return 0x89;
    }
    if ((u32)(a - 0x384) < 0x6E) {
        return 0x65;
    }
    if (D_80078EAE == 1) {
        return 0xF;
    }
    return 0x10;
}
