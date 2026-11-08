#include "common.h"
#include "gte.h"
#include "psyq.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc05_002_8017BE9C(void) {
}

void func_sc05_002_8017BEA4(void) {
}

void func_sc05_002_8017BEAC(void) {
}

void func_sc05_002_8017BEB4(void) {
}

typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_4;
typedef struct { s16 field_0[6]; } struct_C_3;
extern void (*D_sc05_002_8018402C[])();
extern s32 func_800D222C();
extern void func_8001CF30();
extern void func_80146C3C();
extern s32 func_80146A6C();
extern void func_800D20C0();
extern void func_800D23D0();
extern u8 D_sc05_002_80184014;
extern void (*D_sc05_002_80184034[])();
extern u8 D_sc05_002_80184020;
extern void (*D_sc05_002_801840DC[])();
typedef struct { s16 field_0, field_2; } struct_4_2;
typedef struct { struct_4_2 field_0; s16 field_4; s16 field_6; struct_4_2 field_8; s32 field_C; s32 field_10; s32 field_14; s32 field_18; } struct_1C;
typedef struct { s32 field_0, field_4, field_8; } struct_C_4;
void func_sc05_002_8017E088(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc05_002_801840E4[])();
void func_sc05_002_8017E0D8(void);
void func_sc05_002_8017E0B0(void);
extern void func_800D1EBC();
extern void (*D_sc05_002_801840F8[])();
extern u8 D_sc05_002_80184104;
extern void func_8016EE40();
extern u8 D_sc05_002_80184110;
extern u8 D_sc05_002_80184124;
extern void func_sc05_002_8017E1A0();
extern void (*D_sc05_002_80184128[])();
extern void (*D_sc05_002_8019C7E4[])();
extern void (*D_sc05_002_8019C818[])();
extern void (*D_sc05_002_8019CD64[])();
extern s32 func_8012C354();
extern s32 func_801788B8();
extern u8 D_sc05_002_80180554;
extern s32 func_80029178();
extern void func_8012CAE4();
extern u8 D_sc05_002_8019CA54;
extern s32 * func_sc05_002_801800E4();
extern s32 D_sc05_002_8019CABC[];
extern s32 func_8012C658();
extern void func_80029124();
extern void func_80178CBC();
extern s32 D_sc05_002_8019CC88;
extern s32 D_sc05_002_8019CC8C;
extern s32 D_sc05_002_8019CCA0;
extern s32 D_sc05_002_8019CCB4;
extern s32 D_sc05_002_8019CD20;
extern s32 D_sc05_002_8019CC04[];
extern s32 D_sc05_002_8019CB80[];
extern void func_80178D18();
extern void func_8002AC00();
extern void func_8012C218();
extern s32 func_801789AC();
extern void func_80029514();
extern void func_80145EE8();
extern s32 func_sc05_002_8017FE8C();
extern u8 D_80126B58;
extern void func_8014ADA8();
extern s32 func_80174764();
extern void (*D_sc05_002_8019CD8C[])();
extern u8 D_sc05_002_8019CA88;
extern u8 D_sc05_002_8019D22C;
extern u8 D_sc05_002_8019D44C;
extern s32 func_8002D4C8();
extern u8 D_sc05_002_8019D23C;
extern u8 D_sc05_002_8019D344;

extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

extern void (*D_sc05_002_80199FD4[])();
extern void func_sc05_002_8017F194();
extern void func_8002A04C();
extern void func_8012E8A8();
extern u8 D_sc05_002_8019C4C4;
extern u8 D_sc05_002_80199FF4;
extern s32 func_8012D5E4();
extern s32 func_sc05_002_8017F17C();
extern u8 D_80078EC1;
extern s32 func_8012BD14();

extern u8 D_sc05_002_80196B4C;
extern s32 D_sc05_002_8019FE48;
extern s32 D_sc05_002_8019FF34;
extern u8 D_sc05_002_8019FF50;
extern void func_8013C0F8();
extern void func_sc05_002_8017CD9C();

extern u8 D_sc05_002_8019C808;
extern u8 D_sc05_002_8019CA2C;
extern s32 func_8012C1B8();
extern void func_8001C810();
extern void func_8012AD44();
extern void func_8012AD50();

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
extern void func_8012A018();
extern void func_8012A094();

typedef struct { s16 field_0[3][3]; s16 field_12; s32 field_14[3]; } struct_20_3;
typedef struct { u32 field_0; u32 field_4; u32 field_8; u32 field_C; u32 *field_10; } struct_14_2;
typedef struct { s32 field_0; s32 field_4; s32 field_8; s32 field_C; s32 field_10; s32 field_14; s32 field_18; } struct_1C_2;
extern u8 *D_800A5E60;
extern u16 D_800B9A02;
extern u32 D_800A6610[2][0x1000];

void func_sc05_002_8017BEBC(u8 *obj) {
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

typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_5;
typedef struct { u16 field_0, field_2, field_4, field_6; } struct_8_6;
typedef void (*type_2)();
typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_7;
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_4;
typedef struct { u8 field_0[0x18]; struct_20_4 field_18; } struct_38;
typedef struct { s32 field_0[4]; } struct_10;
typedef struct { struct_10 field_0, field_10, field_20; } struct_30_2;
typedef struct { u8 field_0[0x34]; } struct_34_2;
typedef struct { s16 field_0, field_2, field_4, field_6, field_8, field_A, field_C, field_E; } struct_10_2;
extern void func_8012B200();
extern s32 func_8012BEE8();
extern void func_8012B178();
extern s32 func_8012B608();
extern s32 func_sc05_002_8017F0D0();
extern s32 func_8012CBF4();
extern void func_8012B0B4();
extern void func_8012B77C();
extern s16 D_80126B62;
extern void func_8012B2CC();

typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_5;
typedef struct { u8 field_0, field_1, field_2, field_3; } struct_4_3;
typedef struct { u16 field_0[6]; } struct_C_5;
typedef struct { u8 field_0, field_1, field_2, field_3; } struct_4_4;
typedef struct { struct_8_6 field_0; struct_8_6 field_8; struct_4_4 field_10; struct_4_4 field_14; s32 field_18; } struct_1C_3;
typedef struct { struct_8_7 field_0[4]; struct_4_4 field_20[4]; s32 field_30; } struct_34_3;
typedef struct { s32 field_0, field_4, field_8, field_C; } struct_10_3;
typedef struct { u16 field_0; s16 field_2; s16 field_4; s16 field_6; s32 field_8; s32 field_C; } struct_10_4;
typedef struct { s16 field_0, field_2, field_4, field_6; u8 field_8, field_9; s16 field_A; struct_10_4 field_C[16]; } struct_10C_2;
typedef struct { u32 *field_0; u8 field_4[0x10]; } struct_14_3;
typedef struct { u8 field_0[0x14]; } struct_14_4;
typedef struct { unsigned field_0_b0 : 24; unsigned field_3_b0 : 8; } struct_4_5;
typedef struct { u8 field_0[8]; } struct_8_8;
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_6;
typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_9;
extern u8 D_80126940;
extern u8 D_sc05_002_8018412C[];
extern s32 func_80148800();
extern void func_sc05_002_8017E27C();
extern s32 func_80012C6C();
extern s32 func_80012ABC();
extern void func_8012F14C();

typedef struct { u16 field_0, field_2, field_4, field_6; } struct_8_10;
typedef struct { s32 field_0; s32 field_4; } struct_8_11;
typedef struct { u16 field_0, field_2, field_4, field_6; } struct_8_12;
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_7;
typedef struct { u8 field_0[0x18]; struct_20_7 field_18; } struct_38_2;
typedef struct { u16 field_0[6]; } struct_C_6;
typedef struct { u16 field_0, field_2, field_4, field_6; } struct_8_13;
extern s32 func_8012B8E4();
extern u8 D_sc05_002_80199FA4;

extern u8 D_sc05_002_80199F68;
extern u8 D_sc05_002_80199FAC;
extern void func_80143994();
extern void func_8012E88C();
extern s32 func_8012E778();
extern s16 D_80126CBA;
typedef struct { struct_C_5 field_0[9]; } struct_6C;
typedef struct { s32 field_0, field_4, field_8, field_C; } struct_10_5;
typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_14;
typedef struct { s32 field_0, field_4, field_8, field_C; } struct_10_6;
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_8;
typedef struct { u8 field_0, field_1, field_2, field_3; } struct_4_6;
typedef struct { struct_8_14 field_0[4]; struct_4_6 field_20[4]; s32 field_30; } struct_34_4;
typedef struct { s32 field_0, field_4, field_8; } struct_C_7;
typedef struct { u32 field_0_b0 : 24; u32 field_3_b0 : 8; } struct_4_7;
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_9;
typedef struct { struct_4_7 field_0; u8 field_4, field_5, field_6, field_7; s16 field_8, field_A, field_C, field_E, field_10, field_12, field_14, field_16; } struct_18;
typedef union { s32 m0; struct_4_2 m1; } union_4_2;
typedef struct { s16 field_0, field_2, field_4, field_6, field_8; u16 field_A; s16 field_C, field_E; s32 field_10; } struct_14_5;
typedef struct { unsigned field_0_b0 : 31; unsigned field_3_b7 : 1; } struct_4_8;

extern s16 D_sc05_002_8019C7D4[];
extern s16 D_sc05_002_8019C7CC[];
extern u16 D_sc05_002_8019C7DC[];
extern s32 func_8012C588();
extern void func_sc05_002_8017F348();
extern s16 D_sc05_002_8019C7C4[];
extern s16 D_sc05_002_8019C800[];

typedef struct { s16 field_0, field_2, field_4; } struct_6;
typedef struct { s32 field_0[4]; } struct_10_7;
typedef struct { s16 field_0, field_2; s32 field_4; } struct_8_15;
typedef struct { struct_8_4 field_0[3]; struct_4_4 field_18[3]; s32 field_24; } struct_28;
typedef struct { s32 field_0; s32 field_4; s32 field_8; s16 field_C; s16 field_E; s32 field_10[2]; s32 field_18; s32 field_1C; s32 field_20; } struct_24;
typedef struct { s16 field_0, field_2, field_4, field_6; s16 field_8, field_A, field_C, field_E; s32 field_10; } struct_14_6;
typedef struct { struct_8_4 field_0[4]; s32 field_20, field_24, field_28, field_2C, field_30, field_34; } struct_38_3;
typedef struct { s16 field_0; s16 field_2[5]; } struct_C_8;
typedef struct { u8 field_0; u8 field_1[11]; } struct_C_9;
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
typedef struct { u32 field_0; u32 field_4; } struct_8_16;
typedef struct { u8 field_0[0x10]; struct_4_2 field_10[13]; } struct_44;
typedef struct { s32 field_0; u8 field_4[8]; } struct_C_10;
typedef struct { s32 field_0; s32 field_4; } struct_8_17;
typedef struct { struct_8_7 field_0[4]; s32 field_20[4]; s32 field_30; s32 field_34; u8 field_38; } struct_3C;
extern void func_80178BF8();
extern s32 func_8012BDBC();
extern s32 func_80135888();
extern void *D_80126B78;
extern void func_80172710();
extern struct_8_4 D_sc05_002_8019CD7C[];

extern u8 D_801202A0[];
extern s16 D_sc05_002_8019C7F0[];
extern s16 D_sc05_002_8019C7F4[];
extern s16 D_sc05_002_8019C7F8[];
extern s16 D_sc05_002_8019C7FC[];

extern s32 func_8012C194();
extern u8 D_sc05_002_8019C614;
extern void func_8001CB6C();
void func_sc05_002_8017F538(u8 *o);
extern void func_8012E014();

typedef struct { s16 field_0; } struct_2_3;
extern u16 D_sc05_002_80183C14[];

void func_sc05_002_8017CD9C(u8 *obj, u8 *hdr, s32 ph, s32 dy) {
    s32 tmp[3];
    struct_8_4 box[8];
    struct_8_4 scr[8];
    struct_8_4 v[4];
    struct_20_3 ls;
    struct_1C_2 g;
    s32 zlim;
    s32 yo;
    s32 i;
    u8 *pk;
    u32 *ot;
    s32 n;
    u8 *verts;
    struct_14_2 *c;
    u32 *poly;
    u32 nf;
    u32 j;
    u32 w;
    u32 x, y, z;
    s32 hi, lo, hi2, lo2, h, l;
    s16 xh, xl, yh, yl, zh, zl;
    s32 type;
    s32 half;
    s32 p;
    u8 *d;
    u8 *a, *b, *d3;
    u32 *t;

    if (AF(obj, s32, 0) != 0) return;
    zlim = ReadGeomScreen() + AF(obj, s32, 0x64);
    GsGetLs(obj + 0x10, &ls);
    GsSetLsMatrix(&ls);
    pk = D_800A5E60;
    ot = D_800A6610[D_800B9A02];
    c = (struct_14_2 *)(hdr + 0x14);
    p = ph;
    yo = dy;
    half = p / 2;
    n = AF(hdr, s32, 8);
    verts = AF(hdr, u8 *, 0x10);
    for (i = 0; i < n; i++, c++) {
        x = c->field_0;
        y = c->field_4;
        z = c->field_8;
        xl = x; xh = x >> 16;
        yl = y + yo; yh = (y >> 16) + yo;
        zl = z; zh = z >> 16;
        box[0].field_0 = xl; box[0].field_2 = yl; box[0].field_4 = zl;
        box[1].field_0 = xh; box[1].field_2 = yl; box[1].field_4 = zl;
        box[2].field_0 = xl; box[2].field_2 = yl; box[2].field_4 = zh;
        box[3].field_0 = xh; box[3].field_2 = yl; box[3].field_4 = zh;
        gte_ldv3c(&box[0]);
        gte_rtpt();
        gte_stsxy3(&scr[0], &scr[1], &scr[2]);
        gte_ldv0(&box[3]);
        gte_rtps();
        box[4].field_0 = xl; box[4].field_2 = yh; box[4].field_4 = zl;
        box[5].field_0 = xh; box[5].field_2 = yh; box[5].field_4 = zl;
        box[6].field_0 = xl; box[6].field_2 = yh; box[6].field_4 = zh;
        box[7].field_0 = xh; box[7].field_2 = yh; box[7].field_4 = zh;
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
        if ((s16)h < -110 || (s16)l > 110) continue;

        poly = c->field_10;
        nf = c->field_C;
        for (j = 0; j < nf; j++, poly += 3) {
            w = poly[1];
            a = verts + (w & 0xFFFF);
            b = verts + (w >> 16);
            w = poly[2];
            d3 = verts + (w & 0xFFFF);
            w >>= 16;
            v[0] = *(struct_8_4 *)a;
            v[1] = *(struct_8_4 *)b;
            v[2] = *(struct_8_4 *)d3;
            v[0].field_2 += D_sc05_002_80183C14[(v[0].field_4 + p) & 0x1FF] + D_sc05_002_80183C14[(v[0].field_0 + half) & 0x1FF];
            v[1].field_2 += D_sc05_002_80183C14[(v[1].field_4 + p) & 0x1FF] + D_sc05_002_80183C14[(v[1].field_0 + half) & 0x1FF];
            v[2].field_2 += D_sc05_002_80183C14[(v[2].field_4 + p) & 0x1FF] + D_sc05_002_80183C14[(v[2].field_0 + half) & 0x1FF];
            gte_ldv3c(&v[0]);
            gte_rtpt();
            gte_stflg(&g.field_4);
            if (g.field_4 & 0x7F85E000) continue;
            gte_nclip();
            type = w & 7;
            d = verts + (w & 0xFFF8);
            gte_stopz(&g.field_8);
            if (g.field_8 <= 0) continue;
            switch (type) {
            case 6:
            case 7:
            { u32 *otp; s16 p0, p1, p2, q0, q1, q2; s32 m;
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
                if (yh < -110 || yl > 110) continue;
                if (g.field_C > g.field_10) { m = g.field_C; if (m < g.field_14) m = g.field_14; } else { m = g.field_10; if (m < g.field_14) m = g.field_14; }
                g.field_8 = m;
                if (type == 7) g.field_8 = m + 0x200;
                t = (u32 *)poly[0];
                AF(pk, u32, 4) = t[0] | 0x2000000;
                AF(pk, u32, 0xC) = t[1];
                AF(pk, u32, 0x14) = t[2];
                AF(pk, u16, 0x1C) = t[3];
                otp = (u32 *)(((g.field_8 >> 2) << 2) + (u32)ot);
                *(u32 *)pk = (*otp & 0xFFFFFF) | 0x7000000;
                *otp = (*otp & 0xFF000000) | ((u32)pk & 0xFFFFFF);
                pk += 0x28;
                break;
            }
            case 2:
            case 3:
            { u32 *otp; u32 tw; s16 p0, p1, p2, p3, q0, q1, q2, q3; s32 za, zb;
                gte_stsxy3c(tmp);
                v[3] = *(struct_8_4 *)d;
                v[3].field_2 += D_sc05_002_80183C14[(v[3].field_4 + p) & 0x1FF] + D_sc05_002_80183C14[(v[3].field_0 + half) & 0x1FF];
                gte_ldv0(&v[3]);
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
                if (yh < -110 || yl > 110) continue;
                za = g.field_14; if (za < g.field_18) za = g.field_18;
                zb = g.field_C; if (zb < g.field_10) zb = g.field_10;
                if (zb < za) zb = za;
                g.field_8 = zb;
                if (type == 3) g.field_8 = zb + 0x200;
                AF(pk, s32, 8) = tmp[0];
                AF(pk, s32, 0x10) = tmp[1];
                AF(pk, s32, 0x18) = tmp[2];
                t = (u32 *)poly[0];
                AF(pk, u32, 4) = t[0] | 0x2000000;
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

void func_sc05_002_8017DA00(u8 *arg0) {
    D_sc05_002_8018402C[AF(arg0, u16, 2)]();
}

void func_sc05_002_8017DA3C(u8 *a) {
    struct_8_4 p;
    struct_8_4 r;
    u8 unused[0x20];
    struct_8_4 *rp;
    u8 *t;
    s16 i;
    s32 o;
    s32 m;

    t = AF(a, u8 *, 0x34);
    func_80146A6C(0x11, a, AF(a, s16, 6), (s16)(AF(a, u16, 0xA) - 0x10), AF(a, s16, 0xE), 0, 0);
    p.field_0 = AF(a, s16, 6);
    p.field_2 = AF(a, s16, 0xA);
    p.field_4 = AF(a, s16, 0xE);
    rp = &r;
    func_800D20C0(&p, rp, 0xA);
    AF(a, s16, 6) = p.field_0;
    AF(a, s16, 0xE) = p.field_4;
    r.field_2 = 0;
    func_800D23D0(rp);
    for (i = 0; i < 3; i++) {
        m = func_80146A6C(0x12, a, AF(t, s16, 6), AF(t, s16, 0xA), AF(t, s16, 0xE), i, 0);
        if (m != 0) {
            AF(m, s16, 0x12) = r.field_0;
            AF(m, s16, 0x16) = r.field_2;
            AF(m, s16, 0x1A) = 0;
        }
    }
    o = func_800D222C(a, &D_sc05_002_80184014, 0xFD);
    if (o != 0) {
        AF(a, s32, 0x20) = o;
        AF(o, s32, 4) |= 0x5D000100;
        func_8001CF30(o);
        AF(o, s16, 0x18) = 0x4000;
        AF(o, s16, 0x1A) = 0x200;
        AF(a, s16, 0x16) = 0x200;
        AF(a, s16, 0x14) = 0x1000;
        AF(o, s16, 0x28) = 0x240;
        AF(o, s16, 0x2A) = 0x180;
        AF(o, s16, 0x10) = r.field_0;
        AF(o, s16, 0x12) = r.field_2;
        AF(a, u16, 2)++;
    } else {
        func_80146C3C(a);
    }
}

void func_sc05_002_8017DC00(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0_2;
    u16 var_v0;
    u8 temp_v0;
    void *temp_a0;

    temp_a0 = AF(arg0, void *, 0x20);
    AF(arg0, u16, 0x16) = (u16) (AF(arg0, u16, 0x16) + AF(arg0, u16, 0x14));
    if (AF(arg0, s32, 0x1C) < 8) {
        var_v0 = AF(arg0, u16, 0x14) - 0x200;
    } else {
        var_v0 = AF(arg0, u16, 0x14) - 0x51;
    }
    AF(arg0, u16, 0x14) = var_v0;
    temp_v0 = AF(temp_a0, u8, 0x26) - 2;
    AF(temp_a0, u16, 0x1A) = (u16) AF(arg0, u16, 0x16);
    AF(temp_a0, u8, 0x26) = temp_v0;
    AF(temp_a0, u8, 0x25) = temp_v0;
    AF(temp_a0, u8, 0x24) = temp_v0;
    temp_v0_2 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0_2 + 1);
    if (temp_v0_2 >= 0x1E) {
        func_80146C3C((s32) arg0, (s32) arg0, arg2, arg3);
    }
}

void func_sc05_002_8017DC94(u8 *arg0) {
    D_sc05_002_80184034[AF(arg0, u16, 2)]();
}

void func_sc05_002_8017DCD0(s32 arg0) {
    s32 pad[12];
    s32 temp_v0;

    temp_v0 = func_800D222C(arg0, (s32) &D_sc05_002_80184020, 0x18);
    if (temp_v0 != 0) {
        AF(arg0, s32, 0x20) = temp_v0;
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x5C000140);
        func_8001CF30(temp_v0);
        AF(temp_v0, s16, 0x10) = 0x400;
        AF(temp_v0, s16, 0x18) = 0x3000;
        AF(temp_v0, s16, 0x1A) = 0x3000;
        AF(temp_v0, s16, 0x28) = 0x248;
        AF(temp_v0, s16, 0x2A) = 0x180;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        return;
    }
    func_80146C3C(arg0);
}

void func_sc05_002_8017DD74(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_a1;
    s32 temp_v0;
    u16 temp_v0_2;
    u8 temp_v1;

    temp_v0 = AF(arg0, s32, 0x1C);
    temp_a1 = AF(arg0, s32, 0x20);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 >= 0x1F) {
        func_80146C3C((s32) arg0, temp_a1, arg2, arg3);
        return;
    }
    temp_v0_2 = AF(temp_a1, u16, 0x1A) + 0x1E0;
    temp_v1 = AF(temp_a1, u8, 0x26) - 3;
    AF(temp_a1, u16, 0x1A) = temp_v0_2;
    AF(temp_a1, u16, 0x18) = temp_v0_2;
    AF(temp_a1, u8, 0x26) = temp_v1;
    AF(temp_a1, u8, 0x25) = temp_v1;
    AF(temp_a1, u8, 0x24) = temp_v1;
}

void func_sc05_002_8017DDD8(u8 *arg0) {
    D_sc05_002_801840DC[AF(arg0, u8, 0x15)]();
}

s32 func_sc05_002_8017DE14(u8 *arg0) {
    func_sc05_002_8017E088();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc05_002_8017DE58(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc05_002_8017DE7C(u8 *arg0) {
    D_sc05_002_801840E4[AF(arg0, u8, 0x15)]();
}

s32 func_sc05_002_8017DEB8(u8 *arg0) {
    func_sc05_002_8017E0D8();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc05_002_8017DEFC(u8 *arg0) {
    func_sc05_002_8017E0B0();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc05_002_8017DF3C(u8 *arg0) {
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

void func_sc05_002_8017DFB8(void) {
    func_800D1EBC();
}

void func_sc05_002_8017DFD8(u8 *arg0) {
    D_sc05_002_801840F8[AF(arg0, u8, 0x15)]();
}

s32 func_sc05_002_8017E014(u8 *arg0) {
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

void func_sc05_002_8017E088(void) {
    func_8016EE40((s32) &D_sc05_002_80184104, 0x01000000);
}

void func_sc05_002_8017E0B0(void) {
    func_8016EE40((s32) &D_sc05_002_80184110, 0x01000000);
}

void func_sc05_002_8017E0D8(void) {
    func_8016EE40((s32) &D_sc05_002_80184124, 0x01000000);
}

void func_sc05_002_8017E100(void) {
    D_80126954 = 0x190;
    D_80126950 = 0x190;
    D_8012695C = 0x4B0;
    D_80126968 = 0x155;
    D_8012696A = 0x800;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc05_002_8017E1A0, 0);
    func_8012A094((s32) &D_80126948);
    func_sc05_002_8017E1A0((s32) &D_80126948);
}

void func_sc05_002_8017E1A0(s32 arg0) {
    D_sc05_002_80184128[AF(arg0, u8, 4)]();
}

void func_sc05_002_8017E1DC(u8 *arg0) {
    struct_8_8 v;
    u8 t;

    if (func_80148800((s32) &D_80126B58) & 3) {
        t = (AF(arg0, u8, 5) + 1) & 1;
        AF(arg0, u8, 5) = t;
        AF(arg0, s32, 0x14) = ((s16 *)&D_sc05_002_8018412C)[t];
    }
    v = *(struct_8_8 *)&D_80126940;
    func_sc05_002_8017E27C((s32) arg0, (s32) &v);
}

void func_sc05_002_8017E27C(u8 *arg0, u8 *arg1) {
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

s32 func_sc05_002_8017E414(void) {
    return 0x5F;
}

void func_sc05_002_8017E41C(void) {
    switch (D_sc05_002_8019FF34) {                  /* irregular */
    case 0:
        func_8013C0F8((s32) &D_sc05_002_80196B4C);
        D_sc05_002_8019FE48 = 0;
        D_sc05_002_8019FF34 += 1;
        return;
    case 1:
        func_sc05_002_8017CD9C((s32) &D_sc05_002_8019FF50, (s32) &D_sc05_002_80196B4C, D_sc05_002_8019FE48, 0);
        D_sc05_002_8019FE48 += 0x14;
        return;
    }
}

void func_sc05_002_8017E4C0(u8 *arg0) {
    s32 temp_v0;

    D_sc05_002_80199FD4[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        temp_v0 = AF(arg0, s32, 0xE8) + 1;
        AF(arg0, s32, 0xE8) = temp_v0;
        if (!(temp_v0 & 0xF)) {
            func_sc05_002_8017F194((s32) arg0);
        }
    }
}

void func_sc05_002_8017E53C(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc05_002_80199F68) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32, 0xB4) = -1;
        AF(arg0, s32 *, 0xBC) = (s32 *) &D_sc05_002_80199FAC;
        AF(arg0, s32, 0xC4) |= 1;
        AF(arg0, s32, 0xE4) = -((rand() % 8 + 12) << 16);
        func_8012A828(arg0, (s32) &D_sc05_002_8019C4C4);
        func_80143994(arg0, 0x1000);
        if (AF(arg0, u16, 0x70) & 0x10) {
            AF(arg0, s16, 2) = 3;
        } else {
            AF(arg0, s16, 2) = 1;
        }
    }
}

void func_sc05_002_8017E5FC(u8 *arg0) {
    s16 r;

    r = rand();
    AF(arg0, s16, 0x104) = AF(arg0, s16, 0xFC);
    func_8012B200(arg0);
    if (AF(arg0, u16, 0x70) & 1) {
        AF(arg0, s32, 0x1C) = (s16)(r % 1800) + 0xE10;
    } else {
        AF(arg0, s32, 0x1C) = (s16)(r % 60) + 0x78;
    }
    AF(arg0, s16, 0xFE) = r % 32 + 10;
    AF(arg0, s16, 2) = 2;
}

void func_sc05_002_8017E724(u8 *arg0) {
    s32 v;
    s32 w;

    func_sc05_002_8017F0D0(&v, arg0, arg0 + 0x102);
    w = v;
    AF(AF(arg0, u8 *, 0x20), s16, 0x10) = w;
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) += func_8012B608(AF(AF(arg0, u8 *, 0x20), s16, 0x12), v >> 16, AF(arg0, s16, 0xFE));
    func_8012B178(arg0, AF(arg0, s32, 0xE4));
    func_8012CBF4(arg0);
    if (!(AF(arg0, u16, 0x70) & 2) && func_8012BEE8(arg0) != 0) {
        if (AF(arg0, s32, 0xE0) == 0) { if (func_sc05_002_8017F17C(arg0) != 0) { if (AF(arg0, u16, 0x70) & 1) { AF(arg0, s32, 0x1C) = rand() % 1800 + 0xE10; } else { AF(arg0, s32, 0x1C) = rand() % 60 + 0x78; } return; } AF(arg0, s16, 2) = 5; } else { AF(arg0, s16, 2) = 1; }
    }
}

void func_sc05_002_8017E894(u8 *arg0) {
    s32 v;
    s32 w;
    s32 t;
    s32 d;
    s32 c;

    func_8012B200(arg0);
    AF(arg0, s32, 0x1C) = rand() % 128 + 0x80;
    AF(arg0, s16, 0xFE) = rand() % 32 + 10;
    func_8012B0B4(&v, rand() % 4096, rand() % AF(arg0, s32, 0xDC));
    w = v;
    AF(arg0, s16, 0x102) = AF(arg0, s16, 0x88) + w;
    AF(arg0, s16, 0x106) = AF(arg0, s16, 0x8C) + (w >> 16);
    if (AF(arg0, u16, 0x70) & 0x20) {
        d = rand() % 256;
        c = AF(arg0, s16, 0xFC);
        AF(arg0, s16, 0x104) = (rand() & 1) ? c + d : c - d;
    } else {
        AF(arg0, s16, 0x104) = AF(arg0, s16, 0xFC) - rand() % 256;
    }
    AF(arg0, s16, 2) = 4;
}

void func_sc05_002_8017EA28(u8 *arg0) {
    struct_10_2 p;
    u8 gap[8];
    s32 v;
    s32 w;
    s32 d;
    s32 c;

    p.field_2 = AF(arg0, s16, 0x102);
    p.field_A = AF(arg0, s16, 0x106);
    p.field_6 = AF(arg0, s16, 0x104);
    if (!(AF(arg0, u16, 0x70) & 0x20)) {
        p.field_6 += D_80126B62;
    } else {
        p.field_6 += AF(arg0, s16, 0x8A);
    }
    func_8012B77C(&v, arg0 + 4, &p);
    w = v;
    AF(AF(arg0, u8 *, 0x20), s16, 0x10) = w;
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) += func_8012B608(AF(AF(arg0, u8 *, 0x20), s16, 0x12), w >> 16, AF(arg0, s16, 0xFE));
    func_8012B178(arg0, AF(arg0, s32, 0xE4));
    func_8012CBF4(arg0);
    if (func_8012BEE8(arg0) != 0) {
        AF(arg0, s32, 0x1C) = rand() % 128 + 0x80;
        AF(arg0, s16, 0xFE) = rand() % 32 + 10;
        func_8012B0B4(&v, rand() % 4096, rand() % AF(arg0, s32, 0xDC));
        w = v;
        AF(arg0, s16, 0x102) = AF(arg0, s16, 0x88) + w;
        AF(arg0, s16, 0x106) = AF(arg0, s16, 0x8C) + (w >> 16);
        if (AF(arg0, u16, 0x70) & 0x20) {
            d = rand() % 256;
            c = AF(arg0, s16, 0xFC);
            AF(arg0, s16, 0x104) = (rand() & 1) ? c + d : c - d;
        } else {
            AF(arg0, s16, 0x104) = AF(arg0, s16, 0xFC) - rand() % 256;
        }
    }
}

void func_sc05_002_8017EC7C(u8 *arg0) {
    struct_8_7 a;
    s32 v;
    s32 w;
    s16 r;

    r = rand();
    func_8012B0B4(&v, (s16)(r % 4095), (s16)(r % 128) + 0xC0);
    a.field_2 = -0x30;
    a.field_0 = v;
    a.field_4 = v >> 16;
    func_sc05_002_8017F0D0(&v, arg0, &a);
    w = v;
    AF(AF(arg0, u8 *, 0x20), s16, 0x10) = w;
    AF(AF(arg0, u8 *, 0x20), s16, 0x12) = w >> 16;
    func_8012B200(arg0);
    func_8012B2CC(arg0);
    func_8012B178(arg0, AF(arg0, s32, 0xE4) - 0x20000);
    AF(arg0, s16, 2) = 6;
    AF(arg0, s16, 0x34) = 0;
}

void func_sc05_002_8017ED88(u8 *arg0) {
    s32 sp10;
    s32 one;
    s32 w;
    s16 h;
    u8 *q;

    one = 1;
    switch (AF(arg0, u16, 0x34)) {
    case 0:
        if (func_8012CBF4(arg0) != 0) {
            AF(arg0, s32, 0x1C) = 0x1E;
            AF(AF(arg0, u8 *, 0x20), s16, 0x10) = 0;
            AF(arg0, u16, 0x34)++;
            return;
        }
        h = AF(arg0, s16, 0x100);
        if (h < AF(arg0, s16, 0xA)) {
            AF(arg0, s16, 0xA) = h;
            AF(arg0, s32, 0x1C) = 0x1E;
            AF(AF(arg0, u8 *, 0x20), s16, 0x10) = 0;
            AF(arg0, u16, 0x34)++;
        }
        return;
    case 1:
        h = func_8012B8E4(arg0, 6);
        q = AF(arg0, u8 *, 0x20);
        AF(q, u16, 0x12) += h;
        if (func_8012BEE8(arg0, q) == 0) {
            return;
        }
        if (!(rand() & 1)) {
            AF(arg0, u16, 0x34)++;
            func_8012B200(arg0);
            AF(arg0, s32, 0x1C) = 0x20;
            func_8002D4C8(0x6FF, 0);
            return;
        }
        break;
    case 2:
        func_sc05_002_8017F0D0(&sp10, arg0, &D_sc05_002_80199FA4);
        w = sp10;
        AF(AF(arg0, u8 *, 0x20), s16, 0x10) = w;
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) = w >> 16;
        func_8012B178(arg0, AF(arg0, s32, 0xE4) + 0xFFF80000);
        func_8012CBF4(arg0);
        if (func_sc05_002_8017F0A4(arg0) != one && func_8012BEE8(arg0) == 0) {
            return;
        }
        break;
    }
    AF(arg0, s16, 2) = 1;
}

void func_sc05_002_8017EF24(s32 arg0) {
    void *temp_v1;
    void *temp_v1_2;

    if ((func_8012BEE8() != 0) && (func_8012E778(arg0, 0xA000C8) == 0)) {
        if (AF(arg0, u16, 0x70) & 0x10) {
            AF(arg0, s16, 2) = 3;
        } else {
            AF(arg0, s16, 2) = 1;
        }
        AF(arg0, u16, 0x5C) = (u16) AF(AF(arg0, void *, 0x78), u16, 2);
        temp_v1 = AF(arg0, void *, 0x20);
        AF(arg0, u16, 0x76) = (u16) AF(AF(arg0, void *, 0x78), u16, 0);
        AF(temp_v1, s16, 0x1C) = 0x1000;
        AF(temp_v1, s16, 0x1A) = 0x1000;
        AF(temp_v1, s16, 0x18) = 0x1000;
        temp_v1_2 = AF(arg0, void *, 0x20);
        AF(temp_v1_2, u16, 0x2C) = (u16) (AF(temp_v1_2, u16, 0x2C) & 0x10);
        func_8012E88C(arg0);
        func_8012A828(arg0, (s32) &D_sc05_002_8019C4C4);
    }
}

void func_sc05_002_8017EFE0(s32 arg0) {
    void *temp_v1;

    func_8002A04C(arg0);
    if (AF(arg0, s16, 0x70) & 0x8000) {
        temp_v1 = AF(arg0, void *, 0x20);
        AF(arg0, s16, 2) = 7;
        AF(arg0, u8, 0xC1) = 0;
        AF(arg0, s32, 0x1C) = 0x40;
        AF(arg0, s16, 0x5E) = 0;
        AF(arg0, s16, 0x5C) = 0;
        AF(temp_v1, s16, 0x12) = 0;
        AF(temp_v1, s16, 0x10) = 0;
        func_8012E8A8(arg0);
        AF(arg0, u16, 6) = (u16) AF(arg0, u16, 0x88);
        AF(arg0, u16, 0xA) = (u16) AF(arg0, u16, 0x8A);
        AF(arg0, u16, 0xE) = (u16) AF(arg0, u16, 0x8C);
        return;
    }
    func_8012C218(arg0);
}

void func_sc05_002_8017F06C(u8 *arg0) {
    AF(arg0, s16, 2) = 1;
    AF(arg0, u16, 0x5C) = (u16) AF(AF(arg0, void *, 0x78), u16, 2);
    func_8012A828((s32) arg0, (s32) &D_sc05_002_8019C4C4);
}

s32 func_sc05_002_8017F0A4(s32 arg0) {
    return func_8012D5E4(arg0, (s32) &D_sc05_002_80199FF4, (s32) (&D_sc05_002_80199FF4 + 8), 5) != 0;
}

s32 func_sc05_002_8017F0D0(s32 *arg0, u8 *arg1, u16 *arg2) {
    s16 v[8];
    s32 r[2];
    u16 *p;
    s16 *g;

    g = &D_80126CBA;
    if (*g == 0) {
        p = (u16 *) (g - 3);
        AF(arg1, s32, 0xE0) = 0;
    } else {
        p = (u16 *) (arg1 + 0x88);
        AF(arg1, s32, 0xE0) = 1;
    }
    v[1] = p[0] + arg2[0];
    v[3] = p[1] + arg2[1];
    AF(arg1, s16, 0x100) = v[3];
    v[5] = p[2] + arg2[2];
    func_8012B77C(r, arg1 + 4, v);
    *arg0 = r[0];
    return (s32) arg0;
}

s32 func_sc05_002_8017F17C(s32 arg0) {
    return D_80078EC1 == 0x15;
}

void func_sc05_002_8017F194(s32 arg0) {
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 0x7F;
    temp_v0 = func_8012BD14(arg0);
    if (temp_v0 >= 0x1001) {
        var_s0 = 0x7F - ((temp_v0 - 0x1000) / 9984);
    }
    func_8002D4C8(0x6FE, (var_s0 | 0x1000) & 0xFFFF);
}

void func_sc05_002_8017F200(u8 *o) {
    u8 *p = AF(o, u8 *, 0x20);
    s16 d = D_sc05_002_8019C7D4[AF(o, s16, 0x70)];
    AF(p, s16, 0x30) += d;
    if (d < 0) {
        if (AF(p, s16, 0x30) <= D_sc05_002_8019C7CC[AF(o, s16, 0x70)] - 0x30) {
            AF(p, s16, 0x30) = D_sc05_002_8019C7CC[AF(o, s16, 0x70)];
        }
    } else {
        if (AF(p, s16, 0x30) >= D_sc05_002_8019C7CC[AF(o, s16, 0x70)] + 0x30) {
            AF(p, s16, 0x30) = D_sc05_002_8019C7CC[AF(o, s16, 0x70)];
        }
    }
    if (func_8012BEE8(o) != 0) {
        AF(o, s32, 0x1C) = D_sc05_002_8019C7DC[AF(o, s16, 0x70)];
        func_8012C588(0x1A4, o);
    }
    if (AF(o, s16, 0x70) == 0) {
        func_sc05_002_8017F348(o);
    }
}

void func_sc05_002_8017F30C(u8 *arg0) {
    D_sc05_002_8019C7E4[AF(arg0, u16, 2)]();
}

void func_sc05_002_8017F348(u8 *o) {
    s32 p = (s32)D_801202A0;
    u8 *best = 0;
    u8 *pl = &D_80126B58;
    s16 min = 0x7FFF;
    s32 i;
    s16 d, a;
    s16 *ta, *tb;
    for (i = 0; i < 0x60; i++) {
        if (AF(p, u16, 0) == 0x1A3) {
            d = AF(p, s16, 6) - AF(pl, s16, 6);
            a = d;
            if (d < 0) a = -d;
            if (min > a) {
                min = a;
                best = (u8 *)p;
            }
        }
        do { p += 0x10C; } while (0); /* MATCH-TRICK: loop-depth weight raises p's refs so it outranks i and y for a1 */
    }
    if (AF(o, s16, 0xFE) != 0) {
        p = 0xBAA;
        ta = D_sc05_002_8019C7F8;
        tb = D_sc05_002_8019C7FC;
    } else {
        p = 0x704;
        ta = D_sc05_002_8019C7F0;
        tb = D_sc05_002_8019C7F4;
    }
    if (best != 0) {
        s16 k = AF(best, s16, 0x70);
        s16 e, dist, dy, h, y;
        s32 sum;
        e = ta[k >> 1] - AF(pl, s16, 6);
        dist = e;
        if (e < 0) dist = -e;
        dist -= 0x80;
        if (dist < 0) dist = 0;
        dy = 0;
        h = tb[k >> 1];
        y = AF(pl, s16, 0xA);
        if (h > y) {
            dy = h - y;
        } else {
            h += D_sc05_002_8019C7C4[k];
            if (h < y) {
                dy = y - h;
            }
        }
        sum = dist + dy;
        if (sum < 0x200) {
            func_8002D4C8(p, ((0x7F - (sum >> 2)) | 0x1000) & 0xFFFF);
            AF(o, s16, 0x84) = 1;
            return;
        }
    }
    if (AF(o, s16, 0x84) != 0) {
        func_8002D4C8(4);
        AF(o, s16, 0x84) = 0;
    }
}

void func_sc05_002_8017F538(u8 *o) {
    s16 n;
    u8 *q;
    if (AF(o, s16, 0xFE) != 0 && (func_80029178(0xBA) & 0xFF) == 0) {
        for (n = D_sc05_002_8019C800[AF(o, s16, 0x70)]; n < D_sc05_002_8019C7C4[AF(o, s16, 0x70)]; n += 0x100) {
            q = (u8 *)func_8012C588(0x1A4, o);
            if (q != 0) {
                if (D_sc05_002_8019C7D4[AF(o, s16, 0x70)] < 0) {
                    AF(q, u16, 0xA) -= n;
                } else {
                    AF(q, u16, 0xA) += n;
                }
            }
        }
        return;
    }
    for (n = 0; n < D_sc05_002_8019C7C4[AF(o, s16, 0x70)]; n += 0x180) {
        q = (u8 *)func_8012C588(0x1A4, o);
        if (q != 0) {
            if (D_sc05_002_8019C7D4[AF(o, s16, 0x70)] < 0) {
                AF(q, u16, 0xA) -= n;
            } else {
                AF(q, u16, 0xA) += n;
            }
        }
    }
    AF(o, s32, 0x1C) = D_sc05_002_8019C7DC[AF(o, s16, 0x70)];
}

void func_sc05_002_8017F734(u8 *arg0) {
    D_sc05_002_8019C818[AF(arg0, u16, 2)]();
}

void func_sc05_002_8017F770(u8 *o) {
    u8 *p;
    AF(o, u16, 0xFE) = AF(o, u16, 0x70) & 0x8000;
    AF(o, u16, 0x70) = AF(o, u16, 0x70) & 3;
    p = (u8 *)func_8012C194(o);
    if (p == 0) {
        func_8012CAE4(o);
        return;
    }
    AF(o, u8 *, 0x20) = p;
    func_8001CB6C(p, &D_sc05_002_8019C614, 0x300, 0x100);
    AF(p, u8, 0x27) = 0x64;
    AF(p, u16, 0x30) = D_sc05_002_8019C7CC[AF(o, s16, 0x70)];
    AF(p, s16, 0x32) = -0x20;
    AF(p, u16, 0x2C) = 0x8004;
    func_sc05_002_8017F538(o);
    if (AF(o, s16, 0xFE) != 0 && (func_80029178(0xBA) & 0xFF) == 0) {
        func_8012AD44(o, 2);
        return;
    }
    func_8012AD50(o);
}

void func_sc05_002_8017F860(void) {
}

void func_sc05_002_8017F868(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v0 = func_8012C1B8(arg0, arg1, arg2);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C810(temp_v0, (s32) &D_sc05_002_8019CA2C);
    AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc05_002_8019C808 | 0x40000000);
    AF(arg0, s16, 0x5C) = 0x4400;
    AF(arg0, u8, 0x75) = 8;
    temp_v1 = AF(arg0, s32, 0x20);
    AF(arg0, u16, 0xE) = (u16) (AF(arg0, u16, 0xE) - 0x18);
    AF(temp_v1, s32, 4) = (s32) (AF(temp_v1, s32, 4) | 0x8040);
    if ((AF(AF(arg0, void *, 0x64), s16, 0xFE) != 0) && !(func_80029178(0xBA) & 0xFF)) {
        func_8012AD44(arg0, 2);
        return;
    }
    func_8012AD50(arg0);
}

void func_sc05_002_8017F940(u8 *o) {
    u8 *p;
    s16 d;
    u16 a;
    s16 t;
    t = D_sc05_002_8019C7D4[AF(AF(o, u8 *, 0x64), s16, 0x70)];
    a = AF(o, u16, 0xA) + t;
    AF(o, u16, 0xA) = a;
    p = AF(o, u8 *, 0x64);
    d = a - AF(p, u16, 0xA);
    if (d < 0) d = -d;
    if (d >= D_sc05_002_8019C7C4[AF(p, s16, 0x70)]) {
        func_8012C218();
        return;
    }
    if (AF(o, u8, 0x74) != 0) func_8012E014();
}

void func_sc05_002_8017F9F4(void) {
}

void func_sc05_002_8017F9FC(u8 *arg0) {
    D_sc05_002_8019CD64[AF(arg0, u16, 2)]();
}

void func_sc05_002_8017FA38(s32 arg0) {
    s32 temp_v0;

    if (func_8012C354(arg0, (s32) &D_sc05_002_8019CA54) != 0) {
        if (!(func_80029178(D_sc05_002_8019CABC[AF(AF(arg0, void *, 0xDC), u16, 0xA)]) & 0xFF)) {
            AF(arg0, s32, 0xCC) = func_801788B8(arg0, (s32) &func_sc05_002_801800E4);
        } else {
            AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) | 0x4000);
        }
        temp_v0 = func_8012C658(0x8F, (s32) (s16) AF(arg0, u16, 0x70), arg0);
        AF(arg0, s32, 0x6C) = temp_v0;
        if (temp_v0 == 0) {
            func_8012CAE4(arg0);
            return;
        }
        func_8012A828(arg0, (s32) &D_sc05_002_80180554);
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc05_002_8017FB0C(u8 *arg0) {
    AF(AF(AF(arg0, void *, 0x6C), void *, 0x20), s16, 0x12) = (s16) ((AF(AF(arg0, void *, 0x20), u16, 0x12) + 0x800) & 0xFFF);
    AF(arg0, s16, 2) = 2;
}

void func_sc05_002_8017FB34(void) {
}

void func_sc05_002_8017FB3C(u8 *arg0) {
    s32 *var_a1;
    s32 var_v0;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0xDC);
    if (!(AF(temp_s0, u16, 8) & 0x8000)) {
        if (func_80029178(0x1D) & 0xFF) {
            D_sc05_002_8019CCA0 = AF(temp_s0, s32, 4);
            if (!(AF(temp_s0, u16, 8) & 0x4000)) {
                var_v0 = D_sc05_002_8019CC04[AF(temp_s0, u16, 0xC)];
                goto block_6;
            }
            D_sc05_002_8019CC8C = 0;
            func_80029124(D_sc05_002_8019CC04[AF(temp_s0, u16, 0xC)], 1);
            D_sc05_002_8019CC88 = 2;
        } else {
            D_sc05_002_8019CCA0 = AF(temp_s0, s32, 0);
            var_v0 = D_sc05_002_8019CB80[AF(temp_s0, u16, 0xC)];
block_6:
            D_sc05_002_8019CC88 = 0;
            D_sc05_002_8019CC8C = var_v0;
        }
        func_80178CBC((s32) arg0, (s32) &D_sc05_002_8019CCB4);
    } else {
        var_a1 = &D_sc05_002_8019CD20;
        *var_a1 = AF(temp_s0, s32, 0);
        func_80178CBC((s32) arg0, (s32) (var_a1 - 7));
    }
    AF(arg0, s16, 2) = 4;
    AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) | 0x8000);
}

void func_sc05_002_8017FC88(u8 *arg0) {
    void *temp_s2;

    temp_s2 = AF(arg0, void *, 0xDC);
    if (func_801789AC((s32) arg0) != 0) {
        func_80178D18((s32) arg0);
        if (func_80029178(D_sc05_002_8019CABC[AF(temp_s2, u16, 0xA)]) & 0xFF) {
            if (D_sc05_002_8019CABC[AF(temp_s2, u16, 0xA)] == 0x54) {
                func_80029514(0x5A);
                func_80029124(0xEA, 1);
            }
            if ((AF(temp_s2, u16, 8) & 0x4000) && (func_80029178(0x1D) & 0xFF)) {
                func_80145EE8(0);
            }
            if (func_sc05_002_8017FE8C() == 1) {
                func_8002AC00(0x26);
            }
            AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) & 0x8000);
            func_8012C218(AF(arg0, s32, 0xCC));
        }
        AF(arg0, s16, 2) = 2;
    }
}

void func_sc05_002_8017FDA8(u8 *arg0) {
    AF(arg0, s16, 2) = 2;
    func_8012C218(AF(arg0, s32, 0xCC));
}

void func_sc05_002_8017FDD4(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 1;
}

void func_sc05_002_8017FDE4(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 2;
}

void func_sc05_002_8017FDF4(u8 *arg0) {
    func_80029124(D_sc05_002_8019CABC[AF(AF(arg0, void *, 0xDC), u16, 0xA)], 1);
}

void func_sc05_002_8017FE34(u8 *arg0) {
    func_8014ADA8((s32) &D_80126B58, (s32) AF(AF(arg0, void *, 0xDC), u16, 0xC));
}

s32 func_sc05_002_8017FE68(void) {
    return func_80174764() == 1;
}

s32 func_sc05_002_8017FE8C(void) {
    s32 i;

    for (i = 0; i < 0x26; i++) {
        if (!(func_80029178(D_sc05_002_8019CABC[i]) & 0xFF)) {
            return 0;
        }
    }
    return 1;
}

void func_sc05_002_8017FEF0(u8 *arg0) {
    D_sc05_002_8019CD8C[AF(arg0, u16, 2)]();
}

void func_sc05_002_8017FF2C(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc05_002_8019CA88) != 0) {
        AF(arg0, u16, 0xFC) = (u16) AF(AF(arg0, void *, 0x64), u16, 0x36);
        if (AF(arg0, u16, 0x70) & 0x4000) {
            func_8012A828(arg0, (s32) &D_sc05_002_8019D44C);
            AF(arg0, s16, 0x5C) = 0;
        } else {
            func_8012A828(arg0, (s32) &D_sc05_002_8019D22C);
        }
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc05_002_8017FFB4(u8 *arg0, s32 arg1) {
    s16 temp_v1;

    if (AF(arg0, s16, 0xFC) != AF(AF(arg0, void *, 0x64), s16, 0x36)) {
        func_8012C218((s32) arg0, arg1);
        return;
    }
    temp_v1 = AF(arg0, s16, 0xFE);
    if (temp_v1 == 1) {
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x1C) = 0x20;
        func_8012A828((s32) arg0, (s32) &D_sc05_002_8019D23C);
        AF(arg0, s16, 0x5C) = 0;
        func_8002D4C8(0x5BF, 0);
    } else if (temp_v1 == 2) {
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x1C) = 0x20;
        func_8012A828((s32) arg0, (s32) &D_sc05_002_8019D344);
        AF(arg0, u16, 0x5C) = 0x8C00;
    }
}

void func_sc05_002_80180074(u8 *arg0) {
    s32 f;

    if (AF(arg0, s16, 0x98) == 0) {
        f = AF(arg0, s16, 0xFE);
        AF(arg0, s16, 2) = 1;
        if (f == 1) {
            func_8012A828((s32) arg0, (s32) &D_sc05_002_8019D44C);
        } else {
            func_8012A828((s32) arg0, (s32) &D_sc05_002_8019D22C);
        }
        AF(arg0, s16, 0xFE) = 0;
    }
}

s32 *func_sc05_002_801800E4(u8 *o) {
    struct_8_4 a;
    struct_8_4 b;
    s32 f;
    u8 *p;
    s32 *r;

    p = AF(o, u8 *, 0x64);
    gte_SetRotMatrix((u8 *) D_80126B78 + 0x34);
    gte_SetTransMatrix((u8 *) D_80126B78 + 0x34);
    RotTransSV(&D_sc05_002_8019CD7C[0], &a, &f);
    RotTransSV(&D_sc05_002_8019CD7C[1], &b, &f);
    if (func_80135888(AF(p, s32, 0x20), AF(p, s32, 0x58), &a, &b) != 0 && func_8012BDBC(p, 0x300) != 0) {
        AF(p, s16, 2) = 3;
        func_80178BF8();
        r = (s32 *) &func_80172710;
    } else {
        r = NULL;
    }
    return r;
}
