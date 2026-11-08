#include "common.h"
#include "gte.h"
#include "psyq.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc05_004_8017BE9C(void) {
}

void func_sc05_004_8017BEA4(void) {
}

void func_sc05_004_8017BEAC(void) {
}

void func_sc05_004_8017BEB4(void) {
}

typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_4;
typedef struct { s16 field_0[6]; } struct_C_3;
extern void (*D_sc05_004_80185064[])();
typedef struct { s16 field_0, field_2; } struct_4_2;
typedef struct { struct_4_2 field_0; s16 field_4; s16 field_6; struct_4_2 field_8; s32 field_C; s32 field_10; s32 field_14; s32 field_18; } struct_1C;
typedef struct { s32 field_0, field_4, field_8; } struct_C_4;
extern void func_800D22E4();
extern void func_80146C3C();
extern void (*D_sc05_004_80185340[])();
extern s32 func_80178970();
extern s32 func_80146A6C();
extern u8 D_sc05_004_801850F4;
extern s32 func_8012CBCC();
extern void func_8012B2CC();
extern void func_8012B14C();
extern void func_80178D18();
extern void func_8012C218();
extern u8 D_sc05_004_80185330[];
extern void func_80029124();
extern s32 func_8012C658();
extern void func_80178B18();
extern u8 D_80078E78;
extern u8 D_sc05_004_80185310;
extern s32 func_8012E778();
extern void func_801439C0();
extern void (*D_sc05_004_801853B4[])();
void func_sc05_004_8017E278(void);
extern void func_800167B8();
extern s32 func_800167F0();
void func_sc05_004_8017E2A0(void);
extern void func_800D1EBC();
extern void (*D_sc05_004_801853C8[])();
extern u8 D_sc05_004_801853D4;
extern void func_8016EE40();
extern u8 D_sc05_004_801853E0;
extern void func_sc05_004_8017E36C();
extern void (*D_sc05_004_801853F4[])();
extern void (*D_sc05_004_80185484[])();
extern void (*D_sc05_004_801854F8[])();
extern s32 func_8012C354();
extern s32 func_801788B8();
extern u8 D_sc05_004_80181998;
extern u8 D_sc05_004_801854AC;
extern s32 * func_sc05_004_8017EAFC();
extern void func_80178CBC();
extern u8 D_sc05_004_801854E0;
extern void (*D_sc05_004_80198728[])();
extern void (*D_sc05_004_8019AF58[])();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

extern s32 func_8012AD44();
extern s32 func_sc05_004_8017EB58();

extern void (*D_sc05_004_8019AF08[])();
extern void func_8012B260();
extern void func_sc05_004_801808CC();
extern void func_8001CD50();
extern u8 D_sc05_004_8019F078;
extern s32 func_8012913C();
extern void func_8012E688();
extern void func_8002AC00();
extern s32 func_8012BCCC();
extern u8 D_80126B5C;
extern void func_8012B77C();
extern void func_sc05_004_801807AC();
extern u8 D_sc05_004_8019AEC8;
extern u8 D_sc05_004_8019AED0;
extern s32 func_8012CBF4();
extern s32 func_8012D5E4();
extern s32 func_8012BE54();
extern void func_sc05_004_801804B8();
extern u8 D_sc05_004_8019F0B8;
extern void func_800233CC();
extern s32 func_801292C8();


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
extern s32 func_sc05_004_8017E79C();
extern u8 D_sc05_004_8018548C;
extern s32 func_sc05_004_8017E808();
extern s32 D_80126B8C;
extern u8 D_sc05_004_801986E8;
extern s32 func_8012C1B8();
extern void func_8012CAE4();
extern void func_8001C214();
extern s32 func_sc05_004_8017EB78();
extern s32 func_sc05_004_8017EC60();
extern s32 func_80029178();
extern s32 func_8012BEE8();
extern s32 func_sc05_004_8017EBA0();

extern void (*D_sc05_004_801986F8[])();
extern void func_8012DFD4();
extern void func_sc05_004_8017ECC4();
extern void *D_80126B78;
extern u8 D_sc05_004_80198708;
extern u8 D_sc05_004_80198718;
extern void func_8001C2C4();
extern void func_8012AD50();

typedef struct { s16 field_0[3][3]; s16 field_12; s32 field_14[3]; } struct_20_3;
typedef struct { u32 field_0; u32 field_4; u32 field_8; u32 field_C; u32 *field_10; } struct_14_2;
typedef struct { s32 field_0; s32 field_4; s32 field_8; s32 field_C; s32 field_10; s32 field_14; s32 field_18; } struct_1C_2;
extern u8 *D_800A5E60;
extern u16 D_800B9A02;
extern u32 D_800A6610[2][0x1000];

void func_sc05_004_8017BEBC(u8 *obj) {
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
typedef struct { u16 field_0[6]; } struct_C_5;
typedef struct { u16 field_0, field_2, field_4, field_6; } struct_8_6;
typedef struct { u8 field_0, field_1, field_2, field_3; } struct_4_3;
typedef struct { struct_8_6 field_0; struct_8_6 field_8; struct_4_3 field_10; struct_4_3 field_14; s32 field_18; } struct_1C_3;
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_4;
typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_7;
typedef struct { struct_8_7 field_0[4]; struct_4_3 field_20[4]; s32 field_30; } struct_34_2;
typedef struct { u16 field_0; s16 field_2; s16 field_4; s16 field_6; s32 field_8; s32 field_C; } struct_10;
typedef struct { s16 field_0, field_2, field_4, field_6; u8 field_8, field_9; s16 field_A; struct_10 field_C[16]; } struct_10C_2;
typedef struct { s32 field_0, field_4, field_8, field_C; } struct_10_2;
typedef struct { u32 *field_0; u8 field_4[0x10]; } struct_14_3;
typedef struct { u8 field_0[0x14]; } struct_14_4;
typedef struct { unsigned field_0_b0 : 24; unsigned field_3_b0 : 8; } struct_4_4;
extern u8 D_sc05_004_80185058;
extern u8 *func_800D21C4();
extern s32 func_80143970();
extern u8 D_sc05_004_8018506C;
extern u8 D_sc05_004_80185204;
extern u8 D_sc05_004_80185238;
extern s32 D_sc05_004_8019EFD0;
extern s32 D_sc05_004_8019EFD4;
extern s32 D_sc05_004_8019EFD8;
extern u32 func_80029504();
extern s32 D_sc05_004_8019EFDC;
extern s32 D_sc05_004_8019EFE4;
extern void func_sc05_004_8017DA24();
extern void func_sc05_004_8017D9B0();
extern s32 func_8012BB3C();
extern s32 func_8012B8E4();
extern void func_8012AD80();
extern void func_8012B200();
extern s32 func_8012CBA4();
extern s32 func_8012CEB0();
extern u8 D_sc05_004_8019AEA4;
extern void func_8012B1B4();
extern u8 D_sc05_004_8019AEC0;
extern s32 func_8012BDBC();
extern s32 func_8012CC40();
extern void func_8012B23C();

typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_5;
typedef struct { u8 field_0, field_1, field_2, field_3; } struct_4_5;
typedef struct { u8 field_0[8]; } struct_8_8;
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_6;
typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_9;
extern void func_sc05_004_8017E440();
extern s32 func_80012C6C();
extern s32 func_80012ABC();
extern void func_8012F14C();

typedef struct { struct_C_5 field_0[9]; } struct_6C;
typedef struct { s32 field_0, field_4, field_8, field_C; } struct_10_3;
typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_10;
typedef struct { s32 field_0, field_4, field_8, field_C; } struct_10_4;
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_7;
typedef struct { u8 field_0, field_1, field_2, field_3; } struct_4_6;
typedef struct { struct_8_10 field_0[4]; struct_4_6 field_20[4]; s32 field_30; } struct_34_3;
typedef struct { s32 field_0, field_4, field_8; } struct_C_6;
extern s32 func_8012B864();
extern s32 func_8012BD14();
extern s32 D_sc05_004_801852D4;
extern void func_8012ADE4();
extern void func_sc05_004_8017DB00();
extern s32 func_8012BC60();
extern s32 func_8016F1AC();
extern void func_80178B70();
extern s32 func_8012CC64();
extern s32 func_80133784();

typedef struct { unsigned field_0_b0 : 31; unsigned field_3_b7 : 1; } struct_4_7;

extern s32 D_sc05_004_801955BC[];
extern s32 D_sc05_004_8019EFE8[];
extern s32 D_sc05_004_8019EFEC[];
extern u8 D_sc05_004_801853F8;
extern u8 D_sc05_004_80185408;
extern u8 D_sc05_004_80185450;
extern s32 func_8001D074();
extern void func_8001CD9C();
extern u8 D_sc05_004_8019DBF8;
extern u8 D_sc05_004_8019DBFC;
extern u8 D_sc05_004_8019EFF8;
extern u8 D_sc05_004_8019EFFC;

typedef struct { u32 field_0_b0 : 24; u32 field_3_b0 : 8; } struct_4_8;
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_8;
typedef struct { struct_4_8 field_0; u8 field_4, field_5, field_6, field_7; s16 field_8, field_A, field_C, field_E, field_10, field_12, field_14, field_16; } struct_18;
typedef union { s32 m0; struct_4_2 m1; } union_4_2;
typedef void (*type_2)();
typedef struct { u8 field_0[0x18]; struct_20_4 field_18; } struct_38;
typedef struct { s32 field_0[4]; } struct_10_5;
typedef struct { struct_10_5 field_0, field_10, field_20; } struct_30_2;
typedef struct { u8 field_0[0x34]; } struct_34_4;
typedef struct { s16 field_0, field_2, field_4, field_6, field_8; u16 field_A; s16 field_C, field_E; s32 field_10; } struct_14_5;
extern void func_8012B0B4();
extern s32 func_8012B6D4();
extern u8 D_sc05_004_8018526C[];
extern struct_4_2 D_sc05_004_8018528C[];
extern u8 D_sc05_004_8018515C;
extern void *D_sc05_004_8019AF60[];
extern void *D_801151D4;
extern s32 func_8012BD3C();
extern s32 func_8012BE98();
extern s32 func_8012B608();
extern s32 func_8012B744();
extern void func_8012C0EC();
extern u8 D_sc05_004_8019AEB0;
extern u8 D_sc05_004_8019AEB8;
extern u16 D_801202A0;

void func_sc05_004_8017CD9C(s32 arg0, struct_8_5 *arg1, s32 arg2) {
    struct_8_5 v;
    s16 i;
    s16 k;

    v.field_0 = arg1->field_0;
    v.field_2 = arg1->field_2 - 20;
    v.field_4 = arg1->field_4;
    func_8012F14C(AF(arg0, s32, 0x20) + 0x34, &v, &v);
    for (i = 0; i < 2; i++) {
        k = 1;
        if ((s16)arg2 == 0) {
            k = i;
        }
        func_80146A6C(0x25, arg0, v.field_0, v.field_2, v.field_4, k, 0);
    }
}

void func_sc05_004_8017CE68(u8 *arg0) {
    struct_8_7 v;
    struct_20_4 m;
    u8 *q;
    u8 *o;
    struct_20_4 *pm;
    u16 r;
    s16 k;

    q = AF(arg0, u8 *, 0x34);
    o = func_800D21C4(arg0, &D_sc05_004_80185058, 0x2A);
    if (o == 0) {
        func_80146C3C(arg0);
        return;
    }
    AF(arg0, u8 *, 0x20) = o;
    AF(o, s16, 0x2A) = 0x1F0;
    pm = (struct_20_4 *)(AF(q, u8 *, 0x20) + 0x34);
    r = rand();
    if (AF(arg0, s32, 0x2C) == 0) {
        k = 0x1000;
        v.field_0 = (r & 0xFF) + 0x240;
        AF(o, s16, 0x28) = 0x240;
        AF(o, s16, 0x18) = 0x1000;
    } else {
        k = 0x200;
        v.field_0 = (r & 0xFF) * 4 + 0xD00;
        AF(o, s16, 0x28) = 0x244;
        AF(o, s16, 0x18) = 0x1800;
    }
    v.field_2 = ((u32)(r & 0x7F00) >> 5) + 0xE00;
    v.field_4 = 0;
    RotMatrixYXZ(&v, &m);
    MulMatrix2(pm, &m);
    v.field_0 = 0;
    v.field_2 = 0;
    v.field_4 = k;
    ApplyMatrixSV(&m, &v, &v);
    AF(arg0, s32, 0x10) = v.field_0 << 8;
    AF(arg0, s32, 0x14) = v.field_2 << 8;
    AF(arg0, s32, 0x18) = v.field_4 << 8;
    AF(arg0, s32, 0x1C) = 0x20;
    AF(arg0, s16, 2)++;
}

void func_sc05_004_8017CFC4(u8 *arg0) {
    D_sc05_004_80185064[AF(arg0, u16, 2)]();
}

void func_sc05_004_8017D000(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 != -1) {
        func_800D22E4();
        AF(arg0, s32, 0x14) = (s32) (AF(arg0, s32, 0x14) + 0x1A000);
        return;
    }
    func_80146C3C((s32) arg0);
}

void func_sc05_004_8017D060(u8 *arg0) {
    u8 *g;

    g = &D_80078E78;
    if ((func_80029178(D_sc05_004_80185330[AF(arg0, s16, 0x70)]) & 0xFF) || (AF(arg0, s16, 0x70) == 4 && func_80029504() < 200)) {
        func_8012CAE4(arg0);
        return;
    }
    if (AF(g, u16, 0x1A) < 300 || AF(g, u16, 0x1A) >= 1320) {
        if (AF(arg0, u8 *, 0x20) == 0 && func_8012C354(arg0, &D_sc05_004_80185204) != 0) {
            AF(arg0, u16, 0x5C) |= 0x10;
            func_8012A828(arg0, &D_sc05_004_8018506C);
            AF(AF(arg0, u8 *, 0x20), u16, 0x2C) |= 0x10;
            D_sc05_004_8019EFD0 = AF(arg0, s16, 0x88) << 16;
            D_sc05_004_8019EFD4 = AF(arg0, s16, 0x8A) << 16;
            D_sc05_004_8019EFD8 = AF(arg0, s16, 0x8C) << 16;
            AF(arg0, s32, 0xCC) = func_80143970(arg0);
            AF(arg0, s16, 0xFC) = 0;
            AF(arg0, s32, 0x1C) = 0x10;
            AF(arg0, s16, 2)++;
        }
    } else if (AF(arg0, u8 *, 0x20) == 0 && func_8012C354(arg0, &D_sc05_004_80185238) != 0) {
        AF(arg0, s16, 0xAE) = -4;
        AF(arg0, s32, 0xCC) = func_80143970(arg0);
        AF(arg0, s16, 2) = 7;
    }
}

void func_sc05_004_8017D1FC(u8 *arg0) {
    s32 r;
    s16 i;

    if (--AF(arg0, s32, 0x1C) == -1) {
        func_8012A828(arg0, &D_sc05_004_801850F4);
        if (++AF(arg0, s16, 0x10A) & 3) {
            if (AF(arg0, s16, 0x104) == 0) {
                r = rand();
                D_sc05_004_8019EFDC = (AF(arg0, s16, 0x88) + (((r & 0x7F) << 3) - 0x200)) << 16;
                D_sc05_004_8019EFE4 = (AF(arg0, s16, 0x8C) + (((u32)(r & 0x7F00) >> 5) - 0x200)) << 16;
            } else {
                func_sc05_004_8017DA24(arg0);
                AF(AF(arg0, u8 *, 0x20), u16, 0x12) += 0xC00;
            }
        } else {
            for (i = 0; i < 2; i++) {
                (&D_sc05_004_8019EFDC)[i] = (&D_sc05_004_8019EFD0)[i];
            }
        }
        if (AF(arg0, s16, 0x108) >= 0xD) {
            i = 2;
        } else {
            i = 8;
        }
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) += func_8012BB3C(arg0 + 4, &D_sc05_004_8019EFDC, AF(AF(arg0, u8 *, 0x20), s16, 0x12), i);
        func_sc05_004_8017D9B0(arg0, (s16)(-3 - AF(arg0, s16, 0x104)), 0x50);
        if (AF(arg0, s16, 0x104) != 0) {
            func_80146A6C(2, arg0, 0, 0, 0, 2, 0);
        }
        AF(arg0, s16, 0x108) = 0;
        AF(arg0, s16, 2)++;
    } else if (AF(arg0, s16, 0x102) != 0) {
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) += func_8012B8E4(arg0, AF(arg0, s16, 0x102));
    }
}

void func_sc05_004_8017D400(s32 a) {
    s32 pad[4];
    s16 f;
    s16 go;
    s32 t;
    s32 k;
    s16 v;
    s32 *p;

    go = 0;
    f = func_8012CBA4(a);
    if ((f & 0x6000) != 0x2000) {
        func_8012ADE4(a);
        func_sc05_004_8017DB00(a);
        if (AF(a, s32, 0x1C) >= 9) {
            AF(a, s32, 0x1C) -= 8;
        }
    }
    if (f & 0x8000) {
        goto body;
    }
    if ((f & 0x6000) != 0x2000) {
body:
        if (AF(a, s16, 0x106) == 0) {
            AF(a, s16, 0x106) = 0x111;
        }
        if (AF(a, s32, 0x1C) >= 5) {
            AF(a, s32, 0x1C) -= 4;
        }
        AF(a, s16, 0x108)++;
    } else {
        AF(a, s16, 0x106) = 0;
    }
    if (--AF(a, s32, 0x1C) != 0) {
        if (!(AF(a, s32, 0x1C) & 3) && func_8012BC60(a + 4, &D_sc05_004_8019EFDC) < 0x900) {
            AF(a, s32, 0x1C) = 1;
        }
        v = AF(a, s16, 0x106);
        if (v == 0) {
            AF(AF(a, s32, 0x20), s16, 0x12) += func_8012BB3C(a + 4, &D_sc05_004_8019EFDC, AF(AF(a, s32, 0x20), s16, 0x12), 8);
            func_sc05_004_8017D9B0(a, (s16)(-3 - AF(a, s16, 0x104)), 0);
        } else {
            AF(AF(a, s32, 0x20), s16, 0x12) += v;
            func_sc05_004_8017D9B0(a, (s16)(-3 - AF(a, s16, 0x104)), 0);
        }
        if (AF(a, s16, 0x104) != 0) {
            if (AF(a, u32, 0x94) < 11) {
                AF(a, u32, 0x94)++;
            }
            if (!(AF(a, s32, 0x1C) & 7)) {
                go = 1;
            }
        }
    } else {
        func_8012B200(a);
        func_8012A828(a, &D_sc05_004_8018506C);
        AF(a, s32, 0x1C) = 0x14 - AF(a, s16, 0x104) * 2;
        if (func_8012BD14(a) < 0x24000) {
            AF(a, s16, 0x102) = 10 - AF(a, s16, 0x104);
        } else {
            AF(a, s16, 0x102) = 0;
        }
        if (AF(a, s16, 0x104) != 0) {
            AF(a, s16, 0x104) -= 4;
            if (AF(a, s16, 0x104) < 0) {
                AF(a, s16, 0x104) = 0;
            }
        }
        AF(a, s16, 2) = 1;
    }
    if (AF(a, s16, 0xFC) != 0) {
        if (func_8016F1AC() != 0) {
            p = &D_sc05_004_801852D4;
            AF(a, s16, 0x10A) = 0;
            *p = AF(a, u16, 0x88) | (AF(a, s16, 0x8C) << 16);
            func_80178B70(a, p - 7, p);
            AF(a, s16, 0x98) = 0;
            AF(a, s32, 0x1C) = 0x14;
            func_8012B200(a);
            AF(a, s16, 2) = 3;
        }
        return;
    }
    if (AF(a, u16, 0x5E) != 0) {
        AF(AF(a, s32, 0x20), s16, 0x12) = AF(a, s16, 0x62);
        func_sc05_004_8017D9B0(a, -15, 0);
        func_sc05_004_8017DA24(a);
        AF(a, u16, 0x5E) = 0;
        AF(a, s16, 0x104) = 10;
        go = 1;
    } else {
        t = func_8012BD14(a);
        if (t < 0x10000) {
            k = 0;
            if (t >= 0x4000) {
                k = (func_8012BDBC(a, 0x500) != 0) * 4;
            } else if (t >= 0x1000) {
                if (func_8012BDBC(a, 0x680) != 0) {
                    k = 7;
                }
            } else {
                k = 9;
            }
            if (k != 0) {
                func_sc05_004_8017DA24(a);
                if (AF(a, s16, 0x104) == 0) {
                    AF(AF(a, s32, 0x20), s16, 0x12) = func_8012B864(a) - 0x800;
                    go = 1;
                }
                AF(a, s16, 0x104) = k;
                func_sc05_004_8017D9B0(a, -7 - k, 0);
            }
        }
    }
    if (go) {
        func_80146A6C(2, a, 0, 0, 0, 2, 0);
    }
}

void func_sc05_004_8017D7F4(u8 *arg0) {
    s32 f;

    func_80178970(arg0);
    if (AF(arg0, s16, 0x108) < 0x10) {
        if (AF(arg0, s16, 0xFE) != 0) {
            f = func_8012CBA4(arg0);
        } else {
            f = func_8012CBF4(arg0);
        }
        if (f & 0x8000) {
            AF(arg0, s16, 0x108)++;
        }
        if (f & 0x2000) {
            AF(arg0, s16, 0xFE) = 1;
        } else {
            AF(arg0, s16, 0xFE) = 0;
        }
    } else {
        func_8012AD80(arg0);
    }
    if (!(AF(arg0, s32, 0x1C) & 7)) {
        func_80146A6C(2, arg0, 0, 0, 0, 2, 0);
    }
    if (!(AF(arg0, s32, 0x1C) & 0xF)) {
        func_8002D4C8(0x828, 0);
    }
    if (--AF(arg0, s32, 0x1C) == -1 || func_8012E778(arg0, 0x8000A8) == 0) {
        AF(arg0, s16, 0x10A) = 1;
        func_8012B200(arg0);
        func_8012A828(arg0, &D_sc05_004_8018506C);
        AF(arg0, s16, 0x104) = 0;
        AF(arg0, s16, 0x102) = 0xA;
        AF(AF(arg0, u8 *, 0x20), s32, 4) |= 0x80000000;
        func_801439C0(AF(arg0, u8 *, 0xCC));
        AF(arg0, s32, 0x1C) = 0x14;
        AF(arg0, s16, 2) = 6;
    }
}

void func_sc05_004_8017D974(u8 *arg0) {
    D_sc05_004_80185340[AF(arg0, u16, 2)]();
}

void func_sc05_004_8017D9B0(u8 *arg0, s32 arg1, s32 arg2) {
    s32 w;

    func_8012B0B4(&w, AF(AF(arg0, void *, 0x20), s16, 0x12), (s16)arg1 << 4);
    AF(arg0, s32, 0x10) = (s16)w << 12;
    AF(arg0, s32, 0x18) = (w >> 16) << 12;
    if ((s16)arg2 != 0) {
        AF(arg0, s32, 0x1C) = (s16)arg2;
    }
}

void func_sc05_004_8017DA24(u8 *arg0) {
    s32 a;
    s32 i;
    s32 r;
    s32 x;
    s32 z;
    s32 pad[2];
    a = (func_8012B6D4(&D_80126B5C, &D_sc05_004_8019EFD0) >> 7) & 0x18;
    i = D_sc05_004_8018526C[a | ((func_8012B6D4(arg0 + 4, &D_sc05_004_8019EFD0) >> 9) & 7)];
    r = rand();
    x = AF(arg0, s16, 0x88) + D_sc05_004_8018528C[i].field_0 - 0x100;
    D_sc05_004_8019EFDC = (x + ((r & 0x7F) << 2)) << 16;
    z = AF(arg0, s16, 0x8C) + D_sc05_004_8018528C[i].field_2 - 0x100;
    D_sc05_004_8019EFE4 = (z + ((u32)(r & 0x7F00) >> 6)) << 16;
}

extern struct_20_4 D_800AE620;
extern s16 D_801152B0;
extern s16 D_801152B4;
extern s32 ratan2();
extern void RotMatrixY();
extern void ApplyMatrixSV();

void func_sc05_004_8017DB00(u8 *o) {
    struct_8_4 a;
    struct_8_4 b;
    struct_20_4 m;
    s32 e;
    s32 v;
    s32 d;
    s16 r;

    a.field_0 = AF(o, s16, 6) + AF(o, s16, 0x12);
    a.field_2 = AF(o, s16, 0xA) + 8;
    a.field_4 = AF(o, s16, 0xE) + AF(o, s16, 0x1A);
    b.field_0 = AF(o, s16, 6);
    b.field_2 = AF(o, s16, 0xA) + 8;
    b.field_4 = AF(o, s16, 0xE);
    if (func_80133784(1, &a, &b) & 0xC000) {
        e = ratan2(D_801152B0, D_801152B4) & 0xFFF;

        v = ratan2(AF(o, s32, 0x10), AF(o, s32, 0x18)) & 0xFFF;
        d = v - e;
        d <<= 16;
        if (d < 0) {
            v += 0x480;
            r = e - v;
        } else {
            v -= 0x480;
            r = e - v;
        }

        a.field_0 = AF(o, s16, 6);
        a.field_2 = AF(o, s16, 0xA);
        a.field_4 = AF(o, s16, 0xE);
        m = D_800AE620;
        RotMatrixY(r, &m);

        b.field_0 = AF(o, s16, 0x12);
        b.field_2 = AF(o, s16, 0x16);
        b.field_4 = AF(o, s16, 0x1A);
        ApplyMatrixSV(&m, &b, &b);

        b.field_0 = AF(o, s16, 6) + (b.field_0 >> 1);
        b.field_2 = AF(o, s16, 0xA) + (b.field_2 >> 1);
        d = b.field_4 >> 1;
        b.field_4 = AF(o, s16, 0xE) + d;

        if (func_8012CEB0(&a, &b, 0) & 0x2000) {
            AF(o, s16, 6) = b.field_0;
            AF(o, s16, 0xA) = b.field_2;
            AF(o, s16, 0xE) = b.field_4;
        }
    }
}

void func_sc05_004_8017DD14(s32 arg0) {
    s32 v[4];
    u8 *p;
    u16 temp_v0;

    func_80178970(arg0);
    temp_v0 = AF(arg0, u16, 0x5E);
    if ((temp_v0 == 9) | (temp_v0 == 0x11)) {
        p = (u8 *) func_8012C658(0x30, 2, arg0);
        if (p != 0) {
            AF(p, u16, 0xA) -= 0x20;
            AF(p, u16, 0x16) -= 0x10;
            func_8002D4C8(0x829, 0);
            AF(arg0, u16, 0x5E) = 0;
            func_8012A828(arg0, (s32) &D_sc05_004_8018515C);
            v[0] = 0;
            v[1] = 0xFFF20000;
            v[2] = 0x70000;
            func_8012B14C(arg0, v);
            AF(arg0, s32, 0x48) = 0x10000;
            AF(arg0, s32, 0x1C) = 0x40;
            AF(arg0, s16, 0x108) = 0;
            AF(arg0, s16, 2) = 4;
        }
    }
}

void func_sc05_004_8017DDE8(s32 arg0, s32 arg1) {
    s32 v[4];
    s32 temp_v0;
    u8 *temp_v1;

    func_80178970(arg0, arg1);
    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if ((temp_v0 == -1) || (func_8012CBCC(arg0) & 0x2000)) {
        func_80146A6C(2, arg0, 0, 0, 0, 0, 0);
        func_8012A828(arg0, (s32) &D_sc05_004_801850F4);
        temp_v1 = AF(arg0, u8 *, 0x20);
        AF(temp_v1, u16, 0x12) = (u16) (AF(temp_v1, u16, 0x12) + 0xB00);
        v[0] = 0;
        v[1] = 0;
        v[2] = -0xC0000;
        func_8012B2CC(arg0);
        func_8012B14C(arg0, v);
        AF(arg0, s16, 0xFE) = 1;
        AF(arg0, s32, 0x1C) = 0x40;
        AF(arg0, s16, 2) = 5;
    }
}

void func_sc05_004_8017DEB8(s32 arg0, s32 arg1) {
    if (func_80178970(arg0, arg1) != 0) {
        func_80178D18(arg0);
        func_80029124((s32) D_sc05_004_80185330[AF(arg0, s16, 0x70)], 1);
        func_8012C218(arg0);
    }
}

void func_sc05_004_8017DF10(u8 *arg0) {
    s32 temp_v0;
    u8 *g = &D_80078E78;

    if ((AF(arg0, s16, 0x100) == 0) && (AF(arg0, u16, 0x5E) != 0)) {
        func_80178B18((s32) arg0, (s32) &D_sc05_004_80185310);
        AF(arg0, s16, 0x100) = 1;
        AF(arg0, s16, 2) = 8;
        return;
    }
    if (((u32) (AF(g, u16, 0x1A) - 0x12C) >= 0x3FCU) && (func_8012E778((s32) arg0, 0x9000B8) == 0)) {
        if (func_8012C658(0x1F8, (s32) AF(arg0, s16, 0x70), (s32) arg0) != 0) {
            func_801439C0(AF(arg0, s32, 0xCC));
            func_8012C218((s32) arg0);
            goto block_7;
        }
    } else {
block_7:
        if (AF(arg0, u16, 0x5E) != 0) {
            temp_v0 = AF(arg0, s32, 0x1C) + 1;
            AF(arg0, s32, 0x1C) = temp_v0;
            if (temp_v0 >= 0x10) {
                AF(arg0, u16, 0x5E) = 0U;
                AF(arg0, s32, 0x1C) = 0;
            }
        }
    }
}

void func_sc05_004_8017E008(s32 arg0, s32 arg1) {
    if (func_80178970(arg0, arg1) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 7;
    }
}

void func_sc05_004_8017E048(u8 *arg0) {
    D_sc05_004_801853B4[AF(arg0, u8, 0x15)]();
}

s32 func_sc05_004_8017E084(u8 *arg0) {
    func_sc05_004_8017E278();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc05_004_8017E0C8(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

s32 func_sc05_004_8017E0EC(u8 *arg0) {
    func_sc05_004_8017E2A0();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc05_004_8017E12C(u8 *arg0) {
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

void func_sc05_004_8017E1A8(void) {
    func_800D1EBC();
}

void func_sc05_004_8017E1C8(u8 *arg0) {
    D_sc05_004_801853C8[AF(arg0, u8, 0x15)]();
}

s32 func_sc05_004_8017E204(u8 *arg0) {
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

void func_sc05_004_8017E278(void) {
    func_8016EE40((s32) &D_sc05_004_801853D4, 0x01000000);
}

void func_sc05_004_8017E2A0(void) {
    func_8016EE40((s32) &D_sc05_004_801853E0, 0x01000000);
}

void func_sc05_004_8017E2C8(void) {
    D_80126954 = 0x190;
    D_80126950 = 0x190;
    D_8012695C = 0x4B0;
    D_80126968 = 0x155;
    D_8012696A = 0x800;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x20;
    D_8012697A = 0;
    func_8012A018((s32) func_sc05_004_8017E36C, 0);
    func_8012A094((s32) &D_80126948);
    func_sc05_004_8017E36C((s32) &D_80126948);
}

void func_sc05_004_8017E36C(s32 arg0) {
    D_sc05_004_801853F4[AF(arg0, u8, 4)]();
}

extern u8 D_80126B58;
extern s16 D_80126B5E;
extern s16 D_80126B62;
extern s16 D_80126B66;

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
typedef struct { s32 field_0[4]; } struct_10_6;
typedef struct { s16 field_0, field_2, field_4; } struct_6;
typedef struct { s16 field_0, field_2; s32 field_4; } struct_8_12;
typedef struct { struct_8_4 field_0[3]; struct_4_3 field_18[3]; s32 field_24; } struct_28_2;

extern void func_80178BF8();
extern u8 func_80172710;

extern struct_8_4 D_80126940;
void func_sc05_004_8017E3A8(u8 *o) {
    struct_8_4 v;

    v = D_80126940;
    if (v.field_2 < -0x680) {
        if (v.field_0 < -0x2E0) {
            v.field_0 = -0x2E0;
        }
    } else {
        if (v.field_0 < -0x240) {
            v.field_0 = -0x240;
        }
    }
    func_sc05_004_8017E440(o, (u8 *)&v);
}

void func_sc05_004_8017E440(u8 *arg0, u8 *arg1) {
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

void func_sc05_004_8017E5D8(u8 *o) {
    s32 n;
    s32 v;
    u8 *p;
    s32 m;
    n = AF(o, s16, 0x70);
    v = D_sc05_004_801955BC[n];
    m = n * 8;
    *(s32 *)((u8 *)D_sc05_004_8019EFEC + m) = 0;
    *(s32 *)((u8 *)D_sc05_004_8019EFE8 + m) = v;
    func_8012AD50(o);
    if (n == 0) {
        p = (u8 *)func_8012C1B8();
        AF(o, u8 *, 0x20) = p;
        if (p == 0) {
            func_8012CAE4(o);
            return;
        }
        func_8001C214(p, D_sc05_004_8019EFE8);
        func_8012C658(0x292, 1, o);
        AF(o, u8 *, 0x58) = &D_sc05_004_80185408;
        AF(o, s16, 0x5C) = 0x800;
        AF(o, u8, 0x75) = 8;
    } else if (func_8012C354(o, &D_sc05_004_80185450) != 0) {
        AF(o, u8, 0xC0) = 1;
        AF(o, u8 *, 0xBC) = &D_sc05_004_801853F8;
        AF(o, s16, 0xAE) = -4;
        AF(o, s32, 0xB4) = 0;
        AF(o, u8, 0xC1) = 0;
        AF(o, u8, 0x75) = 8;
        AF(o, s32, 0xC4) |= 2;
        AF(o, s16, 0xA) += 0x20;
        AF(o, s16, 0xE) -= 0x20;
        if (func_80029178(0xBA) & 0xFF) {
            func_sc05_004_8017E79C(o);
            AF(o, s16, 0x34) = 2;
        }
    }
}

void func_sc05_004_8017E730(u8 *arg0) {
    D_sc05_004_80185484[AF(arg0, u16, 2)]();
}

void func_sc05_004_8017E76C(u8 *arg0) {
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, s16, 0x5E) = 0;
    func_sc05_004_8017E79C((s32) arg0);
    func_80029124(0xBA, 1);
}

s32 func_sc05_004_8017E79C(s32 arg0) {
    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) + 0x30);
    MoveImage((s32) &D_sc05_004_8018548C, 0x2D0, 0x180);
    MoveImage((s32) (&D_sc05_004_8018548C + 8), 0x160, 0x155);
    return func_sc05_004_8017E808(arg0);
}

s32 func_sc05_004_8017E808(u8 *o) {
    typedef struct { u8 field_0[4]; } struct_4_9;
    u8 *q;
    q = (u8 *)func_8001D074(0x7E, 0x100);
    if (q == 0) return 0;
    func_800233CC(&D_sc05_004_8019EFF8, 0x40);
    *(struct_4_9 *)&D_sc05_004_8019EFF8 = *(struct_4_9 *)&D_sc05_004_8019DBF8;
    *(struct_4_9 *)&D_sc05_004_8019EFFC = *(struct_4_9 *)&D_sc05_004_8019DBFC;
    func_8001CD9C(q, &D_sc05_004_8019EFF8);
    AF(q, u16, 0x2C) = 0xC010;
    AF(q, u32, 4) |= 0x50000000;
    AF(q, s16, 8) = AF(AF(o, u8 *, 0x64), s16, 6);
    AF(q, s16, 0xA) = AF(AF(o, u8 *, 0x64), s16, 0xA) - 0x48;
    AF(q, s16, 0xC) = AF(AF(o, u8 *, 0x64), s16, 0xE);
}

void func_sc05_004_8017E90C(void) {
    D_80126B8C = 0;
}

extern u8 D_sc05_004_80185428;
extern void func_801746A4();
void func_sc05_004_8017E91C(u8 *o) {
    if (AF(o, s16, 0x70) != 0) {
        switch (AF(o, u16, 0x34)) {
        case 0:
            if (func_80029178(0xBA) & 0xFF) {
                func_80178BF8();
                func_801746A4();
                func_80178CBC(o, &D_sc05_004_80185428);
                AF(o, u16, 0x34)++;
            }
            break;
        case 1:
            if (func_80178970(o) != 0) {
                func_80178D18(o);
                AF(o, u16, 0x34)++;
            }
            break;
        }
    }
}

s32 func_sc05_004_8017E9D4(void) {
    return 0x5F;
}

void func_sc05_004_8017E9DC(u8 *arg0) {
    D_sc05_004_801854F8[AF(arg0, u16, 2)]();
}

void func_sc05_004_8017EA18(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc05_004_801854AC) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s16, 2) = 1;
        func_8012A828(arg0, (s32) &D_sc05_004_80181998);
        func_801788B8(arg0, (s32) &func_sc05_004_8017EAFC);
    }
}

void func_sc05_004_8017EA7C(void) {
}

void func_sc05_004_8017EA84(s32 arg0) {
    func_80178CBC(arg0, (s32) &D_sc05_004_801854E0);
    AF(arg0, s16, 2) = 3;
}

void func_sc05_004_8017EABC(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 1;
    }
}

s32 *func_sc05_004_8017EAFC(u8 *arg0) {
    s32 *r;

    if (func_8012BD14(AF(arg0, s32, 0x64)) < 0x1001) {
        AF(AF(arg0, s32, 0x64), s16, 2) = 2;
        func_80178BF8();
        r = (s32 *) &func_80172710;
    } else {
        r = NULL;
    }
    return r;
}

s32 func_sc05_004_8017EB58(s32 arg0) {
    return func_8012AD44(arg0, 1);
}

s32 func_sc05_004_8017EB78(s32 arg0) {
    AF(arg0, s32, 0x1C) = 0x40;
    return func_8012AD44(arg0, 2);
}

s32 func_sc05_004_8017EBA0(s32 arg0) {
    AF(arg0, s32, 0x1C) = 0xC0;
    return func_8012AD44(arg0, 3);
}

void func_sc05_004_8017EBC8(u8 *arg0) {
    void *temp_a1;

    D_sc05_004_801986F8[AF(arg0, u16, 2)]();
    temp_a1 = AF(arg0, void *, 0x20);
    AF(temp_a1, u16, 0x12) = (u16) (AF(temp_a1, u16, 0x12) + AF(arg0, u16, 0xFC));
    func_8012DFD4((s32) arg0, (s32) temp_a1);
    if (AF(arg0, u8, 0x74) != 0) {
        AF(D_80126B78, u16, 0x12) = (u16) (AF(D_80126B78, u16, 0x12) + AF(arg0, u16, 0xFC));
    }
    func_sc05_004_8017ECC4((s32) arg0);
}

s32 func_sc05_004_8017EC60(s32 arg0) {
    func_8012C658(0x191, 0, arg0);
    func_8012C658(0x191, 1, arg0);
    func_8012C658(0x191, 2, arg0);
    return func_8012C658(0x191, 3, arg0);
}

void func_sc05_004_8017ECC4(u8 *o) {
    struct_C_4 v;
    struct_C_4 r;
    u8 *g = &D_80126B58;
    s32 n;
    s32 t;

    if (AF(o, s16, 0xFC) == 0) {
        return;
    }
    v.field_0 = AF(o, s16, 6) - D_80126B5E;
    v.field_4 = 0;
    v.field_8 = AF(o, s16, 0xE) - D_80126B66;
    Square0(&v, &r);
    if (r.field_0 + r.field_8 > 0x3C100) {
        return;
    }
    r.field_4 = AF(o, s16, 0xA) - D_80126B62;
    if ((u32)(r.field_4 + 8) >= 0x1C9) {
        return;
    }
    if ((u32)(AF(g, u16, 0) - 2) >= 2) {
        D_80126B8C = 0;
        D_80126B62 -= 4;
    }
    n = AF(o, s16, 0xFC);
    if (n > 0x80) {
        t = -0x40000;
    } else {
        t = -(n << 11);
    }
    AF(g, s32, 0x34) += t;
}

void func_sc05_004_8017EDD8(u8 *arg0) {
    D_sc05_004_80198728[AF(arg0, u16, 2)]();
}

void func_sc05_004_8017EE14(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8(arg0, arg1, arg2);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(temp_v0, AF(arg0, s32, 0xDC));
    AF(AF(arg0, s32, 0x20), s32, 0x28) = 0x01800180;
    AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc05_004_801986E8 | 0x40000000);
    AF(arg0, s16, 0x5C) = 0x4C00;
    AF(arg0, u8, 0x75) = 8;
    if (AF(arg0, s16, 0x70) == 0) {
        func_sc05_004_8017EB78(arg0);
    } else {
        func_sc05_004_8017EB58(arg0);
    }
    func_sc05_004_8017EC60(arg0);
}

void func_sc05_004_8017EEBC(s32 arg0) {
    if (func_80029178(0xBA) & 0xFF) {
        func_sc05_004_8017EB78(arg0);
        AF(arg0, s32, 0x1C) = 0;
        func_8002D4C8(0x720, 0);
    }
}

void func_sc05_004_8017EF0C(u8 *arg0) {
    s16 temp_v0_2;
    u16 temp_v0;

    if (func_8012BEE8() != 0) {
        temp_v0 = AF(arg0, u16, 0xFC) + 4;
        AF(arg0, u16, 0xFC) = temp_v0;
        if ((s16) temp_v0 >= 0x11) {
            func_sc05_004_8017EBA0((s32) arg0);
        }
    } else {
        temp_v0_2 = (s16) AF(arg0, u16, 0xFC);
        if (temp_v0_2 != 0) {
            if (temp_v0_2 < 3) {
                if (((AF(AF(arg0, void *, 0x20), s16, 0x12) + 2) & 0x3FF) < 4) {
                    AF(arg0, u16, 0xFC) = 0U;
                }
            } else {
                AF(arg0, u16, 0xFC) = (u16) (temp_v0_2 - 2);
            }
        }
        if (AF(arg0, s32, 0x1C) == 1) {
            func_8002D4C8(0x720, 0);
        }
    }
}

void func_sc05_004_8017EFD4(u8 *arg0) {
    s16 temp_v0_2;
    s16 temp_v0_3;
    u16 temp_v0;

    if (AF(arg0, s16, 0x70) == 0) {
        if (func_8012BEE8() != 0) {
            temp_v0 = AF(arg0, u16, 0xFC) - 2;
            AF(arg0, u16, 0xFC) = temp_v0;
            if ((s16) temp_v0 < 0x10) {
                AF(arg0, s32, 0x1C) = 0x40;
                func_8012AD44((s32) arg0, 2);
            }
        } else {
            temp_v0_2 = (s16) AF(arg0, u16, 0xFC);
            if (temp_v0_2 < 0x100) {
                AF(arg0, u16, 0xFC) = (u16) (temp_v0_2 + 4);
            }
            if (AF(arg0, s32, 0x1C) == 1) {
                func_8002D4C8(0x721, 0);
                func_8002D4C8(4, 0x720);
            }
        }
    } else {
        temp_v0_3 = (s16) AF(arg0, u16, 0xFC);
        if (temp_v0_3 < 0x100) {
            AF(arg0, u16, 0xFC) = (u16) (temp_v0_3 + 4);
        }
    }
}

void func_sc05_004_8017F0B8(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    u16 temp_a0;

    temp_v0 = func_8012C1B8(arg0, arg1, arg2);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C2C4(temp_v0);
    AF(arg0, s16, 0xFE) = (s16) (AF(arg0, u16, 0x70) & 0x100);
    temp_a0 = AF(arg0, u16, 0x70) & 3;
    AF(arg0, u16, 0x70) = temp_a0;
    if (AF(arg0, s16, 0xFE) == 0) {
        AF(AF(arg0, s32, 0x20), s16, 0x12) = (s16) (AF(AF(AF(arg0, void *, 0x64), void *, 0x20), u16, 0x12) + (temp_a0 << 0xA));
        AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc05_004_80198708 | 0x40000000);
        AF(arg0, s16, 0x5C) = 0x4C00;
        AF(arg0, u8, 0x75) = 8;
    } else {
        AF(arg0, s32, 0x58) = (s32) &D_sc05_004_80198718;
        AF(arg0, s16, 0x5C) = 0x4800;
    }
    func_8012AD50(arg0);
}

void func_sc05_004_8017F188(u8 *arg0, s32 arg1) {
    void *temp_a0;

    if (AF(arg0, s16, 0xFE) == 0) {
        temp_a0 = AF(arg0, void *, 0x20);
        AF(temp_a0, u16, 0x12) = (u16) (AF(temp_a0, u16, 0x12) + AF(AF(arg0, void *, 0x64), u16, 0xFC));
        func_8012DFD4((s32) arg0, arg1);
        if (AF(arg0, u8, 0x74) != 0) {
            AF(D_80126B78, u16, 0x12) = (u16) (AF(D_80126B78, u16, 0x12) + AF(AF(arg0, void *, 0x64), u16, 0xFC));
        }
    }
}

typedef struct { s16 field_0[3][3]; s16 field_12; s32 field_14[3]; } struct_20_9;
typedef struct { s16 field_0, field_2; s32 field_4; } struct_8_13;
typedef struct { s32 field_0; s32 field_4; } struct_8_14;
typedef struct { u16 field_0, field_2, field_4, field_6; } struct_8_15;
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_10;
typedef struct { u8 field_0[0x18]; struct_20_10 field_18; } struct_38_2;
typedef struct { u16 field_0[6]; } struct_C_7;
typedef struct { u16 field_0, field_2, field_4, field_6; } struct_8_16;
typedef struct { s16 field_0, field_2, field_4, field_6, field_8, field_A, field_C, field_E; s32 field_10; } struct_14_6;
typedef struct { s16 field_0; } struct_2;
typedef struct { s16 field_0, field_2; u16 field_4; s16 field_6; } struct_8_17;
typedef struct { s32 field_0; s32 field_4; s32 field_8; s16 field_C; s16 field_E; s32 field_10[2]; s32 field_18; s32 field_1C; s32 field_20; } struct_24;
typedef struct { s16 field_0, field_2, field_4, field_6; s16 field_8, field_A, field_C, field_E; s32 field_10; } struct_14_7;
typedef struct { struct_8_4 field_0[4]; s32 field_20, field_24, field_28, field_2C, field_30, field_34; } struct_38_3;
typedef struct { s16 field_0; s16 field_2[5]; } struct_C_8;
typedef struct { u8 field_0; u8 field_1[11]; } struct_C_9;
typedef struct { u32 field_0; u32 field_4; s16 field_8, field_A; u8 field_C, field_D; u16 field_E; s16 field_10, field_12; } struct_14_8;
typedef struct { s8 field_0; u8 field_1; } struct_2_2;
typedef struct { u16 field_0; } struct_2_3;
typedef struct { u32 field_0; u8 field_4, field_5, field_6, field_7; s16 field_8, field_A; u8 field_C, field_D, field_E, field_F; s16 field_10, field_12; u8 field_14, field_15, field_16, field_17; s16 field_18, field_1A; u8 field_1C, field_1D, field_1E, field_1F; s16 field_20, field_22; } struct_24_2;
typedef struct { s32 field_0; } struct_4_10;
typedef struct { s32 field_0; u8 field_4[8]; } struct_C_10;
typedef struct { s32 field_0; s32 field_4; } struct_8_18;
typedef struct { struct_8_7 field_0[4]; s32 field_20[4]; s32 field_30; s32 field_34; u8 field_38; } struct_3C;
extern u8 D_sc05_004_8019AE04;
extern u8 D_sc05_004_8019C234;
extern u8 D_sc05_004_8019AED8;
extern u8 D_sc05_004_8019F038[];
extern u8 D_sc05_004_8019AE38;
extern u8 D_sc05_004_8019AE44;
extern u8 D_sc05_004_8019AE4C;
extern u8 D_sc05_004_8019AE5C;
extern u16 D_sc05_004_8019AE60;
extern u8 D_sc05_004_8019AE64;
extern u8 D_sc05_004_8019AE70;
extern u8 D_sc05_004_8019AE78;
extern u8 D_sc05_004_8019AE9C;
extern u16 D_sc05_004_8019AEA0;
extern u8 D_sc05_004_8019AE88;
extern u8 D_sc05_004_8019AE94;
extern u8 D_sc05_004_8019F079[];
extern u8 D_sc05_004_8019F07A;
extern u8 D_sc05_004_8019F07C;
extern void func_8001CA1C();

void func_sc05_004_8017F210(u8 *arg0) {
    s32 t;
    s32 v;
    s32 q;

    switch (AF(arg0, s16, 0x70)) {
    case 0:
        if (func_8012C354(arg0, &D_sc05_004_8019AE04) == 0) {
            return;
        }
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32, 0xB4) = -1;
        AF(arg0, s32, 0xBC) = (s32)&D_sc05_004_8019AED8;
        func_8012A828(arg0, &D_sc05_004_8019C234);
        AF(arg0, s16, 2) = 1;
        AF(arg0, s16, 0x34) = 1;
        func_8012B23C(arg0);
        func_8012B1B4(arg0, &D_sc05_004_8019AEA4);
        AF(arg0, s32, 0xCC) = (s32)&D_sc05_004_8019F038[AF(arg0, s16, 0xFC) * 8];
        q = func_8012C658(0x1EA, 1, arg0);
        if (q != 0) {
            AF(q, u16, 0xFE) = AF(arg0, u16, 0x36);
        }
        return;
    case 1:
        if ((AF(arg0, s32, 0x20) = t = func_8012C1B8()) == 0) {
            goto fail;
        }
        func_8001CA1C(t, &D_sc05_004_8019AE38);
        func_8012A828(arg0, &D_sc05_004_8019AE44);
        AF(arg0, s16, 2) = 2;
        AF(arg0, s16, 0x5C) = 0x810;
        AF(arg0, s32, 0x58) = 0x20000000 | ((s32)&D_sc05_004_8019AE4C | 0x40000000);
        AF(arg0, s32, 0xD0) = (s32)&D_sc05_004_8019AE5C;
        AF(arg0, u16, 0xE) += D_sc05_004_8019AE60;
        v = AF(AF(arg0, s32, 0x64), s32, 0xCC);
        AF(AF(arg0, s32, 0x20), u16, 0x2C) |= 0x80;
        AF(AF(arg0, s32, 0x20), s32, 0x80) = v;
        AF(arg0, s32, 0xCC) = v;
        q = func_8012C658(0x1EA, 2, arg0);
        if (q != 0) {
            AF(q, u16, 0xFE) = AF(arg0, u16, 0x36);
        }
        return;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
        if ((AF(arg0, s32, 0x20) = t = func_8012C1B8()) == 0) {
            goto fail;
        }
        func_8001CA1C(t, &D_sc05_004_8019AE64);
        func_8012A828(arg0, &D_sc05_004_8019AE70);
        AF(arg0, s16, 2) = 0xF;
        AF(arg0, s16, 0x5C) = 0x810;
        AF(arg0, s32, 0x58) = 0x20000000 | ((s32)&D_sc05_004_8019AE78 | 0x40000000);
        AF(arg0, s32, 0xD0) = (s32)&D_sc05_004_8019AE9C;
        AF(arg0, u16, 0xE) += D_sc05_004_8019AEA0;
        return;
    case 7:
        if (func_8012C354(arg0, &D_sc05_004_8019AE04) == 0) {
            return;
        }
        {
            u8 *q = D_sc05_004_8019F079;
            u8 *r = q - 1;
            D_sc05_004_8019F07A = 0xFF;
            q[-1] = 0xFF;
            q[0] = 0;
            D_sc05_004_8019F07A = 0;
            D_sc05_004_8019F07C = 0;
            func_800233CC(r, 0x20);
        }
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32, 0xB4) = -1;
        AF(arg0, s32, 0xBC) = (s32)&D_sc05_004_8019AED8;
        func_8012A828(arg0, &D_sc05_004_8019C234);
        AF(arg0, s16, 2) = 8;
        AF(arg0, s16, 0x34) = 0xB;
        func_8012B23C(arg0);
        AF(arg0, s32, 0xCC) = (s32)&D_sc05_004_8019F038[AF(arg0, s16, 0xFC) * 8];
        AF(arg0, s16, 0xFC) = 0;
        q = func_8012C658(0x1EA, 8, arg0);
        if (q != 0) {
            AF(q, u16, 0xFE) = AF(arg0, u16, 0x36);
        }
        return;
    case 8:
        if ((AF(arg0, s32, 0x20) = t = func_8012C1B8()) == 0) {
            goto fail;
        }
        func_8001CA1C(t, &D_sc05_004_8019AE38);
        func_8012A828(arg0, &D_sc05_004_8019AE44);
        AF(arg0, s16, 2) = 2;
        AF(arg0, s16, 0x5C) = 0x810;
        AF(arg0, s32, 0x58) = 0x20000000 | ((s32)&D_sc05_004_8019AE4C | 0x40000000);
        AF(arg0, s32, 0xD0) = (s32)&D_sc05_004_8019AE5C;
        AF(arg0, u16, 0xE) += D_sc05_004_8019AE60;
        v = AF(AF(arg0, s32, 0x64), s32, 0xCC);
        AF(AF(arg0, s32, 0x20), u16, 0x2C) |= 0x80;
        AF(AF(arg0, s32, 0x20), s32, 0x80) = v;
        AF(arg0, s32, 0xCC) = v;
        q = func_8012C658(0x1EA, 9, arg0);
        if (q != 0) {
            AF(q, u16, 0xFE) = AF(arg0, u16, 0x36);
        }
        AF(arg0, s16, 0x106) = (rand() & 0x1F) + 0x20;
        AF(arg0, s16, 0x100) = (rand() & 0x1F) + 0x20;
        AF(arg0, s16, 0x102) = rand() & 0xFFF;
        AF(arg0, s16, 0x104) = rand() & 0xFFF;
        return;
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
        if ((AF(arg0, s32, 0x20) = t = func_8012C1B8()) == 0) {
            goto fail;
        }
        func_8001CA1C(t, &D_sc05_004_8019AE64);
        func_8012A828(arg0, &D_sc05_004_8019AE70);
        AF(arg0, s16, 2) = 0xF;
        AF(arg0, s16, 0x5C) = 0x810;
        AF(arg0, s32, 0x58) = 0x20000000 | ((s32)&D_sc05_004_8019AE78 | 0x40000000);
        AF(arg0, s32, 0xD0) = (s32)&D_sc05_004_8019AE9C;
        AF(arg0, u16, 0xE) += D_sc05_004_8019AEA0;
        AF(arg0, s16, 0x106) = (rand() & 0x1F) + 0x20;
        AF(arg0, s16, 0x100) = (rand() & 0x1F) + 0x20;
        AF(arg0, s16, 0x102) = rand() & 0xFFF;
        AF(arg0, s16, 0x104) = rand() & 0xFFF;
        return;
    case 14:
        if ((AF(arg0, s32, 0x20) = t = func_8012C1B8()) == 0) {
            goto fail;
        }
        func_8001CA1C(t, &D_sc05_004_8019AE88);
        func_8012A828(arg0, &D_sc05_004_8019AE94);
        AF(arg0, s16, 2) = 0xC;
        AF(AF(arg0, s32, 0x20), u16, 0x10) = AF(AF(AF(arg0, s32, 0x64), s32, 0x20), u16, 0x10);
        AF(AF(arg0, s32, 0x20), u16, 0x12) = AF(AF(AF(arg0, s32, 0x64), s32, 0x20), u16, 0x12);
        AF(arg0, s32, 0x14) = rsin(AF(AF(arg0, s32, 0x20), s16, 0x10)) << 9;
        AF(arg0, s32, 0x10) = -((rsin(AF(AF(arg0, s32, 0x20), s16, 0x12)) * rcos(AF(AF(arg0, s32, 0x20), s16, 0x10))) >> 3);
        AF(arg0, s32, 0x18) = -((rcos(AF(AF(arg0, s32, 0x20), s16, 0x12)) * rcos(AF(AF(arg0, s32, 0x20), s16, 0x10))) >> 3);
        AF(arg0, s32, 0x10) = AF(arg0, s32, 0x10) * 2 / 3;
        AF(arg0, s32, 0x14) = AF(arg0, s32, 0x14) * 2 / 3;
        AF(arg0, s32, 0x18) = AF(arg0, s32, 0x18) * 2 / 3;
        AF(arg0, s32, 0x1C) = 0x12C;
        return;
    case 15:
        if (func_8012C354(arg0, &D_sc05_004_8019AE04) == 0) {
            return;
        }
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32, 0xB4) = -1;
        AF(arg0, s32, 0xBC) = (s32)&D_sc05_004_8019AED8;
        func_8012A828(arg0, &D_sc05_004_8019C234);
        AF(arg0, s16, 2) = 0xD;
        AF(arg0, s16, 0x34) = 0xD;
        func_8012B23C(arg0);
        AF(arg0, s32, 0xCC) = (s32)&D_sc05_004_8019F038[AF(arg0, s16, 0xFC) * 8];
        q = func_8012C658(0x1EA, 0x11, arg0);
        if (q != 0) {
            AF(q, u16, 0xFE) = AF(arg0, u16, 0x36);
            AF(arg0, s32, 0x6C) = q;
        }
        AF(arg0, s16, 0xFC) = 0xA;
        return;
    case 16:
    case 24:
        AF(arg0, s16, 2) = 0xE;
        AF(arg0, s32, 0x1C) = 6;
        return;
    case 17:
        if ((AF(arg0, s32, 0x20) = t = func_8012C1B8()) == 0) {
            goto fail;
        }
        func_8001CA1C(t, &D_sc05_004_8019AE38);
        func_8012A828(arg0, &D_sc05_004_8019AE44);
        AF(arg0, s16, 2) = 0x11;
        AF(arg0, s16, 0x5C) = 0x810;
        AF(arg0, s32, 0x58) = 0x20000000 | ((s32)&D_sc05_004_8019AE4C | 0x40000000);
        AF(arg0, s32, 0xD0) = (s32)&D_sc05_004_8019AE5C;
        AF(arg0, u16, 0xE) += D_sc05_004_8019AE60;
        v = AF(AF(arg0, s32, 0x64), s32, 0xCC);
        AF(AF(arg0, s32, 0x20), u16, 0x2C) |= 0x80;
        AF(AF(arg0, s32, 0x20), s32, 0x80) = v;
        AF(arg0, s32, 0xCC) = v;
        q = func_8012C658(0x1EA, 0x12, arg0);
        if (q != 0) {
            AF(q, u16, 0xFE) = AF(arg0, u16, 0x36);
            AF(arg0, s32, 0x6C) = q;
        }
        AF(arg0, s16, 0x106) = (rand() & 0x1F) + 0x20;
        AF(arg0, s16, 0x100) = (rand() & 0x1F) + 0x20;
        AF(arg0, s16, 0x102) = rand() & 0xFFF;
        AF(arg0, s16, 0x104) = rand() & 0xFFF;
        return;
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
        if ((AF(arg0, s32, 0x20) = t = func_8012C1B8()) == 0) {
        fail:
            func_8012CAE4(arg0);
            return;
        }
        func_8001CA1C(t, &D_sc05_004_8019AE64);
        func_8012A828(arg0, &D_sc05_004_8019AE70);
        AF(arg0, s16, 2) = 0x10;
        AF(arg0, s16, 0x5C) = 0x810;
        AF(arg0, s32, 0x58) = 0x20000000 | ((s32)&D_sc05_004_8019AE78 | 0x40000000);
        AF(arg0, s32, 0xD0) = (s32)&D_sc05_004_8019AE9C;
        AF(arg0, u16, 0xE) += D_sc05_004_8019AEA0;
        AF(arg0, s16, 0x106) = (rand() & 0x1F) + 0x20;
        AF(arg0, s16, 0x100) = (rand() & 0x1F) + 0x20;
        AF(arg0, s16, 0x102) = rand() & 0xFFF;
        AF(arg0, s16, 0x104) = rand() & 0xFFF;
        return;
    case 25:
        AF(arg0, s16, 2) = 0x13;
        return;
    }
}

void func_sc05_004_8017F9BC(u8 *arg0) {
    struct_8_4 out;
    struct_8_4 sv;
    struct_8_4 b;
    s32 t;
    u8 *p;
    u8 *m;
    s32 d;

    if (AF(AF(arg0, u8 *, 0x64), s16, 0x36) != AF(arg0, s16, 0xFE)) {
        func_8012C218(arg0);
        return;
    }
    if (AF(arg0, s16, 0x70) == 1 || AF(arg0, s16, 0x70) == 8) {
        p = AF(arg0, u8 *, 0xCC);
        {
            s32 a = (AF(arg0, u16, 0xFC) + 0x40) & 0xFFF;
            AF(arg0, u16, 0xFC) = a;
            AF(p, s16, 0) = AF(p, s16, 2) = AF(p, s16, 4) = (rsin(a) >> 6) + 0xBF;
        }
    }
    if (AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), s32, 4) & 0x80000000) {
        AF(AF(arg0, u8 *, 0x20), s32, 4) |= 0x80000000;
    } else {
        AF(AF(arg0, u8 *, 0x20), s32, 4) &= 0x7FFFFFFF;
    }
    AF(AF(arg0, u8 *, 0x20), u16, 0x18) = AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), u16, 0x18);
    if (AF(AF(arg0, u8 *, 0x64), s16, 0x70) < 8) {
        AF(arg0, u16, 0x108) = (AF(arg0, u16, 0x108) + 0x40) & 0xFFF;
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) &= 0xFFF;
        AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), u16, 0x12) &= 0xFFF;
        t = AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), s16, 0x12) - AF(AF(arg0, u8 *, 0x20), s16, 0x12);
        if (t > 0x800) {
            t -= 0x1000;
        }
        if (t < -0x800) {
            t += 0x1000;
        }
        if (t > 0x200) {
            AF(AF(arg0, u8 *, 0x20), s16, 0x12) += t - 0x200;
        } else if (t < -0x200) {
            AF(AF(arg0, u8 *, 0x20), s16, 0x12) += t + 0x200;
        } else {
            AF(AF(arg0, u8 *, 0x20), u16, 0x12) += t / 16;
        }
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) += rsin(AF(arg0, s16, 0x108)) >> 6;
        m = AF(arg0, u8 *, 0x20);
        RotMatrixZYX(m + 0x10, m + 0x34);
        gte_SetRotMatrix(AF(arg0, u8 *, 0x20) + 0x34);
        gte_SetTransMatrix(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20) + 0x34);
        p = AF(arg0, u8 *, 0xD0);
        sv.field_0 = 0;
        sv.field_2 = 0;
        sv.field_4 = (AF(p, s16, 4) * AF(AF(arg0, u8 *, 0x20), s16, 0x18)) >> 12;
        RotTransSV(&sv, &out, &t);
        AF(arg0, u16, 6) = out.field_0;
        AF(arg0, u16, 0xA) = out.field_2;
        AF(arg0, u16, 0xE) = out.field_4;
        {
            s32 pad[1];
        }
        out.field_2 -= 0x40;
        b.field_0 = AF(arg0, u16, 6);
        b.field_2 = AF(arg0, u16, 0xA) + 0x10;
        b.field_4 = AF(arg0, u16, 0xE);
        t = func_8012CEB0(&out, &b, 1);
        if (t & 0x1000) {
            return;
        }
        if (t != 0) {
            s32 y = b.field_2 - 0x10;
            d = AF(arg0, s16, 0xA) - y;
            if (d < 5) {
                return;
            }
            if (d > 0x40) {
                d = 0x40;
            }
            AF(AF(arg0, u8 *, 0x20), u16, 0x10) += d << 4;
            m = AF(arg0, u8 *, 0x20);
            RotMatrixZYX(m + 0x10, m + 0x34);
            gte_SetRotMatrix(AF(arg0, u8 *, 0x20) + 0x34);
            gte_SetTransMatrix(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20) + 0x34);
            p = AF(arg0, u8 *, 0xD0);
            sv.field_0 = 0;
            sv.field_2 = 0;
            sv.field_4 = (AF(p, s16, 4) * AF(AF(arg0, u8 *, 0x20), s16, 0x18)) >> 12;
            RotTransSV(&sv, &out, &t);
            AF(arg0, u16, 6) = out.field_0;
            AF(arg0, u16, 0xA) = out.field_2;
            AF(arg0, u16, 0xE) = out.field_4;
        } else {
            AF(AF(arg0, u8 *, 0x20), u16, 0x10) -= 0x80;
            AF(AF(arg0, u8 *, 0x20), u16, 0x10) &= 0xFFF;
            if (AF(AF(arg0, u8 *, 0x20), u16, 0x10) > 0x800 && AF(AF(arg0, u8 *, 0x20), u16, 0x10) < 0xC00) {
                AF(AF(arg0, u8 *, 0x20), u16, 0x10) = 0xC00;
            }
        }
    } else {
        {
            s32 a = (AF(arg0, u16, 0x102) + AF(arg0, u16, 0x106)) & 0xFFF;
            AF(arg0, u16, 0x102) = a;
            AF(AF(arg0, u8 *, 0x20), s16, 0x10) = rcos(a) >> 6;
        }
        {
            s32 a = (AF(arg0, u16, 0x104) + AF(arg0, u16, 0x100)) & 0xFFF;
            AF(arg0, u16, 0x104) = a;
            AF(AF(arg0, u8 *, 0x20), s16, 0x14) = rcos(a) >> 6;
        }
        AF(AF(arg0, u8 *, 0x20), u16, 0x10) += 0xC00;
        m = AF(arg0, u8 *, 0x20);
        RotMatrixZYX(m + 0x10, m + 0x34);
        gte_SetRotMatrix(AF(arg0, u8 *, 0x20) + 0x34);
        gte_SetTransMatrix(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20) + 0x34);
        p = AF(arg0, u8 *, 0xD0);
        sv.field_0 = 0;
        sv.field_2 = 0;
        sv.field_4 = (AF(p, s16, 4) * AF(AF(arg0, u8 *, 0x20), s16, 0x18)) >> 12;
        RotTransSV(&sv, &out, &t);
        AF(arg0, u16, 6) = out.field_0;
        AF(arg0, u16, 0xA) = out.field_2;
        AF(arg0, u16, 0xE) = out.field_4;
    }
}

void func_sc05_004_8017FFC4(u8 *arg0) {
    struct_8_7 a;
    struct_8_7 b;
    s32 s;
    s16 y;

    AF(AF(arg0, u8 *, 0x20), u16, 0x12) += func_8012B8E4(arg0, 0x10);
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) &= 0xFFF;
    func_8012B1B4(arg0, &D_sc05_004_8019AEA4);
    a.field_0 = b.field_0 = AF(arg0, s16, 6);
    y = AF(arg0, s16, 0xA);
    a.field_2 = b.field_2 = y;
    a.field_4 = b.field_4 = AF(arg0, s16, 0xE);
    b.field_2 = y + 0x40;
    s = func_8012CEB0(&a, &b, 1);
    if (s & 0x6000) {
        if (!(s & 0x1000)) {
            s = func_8012BCCC(arg0);
            if (s < 0x4001 && func_8012BDBC(arg0, 0x200) == 1) {
                AF(arg0, s16, 2) = 4;
                AF(arg0, s16, 0xFC) = 0;
                AF(arg0, s16, 0x100) = AF(arg0, s16, 0xA);
            }
        }
    }
    if (s > 0x40000) {
        AF(arg0, s16, 2) = 1;
    }
    if (func_8012CC40(arg0, &D_sc05_004_8019AEC0) & 0x1000) {
        AF(arg0, s16, 2) = 0x12;
    }
}

void func_sc05_004_801800F8(u8 *arg0) {
    s32 i;
    u8 *p;
    u8 *next;
    s32 r;
    s16 ang;
    struct_8_4 a;
    struct_8_4 b;

    i = 0;
    if (--AF(arg0, s16, 0xFC) == 0) {
        p = arg0;
        do {
            p = AF(p, u8 *, 0x6C);
            i++;
        } while (p != 0);
        if (i < 7) {
            if (arg0 == 0) {
                return;
            }
            p = arg0;
            for (;;) {
                next = AF(p, u8 *, 0x6C);
                func_8012C218(p);
                p = next;
                if (p == 0) {
                    return;
                }
            }
        }
    }
    AF(AF(arg0, u8 *, 0x20), u16, 0x14) += 0x40;
    AF(AF(arg0, u8 *, 0x20), u16, 0x14) &= 0xFFF;
    r = func_8012CC64(arg0, &D_sc05_004_8019AEC0);
    if (r & 0x1000) {
        AF(arg0, s16, 2) = 0x12;
        return;
    }
    i = 0;
    if (r & 0xC000) {
        AF(arg0, s16, 0x16) = -(rand() & 3) - 8;
        a.field_0 = AF(arg0, u16, 6) - 0x20;
        a.field_2 = AF(arg0, u16, 0xA) + 0x10;
        a.field_4 = AF(arg0, u16, 0xE) + 0x20;
        b.field_0 = a.field_0 + 0x40;
        b.field_2 = a.field_2;
        b.field_4 = a.field_4;
        if (func_80133784(1, &a, &b) != 0) {
            AF(arg0, s16, 0x12) = -(rand() & 3) - 4;
            i = 1;
        } else {
            b.field_0 = a.field_0 + 0x40;
            b.field_2 = a.field_2;
            b.field_4 = a.field_4;
            if (func_80133784(1, &b, &a) != 0) {
                AF(arg0, s16, 0x12) = (rand() & 3) + 4;
                i = 2;
            }
        }
        a.field_0 = AF(arg0, u16, 6);
        a.field_2 = AF(arg0, u16, 0xA) + 0x10;
        a.field_4 = AF(arg0, u16, 0xE);
        b.field_0 = a.field_0;
        b.field_2 = a.field_2;
        b.field_4 = a.field_4 + 0x40;
        if (func_80133784(1, &a, &b) != 0) {
            AF(arg0, s16, 0x1A) = -(rand() & 3) - 4;
            i += 4;
        } else {
            b.field_0 = a.field_0;
            b.field_2 = a.field_2;
            b.field_4 = a.field_4 + 0x40;
            if (func_80133784(1, &b, &a) != 0) {
                AF(arg0, s16, 0x1A) = (rand() & 3) + 4;
                i += 8;
            }
        }
        switch (i) {
        case 1:
            ang = 0x800;
            break;
        case 2:
            ang = 0;
            break;
        case 4:
            ang = 0x400;
            break;
        case 5:
            ang = 0x600;
            break;
        case 6:
            ang = 0x200;
            break;
        case 8:
            ang = 0xC00;
            break;
        case 9:
            ang = 0xA00;
            break;
        case 10:
            ang = 0xE00;
            break;
        }
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) = ang;
    } else if (r & 0x2000) {
        func_8012E688(arg0, 0x833, 0);
        if ((rand() & 0xF) == 0) {
            AF(AF(arg0, u8 *, 0x20), s16, 0x14) = 0;
            AF(arg0, s16, 2) = 1;
            AF(arg0, s16, 0x34) = 1;
            AF(arg0, s16, 0x70) = 0;
            AF(arg0, s16, 0x88) = AF(arg0, s16, 6);
            AF(arg0, s16, 0x8A) = AF(arg0, s16, 0xA);
            AF(arg0, s16, 0x8C) = AF(arg0, s16, 0xE);
            func_8012B23C(arg0);
            func_8012B1B4(arg0, &D_sc05_004_8019AEA4);
            for (p = AF(arg0, u8 *, 0x6C); p != 0; p = AF(p, u8 *, 0x6C)) {
                AF(p, s16, 2) = 2;
                AF(p, s16, 0x70) -= 0x10;
                AF(AF(p, u8 *, 0x20), s16, 0x14) = 0;
            }
            AF(arg0, s16, 0xFC) = 0;
        } else {
            AF(arg0, s16, 0x16) = -(rand() & 3) - 8;
        }
    }
    if (AF(arg0, s16, 0xA) > 0x64) {
        func_8012C218(arg0);
    }
}

void func_sc05_004_801804B8(u8 *arg0) {
    struct_8_5 out;
    struct_8_5 in;
    s32 pad[2];
        s32 flag[2];
    u8 *m;
    s16 v;
    s32 a;

    if (AF(AF(arg0, u8 *, 0x64), s16, 0x36) != AF(arg0, s16, 0xFE)) {
        func_8012C218(arg0);
        return;
    }
    if (AF(arg0, s16, 0x70) == 0x11) {
        m = AF(arg0, u8 *, 0xCC);
        AF(arg0, u16, 0xFC) = (AF(arg0, u16, 0xFC) + 0x40) & 0xFFF;
        a = AF(arg0, u16, 0xFC);
        v = (rsin(a) >> 6) + 0xBF;
        AF(m, s16, 0) = AF(m, s16, 2) = AF(m, s16, 4) = v;
    }
    if (AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), struct_4_7, 4).field_3_b7) {
        AF(AF(arg0, u8 *, 0x20), struct_4_7, 4).field_3_b7 = 1;
    } else {
        AF(AF(arg0, u8 *, 0x20), struct_4_7, 4).field_3_b7 = 0;
    }
    AF(AF(arg0, u8 *, 0x20), u16, 0x18) = AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), u16, 0x18);
    AF(AF(arg0, u8 *, 0x20), u16, 0x14) = AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), u16, 0x14);
    AF(arg0, u16, 0x102) = (AF(arg0, u16, 0x102) + AF(arg0, u16, 0x106)) & 0xFFF;
    a = AF(arg0, u16, 0x102);
    AF(AF(arg0, u8 *, 0x20), s16, 0x10) = rcos(a) >> 3;
    AF(arg0, u16, 0x104) = (AF(arg0, u16, 0x104) + AF(arg0, u16, 0x100)) & 0xFFF;
    a = AF(arg0, u16, 0x104);
    AF(AF(arg0, u8 *, 0x20), s16, 0x12) = rcos(a) >> 3;
    RotMatrixZYX(AF(arg0, u8 *, 0x20) + 0x10, AF(arg0, u8 *, 0x20) + 0x34);
    gte_SetRotMatrix(AF(arg0, u8 *, 0x20) + 0x34);
    gte_SetTransMatrix(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20) + 0x34);
    m = AF(arg0, u8 *, 0xD0);
    in.field_0 = 0;
    in.field_2 = 0;
    in.field_4 = (AF(m, s16, 4) * AF(AF(arg0, u8 *, 0x20), s16, 0x18)) >> 12;
    RotTransSV(&in, &out, flag);
    AF(arg0, s16, 6) = out.field_0;
    AF(arg0, s16, 0xA) = out.field_2;
    AF(arg0, s16, 0xE) = out.field_4;
}

void func_sc05_004_801806FC(u8 *arg0) {
    s16 temp_v1;
    s32 temp_a1;
    s32 temp_a1_2;

    D_sc05_004_8019AF08[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        temp_v1 = AF(arg0, s16, 0x70);
        if ((temp_v1 == 0) || (temp_v1 == 7)) {
            temp_a1 = AF(arg0, s32, 0x20);
            RotMatrixZYX(temp_a1 + 0x10, temp_a1 + 0x34);
        }
        if (AF(arg0, s16, 0x70) == 0xF) {
            temp_a1_2 = AF(arg0, s32, 0x20);
            RotMatrixZYX(temp_a1_2 + 0x10, temp_a1_2 + 0x34);
        }
        func_8012B260((s32) arg0);
    }
}

void func_sc05_004_801807AC(u8 *arg0) {
    struct_8_6 a;
    struct_8_6 b;
    u8 *o;

    AF(arg0, u16, 0x10A)++;
    if ((AF(arg0, u16, 0x10A) & 7) == 0) {
        o = (u8 *)func_8012913C(0x7B);
        if (o != 0) {
            AF(o, s32, 0x2C) = (AF(arg0, u16, 0x10A) & 0x18) >> 3;
            a.field_0 = AF(arg0, u16, 6);
            a.field_2 = AF(arg0, u16, 0xA);
            a.field_4 = AF(arg0, u16, 0xE);
            b.field_0 = a.field_0;
            b.field_2 = a.field_2 + 0x80;
            b.field_4 = a.field_4;
            func_80133784(1, &a, &b);
            if (AF(&b, u8, 6) != 0) {
                AF(o, u16, 6) = AF(arg0, u16, 6);
                AF(o, u16, 0xA) = b.field_2;
                AF(o, u16, 0xE) = AF(arg0, u16, 0xE);
            } else {
                func_801292C8(o);
            }
        }
    }
}

void func_sc05_004_80180890(u8 *arg0) {
    D_sc05_004_8019AF58[AF(arg0, u16, 2)]();
}

void func_sc05_004_801808CC(s32 arg0) {
    s32 pad[4];
    s32 temp_v0;

    temp_v0 = func_8012913C(0x7C);
    if (temp_v0 != 0) {
        AF(temp_v0, u16, 6) = (u16) AF(arg0, u16, 6);
        AF(temp_v0, u16, 0xA) = (u16) AF(arg0, u16, 0xA);
        AF(temp_v0, u16, 0xE) = (u16) AF(arg0, u16, 0xE);
        func_8001CD50(AF(temp_v0, s32, 0x20), (s32) &D_sc05_004_8019F078);
    }
}

void func_sc05_004_80180930(u8 *arg0) {
    s16 sp10[6];
    s32 sp20;
    s32 t;

    sp10[1] = AF(D_801151D4, s32, 0x5C);
    sp10[3] = AF(D_801151D4, s32, 0x60);
    sp10[5] = AF(D_801151D4, s32, 0x64);
    func_8012B77C(&sp20, arg0 + 4, sp10);
    t = sp20;
    AF(AF(arg0, void *, 0x20), s16, 0x10) = t;
    AF(AF(arg0, void *, 0x20), s16, 0x12) = t >> 0x10;
    ((void (*)(u8 *)) D_sc05_004_8019AF60[AF(arg0, u16, 2)])(arg0);
}

void func_sc05_004_801809C4(u8 *arg0) {
    struct_8_7 a;
    struct_8_7 b;
    u8 *p;

    AF(arg0, u16, 0x5C) = 0xA810;
    AF(arg0, s16, 2) = AF(arg0, s16, 0x34);
    a.field_0 = b.field_0 = AF(arg0, s16, 6);
    b.field_2 = AF(arg0, s16, 0xA);
    a.field_2 = b.field_2 - 0x18;
    a.field_4 = b.field_4 = AF(arg0, s16, 0xE);
    func_8012CEB0(&a, &b, 1);
    AF(arg0, s16, 0xA) = b.field_2 - 0x10;
    if (AF(arg0, s16, 0x70) == 0xF) {
        AF(AF(arg0, u8 *, 0x20), s16, 0x14) = 0;
        AF(arg0, s16, 2) = 1;
        AF(arg0, s16, 0x34) = 1;
        AF(arg0, s16, 0x70) = 0;
        AF(arg0, s16, 0x88) = AF(arg0, s16, 6);
        AF(arg0, s16, 0x8A) = AF(arg0, s16, 0xA);
        AF(arg0, s16, 0x8C) = AF(arg0, s16, 0xE);
        func_8012B23C(arg0);
        func_8012B1B4(arg0, &D_sc05_004_8019AEA4);
        for (p = AF(arg0, u8 *, 0x6C); p != 0; p = AF(p, u8 *, 0x6C)) {
            AF(p, s16, 2) = 2;
            AF(p, s16, 0x70) -= 0x10;
            AF(AF(p, u8 *, 0x20), s16, 0x14) = 0;
        }
        AF(arg0, s16, 0xFC) = 0;
        return;
    }
    func_8012B23C(arg0);
    func_8012B1B4(arg0, &D_sc05_004_8019AEA4);
}

void func_sc05_004_80180AEC(u8 *arg0) {
    if (AF(arg0, s16, 0x76) > 0) {
        func_8012E688((s32) arg0, 0x8C6, 0);
    }
}

void func_sc05_004_80180B1C(s32 arg0) {
    func_8012E688(arg0, 0x8C7, 0);
    func_8002AC00(0x10);
}

void func_sc05_004_80180B48(void) {
}

void func_sc05_004_80180B50(u8 *arg0) {
    u8 *q;

    q = arg0 + 0x88;
    if (func_8012BE98(arg0, q) >= 0x4000) {
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) += func_8012B608(AF(AF(arg0, u8 *, 0x20), s16, 0x12), func_8012B744(arg0 + 4, q), 0x10);
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) &= 0xFFF;
        func_8012B1B4(arg0, &D_sc05_004_8019AEA4);
    } else if (func_8012BD3C(arg0, 0x200, 0x40000) == 1) {
        AF(arg0, s16, 2) = 3;
    }
    if (func_8012CC40(arg0, &D_sc05_004_8019AEC0) & 0x1000) {
        AF(arg0, s16, 2) = 0x12;
    } else {
        func_8012C0EC(arg0);
    }
}

void func_sc05_004_80180C3C(u8 *arg0) {
    AF(arg0, u16, 0xFC) = (u16) (AF(arg0, u16, 0xFC) + 0x20);
    AF(arg0, u16, 0xA) = (u16) AF(arg0, u16, 0x100);
    AF(arg0, s32, 8) = (s32) (AF(arg0, s32, 8) - (rsin((s32) (s16) AF(arg0, u16, 0xFC)) << 0xA));
    if ((s16) AF(arg0, u16, 0xFC) >= 0x400) {
        AF(arg0, s16, 2) = 5;
        AF(arg0, s16, 0xFE) = 4;
        func_8012E688((s32) arg0, 0x98F, 0);
    }
}

void func_sc05_004_80180CBC(u8 *arg0) {
    AF(arg0, s32, 8) += 0x100000;
    AF(arg0, s32, 4) -= rsin(AF(AF(arg0, void *, 0x20), s16, 0x12)) << 8;
    AF(arg0, s32, 0xC) -= rcos(AF(AF(arg0, void *, 0x20), s16, 0x12)) << 8;
    if (--AF(arg0, s16, 0xFE) == 0) {
        AF(arg0, s16, 2) = 6;
        func_8012D5E4((s32) arg0, (s32) &D_sc05_004_8019AEB0, (s32) &D_sc05_004_8019AEB8, 0xF);
        AF(arg0, s16, 0xFE) = 8;
    }
}

void func_sc05_004_80180D70(u8 *arg0) {
    AF(arg0, s32, 8) = (s32) (AF(arg0, s32, 8) + 0xFFF80000);
    AF(arg0, s32, 4) = (s32) (AF(arg0, s32, 4) + (rsin((s32) AF(AF(arg0, void *, 0x20), s16, 0x12)) << 7));
    AF(arg0, s32, 0xC) += rcos((s32) AF(AF(arg0, void *, 0x20), s16, 0x12)) << 7;
    if (--AF(arg0, s16, 0xFE) == 0) {
        if (func_8012BCCC((s32) arg0) < 0x4001) {
            if (func_8012BDBC((s32) arg0, 0x200) == 1) {
                AF(arg0, s16, 2) = 5;
                AF(arg0, u16, 0xFE) = 4U;
                func_8012E688((s32) arg0, 0x98F, 0);
                return;
            }
            goto block_5;
        }
block_5:
        AF(arg0, s16, 2) = 7;
    }
}

void func_sc05_004_80180E50(u8 *arg0) {
    AF(arg0, u16, 0xFC) = (u16) (AF(arg0, u16, 0xFC) + 0x20);
    AF(arg0, u16, 0xA) = (u16) AF(arg0, u16, 0x100);
    AF(arg0, s32, 8) = (s32) (AF(arg0, s32, 8) - (rsin((s32) (s16) AF(arg0, u16, 0xFC)) << 0xA));
    if ((s16) AF(arg0, u16, 0xFC) >= 0x800) {
        AF(arg0, s16, 2) = 3;
    }
}

void func_sc05_004_80180EB8(u8 *arg0) {
    s16 temp_v0;

    temp_v0 = AF(arg0, s16, 0xFC);
    if (temp_v0 != 0) {
        AF(arg0, s16, 0xFC) = (s16) (temp_v0 - 1);
        return;
    }
    if (func_8012BCCC((s32) arg0) <= 0xFFFFF) {
        AF(arg0, s16, 2) = 9;
    }
}

void func_sc05_004_80180F18(u8 *arg0) {
    s32 sp10;
    u16 temp_v0;

    func_8012B77C((s32) &sp10, arg0 + 4, (s32) &D_80126B5C);
    AF(AF(arg0, void *, 0x20), s16, 0x12) = (s16) (sp10 >> 0x10);
    AF(AF(arg0, void *, 0x20), s16, 0x10) = (s16) sp10;
    temp_v0 = AF(arg0, u16, 0xA) - 8;
    AF(arg0, u16, 0xA) = temp_v0;
    if ((AF(arg0, s16, 0x8A) - (s16) temp_v0) >= 0x81) {
        AF(arg0, s16, 2) = 0xA;
        AF(arg0, s16, 0xFC) = 0xC;
    }
    func_sc05_004_801807AC((s32) arg0);
}

void func_sc05_004_80180FA8(u8 *arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0xFC) - 1;
    AF(arg0, u16, 0xFC) = temp_v0;
    if ((temp_v0 << 0x10) == 0) {
        AF(arg0, s16, 2) = 0xB;
    }
    if ((s16) AF(arg0, u16, 0xFC) == 6) {
        func_8012C658(0x1EA, 0xE, (s32) arg0);
        func_8002D4C8(0xC5D, 0);
    }
    func_sc05_004_801807AC((s32) arg0);
}

void func_sc05_004_8018101C(u8 *arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0xA) + 8;
    AF(arg0, u16, 0xA) = temp_v0;
    if ((AF(arg0, s16, 0x8A) - (s16) temp_v0) <= 0) {
        AF(arg0, s16, 2) = 8;
        AF(arg0, s16, 0xFC) = 0x1E;
    }
    func_sc05_004_801807AC((s32) arg0);
}

void func_sc05_004_8018106C(s32 arg0) {
    s32 temp_v0;

    if ((func_8012CBF4(arg0) != 0) || (func_8012D5E4(arg0, (s32) &D_sc05_004_8019AEC8, (s32) &D_sc05_004_8019AED0, 0xF) == 1) || (temp_v0 = AF(arg0, s32, 0x1C) - 1, AF(arg0, s32, 0x1C) = temp_v0, (temp_v0 == 0))) {
        func_8012C218(arg0);
        return;
    }
    func_sc05_004_801808CC(arg0);
}

void func_sc05_004_801810EC(u8 *arg0) {
    s32 temp_s1;
    s32 temp_v0;

    if (func_8012BE54() <= 0x23FFFF) {
        temp_v0 = AF(arg0, s32, 0x1C) - 1;
        AF(arg0, s32, 0x1C) = temp_v0;
        if (temp_v0 == 0) {
            temp_s1 = func_8012C658(0x1EA, 0xF, (s32) arg0);
            AF(arg0, s32, 0x1C) = (s32) ((rand() & 0x1F) + 0x2D);
            if ((AF(arg0, s16, 0x70) == 0x18) && (temp_s1 != 0)) {
                AF(AF(temp_s1, void *, 0x20), s16, 0x12) = 0x400;
            }
        }
    }
}

void func_sc05_004_8018118C(u8 *arg0) {
    s16 temp_a1;
    s32 temp_v0_2;
    s32 temp_v0_3;
    u16 temp_v0;

    AF(arg0, s16, 2) = 2;
    temp_v0 = AF(arg0, u16, 0x70) + 1;
    AF(arg0, u16, 0x70) = temp_v0;
    if ((s16) temp_v0 < 7) {
        temp_v0_2 = func_8012C658(0x1EA, (s32) (s16) temp_v0, (s32) arg0);
        if (temp_v0_2 != 0) {
            AF(temp_v0_2, u16, 0xFE) = (u16) AF(arg0, u16, 0x36);
            AF(temp_v0_2, s16, 0x108) = (s16) ((AF(arg0, u16, 0x70) - 1) << 9);
        }
    }
    temp_a1 = AF(arg0, s16, 0x70);
    if (temp_a1 >= 8) {
        if (temp_a1 < 0xE) {
            temp_v0_3 = func_8012C658(0x1EA, temp_a1, (s32) arg0);
            if (temp_v0_3 != 0) {
                AF(temp_v0_3, u16, 0xFE) = (u16) AF(arg0, u16, 0x36);
            }
        }
    }
    AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) - 1);
    func_sc05_004_8017F9BC(arg0);
}

void func_sc05_004_8018125C(u8 *arg0) {
    s32 temp_v0_2;
    u16 temp_v0;

    AF(arg0, s16, 2) = 0x11;
    temp_v0 = AF(arg0, u16, 0x70) + 1;
    AF(arg0, u16, 0x70) = temp_v0;
    if ((s16) temp_v0 < 0x17) {
        temp_v0_2 = func_8012C658(0x1EA, (s32) (s16) temp_v0, (s32) arg0);
        if (temp_v0_2 != 0) {
            AF(temp_v0_2, u16, 0xFE) = (u16) AF(arg0, u16, 0x36);
            AF(arg0, s32, 0x6C) = temp_v0_2;
            AF(temp_v0_2, s16, 0x108) = (s16) ((AF(arg0, u16, 0x70) - 0x11) << 9);
        }
    }
    AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) - 1);
    func_sc05_004_801804B8((s32) arg0);
}

void func_sc05_004_801812F0(u8 *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 8) + 0x40000;
    AF(arg0, s32, 8) = temp_v0;
    if (temp_v0 > 0x400000) {
        func_8012C218((s32) arg0, arg1);
    }
}

void func_sc05_004_8018132C(s32 arg0) {
    u8 *p;
    s32 n;
    s32 i;
    s32 t;

    p = (u8 *)&D_801202A0;
    n = 0;
    i = 0;
    do {
        if (AF(p, u16, 0) == 0x1EA) {
            t = AF(p, s16, 0x70);
            if (t == 0 || t == 7 || t == 0xF) {
                n++;
            }
        }
        i++;
        p += 0x10C;
    } while (i < 0x60);
    if (n < 2) {
        p = (u8 *)func_8012C658(0x1EA, 0, arg0);
        if (p != 0) {
            AF(AF(p, u8 *, 0x20), s16, 0x12) = rand() & 0xFFF;
            AF(p, s16, 6) += (rand() & 0x7F) - 0x40;
            AF(p, s16, 0xE) += (rand() & 0x7F) - 0x40;
        }
    }
}

void func_sc05_004_80181414(u8 *arg0) {
    s32 temp_s1;
    void *temp_s0;

    temp_s1 = AF(arg0, s32, 0x20);
    temp_s0 = (AF(arg0, s32, 0x2C) << 6) + &D_sc05_004_8019F0B8;
    func_8001CD50(temp_s1, (s32) temp_s0);
    AF(temp_s1, s16, 0x1E) = 0xCCC;
    AF(temp_s1, s16, 0x10) = 0x400;
    AF(temp_s1, s16, 0x1A) = 0;
    AF(temp_s1, s16, 0x18) = 0;
    AF(temp_s1, s32, 4) = (s32) (AF(temp_s1, s32, 4) | 0x50000000);
    func_800233CC((s32) temp_s0, 0x80);
    AF(temp_s0, u8, 2) = 0xFF;
    AF(temp_s0, u8, 1) = 0xFF;
    AF(temp_s0, u8, 0) = 0xFF;
    AF(temp_s0, u8, 5) = 0x40;
    AF(temp_s0, u8, 4) = 0x40;
    AF(temp_s0, u8, 6) = 0x80;
    AF(arg0, s32, 0x1C) = 0x10;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc05_004_801814D8(u8 *arg0) {
    s16 temp_v0;
    s32 temp_a1;
    s32 var_v0;
    s8 temp_v0_3;
    u32 temp_v0_2;
    void *temp_a2;
    void *temp_v1;

    temp_a1 = AF(arg0, s32, 0x1C) - 1;
    temp_a2 = (AF(arg0, s32, 0x2C) << 6) + &D_sc05_004_8019F0B8;
    temp_v1 = AF(arg0, void *, 0x20);
    AF(arg0, s32, 0x1C) = temp_a1;
    if (temp_a1 != -1) {
        temp_v0 = (0x10 - temp_a1) << 8;
        AF(temp_v1, s16, 0x1A) = temp_v0;
        AF(temp_v1, s16, 0x18) = temp_v0;
        var_v0 = AF(arg0, s32, 0x1C) * 0xFF;
        if (var_v0 < 0) {
            var_v0 += 0xF;
        }
        temp_v0_2 = (u32) var_v0 >> 4;
        AF(temp_a2, u8, 2) = (s8) temp_v0_2;
        AF(temp_a2, u8, 1) = (s8) temp_v0_2;
        AF(temp_a2, u8, 0) = (s8) temp_v0_2;
        temp_v0_3 = AF(arg0, s32, 0x1C) * 4;
        AF(temp_a2, u8, 5) = temp_v0_3;
        AF(temp_a2, u8, 4) = temp_v0_3;
        AF(temp_a2, u8, 6) = (s8) (AF(arg0, s32, 0x1C) * 8);
        return;
    }
    func_801292C8((s32) arg0);
}

void func_sc05_004_8018158C(u8 *arg0) {
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    AF(temp_a1, s16, 0x1E) = 0;
    AF(temp_a1, s16, 0x18) = 0;
    AF(temp_a1, s16, 0x1A) = 0;
    AF(temp_a1, s16, 0x1C) = 0;
    AF(temp_a1, s32, 4) = (s32) (AF(temp_a1, s32, 4) | 0x58000000);
    AF(arg0, s32, 0x2C) = 0x400;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc05_004_801815CC(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s16 temp_v0_2;
    s32 temp_v0;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0x20);
    temp_v0 = AF(arg0, s32, 0x2C) - 0x80;
    AF(arg0, s32, 0x2C) = temp_v0;
    if (temp_v0 <= 0) {
        func_801292C8((s32) arg0);
        return;
    }
    temp_v0_2 = rsin(temp_v0, arg1, arg2, arg3);
    AF(temp_s0, s16, 0x1A) = temp_v0_2;
    AF(temp_s0, s16, 0x18) = temp_v0_2;
}
