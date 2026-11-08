#include "common.h"
#include "gte.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc02_004_8017BE9C(void) {
}

void func_sc02_004_8017BEA4(void) {
}

void func_sc02_004_8017BEAC(void) {
}

void func_sc02_004_8017BEB4(void) {
}

typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_4;
typedef struct { s16 field_0[6]; } struct_C_3;
extern void (*D_sc02_004_80181718[])();
extern void func_8016EDEC();
void func_sc02_004_8017D670(u8 *arg0);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc02_004_80181720[])();
extern void func_800D1EBC();
extern void (*D_sc02_004_8018172C[])();
extern void (*D_sc02_004_8018173C[])();
void func_sc02_004_8017D804(u8 *arg0);
extern void func_8016F0E4();
extern void (*D_sc02_004_801817F8[])();
extern void (*D_sc02_004_80181804[])();

typedef struct { s16 field_0, field_2; } struct_4_2;
typedef struct { struct_4_2 field_0; s16 field_4; s16 field_6; struct_4_2 field_8; s32 field_C; s32 field_10; s32 field_14; s32 field_18; } struct_1C;
typedef struct { s32 field_0, field_4, field_8; } struct_C_4;

extern s32 func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();


extern s32 D_80126950;
extern u8 D_sc02_004_801919B0;
extern void func_80174E9C();
extern u8 D_sc02_004_801816EC;
extern void func_800D1724();
extern s16 D_80126B66;

extern s32 func_8012913C();

typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_5;

typedef struct { s32 field_0, field_4, field_8, field_C; } struct_10;
extern void func_sc02_004_8017C294();

void func_sc02_004_8017BEBC(struct_8_4 *r, struct_8_4 *out, s32 arg2) {
    struct_8_4 v[4];
    struct_8_4 w4[4];
    struct_8_4 p[4];
    struct_8_4 c0;
    struct_8_4 c;
    s32 x, y, x2, y2, z, d;
    s16 w, h, m;
    s32 i;
    s16 a;
    s16 x0, x1, x2_, x3, z0, z1, z2, z3, cx, cz;
    s16 a1, b1, e1, a2, b2, e2, a3, b3, e3, a4, b4, e4;
    s16 ex, ez, fx, fz;
    s32 minx, miny, maxx, maxy;

    x = r->field_0;
    y = r->field_2;
    w = r->field_4;
    h = r->field_6;
    x2 = x + w;
    y2 = y + h;
    m = w < h ? h : w;
    d = (s16)(m / 20);
    z = ReadGeomScreen();
    v[0].field_0 = x;  v[0].field_2 = y;  v[0].field_4 = z;
    v[1].field_0 = x2; v[1].field_2 = y;  v[1].field_4 = z;
    v[2].field_0 = x;  v[2].field_2 = y2; v[2].field_4 = z;
    v[3].field_0 = x2; v[3].field_2 = y2; v[3].field_4 = z;
    c0.field_0 = 0;
    c0.field_2 = 0;
    c0.field_4 = 0;
    func_sc02_004_8017C294(&c0, &c);
    for (i = 0; i < 4; i++) {
        func_sc02_004_8017C294(&v[i], &w4[i]);
        if (func_sc02_004_8017C338(&c, &w4[i], &p[i], arg2) != 0) {
            func_sc02_004_8017C530(&p[i], &v[i]);
            v[i].field_0 = v[i].field_0 < x - d ? x - d : (v[i].field_0 > x2 + d ? x2 + d : v[i].field_0);
            v[i].field_2 = v[i].field_2 < y - d ? y - d : (v[i].field_2 > y2 + d ? y2 + d : v[i].field_2);
            func_sc02_004_8017C294(&v[i], &w4[i]);
            func_sc02_004_8017C338(&c, &w4[i], &p[i], arg2);
        }
    }
    ex = ((((p[0].field_0) < (p[1].field_0) ? (p[0].field_0) : (p[1].field_0))) < (((p[2].field_0) < (p[3].field_0) ? (p[2].field_0) : (p[3].field_0))) ? (((p[0].field_0) < (p[1].field_0) ? (p[0].field_0) : (p[1].field_0))) : (((p[2].field_0) < (p[3].field_0) ? (p[2].field_0) : (p[3].field_0))));
    minx = ex; if (c.field_0 < minx) minx = c.field_0;
    ez = ((((p[0].field_4) < (p[1].field_4) ? (p[0].field_4) : (p[1].field_4))) < (((p[2].field_4) < (p[3].field_4) ? (p[2].field_4) : (p[3].field_4))) ? (((p[0].field_4) < (p[1].field_4) ? (p[0].field_4) : (p[1].field_4))) : (((p[2].field_4) < (p[3].field_4) ? (p[2].field_4) : (p[3].field_4))));
    miny = ez; if (c.field_4 < miny) miny = c.field_4;
    fx = ((((p[0].field_0) > (p[1].field_0) ? (p[0].field_0) : (p[1].field_0))) > (((p[2].field_0) > (p[3].field_0) ? (p[2].field_0) : (p[3].field_0))) ? (((p[0].field_0) > (p[1].field_0) ? (p[0].field_0) : (p[1].field_0))) : (((p[2].field_0) > (p[3].field_0) ? (p[2].field_0) : (p[3].field_0))));
    maxx = fx; if (c.field_0 > maxx) maxx = c.field_0;
    fz = ((((p[0].field_4) > (p[1].field_4) ? (p[0].field_4) : (p[1].field_4))) > (((p[2].field_4) > (p[3].field_4) ? (p[2].field_4) : (p[3].field_4))) ? (((p[0].field_4) > (p[1].field_4) ? (p[0].field_4) : (p[1].field_4))) : (((p[2].field_4) > (p[3].field_4) ? (p[2].field_4) : (p[3].field_4))));
    maxy = fz; if (c.field_4 > maxy) maxy = c.field_4;
    out->field_4 = maxx - minx;
    out->field_0 = minx;
    out->field_2 = miny;
    out->field_6 = maxy - miny;
}

typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_3;
typedef union { s32 m0; struct_4_2 m1; } union_4_2;
typedef struct { u8 field_0[0x18]; struct_20_3 field_18; } struct_38;
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_4;
typedef struct { u8 field_0, field_1, field_2, field_3; } struct_4_3;
typedef struct { s16 field_0[3][3]; s16 field_12; s32 field_14[3]; } struct_20_5;
typedef struct { u32 field_0; u32 field_4; u32 field_8; u32 field_C; u32 *field_10; } struct_14_2;
typedef struct { s32 field_0; s32 field_4; s32 field_8; s32 field_C; s32 field_10; s32 field_14; s32 field_18; } struct_1C_2;
typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_6;
typedef struct { u16 field_0[6]; } struct_C_5;
typedef struct { u16 field_0, field_2, field_4, field_6; } struct_8_7;
typedef struct { u8 field_0, field_1, field_2, field_3; } struct_4_4;
typedef struct { struct_8_7 field_0; struct_8_7 field_8; struct_4_4 field_10; struct_4_4 field_14; s32 field_18; } struct_1C_3;
typedef struct { struct_8_5 field_0[4]; struct_4_4 field_20[4]; s32 field_30; } struct_34_2;
typedef struct { u16 field_0; s16 field_2; s16 field_4; s16 field_6; s32 field_8; s32 field_C; } struct_10_2;
typedef struct { s16 field_0, field_2, field_4, field_6; u8 field_8, field_9; s16 field_A; struct_10_2 field_C[16]; } struct_10C_2;
typedef struct { u32 *field_0; u8 field_4[0x10]; } struct_14_3;
typedef struct { u8 field_0[0x14]; } struct_14_4;
typedef struct { unsigned field_0_b0 : 24; unsigned field_3_b0 : 8; } struct_4_5;
typedef struct { u8 field_0[8]; } struct_8_8;
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_6;
typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_9;
typedef struct { s32 field_0[4]; } struct_10_3;

void func_sc02_004_8017C294(struct_8_4 *zero, struct_8_4 *out) {
    struct_20_5 m;
    struct_20_5 mt;
    struct_8_4 d;
    ReadRotMatrix(&m);
    PushMatrix();
    d.field_0 = zero->field_0 - m.field_14[0];
    d.field_2 = zero->field_2 - m.field_14[1];
    d.field_4 = zero->field_4 - m.field_14[2];
    TransposeMatrix(&m, &mt);
    ApplyMatrixSV(&mt, &d, out);
    PopMatrix();
}

s32 func_sc02_004_8017C338(struct_8_5 *a, struct_8_5 *b, struct_8_5 *o, s32 lim) {
    s32 x;
    s32 z;
    s32 c;
    s32 r;

    r = 0;
    if (b->field_2 <= a->field_2) {
        x = a->field_0 - a->field_2 * (b->field_0 - a->field_0);
        z = a->field_4 - a->field_2 * (b->field_4 - a->field_4);
    } else {
        x = b->field_0 + b->field_2 * (b->field_0 - a->field_0) / (a->field_2 - b->field_2);
        z = b->field_4 + b->field_2 * (b->field_4 - a->field_4) / (a->field_2 - b->field_2);
    }
    c = (x < -0x7FFF) ? -0x7FFF : (x > 0x7FFF) ? 0x7FFF : x;
    o->field_0 = c;
    c = (z < -0x7FFF) ? -0x7FFF : (z > 0x7FFF) ? 0x7FFF : z;
    o->field_4 = c;
    o->field_2 = 0;
    if (o->field_0 < a->field_0 - lim) {
        r = -1;
        o->field_0 = a->field_0 - lim;
    }
    if (o->field_0 > a->field_0 + lim) {
        r = -1;
        o->field_0 = a->field_0 + lim;
    }
    if (o->field_4 < a->field_4 - lim) {
        r = -1;
        o->field_4 = a->field_4 - lim;
    }
    if (o->field_4 > a->field_4 + lim) {
        r = -1;
        o->field_4 = a->field_4 + lim;
    }
    return r;
}

s32 func_sc02_004_8017C530(s32 arg0, s32 arg1) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;

    ReadGeomOffset((s32) &sp10, (s32) &sp14);
    SetGeomOffset(0, 0);
    RotTransPers(arg0, arg1, (s32) &sp18, (s32) &sp1C);
    return SetGeomOffset(sp10, sp14);
}

extern s32 func_80128ED8();
extern void func_801292C8();
extern void func_8012931C();
extern s32 func_80135168();

extern u8 D_sc02_004_801817E0;
extern void func_8013C9C4();

void func_sc02_004_8017D9C4(s32 arg0);
extern u8 D_sc02_004_80194F04;
extern u8 D_sc02_004_80194F0C;
extern s32 func_801724EC();
extern s32 func_80172664();
extern s32 func_80171D78();
extern void func_8001CC3C();
extern void func_80128EA8();
extern u8 D_800D387C;
extern u8 D_800D3888;
extern u8 D_sc02_004_801817A4;
extern u8 D_sc02_004_801817B0;

typedef struct { s32 field_0; s32 field_4; s32 field_8; s8 field_C; s8 field_D; s8 field_E; } struct_10_4;
typedef struct { u32 *field_0; s32 field_4[4]; } struct_14_5;
typedef struct { s32 field_0[0x95]; } struct_254;
typedef struct { s16 field_0; s16 field_2; s16 field_4[8]; s16 *field_14[8]; } struct_34_3;
typedef struct { s16 field_0, field_2, field_4; } struct_6;
typedef struct { s16 field_0, field_2; s32 field_4; } struct_8_10;
typedef struct { struct_8_4 field_0[3]; struct_4_4 field_18[3]; s32 field_24; } struct_28;
typedef struct { u8 *field_0; u32 field_4; u32 field_8; u32 field_C; u32 field_10; u32 *field_14; u32 *field_18; } struct_1C_4;
typedef struct { s32 field_0; s32 field_4; s32 field_8; s32 field_C; s32 field_10; s32 field_14; } struct_18;
extern u16 D_800B9A02;
extern u8 *D_800A5E60;
extern u32 D_800A6610[2][0x1000];
extern struct_8_4 D_sc02_004_80196260;

void func_sc02_004_8017C59C(u8 *o) {
    struct_8_4 r;
    s32 tmp[4];
    struct_8_4 box[8];
    struct_8_4 scr[8];
    struct_20_5 ls;
    struct_18 g;
    s32 x0, x1, y0, y1;
    s32 xi, yi;
    struct_1C_4 **row;
    struct_1C_4 **cp;
    struct_1C_4 *c;
    u8 *pk;
    u32 *ot;
    u8 *verts;
    u32 *poly;
    u32 *end;
    u32 w;
    s32 hi;
    s32 xh, xl, yh, yl;
    s32 a, b;
    s32 type;
    u8 *d;
    u8 *d3;
    u32 *t;
    u32 cx, cy, cz;
    u32 bxl, bxh, byl, byh, bzl, bzh;

    ReadGeomScreen();
    GsGetLs(o + 0x10, &ls);
    GsSetLsMatrix(&ls);
    func_sc02_004_8017BEBC(&D_sc02_004_80196260, &r, AF(o, s32, 0x60));
    pk = D_800A5E60;
    ot = D_800A6610[D_800B9A02];
    x0 = (r.field_0 + 0x4000) / 512;
    x1 = (r.field_0 + r.field_4 + 0x4000) / 512 + 2;
    x0 = x0 < 0 ? 0 : (x0 > 63 ? 63 : x0);
    x1 = x1 < 0 ? 0 : (x1 > 63 ? 63 : x1);
    y0 = (r.field_2 + 0x4000) / 512 - 1;
    y1 = (r.field_2 + r.field_6 + 0x4000) / 512 + 2;
    y0 = y0 < 0 ? 0 : (y0 > 63 ? 63 : y0);
    y1 = y1 < 0 ? 0 : (y1 > 63 ? 63 : y1);
    row = &AF(o, struct_1C_4 **, 0xC)[y0 * 64 + x0];
    for (yi = y0; yi < y1; yi++, row += 64) {
        for (xi = x0, cp = row; xi < x1; xi++, cp++) {
            c = *cp;
            if (c == 0) continue;
            cx = c->field_8; cy = c->field_C; cz = c->field_10;
            bxl = cx & 0xFFFF; byl = cy & 0xFFFF; bzl = cz & 0xFFFF;
            bxh = cx >> 16; bzh = cz >> 16; byh = cy >> 16;
            box[0].field_0 = bxl; box[0].field_2 = byl; box[0].field_4 = bzl;
            box[1].field_0 = bxh; box[1].field_2 = byl; box[1].field_4 = bzl;
            box[2].field_0 = bxl; box[2].field_2 = byl; box[2].field_4 = bzh;
            box[3].field_0 = bxh; box[3].field_2 = byl; box[3].field_4 = bzh;
            box[4].field_0 = bxl; box[4].field_2 = byh; box[4].field_4 = bzl;
            box[5].field_0 = bxh; box[5].field_2 = byh; box[5].field_4 = bzl;
            box[6].field_0 = bxl; box[6].field_2 = byh; box[6].field_4 = bzh;
            box[7].field_0 = bxh; box[7].field_2 = byh; box[7].field_4 = bzh;
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

            if (scr[0].field_0 > scr[1].field_0) { hi = scr[0].field_0; xh = scr[1].field_0; } else { xh = scr[0].field_0; hi = scr[1].field_0; }
            if (scr[2].field_0 > hi) hi = scr[2].field_0; else if (scr[2].field_0 < xh) xh = scr[2].field_0;
            if (scr[3].field_0 > hi) hi = scr[3].field_0; else if (scr[3].field_0 < xh) xh = scr[3].field_0;
            if (scr[4].field_0 > scr[5].field_0) { yl = scr[4].field_0; yh = scr[5].field_0; } else { yh = scr[4].field_0; yl = scr[5].field_0; }
            if (scr[6].field_0 > yl) yl = scr[6].field_0; else if (scr[6].field_0 < yh) yh = scr[6].field_0;
            if (scr[7].field_0 > yl) yl = scr[7].field_0; else if (scr[7].field_0 < yh) yh = scr[7].field_0;
            xl = xh; if (yh < xl) xl = yh;
            xh = hi; if (xh < yl) xh = yl;
            if (xh < -160 || xl > 160) continue;

            if (scr[0].field_2 > scr[1].field_2) { xl = scr[0].field_2; yl = scr[1].field_2; } else { yl = scr[0].field_2; xl = scr[1].field_2; }
            if (scr[2].field_2 > xl) xl = scr[2].field_2; else if (scr[2].field_2 < yl) yl = scr[2].field_2;
            if (scr[3].field_2 > xl) xl = scr[3].field_2; else if (scr[3].field_2 < yl) yl = scr[3].field_2;
            if (scr[4].field_2 > scr[5].field_2) { xh = scr[4].field_2; yh = scr[5].field_2; } else { yh = scr[4].field_2; xh = scr[5].field_2; }
            if (scr[6].field_2 > xh) xh = scr[6].field_2; else if (scr[6].field_2 < yh) yh = scr[6].field_2;
            if (scr[7].field_2 > xh) xh = scr[7].field_2; else if (scr[7].field_2 < yh) yh = scr[7].field_2;
            if (yh < yl) yl = yh;
            yh = xl; if (yh < xh) yh = xh;
            if (yh < -120 || yl > 120) continue;

            poly = c->field_14;
            end = c->field_18;
            verts = c->field_0;
            for (; poly < end; poly += 3) {
                w = poly[1];
                a = (s32)(verts + (w & 0xFFFF));
                b = (s32)(verts + (w >> 16));
                w = poly[2];
                d3 = verts + (w & 0xFFFF);
                w >>= 16;
                gte_ldv3(a, b, d3);
                gte_rtpt();
                gte_stflg(&g.field_0);
                if (g.field_0 & 0x7F85E000) continue;
                gte_nclip();
                type = w & 0xF;
                d = verts + ((w & 0xFFF0) >> 1);
                gte_stopz(&g.field_4);
                if (g.field_4 <= 0) continue;
                switch (type) {
                case 4:
                case 5:
                { u32 *otp; s16 p0, p1, p2, q0, q1, q2; s32 m;
                    gte_stsxy3_f3(pk);
                    gte_stsz3(&g.field_8, &g.field_C, &g.field_10);
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
                    if (g.field_8 > g.field_C) { m = g.field_8; if (m < g.field_10) m = g.field_10; } else { m = g.field_C; if (m < g.field_10) m = g.field_10; }
                    g.field_4 = m;
                    if (type != 4) g.field_4 = m + 0x200;
                    AF(pk, u32, 4) = poly[0];
                    otp = (u32 *)(((g.field_4 >> 2) << 2) + (u32)ot);
                    *(u32 *)pk = (*otp & 0xFFFFFF) | 0x4000000;
                    *otp = (*otp & 0xFF000000) | ((u32)pk & 0xFFFFFF);
                    pk += 0x14;
                    break;
                }
                case 6:
                case 7:
                { u32 *otp; s16 p0, p1, p2, q0, q1, q2; s32 m;
                    gte_stsxy3c(tmp);
                    gte_stsz3(&g.field_8, &g.field_C, &g.field_10);
                    p0 = AF(tmp, s16, 0); p1 = AF(tmp, s16, 4);
                    if (p0 > p1) { xh = p0; xl = p1; } else { xl = p0; xh = p1; }
                    p2 = AF(tmp, s16, 8);
                    if (p2 > xh) xh = p2; else if (p2 < xl) xl = p2;
                    if (xh < -160 || xl > 160) continue;
                    q0 = AF(tmp, s16, 2); q1 = AF(tmp, s16, 6);
                    if (q0 > q1) { yh = q0; yl = q1; } else { yl = q0; yh = q1; }
                    q2 = AF(tmp, s16, 0xA);
                    if (q2 > yh) yh = q2; else if (q2 < yl) yl = q2;
                    if (yh < -120 || yl > 120) continue;
                    gte_avsz3();
                    if (g.field_8 > g.field_C) { m = g.field_8; if (m < g.field_10) m = g.field_10; } else { m = g.field_C; if (m < g.field_10) m = g.field_10; }
                    g.field_4 = m;
                    if (type != 6) g.field_4 = m + 0x200;
                    AF(pk, s32, 8) = tmp[0];
                    AF(pk, s32, 0x10) = tmp[1];
                    AF(pk, s32, 0x18) = tmp[2];
                    t = (u32 *)poly[0];
                    AF(pk, u32, 4) = t[0];
                    AF(pk, u32, 0xC) = t[1];
                    AF(pk, u32, 0x14) = t[2];
                    AF(pk, u16, 0x1C) = t[3];
                    otp = (u32 *)(((g.field_4 >> 2) << 2) + (u32)ot);
                    *(u32 *)pk = (*otp & 0xFFFFFF) | 0x7000000;
                    *otp = (*otp & 0xFF000000) | ((u32)pk & 0xFFFFFF);
                    pk += 0x20;
                    break;
                }
                case 0:
                case 1:
                { u32 *otp; s16 p0, p1, p2, p3, q0, q1, q2, q3; s32 za, zb;
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
                    gte_stflg(&g.field_0);
                    if (g.field_0 & 0x7F85E000) continue;
                    gte_stsz4(&g.field_8, &g.field_C, &g.field_10, &g.field_14);
                    gte_stsxy(pk + 0x14);
                    p3 = AF(pk, s16, 0x14);
                    if (p3 < xl) xl = p3; else if (p3 > xh) xh = p3;
                    if (xh < -160 || xl > 160) continue;
                    q3 = AF(pk, s16, 0x16);
                    if (q3 < yl) yl = q3; else if (q3 > yh) yh = q3;
                    if (yh < -120 || yl > 120) continue;
                    za = g.field_10; if (za < g.field_14) za = g.field_14;
                    zb = g.field_8; if (zb < g.field_C) zb = g.field_C;
                    if (zb < za) zb = za;
                    g.field_4 = zb;
                    if (type != 0) g.field_4 = zb + 0x200;
                    AF(pk, u32, 4) = poly[0];
                    otp = (u32 *)(((g.field_4 >> 2) << 2) + (u32)ot);
                    *(u32 *)pk = (*otp & 0xFFFFFF) | 0x5000000;
                    *otp = (*otp & 0xFF000000) | ((u32)pk & 0xFFFFFF);
                    pk += 0x18;
                    break;
                }
                case 2:
                case 3:
                { u32 *otp; u32 tw; s16 p0, p1, p2, p3, q0, q1, q2, q3; s32 za, zb;
                    gte_stsxy3c(tmp);
                    gte_ldv0(d);
                    gte_rtps();
                    gte_stflg(&g.field_0);
                    if (g.field_0 & 0x7F85E000) continue;
                    gte_stsxy(&tmp[3]);
                    gte_stsz4(&g.field_8, &g.field_C, &g.field_10, &g.field_14);
                    p0 = AF(tmp, s16, 0); p1 = AF(tmp, s16, 4);
                    if (p0 > p1) { xh = p0; xl = p1; } else { xl = p0; xh = p1; }
                    p2 = AF(tmp, s16, 8);
                    if (p2 > xh) xh = p2; else if (p2 < xl) xl = p2;
                    p3 = AF(tmp, s16, 0xC);
                    if (p3 > xh) xh = p3; else if (p3 < xl) xl = p3;
                    if (xh < -160 || xl > 160) continue;
                    q0 = AF(tmp, s16, 2); q1 = AF(tmp, s16, 6);
                    if (q0 > q1) { yh = q0; yl = q1; } else { yl = q0; yh = q1; }
                    q2 = AF(tmp, s16, 0xA);
                    if (q2 > yh) yh = q2; else if (q2 < yl) yl = q2;
                    q3 = AF(tmp, s16, 0xC);
                    if (q3 > yh) yh = q3; else if (q3 < yl) yl = q3;
                    if (yh < -120 || yl > 120) continue;
                    gte_avsz4();
                    za = g.field_10; if (za < g.field_14) za = g.field_14;
                    zb = g.field_8; if (zb < g.field_C) zb = g.field_C;
                    if (zb < za) zb = za;
                    g.field_4 = zb;
                    if (type != 2) g.field_4 = zb + 0x200;
                    AF(pk, s32, 8) = tmp[0];
                    AF(pk, s32, 0x10) = tmp[1];
                    AF(pk, s32, 0x18) = tmp[2];
                    AF(pk, s32, 0x20) = tmp[3];
                    t = (u32 *)poly[0];
                    AF(pk, u32, 4) = t[0];
                    AF(pk, u32, 0xC) = t[1];
                    AF(pk, u32, 0x14) = t[2];
                    tw = t[3];
                    AF(pk, u16, 0x1C) = tw;
                    tw >>= 16;
                    AF(pk, u16, 0x24) = tw;
                    otp = (u32 *)(((g.field_4 >> 2) << 2) + (u32)ot);
                    *(u32 *)pk = (*otp & 0xFFFFFF) | 0x9000000;
                    *otp = (*otp & 0xFF000000) | ((u32)pk & 0xFFFFFF);
                    pk += 0x28;
                    break;
                }
                }
            }
        }
    }
    D_800A5E60 = pk;
}

void func_sc02_004_8017D468(void) {
    func_80174E9C((s32) &D_sc02_004_801919B0);
    D_80126950 = 0x1F4;
}

void func_sc02_004_8017D49C(u8 *arg0) {
    D_sc02_004_80181718[AF(arg0, u8, 0x15)]();
}

s32 func_sc02_004_8017D4D8(u8 *arg0) {
    func_8016EDEC((s32) func_sc02_004_8017D670, 0x01000000);
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc02_004_8017D528(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc02_004_8017D54C(u8 *arg0) {
    D_sc02_004_80181720[AF(arg0, u8, 0x15)]();
}

s32 func_sc02_004_8017D588(u8 *arg0) {
    func_8016EDEC((s32) func_sc02_004_8017D804, 0x01000000);
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc02_004_8017D5D4(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_8002D4C8(0x1C, 0);
        func_8001BFD0();
        func_8002D4C8(0x1D, 0);
        func_800D0C48(2);
        func_800D1E28();
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

void func_sc02_004_8017D650(void) {
    func_800D1EBC();
}

void func_sc02_004_8017D670(u8 *arg0) {
    D_sc02_004_8018172C[AF(arg0, u8, 0x214)]();
}

void func_sc02_004_8017D6AC(u8 *arg0) {
    AF(arg0, s32, 0x204) = 0x20;
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
}

void func_sc02_004_8017D6C4(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x204) - 1;
    AF(arg0, s32, 0x204) = temp_v0;
    if (temp_v0 == -1) {
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_004_8017D6F0(u8 *o) {
    struct_8_8 a;
    struct_8_8 b;

    a = *(struct_8_8 *)&D_sc02_004_80194F04;
    b = *(struct_8_8 *)&D_sc02_004_80194F0C;
    if (func_801724EC(o, &b) != 0 && func_80172664(o) == 0) {
        AF(o, s16, 0xAA) = AF(o, s16, 0xAC) = 0x40;
    }
    if (func_80171D78(o, &a) != 0) {
        AF(o, s32, 0x204) = 0x20;
        AF(o, u8, 0x214)++;
    }
}

void func_sc02_004_8017D7B4(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x204) - 1;
    AF(arg0, s32, 0x204) = temp_v0;
    if (temp_v0 == -1) {
        func_800D1724((s32) &D_sc02_004_801816EC);
        func_8016F0E4((s32) arg0);
    }
}

void func_sc02_004_8017D804(u8 *arg0) {
    D_sc02_004_8018173C[AF(arg0, u8, 0x214)]();
}

void func_sc02_004_8017D840(u8 *arg0) {
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
}

void func_sc02_004_8017D854(s32 arg0) {
    func_8016F0E4(arg0);
}

void func_sc02_004_8017D874(u8 *arg0) {
    D_sc02_004_801817F8[AF(arg0, u16, 2)]();
}

void func_sc02_004_8017D8B0(u8 *o) {
    if (AF(o, s16, 0xE) > D_80126B66) {
        AF(o, s32, 0x1C) = 0x10;
        AF(o, u16, 2)++;
        func_8013C9C4(&D_sc02_004_801817E0);
        func_8002D4C8(0x4E8, 0);
    }
}

void func_sc02_004_8017D910(u8 *o) {
    s32 i;

    for (i = 0; i < AF(o, s32, 0x1C); i++) {
        func_sc02_004_8017D9C4((s32)o);
    }
    func_sc02_004_8017D9C4((s32)o);
    func_sc02_004_8017D9C4((s32)o);
    AF(o, s32, 0x1C) >>= 1;
    if (AF(o, s32, 0x1C) == 0) {
        AF(o, s16, 2)++;
    }
}

void func_sc02_004_8017D99C(u8 *arg0) {
    if (AF(arg0, s16, 0xE) < D_80126B66) {
        AF(arg0, s16, 2) = 0;
    }
}

void func_sc02_004_8017D9C4(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_8012913C(5);
    if (temp_v0 != 0) {
        AF(temp_v0, u16, 6) = (u16) AF(arg0, u16, 6);
        AF(temp_v0, u16, 0xA) = (u16) AF(arg0, u16, 0xA);
        AF(temp_v0, u16, 0xE) = (u16) AF(arg0, u16, 0xE);
        AF(temp_v0, s16, 0x2E) = (s16) (rand() & 3);
    }
}

void func_sc02_004_8017DA30(u8 *o) {
    u8 *m;
    u32 r;

    m = AF(o, u8 *, 0x20);
    if (AF(o, s16, 0x2E) != 0) {
        func_8001CC3C(m, &D_800D387C, 0, 0);
        AF(m, u8, 0x27) = 0x9C;
        AF(m, s16, 0x18) = AF(m, s16, 0x1A) = 0x4000;
        AF(m, s32, 4) |= 0x50000040;
        func_80128EA8(m, o + 0x24, &D_800D3888);
        AF(o, s16, 0x1A) = 0x2C;
    } else {
        func_8001CC3C(m, &D_sc02_004_801817A4, 0, 0);
        AF(m, u8, 0x27) = 0x33;
        func_80128EA8(m, o + 0x24, &D_sc02_004_801817B0);
        AF(o, s16, 0x1A) = 0x1C;
    }
    r = rand();
    AF(o, s16, 0x12) = (r & 0x3F) - 0x20;
    AF(o, s16, 0x16) = 0x20 - ((r >> 4) & 0x3F);
    AF(o, s16, 2)++;
}

void func_sc02_004_8017DB2C(u8 *arg0) {
    struct_8_4 a;
    struct_8_4 b;

    if (func_80128ED8(AF(arg0, s32, 0x20), (s32) (arg0 + 0x24)) != 0) {
        func_801292C8((s32) arg0);
        return;
    }
    if (AF(arg0, s16, 0x2E) != 0) {
        func_8012931C((s32) arg0);
        AF(arg0, s32, 0x10) -= AF(arg0, s32, 0x10) >> 3;
        AF(arg0, s32, 0x14) -= 0x4000;
        AF(arg0, s32, 0x18) -= AF(arg0, s32, 0x18) >> 3;
        return;
    }
    a.field_0 = AF(arg0, s16, 6);
    a.field_2 = AF(arg0, s16, 0xA);
    a.field_4 = AF(arg0, s16, 0xE);
    func_8012931C((s32) arg0);
    b.field_0 = AF(arg0, s16, 6);
    b.field_2 = AF(arg0, s16, 0xA);
    b.field_4 = AF(arg0, s16, 0xE);
    if (func_80135168(0, (s32) &a, (s32) &b) != 0) {
        AF(arg0, s16, 6) = b.field_0;
        AF(arg0, s16, 0xA) = b.field_2;
        AF(arg0, s16, 0xE) = b.field_4;
        AF(arg0, s32, 0x14) = -(AF(arg0, s32, 0x14) >> 1);
    }
    AF(arg0, s32, 0x14) += 0x1C000;
}

void func_sc02_004_8017DC54(u8 *arg0) {
    D_sc02_004_80181804[AF(arg0, u16, 2)]();
}
