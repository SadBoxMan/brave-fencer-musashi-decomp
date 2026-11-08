#include "common.h"
#include "gte.h"
#include "psyq.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_4;
typedef struct { s16 field_0[6]; } struct_C_3;
extern void (*D_sc01_004_80182CF8[])();
typedef struct { s16 field_0, field_2; } struct_4_2;
typedef struct { struct_4_2 field_0; s16 field_4; s16 field_6; struct_4_2 field_8; s32 field_C; s32 field_10; s32 field_14; s32 field_18; } struct_1C;
typedef struct { s32 field_0, field_4, field_8; } struct_C_4;
void func_sc01_004_8017D13C(void);
extern void func_800167B8();
extern s32 func_800167F0();
void func_sc01_004_8017D164(void);
extern void func_800D1EBC();
extern void (*D_sc01_004_80182D0C[])();
extern void (*D_sc01_004_80182D18[])();
void func_sc01_004_8017D18C(void);
extern u8 D_sc01_004_80182DD8;
extern void func_8016EE40();
extern u8 D_sc01_004_80182DE4;
extern u8 D_sc01_004_80182DF8;
extern void func_sc01_004_8017D1F8();
extern void (*D_sc01_004_80182E0C[])();
extern void func_sc01_004_8017D254();
extern s16 D_sc01_004_80190110;
extern u16 D_80115112;
extern u16 D_80115116;
extern void (*D_sc01_004_8018C2BC[])();
extern void func_80029444();
extern void func_801754A8();
extern void func_80141C04();
extern void (*D_sc01_004_8018C2EC[])();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

extern s16 D_8011511A;
extern s32 D_80115130;
extern s16 D_sc01_004_80190118;
extern s32 D_sc01_004_80190248;
extern s32 D_sc01_004_80190250;
extern void func_800D24A0();
extern void func_sc01_004_8017D4A4();
extern u16 D_800B9A02;
extern u16 D_80115114;
extern void func_800D2624();


extern s32 func_80029504();
extern void func_80029514();
extern s32 D_80126950;
extern s32 D_80126954;
extern s32 D_80126958;
extern void func_8012A018();
extern s32 func_8016F1AC();
extern void func_801746A4();
extern void func_sc01_004_8017D308();
extern s32 D_sc01_004_8018C2D4[];
s16 func_sc01_004_8017D2F8(void);
extern void func_sc01_004_8017D35C();
extern s32 func_sc01_004_8017D060();
extern void func_800D1724();

typedef struct { u16 field_0; u16 field_2; u8 field_4[28]; } struct_20_3;
typedef struct {
    s16 field_0; u8 field_2[0xC]; s16 field_E; u8 field_10[0xC];
    u8 field_1C[0x24]; s16 field_40[3];
} struct_46;
extern struct_46 D_80115118;
extern struct_20_3 *D_80115134;
extern u8 D_80115138[];
typedef struct { s16 field_0; } struct_2;
typedef struct { u8 field_0; } struct_1;
extern struct_1 D_80115140[];
extern struct_2 D_80115148[];
extern struct_20_3 *D_sc01_004_8018C12C[];
extern u8 *D_sc01_004_8018C180[];
extern u8 D_sc01_004_8018C178[];
extern u8 D_sc01_004_80190254[];
extern s16 D_sc01_004_80190114;
extern u16 D_sc01_004_8019011C;
extern u16 D_sc01_004_80190120;
extern s32 func_800291B4();
extern void func_sc01_004_8017D758();

typedef struct { s16 field_0[3][3]; s16 field_12; s32 field_14[3]; } struct_20_4;
typedef struct { u32 field_0; u32 field_4; u32 field_8; u32 field_C; u32 *field_10; } struct_14_2;
typedef struct { s32 field_0; s32 field_4; s32 field_8; s32 field_C; s32 field_10; s32 field_14; s32 field_18; } struct_1C_2;
extern u8 *D_800A5E60;
extern u32 D_800A6610[2][0x1000];

void func_sc01_004_8017BE9C(u8 *obj) {
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

void func_sc01_004_8017CD7C(void) {
    if ((u32) (func_80029504() - 0x47E) < 0x14U) {
        func_80029514(0x488);
    }
}

void func_sc01_004_8017CDB4(u8 *arg0) {
    D_sc01_004_80182CF8[AF(arg0, u8, 0x15)]();
}

s32 func_sc01_004_8017CDF0(u8 *arg0) {
    func_sc01_004_8017D13C();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc01_004_8017CE34(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

s32 func_sc01_004_8017CE58(u8 *arg0) {
    func_sc01_004_8017D164();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc01_004_8017CE98(u8 *arg0) {
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

void func_sc01_004_8017CF14(void) {
    func_800D1EBC();
}

void func_sc01_004_8017CF34(u8 *arg0) {
    D_sc01_004_80182D0C[AF(arg0, u8, 0x15)]();
}

s32 func_sc01_004_8017CF70(u8 *arg0) {
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

void func_sc01_004_8017CFE4(u8 *arg0) {
    D_sc01_004_80182D18[AF(arg0, u8, 0x15)]();
}

s32 func_sc01_004_8017D020(u8 *arg0) {
    func_sc01_004_8017D18C();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

extern s8 D_800B9A15;
extern s32 D_801151D0;
extern s32 D_sc01_004_8019024C;
extern s32 D_801151C8[];
extern s32 func_801399F0();
extern s32 func_80014ED4();
extern s32 func_8014168C();
extern s32 func_sc01_004_8017EB30();
extern void func_80139954();
extern void func_sc01_004_8017DF18();
extern void func_80137B80();
extern s16 D_80115126;
extern u8 D_sc01_004_8018C2B8;
extern s32 func_sc01_004_8017DC38();
extern s32 func_sc01_004_8017E5B8();
extern s32 func_801376E8();

typedef struct { s8 field_0; u8 field_1; } struct_2_2;
extern struct_2_2 D_80115158[];
extern u8 D_80115141;
extern u8 D_80115142;
extern u8 D_sc01_004_801802E4[];
extern s32 D_8010F3C4[];
extern u8 *D_sc01_004_80190244;

extern s16 D_8011515A;
extern u16 D_8011514A;
extern u16 D_8011514C;
extern void func_80029124();
extern u8 D_sc01_004_8018C318[];
extern u8 D_sc01_004_8018C340[];
extern u8 D_sc01_004_8018C37C[];
extern u8 D_sc01_004_8018C40C[];
extern u8 D_sc01_004_8018C434[];
extern u8 D_sc01_004_8018C48C[];
extern u8 D_sc01_004_8018C4FC[];
extern u8 D_sc01_004_8018C520[];
extern u8 D_sc01_004_8018C560[];
extern u8 D_sc01_004_8018C5AC[];
extern u8 D_sc01_004_8018C658[];

extern u16 D_sc01_004_8018BE9A;
extern u16 D_sc01_004_8018BEAE;
typedef struct { u32 *field_0; u8 field_4[8]; u32 *field_C; u8 field_10[4]; } struct_14_3;
typedef struct { u16 field_0; } struct_2_3;
extern struct_14_3 D_800AE7BC[];
typedef struct { u32 field_0; u32 field_4; s16 field_8, field_A; u8 field_C, field_D; u16 field_E; s16 field_10, field_12; } struct_14_4;

typedef struct { s16 field_0, field_2; } struct_4_3;
extern u8 D_801117EC;
extern u8 D_80112B58;
extern u8 D_80112B90;
extern u8 D_80112BA8;
extern u8 D_sc01_004_8018C19C[];
extern struct_4_3 D_sc01_004_8018C1C4[];
extern s32 D_sc01_004_8018C1E4[];
extern u8 *D_sc01_004_8018C200[];
extern u8 D_sc01_004_8018C300;
extern u8 D_sc01_004_8018C3C4;
extern u8 D_sc01_004_8018C3E0;
extern u8 D_sc01_004_8018C450;
extern u8 D_sc01_004_8018C4DC;
extern u8 D_sc01_004_8018C5D4;
extern u8 D_sc01_004_8018C60C;
extern u8 D_sc01_004_8018C634;
extern s32 func_sc01_004_8017EF8C();
extern s32 func_80029178();
extern void func_80139A44();
typedef struct { char *field_0; s32 field_4; } struct_8_5;
extern u8 D_80115139;
extern u16 D_8011515C;
extern char *D_sc01_004_8018BFCC[];
extern s32 D_sc01_004_8018C0A8;
extern char D_sc01_004_8018ED34[];
extern char D_sc01_004_80190124[][0x24];
extern u16 D_sc01_004_8018BFAC[];
extern struct_8_5 D_8010F468[];
extern s32 D_sc01_004_8018BFB8[];

extern u16 D_80115122;
extern u16 D_80115120;
extern s32 func_80015018();

extern u8 D_800B9A13;
extern s16 D_80115110;
extern void *D_8011DB24;
void func_8013E5E8(void);
extern u8 D_sc01_004_801802EA;

typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_6;
typedef struct { u16 field_0[6]; } struct_C_5;
typedef struct { u16 field_0, field_2, field_4, field_6; } struct_8_7;
typedef struct { u8 field_0, field_1, field_2, field_3; } struct_4_4;
typedef struct { struct_8_7 field_0; struct_8_7 field_8; struct_4_4 field_10; struct_4_4 field_14; s32 field_18; } struct_1C_3;
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_5;
typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_8;
typedef struct { struct_8_8 field_0[4]; struct_4_4 field_20[4]; s32 field_30; } struct_34_2;
typedef struct { u16 field_0; s16 field_2; s16 field_4; s16 field_6; s32 field_8; s32 field_C; } struct_10;
typedef struct { s16 field_0, field_2, field_4, field_6; u8 field_8, field_9; s16 field_A; struct_10 field_C[16]; } struct_10C_2;
typedef struct { s32 field_0; s32 field_4; s32 field_8; s16 field_C; s16 field_E; s32 field_10[2]; s32 field_18; s32 field_1C; s32 field_20; } struct_24;
typedef struct { s32 field_0, field_4, field_8, field_C; } struct_10_2;
typedef struct { u32 *field_0; u8 field_4[0x10]; } struct_14_5;
typedef struct { u8 field_0[0x14]; } struct_14_6;
typedef struct { unsigned field_0_b0 : 24; unsigned field_3_b0 : 8; } struct_4_5;
typedef struct { struct_C_5 field_0[9]; } struct_6C;
typedef struct { s32 field_0, field_4, field_8, field_C; } struct_10_3;
typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_9;
typedef struct { s32 field_0, field_4, field_8, field_C; } struct_10_4;
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_6;
typedef struct { u8 field_0, field_1, field_2, field_3; } struct_4_6;
typedef struct { struct_8_9 field_0[4]; struct_4_6 field_20[4]; s32 field_30; } struct_34_3;
typedef struct { s32 field_0, field_4, field_8; } struct_C_6;
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_7;
typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_10;
typedef struct { s16 field_0, field_2, field_4, field_6; s16 field_8, field_A, field_C, field_E; s32 field_10; } struct_14_7;
typedef struct { struct_8_4 field_0[4]; s32 field_20, field_24, field_28, field_2C, field_30, field_34; } struct_38;
typedef struct { s16 field_0; s16 field_2[5]; } struct_C_7;
typedef struct { u8 field_0; u8 field_1[11]; } struct_C_8;
typedef struct { u32 field_0; u32 field_4; s16 field_8, field_A; u8 field_C, field_D; u16 field_E; s16 field_10, field_12; } struct_14_8;
typedef struct { s8 field_0; u8 field_1; } struct_2_4;
typedef struct { u16 field_0; } struct_2_5;
typedef struct { u32 field_0; u8 field_4, field_5, field_6, field_7; s16 field_8, field_A; u8 field_C, field_D, field_E, field_F; s16 field_10, field_12; u8 field_14, field_15, field_16, field_17; s16 field_18, field_1A; u8 field_1C, field_1D, field_1E, field_1F; s16 field_20, field_22; } struct_24_2;
typedef struct { s32 field_0; } struct_4_7;
typedef struct { s32 field_0; u8 field_4[8]; } struct_C_9;
typedef struct { s32 field_0; s32 field_4; } struct_8_11;
typedef struct { u8 field_0, field_1, field_2, field_3; } struct_4_8;
typedef struct { u8 field_0[8]; } struct_8_12;
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_8;
typedef void (*type_2)();
typedef struct { u8 field_0[0x18]; struct_20_5 field_18; } struct_38_2;
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
typedef struct { u32 field_0; u32 field_4; } struct_8_13;
typedef struct { u8 field_0[0x10]; struct_4_2 field_10[13]; } struct_44;
typedef union { s32 m0; struct_4_2 m1; } union_4_2;
typedef struct { s16 field_0, field_2, field_4, field_6, field_8; u16 field_A; s16 field_C, field_E; s32 field_10; } struct_14_9;
typedef struct { s32 field_0[4]; } struct_10_6;
typedef struct { unsigned field_0_b0 : 31; unsigned field_3_b7 : 1; } struct_4_9;
typedef void (*type_3)(void);
extern u8 *func_800D27DC();
extern u8 * func_sc01_004_8017E1D4();
extern void func_80024054();
extern u8 *func_800D2650();
extern u8 *func_800D29F8();

extern struct_14_3 D_800AE7B8[];
extern s32 func_80137D08();
extern s32 func_8013AB54();
extern u8 D_sc01_004_8018BB58;
extern u8 D_sc01_004_8018BB6C;
extern u8 D_sc01_004_8018C2B0;

extern u8 D_80126B58;
extern s32 func_80148800();
extern s16 D_sc01_004_80182E10[];
extern void func_8002931C();
extern u8 D_sc01_004_80182DB4;
extern u8 D_sc01_004_80182D90;
extern u8 D_sc01_004_80182D6C;
extern u8 D_sc01_004_80182D24;
extern u8 D_sc01_004_80182D48;
extern u8 D_sc01_004_80182C74;

s32 func_sc01_004_8017D060(void) {
    s32 v;

    v = func_80029504();
    if ((u32) (v - 0x294) < 10) {
        return (s32) &D_sc01_004_80182DB4;
    }
    if ((func_80029178(0xB5) & 0xFF) != 0 || v >= 10) {
        if (v >= 0x384) {
            return (s32) &D_sc01_004_80182D90;
        }
        if (v >= 0x258) {
            return (s32) &D_sc01_004_80182D6C;
        }
        if (v >= 0xC8) {
            return (s32) &D_sc01_004_80182D48;
        }
        return (s32) &D_sc01_004_80182D24;
    }
    func_80029124(0xB5, 1);
    func_80029514(10);
    func_8002931C(0x21C0000);
    return (s32) &D_sc01_004_80182C74;
}

void func_sc01_004_8017D13C(void) {
    func_8016EE40((s32) &D_sc01_004_80182DD8, 0x01000000);
}

void func_sc01_004_8017D164(void) {
    func_8016EE40((s32) &D_sc01_004_80182DE4, 0x01000000);
}

void func_sc01_004_8017D18C(void) {
    func_8016EE40((s32) &D_sc01_004_80182DF8, 0x01000000);
}

void func_sc01_004_8017D1B4(void) {
    D_80126954 = 0x12C;
    D_80126950 = 0x12C;
    D_80126958 = 0x12C;
    func_8012A018((s32) func_sc01_004_8017D1F8, 0);
}

void func_sc01_004_8017D1F8(s32 arg0) {
    D_sc01_004_80182E0C[AF(arg0, u8, 4)]();
}

void func_sc01_004_8017D234(s32 arg0) {
    func_sc01_004_8017D254(arg0);
}

void func_sc01_004_8017D254(u8 *o) {
    u8 unused[0x30];

    if (func_80148800(&D_80126B58) & 3) {
        AF(o, u8, 5) = (AF(o, u8, 5) + 1) & 1;
        AF(o, s32, 0x14) = D_sc01_004_80182E10[AF(o, u8, 5)];
    }
    AF(o, s32, 0x3C) = -0xBE;
    AF(o, s32, 0x40) = -0xB0;
    AF(o, s32, 0x44) = 0x644;
    AF(o, s32, 0x48) = -0x82;
    AF(o, s32, 0x4C) = -0xE8;
    AF(o, s32, 0x50) = 0x51A;
}

s32 func_sc01_004_8017D2F0(void) {
    return 0x3D;
}

s16 func_sc01_004_8017D2F8(void) {
    return D_sc01_004_80190110;
}

void func_sc01_004_8017D308(s32 arg0, s32 arg1) {
    extern void func_sc01_004_8017D3AC(void);

    D_800B9A15 = 1;
    D_800B9A13 = 4;
    D_80115110 = 3;
    D_80115112 = 0;
    D_80115126 = arg0;
    D_sc01_004_80190118 = arg1;
    D_8011DB24 = (void *)func_sc01_004_8017D3AC;
}

void func_sc01_004_8017D35C(s32 arg0) {
    D_800B9A15 = 1;
    D_80115112 = 7;
    D_800B9A13 = 1;
    D_80115110 = 0;
    D_80115126 = arg0;
    D_sc01_004_80190118 = 0;
    D_8011DB24 = (void *)func_8013E5E8;
}

void func_sc01_004_8017D3AC(void) {
    func_80029444();
    func_801754A8();
    D_sc01_004_8018C2BC[D_80115112]();
    func_80141C04();
    D_80115116 += 1;
}

void func_sc01_004_8017D41C(void) {
    func_800D24A0(4);
    func_sc01_004_8017D4A4();
    if (D_sc01_004_80190118 == 0) {
        D_8011511A = 0;
    } else {
        D_8011511A = D_sc01_004_80190118;
    }
    D_sc01_004_80190250 = 0;
    D_sc01_004_80190248 = 0;
    D_80115130 = 0;
    D_sc01_004_80190118 = 0;
    D_80115112 += 1;
}

void func_sc01_004_8017D4A4(void) {
    s16 i;
    s16 j;
    s16 count;
    s16 found;
    u8 *p;

    D_80115118.field_0 = 0;
    D_sc01_004_80190110 = 0;
    D_80115134 = D_sc01_004_8018C12C[D_80115118.field_E];
    for (i = 0; i < 3; i++) {
        D_80115138[i] = D_80115134[i].field_0;
        D_80115118.field_40[i] = D_80115134[i].field_2;
        if (D_sc01_004_80190118 == 0) {
            D_80115148[i].field_0 = 0;
            if (D_80115118.field_E == 0) {
                D_80115140[i].field_0 = 0;
            }
        }
    }
    if (D_80115118.field_E == 0 && func_80029504() >= 0x3B6U) {
        D_80115118.field_40[0] = 0x106;
    }
    count = 0;
    if (D_80115118.field_E == 3) {
        for (i = 0; i < 7; i++) {
            D_sc01_004_80190254[i] = 0;
        }
        for (i = 0; i < 7; i++) {
            found = 0;
            p = D_sc01_004_8018C180[i];
            j = 0;
            if (D_sc01_004_8018C178[i] != 0) {
                do {
                    if (func_800291B4(*p++ + 0x62) & 0x40) {
                        found = 1;
                        break;
                    }
                    j++;
                } while (j < D_sc01_004_8018C178[i]);
            }
            if (found) {
                D_sc01_004_80190254[count++] = i;
            }
        }
        D_80115118.field_40[1] = count | 0x100;
        if (D_sc01_004_80190118 != 0) {
            D_80115148[0].field_0 = 1;
            D_80115148[1].field_0 = D_sc01_004_8019011C;
            D_80115148[2].field_0 = D_sc01_004_80190120;
        }
        D_sc01_004_80190114 = 0;
    }
    func_sc01_004_8017D758();
}

void func_sc01_004_8017D758(void) {
    char *e = D_sc01_004_8018ED34;
    char *b;
    s16 i;
    s16 n;
    u8 k;
    u8 c;
    u8 *names;
    char *dst;

    switch (D_80115139) {
    case 7:
        D_8011515C = AF(D_sc01_004_8018BFAC, u16, *(u8 *) &D_8011514A * 2);
        D_sc01_004_8018C0A8 = AF(D_sc01_004_8018BFB8, s32, *(u8 *) &D_8011514A * 4);
        if (D_sc01_004_80190118 == 0) {
            *(u8 *) &D_8011514C = 0;
        }
        break;
    case 9:
        b = D_sc01_004_80190124[0];
        for (i = 0; i < 7; i++) {
            strcpy((char *) (i * 0x24 + (s32) b), e);
        }
        k = D_sc01_004_80190254[*(u8 *) &D_8011514A];
        n = D_sc01_004_8018C178[k];
        names = D_sc01_004_8018C180[k];
        D_sc01_004_80190244 = names;
        D_8011515C = n | 0x100;
        for (i = 0; i < n; i++) {
            c = names[i];
            e = D_sc01_004_8018BFCC[i];
            b = D_8010F468[c].field_0;
            if (func_800291B4(c + 0x62) & 0x40) {
                strcpy(e, b);
            }
        }
        if (D_sc01_004_80190118 == 0) {
            *(u8 *) &D_8011514C = 0;
        }
        break;
    }
}

void func_sc01_004_8017D948(void) {
    u16 *h;

    h = &D_80115112;
    *h += 1;
}

void func_sc01_004_8017D964(void) {
    u8 unused[8];
    s32 st;
    s32 r;
    u8 c;
    s32 s;
    s32 t;
    s32 *q;
    u16 *h;
    s16 x;

    D_801151D0 = D_801151C8[D_800B9A02];
    st = func_sc01_004_8017DC38();
    func_sc01_004_8017DF18();
    r = func_8014168C(D_8011511A);
    c = D_80115138[(u16) D_8011511A];
    if (D_80115126 != 4) {
        if (D_sc01_004_80190248 != 0) {
            s = D_sc01_004_80190248;
        } else {
            s = func_sc01_004_8017E5B8(c, (s16) r);
        }
        if (s != 0) {
            q = &D_80115130;
            if (s != *q) {
                *q = s;
                func_80139954();
                D_sc01_004_8019024C = func_801376E8(s, &D_sc01_004_8018C2B8);
            }
        }
        func_80137B80();
    }
    x = st;
    if (x < 0) {
        func_80139954();
        D_800B9A15 = 0;
        if (x == -1) {
            func_8002D4C8(0x474, 0);
        }
        h = &D_80115112;
        *h += 2;
    }
}

void func_sc01_004_8017DAB4(void) {
    u8 unused[8];
    u16 k;

    D_801151D0 = D_801151C8[D_800B9A02];
    if (D_sc01_004_80190248 != 0) {
        if (func_801399F0(D_sc01_004_8019024C) != 0) {
            D_sc01_004_80190248 = 0;
        }
    } else if (func_80014ED4(0) & 0x50) {
        k = D_8011511A;
        if (D_80115138[k] == 8) {
            func_sc01_004_8017EB30(0xF, (s16) func_8014168C((s16) k));
        }
        if (D_sc01_004_80190110 != 0) {
            func_80139954();
            D_800B9A15 = 0;
            func_8002D4C8(0x474, 0);
            D_80115112++;
        } else {
            D_80115112--;
        }
    }
    func_sc01_004_8017DF18();
    func_80137B80();
}

void func_sc01_004_8017DBE0(void) {
    if (D_80115114 == (D_800B9A02 ^ 1)) {
        func_800D2624();
        return;
    }
    D_80115112 += 1;
}

s32 func_sc01_004_8017DC38(void) {
    s32 btn;
    s32 rep;
    s32 r;
    s16 kind;
    u16 cur;
    u8 *a;
    u8 *b;
    u8 v;
    u8 old;
    s16 d;
    s16 x;
    s16 ret;

    ret = 0;
    btn = func_80014ED4(0);
    if (btn & 0xFFFF) {
        D_sc01_004_80190248 = 0;
    }
    rep = func_80015018(0);
    r = func_8014168C(*(s16 *)D_80115118.field_2);
    cur = *(u16 *)D_80115118.field_2;
    kind = D_80115138[cur];
    if (btn & 0x40) {
        x = func_sc01_004_8017EB30(kind, (s16)r);
        return x != 0 ? x : ret;
    }
    if (btn & 0x10) {
        if (kind < 6) {
            if (kind != 1) {
                return -1;
            }
        } else {
            func_8002D4C8(0x473, 0);
            (*(u16 *)D_80115118.field_2)--;
        }
        return 0;
    }
    a = &D_80115118.field_1C[0x14 + cur * 2];
    b = (u8 *)&D_80115118.field_40[cur];
    if ((u16)rep != 0) {
        if ((u16)rep == D_80115120) {
            if (--D_80115122 == 0) {
                btn = rep & 0xF000;
                D_80115122 = 3;
            }
        } else {
            D_80115120 = rep;
            D_80115122 = 8;
        }
    } else {
        D_80115120 = 0;
        D_80115122 = 12;
    }
    if (btn & 0x1000) {
        (*a)--;
        ret = 1;
        if (*a >= 0x80) {
            if (kind < 6) {
                *a = *b - 1;
            } else {
                *a = 0;
                ret = 0;
            }
        }
    }
    if (btn & 0x4000) {
        old = *a;
        *a = old + 1;
        ret = 1;
        if (*a >= *b) {
            if (kind < 6) {
                *a = 0;
            } else {
                *a = old;
                ret = 0;
            }
        }
    }
    v = *a;
    cur = D_8011511A;
    d = (s8)v - (s8)D_80115140[cur].field_0;
    if (d >= 6) {
        D_80115140[cur].field_0 = v - 5;
    } else if (d < 0) {
        D_80115140[cur].field_0 = v;
    }
    if (ret) {
        func_8002D4C8(0x45A, 0);
        if ((u16)D_8011511A == 1) {
            if (kind == 9) {
                D_80115142 = 0;
            }
            func_sc01_004_8017D758();
        }
    }
    return 0;
}

static inline s32 func_sc01_004_8017DF18_inline(void) {
    s32 n;
    n = *(u16 *)&D_8011511A == 0 ? 1 : (D_80115126 == 2 || D_80115126 == 3) ? 3 : 2;
    return n;
}

void func_sc01_004_8017DF18(void) {
    s32 p;
    struct_20_3 *r;
    u8 *tbl;
    u16 n;
    s32 c;
    s16 i;

    p = D_801151D0;
    r = D_80115134;
    if (D_80115126 != 4) {
        p = func_80137D08(p, &D_800AE7B8[D_800B9A02], 2);
        if (D_80115126 == 0 || D_80115126 == 3) {
            tbl = &D_sc01_004_8018BB6C;
        } else {
            tbl = &D_sc01_004_8018BB58;
            if (D_80115126 == 1 && *(u16 *)&D_8011511A != 0
                && D_sc01_004_80190248 != (s32)D_sc01_004_8018C4FC
                && D_sc01_004_80190248 != (s32)D_sc01_004_8018C520
                && D_sc01_004_80190248 != (s32)D_sc01_004_8018C560
                && D_sc01_004_80190248 != (s32)D_sc01_004_8018C5AC
                && (s16)func_sc01_004_8017EF8C() == 0) {
                tbl = &D_sc01_004_8018BB6C;
            }
        }
        p = (s32)func_800D27DC(2, p, tbl, 1, 0);
        p = func_8013AB54(p, D_800AE7BC[D_800B9A02].field_0 + 2, &D_sc01_004_8018C2B0, 0);
    }
    c = *(u16 *)&D_8011511A == 0 ? 1 : (D_80115126 == 2 || D_80115126 == 3) ? 3 : 2;
    n = c;
    for (i = 0; i < n; i++, r++) {
        if (*(s16 *)((u8 *)D_80115158 + (i << 1)) != 0) {
            p = (s32)func_sc01_004_8017E1D4(p, r, i);
        }
    }
    SetDrawMode(p, 0, 0, 0x15, 0);
    *(u32 *)p = 0x2000000;
    addPrim(&D_800AE7BC[((struct_2_3 *)&D_800B9A02)->field_0].field_0[2], p);
    p += 0x28;
    ((struct_4_7 *)&D_801151D0)->field_0 = p;
}

u8 *func_sc01_004_8017E1D4(u8 *p, u8 *t, s32 id0) {
    s16 id = id0;
    u8 buf[0x48];
    u32 col;
    s32 a;
    s16 f;
    s32 c;
    u8 d;
    s16 *xy;
    s16 i;
    s32 r;

    a = (u8)-((u16)D_8011511A != id);
    
    func_80024054(AF(t, s32, 0x14), buf);
    f = a;
    p = func_800D2650(p, buf, AF(t, s16, 0x10), AF(t, s16, 0x12), 1, (u8)a ? 0x585858 : 0x808080);
    
    p = (u8 *)func_sc01_004_8017E804((struct_14_8 *)p, AF(t, u16 *, 0x18), id, AF(t, u8 *, 8), f ? 0x585858 : 0x808080);
    i = 0; c = f; xy = AF(t, s16 *, 0x18);
    for (; ; xy += 2) {
        r = func_sc01_004_8017E3A0(AF(t, s32 *, 0x1C), AF(t, s16, 0), id, i++, &col);
        if (r == 0) break;
        if (r < 0) {
            func_80024054(r, buf);
            if (c) col -= 0x282828;
            p = func_800D2650(p, buf, xy[0], xy[1], 1, col);
        }
    }
    d = f;
    p = func_800D27DC(d != 0, p, AF(t, u8 *, 4), AF(t, s16, 0xC), 0);
    return func_800D29F8(d, p, AF(t, u8 *, 8), AF(t, s16, 0xE), 0);
}

s32 func_sc01_004_8017E3A0(s32 *tbl, s16 kind, s16 id, s16 i, s32 *col) {
    s32 r;
    s16 n;
    s16 j;
    s32 k;

    *col = 0x808080;
    n = D_80115158[id].field_1 * *(u8 *) &D_80115158[id].field_0;
    r = 0;
    switch (kind) {
    case 6:
        j = i + D_80115141;
        if (i >= 6) {
            break;
        }
        if (j >= n) {
            return r;
        }
        if (!(func_800291B4(D_sc01_004_801802E4[j]) & 0xFF)) {
            *col = 0x804040;
        }
        k = j + 1;
        r = D_8010F3C4[k];
        break;
    case 10:
        j = i + D_80115142;
        if (i >= 6) {
            break;
        }
        if (j >= n) {
            return r;
        }
        if (func_800291B4(D_sc01_004_80190244[j] + 0x62) & 0x20) {
            *col = 0x804040;
        }
        r = tbl[j];
        break;
    case 9:
        j = i + D_80115141;
        if (i >= 6) {
            break;
        }
        if (j >= n) {
            break;
        }
        r = tbl[D_sc01_004_80190254[j]];
        break;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 7:
    case 8:
    default:
        if (i >= n) {
            break;
        }
        r = tbl[i];
        break;
    }
    return r;
}

s32 func_sc01_004_8017E5B8(s32 kind, s32 id) {
    u8 unused[8];
    u8 *r;
    s16 j;
    s32 v;
    s32 t;
    s32 n;
    s32 x;
    s32 p;
    u8 c;

    r = &D_801117EC;
    switch ((s16) kind) {
    case 6:
        if ((s16) func_sc01_004_8017EF8C() != 0) {
            v = func_80029504();
            j = D_sc01_004_8018C19C[(s16) id];
            t = (s32) D_sc01_004_8018C1C4; x = D_sc01_004_8018C1C4[j].field_0; if (v < x && (n = -(j * 4), (t = ((struct_4_3 *) (t - n))->field_2) == 0 || !(func_80029178(t) & 0xFF))) {

                j = -1;
            }
            if (j >= 0) {
                p = D_sc01_004_8018C1E4[j];
                func_80139A44(p, 0);
                if (p != D_sc01_004_80190250) {
                    D_sc01_004_80190250 = p;
                    D_80115130 = 0;
                }
                r = &D_sc01_004_8018C5D4;
            } else {
                r = &D_sc01_004_8018C60C;
            }
        } else {
            c = func_800291B4(D_sc01_004_801802E4[(s16) id]);
            if (c == 0) {
                r = &D_80112B58;
            } else if (c == 1) {
                r = &D_80112B90;
            } else {
                r = &D_sc01_004_8018C634;
                if ((s16) id != 0) {
                    r = &D_80112BA8;
                }
            }
        }
        break;
    case 1:
        r = &D_sc01_004_8018C300;
        break;
    case 2:
        r = &D_sc01_004_8018C4DC;
        break;
    case 4:
        r = &D_sc01_004_8018C3C4;
        break;
    case 3:
    case 7:
    case 8:
        r = &D_sc01_004_8018C450;
        break;
    case 9:
        r = &D_sc01_004_8018C3E0;
        break;
    case 10:
        c = D_sc01_004_80190244[(s16) id];
        if (func_800291B4(c + 0x62) & 0x40) {
            r = D_sc01_004_8018C200[c];
        }
        break;
    case 5:
        break;
    }
    return (s32) r;
}

struct_14_4 *func_sc01_004_8017E804(struct_14_4 *p, u16 *tbl, s16 id, u8 *obj, s32 col) {
    s32 kind;
    s16 k;
    u16 *uv;
    u16 cur;
    s16 i;

    kind = D_80115138[id];
    p->field_0 = 0x04000000;
    p->field_C = 0x30;
    p->field_D = 0x48;
    p->field_E = 0x4056;
    p->field_4 = col | 0x64000000;
    if (kind < 6) {
        k = func_8014168C(id) * 2;
    } else {
        k = (*(u8 *)&D_80115148[id] - D_80115140[id].field_0) * 2;
    }
    uv = (u16 *)(k * 2 + (s32)tbl);
    p->field_8 = uv[0] - 8;
    p->field_A = uv[1];
    p->field_12 = 8;
    p->field_10 = 8;
    addPrim(&D_800AE7BC[((struct_2_3 *)&D_800B9A02)->field_0].field_0[2], p);
    p++;
    if (kind >= 6) {
        cur = D_8011511A;
        if (cur == id && (D_80115116 & 8)) {
            for (i = 0; i < 2; i++) {
                if (i == 0) {
                    if (D_80115140[cur].field_0 == 0) {
                        continue;
                    }
                    p->field_D = 0x30;
                    p->field_A = D_sc01_004_8018BE9A - 2;
                } else {
                    if (D_80115158[cur].field_0 - *(s8 *)&D_80115140[cur] < 7) {
                        continue;
                    }
                    p->field_D = 0x38;
                    p->field_A = D_sc01_004_8018BEAE + 1;
                }
                p->field_0 = 0x04000000;
                p->field_C = 0x78;
                p->field_4 = 0x64808080;
                p->field_E = 0x4056;
                p->field_8 = *(s32 *)(obj + 8) + *(s32 *)(obj + 0xC) - 13;
                p->field_10 = 8;
                p->field_12 = 8;
                addPrim(&D_800AE7BC[((struct_2_3 *)&D_800B9A02)->field_0].field_0[2], p);
                p++;
            }
        }
    }
    return p;
}

s32 func_sc01_004_8017EB30(s32 arg0, s32 arg1) {
    s32 v;
    s32 t;
    s32 u;
    u8 *p;
    s16 *q;
    s16 *q2;

    v = func_80029504();
    switch ((s16)arg0) {
    case 2:
    case 3:
        if ((s16)arg1 != 0) {
            return -1;
        }
        q2 = &D_8011511A;
        (*q2)++;
        func_8002D4C8(0x45D, 0);
        return 0;
    case 4:
        u = (s16)arg1;
        if (u == 2) {
            return -1;
        }
        if (u != 0) {
            if (v < 10 || D_8011515A == 0x100) {
                p = D_sc01_004_8018C434;
                goto set;
            }
            D_8011511A++;
            func_8002D4C8(0x45D, 0);
            return 0;
        }
        if (v < 10) {
            p = D_sc01_004_8018C40C;
            goto set;
        }
        D_sc01_004_80190110 = 1;
        return -1;
    case 5:
        u = (s16)arg1;
        if (u == 0) {
            D_sc01_004_80190110 = 1;
        }
        if (u == 1) {
            if (func_800291B4(D_sc01_004_80190114 + 0x62) & 0x20) {
                goto call;
            }
            D_sc01_004_80190110 = 2;
        }
        return -1;
    case 6:
        t = (s16)arg1;
        if (t == 0) {
            p = D_sc01_004_8018C4FC;
            goto set;
        }
        if (t == 3 || t == 5) {
            if ((s16)arg1 == 3) {
                p = D_sc01_004_8018C520;
                goto set;
            }
            if ((u8)func_800291B4(0x40) == 0) {
                goto call;
            }
            p = D_sc01_004_8018C560;
            goto set;
        }
        if ((u8)func_800291B4(D_sc01_004_801802E4[t]) == 0) {
            goto call;
        }
        if (v >= 0x294 && v < 0x384 && (t == 12 || t == 17 || t == 26)) {
            p = D_sc01_004_8018C5AC;
            goto set;
        }
        if (v >= 0xA0 && v < 0xC8 && (u16)(arg1 - 10) < 4) {
            p = D_sc01_004_8018C658;
            goto set;
        }
        D_sc01_004_80190110 = arg1 + 1;
        return -1;
    case 7:
        if ((s16)arg1 >= 3 && (u8)func_800291B4(0x62) == 0) {
            p = D_sc01_004_8018C48C;
            goto set;
        }
    case 9:
        func_8002D4C8(0x45D, 0);
        q = &D_8011511A;
        (*q)++;
        break;
    case 8:
        t = func_8014168C(1);
        if ((s16)t == 0) {
            func_80029124(0xE8, 1);
        }
        D_sc01_004_80190110 = ((t + 1) << 8) | (arg1 + 1);
        return -1;
    case 10:
        t = D_sc01_004_80190244[(s16)arg1];
        if (func_800291B4(t + 0x62) & 0x40) {
            D_sc01_004_80190110 = t | 0x100;
            D_sc01_004_80190114 = t;
            D_sc01_004_8019011C = D_8011514A;
            D_sc01_004_80190120 = D_8011514C;
            return -1;
        }
        goto call;
    case 1:
        if (v == 0x294) {
            u = (s16)arg1;
            if (u < 4) {
                if (u == 3) {
                    goto ret2;
                }
                p = D_sc01_004_8018C318;
                goto set;
            }
        }
        if (v == 0x3B6) {
            u = (s16)arg1;
            if (u < 5) {
                if (u == 3) {
                ret2:
                    D_sc01_004_80190110 = arg1;
                    return -2;
                }
                p = D_sc01_004_8018C340;
                goto set;
            }
        }
        if (v >= 0x44C && v < 0x47E && (s16)arg1 == 5) {
            p = D_sc01_004_8018C37C;
        set:
            D_sc01_004_80190248 = (s32)p;
        call:
            func_8002D4C8(0x45F, 0);
            return 0;
        }
        D_sc01_004_80190110 = arg1;
        if ((s16)arg1 == 3) {
            return -2;
        }
        return -1;
    }
    return 0;
}

s32 func_sc01_004_8017EF8C(void) {
    s32 r;
    if (func_800291B4(D_sc01_004_801802EA) & 0xFF) {
        r = !(func_800291B4(D_sc01_004_801802E4[(s16) func_8014168C(1)]) & 0xFF);
        return r;
    }
    r = 0;
    return r;
}

void func_sc01_004_8017EFEC(u8 *arg0) {
    D_sc01_004_8018C2EC[AF(arg0, u16, 2)]();
}

void func_sc01_004_8017F028(u8 *arg0) {
    if (func_80029504() < 5U) {
        func_80029514(5);
    }
    AF(arg0, s32, 0x1C) = 4;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc01_004_8017F078(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    if (temp_v0 != 0) {
        AF(arg0, s32, 0x1C) = (s32) (temp_v0 - 1);
        return;
    }
    if (func_8016F1AC() == 0) {
        func_801746A4();
        AF(arg0, s32, 0x1C) = 0xC;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc01_004_8017F0E0(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    if (temp_v0 != 0) {
        AF(arg0, s32, 0x1C) = (s32) (temp_v0 - 1);
        return;
    }
    func_sc01_004_8017D308(0, 0);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc01_004_8017F138(u8 *arg0) {
    s16 temp_v0;
    s32 var_v0;
    u16 var_v0_2;

    temp_v0 = func_sc01_004_8017D2F8();
    var_v0 = D_sc01_004_8018C2D4[temp_v0];
    if (var_v0 == 0) {
        if (temp_v0 == 3) {
            func_sc01_004_8017D35C(0);
            AF(arg0, s32, 0x1C) = 0;
            var_v0_2 = AF(arg0, u16, 2) - 1;
        } else {
            var_v0 = func_sc01_004_8017D060();
            goto block_4;
        }
    } else {
block_4:
        func_800D1724(var_v0);
        var_v0_2 = AF(arg0, u16, 2) + 1;
    }
    AF(arg0, u16, 2) = var_v0_2;
}

void func_sc01_004_8017F1C8(void) {
}
