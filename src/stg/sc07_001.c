#include "common.h"
#include "gte.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc07_001_8017BE9C(void) {
}

void func_sc07_001_8017BEA4(void) {
}

void func_sc07_001_8017BEAC(void) {
}

void func_sc07_001_8017BEB4(void) {
}

typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_4;
typedef struct { s16 field_0[6]; } struct_C_3;
typedef struct { s16 field_0, field_2; } struct_4_2;
typedef struct { struct_4_2 field_0; s16 field_4; s16 field_6; struct_4_2 field_8; s32 field_C; s32 field_10; s32 field_14; s32 field_18; } struct_1C;
typedef struct { s32 field_0, field_4, field_8; } struct_C_4;
extern void (*D_sc07_001_80184F68[])();
void func_sc07_001_8017DA7C(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc07_001_80184F70[])();
extern void func_800D1EBC();
extern u8 D_sc07_001_80184F7C;
extern void func_8016EE40();
extern u8 D_sc07_001_80184F80;
extern void func_sc07_001_8017DC40();
extern void (*D_sc07_001_80184F84[])();
extern void (*D_sc07_001_80185380[])();
extern void (*D_sc07_001_80185388[])();
extern void (*D_sc07_001_801853E0[])();
extern void (*D_sc07_001_801853FC[])();
extern void (*D_sc07_001_80185470[])();
extern void (*D_sc07_001_80185690[])();
extern void (*D_sc07_001_8018569C[])();
extern void func_8012AD50();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();


extern void func_8002931C();
extern s32 func_8013373C();
extern u16 D_sc07_001_801AAD8C;


extern u8 D_80126948;
extern s32 D_80126954;
extern s32 D_8012695C;
extern s16 D_80126968;
extern s16 D_8012696A;
extern s16 D_8012696C;
extern s16 D_80126976;
extern s16 D_80126978;
extern s16 D_8012697A;
extern s32 D_sc07_001_801AABA0;
extern void func_8012A018();
extern void func_8012A094();
extern u16 D_800B9AB8;
extern s32 D_80126950;
extern s16 D_80126960;
extern u16 D_80126B5E;
extern u16 D_80126B66;
extern u16 D_sc07_001_801AAD64;
extern u16 D_sc07_001_801AAD68;
extern void (*D_sc07_001_8018533C[])();
extern s32 func_sc07_001_8017ED50();
extern void func_8012E8A8();
extern s16 D_80126B62;
extern s32 func_8012E544();
extern s32 func_8012E88C();
extern s32 func_8012BEE8();
extern u8 D_80126B58;
extern u8 D_sc07_001_801851F4;
extern s32 func_80172658();
extern s32 func_8012BE54();
extern void func_80178B18();
extern s32 func_8012C588();
extern s32 func_sc07_001_8017EDC0();
extern u8 D_sc07_001_80185368;
extern s32 func_8012CC64();
extern void func_8012C218();
extern void func_8012AD80();
extern void func_sc07_001_8017FE38();
extern s32 func_sc07_001_80180570();
extern void func_8012E014();
extern u8 D_sc07_001_801853EC;
extern u8 D_sc07_001_8019E510;
extern s32 func_8012C1B8();
extern void func_8012CAE4();
extern void func_8001C214();
extern u8 D_sc07_001_80184FD0;
extern u8 D_sc07_001_80185440;
extern u8 D_sc07_001_801A1BC0;
extern s32 D_sc07_001_801A1BDC;
extern u8 D_sc07_001_801AAD90;
extern s32 func_8012B2CC();
extern void func_80132288();
extern s16 D_80126944;
extern void func_sc07_001_8017DB70();
extern void func_8012A568();

extern void func_sc07_001_8017F4E4();
extern void func_sc07_001_8017F668();

extern u16 D_800B9ABA;
extern u16 D_80126BE0;
extern u16 D_80126BE2;
extern u16 D_80126BE4;

extern u8 D_800AE620;
extern s32 func_80135004();
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_3;

extern u8 D_800D3918;
extern u8 D_80126B5C;
extern s32 func_8012B0B4();
extern s32 func_8012B744();
extern s32 func_8012B8A4();
extern s32 func_8012B200();
extern s32 func_8012B178();

typedef struct { s16 field_0[3][3]; s16 field_12; s32 field_14[3]; } struct_20_4;
typedef struct { u32 field_0; u32 field_4; u32 field_8; u32 field_C; u32 *field_10; } struct_14_2;
typedef struct { s32 field_0; s32 field_4; s32 field_8; s32 field_C; s32 field_10; s32 field_14; s32 field_18; } struct_1C_2;
extern u8 *D_800A5E60;
extern u16 D_800B9A02;
extern u32 D_800A6610[2][0x1000];

void func_sc07_001_8017BEBC(u8 *obj) {
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

s32 func_sc07_001_8017CD9C(s32 arg0) {
    s32 sp10[8];
    s32 temp_v0;

    GsInitCoordinate2(0, arg0);
    temp_v0 = GsGetLw(arg0, (s32) sp10);
    AF(arg0, s32, 0x18) = 0;
    AF(arg0, s32, 0x1C) = 0;
    AF(arg0, s32, 0x20) = 0;
    AF(arg0, s16, 0x50) = 0;
    AF(arg0, s16, 0x52) = 0;
    AF(arg0, s16, 0x54) = 0;
    return temp_v0;
}

extern s32 func_80178970();
extern void func_80178D18();

typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_5;
typedef struct { u16 field_0[6]; } struct_C_5;
typedef struct { u16 field_0, field_2, field_4, field_6; } struct_8_6;
typedef struct { u8 field_0, field_1, field_2, field_3; } struct_4_3;
typedef struct { struct_8_6 field_0; struct_8_6 field_8; struct_4_3 field_10; struct_4_3 field_14; s32 field_18; } struct_1C_3;
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_5;
typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_7;
typedef struct { struct_8_7 field_0[4]; struct_4_3 field_20[4]; s32 field_30; } struct_34_2;
typedef struct { u16 field_0; s16 field_2; s16 field_4; s16 field_6; s32 field_8; s32 field_C; } struct_10;
typedef struct { s16 field_0, field_2, field_4, field_6; u8 field_8, field_9; s16 field_A; struct_10 field_C[16]; } struct_10C_2;
typedef struct { s32 field_0, field_4, field_8, field_C; } struct_10_2;
typedef struct { u32 *field_0; u8 field_4[0x10]; } struct_14_3;
typedef struct { u8 field_0[0x14]; } struct_14_4;
typedef struct { unsigned field_0_b0 : 24; unsigned field_3_b0 : 8; } struct_4_4;
extern s32 func_sc07_001_80181434();
extern s32 func_sc07_001_80181378();


extern s32 func_80012C6C();
extern s32 func_80012ABC();
extern struct_8_4 D_sc07_001_80185034[];
extern void func_8012EC04();
extern s32 func_8012913C();
extern void func_8012C51C();
extern void RotTransSV();
extern u8 *D_sc07_001_801AAD60;
extern s32 func_sc07_001_80180754();
extern u16 D_800B99DA;
extern struct_8_4 *D_sc07_001_80185678[];
extern s16 D_sc07_001_80185688[];
extern struct_8_4 D_sc07_001_801AAD6E[];

extern void RotMatrixZYX();
extern void func_8012F14C();

extern s32 func_8012C354();
extern u8 D_sc07_001_80185000;
extern void func_8001D0E8();
extern u8 D_sc07_001_8019E150;
extern void func_8012C658();
extern struct_8_4 D_sc07_001_801AAD6C[];
extern u8 D_sc07_001_801850BC[];
extern u8 D_sc07_001_80181C88;
extern void func_8013C9C4();
extern s32 func_sc07_001_8017F26C();
extern u8 D_sc07_001_8019E218;
extern void func_8012B23C();
extern struct_8_4 D_sc07_001_80185094[];
extern struct_8_4 D_sc07_001_80185098[];
extern s32 func_800132BC();
extern u8 D_sc07_001_80181CAC;
extern void func_sc07_001_8017E3E8();
extern s32 func_80016EF8();

extern u8 D_80126940;
extern s32 func_80148800();
extern s16 D_sc07_001_80184F8C[];
extern s16 D_sc07_001_80184F90[];
extern s32 ratan2();
extern s32 D_sc07_001_801AAE84;
extern s32 D_sc07_001_80184F94[];
extern s32 D_sc07_001_80184FA8[];
extern s32 D_sc07_001_80184FBC[];
extern void func_8013C0F8();
extern void func_sc07_001_8017CDF0();
extern u8 D_sc07_001_801AAEA0;
extern u8 D_sc07_001_801853A0;
extern u8 D_sc07_001_801853D4;
extern u8 D_sc07_001_801854F8;
extern u8 D_sc07_001_80185478[];
extern s32 D_sc07_001_801AAD9C;
extern void func_8013240C();
extern u8 D_sc07_001_801A3264;
extern u8 D_sc07_001_801A7E14;

typedef struct { struct_C_5 field_0[9]; } struct_6C;
typedef struct { s32 field_0, field_4, field_8, field_C; } struct_10_3;
typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_8;
typedef struct { s32 field_0, field_4, field_8, field_C; } struct_10_4;
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_6;
typedef struct { u8 field_0, field_1, field_2, field_3; } struct_4_5;
typedef struct { struct_8_8 field_0[4]; struct_4_5 field_20[4]; s32 field_30; } struct_34_3;
typedef struct { s32 field_0, field_4, field_8; } struct_C_6;
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_7;
typedef struct { u8 field_0, field_1, field_2, field_3; } struct_4_6;
typedef struct { u32 field_0_b0 : 24; u32 field_3_b0 : 8; } struct_4_7;
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_8;
typedef struct { struct_4_7 field_0; u8 field_4, field_5, field_6, field_7; s16 field_8, field_A, field_C, field_E, field_10, field_12, field_14, field_16; } struct_18;
typedef union { s32 m0; struct_4_2 m1; } union_4_2;
typedef void (*type_2)();
typedef struct { u8 field_0[0x18]; struct_20_5 field_18; } struct_38;
typedef struct { s32 field_0[4]; } struct_10_5;
typedef struct { struct_10_5 field_0, field_10, field_20; } struct_30_2;
typedef struct { u8 field_0[0x34]; } struct_34_4;
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_9;
typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_9;
typedef struct { s16 field_0, field_2, field_4, field_6, field_8; u16 field_A; s16 field_C, field_E; s32 field_10; } struct_14_5;
typedef struct { unsigned field_0_b0 : 31; unsigned field_3_b7 : 1; } struct_4_8;
extern void func_80013F3C();
extern s16 D_sc07_001_801A353C[];

extern struct_20_5 D_800AF648;


typedef struct { u8 field_0[8]; } struct_8_10;

void func_sc07_001_8017CDF0(u8 *obj, u8 *hdr, struct_20_4 *m) {
    s32 tmp[3];
    struct_8_4 box[8];
    struct_8_4 scr[8];
    struct_8_4 v[4];
    struct_20_4 ls;
    struct_1C_2 g;
    s32 zlim;
    s32 i;
    s32 n;
    u8 *pk;
    u32 *ot;
    u8 *verts;
    struct_14_2 *c;
    u32 *poly;
    u32 nf;
    u32 j;
    u32 w;
    u32 x, y;
    s32 hi, lo, hi2, lo2, h, l;
    s16 xh, xl, yh, yl;
    s32 type;
    u8 *d;
    u8 *d3;
    u8 *a;
    u8 *b;
    u32 *t;

    if (AF(obj, s32, 0) != 0) {
        return;
    }
    zlim = ReadGeomScreen() + AF(obj, s32, 0x64);
    GsGetLs(m, &ls);
    GsSetLsMatrix(&ls);
    ot = D_800A6610[(((u16 *)&D_800B9A02))[0]];
    pk = D_800A5E60;
    n = AF(hdr, s32, 8);
    verts = AF(hdr, u8 *, 0x10);
    c = (struct_14_2 *)(hdr + 0x14);
    for (i = 0; i < n; i++, c++) {
        xl = c->field_0;
        xh = c->field_0 >> 16;
        yl = c->field_4;
        yh = c->field_4 >> 16;
        x = c->field_8;
        y = x >> 16;
        box[0].field_0 = xl; box[0].field_2 = yl; box[0].field_4 = x;
        box[1].field_0 = xh; box[1].field_2 = yl; box[1].field_4 = x;
        box[2].field_0 = xl; box[2].field_2 = yl; box[2].field_4 = y;
        box[3].field_0 = xh; box[3].field_2 = yl; box[3].field_4 = y;
        gte_ldv3c(&box[0]);
        gte_rtpt();
        gte_stsxy3(&scr[0], &scr[1], &scr[2]);
        gte_ldv0(&box[3]);
        gte_rtps();
        box[4].field_0 = xl; box[4].field_2 = yh; box[4].field_4 = x;
        box[5].field_0 = xh; box[5].field_2 = yh; box[5].field_4 = x;
        box[6].field_0 = xl; box[6].field_2 = yh; box[6].field_4 = y;
        box[7].field_0 = xh; box[7].field_2 = yh; box[7].field_4 = y;
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
            v[0] = *(struct_8_4 *)a;
            v[1] = *(struct_8_4 *)b;
            d3 = verts + (w & 0xFFFF);
            w >>= 16;
            v[2] = *(struct_8_4 *)d3;
            gte_ldv3c(v);
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
            { u32 *otp; u32 tw; s16 p0, p1, p2, q0, q1, q2; s32 mz;
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
                if (g.field_C > g.field_10) { mz = g.field_C; if (mz < g.field_14) mz = g.field_14; } else { mz = g.field_10; if (mz < g.field_14) mz = g.field_14; }
                t = (u32 *)poly[0];
                tw = t[0];
                g.field_8 = mz;
                AF(pk, u32, 4) = tw;
                AF(pk, u32, 0xC) = t[1];
                AF(pk, u32, 0x14) = t[2];
                AF(pk, u16, 0x1C) = t[3];
                otp = (u32 *)(((mz >> 2) << 2) + (u32)ot);
                *(u32 *)pk = (*otp & 0xFFFFFF) | 0x7000000;
                *otp = (*otp & 0xFF000000) | ((u32)pk & 0xFFFFFF);
                pk += 0x28;
                break;
            }
            case 2:
            case 3:
            { u32 *otp; u32 tw; s16 p0, p1, p2, p3, q0, q1, q2, q3; s32 za, zb, zc;
                gte_stsxy3c(tmp);
                v[3] = *(struct_8_4 *)d;
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
                zc = zb;
                if (zc < za) zc = za;
                g.field_8 = zc;
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
                otp = (u32 *)(((zc >> 2) << 2) + (u32)ot);
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

void func_sc07_001_8017D8C4(void) {
    func_8002931C(0x04740000);
}

void func_sc07_001_8017D8E4(u8 *arg0) {
    D_sc07_001_80184F68[AF(arg0, u8, 0x15)]();
}

s32 func_sc07_001_8017D920(u8 *arg0) {
    func_sc07_001_8017DA7C();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc07_001_8017D964(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc07_001_8017D988(u8 *arg0) {
    D_sc07_001_80184F70[AF(arg0, u8, 0x15)]();
}

s32 func_sc07_001_8017D9C4(u8 *arg0) {
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc07_001_8017D9E0(u8 *arg0) {
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

void func_sc07_001_8017DA5C(void) {
    func_800D1EBC();
}

void func_sc07_001_8017DA7C(void) {
    func_8016EE40((s32) &D_sc07_001_80184F7C, 0x01000000);
}

void func_sc07_001_8017DAA4(void) {
    func_8016EE40((s32) &D_sc07_001_80184F80, 0x01000000);
}

void func_sc07_001_8017DACC(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x4B0;
    D_80126968 = 0x71;
    D_8012696A = 0x800;
    D_sc07_001_801AABA0 = 0;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x40;
    D_8012697A = 0;
    func_8012A018((s32) func_sc07_001_8017DC40, 0);
    func_8012A094((s32) &D_80126948);
    func_sc07_001_8017DC40((s32) &D_80126948);
}

void func_sc07_001_8017DB70(void) {
    D_8012695C = 0x4B0;
    D_80126968 = 0x155;
    D_8012696A = 0;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x40;
    D_8012697A = 0;
    D_sc07_001_801AABA0 = (s32) D_800B9AB8;
    func_8012A018((s32) func_sc07_001_8017DC40, 1);
    func_8012A094((s32) &D_80126948);
    D_80126960 = 0x71;
    D_80126950 = 0x190;
    D_80126968 = 0x155;
    D_80126954 = 0x12C;
    func_sc07_001_8017DC40((s32) &D_80126948);
}

void func_sc07_001_8017DC40(s32 arg0) {
    D_sc07_001_80184F84[AF(arg0, u8, 4)]();
}

void func_sc07_001_8017DC7C(u8 *o) {
    struct_8_4 v;
    u8 t;

    if (func_80148800((s32) &D_80126B58) & 3) {
        t = (AF(o, u8, 5) + 1) & 1;
        AF(o, u8, 5) = t;
        AF(o, s32, 0x14) = D_sc07_001_80184F8C[t];
    }
    *(struct_8_10 *)&v = *(struct_8_10 *)&D_80126940;
    if (v.field_0 > 0x840) v.field_0 = 0x840;
    if (v.field_2 < -0xF00) v.field_2 = -0xF00;
    else if (v.field_2 > -0x400) v.field_2 = -0x400;
    if (v.field_4 > -0x4C0) {
        if (v.field_2 > -0x540) v.field_2 = -0x540;
    }
    func_sc07_001_8017DF14(o, &v);
    v.field_2 = ((v.field_2 + 0xF00) * 120) / 0xB00;
    v.field_0 = v.field_0 >> 4;
    func_sc07_001_8017E278(o, &v);
}

void func_sc07_001_8017DDD4(u8 *o) {
    struct_8_4 v;
    u8 t;
    s32 a;

    if (func_80148800((s32) &D_80126B58) & 3) {
        t = (AF(o, u8, 5) + 1) & 1;
        AF(o, u8, 5) = t;
        AF(o, s32, 0x14) = D_sc07_001_80184F90[t];
    }
    *(struct_8_10 *)&v = *(struct_8_10 *)&D_80126940;
    a = ratan2(v.field_0, v.field_4) & 0xFFF;
    if (v.field_2 < -0xF00) v.field_2 = -0xF00;
    else if (v.field_2 > -0x540) v.field_2 = -0x540;
    func_sc07_001_8017E0AC(o, &v, a);
    v.field_2 = ((v.field_2 + 0xF00) * 120) / 0xB00;
    a -= 0x800;
    v.field_0 = (a * 320) / 4096;
    func_sc07_001_8017E278(o, &v);
}

void func_sc07_001_8017DF14(u8 *o, struct_8_4 *b) {
    typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_10;
    struct_20_10 m;
    struct_8_4 v;
    struct_8_4 out;

    AF(o, s32, 8) = (s16)func_80012C6C(AF(o, s16, 8), AF(o, s16, 0xC), 8);
    AF(o, s32, 0x10) = (s16)func_80012C6C(AF(o, s16, 0x10), AF(o, s16, 0x14), 8);
    AF(o, s16, 0x18) = func_80012ABC(AF(o, s16, 0x18), AF(o, s16, 0x20), 8);
    AF(o, s16, 0x1A) = func_80012ABC(AF(o, s16, 0x1A), AF(o, s16, 0x22), 8);
    AF(o, s16, 0x1C) = func_80012ABC(AF(o, s16, 0x1C), AF(o, s16, 0x24), 8);
    AF(o, s16, 0x28) = func_80012C6C(AF(o, s16, 0x28), AF(o, s16, 0x2E), 0x10);
    AF(o, s16, 0x2A) = func_80012C6C(AF(o, s16, 0x2A), AF(o, s16, 0x30), 0x10);
    AF(o, s16, 0x2C) = func_80012C6C(AF(o, s16, 0x2C), AF(o, s16, 0x32), 0x10);
    AF(o, s32, 0x48) = AF(o, s16, 0x28) + b->field_0;
    AF(o, s32, 0x4C) = AF(o, s16, 0x2A) + b->field_2;
    AF(o, s32, 0x50) = AF(o, s16, 0x2C) + b->field_4;
    RotMatrixZYX(o + 0x18, &m);
    m.field_14[0] = AF(o, s16, 0x28) + b->field_0;
    m.field_14[1] = AF(o, s16, 0x2A) + b->field_2;
    m.field_14[2] = AF(o, s16, 0x2C) + b->field_4;
    v.field_0 = 0;
    v.field_2 = 0;
    v.field_4 = AF(o, s32, 0x10);
    func_8012F14C(&m, &v, &out);
    AF(o, s32, 0x3C) = out.field_0;
    AF(o, s32, 0x40) = out.field_2;
    AF(o, s32, 0x44) = out.field_4;
}

void func_sc07_001_8017E0AC(u8 *o, struct_8_4 *b, s32 d) {
    struct_20_3 m;
    struct_8_4 v;
    struct_8_4 out;
    struct_8_4 r;

    AF(o, s32, 8) = (s16)func_80012C6C(AF(o, s16, 8), AF(o, s16, 0xC), 8);
    AF(o, s32, 0x10) = (s16)func_80012C6C(AF(o, s16, 0x10), AF(o, s16, 0x14), 8);
    AF(o, s16, 0x18) = func_80012ABC(AF(o, s16, 0x18), AF(o, s16, 0x20), 8);
    AF(o, s16, 0x1A) = func_80012ABC(AF(o, s16, 0x1A), AF(o, s16, 0x22), 8);
    AF(o, s16, 0x1C) = func_80012ABC(AF(o, s16, 0x1C), AF(o, s16, 0x24), 8);
    AF(o, s16, 0x28) = func_80012C6C(AF(o, s16, 0x28), AF(o, s16, 0x2E), 0x10);
    AF(o, s16, 0x2A) = func_80012C6C(AF(o, s16, 0x2A), AF(o, s16, 0x30), 0x10);
    AF(o, s16, 0x2C) = func_80012C6C(AF(o, s16, 0x2C), AF(o, s16, 0x32), 0x10);
    AF(o, s32, 0x48) = AF(o, s16, 0x28) + b->field_0;
    AF(o, s32, 0x4C) = AF(o, s16, 0x2A) + b->field_2;
    AF(o, s32, 0x50) = AF(o, s16, 0x2C) + b->field_4;
    r.field_0 = AF(o, u16, 0x18);
    r.field_2 = AF(o, u16, 0x1A) + d;
    r.field_4 = AF(o, u16, 0x1C);
    func_sc07_001_80181194(&r, &m);
    v.field_0 = 0;
    v.field_2 = 0;
    v.field_4 = AF(o, s32, 0x10);
    ApplyMatrixSV(&m, &v, &out);
    AF(o, s32, 0x3C) = (out.field_0 >> 3) + AF(o, s16, 0x28) + b->field_0;
    AF(o, s32, 0x40) = (out.field_2 >> 3) + AF(o, s16, 0x2A) + b->field_2;
    AF(o, s32, 0x44) = (out.field_4 >> 3) + AF(o, s16, 0x2C) + b->field_4;
}

s32 func_sc07_001_8017E278(s32 arg0, s32 arg1, s32 arg2) {
    u16 temp_v0;

    D_800B9AB8 = AF(arg1, u16, 0) + D_sc07_001_801AABA0;
    temp_v0 = AF(arg1, u16, 2);
    D_800B9ABA = temp_v0;
    return (s32) temp_v0;
}

s32 func_sc07_001_8017E2A8(void) {
    return 0x86;
}

s32 func_sc07_001_8017E2B0(s32 arg0, s32 arg1) {
    return func_8013373C(0);
}

void func_sc07_001_8017E2D0(void) {
    s32 i;

    switch (D_sc07_001_801AAE84) {
    case 0:
        for (i = 0; i < 5; i++) {
            func_8013C0F8(D_sc07_001_80184F94[i]);
            func_sc07_001_8017CD9C(D_sc07_001_80184FA8[i]);
            D_sc07_001_80184FBC[i] = 0;
        }
        D_sc07_001_801AAE84++;
        break;
    case 1:
        for (i = 0; i < 5; i++) {
            if (D_sc07_001_80184FBC[i] != 0) {
                func_sc07_001_8017CDF0(&D_sc07_001_801AAEA0, D_sc07_001_80184F94[i], D_sc07_001_80184FA8[i]);
            }
        }
        break;
    }
}

void func_sc07_001_8017E3E8(s32 i, struct_8_4 *v, s32 c) {
    AF(D_sc07_001_80184FA8[i], s32, 0x18) = v->field_0;
    AF(D_sc07_001_80184FA8[i], s32, 0x1C) = v->field_2;
    AF(D_sc07_001_80184FA8[i], s32, 0x20) = v->field_4;
    AF(D_sc07_001_80184FA8[i], s32, 0) = 0;
    D_sc07_001_80184FBC[i] = c;
}

void func_sc07_001_8017E448(u8 *arg0) {
    D_sc07_001_8018533C[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        func_sc07_001_8017ED50((s32) arg0);
        if (AF(arg0, s32, 0xE0) & 0x10) {
            D_80126B5E = D_sc07_001_801AAD64;
            D_80126B66 = D_sc07_001_801AAD68;
        }
    }
}

void func_sc07_001_8017E4DC(u8 *o) {
    s32 i;

    if (func_8012C354(o, &D_sc07_001_80185000) == 0) {
        D_sc07_001_801AAD60 = 0;
        return;
    }
    func_8001D0E8(AF(o, u8 *, 0x20), 0x7FFF, 0x7FFF);
    AF(o, s32, 0x58) = AF(AF(o, u8 *, 0x78), s32, 8) | 0x50000000;
    func_8012A828(o, &D_sc07_001_8019E150);
    func_8012E8A8(o);
    AF(o, s16, 2) = 1;
    AF(o, u8, 0x75) = 2;
    AF(o, s16, 0xAE) = -1;
    AF(o, s32, 0xCC) = func_8012C588(0x3A2, o);
    AF(o, s32, 0xD4) = func_8012C588(0x3BC, o);
    D_sc07_001_801AAD60 = o;
    D_sc07_001_801AAD8C = 0;
    for (i = 0; i < 0x24; i++) {
        func_8012C658(0x386, i, o);
    }
    for (i = 0; i < 4; i++) {
        D_sc07_001_801AAD6C[i].field_0 = D_sc07_001_801AAD6C[i].field_2 = D_sc07_001_801AAD6C[i].field_4 = D_sc07_001_801AAD6C[i].field_6 = 0;
        func_8012C51C(&D_sc07_001_801850BC[i * 0x14], o);
    }
    func_8012C658(0x3C3, 4, o);
}

extern u16 D_sc07_001_801850B4;
extern u16 D_sc07_001_801850B8;
extern s32 func_8012E57C();
void func_sc07_001_8017E64C(u8 *o) {
    struct_8_4 a;
    struct_8_4 b;
    s32 t;

    a.field_0 = D_80126B5E;
    a.field_2 = 0;
    a.field_4 = D_80126B66;
    b.field_0 = D_sc07_001_801850B4;
    b.field_2 = 0;
    b.field_4 = D_sc07_001_801850B8;
    if (func_800132BC(&a, &b) <= 0x9000) {
        t = func_8012E57C(0x3C3, 4);
        if (t != 0) {
            func_8012C218(t);
        }
        ((s32 (*)())func_sc07_001_8017E2B0)();
        AF(o, s16, 2) = 3;
    }
}

void func_sc07_001_8017E6EC(s32 arg0) {
    if (func_80178970() == 1) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 3;
        ((s32 (*)())func_sc07_001_8017E2B0)();
    }
}

void func_sc07_001_8017E734(u8 *arg0) {
    AF(arg0, s32, 0x1C) = 0x80;
    AF(arg0, s16, 2) = 4;
    func_8012E8A8((s32) arg0);
}

void func_sc07_001_8017E760(u8 *arg0) {
    s32 temp_v0;

    if (D_80126B62 < -0xC23) {
        AF(arg0, s16, 2) = 9;
        temp_v0 = func_8012E544(0x3BC);
        if (temp_v0 != 0) {
            func_8012E88C(temp_v0);
        }
    } else if ((func_8012BEE8((s32) arg0) != 0) && (D_80126B62 < -0x624)) {
        AF(arg0, s16, 2) = 5;
    }
}

s32 func_sc07_001_8017E7E8(u8 *arg0) {
    s32 sp10;

    AF(arg0, s16, 2) = 6;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s32, 0x1C) = 0x10;
    func_8012E88C((s32) arg0);
    func_8012B0B4((s32) &sp10, func_8012B744((s32) &D_80126B5C, (s32) &D_800D3918), 0x480);
    AF(arg0, s16, 6) = (s16) (D_80126B5E + sp10);
    AF(arg0, s16, 0xA) = (s16) ((*(u16 *)&D_80126B62) + 0x40);
    AF(arg0, s16, 0xE) = (s16) (D_80126B66 + (sp10 >> 0x10));
    AF(AF(arg0, void *, 0x20), s16, 0x12) = func_8012B8A4((s32) arg0);
    func_8012B2CC((s32) arg0);
    func_8012B200((s32) arg0);
    func_8012B178((s32) arg0, -0x1A0000);
    AF(AF(AF(arg0, void *, 0xCC), void *, 0x20), s16, 0x18) = 0x2000;
    AF(AF(AF(arg0, void *, 0xCC), void *, 0x20), s16, 0x1A) = 0x2000;
}

void func_sc07_001_8017E8DC(u8 *o) {
    struct_8_4 v;
    u8 *p;

    p = AF(o, u8 *, 0xCC);
    if (AF(o, u16, 0x34) == 0 && func_8012BEE8() != 0) {
        func_8012A828(o, &D_sc07_001_8019E150);
        AF(o, u16, 0x34)++;
    }
    AF(AF(p, u8 *, 0x20), u16, 0x18) += 0x200;
    AF(AF(p, u8 *, 0x20), u16, 0x1A) += 0x200;
    if (AF(AF(p, u8 *, 0x20), s16, 0x18) > 0x6000) {
        AF(AF(p, u8 *, 0x20), s16, 0x18) = AF(AF(p, u8 *, 0x20), s16, 0x1A) = 0x6000;
    }
    v.field_2 = 0;
    v.field_0 = 0;
    v.field_4 = -0x60;
    ApplyMatrixSV(AF(o, u8 *, 0x20) + 0x34, &v, &v);
    if (func_8012CC64(o, &v) != 0) {
        func_8013C9C4(&D_sc07_001_80181C88);
        func_sc07_001_8017EF30(o);
        AF(o, s16, 2) = 7;
        AF(AF(p, u8 *, 0x20), s16, 0x18) = AF(AF(p, u8 *, 0x20), s16, 0x1A) = 0x6000;
        func_8002D4C8(0xB7A, 0);
    }
    if (!(AF(o, s32, 0xE0) & 0x10) && func_sc07_001_8017F26C(o) == 1) {
        AF(o, s32, 0xE0) |= 0x10;
        D_sc07_001_801AAD64 = D_80126B5E;
        D_sc07_001_801AAD68 = D_80126B66;
    }
}

void func_sc07_001_8017EA6C(u8 *arg0) {
    AF(arg0, s32, 0x1C) = 0x10;
    AF(arg0, s16, 2) = 8;
    AF(arg0, s16, 0x34) = 0;
}

void func_sc07_001_8017EA84(u8 *o) {
    switch (AF(o, u16, 0x34)) {
    case 0:
        if (func_8012BEE8(o) != 0) {
            func_8012A828(o, &D_sc07_001_8019E218);
            AF(o, u16, 0x34)++;
        }
        break;
    case 1:
        if (AF(o, s32, 0x94) == 8) {
            AF(o, u16, 0x34)++;
            AF(o, s32, 0x1C) = 0x40;
            func_8012B23C(o);
            func_8002D4C8(0xB7B, 0);
        }
        break;
    case 2:
        func_8012AD80(o);
        if ((D_800B99DA & 3) == 0) {
            func_sc07_001_8017EF30(o);
        }
        if (func_8012BEE8(o) != 0) {
            AF(o, s16, 2) = 3;
        }
        break;
    }
    if (!(AF(o, s32, 0xE0) & 0x10) && func_sc07_001_8017F26C(o) == 1) {
        AF(o, s32, 0xE0) |= 0x10;
        D_sc07_001_801AAD64 = D_80126B5E;
        D_sc07_001_801AAD68 = D_80126B66;
    }
}

void func_sc07_001_8017EBE8(s32 arg0) {
    s32 temp_v0;

    if ((D_80126B62 == -0xE82) && (func_80172658((s32) &D_80126B58) != 0) && ((temp_v0 = func_8012E544(0x3BC), (temp_v0 == 0)) || (func_8012BE54(temp_v0) <= 0x10000))) {
        func_80178B18(arg0, (s32) &D_sc07_001_801851F4);
        AF(arg0, s16, 2) = 0xA;
        AF(arg0, s16, 0x34) = 0;
        AF(arg0, s32, 0xD8) = func_8012C588(0x3A8, arg0);
        func_8012E8A8(arg0);
        AF(arg0, s32, 0x1C) = 0x1F;
        func_800D0C48(1);
    }
}

extern s32 func_8001AAA0();
extern s32 func_801789AC();
extern void func_800D1724();
extern u8 D_sc07_001_80184F3C;
void func_sc07_001_8017ECA0(u8 *o) {
    switch (AF(o, u16, 0x34)) {
    case 0:
        if (func_8012BEE8(o) != 0) {
            AF(o, u16, 0x34)++;
        }
        break;
    case 1:
        if (func_8001AAA0(0x8E) != 0) {
            AF(o, u16, 0x34)++;
        }
        break;
    }
    if (func_801789AC(o) == 1) {
        D_sc07_001_801AAD60 = 0;
        func_80178D18(o);
        func_8012C218(o);
        func_800D1724(&D_sc07_001_80184F3C);
    }
}

s32 func_sc07_001_8017ED50(s32 arg0) {
    func_sc07_001_8017EDC0(arg0, arg0 + 0xE4, 1, 0);
    func_sc07_001_8017EDC0(arg0, arg0 + 0xE8, 2, 1);
    func_sc07_001_8017EDC0(arg0, arg0 + 0xEC, 4, 2);
    return func_sc07_001_8017EDC0(arg0, arg0 + 0xF0, 8, 3);
}

s32 func_sc07_001_8017EDC0(u8 *o, s32 *t, s32 mask, s32 n) {
    struct_8_4 a;
    struct_8_4 b;
    struct_8_4 *p;

    p = &D_sc07_001_801AAD6C[n];
    if (AF(o, s32, 0xE0) & mask) {
        *t += 0x1000;
        p->field_2 += AF(t, u16, 2);
        if (p->field_2 >= 0x400) {
            *t = 0;
            p->field_2 = 0x400;
            func_sc07_001_8017E3E8(n, p, 0);
        } else {
            func_sc07_001_8017E3E8(n, p, 1);
        }
        if (p->field_6 == 0) {
            func_8002D4C8(0xC03, 0);
            p->field_6 = 1;
        }
    } else {
        a.field_0 = D_80126B5E;
        a.field_2 = 0;
        a.field_4 = D_80126B66;
        b.field_0 = D_sc07_001_80185094[n].field_0;
        b.field_2 = 0;
        b.field_4 = D_sc07_001_80185098[n].field_0;
        if (func_800132BC(&a, &b) <= 0x9000) {
            AF(o, s32, 0xE0) |= mask;
            func_8013C9C4(&D_sc07_001_80181CAC);
        }
        func_sc07_001_8017E3E8(n, p, 1);
    }
}

void func_sc07_001_8017EF30(u8 *o) {
    typedef struct { struct_8_4 field_0; s16 field_8, field_A, field_C, field_E; s32 field_10; } struct_14_6;
    struct_20_3 m;
    struct_8_4 w;
    struct_14_6 u;
    s32 flag;
    struct_8_4 *p;
    u8 *e;
    s32 i;
    s32 j;
    s32 r;

    u.field_0.field_6 = 0x3A7;
    u.field_8 = 0;
    u.field_A = 0;
    u.field_10 = 0;
    u.field_E = 0;
    u.field_C = 0x7FFF;
    p = D_sc07_001_80185034;
    for (j = 0; j < 4; j++) {
        func_8012EC04(o, p->field_6, &m);
        gte_SetRotMatrix(&m);
        gte_SetTransMatrix(&m);
        for (i = 0; i < 3; i++, p++) {
            RotTransSV(p, &w, &flag);
            e = (u8 *)func_8012913C(0x22);
            if (e != 0) {
                AF(e, s16, 6) = w.field_0;
                AF(e, s16, 0xA) = w.field_2;
                AF(e, s16, 0xE) = w.field_4;
                r = rand();
                AF(e, u16, 0x34) = ((r % 0x2000 + 0x5000) & ~0xF) | (rand() % 3);
            }
            u.field_0.field_0 = w.field_0;
            u.field_0.field_2 = w.field_2;
            u.field_0.field_4 = w.field_4;
            func_8012C51C(&u, o);
        }
    }
}

void func_sc07_001_8017F0EC(u8 *arg0) {
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0xD8);
    if ((AF(temp_s0, u16, 0x34) == 0) && (func_8012CC64((s32) temp_s0, (s32) &D_sc07_001_80185368) & 0x2000)) {
        AF(temp_s0, s32, 0x18) = 0xFFFA0000;
        AF(temp_s0, u16, 0x34) = (u16) (AF(temp_s0, u16, 0x34) + 1);
        func_8002D4C8(4, 0xC04);
    }
}

s32 func_sc07_001_8017F15C(u8 *o) {
    u8 *p = AF(o, u8 *, 0xD8);

    func_8012AD80(p);
    switch (AF(p, u16, 0x34)) {
    case 0:
        if (--AF(o, s32, 0xF8) != 0) {
            return 0;
        }
        AF(p, s32, 0x1C) = 0x70;
        AF(p, s32, 0x18) = 0;
        AF(p, s32, 0x14) = 0xFFFA0000;
        AF(p, u16, 0x34)++;
        func_8002D4C8(4, 0xC04);
        return 0;
    case 1:
        func_8002D4C8(0xC04, 0);
        AF(p, u16, 0x34)++;
    case 2:
        if (func_8012BEE8(p) != 0) {
            func_8002D4C8(4, 0xC04);
            return 1;
        }
        return 0;
    }
    return 0;
}

s32 func_sc07_001_8017F258(u8 *arg0) {
    return AF(arg0, u16, 0x34) == 2;
}

extern void *D_80126B78;
extern s32 func_80135888();
extern void func_8012F568();
extern u8 D_801152A8;
extern struct_8_4 D_sc07_001_80185370[];
s32 func_sc07_001_8017F26C(u8 *o) {
    struct_8_4 a;
    struct_8_4 b;

    func_8012F14C(D_80126B78 + 0x34, &D_sc07_001_80185370[0], &a);
    func_8012F14C(D_80126B78 + 0x34, &D_sc07_001_80185370[1], &b);
    func_8012B2CC(o);
    if (func_80135888(AF(o, s32, 0x20), AF(o, s32, 0x58), &a, &b) != 0) {
        func_8012F568(1, 0x4004, AF(AF(o, u8 *, 0x20), s16, 0x12) - 0x400, 0, &b, &D_801152A8);
        return 1;
    }
    return 0;
}

void func_sc07_001_8017F32C(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012E544(0x3BC);
    if (temp_v0 != 0) {
        func_8012A828(temp_v0, AF(arg0, s32, 0xF8));
    }
}

void func_sc07_001_8017F36C(void) {
    D_sc07_001_801AAD8C += 1;
}

s32 func_sc07_001_8017F38C(u8 *arg0) {
    return AF(arg0, s16, 0x10A) == D_sc07_001_801AAD8C;
}

void func_sc07_001_8017F3A8(u8 *arg0) {
    D_sc07_001_80185380[AF(arg0, u16, 2)]();
}

void func_sc07_001_8017F3E4(u8 *o) {
    s32 t;

    t = func_8012C1B8();
    AF(o, s32, 0x20) = t;
    if (t == 0) {
        func_8012CAE4(o);
        return;
    }
    func_8001C214(t, 0);
    AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x10;
    AF(AF(o, u8 *, 0x20), s16, 0x18) = AF(AF(o, u8 *, 0x20), s16, 0x1A) = 1;
    AF(o, s16, 0xFE) = AF(AF(o, u8 *, 0x64), s16, 0x36);
    AF(o, s16, 2) += 1;
}

void func_sc07_001_8017F470(u8 *arg0) {
    s32 pad[2];
    void *temp_s1;

    temp_s1 = AF(arg0, void *, 0x64);
    if (AF(temp_s1, s16, 0x36) != AF(arg0, s16, 0xFE)) {
        func_8012C218((s32) arg0);
        return;
    }
    func_sc07_001_8017F4E4((s32) arg0);
    AF(AF(arg0, void *, 0x20), u16, 0x12) = (u16) AF(AF(temp_s1, void *, 0x20), u16, 0x12);
    func_sc07_001_8017F668((s32) arg0);
}

void func_sc07_001_8017F4E4(s32 arg0) {
    struct_8_4 a;
    struct_8_4 b;
    struct_8_4 d;
    struct_20_3 m;
    s32 p;
    s32 i;
    s32 n;

    m = *(struct_20_3 *)&D_800AE620;
    p = AF(arg0, s32, 0x64);
    RotMatrixY(AF(AF(p, s32, 0x20), s16, 0x12), &m);
    i = 0;
    d.field_4 = 0;
    d.field_2 = 0;
    d.field_0 = 0;
    do {
        a.field_0 = AF(p, u16, 6) + d.field_0;
        a.field_2 = AF(p, u16, 0xA) + d.field_2;
        n = i + 1;
        a.field_4 = AF(p, u16, 0xE) + d.field_4;
        d.field_2 = 0;
        d.field_0 = 0;
        d.field_4 = -(n << 7);
        ApplyMatrixSV(&m, &d, &d);
        b.field_0 = AF(p, u16, 6) + d.field_0;
        b.field_2 = AF(p, u16, 0xA) + d.field_2;
        b.field_4 = AF(p, u16, 0xE) + d.field_4;
        if (func_80135004(1, &a, &b) != 0) {
            AF(arg0, u16, 6) = b.field_0;
            AF(arg0, u16, 0xA) = b.field_2 - 0x80;
            AF(arg0, u16, 0xE) = b.field_4;
            return;
        }
        i = n;
    } while (i < 10);
}

void func_sc07_001_8017F668(u8 *o) {
    typedef struct { struct_8_4 field_0[4]; struct_4_2 field_20[4]; s32 field_30; s32 field_34; u8 field_38; } struct_3C;
    struct_3C g;
    s32 i;
    s32 j;

    g.field_30 = 0x808080;
    g.field_34 = 0x50000000;
    g.field_38 = 0x8F;
    g.field_0[0].field_2 = g.field_0[1].field_2 = g.field_0[2].field_2 = g.field_0[3].field_2 = -0x40;
    g.field_0[0].field_4 = g.field_0[1].field_4 = g.field_0[2].field_4 = g.field_0[3].field_4 = 0;
    g.field_20[0].field_2 = g.field_20[1].field_2 = g.field_20[2].field_2 = g.field_20[3].field_2 = 0x100;
    for (i = 0; i < 8; i++) {
        g.field_0[0].field_0 = g.field_0[1].field_0 = g.field_0[2].field_0 = g.field_0[3].field_0 = -0x40;
        g.field_20[0].field_0 = g.field_20[1].field_0 = g.field_20[2].field_0 = g.field_20[3].field_0 = 0xB60;
        g.field_0[2].field_2 += 0x10;
        g.field_0[3].field_2 += 0x10;
        g.field_20[2].field_2 += 0xF;
        g.field_20[3].field_2 += 0xF;
        for (j = 0; j < 8; j++) {
            g.field_0[1].field_0 += 0x10;
            g.field_0[3].field_0 += 0x10;
            g.field_20[1].field_0 += 0xF;
            g.field_20[3].field_0 += 0xF;
            func_80016EF8(&g, AF(o, u8 *, 0x20) + 0x34);
            g.field_0[0].field_0 = g.field_0[1].field_0;
            g.field_0[2].field_0 = g.field_0[3].field_0;
            g.field_20[0].field_0 = g.field_20[1].field_0;
            g.field_20[2].field_0 = g.field_20[3].field_0;
        }
        g.field_0[0].field_2 = g.field_0[2].field_2;
        g.field_0[1].field_2 = g.field_0[3].field_2;
        g.field_20[0].field_2 = g.field_20[2].field_2;
        g.field_20[1].field_2 = g.field_20[3].field_2;
    }
}

void func_sc07_001_8017F7F8(u8 *arg0) {
    D_sc07_001_80185388[AF(arg0, u16, 2)]();
}

void func_sc07_001_8017F834(u8 *o) {
    u8 *m;
    s16 sgn;
    s32 r;
    s32 n;
    s32 t;
    u8 unused[8];
    struct_8_4 *p;

    m = (u8 *)func_8012C1B8();
    if (m == 0) {
        func_8012CAE4(o);
        return;
    }
    AF(o, u8 *, 0x20) = m;
    func_8001C214(m, 0);
    AF(m, u16, 0x2C) |= 0x10;
    /* sgn is read before it is set: the original uses the stale s1 here */
    AF(m, s16, 0x18) = AF(m, s16, 0x1A) = AF(m, s16, 0x1C) = sgn % 0x180 + 0x400;
    r = rand();
    AF(o, s16, 0x70) = (r & 1) << 15;
    if ((((s16)r & 1) << 15) == 0) {
        if (r & 1) {
            sgn = 1;
        } else {
            sgn = -1;
        }
        AF(m, s16, 0x10) = sgn * ((s16)r % 128) - 0x200;
        t = sgn * (rand() % 0x300) + 0x800;
        AF(m, s16, 0x12) = AF(AF(AF(o, u8 *, 0x64), u8 *, 0x20), u16, 0x12) + t;
        AF(o, s32, 0x48) = 0xC000;
        func_8012B2CC(o);
        func_8012B178(o, -0x80000 - (((s16)r % 9) << 16));
        AF(o, s16, 0xFE) = rand() & 0xF0;
        AF(o, s16, 0x100) = rand() & 0x1F0;
        AF(o, s16, 0x102) = rand() & 0x30;
    } else {
        AF(m, s16, 0x10) = rand() % 0x1000;
        AF(m, s16, 0x12) = rand() % 0x1000;
        AF(o, s32, 0x48) = 0xC000;
    }
    AF(o, s32, 0x1C) = 0x3C;
    p = (struct_8_4 *)(o + 0xDC);
    n = rand() % 12;
    p->field_0 = !(rand() & 1) ? -n - 0x18 : n - 0x18;
    p->field_2 = 0;
    n = rand() % 12;
    p->field_4 = !(rand() & 1) ? -n - 0x18 : n - 0x18;
    p++;
    n = rand() % 12;
    p->field_0 = !(rand() & 1) ? -n + 0x18 : n + 0x18;
    p->field_2 = 0;
    n = rand() % 12;
    p->field_4 = !(rand() & 1) ? -n - 0x18 : n - 0x18;
    p++;
    n = rand() % 12;
    p->field_0 = !(rand() & 1) ? -n - 0x18 : n - 0x18;
    p->field_2 = 0;
    n = rand() % 12;
    p->field_4 = !(rand() & 1) ? -n + 0x18 : n + 0x18;
    p++;
    n = rand() % 12;
    p->field_0 = !(rand() & 1) ? -n + 0x18 : n + 0x18;
    p->field_2 = 0;
    n = rand() % 12;
    p->field_4 = !(rand() & 1) ? -n + 0x18 : n + 0x18;
    AF(o, s16, 0x104) = (rand() % 8) << 5;
    AF(o, s16, 0x106) = (rand() % 6) << 5;
    AF(o, u16, 2)++;
}

void func_sc07_001_8017FD88(u8 *arg0) {
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;

    if (!(AF(arg0, s16, 0x70) & 0x8000)) {
        temp_a0 = AF(arg0, void *, 0x20);
        AF(temp_a0, u16, 0x10) = (u16) (AF(temp_a0, u16, 0x10) + AF(arg0, u16, 0xFE));
        temp_a0_2 = AF(arg0, void *, 0x20);
        AF(temp_a0_2, u16, 0x12) = (u16) (AF(temp_a0_2, u16, 0x12) + AF(arg0, u16, 0x100));
        temp_a0_3 = AF(arg0, void *, 0x20);
        AF(temp_a0_3, u16, 0x14) = (u16) (AF(temp_a0_3, u16, 0x14) + AF(arg0, u16, 0x102));
    }
    if (func_8012BEE8((s32) arg0) != 0) {
        func_8012C218((s32) arg0);
        return;
    }
    func_8012AD80((s32) arg0);
    func_sc07_001_8017FE38((s32) arg0);
}

void func_sc07_001_8017FE38(u8 *o) {
    struct_20_5 m;
    s32 flag;
    s32 flag2;
    s32 otz;
    u8 *p;
    u32 *ot;
    struct_20_5 *wm;
    u8 *vp;
    u32 x;
    u16 y;
    u32 ty;
    u16 tp;
    s32 t;
    s32 z;

    vp = o + 0xDC;
    ot = D_800A6610[D_800B9A02];
    p = D_800A5E60;
    D_800A5E60 = p + 0x28;
    p[3] = 9;
    AF(p, s32, 4) = 0x808080;
    p[7] = 0x2C;
    wm = &D_800AF648;
    gte_SetRotMatrix(wm);
    gte_ldclmv(AF(o, u8 *, 0x20) + 0x34);
    gte_rtir();
    gte_stclmv(&m.field_0[0][0]);
    gte_ldclmv(AF(o, u8 *, 0x20) + 0x36);
    gte_rtir();
    gte_stclmv(&m.field_0[0][1]);
    gte_ldclmv(AF(o, u8 *, 0x20) + 0x38);
    gte_rtir();
    gte_stclmv(&m.field_0[0][2]);
    gte_SetTransMatrix(wm);
    gte_ldlv0(AF(o, u8 *, 0x20) + 0x48);
    gte_rtv0tr();
    gte_stlvnl(&m.field_14);
    gte_SetRotMatrix(&m);
    gte_SetTransMatrix(&m);
    gte_ldv3(vp, vp + 8, vp + 0x10);
    gte_rtpt();
    gte_stflg(&flag);
    gte_stsxy3(p + 8, p + 0x10, p + 0x18);
    gte_ldv0(vp + 0x18);
    gte_rtps();
    gte_stflg(&flag2);
    flag |= flag2;
    gte_stsxy(p + 0x20);
    gte_avsz4();
    gte_stotz(&otz);
    if ((flag & ~0x1000) == 0) {
        x = AF(o, u16, 0x104) + 0x140;
        y = AF(o, u16, 0x106);
        AF(p, u16, 0xE) = 0x7800;
        ty = y & 0x100;
        tp = 0x80 | (ty >> 4) | ((x & 0x3C0) >> 6) | ((y & 0x200) << 2);
        t = tp;
        AF(p, u16, 0x16) = t;
        t = (t & 0xF) * 64;
        x -= t;
        x <<= 1;
        p[0xC] = x;
        t = y;
        if (tp & 0x10) {
            t -= 0x100;
        }
        p[0xD] = t;
        p[0x14] = p[0xC] + 0x1F;
        p[0x15] = p[0xD];
        p[0x1C] = p[0xC];
        p[0x1D] = p[0xD] + 0x1F;
        p[0x24] = p[0x14];
        p[0x25] = p[0x1D];
        z = otz + 1;
        if (z >= 0x1000) {
            z = 0x1000;
        }
        ((struct_4_4 *)p)->field_0_b0 = ((struct_4_4 *)&ot[z])->field_0_b0;
        ((struct_4_4 *)&ot[z])->field_0_b0 = (u32)p;
    }
}

void func_sc07_001_801801F4(u8 *arg0) {
    D_sc07_001_801853E0[AF(arg0, u16, 2)]();
}

void func_sc07_001_80180230(u8 *o) {
    s32 w;
    s32 a;
    s32 y;

    if (func_8012C354(o, &D_sc07_001_801853A0) != 0) {
        AF(o, s32, 0x58) = AF(AF(o, u8 *, 0x78), s32, 8) | 0x40000000;
        AF(AF(o, u8 *, 0x20), s32, 0x20) = (s32) &D_sc07_001_801853D4;
        a = 0x800 - ((s16) (AF(o, s16, 0x70) % 12) + 1) * 0x155;
        func_8012B0B4(&w, (s16) a, 0x29C);
        AF(o, s16, 6) = w;
        AF(o, s16, 0xE) = w >> 16;
        y = AF(o, s16, 0x70);
        AF(o, s16, 0xA) = -0x552 - (y << 6);
        AF(AF(o, u8 *, 0x20), s16, 0x12) = a + 0x800;
        AF(o, u8, 0x75) = 2;
        AF(o, s16, 2) = 1;
    }
}

void func_sc07_001_80180350(u8 *arg0) {
    if (func_sc07_001_80180570() == 1) {
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x48) = 0x18000;
        return;
    }
    if (AF(arg0, u16, 0x34) == 0) {
        if (AF(arg0, u8, 0x74) != 0) {
            AF(arg0, s32, 0x1C) = 0x96;
            AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
            goto block_7;
        }
    } else {
        if (func_8012BEE8((s32) arg0) != 0) {
            AF(arg0, s16, 2) = 2;
            AF(arg0, s32, 0x48) = 0x18000;
        }
block_7:
        if (AF(arg0, u8, 0x74) != 0) {
            func_8012E014((s32) arg0);
        }
    }
}

void func_sc07_001_80180404(u8 *o) {
    struct_8_4 v;
    struct_8_4 w;
    s32 flag;
    u8 *m;
    u8 *e;
    s32 i;
    s32 r;

    func_8012AD80(o);
    if ((D_800B99DA & 3) == 0) {
        v.field_0 = -0x30;
        v.field_2 = 0;
        v.field_4 = 0x28;
        m = AF(o, u8 *, 0x20) + 0x34;
        gte_SetRotMatrix(m);
        gte_SetTransMatrix(m);
        for (i = 0; i < 5; i++) {
            e = (u8 *)func_8012913C(0x22);
            if (e != 0) {
                RotTransSV(&v, &w, &flag);
                AF(e, s16, 6) = w.field_0;
                AF(e, s16, 0xA) = w.field_2;
                AF(e, s16, 0xE) = w.field_4;
                r = rand();
                AF(e, u16, 0x34) = (((r & 1) << 12) + 0x2000) | (rand() & 1);
            }
            v.field_0 += 0x20;
        }
    }
    if (AF(o, u8, 0x74) != 0) {
        func_8012E014(o);
    }
    if (AF(o, s16, 0xA) >= 0x10) {
        func_8012C218(o);
    }
}

s32 func_sc07_001_80180570(u8 *o) {
    u8 *p;
    struct_8_4 a;
    struct_8_4 b;

    if (D_sc07_001_801AAD60 == 0 || (AF(AF(D_sc07_001_801AAD60, u8 *, 0x20), s32, 4) & 0x80000000)) {
        return 0;
    }
    p = (u8 *)((AF(o, u32, 0x58) & 0x0FFFFFFF) | 0x80000000);
    a.field_0 = AF(p, u16, 4); a.field_2 = AF(p, u16, 8); a.field_4 = AF(p, u16, 0xC);
    b.field_0 = AF(p, u16, 4); b.field_2 = AF(p, u16, 8); b.field_4 = AF(p, u16, 0xE);
    if (func_sc07_001_80180754(o, D_sc07_001_801AAD60, &a, &b) == 1) return 1;
    a.field_0 = AF(p, u16, 4); a.field_2 = AF(p, u16, 0xA); a.field_4 = AF(p, u16, 0xC);
    b.field_0 = AF(p, u16, 4); b.field_2 = AF(p, u16, 0xA); b.field_4 = AF(p, u16, 0xE);
    if (func_sc07_001_80180754(o, D_sc07_001_801AAD60, &a, &b) == 1) return 1;
    a.field_0 = AF(p, u16, 6); a.field_2 = AF(p, u16, 8); a.field_4 = AF(p, u16, 0xC);
    b.field_0 = AF(p, u16, 6); b.field_2 = AF(p, u16, 8); b.field_4 = AF(p, u16, 0xE);
    if (func_sc07_001_80180754(o, D_sc07_001_801AAD60, &a, &b) == 1) return 1;
    a.field_0 = AF(p, u16, 6); a.field_2 = AF(p, u16, 0xA); a.field_4 = AF(p, u16, 0xC);
    b.field_0 = AF(p, u16, 6); b.field_2 = AF(p, u16, 0xA); b.field_4 = AF(p, u16, 0xE);
    if (func_sc07_001_80180754(o, D_sc07_001_801AAD60, &a, &b) == 1) return 1;
    return 0;
}

s32 func_sc07_001_80180754(u8 *o, u8 *t, struct_8_4 *a, struct_8_4 *b) {
    struct_8_4 sa;
    struct_8_4 sb;
    s32 flag;
    u8 *m;

    m = AF(o, u8 *, 0x20) + 0x34;
    gte_SetRotMatrix(m);
    gte_SetTransMatrix(m);
    RotTransSV(a, &sa, &flag);
    RotTransSV(b, &sb, &flag);
    return func_80135888(AF(t, s32, 0x20), AF(t, s32, 0x58), &sa, &sb) != 0;
}

void func_sc07_001_80180814(u8 *arg0) {
    D_sc07_001_801853FC[AF(arg0, u16, 2)]();
}

void func_sc07_001_80180850(u8 *arg0) {
    D_sc07_001_80185470[AF(arg0, u16, 2)]();
}

void func_sc07_001_8018088C(u8 *o) {
    struct_8_4 *p;
    u8 *e;
    s16 y;
    s16 lim;
    s32 n;

    n = AF(o, s16, 0x70);
    p = D_sc07_001_80185678[n];
    if (p == 0) return;
    if ((u16)(D_800B99DA % 5) != 0) return;
    if (AF(o, s32, 0x3C) == AF(o, s32, 8)) return;
    y = D_sc07_001_801AAD6E[n].field_0;
    lim = D_sc07_001_80185688[n];
    while (p->field_6 != -1) {
        if (lim > p->field_2 + y) {
            e = (u8 *)func_8012913C(0x22);
            if (e != 0) {
                AF(e, s16, 6) = p->field_0;
                AF(e, s16, 0xA) = p->field_2 + y;
                AF(e, s16, 0xE) = p->field_4;
                AF(e, u16, 0x34) = (rand() % 0xFFF + 0x6000) & 0xFFF0;
                AF(AF(e, u8 *, 0x20), u16, 0x2C) = 0xC00C;
            }
        }
        p++;
    }
}

void func_sc07_001_80180A2C(u8 *o) {
    s32 t;

    t = func_8012C1B8();
    AF(o, s32, 0x20) = t;
    if (t == 0) {
        func_8012CAE4(o);
        return;
    }
    func_8001C214(t, 0);
    if (AF(o, s16, 0x70) == 4) {
        AF(o, s32, 0x58) = (s32) &D_sc07_001_801854F8 | 0x10000000 | 0x40000000;
        AF(o, s16, 0x5C) = 0x800;
        AF(o, s32, 4) = AF(o, s32, 8) = AF(o, s32, 0xC) = 0;
        AF(o, u16, 2) += 2;
        return;
    }
    AF(o, s32, 0x58) = (s32) (D_sc07_001_80185478 + AF(o, s16, 0x70) * 16) | 0x50000000;
    AF(o, s16, 0x5C) = 0xC00;
    AF(o, u8, 0x75) = 2;
    AF(o, s32, 0x1C) = rand();
    AF(o, u16, 2)++;
    switch (AF(o, s16, 0x70)) {
    case 0:
        AF(AF(o, u8 *, 0x20), u16, 0x14) += 0xA0;
        break;
    case 2:
        AF(AF(o, u8 *, 0x20), u16, 0x10) += 0xA0;
        break;
    }
}

void func_sc07_001_80180B54(u8 *arg0) {
    D_sc07_001_80185690[AF(arg0, u16, 2)]();
}

void func_sc07_001_80180B90(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc07_001_8019E510);
    AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc07_001_801853EC | 0x40000000);
    AF(arg0, s16, 0x5C) = 0xC00;
    AF(arg0, s16, 0xA) = -0x1100;
    AF(arg0, s16, 0xE) = -0x240;
    AF(arg0, s32, 0x14) = 0x60000;
    AF(arg0, s16, 6) = 0;
    AF(arg0, u8, 0x75) = 2;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc07_001_80180C2C(u8 *arg0) {
    if ((D_sc07_001_801AAD8C & 0xFFFF) == 3) {
        AF(arg0, s16, 0x34) = 0;
        D_sc07_001_801AAD8C += 1;
    }
    if (AF(arg0, u8, 0x74) != 0) {
        func_8012E014((s32) arg0);
        D_80126BE0 = D_80126B5E;
        D_80126BE2 = D_80126B62;
        D_80126BE4 = D_80126B66;
    }
}

void func_sc07_001_80180CB0(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc07_001_801A1BC0);
    AF(arg0, s16, 6) = -0x134;
    AF(arg0, s16, 0xA) = -0xE82;
    AF(arg0, s16, 0xE) = -0x1D9;
    AF(AF(arg0, s32, 0x20), s16, 0x12) = 0xD00;
    func_8012B2CC((s32) arg0);
    func_8012A828((s32) arg0, (s32) &D_sc07_001_80184FD0);
    func_80132288((s32) &D_sc07_001_801AAD90, (s32) &D_sc07_001_80185440, D_sc07_001_801A1BDC);
    func_8012E8A8((s32) arg0);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc07_001_80180D74(u8 *o) {
    s32 n;

    switch (AF(o, u16, 0x34)) {
    case 0:
        if (D_sc07_001_801AAD8C == 1) {
            AF(o, u16, 0x34)++;
            func_8012A828(o, &D_sc07_001_801A3264);
        }
        break;
    case 1:
        func_8013240C(&D_sc07_001_801AAD90);
        if (D_sc07_001_801AAD9C & 0x4000) {
            AF(o, u16, 0x34)++;
            func_8012A828(o, &D_sc07_001_801A7E14);
            AF(o, s32, 0x1C) = 0x10;
        }
        break;
    case 2:
        if (func_8012BEE8(o) != 0) {
            n = AF(o, u16, 0x34) + 1;
            D_sc07_001_801AAD8C = 2;
            AF(o, u16, 0x34) = n;
        }
        break;
    }
}

void func_sc07_001_80180E78(u8 *o) {
    s16 y;

    y = D_sc07_001_801AAD6E[AF(o, s16, 0x70)].field_0;
    if (y >= 0x400) {
        func_8012C218(o);
        return;
    }
    AF(o, s16, 0xA) = y + AF(o, u16, 0x8A);
    func_sc07_001_8018088C(o);
    if (AF(o, s32, 0x3C) != AF(o, s32, 8) && AF(o, u8, 0x74) != 0) {
        func_8012E014(o);
    }
}

void func_sc07_001_80180F18(void) {
}

void func_sc07_001_80180F20(u8 *arg0) {
    D_sc07_001_8018569C[AF(arg0, u16, 2)]();
}

void func_sc07_001_80180F5C(s32 arg0, s32 arg1) {
    func_8012AD50(arg0, arg1);
}

void func_sc07_001_80180F7C(s32 arg0) {
    if (D_80126944 >= -0x3FF) {
        func_8012A568((s32) &func_sc07_001_8017DB70);
        func_8012AD50(arg0);
    }
}

void func_sc07_001_80180FC8(void) {
}

void func_sc07_001_80180FD0(s32 arg0, s32 arg1, s32 arg2) {
    struct_20_5 m;

    func_80013F3C(&m);
    func_sc07_001_80181034((s16)arg0, &m);
    ApplyMatrixSV(&m, arg1, arg2);
}

void func_sc07_001_80181034(s32 arg0, struct_20_5 *m) {
    struct_20_5 r;
    s32 a;
    s16 c;
    s16 s;

    a = arg0 & 0xFFF;
    c = func_sc07_001_80181434(a);
    s = func_sc07_001_80181378(a);
    r.field_0[0][0] = c;
    r.field_0[0][1] = 0;
    r.field_0[0][2] = s;
    r.field_0[1][0] = 0;
    r.field_0[1][1] = 0x7FF8;
    r.field_0[1][2] = 0;
    r.field_0[2][0] = -s;
    r.field_0[2][1] = 0;
    r.field_0[2][2] = c;
    gte_SetRotMatrix(m);
    gte_ldclmv(&r.field_0[0][0]);
    gte_rtir();
    gte_stclmv(&m->field_0[0][0]);
    gte_ldclmv(&r.field_0[0][1]);
    gte_rtir();
    gte_stclmv(&m->field_0[0][1]);
    gte_ldclmv(&r.field_0[0][2]);
    gte_rtir();
    gte_stclmv(&m->field_0[0][2]);
}

void func_sc07_001_80181194(u16 *r, s16 *m) {
    s16 sx;
    s16 cx;
    s16 sy;
    s16 cy;
    s16 sz;
    s16 cz;
    s32 a;
    s32 b;
    s32 c;

    sx = func_sc07_001_80181434(r[0] & 0xFFF);
    cx = func_sc07_001_80181378(r[0] & 0xFFF);
    sy = func_sc07_001_80181434(r[1] & 0xFFF);
    cy = func_sc07_001_80181378(r[1] & 0xFFF);
    sz = func_sc07_001_80181434(r[2] & 0xFFF);
    cz = func_sc07_001_80181378(r[2] & 0xFFF);
    c = (sx * cz) >> 15;
    b = (sx * sz) >> 15;
    a = (cx * cy) >> 15;
    m[0] = (sz * sy) >> 15;
    m[1] = ((a * sz) >> 15) - c;
    m[2] = ((b * cy) >> 15) + ((cx * cz) >> 15);
    m[3] = (cz * sy) >> 15;
    m[4] = ((a * cz) >> 15) + b;
    m[5] = ((c * cy) >> 15) - ((cx * sz) >> 15);
    m[6] = -cy;
    m[7] = (sy * cx) >> 15;
    m[8] = (sy * sx) >> 15;
}

s32 func_sc07_001_80181378(u32 a) {
    if (a < 0x400) {
        return D_sc07_001_801A353C[a];
    }
    if (a - 0x400 < 0x400) {
        return D_sc07_001_801A353C[0x7FF - a];
    }
    if (a - 0x800 < 0x400) {
        return (s16)-D_sc07_001_801A353C[a - 0x800];
    }
    if (a - 0xC00 < 0x400) {
        return (s16)-D_sc07_001_801A353C[0xFFF - a];
    }
}

s32 func_sc07_001_80181434(s32 a) {
    if (a >= 0 && a < 0x400) {
        return D_sc07_001_801A353C[0x3FF - a];
    }
    if (a >= 0x400 && a < 0x800) {
        return (s16)-D_sc07_001_801A353C[a - 0x400];
    }
    if (a >= 0x800 && a < 0xC00) {
        return (s16)-D_sc07_001_801A353C[0xBFF - a];
    }
    if (a >= 0xC00 && a < 0x1000) {
        return D_sc07_001_801A353C[a - 0xC00];
    }
}
