#include "common.h"
#include "gte.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc07_006_8017BE9C(void) {
}

void func_sc07_006_8017BEA4(void) {
}

void func_sc07_006_8017BEAC(void) {
}

void func_sc07_006_8017BEB4(void) {
}

typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_4;
typedef struct { s16 field_0[6]; } struct_C_3;
extern void (*D_sc07_006_8018DE48[])();
typedef struct { s16 field_0, field_2; } struct_4_2;
typedef struct { struct_4_2 field_0; s16 field_4; s16 field_6; struct_4_2 field_8; s32 field_C; s32 field_10; s32 field_14; s32 field_18; } struct_1C;
typedef struct { s32 field_0, field_4, field_8; } struct_C_4;
void func_sc07_006_8017CF54(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc07_006_8018DE50[])();
extern void func_800D1EBC();
extern u8 D_sc07_006_8018DE5C;
extern void func_8016EE40();
extern u8 D_sc07_006_8018DE60;
extern s32 func_sc07_006_8017D0F4();
extern void (*D_sc07_006_8018DF04[])();
extern void (*D_sc07_006_8018E274[])();
extern void (*D_sc07_006_8018EB2C[])();
extern void (*D_sc07_006_8018EB44[])();
extern void (*D_sc07_006_8018EB54[])();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

extern u8 D_sc07_006_8018DE1C;
extern void func_800D1724();

extern void func_8012AD50();

extern void func_8002931C();
extern u8 D_80126948;
extern s32 D_80126954;
extern s32 D_8012695C;
extern s16 D_80126968;
extern s16 D_8012696A;
extern s16 D_8012696C;
extern s16 D_80126976;
extern s16 D_80126978;
extern s16 D_8012697A;
extern s32 func_8012A018();
extern s32 func_8012A094();
extern void func_sc07_006_8017D040();

extern u8 D_sc07_006_8018DF10;
extern s32 func_80143C74();
extern void func_80128EA8();
extern s32 func_8012CBCC();
extern void func_8012C218();

extern s32 D_sc07_006_801F61C0;
extern void (*D_sc07_006_8018E940[])();

extern u8 D_sc07_006_801F6140;
extern s8 D_sc07_006_801F6141;
extern s8 D_sc07_006_801F6142;
extern s8 D_sc07_006_801F6144;
extern s8 D_sc07_006_801F6145;
extern s8 D_sc07_006_801F6146;
extern s8 D_sc07_006_801F6180;
extern s8 D_sc07_006_801F6181;
extern s8 D_sc07_006_801F6182;
extern s8 D_sc07_006_801F6184;
extern s8 D_sc07_006_801F6185;
extern s8 D_sc07_006_801F6186;

typedef struct { s16 field_0[3][3]; s16 field_12; s32 field_14[3]; } struct_20_3;
typedef struct { u32 field_0; u32 field_4; u32 field_8; u32 field_C; u32 *field_10; } struct_14_2;
typedef struct { s32 field_0; s32 field_4; s32 field_8; s32 field_C; s32 field_10; s32 field_14; s32 field_18; } struct_1C_2;
extern u8 *D_800A5E60;
extern u16 D_800B9A02;
extern u32 D_800A6610[2][0x1000];

void func_sc07_006_8017BEBC(u8 *obj) {
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

void func_sc07_006_8017CD9C(void) {
    func_8002931C(0x04740000);
}

void func_sc07_006_8017CDBC(u8 *arg0) {
    D_sc07_006_8018DE48[AF(arg0, u8, 0x15)]();
}

s32 func_sc07_006_8017CDF8(u8 *arg0) {
    func_sc07_006_8017CF54();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc07_006_8017CE3C(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc07_006_8017CE60(u8 *arg0) {
    D_sc07_006_8018DE50[AF(arg0, u8, 0x15)]();
}

s32 func_sc07_006_8017CE9C(u8 *arg0) {
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc07_006_8017CEB8(u8 *arg0) {
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

void func_sc07_006_8017CF34(void) {
    func_800D1EBC();
}

void func_sc07_006_8017CF54(void) {
    func_8016EE40((s32) &D_sc07_006_8018DE5C, 0x01000000);
}

void func_sc07_006_8017CF7C(void) {
    func_8016EE40((s32) &D_sc07_006_8018DE60, 0x01000000);
}

void func_sc07_006_8017CFA4(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x4B0;
    D_80126968 = 0x155;
    D_8012696A = 0x800;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x20;
    D_8012697A = 0;
    func_8012A018((s32) func_sc07_006_8017D0F4, 0);
    func_8012A094((s32) &D_80126948);
    func_sc07_006_8017D0F4((s32) &D_80126948);
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
extern u8 D_sc07_006_8018DF0C[];
extern s32 func_80148800();
extern void func_sc07_006_8017D4E4();
extern s32 func_80012C6C();
extern s32 func_80012ABC();
extern void func_8012F14C();

extern u8 *D_sc07_006_801BF508; extern u8 *D_sc07_006_801BF50C; extern u8 *D_sc07_006_801BF510; extern u8 *D_sc07_006_801BF514;
extern struct_8_4 *D_sc07_006_801C1E40; extern struct_8_4 *D_sc07_006_801C1E44; extern struct_8_4 *D_sc07_006_801C1E48; extern struct_8_4 *D_sc07_006_801C1E4C; extern struct_8_4 *D_sc07_006_801C1E50; extern struct_8_4 *D_sc07_006_801C1E54; extern struct_8_4 *D_sc07_006_801C1E58;
static inline void func_sc07_006_8017DC1C_inline(s32 t, u8 *p, struct_8_4 *a, struct_8_4 *b) {
    struct_8_4 *d, *s, *e;
    s32 n;
    if (AF(p, s32, 4) == 1) {
        d = AF(p, struct_8_4 *, 0xC);
    } else {
        d = (struct_8_4 *)(p + (((AF(p, u32, 0xC) >> 2) << 2) + 0xC));
    }
    n = AF(p, s32, 0x10);
    s = a;
    e = b;
    for (; n != 0; n--) {
        d->field_0 = s->field_0 + (((e->field_0 - s->field_0) * t) >> 12);
        d->field_2 = s->field_2 + (((e->field_2 - s->field_2) * t) >> 12);
        d->field_4 = s->field_4 + (((e->field_4 - s->field_4) * t) >> 12);
        d++;
        s++;
        e++;
    }
}
extern u8 D_sc07_006_8018DF60; extern u8 D_sc07_006_8018DF68; extern u8 D_sc07_006_8018DF70; extern u8 D_sc07_006_8018DF78; extern u8 D_sc07_006_8018DF80;
extern u16 D_sc07_006_801F60A0[]; extern u16 D_sc07_006_801F60C0[]; extern u16 D_sc07_006_801F60E0[]; extern u16 D_sc07_006_801F6100[]; extern u16 D_sc07_006_801F6120[];
extern u16 D_sc07_006_801CAC68[]; extern u16 D_sc07_006_801CAC88[]; extern u16 D_sc07_006_801CACA8[]; extern u16 D_sc07_006_801CACC8[]; extern u16 D_sc07_006_801CACE8[]; extern u16 D_sc07_006_801CAD08[]; extern u16 D_sc07_006_801CAD28[]; extern u16 D_sc07_006_801CAD48[]; extern u16 D_sc07_006_801CAD88[]; extern u16 D_sc07_006_801CADA8[];
static inline void func_sc07_006_8017FDF8_inline(s32 t, u16 *d, u16 *a, u16 *b) {
    s32 k, i, m, r, g, c;
    k = (t - 0x800) * 2;
    if (k < 0) {
        k = 0;
    }
    for (i = 0; i < 16; i++) {
        if (k >= 0x800) {
            m = *b & 0x8000;
        } else {
            m = *a & 0x8000;
        }
        r = ((*a & 0x1F) + ((((*b & 0x1F) - (*a & 0x1F)) * k) >> 12)) & 0x1F;
        g = ((*a & 0x3E0) + ((((*b & 0x3E0) - (*a & 0x3E0)) * k) >> 12)) & 0x3E0;
        c = ((*a & 0x7C00) + ((((*b & 0x7C00) - (*a & 0x7C00)) * k) >> 12)) & 0x7C00;
        *d = m | r | g | c;
        a++;
        b++;
        d++;
    }
}
extern u8 *D_sc07_006_801BF554; extern u8 *D_sc07_006_801BF558; extern u8 *D_sc07_006_801BF55C;

extern u8 D_sc07_006_8018E950;
extern u8 D_sc07_006_8018E968;
extern u8 D_sc07_006_801BF710;
extern u8 D_sc07_006_801BFCF4;
extern u8 D_sc07_006_801BF718;
extern u8 D_sc07_006_801BFCFC;
extern u8 D_sc07_006_801BF728;
extern u8 D_sc07_006_801BFD04;
extern u8 D_sc07_006_8018E95C;
extern u8 D_sc07_006_8018E970;
extern u8 D_sc07_006_8018E978;
extern u8 D_sc07_006_8018E9D8;
extern u8 D_sc07_006_8018EA20;
extern u8 D_sc07_006_8018EA68;
extern u8 D_sc07_006_8018EAA0;
extern u8 D_sc07_006_8018EAE8;
extern s32 func_8012C1B8();
extern void func_8012CAE4();
extern void func_8001CA1C();
extern void func_8012B23C();
extern void func_8012B2CC();
extern void func_8001C214();
extern void func_8001D0E8();
extern void func_8012B21C();

extern u8 D_sc07_006_8018DFB0;
extern u16 D_sc07_006_8018E254[];
extern void func_sc07_006_80181148();
extern void func_sc07_006_8017DC1C();
extern u8 D_sc07_006_8018E61C;
extern s32 func_8012C354();
extern void func_80143994();
extern u8 *D_sc07_006_801BFCB4;
extern void func_sc07_006_8017F3D4();
extern void func_sc07_006_80182D4C();
extern void func_sc07_006_80182B8C();
extern void func_sc07_006_801826E0();
extern void func_sc07_006_80182268();
extern void func_sc07_006_80182000();
extern void func_sc07_006_80181C74();
extern void func_sc07_006_8017D8A4();
extern u8 *D_sc07_006_801BFCD4;
extern u8 *D_sc07_006_801BFCC4;
extern u8 *D_sc07_006_801BFCBC;
extern u8 D_sc07_006_8018E3A8;
extern u8 D_sc07_006_8018E2DC;
extern u8 D_sc07_006_8018E2E8;
extern u8 D_sc07_006_8018E2F4;
extern u8 D_sc07_006_8018E300;
extern u8 D_sc07_006_8018E27C;
extern u8 D_sc07_006_8018E288;
extern u8 D_sc07_006_8018E294;
extern u8 D_sc07_006_8018E2A0;
extern s32 func_8012913C();
extern void func_800233CC();
extern void func_8001CD50();
static inline void func_sc07_006_80182F3C_inline(u8 *b, u8 *t) {
    func_sc07_006_8017D8A4(b, t, t + 0x30, 0, 1);
}

extern void func_80178970();
extern void func_80178B18();
extern u8 *func_8012C658();
extern void func_801292C8();
extern void func_80016224();
extern u8 D_sc07_006_8018E7A0;
extern u8 D_sc07_006_801F2608;

extern struct_8_4 *D_sc07_006_801C1E40; extern struct_8_4 *D_sc07_006_801C1E44; extern struct_8_4 *D_sc07_006_801C1E48; extern struct_8_4 *D_sc07_006_801C1E50; extern struct_8_4 *D_sc07_006_801C1E54; extern struct_8_4 *D_sc07_006_801C1E58;

extern void func_8012EC04();
extern s32 func_8012CC40();
extern void func_80016A5C();
typedef struct { u8 field_0[0x34]; u16 field_34; } struct_36;
extern u8 D_sc07_006_8018E33C[];
extern u8 *D_sc07_006_801BFCCC;
extern u8 *D_sc07_006_801BFCEC;
extern u8 D_sc07_006_8018E45C[];

extern u8 *D_sc07_006_801F6098;
extern s16 D_801274E8;
extern s16 D_801274EA;
extern s16 D_801274EC;
extern u8 D_sc07_006_8018E4D4[];
extern u8 *D_sc07_006_801BFCE4;
extern u8 D_sc07_006_8018E510[];
extern s16 D_sc07_006_8018EB20[];
extern void func_8012D3B4();

extern u8 *D_sc07_006_801BF5CC;
extern struct_8_4 *D_sc07_006_801C1E14;
extern struct_8_4 *D_sc07_006_801C1E18;

extern u16 D_sc07_006_801CAC28[]; extern u16 D_sc07_006_801CAC48[];
extern u8 D_sc07_006_8018E4B0;
extern u8 *D_sc07_006_801BFCDC[];

extern u8 *D_sc07_006_801BF5B4;
extern u8 *D_sc07_006_801BF5B8;
extern u8 *D_sc07_006_801BF5BC;
extern struct_8_4 *D_sc07_006_801C1E80;
extern struct_8_4 *D_sc07_006_801C1E90;
extern struct_8_4 *D_sc07_006_801C1E84;
extern struct_8_4 *D_sc07_006_801C1E94;
extern struct_8_4 *D_sc07_006_801C1E88;
extern struct_8_4 *D_sc07_006_801C1E98;
extern u8 *D_sc07_006_801BF65C;
extern u8 *D_sc07_006_801BF660;
extern u8 *D_sc07_006_801BF684;
extern struct_8_4 *D_sc07_006_801C1E2C;
extern struct_8_4 *D_sc07_006_801C1E38;
extern struct_8_4 *D_sc07_006_801C1E30;
extern struct_8_4 *D_sc07_006_801C1E3C;
extern struct_8_4 *D_sc07_006_801C1EAC;
extern struct_8_4 *D_sc07_006_801C1E34;
extern u8 *D_sc07_006_801BF6A4;
extern u8 *D_sc07_006_801BF6A8;
extern u8 *D_sc07_006_801BF6AC;
extern struct_8_4 *D_sc07_006_801C1E6C;
extern struct_8_4 *D_sc07_006_801C1E78;
extern struct_8_4 *D_sc07_006_801C1E70;
extern struct_8_4 *D_sc07_006_801C1E7C;
extern struct_8_4 *D_sc07_006_801C1E74;
extern struct_8_4 *D_sc07_006_801C1EB0;
extern u8 D_sc07_006_8018DF88; extern u8 D_sc07_006_8018DF90; extern u8 D_sc07_006_8018DF98; extern u8 D_sc07_006_8018DFA0; extern u8 D_sc07_006_8018DFA8;
extern u16 D_sc07_006_801CAD68[]; extern u16 D_sc07_006_801CADC8[]; extern u16 D_sc07_006_801CADE8[]; extern u16 D_sc07_006_801CAE08[]; extern u16 D_sc07_006_801CAE28[]; extern u16 D_sc07_006_801CAE48[]; extern u16 D_sc07_006_801CAE68[]; extern u16 D_sc07_006_801CAE88[]; extern u16 D_sc07_006_801CAEA8[]; extern u16 D_sc07_006_801CAEC8[];

extern u8 *D_sc07_006_801BF56C;
extern u8 *D_sc07_006_801BF570;
extern u8 *D_sc07_006_801BF574;
extern u8 *D_sc07_006_801BF578;
extern struct_8_4 *D_sc07_006_801C1E8C;

typedef struct { u8 field_0[8]; u16 field_8; s16 field_A; u16 field_C; u8 field_E[0x12]; } struct_20_7;
typedef struct {
    u8 field_0[0xC];
    s32 field_C;
    u8 field_10[4];
    s32 field_14;
    u8 field_18[8];
    s16 field_20;
    s16 field_22;
    s16 field_24;
    u8 field_26[8];
    s16 field_2E;
    s16 field_30;
    s16 field_32;
} struct_34_3;
extern struct_20_7 D_sc07_006_8018DE64[];
extern s32 D_801269E4;
extern s16 D_801269E8;

void func_sc07_006_8017D040(s32 arg0) {
    struct_34_3 *b = (struct_34_3 *) &D_80126948;
    struct_20_7 *p;

    b->field_C = 0x190;
    p = &D_sc07_006_8018DE64[arg0];
    b->field_14 = p->field_A;
    b->field_20 = p->field_C;
    D_sc07_006_801F6098 = (u8 *) p;
    b->field_22 = p->field_8;
    b->field_24 = 0;
    b->field_2E = 0;
    b->field_30 = -0x20;
    b->field_32 = 0;
    func_8012A018((s32) func_sc07_006_8017D0F4, 1);
    func_8012A094((s32) &D_80126948);
    D_801269E4 = 0;
    D_801269E8 = 0;
}

s32 func_sc07_006_8017D0F4(s32 arg0) {
    D_sc07_006_8018DF04[AF(arg0, u8, 4)]();
}

void func_sc07_006_8017D130(u8 *arg0) {
    struct_8_8 v;
    u8 t;

    if (func_80148800((s32) &D_80126B58) & 3) {
        t = (AF(arg0, u8, 5) + 1) & 1;
        AF(arg0, u8, 5) = t;
        AF(arg0, s32, 0x14) = ((s16 *)&D_sc07_006_8018DF0C)[t];
    }
    v = *(struct_8_8 *)&D_80126940;
    func_sc07_006_8017D4E4((s32) arg0, (s32) &v);
}

void func_sc07_006_8017D1D0(u8 *o) {
    u8 *a = D_sc07_006_801F6098;
    struct_8_4 v;

    switch (AF(o, s16, 0xA0)) {
    case 0:
        v.field_0 = AF(a, s16, 0) + (AF(a, s16, 0x10) - AF(a, s16, 0)) * AF(o, s32, 0x9C) / AF(a, s16, 6);
        v.field_2 = AF(a, s16, 2) + (AF(a, s16, 0x12) - AF(a, s16, 2)) * AF(o, s32, 0x9C) / AF(a, s16, 6);
        v.field_4 = AF(a, s16, 4) + (AF(a, s16, 0x14) - AF(a, s16, 4)) * AF(o, s32, 0x9C) / AF(a, s16, 6);
        AF(o, s32, 0x9C)++;
        if (AF(a, s16, 6) < AF(o, s32, 0x9C)) {
            *(struct_8_8 *)&D_801274E8 = *(struct_8_8 *)&v;
            AF(o, s32, 0x9C) = 0;
            AF(o, s16, 0xA0)++;
        }
        break;
    case 1:
        v.field_0 = D_801274E8 + (AF(a, s16, 0x10) - AF(a, s16, 0)) * AF(o, s32, 0x9C) / AF(a, s16, 6) / 4;
        v.field_2 = D_801274EA + (AF(a, s16, 0x12) - AF(a, s16, 2)) * AF(o, s32, 0x9C) / AF(a, s16, 6) / 4;
        v.field_4 = D_801274EC + (AF(a, s16, 0x14) - AF(a, s16, 4)) * AF(o, s32, 0x9C) / AF(a, s16, 6) / 4;
        AF(o, s32, 0x9C)++;
        break;
    }
    func_sc07_006_8017D4E4(o, &v);
}

void func_sc07_006_8017D4E4(u8 *arg0, u8 *arg1) {
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

void func_sc07_006_8017D67C(u8 *o) {
    struct_8_4 v;
    struct_20_5 m;
    struct_1C_3 l;

    if (AF(o, s16, 0xA) >= 0x10) {
        func_8012C218();
        return;
    }
    switch (AF(o, u16, 0x34)) {
    case 0:
        if (AF(AF(o, u8 *, 0x64), u16, 0) != 0) {
            func_8012EC04(AF(o, u8 *, 0x64), AF(o, s16, 0xFC), &m);
            func_8012F14C(&m, AF(o, s32, 0xDC), &v);
            AF(o, s16, 6) = v.field_0;
            AF(o, s16, 0xA) = v.field_2;
            AF(o, s16, 0xE) = v.field_4;
        }
        AF(o, s32, 0xE4) += AF(o, s32, 0xE8);
        if (AF(o, s32, 0xE4) >= AF(o, s32, 0xE0)) {
            AF(o, s32, 0xE4) = AF(o, s32, 0xE0);
            AF(o, u16, 0x34)++;
        }
        break;
    case 1:
        v.field_4 = 0;
        v.field_0 = 0;
        v.field_2 = AF(o, s32, 0xE4);
        if (func_8012CC40(o, &v) & 0x2000) {
            AF(o, u16, 0x34)++;
        }
        break;
    case 2:
        AF(o, s32, 0xEC) += 0x10;
        if (AF(o, s32, 0xEC) >= AF(o, s32, 0xE4)) {
            func_8012C218(o);
            return;
        }
        break;
    }
    l.field_8.field_4 = 0;
    l.field_8.field_0 = 0;
    l.field_0.field_4 = 0;
    l.field_0.field_0 = 0;
    l.field_18 = 0x50000000;
    *(s32 *)&l.field_10 = 0x808080;
    *(s32 *)&l.field_14 = 0x101010;
    if (((struct_36 *)o)->field_34 < 2) {
        l.field_0.field_2 = AF(o, s32, 0xE4);
        l.field_8.field_2 = 0;
    } else {
        l.field_0.field_2 = AF(o, s32, 0xE4);
        l.field_8.field_2 = AF(o, s32, 0xEC);
    }
    func_80016A5C(&l, AF(o, u8 *, 0x20) + 0x34);
}

void func_sc07_006_8017D868(u8 *arg0) {
    D_sc07_006_8018E274[AF(arg0, u16, 2)]();
}

void func_sc07_006_8017D8A4(struct_C_3 *d, struct_C_3 *a, struct_C_3 *b, s32 t, s32 n) {
    s32 k;

    for (; n > 0; n--) {
        d->field_0[0] = a->field_0[0] + (((b->field_0[0] - a->field_0[0]) * t) >> 12);
        d->field_0[1] = a->field_0[1] + (((b->field_0[1] - a->field_0[1]) * t) >> 12);
        d->field_0[2] = a->field_0[2] + (((b->field_0[2] - a->field_0[2]) * t) >> 12);
        k = b->field_0[3] - a->field_0[3];
        if (k > 0x800) {
            k -= 0x1000;
        }
        if (k < -0x800) {
            k += 0x1000;
        }
        d->field_0[3] = a->field_0[3] + ((k * t) >> 12);
        k = b->field_0[4] - a->field_0[4];
        if (k > 0x800) {
            k -= 0x1000;
        }
        if (k < -0x800) {
            k += 0x1000;
        }
        d->field_0[4] = a->field_0[4] + ((k * t) >> 12);
        k = b->field_0[5] - a->field_0[5];
        if (k > 0x800) {
            k -= 0x1000;
        }
        if (k < -0x800) {
            k += 0x1000;
        }
        d->field_0[5] = a->field_0[5] + ((k * t) >> 12);
        d++;
        a++;
        b++;
    }
}

void func_sc07_006_8017DA30(struct_C_3 *d, struct_C_3 *a, struct_C_3 *b, s32 t, s32 n, s32 ang) {
    s32 s, t2, k;

    s = rsin(ang);
    t2 = t + ((s * (rsin(t >> 1) >> 3)) >> 12);
    for (; n > 0; n--) {
        d->field_0[0] = a->field_0[0] + (((b->field_0[0] - a->field_0[0]) * t) >> 12);
        d->field_0[1] = a->field_0[1] + (((b->field_0[1] - a->field_0[1]) * t2) >> 12);
        d->field_0[2] = a->field_0[2] + (((b->field_0[2] - a->field_0[2]) * t2) >> 12);
        k = b->field_0[3] - a->field_0[3];
        if (k > 0x800) {
            k -= 0x1000;
        }
        if (k < -0x800) {
            k += 0x1000;
        }
        d->field_0[3] = a->field_0[3] + ((k * t) >> 12);
        k = b->field_0[4] - a->field_0[4];
        if (k > 0x800) {
            k -= 0x1000;
        }
        if (k < -0x800) {
            k += 0x1000;
        }
        d->field_0[4] = a->field_0[4] + ((k * t) >> 12);
        k = b->field_0[5] - a->field_0[5];
        if (k > 0x800) {
            k -= 0x1000;
        }
        if (k < -0x800) {
            k += 0x1000;
        }
        d->field_0[5] = a->field_0[5] + ((k * t) >> 12);
        d++;
        a++;
        b++;
    }
}

extern u8 *D_sc07_006_801BF4F4;
extern u8 *D_sc07_006_801BF4F8;
extern u8 *D_sc07_006_801BF4FC;
extern u8 *D_sc07_006_801BF500;
extern u8 *D_sc07_006_801BF504;
extern u8 *D_sc07_006_801BF518;
extern u8 *D_sc07_006_801BF51C;
extern u8 *D_sc07_006_801BF520;
extern u8 *D_sc07_006_801BF524;
extern u8 *D_sc07_006_801BF528;
extern u8 *D_sc07_006_801BF52C;
extern u8 *D_sc07_006_801BF530;
extern u8 *D_sc07_006_801BF534;
extern u8 *D_sc07_006_801BF538;
extern u8 *D_sc07_006_801BF650;
extern struct_8_4 *D_sc07_006_801C1E1C;
extern struct_8_4 *D_sc07_006_801C1E20;
extern struct_8_4 *D_sc07_006_801C1E24;
extern struct_8_4 *D_sc07_006_801C1E28;
extern struct_8_4 *D_sc07_006_801C1E60;
extern struct_8_4 *D_sc07_006_801C1E64;
extern struct_8_4 *D_sc07_006_801C1E68;
extern struct_8_4 *D_sc07_006_801C1E9C;
extern struct_8_4 *D_sc07_006_801C1EA0;
extern struct_8_4 *D_sc07_006_801C1EA4;
extern struct_8_4 *D_sc07_006_801C1EA8;

void func_sc07_006_8017DC1C(s32 t) {
    func_sc07_006_8017DC1C_inline(t, D_sc07_006_801BF4F4, D_sc07_006_801C1E14, D_sc07_006_801C1E18);
    func_sc07_006_8017DC1C_inline(t, D_sc07_006_801BF4F8, D_sc07_006_801C1E1C, D_sc07_006_801C1E1C);
    func_sc07_006_8017DC1C_inline(t, D_sc07_006_801BF4FC, D_sc07_006_801C1E20, D_sc07_006_801C1E20);
    func_sc07_006_8017DC1C_inline(t, D_sc07_006_801BF500, D_sc07_006_801C1E24, D_sc07_006_801C1E24);
    func_sc07_006_8017DC1C_inline(t, D_sc07_006_801BF504, D_sc07_006_801C1E28, D_sc07_006_801C1E28);
    func_sc07_006_8017DC1C_inline(t, D_sc07_006_801BF508, D_sc07_006_801C1E40, D_sc07_006_801C1E50);
    func_sc07_006_8017DC1C_inline(t, D_sc07_006_801BF50C, D_sc07_006_801C1E44, D_sc07_006_801C1E54);
    func_sc07_006_8017DC1C_inline(t, D_sc07_006_801BF510, D_sc07_006_801C1E48, D_sc07_006_801C1E58);
    func_sc07_006_8017DC1C_inline(t, D_sc07_006_801BF514, D_sc07_006_801C1E4C, D_sc07_006_801C1E4C);
    func_sc07_006_8017DC1C_inline(t, D_sc07_006_801BF518, D_sc07_006_801C1E60, D_sc07_006_801C1E60);
    func_sc07_006_8017DC1C_inline(t, D_sc07_006_801BF51C, D_sc07_006_801C1E64, D_sc07_006_801C1E64);
    func_sc07_006_8017DC1C_inline(t, D_sc07_006_801BF520, D_sc07_006_801C1E68, D_sc07_006_801C1E68);
    func_sc07_006_8017DC1C_inline(t, D_sc07_006_801BF524, D_sc07_006_801C1E80, D_sc07_006_801C1E90);
    func_sc07_006_8017DC1C_inline(t, D_sc07_006_801BF528, D_sc07_006_801C1E84, D_sc07_006_801C1E94);
    func_sc07_006_8017DC1C_inline(t, D_sc07_006_801BF52C, D_sc07_006_801C1E88, D_sc07_006_801C1E98);
    func_sc07_006_8017DC1C_inline(t, D_sc07_006_801BF530, D_sc07_006_801C1E8C, D_sc07_006_801C1E8C);
    func_sc07_006_8017DC1C_inline(t, D_sc07_006_801BF534, D_sc07_006_801C1E9C, D_sc07_006_801C1E9C);
    func_sc07_006_8017DC1C_inline(t, D_sc07_006_801BF538, D_sc07_006_801C1EA0, D_sc07_006_801C1EA4);
    func_sc07_006_8017DC1C_inline(t, D_sc07_006_801BF650, D_sc07_006_801C1EA4, D_sc07_006_801C1EA8);
    func_sc07_006_8017DC1C_inline(t, D_sc07_006_801BF65C, D_sc07_006_801C1E2C, D_sc07_006_801C1E38);
    func_sc07_006_8017DC1C_inline(t, D_sc07_006_801BF660, D_sc07_006_801C1E30, D_sc07_006_801C1E3C);
    func_sc07_006_8017DC1C_inline(t, D_sc07_006_801BF684, D_sc07_006_801C1EAC, D_sc07_006_801C1E34);
    func_sc07_006_8017DC1C_inline(t, D_sc07_006_801BF6A4, D_sc07_006_801C1E6C, D_sc07_006_801C1E78);
    func_sc07_006_8017DC1C_inline(t, D_sc07_006_801BF6A8, D_sc07_006_801C1E70, D_sc07_006_801C1E7C);
    func_sc07_006_8017DC1C_inline(t, D_sc07_006_801BF6AC, D_sc07_006_801C1E74, D_sc07_006_801C1EB0);
}

void func_sc07_006_8017F3D4(u8 *o, s32 n) {
    func_sc07_006_8017D8A4(AF(AF(o, u8 *, 0x90) + AF(o, s32, 0x94) * 8, u8 *, 0), D_sc07_006_8018E33C, D_sc07_006_8018E33C + 0x120, n, 1);
    func_sc07_006_8017D8A4(AF(AF(o, u8 *, 0x90) + AF(o, s32, 0x94) * 8, u8 *, 0) + 0xCC, D_sc07_006_8018E33C + 0x60, D_sc07_006_8018E33C + 0xCC, n, 1);
    func_sc07_006_8017D8A4(AF(AF(o, u8 *, 0x90) + AF(o, s32, 0x94) * 8, u8 *, 0) + 0x3C, D_sc07_006_8018E33C - 0xC0, D_sc07_006_8018E33C - 0x90, n, 1);
    func_sc07_006_8017D8A4(AF(AF(o, u8 *, 0x90) + AF(o, s32, 0x94) * 8, u8 *, 0) + 0x48, D_sc07_006_8018E33C - 0xB4, D_sc07_006_8018E33C - 0x84, n, 1);
    func_sc07_006_8017D8A4(AF(AF(o, u8 *, 0x90) + AF(o, s32, 0x94) * 8, u8 *, 0) + 0x54, D_sc07_006_8018E33C - 0xA8, D_sc07_006_8018E33C - 0x78, n, 1);
    func_sc07_006_8017D8A4(AF(AF(o, u8 *, 0x90) + AF(o, s32, 0x94) * 8, u8 *, 0) + 0x60, D_sc07_006_8018E33C - 0x9C, D_sc07_006_8018E33C - 0x6C, n, 1);
    func_sc07_006_8017D8A4(AF(AF(o, u8 *, 0x90) + AF(o, s32, 0x94) * 8, u8 *, 0) + 0x90, D_sc07_006_8018E33C - 0x60, D_sc07_006_8018E33C - 0x30, n, 1);
    func_sc07_006_8017D8A4(AF(AF(o, u8 *, 0x90) + AF(o, s32, 0x94) * 8, u8 *, 0) + 0x9C, D_sc07_006_8018E33C - 0x54, D_sc07_006_8018E33C - 0x24, n, 1);
    func_sc07_006_8017D8A4(AF(AF(o, u8 *, 0x90) + AF(o, s32, 0x94) * 8, u8 *, 0) + 0xA8, D_sc07_006_8018E33C - 0x48, D_sc07_006_8018E33C - 0x18, n, 1);
    func_sc07_006_8017D8A4(AF(AF(o, u8 *, 0x90) + AF(o, s32, 0x94) * 8, u8 *, 0) + 0xB4, D_sc07_006_8018E33C - 0x3C, D_sc07_006_8018E33C - 0xC, n, 1);
}

void func_sc07_006_8017F5D4(s32 t) {
    func_sc07_006_8017DC1C_inline(t, D_sc07_006_801BF508, D_sc07_006_801C1E40, D_sc07_006_801C1E50);
    func_sc07_006_8017DC1C_inline(t, D_sc07_006_801BF50C, D_sc07_006_801C1E44, D_sc07_006_801C1E54);
    func_sc07_006_8017DC1C_inline(t, D_sc07_006_801BF510, D_sc07_006_801C1E48, D_sc07_006_801C1E58);
    func_sc07_006_8017DC1C_inline(t, D_sc07_006_801BF514, D_sc07_006_801C1E4C, D_sc07_006_801C1E4C);
}

void func_sc07_006_8017F9AC(s32 t, u8 *o) {
    s32 s;

    func_sc07_006_8017DC1C_inline(t, D_sc07_006_801BF508, D_sc07_006_801C1E40, D_sc07_006_801C1E50);
    s = rsin(AF(o, s16, 0xFC)) + (rsin(AF(o, s16, 0xFE) + 0x100) >> 4);
    func_sc07_006_8017DC1C_inline(s, D_sc07_006_801BF50C, D_sc07_006_801C1E44, D_sc07_006_801C1E54);
    s = rsin(AF(o, s16, 0xFC)) + (rsin(AF(o, s16, 0xFE) + 0x200) >> 4);
    func_sc07_006_8017DC1C_inline(s, D_sc07_006_801BF510, D_sc07_006_801C1E48, D_sc07_006_801C1E58);
    func_sc07_006_8017DC1C_inline(t, D_sc07_006_801BF514, D_sc07_006_801C1E4C, D_sc07_006_801C1E4C);
}

void func_sc07_006_8017FDF8(s32 t) {
    func_sc07_006_8017FDF8_inline(t, D_sc07_006_801F60A0, D_sc07_006_801CACA8, D_sc07_006_801CAD48);
    LoadImage(&D_sc07_006_8018DF60, D_sc07_006_801F60A0);
    func_sc07_006_8017FDF8_inline(t, D_sc07_006_801F60A0 + 0x10, D_sc07_006_801CAD28, D_sc07_006_801CADA8);
    LoadImage(&D_sc07_006_8018DF68, D_sc07_006_801F60A0 + 0x10);
    func_sc07_006_8017FDF8_inline(t, D_sc07_006_801F60A0 + 0x20, D_sc07_006_801CAD08, D_sc07_006_801CAD88);
    LoadImage(&D_sc07_006_8018DF70, D_sc07_006_801F60A0 + 0x20);
    func_sc07_006_8017FDF8_inline(t, D_sc07_006_801F60A0 + 0x30, D_sc07_006_801CAC68, D_sc07_006_801CACE8);
    LoadImage(&D_sc07_006_8018DF78, D_sc07_006_801F60A0 + 0x30);
    func_sc07_006_8017FDF8_inline(t, D_sc07_006_801F60A0 + 0x40, D_sc07_006_801CAC88, D_sc07_006_801CACC8);
    LoadImage(&D_sc07_006_8018DF80, D_sc07_006_801F60A0 + 0x40);
}

void func_sc07_006_801802EC(s32 t) {
    func_sc07_006_8017DC1C_inline(t, D_sc07_006_801BF554, D_sc07_006_801C1E40, D_sc07_006_801C1E50);
    func_sc07_006_8017DC1C_inline(t, D_sc07_006_801BF558, D_sc07_006_801C1E44, D_sc07_006_801C1E54);
    func_sc07_006_8017DC1C_inline(t, D_sc07_006_801BF55C, D_sc07_006_801C1E48, D_sc07_006_801C1E58);
}

void func_sc07_006_801805D4(s32 t, u8 *o) {
    s32 s;

    func_sc07_006_8017DC1C_inline(t, D_sc07_006_801BF554, D_sc07_006_801C1E40, D_sc07_006_801C1E50);
    s = rsin(AF(o, s16, 0xFC)) + (rsin(AF(o, s16, 0xFE) + 0x100) >> 4);
    func_sc07_006_8017DC1C_inline(s, D_sc07_006_801BF558, D_sc07_006_801C1E44, D_sc07_006_801C1E54);
    s = rsin(AF(o, s16, 0xFC)) + (rsin(AF(o, s16, 0xFE) + 0x200) >> 4);
    func_sc07_006_8017DC1C_inline(s, D_sc07_006_801BF55C, D_sc07_006_801C1E48, D_sc07_006_801C1E58);
}

void func_sc07_006_80180924(s32 t) {
    func_sc07_006_8017DC1C_inline(t, D_sc07_006_801BF56C, D_sc07_006_801C1E80, D_sc07_006_801C1E90);
    func_sc07_006_8017DC1C_inline(t, D_sc07_006_801BF570, D_sc07_006_801C1E84, D_sc07_006_801C1E94);
    func_sc07_006_8017DC1C_inline(t, D_sc07_006_801BF574, D_sc07_006_801C1E88, D_sc07_006_801C1E98);
    func_sc07_006_8017DC1C_inline(t, D_sc07_006_801BF578, D_sc07_006_801C1E8C, D_sc07_006_801C1E8C);
}

void func_sc07_006_80180CFC(s32 t, u8 *o) {
    s32 s;

    func_sc07_006_8017DC1C_inline(t, D_sc07_006_801BF56C, D_sc07_006_801C1E80, D_sc07_006_801C1E90);
    s = rsin(AF(o, s16, 0xFC)) + (rsin(AF(o, s16, 0xFE) + 0x100) >> 4);
    func_sc07_006_8017DC1C_inline(s, D_sc07_006_801BF570, D_sc07_006_801C1E84, D_sc07_006_801C1E94);
    s = rsin(AF(o, s16, 0xFC)) + (rsin(AF(o, s16, 0xFE) + 0x200) >> 4);
    func_sc07_006_8017DC1C_inline(s, D_sc07_006_801BF574, D_sc07_006_801C1E88, D_sc07_006_801C1E98);
    func_sc07_006_8017DC1C_inline(t, D_sc07_006_801BF578, D_sc07_006_801C1E8C, D_sc07_006_801C1E8C);
}

void func_sc07_006_80181148(s32 t) {
    func_sc07_006_8017FDF8_inline(t, D_sc07_006_801F60A0, D_sc07_006_801CADE8, D_sc07_006_801CAE88);
    LoadImage(&D_sc07_006_8018DF88, D_sc07_006_801F60A0);
    func_sc07_006_8017FDF8_inline(t, D_sc07_006_801F60A0 + 0x10, D_sc07_006_801CAE68, D_sc07_006_801CAEC8);
    LoadImage(&D_sc07_006_8018DF90, D_sc07_006_801F60A0 + 0x10);
    func_sc07_006_8017FDF8_inline(t, D_sc07_006_801F60A0 + 0x20, D_sc07_006_801CAE48, D_sc07_006_801CAEA8);
    LoadImage(&D_sc07_006_8018DF98, D_sc07_006_801F60A0 + 0x20);
    func_sc07_006_8017FDF8_inline(t, D_sc07_006_801F60A0 + 0x30, D_sc07_006_801CAD68, D_sc07_006_801CAE28);
    LoadImage(&D_sc07_006_8018DFA0, D_sc07_006_801F60A0 + 0x30);
    func_sc07_006_8017FDF8_inline(t, D_sc07_006_801F60A0 + 0x40, D_sc07_006_801CADC8, D_sc07_006_801CAE08);
    LoadImage(&D_sc07_006_8018DFA8, D_sc07_006_801F60A0 + 0x40);
}

void func_sc07_006_8018163C(s32 t) {
    func_sc07_006_8017DC1C_inline(t, D_sc07_006_801BF5B4, D_sc07_006_801C1E80, D_sc07_006_801C1E90);
    func_sc07_006_8017DC1C_inline(t, D_sc07_006_801BF5B8, D_sc07_006_801C1E84, D_sc07_006_801C1E94);
    func_sc07_006_8017DC1C_inline(t, D_sc07_006_801BF5BC, D_sc07_006_801C1E88, D_sc07_006_801C1E98);
}

void func_sc07_006_80181924(s32 t, u8 *o) {
    s32 s;

    func_sc07_006_8017DC1C_inline(t, D_sc07_006_801BF5B4, D_sc07_006_801C1E80, D_sc07_006_801C1E90);
    s = rsin(AF(o, s16, 0xFC)) + (rsin(AF(o, s16, 0xFE) + 0x100) >> 4);
    func_sc07_006_8017DC1C_inline(s, D_sc07_006_801BF5B8, D_sc07_006_801C1E84, D_sc07_006_801C1E94);
    s = rsin(AF(o, s16, 0xFC)) + (rsin(AF(o, s16, 0xFE) + 0x200) >> 4);
    func_sc07_006_8017DC1C_inline(s, D_sc07_006_801BF5BC, D_sc07_006_801C1E88, D_sc07_006_801C1E98);
}

void func_sc07_006_80181C74(u8 *o, s32 n) {
    u8 **p = &D_sc07_006_801BFCCC;

    func_sc07_006_8017D8A4(*p, D_sc07_006_8018E33C, D_sc07_006_8018E33C + 0x6C, n, 1);
    func_sc07_006_8017D8A4(*p + 0xC, D_sc07_006_8018E33C + 0xC, D_sc07_006_8018E33C + 0x78, n, 1);
    func_sc07_006_8017D8A4(*p + 0x18, D_sc07_006_8018E33C + 0x18, D_sc07_006_8018E33C + 0x84, n, 1);
    func_sc07_006_8017D8A4(*p + 0x24, D_sc07_006_8018E33C + 0x24, D_sc07_006_8018E33C + 0x90, n, 1);
    func_sc07_006_8017D8A4(*p + 0x30, D_sc07_006_8018E33C + 0x30, D_sc07_006_8018E33C + 0x9C, n, 1);
    func_sc07_006_8017D8A4(*p + 0x60, D_sc07_006_8018E33C + 0x3C, D_sc07_006_8018E33C + 0xA8, n, 1);
    func_sc07_006_8017D8A4(*p + 0x6C, D_sc07_006_8018E33C + 0x48, D_sc07_006_8018E33C + 0xB4, n, 1);
    func_sc07_006_8017D8A4(*p + 0x78, D_sc07_006_8018E33C + 0x54, D_sc07_006_8018E33C + 0xC0, n, 1);
    func_sc07_006_8017D8A4(*p + 0xA8, D_sc07_006_8018E33C + 0x60, D_sc07_006_8018E33C + 0xCC, n, 1);
    func_sc07_006_8017D8A4(*p + 0x3C, D_sc07_006_8018E33C - 0x90, D_sc07_006_8018E33C + 0xD8, n, 1);
    func_sc07_006_8017D8A4(*p + 0x48, D_sc07_006_8018E33C - 0x84, D_sc07_006_8018E33C + 0xE4, n, 1);
    func_sc07_006_8017D8A4(*p + 0x54, D_sc07_006_8018E33C - 0x78, D_sc07_006_8018E33C + 0xF0, n, 1);
    func_sc07_006_8017D8A4(*p + 0x84, D_sc07_006_8018E33C - 0x30, D_sc07_006_8018E33C + 0xFC, n, 1);
    func_sc07_006_8017D8A4(*p + 0x90, D_sc07_006_8018E33C - 0x24, D_sc07_006_8018E33C + 0x108, n, 1);
    func_sc07_006_8017D8A4(*p + 0x9C, D_sc07_006_8018E33C - 0x18, D_sc07_006_8018E33C + 0x114, n, 1);
}

void func_sc07_006_80181E64(s32 amp, u8 *o) {
    s32 ph;
    u8 *h;
    struct_8_4 *a;
    struct_8_4 *b;
    struct_8_4 *pa;
    struct_8_4 *pb;
    struct_8_4 *d;
    s32 n;
    s32 k;
    s32 s;
    s32 t;

    t = (AF(o, u16, 0x100) + 0x100) & 0xFFF;
    AF(o, u16, 0x100) = t;
    ph = t;
    h = D_sc07_006_801BF5CC;
    a = D_sc07_006_801C1E14;
    b = D_sc07_006_801C1E18;
    if (AF(h, s32, 4) == 1) {
        d = AF(h, struct_8_4 *, 0xC);
    } else {
        d = (struct_8_4 *)(h + (((AF(h, u32, 0xC) >> 2) << 2) + 0xC));
    }
    n = AF(h, s32, 0x10);
    pa = a;
    pb = b;
    while (n != 0) {
        s = rsin(ph);
        k = amp + ((s * (rsin(amp >> 1) >> 4)) >> 12);
        d->field_0 = pa->field_0 + (((pb->field_0 - pa->field_0) * k) >> 12);
        d->field_2 = pa->field_2 + (((pb->field_2 - pa->field_2) * k) >> 12);
        d->field_4 = pa->field_4 + (((pb->field_4 - pa->field_4) * k) >> 12);
        ph += 0x600;
        d++;
        pa++;
        pb++;
        n--;
    }
}

void func_sc07_006_80182000(u8 *o, s32 t) {
    u8 **p = &D_sc07_006_801BFCCC;

    func_sc07_006_8017D8A4(*p, &D_sc07_006_8018E3A8, &D_sc07_006_8018E3A8 + 0xB4, t, 1);
    func_sc07_006_8017DA30((struct_C_3 *)(*p + 0x18), (struct_C_3 *)(&D_sc07_006_8018E3A8 + 0x18), (struct_C_3 *)(&D_sc07_006_8018E3A8 + 0xC0), t, 1, AF(o, s16, 0x100));
    func_sc07_006_8017DA30((struct_C_3 *)(*p + 0x24), (struct_C_3 *)(&D_sc07_006_8018E3A8 + 0x24), (struct_C_3 *)(&D_sc07_006_8018E3A8 + 0xCC), t, 1, AF(o, s16, 0x100));
    func_sc07_006_8017DA30((struct_C_3 *)(*p + 0x30), (struct_C_3 *)(&D_sc07_006_8018E3A8 + 0x30), (struct_C_3 *)(&D_sc07_006_8018E3A8 + 0xD8), t, 1, AF(o, s16, 0x100));
    func_sc07_006_8017DA30((struct_C_3 *)(*p + 0x60), (struct_C_3 *)(&D_sc07_006_8018E3A8 + 0x3C), (struct_C_3 *)(&D_sc07_006_8018E3A8 + 0xE4), t, 1, AF(o, s16, 0x100) + 0x200);
    func_sc07_006_8017DA30((struct_C_3 *)(*p + 0x6C), (struct_C_3 *)(&D_sc07_006_8018E3A8 + 0x48), (struct_C_3 *)(&D_sc07_006_8018E3A8 + 0xF0), t, 1, AF(o, s16, 0x100) + 0x200);
    func_sc07_006_8017DA30((struct_C_3 *)(*p + 0x78), (struct_C_3 *)(&D_sc07_006_8018E3A8 + 0x54), (struct_C_3 *)(&D_sc07_006_8018E3A8 + 0xFC), t, 1, AF(o, s16, 0x100) + 0x200);
}

void func_sc07_006_80182158(s32 t) {
    func_sc07_006_8017FDF8_inline(t, D_sc07_006_801F60A0, D_sc07_006_801CAC48, D_sc07_006_801CAC28);
    LoadImage(&D_sc07_006_8018DFB0, D_sc07_006_801F60A0);
}

void func_sc07_006_80182268(u8 *o, s32 n) {
    u8 *e;
    s32 r;
    s32 q;
    s32 t;

    func_sc07_006_8017D8A4(D_sc07_006_801BFCDC[0] + 0x60, &D_sc07_006_8018E4B0, &D_sc07_006_8018E4B0 + 0xC, n, 1);
    if (n > 0) {
        e = (u8 *)func_80143C74(o, 0);
        if (e != 0) {
            r = rand() % ((n * 0xA0) >> 12);
            q = rand() & 0x7F;
            t = AF(D_sc07_006_801BFCDC[0], u16, 0x60) - 0x40;
            AF(e, u16, 0xE) -= t + q;
            AF(e, u16, 0xA) += AF(D_sc07_006_801BFCDC[0], u16, 0x62) + r;
            AF(e, u16, 0x6) += AF(D_sc07_006_801BFCDC[0], u16, 0x64) + r;
            AF(e, s32, 0x18) = ((rand() & 0xFF) - 0x80) << 10;
            AF(e, s16, 0x16) = -((rand() & 3) + 4);
            AF(e, s32, 0x10) = (rand() & 0xFF) << 11;
            func_80128EA8(AF(e, u8 *, 0x20), e + 0xD0, &D_sc07_006_8018DF10);
            func_8012C658(0x3AC, 6, e);
            func_8012C658(0x3AC, 6, e);
        }
    }
}

void func_sc07_006_801823F8(s32 t) {
    func_sc07_006_8017DC1C_inline(t, D_sc07_006_801BF65C, D_sc07_006_801C1E2C, D_sc07_006_801C1E38);
    func_sc07_006_8017DC1C_inline(t, D_sc07_006_801BF660, D_sc07_006_801C1E30, D_sc07_006_801C1E3C);
    func_sc07_006_8017DC1C_inline(t, D_sc07_006_801BF684, D_sc07_006_801C1EAC, D_sc07_006_801C1E34);
}

void func_sc07_006_801826E0(u8 *o, s32 n) {
    u8 **p = &D_sc07_006_801BFCE4;
    u8 *e;

    func_sc07_006_8017D8A4(*p + 0xC, D_sc07_006_8018E4D4, D_sc07_006_8018E4D4 + 0x24, n, 1);
    func_sc07_006_8017D8A4(*p + 0x18, D_sc07_006_8018E4D4 + 0xC, D_sc07_006_8018E4D4 + 0x30, n, 1);
    func_sc07_006_8017D8A4(*p + 0x84, D_sc07_006_8018E4D4 - 0xC, D_sc07_006_8018E4D4 + 0x18, n, 1);
    e = (u8 *)func_80143C74(o, 0);
    if (e != 0) {
        AF(e, s16, 0xE) -= AF(D_sc07_006_801BFCE4, s16, 0x84);
        AF(e, s16, 0xA) += (s16)(AF(D_sc07_006_801BFCE4, s16, 0x86) - 0x20) + (rand() & 0x3F);
        AF(e, s16, 6) += (s16)(AF(D_sc07_006_801BFCE4, s16, 0x88) - 0x20) + (rand() & 0x3F);
        AF(e, s32, 0x10) = ((rand() & 0xFF) - 0x80) << 10;
        AF(e, s16, 0x16) = -((rand() & 3) + 4);
        AF(e, s32, 0x18) = -((rand() & 0xFF) << 11);
        func_80128EA8(AF(e, s32, 0x20), e + 0xD0, &D_sc07_006_8018DF10);
        func_8012C658(0x3AC, 6, e);
        func_8012C658(0x3AC, 6, e);
        func_8012C658(0x3AC, 6, e);
        func_8012C658(0x3AC, 6, e);
    }
}

void func_sc07_006_801828A4(s32 t) {
    func_sc07_006_8017DC1C_inline(t, D_sc07_006_801BF6A4, D_sc07_006_801C1E6C, D_sc07_006_801C1E78);
    func_sc07_006_8017DC1C_inline(t, D_sc07_006_801BF6A8, D_sc07_006_801C1E70, D_sc07_006_801C1E7C);
    func_sc07_006_8017DC1C_inline(t, D_sc07_006_801BF6AC, D_sc07_006_801C1E74, D_sc07_006_801C1EB0);
}

void func_sc07_006_80182B8C(u8 *o, s32 n) {
    u8 **p = &D_sc07_006_801BFCEC;
    u8 *e;

    func_sc07_006_8017D8A4(*p + 0x48, D_sc07_006_8018E510, D_sc07_006_8018E510 + 0x24, n, 1);
    func_sc07_006_8017D8A4(*p + 0x54, D_sc07_006_8018E510 + 0xC, D_sc07_006_8018E510 + 0x30, n, 1);
    func_sc07_006_8017D8A4(*p + 0x60, D_sc07_006_8018E510 + 0x18, D_sc07_006_8018E510 + 0x3C, n, 1);
    e = (u8 *)func_80143C74(o, 0);
    if (e != 0) {
        AF(e, s16, 0xE) -= AF(D_sc07_006_801BFCEC, s16, 0x48);
        AF(e, s16, 0xA) += (s16)(AF(D_sc07_006_801BFCEC, s16, 0x4A) - 0x20) + (rand() & 0x3F);
        AF(e, s16, 6) += (s16)(AF(D_sc07_006_801BFCEC, s16, 0x4C) - 0x20) + (rand() & 0x3F);
        AF(e, s32, 0x10) = ((rand() & 0xFF) - 0x80) << 10;
        AF(e, s16, 0x16) = -((rand() & 3) + 4);
        AF(e, s32, 0x18) = (rand() & 0xFF) << 11;
        func_80128EA8(AF(e, s32, 0x20), e + 0xD0, &D_sc07_006_8018DF10);
        func_8012C658(0x3AC, 6, e);
        func_8012C658(0x3AC, 6, e);
        func_8012C658(0x3AC, 6, e);
        func_8012C658(0x3AC, 6, e);
    }
}

void func_sc07_006_80182D4C(u8 *o, s32 n) {
    u8 **p = &D_sc07_006_801BFCEC;

    func_sc07_006_8017D8A4(*p, D_sc07_006_8018E45C, D_sc07_006_8018E45C + 0xFC, n, 1);
    func_sc07_006_8017D8A4(*p + 0xC, D_sc07_006_8018E45C + 0x9C, D_sc07_006_8018E45C + 0x108, n, 1);
    func_sc07_006_8017D8A4(*p + 0x18, D_sc07_006_8018E45C + 0xA8, D_sc07_006_8018E45C + 0x114, n, 1);
    func_sc07_006_8017D8A4(*p + 0x24, D_sc07_006_8018E45C - 0x48, D_sc07_006_8018E45C + 0x120, n, 1);
    func_sc07_006_8017D8A4(*p + 0x30, D_sc07_006_8018E45C - 0x3C, D_sc07_006_8018E45C + 0x12C, n, 1);
    func_sc07_006_8017D8A4(*p + 0x3C, D_sc07_006_8018E45C - 0x30, D_sc07_006_8018E45C + 0x138, n, 1);
    func_sc07_006_8017D8A4(*p + 0x48, D_sc07_006_8018E45C + 0xD8, D_sc07_006_8018E45C + 0x144, n, 1);
    func_sc07_006_8017D8A4(*p + 0x54, D_sc07_006_8018E45C + 0xE4, D_sc07_006_8018E45C + 0x150, n, 1);
    func_sc07_006_8017D8A4(*p + 0x60, D_sc07_006_8018E45C + 0xF0, D_sc07_006_8018E45C + 0x15C, n, 1);
    func_sc07_006_8017D8A4(*p + 0x6C, D_sc07_006_8018E45C - 0x24, D_sc07_006_8018E45C + 0x168, n, 1);
    func_sc07_006_8017D8A4(*p + 0x78, D_sc07_006_8018E45C - 0x18, D_sc07_006_8018E45C + 0x174, n, 1);
    func_sc07_006_8017D8A4(*p + 0x84, D_sc07_006_8018E45C - 0xC, D_sc07_006_8018E45C + 0x180, n, 1);
    func_sc07_006_8017D8A4(*p + 0x90, D_sc07_006_8018E45C - 0x54, D_sc07_006_8018E45C + 0x1A4, n, 1);
    func_sc07_006_8017D8A4(*p + 0x9C, D_sc07_006_8018E45C + 0x60, D_sc07_006_8018E45C + 0x18C, n, 1);
    func_sc07_006_8017D8A4(*p + 0xA8, D_sc07_006_8018E45C + 0x90, D_sc07_006_8018E45C + 0x198, n, 1);
}

void func_sc07_006_80182F3C(u8 *o) {
    s32 p;
    s32 i;
    s32 *q;

    LoadImage(&D_sc07_006_8018DFB0, D_sc07_006_8018E254);
    func_sc07_006_8017FDF8(0);
    func_sc07_006_80181148(0);
    func_sc07_006_8017DC1C(0);
    if (func_8012C354(o, &D_sc07_006_8018E61C) != 0) {
        AF(o, u8, 0xC0) = 1;
        AF(o, s32, 0xB4) = -1;
        func_80143994(o, 0x7000);
        func_8012A828(o, &D_sc07_006_801BFCB4);
        func_sc07_006_8017F3D4(o, 0);
        func_sc07_006_80182D4C(o, 0);
        func_sc07_006_80182B8C(o, 0);
        func_sc07_006_801826E0(o, 0);
        func_sc07_006_80182268(o, 0);
        func_sc07_006_8017D8A4(D_sc07_006_801BFCD4, &D_sc07_006_8018E3A8, &D_sc07_006_8018E3A8 + 0xB4, 0, 1);
        func_sc07_006_80182000(o, 0);
        func_sc07_006_80181C74(o, 0);
        func_sc07_006_80182F3C_inline(D_sc07_006_801BFCC4 + 0x84, &D_sc07_006_8018E2DC);
        func_sc07_006_80182F3C_inline(D_sc07_006_801BFCC4 + 0x90, &D_sc07_006_8018E2E8);
        func_sc07_006_80182F3C_inline(D_sc07_006_801BFCC4 + 0x9C, &D_sc07_006_8018E2F4);
        func_sc07_006_80182F3C_inline(D_sc07_006_801BFCBC + 0x84, &D_sc07_006_8018E2DC);
        func_sc07_006_80182F3C_inline(D_sc07_006_801BFCBC + 0x90, &D_sc07_006_8018E2E8);
        func_sc07_006_80182F3C_inline(D_sc07_006_801BFCBC + 0x9C, &D_sc07_006_8018E2F4);
        func_sc07_006_80182F3C_inline(D_sc07_006_801BFCBC + 0xA8, &D_sc07_006_8018E300);
        func_sc07_006_80182F3C_inline(D_sc07_006_801BFCBC + 0x3C, &D_sc07_006_8018E27C);
        func_sc07_006_80182F3C_inline(D_sc07_006_801BFCBC + 0x48, &D_sc07_006_8018E288);
        func_sc07_006_80182F3C_inline(D_sc07_006_801BFCBC + 0x54, &D_sc07_006_8018E294);
        func_sc07_006_80182F3C_inline(D_sc07_006_801BFCB4 + 0x3C, &D_sc07_006_8018E27C);
        func_sc07_006_80182F3C_inline(D_sc07_006_801BFCB4 + 0x48, &D_sc07_006_8018E288);
        func_sc07_006_80182F3C_inline(D_sc07_006_801BFCB4 + 0x54, &D_sc07_006_8018E294);
        func_sc07_006_80182F3C_inline(D_sc07_006_801BFCB4 + 0x60, &D_sc07_006_8018E2A0);
        AF(o, u16, 2) = 1;
        func_8012B23C(o);
        AF(o, u8, 0x75) = 2;
        func_8001D0E8(AF(o, s32, 0x20), 0x280, 0x1E0);
        AF(o, s16, 0x102) = 0x1C7;
        AF(o, s32, 0x1C) = 0xF;
        p = func_8012913C(0x78);
        if (p != 0) {
            AF(o, s32, 0xCC) = p;
            func_800233CC(&D_sc07_006_801F6180, 0x80);
            AF(p, s16, 6) = AF(o, s16, 6) - 0x20;
            AF(p, s16, 0xA) = AF(o, s16, 0xA) - 0xA8;
            AF(p, s16, 0xE) = AF(o, s16, 0xE);
            func_8001CD50(AF(p, s32, 0x20), &D_sc07_006_801F6180);
        }
        p = func_8012913C(0x78);
        if (p != 0) {
            AF(o, s32, 0xD0) = p;
            func_800233CC(&D_sc07_006_801F6140, 0xA0);
            AF(p, s16, 6) = AF(o, s16, 6) - 0x28;
            AF(p, s16, 0xA) = AF(o, s16, 0xA) - 0xA8;
            AF(p, s16, 0xE) = AF(o, s16, 0xE);
            func_8001CD50(AF(p, s32, 0x20), &D_sc07_006_801F6140);
            AF(p, s32, 0x2C) = 1;
        }
        for (i = 0; i < 16; i++) {
            (&D_sc07_006_801F61C0)[i] = rand() & 0x7FFF;
        }
        func_8002D4C8(0xBB7, 0);
    }
}

void func_sc07_006_80183374(u8 *o) {
    s32 i;
    s32 p;
    u8 *q;
    u8 *t;
    s32 a, r;

    if (AF(o, u16, 0x34) != 0) {
        AF(o, s32, 8) = (AF(o, s16, 0x8A) << 16) + (rsin(AF(o, s16, 0x104)) << 7);
        AF(o, u16, 0x104) += 0x40;
        func_80178970(o);
    }
    switch (AF(o, u16, 0x34)) {
    case 0:
        if (--AF(o, s32, 0x1C) == 0) {
            func_80178B18(o, &D_sc07_006_8018E7A0);
            func_8012A828(o, &D_sc07_006_801F2608);
            AF(o, s16, 0x98) = 0;
            AF(o, u16, 0x34) = 1;
            func_8002D4C8(0xBB8, 0);
        }
        func_8012C658(0x3AC, 5, o);
        break;
    case 1:
        t = AF(o, u8 *, 0xCC);
        if (t != 0 && AF(t, u16, 0) != 0) {
            AF(t, s32, 8) = AF(o, s32, 8) - 0xA80000;
        }
        t = AF(o, u8 *, 0xD0);
        if (t != 0 && AF(t, u16, 0) != 0) {
            AF(t, s32, 8) = AF(o, s32, 8) - 0xA80000;
        }
        if ((u8)D_sc07_006_801F6186 == 0xFF) {
            AF(o, s32, 0x1C) = 0x1E;
            AF(o, u16, 0x34) = 2;
        }
        func_8012C658(0x3AC, 5, o);
        break;
    case 2:
        t = AF(o, u8 *, 0xCC);
        if (t != 0 && AF(t, u16, 0) != 0) {
            AF(t, s32, 8) = AF(o, s32, 8) - 0xA80000;
        }
        t = AF(o, u8 *, 0xD0);
        if (t != 0 && AF(t, u16, 0) != 0) {
            AF(t, s32, 8) = AF(o, s32, 8) - 0xA80000;
        }
        if (--AF(o, s32, 0x1C) != 0) {
            break;
        }
        AF(o, u16, 0x34) = 3;
        func_801292C8(AF(o, s32, 0xCC));
        AF(o, s32, 0x1C) = 0x1E;
        func_8002D4C8(0xBC9, 0);
        for (i = 0; i < 10; i++) {
            p = func_8012913C(0x78);
            if (p != 0) {
                AF(p, u16, 6) = AF(o, u16, 6) - 0x28;
                AF(p, u16, 0xA) = AF(o, u16, 0xA) - 0xA8;
                AF(p, u16, 0xE) = AF(o, u16, 0xE);
                func_8001CD50(AF(p, s32, 0x20), &D_sc07_006_801F6180);
                AF(p, s32, 0x2C) = 2;
                AF(p, s32, 0x1C) = 1;
                if (i < 8) {
                    AF(AF(p, u8 *, 0x20), s16, 0x18) = AF(AF(p, u8 *, 0x20), s16, 0x1A) = 0x1000 - (i << 9);
                } else {
                    AF(AF(p, u8 *, 0x20), s16, 0x18) = AF(AF(p, u8 *, 0x20), s16, 0x1A) = 0x200;
                }
            }
        }
        for (i = 0; i < 0x30; i++) {
            q = func_8012C658(0x3AC, 0, o);
            if (q != 0) {
                a = rand();
                r = rand() % 160;
                AF(q, s32, 0xC) += rcos(a) * r * 16;
                AF(q, s32, 8) += rsin(a) * r * 16 - 0xC80000;
                AF(q, u16, 6) -= 0x40;
            }
        }
        break;
    case 3:
        if (AF(o, s32, 0x1C) < 7) {
            func_80016224(0xFF, 0);
        }
        if (--AF(o, s32, 0x1C) == 0) {
            AF(o, u16, 0x34) = 4;
            AF(o, s32, 0x1C) = 0x1E;
        }
        break;
    case 4:
        if (AF(o, s32, 0x1C) < 7) {
            func_80016224(0xFF, 0);
        }
        if (--AF(o, s32, 0x1C) == 0) {
            AF(o, u16, 0x34) = 5;
            AF(o, s16, 0x98) = 1;
            func_8002D4C8(0xBD5, 0);
            AF(o, s32, 0x1C) = 0x41;
        }
        break;
    case 5:
        if (AF(o, s32, 0x1C) < 7) {
            func_80016224(0xFF, 0);
        }
        AF(o, s32, 0x1C)--;
        if (AF(o, u16, 0x72) & 0x4000) {
            func_8012A828(o, &D_sc07_006_801BFCB4);
            AF(o, u16, 0x34) = 0;
            AF(o, u16, 2)++;
            func_8002D4C8(0xBB6, 0);
        }
        break;
    }
}

typedef struct { s16 field_0, field_2, field_4, field_6, field_8; u16 field_A; s16 field_C, field_E; s32 field_10; } struct_14_5;
extern s32 func_8012C51C();
extern void func_80178D18();
extern u8 *D_sc07_006_801BF604;
extern u8 D_sc07_006_801BF540;
extern u8 D_sc07_006_801BF588;
extern u8 D_sc07_006_801BF60C;
extern u8 D_sc07_006_801BF630;
extern u8 D_sc07_006_801BF658;
extern u8 D_sc07_006_801BF68C;
extern u8 D_sc07_006_801BF6CC;
extern u8 D_sc07_006_801CA678;
extern u8 D_sc07_006_801CAA38;
extern u16 *D_sc07_006_8018E034[];
extern u8 D_sc07_006_8018DFC0; extern u8 D_sc07_006_8018DFC8; extern u8 D_sc07_006_8018DFD0; extern u8 D_sc07_006_8018DFD8; extern u8 D_sc07_006_8018DFE0; extern u8 D_sc07_006_8018DFE8;
extern u8 D_sc07_006_8018DFF0; extern u8 D_sc07_006_8018DFF8; extern u8 D_sc07_006_8018E000; extern u8 D_sc07_006_8018E008; extern u8 D_sc07_006_8018E010; extern u8 D_sc07_006_8018E018;
extern u8 D_sc07_006_8018E020; extern u8 D_sc07_006_8018E028; extern u8 D_sc07_006_8018E030;

static inline s32 func_sc07_006_80183814_inline(u8 *o, u8 *r, s32 base) {
    s32 i;
    if (rsin(AF(o, s16, 0xFC)) >= (s16)AF(o, u16, 0x102)) {
        i = (s16)((s16)AF(o, u16, 0x102) / 455);
        if (i >= 10) {
            i = 9;
        }
        LoadImage(r, D_sc07_006_8018E034[i + base]);
        return 1;
    }
    return 0;
}

static inline s32 func_sc07_006_80183814_inline_2(u8 *o, u8 *r, s32 base) {
    s32 i;
    if (rsin(AF(o, s16, 0xFC)) >= (s16)AF(o, u16, 0x102)) {
        i = (s16)((s16)AF(o, u16, 0x102) / 409);
        if (i >= 10) {
            i = 9;
        }
        LoadImage(r, D_sc07_006_8018E034[i + base]);
        return 1;
    }
    return 0;
}

static inline void func_sc07_006_80183814_inline_3(u8 *b, u8 *tb, s32 t) {
    func_sc07_006_8017D8A4((struct_C_3 *)b, (struct_C_3 *)tb, (struct_C_3 *)(tb + 0x30), t, 1);
}

void func_sc07_006_80183814(u8 *o) {
    struct_20_6 m;
    struct_8_9 out;
    struct_14_5 d;
    s32 t;
    s32 i;
    u8 *e;

    t = rsin(AF(o, s16, 0xFC)) + (rsin(AF(o, s16, 0xFE)) >> 4);
    AF(o, u16, 0xFE) = (AF(o, u16, 0xFE) + 0x300) & 0xFFF;
    if (AF(o, u16, 0x34) < 0x11) {
        AF(o, s32, 8) = (AF(o, s16, 0x8A) << 16) + (rsin(AF(o, s16, 0x104)) << 7);
        AF(o, u16, 0x104) += 0x40;
    }
    switch (AF(o, u16, 0x34)) {
    case 0:
        AF(o, u16, 0xFC) += 8;
        func_sc07_006_8017F9AC(t, o);
        func_sc07_006_80183814_inline_3(D_sc07_006_801BFCB4 + 0x3C, &D_sc07_006_8018E27C, t);
        func_sc07_006_80183814_inline_3(D_sc07_006_801BFCB4 + 0x48, &D_sc07_006_8018E288, t);
        func_sc07_006_80183814_inline_3(D_sc07_006_801BFCB4 + 0x54, &D_sc07_006_8018E294, t);
        func_sc07_006_80183814_inline_3(D_sc07_006_801BFCB4 + 0x60, &D_sc07_006_8018E2A0, t);
        func_sc07_006_8017FDF8(rsin(AF(o, s16, 0xFC)));
        func_sc07_006_80183814_inline(o, &D_sc07_006_8018DFC0, 0x0);
        func_sc07_006_80183814_inline(o, &D_sc07_006_8018DFC8, 0x9);
        func_sc07_006_80183814_inline(o, &D_sc07_006_8018DFD0, 0x12);
        func_sc07_006_80183814_inline(o, &D_sc07_006_8018DFD8, 0x1B);
        func_sc07_006_80183814_inline(o, &D_sc07_006_8018DFE0, 0x24);
        if (func_sc07_006_80183814_inline(o, &D_sc07_006_8018DFE8, 0x2D)) {
            AF(o, u16, 0x102) += 0x1C7;
        }
        if (AF(o, s16, 0xFC) == 0x200) {
            for (i = 0; i < 16; i++) {
                e = func_8012C658(0x3AC, 0, o);
                if (e != 0) {
                    AF(e, u16, 0xE) -= 0x2D;
                    AF(e, u16, 0xA) -= 0x47;
                    AF(e, u16, 6) -= 5;
                }
            }
            func_8002D4C8(0xBBE, 0);
            func_sc07_006_8017F5D4(0x1000);
            func_sc07_006_80183814_inline_3(D_sc07_006_801BFCB4 + 0x3C, &D_sc07_006_8018E27C, 0x1000);
            func_sc07_006_80183814_inline_3(D_sc07_006_801BFCB4 + 0x48, &D_sc07_006_8018E288, 0x1000);
            func_sc07_006_80183814_inline_3(D_sc07_006_801BFCB4 + 0x54, &D_sc07_006_8018E294, 0x1000);
            func_sc07_006_80183814_inline_3(D_sc07_006_801BFCB4 + 0x60, &D_sc07_006_8018E2A0, 0x1000);
            AF(o, u16, 0x34) = 1;
            func_sc07_006_801805D4(t, o);
            func_8001C214(AF(o, s32, 0x20), &D_sc07_006_801BF540);
            func_8001D0E8(AF(o, s32, 0x20), 0x280, 0x1E0);
            AF(AF(o, u8 *, 0x20), s16, 0x12) = 0x400;
            func_8012A828(o, &D_sc07_006_801BFCBC);
            func_sc07_006_80183814_inline_3(D_sc07_006_801BFCBC + 0x3C, &D_sc07_006_8018E27C, t);
            func_sc07_006_80183814_inline_3(D_sc07_006_801BFCBC + 0x48, &D_sc07_006_8018E288, t);
            func_sc07_006_80183814_inline_3(D_sc07_006_801BFCBC + 0x54, &D_sc07_006_8018E294, t);
        }
        break;
    case 1:
        AF(o, u16, 0xFC) += 8;
        func_sc07_006_801805D4(t, o);
        func_sc07_006_80183814_inline_3(D_sc07_006_801BFCBC + 0x3C, &D_sc07_006_8018E27C, t);
        func_sc07_006_80183814_inline_3(D_sc07_006_801BFCBC + 0x48, &D_sc07_006_8018E288, t);
        func_sc07_006_80183814_inline_3(D_sc07_006_801BFCBC + 0x54, &D_sc07_006_8018E294, t);
        func_sc07_006_8017FDF8(rsin(AF(o, s16, 0xFC)));
        func_sc07_006_80183814_inline(o, &D_sc07_006_8018DFC0, 0x0);
        func_sc07_006_80183814_inline(o, &D_sc07_006_8018DFC8, 0x9);
        func_sc07_006_80183814_inline(o, &D_sc07_006_8018DFD0, 0x12);
        func_sc07_006_80183814_inline(o, &D_sc07_006_8018DFD8, 0x1B);
        func_sc07_006_80183814_inline(o, &D_sc07_006_8018DFE0, 0x24);
        if (func_sc07_006_80183814_inline(o, &D_sc07_006_8018DFE8, 0x2D)) {
            AF(o, u16, 0x102) += 0x1C7;
        }
        if (AF(o, s16, 0xFC) >= 0x400) {
            AF(o, u16, 0x34) = 2;
            AF(o, s32, 0x1C) = 0xA;
            func_sc07_006_801802EC(0x1000);
            func_sc07_006_80183814_inline_3(D_sc07_006_801BFCBC + 0x3C, &D_sc07_006_8018E27C, 0x1000);
            func_sc07_006_80183814_inline_3(D_sc07_006_801BFCBC + 0x48, &D_sc07_006_8018E288, 0x1000);
            func_sc07_006_80183814_inline_3(D_sc07_006_801BFCBC + 0x54, &D_sc07_006_8018E294, 0x1000);
            func_sc07_006_8017FDF8(0x1000);
        }
        break;
    case 2:
        if (AF(o, s32, 0x1C) < 7) {
            func_80016224(0xFF, 0);
        }
        if (--AF(o, s32, 0x1C) == 0) {
            AF(o, u16, 0x34) = 3;
            AF(o, s16, 0xFC) = 0;
            AF(o, s16, 0x102) = 0x1C7;
            func_8002D4C8(0xBB6, 0);
        }
        break;
    case 3:
        AF(o, u16, 0xFC) += 8;
        func_sc07_006_80180CFC(t, o);
        func_sc07_006_80183814_inline_3(D_sc07_006_801BFCBC + 0x84, &D_sc07_006_8018E2DC, t);
        func_sc07_006_80183814_inline_3(D_sc07_006_801BFCBC + 0x90, &D_sc07_006_8018E2E8, t);
        func_sc07_006_80183814_inline_3(D_sc07_006_801BFCBC + 0x9C, &D_sc07_006_8018E2F4, t);
        func_sc07_006_80183814_inline_3(D_sc07_006_801BFCBC + 0xA8, &D_sc07_006_8018E300, t);
        func_sc07_006_80181148(rsin(AF(o, s16, 0xFC)));
        func_sc07_006_80183814_inline(o, &D_sc07_006_8018DFF0, 0x36);
        func_sc07_006_80183814_inline(o, &D_sc07_006_8018DFF8, 0x3F);
        func_sc07_006_80183814_inline(o, &D_sc07_006_8018E000, 0x48);
        func_sc07_006_80183814_inline(o, &D_sc07_006_8018E008, 0x51);
        func_sc07_006_80183814_inline(o, &D_sc07_006_8018E010, 0x5A);
        if (func_sc07_006_80183814_inline(o, &D_sc07_006_8018E018, 0x63)) {
            AF(o, u16, 0x102) += 0x1C7;
        }
        if (AF(o, s16, 0xFC) >= 0x200) {
            for (i = 0; i < 16; i++) {
                e = func_8012C658(0x3AC, 0, o);
                if (e != 0) {
                    AF(e, u16, 0xE) += 0x2D;
                    AF(e, u16, 0xA) -= 0x47;
                    AF(e, u16, 6) -= 5;
                }
            }
            func_8002D4C8(0xBBE, 0);
            func_sc07_006_80180924(0x1000);
            func_sc07_006_80183814_inline_3(D_sc07_006_801BFCBC + 0x84, &D_sc07_006_8018E2DC, 0x1000);
            func_sc07_006_80183814_inline_3(D_sc07_006_801BFCBC + 0x90, &D_sc07_006_8018E2E8, 0x1000);
            func_sc07_006_80183814_inline_3(D_sc07_006_801BFCBC + 0x9C, &D_sc07_006_8018E2F4, 0x1000);
            func_sc07_006_80183814_inline_3(D_sc07_006_801BFCBC + 0xA8, &D_sc07_006_8018E300, 0x1000);
            AF(o, u16, 0x34) = 4;
            func_sc07_006_80181924(t, o);
            func_8001C214(AF(o, s32, 0x20), &D_sc07_006_801BF588);
            func_8001D0E8(AF(o, s32, 0x20), 0x280, 0x1E0);
            AF(AF(o, u8 *, 0x20), s16, 0x12) = 0x400;
            func_8012A828(o, &D_sc07_006_801BFCC4);
            func_sc07_006_80183814_inline_3(D_sc07_006_801BFCC4 + 0x84, &D_sc07_006_8018E2DC, t);
            func_sc07_006_80183814_inline_3(D_sc07_006_801BFCC4 + 0x90, &D_sc07_006_8018E2E8, t);
            func_sc07_006_80183814_inline_3(D_sc07_006_801BFCC4 + 0x9C, &D_sc07_006_8018E2F4, t);
        }
        break;
    case 4:
        AF(o, u16, 0xFC) += 8;
        func_sc07_006_80181924(t, o);
        func_sc07_006_80183814_inline_3(D_sc07_006_801BFCC4 + 0x84, &D_sc07_006_8018E2DC, t);
        func_sc07_006_80183814_inline_3(D_sc07_006_801BFCC4 + 0x90, &D_sc07_006_8018E2E8, t);
        func_sc07_006_80183814_inline_3(D_sc07_006_801BFCC4 + 0x9C, &D_sc07_006_8018E2F4, t);
        func_sc07_006_80181148(rsin(AF(o, s16, 0xFC)));
        func_sc07_006_80183814_inline(o, &D_sc07_006_8018DFF0, 0x36);
        func_sc07_006_80183814_inline(o, &D_sc07_006_8018DFF8, 0x3F);
        func_sc07_006_80183814_inline(o, &D_sc07_006_8018E000, 0x48);
        func_sc07_006_80183814_inline(o, &D_sc07_006_8018E008, 0x51);
        func_sc07_006_80183814_inline(o, &D_sc07_006_8018E010, 0x5A);
        if (func_sc07_006_80183814_inline(o, &D_sc07_006_8018E018, 0x63)) {
            AF(o, u16, 0x102) += 0x199;
        }
        if (AF(o, s16, 0xFC) >= 0x400) {
            AF(o, u16, 0x34) = 5;
            AF(o, s32, 0x1C) = 0xA;
            func_sc07_006_8018163C(0x1000);
            func_sc07_006_80183814_inline_3(D_sc07_006_801BFCC4 + 0x84, &D_sc07_006_8018E2DC, 0x1000);
            func_sc07_006_80183814_inline_3(D_sc07_006_801BFCC4 + 0x90, &D_sc07_006_8018E2E8, 0x1000);
            func_sc07_006_80183814_inline_3(D_sc07_006_801BFCC4 + 0x9C, &D_sc07_006_8018E2F4, 0x1000);
            func_sc07_006_80181148(0x1000);
        }
        break;
    case 5:
        if (AF(o, s32, 0x1C) < 7) {
            func_80016224(0xFF, 0);
        }
        if (--AF(o, s32, 0x1C) == 0) {
            AF(o, u16, 0x34) = 6;
            AF(o, s16, 0xFC) = 0;
            func_8001C214(AF(o, s32, 0x20), &D_sc07_006_801BF5CC);
            func_8001D0E8(AF(o, s32, 0x20), 0x280, 0x1E0);
            AF(AF(o, u8 *, 0x20), s16, 0x12) = 0x400;
            func_8012A828(o, &D_sc07_006_801BFCCC);
            func_8012C658(0x3AC, 1, o);
            AF(o, s16, 0x102) = 0x1C7;
            func_8002D4C8(0xBB9, 0);
            func_8002D4C8(0xC6F, 0);
        }
        break;
    case 6:
        AF(o, u16, 0xFC) += 8;
        func_sc07_006_8017DC1C_inline(t, D_sc07_006_801BF604, D_sc07_006_801C1EA0, D_sc07_006_801C1EA4);
        func_sc07_006_80181C74(o, t);
        if (AF(o, s16, 0xFC) >= 0x400) {
            AF(o, u16, 0x34) = 7;
            AF(o, s32, 0x1C) = 0xA;
            func_sc07_006_8017DC1C_inline(0x1000, D_sc07_006_801BF604, D_sc07_006_801C1EA0, D_sc07_006_801C1EA4);
            func_sc07_006_80181C74(o, 0x1000);
        }
        break;
    case 7:
        if (AF(o, s32, 0x1C) < 7) {
            func_80016224(0xFF, 0);
        }
        if (--AF(o, s32, 0x1C) == 0) {
            AF(o, u16, 0x34) = 8;
            AF(o, s16, 0xFC) = 0;
            func_8002D4C8(0xBBC, 0);
        }
        break;
    case 8:
        AF(o, u16, 0xFC) += 8;
        func_sc07_006_80181E64(rsin(AF(o, s16, 0xFC)), o);
        func_sc07_006_80182000(o, rsin(AF(o, s16, 0xFC)));
        func_sc07_006_80182158(rsin(AF(o, s16, 0xFC)));
        func_sc07_006_80183814_inline_2(o, &D_sc07_006_8018E030, 0x7E);
        func_sc07_006_80183814_inline_2(o, &D_sc07_006_8018E020, 0x6C);
        if (func_sc07_006_80183814_inline_2(o, &D_sc07_006_8018E028, 0x75)) {
            AF(o, u16, 0x102) += 0x199;
        }
        if (AF(o, s16, 0xFC) >= 0x200) {
            func_8001C214(AF(o, s32, 0x20), &D_sc07_006_801BF60C);
            func_8001D0E8(AF(o, s32, 0x20), 0x280, 0x1E0);
            AF(AF(o, u8 *, 0x20), s16, 0x12) = 0x400;
            func_8012A828(o, &D_sc07_006_801BFCD4);
            func_8012C658(0x3AC, 2, o);
            func_8012C658(0x3AC, 3, o);
            AF(o, u16, 0x34) = 9;
            func_sc07_006_80181E64(rsin(AF(o, s16, 0xFC)), o);
            func_sc07_006_8017D8A4((struct_C_3 *)D_sc07_006_801BFCD4, (struct_C_3 *)&D_sc07_006_8018E3A8, (struct_C_3 *)(&D_sc07_006_8018E3A8 + 0xB4), rsin(AF(o, s16, 0xFC)), 1);
        }
        break;
    case 9:
        AF(o, u16, 0xFC) += 8;
        func_sc07_006_80181E64(rsin(AF(o, s16, 0xFC)), o);
        func_sc07_006_8017D8A4((struct_C_3 *)D_sc07_006_801BFCD4, (struct_C_3 *)&D_sc07_006_8018E3A8, (struct_C_3 *)(&D_sc07_006_8018E3A8 + 0xB4), rsin(AF(o, s16, 0xFC)), 1);
        func_sc07_006_80182158(rsin(AF(o, s16, 0xFC)));
        func_sc07_006_80183814_inline_2(o, &D_sc07_006_8018E030, 0x7E);
        func_sc07_006_80183814_inline_2(o, &D_sc07_006_8018E020, 0x6C);
        if (func_sc07_006_80183814_inline_2(o, &D_sc07_006_8018E028, 0x75)) {
            AF(o, u16, 0x102) += 0x199;
        }
        if (AF(o, s16, 0xFC) >= 0x400) {
            AF(o, u16, 0x34) = 0xA;
            AF(o, s32, 0x1C) = 0xA;
            func_sc07_006_8017DC1C_inline(0x1000, D_sc07_006_801BF5CC, D_sc07_006_801C1E14, D_sc07_006_801C1E18);
            func_sc07_006_8017D8A4((struct_C_3 *)D_sc07_006_801BFCD4, (struct_C_3 *)&D_sc07_006_8018E3A8, (struct_C_3 *)(&D_sc07_006_8018E3A8 + 0xB4), 0x1000, 1);
            func_sc07_006_80182158(0x1000);
        }
        e = func_8012C658(0x3AC, 6, o);
        if (e != 0) {
            AF(e, u16, 6) -= 0x20;
            AF(e, u16, 0xA) -= 0x140;
            AF(e, u16, 0xE) -= 0x40;
            AF(e, s16, 0x12) = (rand() & 7) - 4;
            AF(e, s16, 0x16) = 0;
            AF(e, s16, 0x1A) = -((rand() & 7) + 0xA);
        }
        e = func_8012C658(0x3AC, 6, o);
        if (e != 0) {
            AF(e, u16, 6) -= 0x20;
            AF(e, u16, 0xA) -= 0x140;
            AF(e, u16, 0xE) += 0x40;
            AF(e, s16, 0x12) = (rand() & 7) - 4;
            AF(e, s16, 0x16) = 0;
            AF(e, s16, 0x1A) = (rand() & 7) + 0xA;
        }
        break;
    case 10:
        if (AF(o, s32, 0x1C) < 7) {
            func_80016224(0xFF, 0);
        }
        if (--AF(o, s32, 0x1C) == 0) {
            AF(o, u16, 0x34) = 0xB;
            AF(o, s16, 0xFC) = 0;
            func_8001C214(AF(o, s32, 0x20), &D_sc07_006_801BF630);
            func_8001D0E8(AF(o, s32, 0x20), 0x280, 0x1E0);
            AF(AF(o, u8 *, 0x20), s16, 0x12) = 0x400;
            func_8012A828(o, D_sc07_006_801BFCDC);
            func_8002D4C8(0xBBF, 0);
        }
        break;
    case 11:
        AF(o, u16, 0xFC) += 0x10;
        func_sc07_006_8017DC1C_inline(rsin(AF(o, s16, 0xFC)), D_sc07_006_801BF650, D_sc07_006_801C1EA4, D_sc07_006_801C1EA8);
        func_sc07_006_80182268(o, rsin(AF(o, s16, 0xFC)));
        if (AF(o, s16, 0xFC) >= 0x400) {
            AF(o, u16, 0x34) = 0xC;
            AF(o, s32, 0x1C) = 0x1E;
            func_sc07_006_8017DC1C_inline(0x1000, D_sc07_006_801BF650, D_sc07_006_801C1EA4, D_sc07_006_801C1EA8);
            func_sc07_006_80182268(o, 0x1000);
        }
        {
        s32 n;
        n = 0x8;
        func_8012EC04(o, n, &m);
        {
            s32 *q;
            s32 i;
            u8 *p;
            struct_8_4 *v;
            u32 c;
            for (i = 0, q = &D_sc07_006_801F61C0; i < 8; i++, q++) {
                if (*q % 80 == 0) {
                    p = AF(AF(AF(o, u8 *, 0x20), u8 *, 0x24), u8 *, 0x20);
                    if (AF(p, s32, 4) == 1) {
                        v = AF(p, struct_8_4 *, 0xC);
                    } else {
                        v = (struct_8_4 *)(p + (((AF(p, u32, 0xC) >> 2) << 2) + 0xC));
                    }
                    c = AF(p, u32, 0x10);
                    c--;
                    v += rand() % c;
                    func_8012F14C(&m, v, &out);
                    d.field_0 = out.field_0;
                    d.field_2 = out.field_2;
                    d.field_4 = out.field_4;
                    d.field_6 = 0x3C5;
                    d.field_E = n;
                    d.field_A = 0;
                    d.field_8 = 0;
                    d.field_10 = (s32)v;
                    d.field_C = 0x7FFF;
                    func_8012C51C(&d, o);
                }
            }
        }
        }
        break;
    case 12:
        if (AF(o, s32, 0x1C) < 7) {
            func_80016224(0xFF, 0);
        }
        AF(o, s32, 0x1C)--;
        {
        s32 n;
        n = 0x8;
        func_8012EC04(o, n, &m);
        {
            s32 *q;
            s32 i;
            u8 *p;
            struct_8_4 *v;
            u32 c;
            for (i = 0, q = &D_sc07_006_801F61C0; i < 8; i++, q++) {
                if (*q % 80 == 0) {
                    p = AF(AF(AF(o, u8 *, 0x20), u8 *, 0x24), u8 *, 0x20);
                    if (AF(p, s32, 4) == 1) {
                        v = AF(p, struct_8_4 *, 0xC);
                    } else {
                        v = (struct_8_4 *)(p + (((AF(p, u32, 0xC) >> 2) << 2) + 0xC));
                    }
                    c = AF(p, u32, 0x10);
                    c--;
                    v += rand() % c;
                    func_8012F14C(&m, v, &out);
                    d.field_0 = out.field_0;
                    d.field_2 = out.field_2;
                    d.field_4 = out.field_4;
                    d.field_6 = 0x3C5;
                    d.field_E = n;
                    d.field_A = 0;
                    d.field_8 = 0;
                    d.field_10 = (s32)v;
                    d.field_C = 0x7FFF;
                    func_8012C51C(&d, o);
                }
            }
        }
        }
        if (AF(o, s32, 0x1C) == 0) {
            AF(o, u16, 0x34) = 0xD;
            AF(o, s16, 0xFC) = 0;
            func_8001C214(AF(o, s32, 0x20), &D_sc07_006_801BF658);
            func_8001D0E8(AF(o, s32, 0x20), 0x280, 0x1E0);
            AF(AF(o, u8 *, 0x20), s16, 0x12) = 0x400;
            func_8012A828(o, &D_sc07_006_801BFCE4);
            func_8002D4C8(0xBBD, 0);
        }
        break;
    case 13:
        AF(o, u16, 0xFC) += 0x60;
        func_sc07_006_801823F8(rsin(AF(o, s16, 0xFC)));
        func_sc07_006_801826E0(o, rsin(AF(o, s16, 0xFC)));
        if (AF(o, s16, 0xFC) >= 0x400) {
            AF(o, u16, 0x34) = 0xE;
            AF(o, s32, 0x1C) = 0x1E;
            func_sc07_006_801823F8(0x1000);
            func_sc07_006_801826E0(o, 0x1000);
        }
        {
        s32 n;
        s32 one;
        n = 0x1;
        func_8012EC04(o, n, &m);
        {
            s32 *q;
            s32 i;
            u8 *p;
            struct_8_4 *v;
            u32 c;
            for (i = 0, one = 1, q = &D_sc07_006_801F61C0; i < 4; i++, q++) {
                if (*q % 80 == 0) {
                    p = AF(AF(AF(o, u8 *, 0x20), u8 *, 0x24), u8 *, 0x4);
                    if (AF(p, s32, 4) == one) {
                        v = AF(p, struct_8_4 *, 0xC);
                    } else {
                        v = (struct_8_4 *)(p + (((AF(p, u32, 0xC) >> 2) << 2) + 0xC));
                    }
                    c = AF(p, u32, 0x10);
                    c--;
                    v += rand() % c;
                    func_8012F14C(&m, v, &out);
                    d.field_0 = out.field_0;
                    d.field_2 = out.field_2;
                    d.field_4 = out.field_4;
                    d.field_6 = 0x3C5;
                    d.field_E = n;
                    d.field_A = 0;
                    d.field_8 = 0;
                    d.field_10 = (s32)v;
                    d.field_C = 0x7FFF;
                    func_8012C51C(&d, o);
                }
            }
        }
        }
        {
        s32 n;
        n = 0x2;
        func_8012EC04(o, n, &m);
        {
            s32 *q;
            s32 i;
            u8 *p;
            struct_8_4 *v;
            u32 c;
            for (i = 4, q = &D_sc07_006_801F61C0 + 4; i < 8; i++, q++) {
                if (*q % 80 == 0) {
                    p = AF(AF(AF(o, u8 *, 0x20), u8 *, 0x24), u8 *, 0x8);
                    if (AF(p, s32, 4) == 1) {
                        v = AF(p, struct_8_4 *, 0xC);
                    } else {
                        v = (struct_8_4 *)(p + (((AF(p, u32, 0xC) >> 2) << 2) + 0xC));
                    }
                    c = AF(p, u32, 0x10);
                    c--;
                    v += rand() % c;
                    func_8012F14C(&m, v, &out);
                    d.field_0 = out.field_0;
                    d.field_2 = out.field_2;
                    d.field_4 = out.field_4;
                    d.field_6 = 0x3C5;
                    d.field_E = n;
                    d.field_A = 0;
                    d.field_8 = 0;
                    d.field_10 = (s32)v;
                    d.field_C = 0x7FFF;
                    func_8012C51C(&d, o);
                }
            }
        }
        }
        {
        s32 n;
        n = 0xB;
        func_8012EC04(o, n, &m);
        {
            s32 *q;
            s32 i;
            u8 *p;
            struct_8_4 *v;
            u32 c;
            for (i = 8, q = &D_sc07_006_801F61C0 + 8; i < 12; i++, q++) {
                if (*q % 80 == 0) {
                    p = AF(AF(AF(o, u8 *, 0x20), u8 *, 0x24), u8 *, 0x2C);
                    if (AF(p, s32, 4) == 1) {
                        v = AF(p, struct_8_4 *, 0xC);
                    } else {
                        v = (struct_8_4 *)(p + (((AF(p, u32, 0xC) >> 2) << 2) + 0xC));
                    }
                    c = AF(p, u32, 0x10);
                    c--;
                    v += rand() % c;
                    func_8012F14C(&m, v, &out);
                    d.field_0 = out.field_0;
                    d.field_2 = out.field_2;
                    d.field_4 = out.field_4;
                    d.field_6 = 0x3C5;
                    d.field_E = n;
                    d.field_A = 0;
                    d.field_8 = 0;
                    d.field_10 = (s32)v;
                    d.field_C = 0x7FFF;
                    func_8012C51C(&d, o);
                }
            }
        }
        }
        break;
    case 14:
        {
        s32 n;
        s32 one;
        n = 0x1;
        func_8012EC04(o, n, &m);
        {
            s32 *q;
            s32 i;
            u8 *p;
            struct_8_4 *v;
            u32 c;
            for (i = 0, one = 1, q = &D_sc07_006_801F61C0; i < 4; i++, q++) {
                if (*q % 80 == 0) {
                    p = AF(AF(AF(o, u8 *, 0x20), u8 *, 0x24), u8 *, 0x4);
                    if (AF(p, s32, 4) == one) {
                        v = AF(p, struct_8_4 *, 0xC);
                    } else {
                        v = (struct_8_4 *)(p + (((AF(p, u32, 0xC) >> 2) << 2) + 0xC));
                    }
                    c = AF(p, u32, 0x10);
                    c--;
                    v += rand() % c;
                    func_8012F14C(&m, v, &out);
                    d.field_0 = out.field_0;
                    d.field_2 = out.field_2;
                    d.field_4 = out.field_4;
                    d.field_6 = 0x3C5;
                    d.field_E = n;
                    d.field_A = 0;
                    d.field_8 = 0;
                    d.field_10 = (s32)v;
                    d.field_C = 0x7FFF;
                    func_8012C51C(&d, o);
                }
            }
        }
        }
        {
        s32 n;
        n = 0x2;
        func_8012EC04(o, n, &m);
        {
            s32 *q;
            s32 i;
            u8 *p;
            struct_8_4 *v;
            u32 c;
            for (i = 4, q = &D_sc07_006_801F61C0 + 4; i < 8; i++, q++) {
                if (*q % 80 == 0) {
                    p = AF(AF(AF(o, u8 *, 0x20), u8 *, 0x24), u8 *, 0x8);
                    if (AF(p, s32, 4) == 1) {
                        v = AF(p, struct_8_4 *, 0xC);
                    } else {
                        v = (struct_8_4 *)(p + (((AF(p, u32, 0xC) >> 2) << 2) + 0xC));
                    }
                    c = AF(p, u32, 0x10);
                    c--;
                    v += rand() % c;
                    func_8012F14C(&m, v, &out);
                    d.field_0 = out.field_0;
                    d.field_2 = out.field_2;
                    d.field_4 = out.field_4;
                    d.field_6 = 0x3C5;
                    d.field_E = n;
                    d.field_A = 0;
                    d.field_8 = 0;
                    d.field_10 = (s32)v;
                    d.field_C = 0x7FFF;
                    func_8012C51C(&d, o);
                }
            }
        }
        }
        {
        s32 n;
        n = 0xB;
        func_8012EC04(o, n, &m);
        {
            s32 *q;
            s32 i;
            u8 *p;
            struct_8_4 *v;
            u32 c;
            for (i = 8, q = &D_sc07_006_801F61C0 + 8; i < 12; i++, q++) {
                if (*q % 80 == 0) {
                    p = AF(AF(AF(o, u8 *, 0x20), u8 *, 0x24), u8 *, 0x2C);
                    if (AF(p, s32, 4) == 1) {
                        v = AF(p, struct_8_4 *, 0xC);
                    } else {
                        v = (struct_8_4 *)(p + (((AF(p, u32, 0xC) >> 2) << 2) + 0xC));
                    }
                    c = AF(p, u32, 0x10);
                    c--;
                    v += rand() % c;
                    func_8012F14C(&m, v, &out);
                    d.field_0 = out.field_0;
                    d.field_2 = out.field_2;
                    d.field_4 = out.field_4;
                    d.field_6 = 0x3C5;
                    d.field_E = n;
                    d.field_A = 0;
                    d.field_8 = 0;
                    d.field_10 = (s32)v;
                    d.field_C = 0x7FFF;
                    func_8012C51C(&d, o);
                }
            }
        }
        }
        if (AF(o, s32, 0x1C) < 7) {
            func_80016224(0xFF, 0);
        }
        if (--AF(o, s32, 0x1C) == 0) {
            AF(o, u16, 0x34) = 0xF;
            AF(o, s16, 0xFC) = 0;
            func_8001C214(AF(o, s32, 0x20), &D_sc07_006_801BF68C);
            func_8001D0E8(AF(o, s32, 0x20), 0x280, 0x1E0);
            AF(AF(o, u8 *, 0x20), s16, 0x12) = 0x400;
            func_8012A828(o, &D_sc07_006_801BFCEC);
            func_8002D4C8(0xBBD, 0);
        }
        break;
    case 15:
        AF(o, u16, 0xFC) += 0x60;
        func_sc07_006_801828A4(rsin(AF(o, s16, 0xFC)));
        func_sc07_006_80182B8C(o, rsin(AF(o, s16, 0xFC)));
        if (AF(o, s16, 0xFC) >= 0x400) {
            AF(o, u16, 0x34) = 0x10;
            AF(o, s32, 0x1C) = 0x1E;
            func_sc07_006_801828A4(0x1000);
            func_sc07_006_80182B8C(o, 0x1000);
        }
        {
        s32 n;
        n = 0x6;
        func_8012EC04(o, n, &m);
        {
            s32 *q;
            s32 i;
            u8 *p;
            struct_8_4 *v;
            u32 c;
            for (i = 0, q = &D_sc07_006_801F61C0; i < 4; i++, q++) {
                if (*q % 80 == 0) {
                    p = AF(AF(AF(o, u8 *, 0x20), u8 *, 0x24), u8 *, 0x18);
                    if (AF(p, s32, 4) == 1) {
                        v = AF(p, struct_8_4 *, 0xC);
                    } else {
                        v = (struct_8_4 *)(p + (((AF(p, u32, 0xC) >> 2) << 2) + 0xC));
                    }
                    c = AF(p, u32, 0x10);
                    c--;
                    v += rand() % c;
                    func_8012F14C(&m, v, &out);
                    d.field_0 = out.field_0;
                    d.field_2 = out.field_2;
                    d.field_4 = out.field_4;
                    d.field_6 = 0x3C5;
                    d.field_E = n;
                    d.field_A = 0;
                    d.field_8 = 0;
                    d.field_10 = (s32)v;
                    d.field_C = 0x7FFF;
                    func_8012C51C(&d, o);
                }
            }
        }
        }
        {
        s32 n;
        n = 0x7;
        func_8012EC04(o, n, &m);
        {
            s32 *q;
            s32 i;
            u8 *p;
            struct_8_4 *v;
            u32 c;
            for (i = 4, q = &D_sc07_006_801F61C0 + 4; i < 8; i++, q++) {
                if (*q % 80 == 0) {
                    p = AF(AF(AF(o, u8 *, 0x20), u8 *, 0x24), u8 *, 0x1C);
                    if (AF(p, s32, 4) == 1) {
                        v = AF(p, struct_8_4 *, 0xC);
                    } else {
                        v = (struct_8_4 *)(p + (((AF(p, u32, 0xC) >> 2) << 2) + 0xC));
                    }
                    c = AF(p, u32, 0x10);
                    c--;
                    v += rand() % c;
                    func_8012F14C(&m, v, &out);
                    d.field_0 = out.field_0;
                    d.field_2 = out.field_2;
                    d.field_4 = out.field_4;
                    d.field_6 = 0x3C5;
                    d.field_E = n;
                    d.field_A = 0;
                    d.field_8 = 0;
                    d.field_10 = (s32)v;
                    d.field_C = 0x7FFF;
                    func_8012C51C(&d, o);
                }
            }
        }
        }
        {
        s32 n;
        n = 0x8;
        func_8012EC04(o, n, &m);
        {
            s32 *q;
            s32 i;
            u8 *p;
            struct_8_4 *v;
            u32 c;
            for (i = 8, q = &D_sc07_006_801F61C0 + 8; i < 12; i++, q++) {
                if (*q % 80 == 0) {
                    p = AF(AF(AF(o, u8 *, 0x20), u8 *, 0x24), u8 *, 0x20);
                    if (AF(p, s32, 4) == 1) {
                        v = AF(p, struct_8_4 *, 0xC);
                    } else {
                        v = (struct_8_4 *)(p + (((AF(p, u32, 0xC) >> 2) << 2) + 0xC));
                    }
                    c = AF(p, u32, 0x10);
                    c--;
                    v += rand() % c;
                    func_8012F14C(&m, v, &out);
                    d.field_0 = out.field_0;
                    d.field_2 = out.field_2;
                    d.field_4 = out.field_4;
                    d.field_6 = 0x3C5;
                    d.field_E = n;
                    d.field_A = 0;
                    d.field_8 = 0;
                    d.field_10 = (s32)v;
                    d.field_C = 0x7FFF;
                    func_8012C51C(&d, o);
                }
            }
        }
        }
        break;
    case 16:
        {
        s32 n;
        n = 0x6;
        func_8012EC04(o, n, &m);
        {
            s32 *q;
            s32 i;
            u8 *p;
            struct_8_4 *v;
            u32 c;
            for (i = 0, q = &D_sc07_006_801F61C0; i < 4; i++, q++) {
                if (*q % 80 == 0) {
                    p = AF(AF(AF(o, u8 *, 0x20), u8 *, 0x24), u8 *, 0x18);
                    if (AF(p, s32, 4) == 1) {
                        v = AF(p, struct_8_4 *, 0xC);
                    } else {
                        v = (struct_8_4 *)(p + (((AF(p, u32, 0xC) >> 2) << 2) + 0xC));
                    }
                    c = AF(p, u32, 0x10);
                    c--;
                    v += rand() % c;
                    func_8012F14C(&m, v, &out);
                    d.field_0 = out.field_0;
                    d.field_2 = out.field_2;
                    d.field_4 = out.field_4;
                    d.field_6 = 0x3C5;
                    d.field_E = n;
                    d.field_A = 0;
                    d.field_8 = 0;
                    d.field_10 = (s32)v;
                    d.field_C = 0x7FFF;
                    func_8012C51C(&d, o);
                }
            }
        }
        }
        {
        s32 n;
        n = 0x7;
        func_8012EC04(o, n, &m);
        {
            s32 *q;
            s32 i;
            u8 *p;
            struct_8_4 *v;
            u32 c;
            for (i = 4, q = &D_sc07_006_801F61C0 + 4; i < 8; i++, q++) {
                if (*q % 80 == 0) {
                    p = AF(AF(AF(o, u8 *, 0x20), u8 *, 0x24), u8 *, 0x1C);
                    if (AF(p, s32, 4) == 1) {
                        v = AF(p, struct_8_4 *, 0xC);
                    } else {
                        v = (struct_8_4 *)(p + (((AF(p, u32, 0xC) >> 2) << 2) + 0xC));
                    }
                    c = AF(p, u32, 0x10);
                    c--;
                    v += rand() % c;
                    func_8012F14C(&m, v, &out);
                    d.field_0 = out.field_0;
                    d.field_2 = out.field_2;
                    d.field_4 = out.field_4;
                    d.field_6 = 0x3C5;
                    d.field_E = n;
                    d.field_A = 0;
                    d.field_8 = 0;
                    d.field_10 = (s32)v;
                    d.field_C = 0x7FFF;
                    func_8012C51C(&d, o);
                }
            }
        }
        }
        {
        s32 n;
        n = 0x8;
        func_8012EC04(o, n, &m);
        {
            s32 *q;
            s32 i;
            u8 *p;
            struct_8_4 *v;
            u32 c;
            for (i = 8, q = &D_sc07_006_801F61C0 + 8; i < 12; i++, q++) {
                if (*q % 80 == 0) {
                    p = AF(AF(AF(o, u8 *, 0x20), u8 *, 0x24), u8 *, 0x20);
                    if (AF(p, s32, 4) == 1) {
                        v = AF(p, struct_8_4 *, 0xC);
                    } else {
                        v = (struct_8_4 *)(p + (((AF(p, u32, 0xC) >> 2) << 2) + 0xC));
                    }
                    c = AF(p, u32, 0x10);
                    c--;
                    v += rand() % c;
                    func_8012F14C(&m, v, &out);
                    d.field_0 = out.field_0;
                    d.field_2 = out.field_2;
                    d.field_4 = out.field_4;
                    d.field_6 = 0x3C5;
                    d.field_E = n;
                    d.field_A = 0;
                    d.field_8 = 0;
                    d.field_10 = (s32)v;
                    d.field_C = 0x7FFF;
                    func_8012C51C(&d, o);
                }
            }
        }
        }
        if (AF(o, s32, 0x1C) < 7) {
            func_80016224(0xFF, 0);
        }
        if (--AF(o, s32, 0x1C) == 0) {
            AF(o, u16, 0x34) = 0x11;
            AF(o, s16, 0xFC) = 0;
        }
        break;
    case 17:
        if (AF(o, s16, 0xA) < -0x402) {
            AF(o, s16, 0xA)++;
        }
        AF(o, u16, 0xFC) += 0x10;
        func_sc07_006_80182D4C(o, rsin(AF(o, s16, 0xFC)));
        if (AF(o, s16, 0xFC) >= 0x400) {
            AF(o, u16, 0x34) = 0x12;
            AF(o, s32, 0x1C) = 3;
            func_sc07_006_80182D4C(o, 0x1000);
            func_8002D4C8(0xBC0, 0);
        }
        {
        s32 n;
        n = 0xD;
        func_8012EC04(o, n, &m);
        {
            s32 *q;
            s32 i;
            u8 *p;
            struct_8_4 *v;
            u32 c;
            for (i = 0, q = &D_sc07_006_801F61C0; i < 6; i++, q++) {
                if (*q % 80 == 0) {
                    p = AF(AF(AF(o, u8 *, 0x20), u8 *, 0x24), u8 *, 0x34);
                    if (AF(p, s32, 4) == 1) {
                        v = AF(p, struct_8_4 *, 0xC);
                    } else {
                        v = (struct_8_4 *)(p + (((AF(p, u32, 0xC) >> 2) << 2) + 0xC));
                    }
                    c = AF(p, u32, 0x10);
                    c--;
                    v += rand() % c;
                    func_8012F14C(&m, v, &out);
                    d.field_0 = out.field_0;
                    d.field_2 = out.field_2;
                    d.field_4 = out.field_4;
                    d.field_6 = 0x3C5;
                    d.field_E = n;
                    d.field_A = 0;
                    d.field_8 = 0;
                    d.field_10 = (s32)v;
                    d.field_C = 0x7FFF;
                    func_8012C51C(&d, o);
                }
            }
        }
        }
        {
        s32 n;
        n = 0xE;
        func_8012EC04(o, n, &m);
        {
            s32 *q;
            s32 i;
            u8 *p;
            struct_8_4 *v;
            u32 c;
            for (i = 6, q = &D_sc07_006_801F61C0 + 6; i < 8; i++, q++) {
                if (*q % 80 == 0) {
                    p = AF(AF(AF(o, u8 *, 0x20), u8 *, 0x24), u8 *, 0x38);
                    if (AF(p, s32, 4) == 1) {
                        v = AF(p, struct_8_4 *, 0xC);
                    } else {
                        v = (struct_8_4 *)(p + (((AF(p, u32, 0xC) >> 2) << 2) + 0xC));
                    }
                    c = AF(p, u32, 0x10);
                    c--;
                    v += rand() % c;
                    func_8012F14C(&m, v, &out);
                    d.field_0 = out.field_0;
                    d.field_2 = out.field_2;
                    d.field_4 = out.field_4;
                    d.field_6 = 0x3C5;
                    d.field_E = n;
                    d.field_A = 0;
                    d.field_8 = 0;
                    d.field_10 = (s32)v;
                    d.field_C = 0x7FFF;
                    func_8012C51C(&d, o);
                }
            }
        }
        }
        {
        s32 n;
        s32 one;
        n = 0x1;
        func_8012EC04(o, n, &m);
        {
            s32 *q;
            s32 i;
            u8 *p;
            struct_8_4 *v;
            u32 c;
            for (i = 8, one = 1, q = &D_sc07_006_801F61C0 + 8; i < 10; i++, q++) {
                if (*q % 80 == 0) {
                    p = AF(AF(AF(o, u8 *, 0x20), u8 *, 0x24), u8 *, 0x4);
                    if (AF(p, s32, 4) == one) {
                        v = AF(p, struct_8_4 *, 0xC);
                    } else {
                        v = (struct_8_4 *)(p + (((AF(p, u32, 0xC) >> 2) << 2) + 0xC));
                    }
                    c = AF(p, u32, 0x10);
                    c--;
                    v += rand() % c;
                    func_8012F14C(&m, v, &out);
                    d.field_0 = out.field_0;
                    d.field_2 = out.field_2;
                    d.field_4 = out.field_4;
                    d.field_6 = 0x3C5;
                    d.field_E = n;
                    d.field_A = 0;
                    d.field_8 = 0;
                    d.field_10 = (s32)v;
                    d.field_C = 0x7FFF;
                    func_8012C51C(&d, o);
                }
            }
        }
        }
        {
        s32 n;
        n = 0x2;
        func_8012EC04(o, n, &m);
        {
            s32 *q;
            s32 i;
            u8 *p;
            struct_8_4 *v;
            u32 c;
            for (i = 10, q = &D_sc07_006_801F61C0 + 10; i < 11; i++, q++) {
                if (*q % 80 == 0) {
                    p = AF(AF(AF(o, u8 *, 0x20), u8 *, 0x24), u8 *, 0x8);
                    if (AF(p, s32, 4) == 1) {
                        v = AF(p, struct_8_4 *, 0xC);
                    } else {
                        v = (struct_8_4 *)(p + (((AF(p, u32, 0xC) >> 2) << 2) + 0xC));
                    }
                    c = AF(p, u32, 0x10);
                    c--;
                    v += rand() % c;
                    func_8012F14C(&m, v, &out);
                    d.field_0 = out.field_0;
                    d.field_2 = out.field_2;
                    d.field_4 = out.field_4;
                    d.field_6 = 0x3C5;
                    d.field_E = n;
                    d.field_A = 0;
                    d.field_8 = 0;
                    d.field_10 = (s32)v;
                    d.field_C = 0x7FFF;
                    func_8012C51C(&d, o);
                }
            }
        }
        }
        {
        s32 n;
        n = 0x6;
        func_8012EC04(o, n, &m);
        {
            s32 *q;
            s32 i;
            u8 *p;
            struct_8_4 *v;
            u32 c;
            for (i = 11, q = &D_sc07_006_801F61C0 + 11; i < 13; i++, q++) {
                if (*q % 80 == 0) {
                    p = AF(AF(AF(o, u8 *, 0x20), u8 *, 0x24), u8 *, 0x18);
                    if (AF(p, s32, 4) == 1) {
                        v = AF(p, struct_8_4 *, 0xC);
                    } else {
                        v = (struct_8_4 *)(p + (((AF(p, u32, 0xC) >> 2) << 2) + 0xC));
                    }
                    c = AF(p, u32, 0x10);
                    c--;
                    v += rand() % c;
                    func_8012F14C(&m, v, &out);
                    d.field_0 = out.field_0;
                    d.field_2 = out.field_2;
                    d.field_4 = out.field_4;
                    d.field_6 = 0x3C5;
                    d.field_E = n;
                    d.field_A = 0;
                    d.field_8 = 0;
                    d.field_10 = (s32)v;
                    d.field_C = 0x7FFF;
                    func_8012C51C(&d, o);
                }
            }
        }
        }
        {
        s32 n;
        n = 0x7;
        func_8012EC04(o, n, &m);
        {
            s32 *q;
            s32 i;
            u8 *p;
            struct_8_4 *v;
            u32 c;
            for (i = 13, q = &D_sc07_006_801F61C0 + 13; i < 14; i++, q++) {
                if (*q % 80 == 0) {
                    p = AF(AF(AF(o, u8 *, 0x20), u8 *, 0x24), u8 *, 0x1C);
                    if (AF(p, s32, 4) == 1) {
                        v = AF(p, struct_8_4 *, 0xC);
                    } else {
                        v = (struct_8_4 *)(p + (((AF(p, u32, 0xC) >> 2) << 2) + 0xC));
                    }
                    c = AF(p, u32, 0x10);
                    c--;
                    v += rand() % c;
                    func_8012F14C(&m, v, &out);
                    d.field_0 = out.field_0;
                    d.field_2 = out.field_2;
                    d.field_4 = out.field_4;
                    d.field_6 = 0x3C5;
                    d.field_E = n;
                    d.field_A = 0;
                    d.field_8 = 0;
                    d.field_10 = (s32)v;
                    d.field_C = 0x7FFF;
                    func_8012C51C(&d, o);
                }
            }
        }
        }
        {
        s32 n;
        n = 0x8;
        func_8012EC04(o, n, &m);
        {
            s32 *q;
            s32 i;
            u8 *p;
            struct_8_4 *v;
            u32 c;
            for (i = 14, q = &D_sc07_006_801F61C0 + 14; i < 16; i++, q++) {
                if (*q % 80 == 0) {
                    p = AF(AF(AF(o, u8 *, 0x20), u8 *, 0x24), u8 *, 0x20);
                    if (AF(p, s32, 4) == 1) {
                        v = AF(p, struct_8_4 *, 0xC);
                    } else {
                        v = (struct_8_4 *)(p + (((AF(p, u32, 0xC) >> 2) << 2) + 0xC));
                    }
                    c = AF(p, u32, 0x10);
                    c--;
                    v += rand() % c;
                    func_8012F14C(&m, v, &out);
                    d.field_0 = out.field_0;
                    d.field_2 = out.field_2;
                    d.field_4 = out.field_4;
                    d.field_6 = 0x3C5;
                    d.field_E = n;
                    d.field_A = 0;
                    d.field_8 = 0;
                    d.field_10 = (s32)v;
                    d.field_C = 0x7FFF;
                    func_8012C51C(&d, o);
                }
            }
        }
        }
        break;
    case 18:
        {
        s32 n;
        n = 0xE;
        func_8012EC04(o, n, &m);
        {
            s32 *q;
            s32 i;
            u8 *p;
            struct_8_4 *v;
            u32 c;
            for (i = 0, q = &D_sc07_006_801F61C0; i < 3; i++, q++) {
                if (*q % 80 == 0) {
                    p = AF(AF(AF(o, u8 *, 0x20), u8 *, 0x24), u8 *, 0x38);
                    if (AF(p, s32, 4) == 1) {
                        v = AF(p, struct_8_4 *, 0xC);
                    } else {
                        v = (struct_8_4 *)(p + (((AF(p, u32, 0xC) >> 2) << 2) + 0xC));
                    }
                    c = AF(p, u32, 0x10);
                    c--;
                    v += rand() % c;
                    func_8012F14C(&m, v, &out);
                    d.field_0 = out.field_0;
                    d.field_2 = out.field_2;
                    d.field_4 = out.field_4;
                    d.field_6 = 0x3C5;
                    d.field_E = n;
                    d.field_A = 0;
                    d.field_8 = 0;
                    d.field_10 = (s32)v;
                    d.field_C = 0x7FFF;
                    func_8012C51C(&d, o);
                }
            }
        }
        }
        {
        s32 n;
        s32 one;
        n = 0x1;
        func_8012EC04(o, n, &m);
        {
            s32 *q;
            s32 i;
            u8 *p;
            struct_8_4 *v;
            u32 c;
            for (i = 3, one = 1, q = &D_sc07_006_801F61C0 + 3; i < 5; i++, q++) {
                if (*q % 80 == 0) {
                    p = AF(AF(AF(o, u8 *, 0x20), u8 *, 0x24), u8 *, 0x4);
                    if (AF(p, s32, 4) == one) {
                        v = AF(p, struct_8_4 *, 0xC);
                    } else {
                        v = (struct_8_4 *)(p + (((AF(p, u32, 0xC) >> 2) << 2) + 0xC));
                    }
                    c = AF(p, u32, 0x10);
                    c--;
                    v += rand() % c;
                    func_8012F14C(&m, v, &out);
                    d.field_0 = out.field_0;
                    d.field_2 = out.field_2;
                    d.field_4 = out.field_4;
                    d.field_6 = 0x3C5;
                    d.field_E = n;
                    d.field_A = 0;
                    d.field_8 = 0;
                    d.field_10 = (s32)v;
                    d.field_C = 0x7FFF;
                    func_8012C51C(&d, o);
                }
            }
        }
        }
        {
        s32 n;
        n = 0x2;
        func_8012EC04(o, n, &m);
        {
            s32 *q;
            s32 i;
            u8 *p;
            struct_8_4 *v;
            u32 c;
            for (i = 5, q = &D_sc07_006_801F61C0 + 5; i < 8; i++, q++) {
                if (*q % 80 == 0) {
                    p = AF(AF(AF(o, u8 *, 0x20), u8 *, 0x24), u8 *, 0x8);
                    if (AF(p, s32, 4) == 1) {
                        v = AF(p, struct_8_4 *, 0xC);
                    } else {
                        v = (struct_8_4 *)(p + (((AF(p, u32, 0xC) >> 2) << 2) + 0xC));
                    }
                    c = AF(p, u32, 0x10);
                    c--;
                    v += rand() % c;
                    func_8012F14C(&m, v, &out);
                    d.field_0 = out.field_0;
                    d.field_2 = out.field_2;
                    d.field_4 = out.field_4;
                    d.field_6 = 0x3C5;
                    d.field_E = n;
                    d.field_A = 0;
                    d.field_8 = 0;
                    d.field_10 = (s32)v;
                    d.field_C = 0x7FFF;
                    func_8012C51C(&d, o);
                }
            }
        }
        }
        {
        s32 n;
        n = 0x6;
        func_8012EC04(o, n, &m);
        {
            s32 *q;
            s32 i;
            u8 *p;
            struct_8_4 *v;
            u32 c;
            for (i = 8, q = &D_sc07_006_801F61C0 + 8; i < 11; i++, q++) {
                if (*q % 80 == 0) {
                    p = AF(AF(AF(o, u8 *, 0x20), u8 *, 0x24), u8 *, 0x18);
                    if (AF(p, s32, 4) == 1) {
                        v = AF(p, struct_8_4 *, 0xC);
                    } else {
                        v = (struct_8_4 *)(p + (((AF(p, u32, 0xC) >> 2) << 2) + 0xC));
                    }
                    c = AF(p, u32, 0x10);
                    c--;
                    v += rand() % c;
                    func_8012F14C(&m, v, &out);
                    d.field_0 = out.field_0;
                    d.field_2 = out.field_2;
                    d.field_4 = out.field_4;
                    d.field_6 = 0x3C5;
                    d.field_E = n;
                    d.field_A = 0;
                    d.field_8 = 0;
                    d.field_10 = (s32)v;
                    d.field_C = 0x7FFF;
                    func_8012C51C(&d, o);
                }
            }
        }
        }
        {
        s32 n;
        n = 0x7;
        func_8012EC04(o, n, &m);
        {
            s32 *q;
            s32 i;
            u8 *p;
            struct_8_4 *v;
            u32 c;
            for (i = 11, q = &D_sc07_006_801F61C0 + 11; i < 13; i++, q++) {
                if (*q % 80 == 0) {
                    p = AF(AF(AF(o, u8 *, 0x20), u8 *, 0x24), u8 *, 0x1C);
                    if (AF(p, s32, 4) == 1) {
                        v = AF(p, struct_8_4 *, 0xC);
                    } else {
                        v = (struct_8_4 *)(p + (((AF(p, u32, 0xC) >> 2) << 2) + 0xC));
                    }
                    c = AF(p, u32, 0x10);
                    c--;
                    v += rand() % c;
                    func_8012F14C(&m, v, &out);
                    d.field_0 = out.field_0;
                    d.field_2 = out.field_2;
                    d.field_4 = out.field_4;
                    d.field_6 = 0x3C5;
                    d.field_E = n;
                    d.field_A = 0;
                    d.field_8 = 0;
                    d.field_10 = (s32)v;
                    d.field_C = 0x7FFF;
                    func_8012C51C(&d, o);
                }
            }
        }
        }
        {
        s32 n;
        n = 0x8;
        func_8012EC04(o, n, &m);
        {
            s32 *q;
            s32 i;
            u8 *p;
            struct_8_4 *v;
            u32 c;
            for (i = 13, q = &D_sc07_006_801F61C0 + 13; i < 16; i++, q++) {
                if (*q % 80 == 0) {
                    p = AF(AF(AF(o, u8 *, 0x20), u8 *, 0x24), u8 *, 0x20);
                    if (AF(p, s32, 4) == 1) {
                        v = AF(p, struct_8_4 *, 0xC);
                    } else {
                        v = (struct_8_4 *)(p + (((AF(p, u32, 0xC) >> 2) << 2) + 0xC));
                    }
                    c = AF(p, u32, 0x10);
                    c--;
                    v += rand() % c;
                    func_8012F14C(&m, v, &out);
                    d.field_0 = out.field_0;
                    d.field_2 = out.field_2;
                    d.field_4 = out.field_4;
                    d.field_6 = 0x3C5;
                    d.field_E = n;
                    d.field_A = 0;
                    d.field_8 = 0;
                    d.field_10 = (s32)v;
                    d.field_C = 0x7FFF;
                    func_8012C51C(&d, o);
                }
            }
        }
        }
        if (AF(o, s32, 0x1C) < 7) {
            func_80016224(0xFF, 0);
        }
        if (--AF(o, s32, 0x1C) == 0) {
            AF(o, u16, 0x34) = 0x13;
            AF(o, s16, 0xFC) = 0;
            func_8001C214(AF(o, s32, 0x20), &D_sc07_006_801BF6CC);
            func_8001D0E8(AF(o, s32, 0x20), 0x280, 0x1E0);
            AF(AF(o, u8 *, 0x20), s16, 0x12) = 0x400;
            func_8012A828(o, &D_sc07_006_801CA678);
            AF(o, s32, 0x1C) = 0x79;
        }
        break;
    case 19:
        {
        s32 n;
        n = 0xC;
        func_8012EC04(o, n, &m);
        {
            s32 *q;
            s32 i;
            u8 *p;
            struct_8_4 *v;
            u32 c;
            for (i = 0, q = &D_sc07_006_801F61C0; i < 6; i++, q++) {
                if (*q % 80 == 0) {
                    p = AF(AF(AF(o, u8 *, 0x20), u8 *, 0x24), u8 *, 0x30);
                    if (AF(p, s32, 4) == 1) {
                        v = AF(p, struct_8_4 *, 0xC);
                    } else {
                        v = (struct_8_4 *)(p + (((AF(p, u32, 0xC) >> 2) << 2) + 0xC));
                    }
                    c = AF(p, u32, 0x10);
                    c--;
                    v += rand() % c;
                    func_8012F14C(&m, v, &out);
                    d.field_0 = out.field_0;
                    d.field_2 = out.field_2;
                    d.field_4 = out.field_4;
                    d.field_6 = 0x3C5;
                    d.field_E = n;
                    d.field_A = 0;
                    d.field_8 = 0;
                    d.field_10 = (s32)v;
                    d.field_C = 0x7FFF;
                    func_8012C51C(&d, o);
                }
            }
        }
        }
        if (AF(o, s32, 0x94) < 0x2E) {
            e = (u8 *)func_80143C74(o, 0);
            if (e != 0) {
                AF(e, u16, 0xE) -= rand() & 0x3F;
                AF(e, u16, 0xA) = (u16)(AF(e, u16, 0xA) - 0x8B) - (rand() & 0x3F);
                AF(e, u16, 6) -= 0x9E;
                AF(e, s32, 0x10) = ((rand() & 0xFF) - 0x80) << 10;
                AF(e, s32, 0x18) = ((rand() & 0xFF) - 0x80) << 10;
                AF(e, s16, 0x16) = -((rand() & 3) + 4);
                func_80128EA8(AF(e, s32, 0x20), e + 0xD0, &D_sc07_006_8018DF10);
                func_8012C658(0x3AC, 6, e);
                func_8012C658(0x3AC, 6, e);
            }
        }
        if (AF(o, s32, 0x94) == 0x45 || AF(o, s32, 0x94) == 0x50) {
            func_8002D4C8(0xBBA, 0);
        }
        if (AF(o, s32, 0x94) == 0x49 || AF(o, s32, 0x94) == 0x56) {
            func_8002D4C8(0xBBB, 0);
        }
        if (--AF(o, s32, 0x1C) == 0) {
            AF(o, u16, 0x34) = 0x14;
            func_8012A828(o, &D_sc07_006_801CAA38);
        }
        break;
    case 20:
        {
        s32 n;
        n = 0xC;
        func_8012EC04(o, n, &m);
        {
            s32 *q;
            s32 i;
            u8 *p;
            struct_8_4 *v;
            u32 c;
            for (i = 0, q = &D_sc07_006_801F61C0; i < 4; i++, q++) {
                if (*q % 80 == 0) {
                    p = AF(AF(AF(o, u8 *, 0x20), u8 *, 0x24), u8 *, 0x30);
                    if (AF(p, s32, 4) == 1) {
                        v = AF(p, struct_8_4 *, 0xC);
                    } else {
                        v = (struct_8_4 *)(p + (((AF(p, u32, 0xC) >> 2) << 2) + 0xC));
                    }
                    c = AF(p, u32, 0x10);
                    c--;
                    v += rand() % c;
                    func_8012F14C(&m, v, &out);
                    d.field_0 = out.field_0;
                    d.field_2 = out.field_2;
                    d.field_4 = out.field_4;
                    d.field_6 = 0x3C5;
                    d.field_E = n;
                    d.field_A = 0;
                    d.field_8 = 0;
                    d.field_10 = (s32)v;
                    d.field_C = 0x7FFF;
                    func_8012C51C(&d, o);
                }
            }
        }
        }
        {
        s32 n;
        n = 0x9;
        func_8012EC04(o, n, &m);
        {
            s32 *q;
            s32 i;
            u8 *p;
            struct_8_4 *v;
            u32 c;
            for (i = 4, q = &D_sc07_006_801F61C0 + 4; i < 6; i++, q++) {
                if (*q % 80 == 0) {
                    p = AF(AF(AF(o, u8 *, 0x20), u8 *, 0x24), u8 *, 0x24);
                    if (AF(p, s32, 4) == 1) {
                        v = AF(p, struct_8_4 *, 0xC);
                    } else {
                        v = (struct_8_4 *)(p + (((AF(p, u32, 0xC) >> 2) << 2) + 0xC));
                    }
                    c = AF(p, u32, 0x10);
                    c--;
                    v += rand() % c;
                    func_8012F14C(&m, v, &out);
                    d.field_0 = out.field_0;
                    d.field_2 = out.field_2;
                    d.field_4 = out.field_4;
                    d.field_6 = 0x3C5;
                    d.field_E = n;
                    d.field_A = 0;
                    d.field_8 = 0;
                    d.field_10 = (s32)v;
                    d.field_C = 0x7FFF;
                    func_8012C51C(&d, o);
                }
            }
        }
        }
        {
        s32 n;
        n = 0xA;
        func_8012EC04(o, n, &m);
        {
            s32 *q;
            s32 i;
            u8 *p;
            struct_8_4 *v;
            u32 c;
            for (i = 6, q = &D_sc07_006_801F61C0 + 6; i < 7; i++, q++) {
                if (*q % 80 == 0) {
                    p = AF(AF(AF(o, u8 *, 0x20), u8 *, 0x24), u8 *, 0x28);
                    if (AF(p, s32, 4) == 1) {
                        v = AF(p, struct_8_4 *, 0xC);
                    } else {
                        v = (struct_8_4 *)(p + (((AF(p, u32, 0xC) >> 2) << 2) + 0xC));
                    }
                    c = AF(p, u32, 0x10);
                    c--;
                    v += rand() % c;
                    func_8012F14C(&m, v, &out);
                    d.field_0 = out.field_0;
                    d.field_2 = out.field_2;
                    d.field_4 = out.field_4;
                    d.field_6 = 0x3C5;
                    d.field_E = n;
                    d.field_A = 0;
                    d.field_8 = 0;
                    d.field_10 = (s32)v;
                    d.field_C = 0x7FFF;
                    func_8012C51C(&d, o);
                }
            }
        }
        }
        {
        s32 n;
        n = 0xB;
        func_8012EC04(o, n, &m);
        {
            s32 *q;
            s32 i;
            u8 *p;
            struct_8_4 *v;
            u32 c;
            for (i = 7, q = &D_sc07_006_801F61C0 + 7; i < 10; i++, q++) {
                if (*q % 80 == 0) {
                    p = AF(AF(AF(o, u8 *, 0x20), u8 *, 0x24), u8 *, 0x2C);
                    if (AF(p, s32, 4) == 1) {
                        v = AF(p, struct_8_4 *, 0xC);
                    } else {
                        v = (struct_8_4 *)(p + (((AF(p, u32, 0xC) >> 2) << 2) + 0xC));
                    }
                    c = AF(p, u32, 0x10);
                    c--;
                    v += rand() % c;
                    func_8012F14C(&m, v, &out);
                    d.field_0 = out.field_0;
                    d.field_2 = out.field_2;
                    d.field_4 = out.field_4;
                    d.field_6 = 0x3C5;
                    d.field_E = n;
                    d.field_A = 0;
                    d.field_8 = 0;
                    d.field_10 = (s32)v;
                    d.field_C = 0x7FFF;
                    func_8012C51C(&d, o);
                }
            }
        }
        }
        {
        s32 n;
        n = 0xD;
        func_8012EC04(o, n, &m);
        {
            s32 *q;
            s32 i;
            u8 *p;
            struct_8_4 *v;
            u32 c;
            for (i = 10, q = &D_sc07_006_801F61C0 + 10; i < 12; i++, q++) {
                if (*q % 80 == 0) {
                    p = AF(AF(AF(o, u8 *, 0x20), u8 *, 0x24), u8 *, 0x34);
                    if (AF(p, s32, 4) == 1) {
                        v = AF(p, struct_8_4 *, 0xC);
                    } else {
                        v = (struct_8_4 *)(p + (((AF(p, u32, 0xC) >> 2) << 2) + 0xC));
                    }
                    c = AF(p, u32, 0x10);
                    c--;
                    v += rand() % c;
                    func_8012F14C(&m, v, &out);
                    d.field_0 = out.field_0;
                    d.field_2 = out.field_2;
                    d.field_4 = out.field_4;
                    d.field_6 = 0x3C5;
                    d.field_E = n;
                    d.field_A = 0;
                    d.field_8 = 0;
                    d.field_10 = (s32)v;
                    d.field_C = 0x7FFF;
                    func_8012C51C(&d, o);
                }
            }
        }
        }
        {
        s32 n;
        n = 0xE;
        func_8012EC04(o, n, &m);
        {
            s32 *q;
            s32 i;
            u8 *p;
            struct_8_4 *v;
            u32 c;
            for (i = 12, q = &D_sc07_006_801F61C0 + 12; i < 13; i++, q++) {
                if (*q % 80 == 0) {
                    p = AF(AF(AF(o, u8 *, 0x20), u8 *, 0x24), u8 *, 0x38);
                    if (AF(p, s32, 4) == 1) {
                        v = AF(p, struct_8_4 *, 0xC);
                    } else {
                        v = (struct_8_4 *)(p + (((AF(p, u32, 0xC) >> 2) << 2) + 0xC));
                    }
                    c = AF(p, u32, 0x10);
                    c--;
                    v += rand() % c;
                    func_8012F14C(&m, v, &out);
                    d.field_0 = out.field_0;
                    d.field_2 = out.field_2;
                    d.field_4 = out.field_4;
                    d.field_6 = 0x3C5;
                    d.field_E = n;
                    d.field_A = 0;
                    d.field_8 = 0;
                    d.field_10 = (s32)v;
                    d.field_C = 0x7FFF;
                    func_8012C51C(&d, o);
                }
            }
        }
        }
        {
        s32 n;
        n = 0xF;
        func_8012EC04(o, n, &m);
        {
            s32 *q;
            s32 i;
            u8 *p;
            struct_8_4 *v;
            u32 c;
            for (i = 13, q = &D_sc07_006_801F61C0 + 13; i < 16; i++, q++) {
                if (*q % 80 == 0) {
                    p = AF(AF(AF(o, u8 *, 0x20), u8 *, 0x24), u8 *, 0x3C);
                    if (AF(p, s32, 4) == 1) {
                        v = AF(p, struct_8_4 *, 0xC);
                    } else {
                        v = (struct_8_4 *)(p + (((AF(p, u32, 0xC) >> 2) << 2) + 0xC));
                    }
                    c = AF(p, u32, 0x10);
                    c--;
                    v += rand() % c;
                    func_8012F14C(&m, v, &out);
                    d.field_0 = out.field_0;
                    d.field_2 = out.field_2;
                    d.field_4 = out.field_4;
                    d.field_6 = 0x3C5;
                    d.field_E = n;
                    d.field_A = 0;
                    d.field_8 = 0;
                    d.field_10 = (s32)v;
                    d.field_C = 0x7FFF;
                    func_8012C51C(&d, o);
                }
            }
        }
        }
        break;
    }
    if (((s32 (*)())func_80178970)(o) != 0) {
        func_80178D18(o);
        AF(o, s16, 2) = 3;
    }
}

extern s32 func_8012C51C();

void func_sc07_006_8018881C(u8 *o) {
    struct_20_6 m;
    struct_8_9 out;
    struct_14_5 d;
    u8 *p;
    struct_8_4 *v;
    u32 c;
    s32 n;

    n = 0xC;
    func_8012EC04(o, n, &m);
    {
        s32 *q;
        s32 i;
        for (i = 0, q = &D_sc07_006_801F61C0; i < 4; i++, q++) {
            if (*q % 80 == 0) {
                p = AF(AF(AF(o, u8 *, 0x20), u8 *, 0x24), u8 *, 0x30);
                if (AF(p, s32, 4) == 1) {
                    v = AF(p, struct_8_4 *, 0xC);
                } else {
                    v = (struct_8_4 *)(p + (((AF(p, u32, 0xC) >> 2) << 2) + 0xC));
                }
                c = AF(p, u32, 0x10);
                c--;
                v += rand() % c;
                func_8012F14C(&m, v, &out);
                d.field_0 = out.field_0;
                d.field_2 = out.field_2;
                d.field_4 = out.field_4;
                d.field_6 = 0x3C5;
                d.field_E = n;
                d.field_A = 0;
                d.field_8 = 0;
                d.field_10 = (s32)v;
                d.field_C = 0x7FFF;
                func_8012C51C(&d, o);
            }
    }
    }
    n = 0x9;
    func_8012EC04(o, n, &m);
    {
        s32 *q;
        s32 i;
        for (i = 4, q = &D_sc07_006_801F61C0 + 4; i < 6; i++, q++) {
            if (*q % 80 == 0) {
                p = AF(AF(AF(o, u8 *, 0x20), u8 *, 0x24), u8 *, 0x24);
                if (AF(p, s32, 4) == 1) {
                    v = AF(p, struct_8_4 *, 0xC);
                } else {
                    v = (struct_8_4 *)(p + (((AF(p, u32, 0xC) >> 2) << 2) + 0xC));
                }
                c = AF(p, u32, 0x10);
                c--;
                v += rand() % c;
                func_8012F14C(&m, v, &out);
                d.field_0 = out.field_0;
                d.field_2 = out.field_2;
                d.field_4 = out.field_4;
                d.field_6 = 0x3C5;
                d.field_E = n;
                d.field_A = 0;
                d.field_8 = 0;
                d.field_10 = (s32)v;
                d.field_C = 0x7FFF;
                func_8012C51C(&d, o);
            }
    }
    }
    n = 0xA;
    func_8012EC04(o, n, &m);
    {
        s32 *q;
        s32 i;
        for (i = 6, q = &D_sc07_006_801F61C0 + 6; i < 7; i++, q++) {
            if (*q % 80 == 0) {
                p = AF(AF(AF(o, u8 *, 0x20), u8 *, 0x24), u8 *, 0x28);
                if (AF(p, s32, 4) == 1) {
                    v = AF(p, struct_8_4 *, 0xC);
                } else {
                    v = (struct_8_4 *)(p + (((AF(p, u32, 0xC) >> 2) << 2) + 0xC));
                }
                c = AF(p, u32, 0x10);
                c--;
                v += rand() % c;
                func_8012F14C(&m, v, &out);
                d.field_0 = out.field_0;
                d.field_2 = out.field_2;
                d.field_4 = out.field_4;
                d.field_6 = 0x3C5;
                d.field_E = n;
                d.field_A = 0;
                d.field_8 = 0;
                d.field_10 = (s32)v;
                d.field_C = 0x7FFF;
                func_8012C51C(&d, o);
            }
    }
    }
    n = 0xB;
    func_8012EC04(o, n, &m);
    {
        s32 *q;
        s32 i;
        for (i = 7, q = &D_sc07_006_801F61C0 + 7; i < 10; i++, q++) {
            if (*q % 80 == 0) {
                p = AF(AF(AF(o, u8 *, 0x20), u8 *, 0x24), u8 *, 0x2C);
                if (AF(p, s32, 4) == 1) {
                    v = AF(p, struct_8_4 *, 0xC);
                } else {
                    v = (struct_8_4 *)(p + (((AF(p, u32, 0xC) >> 2) << 2) + 0xC));
                }
                c = AF(p, u32, 0x10);
                c--;
                v += rand() % c;
                func_8012F14C(&m, v, &out);
                d.field_0 = out.field_0;
                d.field_2 = out.field_2;
                d.field_4 = out.field_4;
                d.field_6 = 0x3C5;
                d.field_E = n;
                d.field_A = 0;
                d.field_8 = 0;
                d.field_10 = (s32)v;
                d.field_C = 0x7FFF;
                func_8012C51C(&d, o);
            }
    }
    }
    n = 0xD;
    func_8012EC04(o, n, &m);
    {
        s32 *q;
        s32 i;
        for (i = 10, q = &D_sc07_006_801F61C0 + 10; i < 12; i++, q++) {
            if (*q % 80 == 0) {
                p = AF(AF(AF(o, u8 *, 0x20), u8 *, 0x24), u8 *, 0x34);
                if (AF(p, s32, 4) == 1) {
                    v = AF(p, struct_8_4 *, 0xC);
                } else {
                    v = (struct_8_4 *)(p + (((AF(p, u32, 0xC) >> 2) << 2) + 0xC));
                }
                c = AF(p, u32, 0x10);
                c--;
                v += rand() % c;
                func_8012F14C(&m, v, &out);
                d.field_0 = out.field_0;
                d.field_2 = out.field_2;
                d.field_4 = out.field_4;
                d.field_6 = 0x3C5;
                d.field_E = n;
                d.field_A = 0;
                d.field_8 = 0;
                d.field_10 = (s32)v;
                d.field_C = 0x7FFF;
                func_8012C51C(&d, o);
            }
    }
    }
    n = 0xE;
    func_8012EC04(o, n, &m);
    {
        s32 *q;
        s32 i;
        for (i = 12, q = &D_sc07_006_801F61C0 + 12; i < 13; i++, q++) {
            if (*q % 80 == 0) {
                p = AF(AF(AF(o, u8 *, 0x20), u8 *, 0x24), u8 *, 0x38);
                if (AF(p, s32, 4) == 1) {
                    v = AF(p, struct_8_4 *, 0xC);
                } else {
                    v = (struct_8_4 *)(p + (((AF(p, u32, 0xC) >> 2) << 2) + 0xC));
                }
                c = AF(p, u32, 0x10);
                c--;
                v += rand() % c;
                func_8012F14C(&m, v, &out);
                d.field_0 = out.field_0;
                d.field_2 = out.field_2;
                d.field_4 = out.field_4;
                d.field_6 = 0x3C5;
                d.field_E = n;
                d.field_A = 0;
                d.field_8 = 0;
                d.field_10 = (s32)v;
                d.field_C = 0x7FFF;
                func_8012C51C(&d, o);
            }
    }
    }
    n = 0xF;
    func_8012EC04(o, n, &m);
    {
        s32 *q;
        s32 i;
        for (i = 13, q = &D_sc07_006_801F61C0 + 13; i < 16; i++, q++) {
            if (*q % 80 == 0) {
                p = AF(AF(AF(o, u8 *, 0x20), u8 *, 0x24), u8 *, 0x3C);
                if (AF(p, s32, 4) == 1) {
                    v = AF(p, struct_8_4 *, 0xC);
                } else {
                    v = (struct_8_4 *)(p + (((AF(p, u32, 0xC) >> 2) << 2) + 0xC));
                }
                c = AF(p, u32, 0x10);
                c--;
                v += rand() % c;
                func_8012F14C(&m, v, &out);
                d.field_0 = out.field_0;
                d.field_2 = out.field_2;
                d.field_4 = out.field_4;
                d.field_6 = 0x3C5;
                d.field_E = n;
                d.field_A = 0;
                d.field_8 = 0;
                d.field_10 = (s32)v;
                d.field_C = 0x7FFF;
                func_8012C51C(&d, o);
            }
    }
    }
}

void func_sc07_006_80189098(u8 *arg0) {
    s32 *var_v1;
    s32 var_a0;

    D_sc07_006_8018E940[AF(arg0, u16, 2)]();
    var_a0 = 0;
    var_v1 = &D_sc07_006_801F61C0;
    do {
        var_a0 += 1;
        *var_v1 += 1;
        var_v1 = (s32 *)((u8 *)var_v1 + 4);
    } while (var_a0 < 0x10);
}

void func_sc07_006_801890FC(u8 *o) {
    s32 m;
    s32 a;
    s32 r;

    if ((AF(o, s32, 0x20) = m = func_8012C1B8()) == 0) {
        func_8012CAE4(o);
        return;
    }
    switch (AF(o, s16, 0x70)) {
    case 0:
        func_8001CA1C(AF(o, s32, 0x20), &D_sc07_006_8018E950);
        func_8012A828(o, &D_sc07_006_8018E968);
        AF(AF(o, u8 *, 0x20), s32, 4) |= 0x8000000;
        AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x10;
        func_8012B23C(o);
        func_8012B2CC(o);
        AF(o, u16, 2) = 1;
        AF(o, s32, 0x1C) = 0x1E;
        AF(o, s16, 0x16) = (rand() & 7) - 4;
        a = rand();
        r = (rand() & 7) + 8;
        AF(o, s16, 0x12) = (rsin(a) * r) >> 12;
        AF(o, s16, 0x1A) = (rcos(a) * r) >> 12;
        AF(AF(o, u8 *, 0x20), s16, 0x10) = rand();
        AF(AF(o, u8 *, 0x20), s16, 0x12) = rand();
        AF(AF(o, u8 *, 0x20), s16, 0x14) = rand();
        break;
    case 1:
        func_8001C214(AF(o, s32, 0x20), &D_sc07_006_801BF710);
        func_8001D0E8(AF(o, s32, 0x20), 0x280, 0x1E0);
        AF(AF(o, u8 *, 0x20), s16, 0x12) = 0x400;
        func_8012A828(o, &D_sc07_006_801BFCF4);
        func_8012B21C(o);
        AF(o, u16, 2) = 2;
        AF(o, s32, 0x1C) = 3;
        AF(o, s16, 0xFC) = 0;
        AF(o, s32, 0x48) >>= 2;
        AF(o, u16, 0xA) -= 0xAA;
        break;
    case 2:
        func_8001C214(AF(o, s32, 0x20), &D_sc07_006_801BF718);
        func_8001D0E8(AF(o, s32, 0x20), 0x280, 0x1E0);
        AF(AF(o, u8 *, 0x20), s16, 0x12) = 0x400;
        func_8012A828(o, &D_sc07_006_801BFCFC);
        func_8012B21C(o);
        AF(o, u16, 2) = 4;
        AF(o, s16, 0x1A) = -((rand() & 3) + 2);
        AF(o, s16, 0xFC) = 0x30;
        AF(o, s32, 0x1C) = 6;
        AF(o, s16, 0xFE) = 0xB;
        AF(o, u16, 0xE) -= 0x40;
        AF(o, u16, 0xA) -= 0xEE;
        AF(o, u16, 0x88) = AF(o, u16, 6) - 0x20;
        AF(o, u16, 0x8A) = AF(o, u16, 0xA) - 0x44;
        AF(o, u16, 0x8C) = AF(o, u16, 0xE) - 0x37;
        break;
    case 3:
        func_8001C214(AF(o, s32, 0x20), &D_sc07_006_801BF728);
        func_8001D0E8(AF(o, s32, 0x20), 0x280, 0x1E0);
        AF(AF(o, u8 *, 0x20), s16, 0x12) = 0x400;
        func_8012A828(o, &D_sc07_006_801BFD04);
        func_8012B21C(o);
        AF(o, u16, 2) = 4;
        AF(o, s16, 0x1A) = (rand() & 3) + 2;
        AF(o, s16, 0xFC) = -0x30;
        AF(o, s32, 0x1C) = 6;
        AF(o, u16, 0xE) += 0x40;
        AF(o, u16, 0xA) -= 0xEE;
        break;
    case 4:
        func_8001CA1C(AF(o, s32, 0x20), &D_sc07_006_8018E95C);
        func_8012A828(o, &D_sc07_006_8018E970);
        AF(AF(o, u8 *, 0x20), s32, 4) |= 0x8000000;
        AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x10;
        func_8012B23C(o);
        AF(o, u16, 2) = 3;
        AF(o, s32, 0x1C) = 0x78;
        AF(o, s16, 0x16) = (rand() & 7) - 4;
        AF(o, s16, 0xFC) = (rand() & 0x3FF) - 0x200;
        AF(AF(o, u8 *, 0x20), s16, 0x14) = rand();
        AF(AF(o, u8 *, 0x20), s16, 0x18) = AF(AF(o, u8 *, 0x20), s16, 0x1A) = (rand() & 0xFF) | 0x100;
        break;
    case 5:
        func_8001CA1C(AF(o, s32, 0x20), &D_sc07_006_8018E978);
        func_8012A828(o, &D_sc07_006_8018E9D8);
        AF(AF(o, u8 *, 0x20), s32, 4) |= 0x8000000;
        AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x10;
        AF(AF(o, u8 *, 0x20), s32, 4) |= 0x50000000;
        AF(o, u16, 2) = 5;
        AF(o, s32, 0x1C) = 0xF;
        a = rand();
        r = rand() % 96;
        AF(AF(o, u8 *, 0x20), s16, 0x14) = rand();
        AF(o, s32, 0x94) = rand() & 7;
        AF(o, s32, 0x14) = rsin(a) * r * 16 - 0xA80000;
        AF(o, s32, 0x18) = rcos(a) * r * 16;
        AF(o, u16, 6) -= 0x28;
        AF(AF(o, u8 *, 0x20), s16, 0x18) = AF(AF(o, u8 *, 0x20), s16, 0x1A) = 0x1999;
        break;
    case 6:
        if (rand() & 1) {
            func_8001CA1C(AF(o, s32, 0x20), &D_sc07_006_8018EA20);
            func_8012A828(o, &D_sc07_006_8018EA68);
            AF(AF(o, u8 *, 0x20), s16, 0x18) = AF(AF(o, u8 *, 0x20), s16, 0x1A) = (rand() & 0x1FF) | 0x200;
        } else {
            func_8001CA1C(AF(o, s32, 0x20), &D_sc07_006_8018EAA0);
            func_8012A828(o, &D_sc07_006_8018EAE8);
            AF(AF(o, u8 *, 0x20), s32, 4) |= 0x8000000;
            AF(o, s16, 0xFC) = rand() & 0x3F;
            AF(AF(o, u8 *, 0x20), s16, 0x14) = rand();
            AF(AF(o, u8 *, 0x20), s16, 0x18) = AF(AF(o, u8 *, 0x20), s16, 0x1A) = (rand() & 0x3FF) + 0x600;
        }
        AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x10;
        func_8012B23C(o);
        AF(o, u16, 2) = 3;
        AF(o, s32, 0x1C) = 0x78;
        AF(o, s16, 0x16) = rand() | 0xFFFC;
        AF(o, s32, 0x10) = AF(AF(o, u8 *, 0x64), s32, 0x10) << 2;
        AF(o, s32, 0x18) = AF(AF(o, u8 *, 0x64), s32, 0x18) << 2;
        break;
    }
}

void func_sc07_006_80189708(u8 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    u16 temp_v1;
    void *temp_a0;
    void *temp_a1;

    temp_v1 = AF(arg0, u16, 0x34);
    switch (temp_v1) {                              /* irregular */
    case 0:
        temp_v0 = AF(arg0, s32, 0x1C);
        if (temp_v0 != 0) {
            AF(arg0, s32, 0x1C) = (s32) (temp_v0 - 1);
            temp_v0_2 = func_80143C74((s32) arg0, 0);
            if (temp_v0_2 != 0) {
                AF(temp_v0_2, u16, 0xA) = (u16) (AF(temp_v0_2, u16, 0xA) - 0x14);
                AF(temp_v0_2, s32, 0x10) = (s32) (((rand() & 0xFF) - 0x80) << 0xA);
                AF(temp_v0_2, s32, 0x18) = (s32) (((rand() & 0xFF) - 0x80) << 0xA);
                AF(temp_v0_2, s16, 0x16) = (s16) -((rand() & 3) + 4);
                func_80128EA8(AF(temp_v0_2, s32, 0x20), temp_v0_2 + 0xD0, (s32) &D_sc07_006_8018DF10);
            }
        }
        temp_a1 = AF(arg0, void *, 0x20);
        AF(temp_a1, u16, 0x14) = (u16) (AF(temp_a1, u16, 0x14) + AF(arg0, u16, 0xFC));
        if (func_8012CBCC((s32) arg0, (s32) temp_a1) & 0x2000) {
            AF(arg0, u16, 0x34) = 1U;
            AF(arg0, s32, 0x1C) = 0x1E;
            return;
        }
        return;
    case 1:
        temp_a0 = AF(arg0, void *, 0x20);
        AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) ^ 0x80000000);
        temp_v0_3 = AF(arg0, s32, 0x1C) - 1;
        AF(arg0, s32, 0x1C) = temp_v0_3;
        if (temp_v0_3 == 0) {
            func_8012C218((s32) arg0);
        }
        break;
    }
}

void func_sc07_006_8018984C(u8 *o) {
    struct_8_4 a;
    struct_8_4 b;
    u8 *e;
    s16 *t;
    s32 n;
    s32 i;
    s32 k;
    s32 c;
    s32 s;

    switch (AF(o, u16, 0x34)) {
    case 0:
        if (AF(o, s32, 0x1C) != 0) {
            AF(o, s32, 0x1C)--;
            e = (u8 *)func_80143C74(o, 0);
            if (e != 0) {
                AF(e, s16, 6) = AF(o, s16, 6) + AF(o, u16, 0x12) * 4 - 0x20;
                AF(e, s16, 0xA) = AF(e, s16, 0xA) - 0x28;
                AF(e, s16, 0xE) = AF(o, s16, 0xE) + AF(o, u16, 0x1A) * 4;
                AF(e, s32, 0x10) = ((rand() & 0xFF) - 0x80) << 10;
                AF(e, s32, 0x18) = ((rand() & 0xFF) - 0x80) << 10;
                AF(e, s16, 0x16) = -((rand() & 3) + 4);
                func_80128EA8(AF(e, s32, 0x20), e + 0xD0, &D_sc07_006_8018DF10);
            }
        }
        AF(AF(o, u8 *, 0x20), s16, 0x14) += AF(o, s16, 0xFC);
        if (func_8012CBCC(o) & 0x2000) {
            AF(o, u16, 0x34) = 1;
            AF(o, s32, 0x1C) = 0x1E;
        }
        break;
    case 1:
        AF(AF(o, u8 *, 0x20), s32, 4) ^= 0x80000000;
        if (--AF(o, s32, 0x1C) == 0) {
            func_8012C218(o);
            return;
        }
        break;
    }
    if (AF(o, s16, 0xFE) != 0) {
        n = --AF(o, s16, 0xFE);
        if (n >= 7) {
            n = 6;
        }
        for (i = 0; i < n; i++) {
            c = rcos(D_sc07_006_8018EB20[i]) * (0xC - n);
            s = rsin(D_sc07_006_8018EB20[i]) * (0xC - n);
            a.field_0 = AF(o, s16, 6) + (s16)((c >> 14) - 0x20);
            a.field_2 = AF(o, s16, 0xA) + (s16)((s >> 14) - 0x44);
            a.field_4 = AF(o, s16, 0xE) - 0x37;
            b.field_0 = AF(o, s16, 0x88) + (c >> 12);
            b.field_2 = AF(o, s16, 0x8A) + (s >> 12);
            b.field_4 = AF(o, s16, 0x8C);
            func_8012D3B4(&a, &b, 0x6000);
        }
    }
}

void func_sc07_006_80189AC8(u8 *arg0) {
    D_sc07_006_8018EB2C[AF(arg0, u16, 2)]();
}

void func_sc07_006_80189B04(u8 *arg0) {
    D_sc07_006_8018EB44[AF(arg0, u16, 2)]();
}

void func_sc07_006_80189B40(u8 *o) {
    if ((AF(o, s32, 0x20) = func_8012C1B8()) == 0) {
        func_8012CAE4(o);
        return;
    }
    func_8001C214(AF(o, s32, 0x20), 0);
    AF(o, s32, 0xE0) = rand() % 64 + 0x20;
    AF(o, s32, 0xE8) = rand() % 5 + 4;
    AF(o, s32, 0x48) = 0xC000;
    AF(o, s16, 2) += 1;
}

s32 func_sc07_006_80189C00(u8 *arg0) {
    return (u16) AF(arg0, u16, 0x34) >= 3U;
}

s32 func_sc07_006_80189C14(u8 *arg0) {
    return (u16) AF(arg0, u16, 0x34) >= 6U;
}

s32 func_sc07_006_80189C28(u8 *arg0) {
    return (u16) AF(arg0, u16, 0x34) >= 8U;
}

s32 func_sc07_006_80189C3C(u8 *arg0) {
    return (u16) AF(arg0, u16, 0x34) >= 0xBU;
}

s32 func_sc07_006_80189C50(u8 *arg0) {
    return (u16) AF(arg0, u16, 0x34) >= 0xDU;
}

s32 func_sc07_006_80189C64(u8 *arg0) {
    return (u16) AF(arg0, u16, 0x34) >= 0xFU;
}

s32 func_sc07_006_80189C78(u8 *arg0) {
    return (u16) AF(arg0, u16, 0x34) >= 0x11U;
}

s32 func_sc07_006_80189C8C(u8 *arg0) {
    return (u16) AF(arg0, u16, 0x34) >= 0x13U;
}

s32 func_sc07_006_80189CA0(u8 *arg0) {
    return (u16) AF(arg0, u16, 0x34) >= 0x14U;
}

s32 func_sc07_006_80189CB4(u8 *arg0) {
    return (u16) AF(arg0, u16, 2) >= 2U;
}

s32 func_sc07_006_80189CC8(u8 *arg0) {
    return (u16) AF(arg0, u16, 0x34) >= 4U;
}

s32 func_sc07_006_80189CDC(u8 *arg0) {
    return (u16) AF(arg0, u16, 0x34) >= 5U;
}

void func_sc07_006_80189CF0(void) {
    func_800D1724((s32) &D_sc07_006_8018DE1C);
}

void func_sc07_006_80189D18(void) {
    func_sc07_006_8017D040(0);
}

void func_sc07_006_80189D38(void) {
    func_sc07_006_8017D040(1);
}

void func_sc07_006_80189D58(void) {
    func_sc07_006_8017D040(2);
}

void func_sc07_006_80189D78(void) {
    func_sc07_006_8017D040(3);
}

void func_sc07_006_80189D98(void) {
    func_sc07_006_8017D040(4);
}

void func_sc07_006_80189DB8(u8 *arg0) {
    s32 temp_v0;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_5;

    if (AF(arg0, s32, 0x1C) == 0x1E) {
        temp_v0 = func_80143C74((s32) arg0, 0);
        if (temp_v0 != 0) {
            AF(temp_v0, s16, 6) = (s16) (AF(arg0, u16, 6) + (AF(arg0, u16, 0x12) * 4));
            AF(temp_v0, s16, 0xA) = (s16) (AF(arg0, u16, 0xA) + (AF(arg0, u16, 0x16) * 4));
            AF(temp_v0, s16, 0xE) = (s16) (AF(arg0, u16, 0xE) + (AF(arg0, u16, 0x1A) * 4));
        }
    }
    AF(arg0, s32, 0x1C) = (s32) (AF(arg0, s32, 0x1C) - 1);
    if ((func_8012CBCC((s32) arg0) & 0x2000) || (AF(arg0, s32, 0x1C) == 0)) {
        func_8012C218((s32) arg0);
        return;
    }
    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x18) = (u16) (AF(temp_v1, u16, 0x18) - 0x88);
    temp_v1_2 = AF(arg0, void *, 0x20);
    AF(temp_v1_2, u16, 0x1A) = (u16) (AF(temp_v1_2, u16, 0x1A) - 0x88);
    temp_v1_3 = AF(arg0, void *, 0x20);
    AF(temp_v1_3, u16, 0x10) = (u16) (AF(temp_v1_3, u16, 0x10) + 0x200);
    temp_v1_4 = AF(arg0, void *, 0x20);
    AF(temp_v1_4, u16, 0x12) = (u16) (AF(temp_v1_4, u16, 0x12) + 0x100);
    temp_v1_5 = AF(arg0, void *, 0x20);
    AF(temp_v1_5, u16, 0x14) = (u16) (AF(temp_v1_5, u16, 0x14) + 0x80);
}

void func_sc07_006_80189EF4(u8 *arg0, s32 arg1) {
    void *temp_v0;

    AF(arg0, s32, 0x1C) = (s32) (AF(arg0, s32, 0x1C) - 1);
    if ((func_8012CBCC((s32) arg0, arg1) & 0x2000) || (AF(arg0, s32, 0x1C) == 0)) {
        func_8012C218((s32) arg0);
        return;
    }
    temp_v0 = AF(arg0, void *, 0x20);
    AF(temp_v0, u16, 0x14) = (u16) (AF(temp_v0, u16, 0x14) + AF(arg0, u16, 0xFC));
}

void func_sc07_006_80189F70(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == 0) {
        func_8012C218((s32) arg0);
        return;
    }
    AF(arg0, s32, 8) = (s32) (AF(AF(arg0, void *, 0x64), s32, 8) + AF(arg0, s32, 0x14));
    AF(arg0, s32, 0xC) = (s32) (AF(AF(arg0, void *, 0x64), s32, 0xC) + AF(arg0, s32, 0x18));
}

void func_sc07_006_80189FDC(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v1;
    void *temp_s0;

    temp_v1 = AF(arg0, s32, 0x2C);
    temp_s0 = AF(arg0, void *, 0x20);
    switch (temp_v1) {                              /* irregular */
    case 0:
        AF(temp_s0, s16, 0x12) = 0x400;
        AF(temp_s0, s32, 4) = (s32) (AF(temp_s0, s32, 4) | 0x60000000);
        D_sc07_006_801F6180 = 0;
        D_sc07_006_801F6184 = 0;
        D_sc07_006_801F6185 = 0;
        D_sc07_006_801F6186 = 0;
        D_sc07_006_801F6181 = 0;
        D_sc07_006_801F6182 = 0;
        AF(arg0, s32, 0x1C) = 0x3C;
        break;
    case 1:
        AF(temp_s0, s16, 0x12) = 0x400;
        AF(temp_s0, s32, 4) = (s32) (AF(temp_s0, s32, 4) | 0x50000000);
        D_sc07_006_801F6140 = 0xC0;
        D_sc07_006_801F6144 = 0;
        D_sc07_006_801F6145 = 0;
        D_sc07_006_801F6146 = 0;
        D_sc07_006_801F6141 = 0;
        D_sc07_006_801F6142 = 0;
        AF(arg0, s32, 0x1C) = 0x3C;
        break;
    case 2:
        AF(temp_s0, s16, 0x1E) = 0xC00;
        AF(temp_s0, s32, 4) = (s32) (AF(temp_s0, s32, 4) | 0x60000000);
        AF(temp_s0, s16, 0x10) = rand();
        AF(temp_s0, s16, 0x12) = rand();
        break;
    }
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc07_006_8018A124(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == 0) {
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc07_006_8018A150(u8 *o) {
    s32 v;
    u8 q;
    u8 *p;

    switch (AF(o, s32, 0x2C)) {
    case 0:
        p = &D_sc07_006_801F6186;
        v = *p + 4;
        if (v >= 0xFF) {
            AF(o, u16, 2)++;
            v = 0xFF;
        }
        q = v;
        D_sc07_006_801F6184 = q;
        D_sc07_006_801F6185 = q;
        *p = q;
        D_sc07_006_801F6180 = q;
        D_sc07_006_801F6181 = q;
        D_sc07_006_801F6182 = q;
        break;
    case 1:
        p = &D_sc07_006_801F6140;
        v = *p - 3;
        if (v > 0) {
            *p = v;
        } else {
            func_801292C8();
        }
        break;
    case 2:
        AF(AF(o, u8 *, 0x20), u16, 0x18) += 0x200;
        AF(AF(o, u8 *, 0x20), u16, 0x1A) += 0x200;
        if (AF(AF(o, u8 *, 0x20), s16, 0x18) >= 0x2000) {
            func_801292C8();
        }
        break;
    }
}

void func_sc07_006_8018A284(void) {
}

void func_sc07_006_8018A28C(u8 *arg0) {
    D_sc07_006_8018EB54[AF(arg0, u16, 2)]();
}

void func_sc07_006_8018A2C8(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 0xFC) = 0;
    AF(arg0, u16, 0x72) = (u16) (AF(arg0, u16, 0x72) | 0x1000);
    func_8012AD50((s32) arg0, arg1);
}

extern u8 *D_801151D4;
extern s32 func_8012A68C();
extern s32 func_8012A758();
extern u16 D_800B9AB8;
extern u16 D_800B9ABA;

void func_sc07_006_8018A2F4(void) {
    u8 *p = D_801151D4;
    struct_4_2 s;

    s.field_2 = -((s16) func_8012A68C() * 240 / 682);
    s.field_2 += 0x500 + AF(p, s32, 0x4C);
    if (s.field_2 < 0) {
        s.field_2 = 0;
    }
    s.field_0 = (s16) func_8012A758() * 320 / 4096;
    D_800B9AB8 = s.field_0;
    D_800B9ABA = s.field_2;
}
