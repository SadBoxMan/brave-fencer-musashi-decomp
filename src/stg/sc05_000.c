#include "common.h"
#include "gte.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc05_000_8017BE9C(void) {
}

void func_sc05_000_8017BEA4(void) {
}

void func_sc05_000_8017BEAC(void) {
}

void func_sc05_000_8017BEB4(void) {
}

typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_4;
typedef struct { s16 field_0[6]; } struct_C_3;
extern void (*D_sc05_000_80181C84[])();
typedef struct { s16 field_0, field_2; } struct_4_2;
typedef struct { struct_4_2 field_0; s16 field_4; s16 field_6; struct_4_2 field_8; s32 field_C; s32 field_10; s32 field_14; s32 field_18; } struct_1C;
typedef struct { s32 field_0, field_4, field_8; } struct_C_4;
extern void func_800D22E4();
extern void func_80146C3C();
extern void (*D_sc05_000_80181D70[])();
void func_sc05_000_8017D348(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc05_000_80181D78[])();
void func_sc05_000_8017D370(void);
extern void func_800D1EBC();
extern void (*D_sc05_000_80181D84[])();
extern void (*D_sc05_000_80181D90[])();
void func_sc05_000_8017D398(void);
extern u8 D_sc05_000_80181D9C;
extern void func_8016EE40();
extern u8 D_sc05_000_80181DA8;
extern u8 D_sc05_000_80181DBC;
extern void func_sc05_000_8017D464();
extern void (*D_sc05_000_80181DCC[])();
extern void (*D_sc05_000_80181E10[])();
extern void func_8001C214();
extern s32 func_8012C1B8();
extern void func_8012CAE4();
extern u8 D_sc05_000_80181E00;
extern u8 D_sc05_000_80181DF0;
extern u8 D_sc05_000_80181DE0;
extern u8 D_sc05_000_80181DD0;
extern s32 func_80029504();
extern s32 func_sc05_000_8017D70C();
extern void (*D_sc05_000_80181E5C[])();
extern void (*D_sc05_000_80181ED8[])();
extern void (*D_sc05_000_80181F54[])();
extern s32 func_8012C354();
extern s32 func_801788B8();
extern u8 D_sc05_000_8017E5B8;
extern u8 D_sc05_000_80181E74;
extern s32 * func_sc05_000_8017DE70();
extern void func_80178CBC();
extern u8 D_sc05_000_80181EA8;
extern s32 func_80178970();
extern void func_80178D18();
extern void (*D_sc05_000_80181FD0[])();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

extern void func_sc05_000_8017DF38();
extern void func_80146CA0();
extern void func_8014BC44();
extern s32 func_80151664();

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
extern u8 D_sc05_000_80181E28;
extern s32 D_sc05_000_80198064;
extern void func_8001D0E8();
extern u8 D_sc05_000_80181EE8;
extern u8 D_sc05_000_80181F24;
extern void func_8012B200();
extern void func_8001CA1C();
extern s32 func_80146A6C();

extern u16 D_800B99DA;
extern u8 D_sc05_000_80181FB4;
extern void func_80149020();
extern void func_80147A84();
extern void func_801473EC();
extern void func_80148038();
extern void func_80147460();
s32 func_sc05_000_8017E1E8(s32 arg0);
extern s32 func_801535F4();
extern void func_8013C9C4();
extern s32 func_80146E98();
extern void func_801477E8();

typedef struct { s16 field_0[3][3]; s16 field_12; s32 field_14[3]; } struct_20_3;
typedef struct { u32 field_0; u32 field_4; u32 field_8; u32 field_C; u32 *field_10; } struct_14_2;
typedef struct { s32 field_0; s32 field_4; s32 field_8; s32 field_C; s32 field_10; s32 field_14; s32 field_18; } struct_1C_2;
extern u8 *D_800A5E60;
extern u16 D_800B9A02;
extern u32 D_800A6610[2][0x1000];

void func_sc05_000_8017BEBC(u8 *obj) {
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
extern u8 D_sc05_000_80181C78;
extern u8 *func_800D21C4();

typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_5;
typedef struct { u8 field_0, field_1, field_2, field_3; } struct_4_5;
typedef struct { u8 field_0[8]; } struct_8_8;
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_6;
typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_9;
extern void func_sc05_000_8017D538();
extern s32 func_80012C6C();
extern s32 func_80012ABC();
extern void func_8012F14C();

extern s32 func_80029178();
extern u8 *func_8012C588();
extern s16 D_80126B5E;
extern s16 D_80126B66;
extern u8 D_sc05_000_80181EC0;
extern void func_80178B18();

extern void func_80159B3C();
extern void func_8015BF48();
extern void func_80165718();

extern u8 D_801152A8;
extern s16 D_80126B62;
extern void *D_80126B78;
extern s32 D_80126B90;
extern s32 func_800CF8B4();
extern void func_8012C218();
extern void func_8012F568();
extern s32 func_80135888();
extern s32 func_8014CB8C();

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
typedef struct { u8 field_0[0x18]; struct_20_4 field_18; } struct_38;
typedef struct { s32 field_0[4]; } struct_10_5;
typedef struct { struct_10_5 field_0, field_10, field_20; } struct_30_2;
typedef struct { u8 field_0[0x34]; } struct_34_4;
typedef struct { s16 field_0, field_2, field_4, field_6, field_8; u16 field_A; s16 field_C, field_E; s32 field_10; } struct_14_5;
typedef struct { unsigned field_0_b0 : 31; unsigned field_3_b7 : 1; } struct_4_8;

void func_sc05_000_8017CD9C(s32 arg0, struct_8_5 *arg1, s32 arg2) {
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

void func_sc05_000_8017CE68(u8 *arg0) {
    struct_8_7 v;
    struct_20_4 m;
    u8 *q;
    u8 *o;
    struct_20_4 *pm;
    u16 r;
    s16 k;

    q = AF(arg0, u8 *, 0x34);
    o = func_800D21C4(arg0, &D_sc05_000_80181C78, 0x2A);
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

void func_sc05_000_8017CFC4(u8 *arg0) {
    D_sc05_000_80181C84[AF(arg0, u16, 2)]();
}

void func_sc05_000_8017D000(u8 *arg0) {
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

void func_sc05_000_8017D060(u8 *arg0) {
    D_sc05_000_80181D70[AF(arg0, u8, 0x15)]();
}

s32 func_sc05_000_8017D09C(u8 *arg0) {
    func_sc05_000_8017D348();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc05_000_8017D0E0(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc05_000_8017D104(u8 *arg0) {
    D_sc05_000_80181D78[AF(arg0, u8, 0x15)]();
}

s32 func_sc05_000_8017D140(u8 *arg0) {
    func_sc05_000_8017D370();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc05_000_8017D180(u8 *arg0) {
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

void func_sc05_000_8017D1FC(void) {
    func_800D1EBC();
}

void func_sc05_000_8017D21C(u8 *arg0) {
    D_sc05_000_80181D84[AF(arg0, u8, 0x15)]();
}

s32 func_sc05_000_8017D258(u8 *arg0) {
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

void func_sc05_000_8017D2CC(u8 *arg0) {
    D_sc05_000_80181D90[AF(arg0, u8, 0x15)]();
}

s32 func_sc05_000_8017D308(u8 *arg0) {
    func_sc05_000_8017D398();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

void func_sc05_000_8017D348(void) {
    func_8016EE40((s32) &D_sc05_000_80181D9C, 0x01000000);
}

void func_sc05_000_8017D370(void) {
    func_8016EE40((s32) &D_sc05_000_80181DA8, 0x01000000);
}

void func_sc05_000_8017D398(void) {
    func_8016EE40((s32) &D_sc05_000_80181DBC, 0x01000000);
}

void func_sc05_000_8017D3C0(void) {
    D_80126954 = 0x190;
    D_80126950 = 0x190;
    D_8012695C = 0x320;
    D_80126968 = 0xE3;
    D_8012696A = 0x800;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x20;
    D_8012697A = 0;
    func_8012A018((s32) func_sc05_000_8017D464, 0);
    func_8012A094((s32) &D_80126948);
    func_sc05_000_8017D464((s32) &D_80126948);
}

void func_sc05_000_8017D464(s32 arg0) {
    D_sc05_000_80181DCC[AF(arg0, u8, 4)]();
}

extern s32 func_8012BD14();
extern void func_80178BF8();
extern u8 func_80172710;


extern struct_8_4 D_80126940;
void func_sc05_000_8017D4A0(u8 *o) {
    struct_8_4 v;

    v = D_80126940;
    if (v.field_2 < -0x4E0) {
        v.field_2 = -0x4E0;
    }
    if (v.field_0 < -0x2D0) {
        v.field_0 = -0x2D0;
    }
    if (v.field_0 > 0x2D0) {
        v.field_0 = 0x2D0;
    }
    func_sc05_000_8017D538(o, (u8 *)&v);
}

void func_sc05_000_8017D538(u8 *arg0, u8 *arg1) {
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

void func_sc05_000_8017D6D0(u8 *arg0) {
    D_sc05_000_80181E10[AF(arg0, u16, 2)]();
}

s32 func_sc05_000_8017D70C(u8 *arg0, s32 *t) {
    s32 k = AF(arg0, s32, 0xDC);
    s32 v;

    if (t[0] != k) {
        t += 2;
        do {
            v = t[0];
            if (v == 0) {
                return k;
            }
            t += 2;
        } while (v != k);
        t -= 2;
    }
    return t[1];
}

void func_sc05_000_8017D754(u8 *arg0) {
    s32 temp_s1;
    s32 temp_v0;

    temp_s1 = func_80029504();
    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C214(temp_v0, 0);
    AF(arg0, s32 *, 0x58) = (s32 *) &D_sc05_000_80181E00;
    AF(arg0, s16, 0x5C) = 0x80;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    if (temp_s1 >= 0x384) {
        AF(arg0, s32, 0xDC) = func_sc05_000_8017D70C(arg0, &D_sc05_000_80181DF0);
    } else if (temp_s1 >= 0x258) {
        AF(arg0, s32, 0xDC) = func_sc05_000_8017D70C(arg0, &D_sc05_000_80181DE0);
    } else if (temp_s1 >= 0xC8) {
        AF(arg0, s32, 0xDC) = func_sc05_000_8017D70C(arg0, &D_sc05_000_80181DD0);
    }
}

void func_sc05_000_8017D820(void) {
}

void func_sc05_000_8017D828(u8 *arg0) {
    D_sc05_000_80181E5C[AF(arg0, u16, 2)]();
}

void func_sc05_000_8017D864(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc05_000_80181E28) != 0) {
        func_8001D0E8(AF(arg0, s32, 0x20), 0x7FFF, 0x7FFF);
        AF(AF(arg0, s32, 0x20), s32, 0x20) = (s32) D_sc05_000_80198064;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc05_000_8017D8CC(void) {
}

s32 func_sc05_000_8017D8D4(void) {
    return 0x5F;
}

void func_sc05_000_8017D8DC(u8 *arg0) {
    D_sc05_000_80181ED8[AF(arg0, u16, 2)]();
}

void func_sc05_000_8017D918(u8 *o) {
    u8 *p;
    s32 i;

    switch (AF(o, u16, 2)) {
    case 0:
        if ((u8)func_80029178(0x137) != 0) {
            func_8012CAE4(o);
            return;
        }
        for (i = 0; i < 0x30; i++) {
            p = func_8012C588(0x3C0, o);
            if (p != 0) {
                AF(p, s16, 0x88) = rand() % 0x180 + 0x200;
                AF(p, s16, 0x8A) = rand() % 0xA0 - 0x1B0;
                AF(p, s16, 0xE) = -0x60;
                AF(p, s16, 0xFC) = rand();
                AF(p, s16, 0xFE) = (rand() & 0x3F) + 0x20;
                AF(p, s16, 0x6) = AF(p, s16, 0x88) + (rsin(AF(p, s16, 0xFC)) >> 8);
                AF(p, s16, 0xA) = AF(p, s16, 0x8A) + (rcos(AF(p, s16, 0xFC)) >> 8);
            }
        }
        AF(o, s16, 2) = 1;
        break;
    case 1:
        if (D_80126B5E >= 0x181) {
            if (D_80126B66 > -0x80 || D_80126B66 < 0x80) {
                func_80178B18(o, &D_sc05_000_80181EC0);
                AF(o, s16, 2) = 2;
            }
        }
        break;
    case 2:
        if (func_80178970(o) != 0) {
            func_80178D18(o);
            AF(o, s16, 2) = 3;
        }
        break;
    }
}

void func_sc05_000_8017DB10(u8 *o) {
    struct_8_4 a;
    struct_8_4 b;
    s16 v;
    s32 d;
    s16 *py = &D_80126B62;

    v = AF(o, u16, 0xFC) + AF(o, u16, 0xFE);
    AF(o, u16, 0xFC) = v;
    AF(o, u16, 6) = AF(o, u16, 0x88) + (rsin(v) >> 8);
    AF(o, u16, 0xA) = AF(o, u16, 0x8A) + (rcos(AF(o, s16, 0xFC)) >> 8);
    d = *py - AF(o, s16, 0xA);
    if (d >= -0xF && d <= 0x6F) {
        d = AF(o, s16, 6) - D_80126B5E;
        if (d >= -0x1F && d <= 0x1F) {
            if (func_8014CB8C() != 0) {
                func_8012C218(o);
                return;
            }
            if (func_800CF8B4() == 1) {
                if (AF(o, s16, 0x100) != 0) {
                    func_8012F568(1, 0x201D, 0x400, 0x10, &b, &D_801152A8);
                    AF(o, s16, 0x100) = 0;
                } else {
                    a.field_0 = b.field_0 = D_80126B5E;
                    a.field_2 = *py - 0x10;
                    b.field_2 = *py + 0x10;
                    a.field_4 = b.field_4 = D_80126B66;
                    if (func_80135888(D_80126B78, D_80126B90, &a, &b) != 0) {
                        AF(o, s16, 0x100) = 1;
                    }
                }
            }
        }
    }
}

void func_sc05_000_8017DC9C(u8 *arg0) {
    D_sc05_000_80181F54[AF(arg0, u16, 2)]();
}

void func_sc05_000_8017DCD8(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc05_000_80181E74) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s16, 2) = 1;
        func_8012A828(arg0, (s32) &D_sc05_000_8017E5B8);
        func_801788B8(arg0, (s32) &func_sc05_000_8017DE70);
    }
}

void func_sc05_000_8017DD3C(void) {
}

void func_sc05_000_8017DD44(s32 arg0) {
    func_80178CBC(arg0, (s32) &D_sc05_000_80181EA8);
    AF(arg0, s16, 2) = 3;
}

void func_sc05_000_8017DD7C(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc05_000_8017DDBC(u8 *arg0) {
    s32 temp_a0;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8012B200((s32) arg0);
    func_8001CA1C(AF(arg0, s32, 0x20), (s32) &D_sc05_000_80181EE8);
    func_8012A828((s32) arg0, (s32) &D_sc05_000_80181F24);
    temp_a0 = AF(arg0, s32, 0x20);
    AF(arg0, s16, 2) = 1;
    AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) | 0x50000000);
    temp_v1 = AF(arg0, s32, 0x20);
    AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
    temp_v1_2 = AF(arg0, s32, 0x20);
    AF(temp_v1_2, s16, 0x1A) = 0x4000;
    AF(temp_v1_2, s16, 0x18) = 0x4000;
    AF(arg0, s16, 0x100) = 0;
}

s32 *func_sc05_000_8017DE70(u8 *arg0) {
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

void func_sc05_000_8017DECC(u8 *arg0) {
    D_sc05_000_80181FD0[AF(arg0, u16, 2)]();
}

void func_sc05_000_8017DF08(s32 arg0) {
    func_sc05_000_8017DF38();
    func_80146CA0(arg0);
}

extern u8 D_80062C14;
extern u8 D_sc05_000_80181F5C;
extern void func_80019064();
extern void func_801511E0();
extern void func_80154274();
extern void func_80146E90();
extern void func_80146DE8();
extern void func_80147324();
void func_sc05_000_8017DF38(u8 *o) {
    func_80019064(&D_80062C14);
    func_801511E0(o);
    AF(AF(o, u8 *, 0x20), s16, 0x12) = (AF(o, u16, 0x42) + 0x800) & 0xFFF;
    func_80154274(o, &D_sc05_000_80181F5C);
    func_80146E90(o, 0x20);
    func_80146DE8(o, 0, 0xFFFF0000, 0x180000);
    func_801477E8(o, 0xFFF00000);
    func_80149020(o);
    func_80147324(0x451);
    func_80146CA0(o);
}

void func_sc05_000_8017DFDC(s32 arg0, s32 arg1) {
    s32 pad[8];
    func_80149020(arg0, arg1);
    func_80147A84(arg0);
    func_801473EC(arg0);
    func_80148038(arg0, 0x18000);
    func_80147460(arg0);
    if (!(D_800B99DA & 1)) {
        func_sc05_000_8017E1E8(arg0);
    }
    if (func_801535F4(arg0) == 4) {
        func_8013C9C4((s32) &D_sc05_000_80181FB4);
        goto block_5;
    }
    if (func_80146E98(arg0) != 0) {
block_5:
        func_801477E8(arg0, 0x40000);
        func_80146CA0(arg0);
    }
}

void func_sc05_000_8017E098(u8 *o) {
    s32 pad[8];
    func_80149020(o);
    func_80148038(o, 0x18000);
    func_80147460(o);
    if (AF(o, s32, 0x234) == 0 && AF(o, s32, 0x34) >= 0 && (AF(o, u16, 0xB8) & 0x8000)) {
        AF(o, u16, 0xB8) = AF(o, u16, 0xBA);
    }
    switch (func_801535F4(o)) {
    case 1:
        func_sc05_000_8017E1A0(o);
        func_80159B3C(o);
        func_80146A6C(2, o, 0, 0, 0, 1, 0);
        func_80165718(o);
        break;
    case 2:
        func_sc05_000_8017E1A0(o);
        func_8015BF48(o);
        func_80146A6C(2, o, 0, 0, 0, 1, 0);
        func_80165718(o);
        break;
    case 0:
        break;
    }
}

s32 func_sc05_000_8017E1A0(s32 arg0) {
    func_8014BC44(arg0, (s32) AF(arg0, s16, 0xF2));
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
    AF(arg0, u8, 0xA8) = 0x20;
    return func_80151664(arg0);
}

s32 func_sc05_000_8017E1E8(s32 arg0) {
    return func_80146A6C(3, arg0, (s32) AF(arg0, s16, 6), (s32) (s16) (AF(arg0, u16, 0xA) - 0x10), /* extra? */ (s32) AF(arg0, s16, 0xE), /* extra? */ 0x080FFFF8, /* extra? */ 0xE000B000);
}
