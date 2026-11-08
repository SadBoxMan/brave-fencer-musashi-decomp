#include "common.h"
#include "gte.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc02_015_8017BE9C(void) {
}

void func_sc02_015_8017BEA4(void) {
}

void func_sc02_015_8017BEAC(void) {
}

void func_sc02_015_8017BEB4(void) {
}

typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_4;
typedef struct { s16 field_0[6]; } struct_C_3;
extern void (*D_sc02_015_80181C48[])();
extern s32 func_800D222C();
extern void func_8001CF30();
extern void func_80146C3C();
extern s32 func_80146A6C();
extern void func_800D20C0();
extern void func_800D23D0();
extern u8 D_sc02_015_80181C30;
extern void (*D_sc02_015_80181C50[])();
extern u8 D_sc02_015_80181C3C;
extern void (*D_sc02_015_80181CA8[])();
typedef struct { s16 field_0, field_2; } struct_4_2;
typedef struct { struct_4_2 field_0; s16 field_4; s16 field_6; struct_4_2 field_8; s32 field_C; s32 field_10; s32 field_14; s32 field_18; } struct_1C;
typedef struct { s32 field_0, field_4, field_8; } struct_C_4;
void func_sc02_015_8017D418(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc02_015_80181CB0[])();
void func_sc02_015_8017D440(void);
extern void func_800D1EBC();
extern void (*D_sc02_015_80181CBC[])();
extern u8 D_sc02_015_80181CC8;
extern void func_8016EE40();
extern u8 D_sc02_015_80181CD4;
extern void func_sc02_015_8017D500();
extern void (*D_sc02_015_80181CE8[])();
extern void (*D_sc02_015_80181D80[])();
extern void (*D_sc02_015_80181D88[])();
extern void func_8012AD50();
extern void (*D_sc02_015_80181D94[])();
extern void (*D_sc02_015_80181DB4[])();
extern void (*D_sc02_015_80181E64[])();

void func_sc02_015_8017BEBC(u8 *arg0) {
    D_sc02_015_80181C48[AF(arg0, u16, 2)]();
}

void func_sc02_015_8017BEF8(u8 *a) {
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
    o = func_800D222C(a, &D_sc02_015_80181C30, 0xFD);
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

void func_sc02_015_8017C0BC(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
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

void func_sc02_015_8017C150(u8 *arg0) {
    D_sc02_015_80181C50[AF(arg0, u16, 2)]();
}

void func_sc02_015_8017C18C(s32 arg0) {
    s32 pad[12];
    s32 temp_v0;

    temp_v0 = func_800D222C(arg0, (s32) &D_sc02_015_80181C3C, 0x18);
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

void func_sc02_015_8017C230(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
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

extern u8 D_sc02_015_80190330;
extern void func_8001CD50();
extern void func_800233CC();
extern void func_801292C8();

extern s32 func_80178970();
extern void func_80178D18();
extern u8 D_sc02_015_80181DBC;
extern u8 D_sc02_015_8018B074;
extern void func_8012E8E0();

extern s32 D_sc02_015_80181D7C[];
extern s32 func_8012C194();
extern void func_8001CEC0();
extern void func_80015978();
extern void func_sc02_015_8017D878();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();
extern void func_800D0C74();
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
extern s32 D_sc02_015_80190618;
extern s16 D_80126B5E;
extern s32 D_80126B9C;
extern void func_sc02_015_8017E034();
extern u8 D_sc02_015_8018D924;
extern s32 func_80029504();
extern void func_8012CAE4();
extern s32 func_8012C1B8();
extern void func_8001C214();

typedef struct { s16 field_0[3][3]; s16 field_12; s32 field_14[3]; } struct_20_3;
typedef struct { u32 field_0; u32 field_4; u32 field_8; u32 field_C; u32 *field_10; } struct_14_2;
typedef struct { s32 field_0; s32 field_4; s32 field_8; s32 field_C; s32 field_10; s32 field_14; s32 field_18; } struct_1C_2;
extern u8 *D_800A5E60;
extern u16 D_800B9A02;
extern u32 D_800A6610[2][0x1000];

void func_sc02_015_8017C294(u8 *obj) {
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

void func_sc02_015_8017D174(u8 *arg0) {
    D_sc02_015_80181CA8[AF(arg0, u8, 0x15)]();
}

s32 func_sc02_015_8017D1B0(u8 *arg0) {
    func_sc02_015_8017D418();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc02_015_8017D1F4(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc02_015_8017D218(u8 *arg0) {
    D_sc02_015_80181CB0[AF(arg0, u8, 0x15)]();
}

s32 func_sc02_015_8017D254(u8 *arg0) {
    func_sc02_015_8017D440();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc02_015_8017D294(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_8002D4C8(0x1C, 0);
        func_8001BFD0();
        func_8002D4C8(0x1D, 0);
        func_800D0C48(1);
        func_8002D4C8(4, 0x574);
        func_8002D4C8(0x20, 0);
        func_800D1E28();
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

void func_sc02_015_8017D328(void) {
    func_800D1EBC();
}

void func_sc02_015_8017D348(u8 *arg0) {
    D_sc02_015_80181CBC[AF(arg0, u8, 0x15)]();
}

s32 func_sc02_015_8017D384(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_8002D4C8(0x1C, 0);
        func_8001BFD0();
        func_8002D4C8(0x1D, 0);
        func_800D0C74(1);
        func_8002D4C8(4, 0x574);
        func_8002D4C8(0x20, 0);
        func_800D1E28();
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

void func_sc02_015_8017D418(void) {
    func_8016EE40((s32) &D_sc02_015_80181CC8, 0x01000000);
}

void func_sc02_015_8017D440(void) {
    func_8016EE40((s32) &D_sc02_015_80181CD4, 0x01000000);
}

void func_sc02_015_8017D468(void) {
    D_80126954 = 0x12C;
    D_8012695C = 0x384;
    D_80126968 = 0x155;
    D_8012696A = 0x800;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc02_015_8017D500, 0);
    func_8012A094((s32) &D_80126948);
    func_sc02_015_8017D500((s32) &D_80126948);
}

void func_sc02_015_8017D500(s32 arg0) {
    D_sc02_015_80181CE8[AF(arg0, u8, 4)]();
}

typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_4;
typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_5;
extern s32 func_80012C6C();
extern s32 func_80012ABC();
extern void func_8012F14C();
extern void RotMatrixZYX();
extern u8 D_80126B58;
extern s32 func_80148800();
extern s16 D_sc02_015_80181CEC[];

typedef struct { u8 field_0, field_1, field_2, field_3; } struct_4_3;
typedef struct { unsigned field_0_b0 : 31; unsigned field_3_b7 : 1; } struct_4_4;
extern u16 D_800B99DA;
extern u8 D_sc02_015_80181D00;
extern u8 D_sc02_015_80181D1C;
extern u8 D_sc02_015_80181D38;
extern u8 D_sc02_015_80181D54;
extern s32 func_8012EFB8();
extern void func_80015954();

extern s32 func_8012BEE8();
extern s32 rand();
extern s32 func_801290DC();
extern void func_8012BF4C();

typedef struct { struct_8_5 field_0[3]; struct_4_3 field_18[3]; s32 field_24; } struct_28;
extern s32 func_8012EF34();
extern void func_80017D98();
extern s32 func_8001739C();
extern struct_8_4 D_sc02_015_80181D9C;
extern struct_8_4 D_sc02_015_80181DA4;
extern struct_8_4 D_sc02_015_80181DAC;
extern s16 D_sc02_015_80181DA0;
extern s16 D_sc02_015_80181DA8;
extern s16 D_sc02_015_80181DB0;

extern void func_80178B18();
extern u8 D_sc02_015_80181DD4;

extern u16 D_80126940;
extern s16 D_80126942;
extern s16 D_80126944;
void func_sc02_015_8017D5C8(u8 *p, s16 *q);

void func_sc02_015_8017D53C(u8 *o) {
    struct_8_4 v;
    s16 y;
    s16 z;

    v.field_0 = D_80126940;
    y = D_80126942;
    if (y < -0x570) {
        v.field_2 = -0x570;
    } else if (y > -0x3C0) {
        v.field_2 = -0x3C0;
    } else {
        v.field_2 = y;
    }
    z = D_80126944;
    if (z < -0x60) {
        v.field_4 = -0x60;
    } else {
        v.field_4 = z;
    }
    func_sc02_015_8017D5C8(o, &v.field_0);
}

void func_sc02_015_8017D5C8(u8 *p, s16 *q) {
    struct_20_4 m;
    struct_8_5 v;
    struct_8_5 o;
    u8 t;

    if (func_80148800(&D_80126B58) & 3) {
        t = (AF(p, u8, 5) + 1) & 1;
        AF(p, u8, 5) = t;
        AF(p, s32, 0x14) = D_sc02_015_80181CEC[t];
    }
    AF(p, s32, 8) = (s16) func_80012C6C(AF(p, s16, 8), AF(p, s16, 0xC), 4);
    AF(p, s32, 0x10) = (s16) func_80012C6C(AF(p, s16, 0x10), AF(p, s16, 0x14), 4);
    AF(p, s16, 0x18) = func_80012ABC(AF(p, s16, 0x18), AF(p, s16, 0x20), 4);
    AF(p, s16, 0x1A) = func_80012ABC(AF(p, s16, 0x1A), AF(p, s16, 0x22), 4);
    AF(p, s16, 0x1C) = func_80012ABC(AF(p, s16, 0x1C), AF(p, s16, 0x24), 4);
    AF(p, s16, 0x28) = func_80012C6C(AF(p, s16, 0x28), AF(p, s16, 0x2E), 0x10);
    AF(p, s16, 0x2A) = func_80012C6C(AF(p, s16, 0x2A), AF(p, s16, 0x30), 0x10);
    AF(p, s16, 0x2C) = func_80012C6C(AF(p, s16, 0x2C), AF(p, s16, 0x32), 0x10);
    AF(p, s32, 0x48) = AF(p, s16, 0x28) + q[0];
    AF(p, s32, 0x4C) = AF(p, s16, 0x2A) + q[1];
    AF(p, s32, 0x50) = AF(p, s16, 0x2C) + q[2];
    RotMatrixZYX(p + 0x18, &m);
    m.field_14[0] = AF(p, s16, 0x28) + q[0];
    m.field_14[1] = AF(p, s16, 0x2A) + q[1];
    m.field_14[2] = AF(p, s16, 0x2C) + q[2];
    v.field_0 = 0;
    v.field_2 = 0;
    v.field_4 = AF(p, s32, 0x10);
    func_8012F14C(&m, &v, &o);
    AF(p, s32, 0x3C) = o.field_0;
    AF(p, s32, 0x40) = o.field_2;
    AF(p, s32, 0x44) = o.field_4;
}

void func_sc02_015_8017D7A4(u8 *arg0) {
    D_sc02_015_80181D80[AF(arg0, u16, 2)]();
}

void func_sc02_015_8017D7E0(u8 *arg0) {
    s32 temp_s2;
    s32 temp_v0;

    temp_s2 = D_sc02_015_80181D7C[AF(arg0, s16, 0x70)];
    temp_v0 = func_8012C194();
    if (temp_v0 != 0) {
        AF(arg0, s32, 0x20) = temp_v0;
        func_8001CEC0(temp_v0, temp_s2);
        AF(temp_v0, s16, 0x2E) = 0;
        AF(temp_v0, s16, 0x30) = 0;
        AF(temp_v0, s16, 0x2C) = 1;
        func_80015978((s32) (arg0 + 4), (s32) (arg0 + 0xFC));
        func_sc02_015_8017D878((s32) arg0);
        func_8012AD50((s32) arg0);
    }
}

void func_sc02_015_8017D878(u8 *arg0) {
    s32 sp10[2];
    struct_4_3 c;
    u8 *o;
    s32 k;

    o = AF(arg0, u8 *, 0x20);
    if (func_8012EFB8(arg0 + 0xFC, sp10) & ~0x1000) {
        AF(o, struct_4_4, 4).field_3_b7 = 1;
    } else {
        AF(o, struct_4_4, 4).field_3_b7 = 0;
    }
    func_80015954(sp10, arg0 + 4);
    k = (D_800B99DA & 1) * 4;
    c.field_0 = k + 0x40; c.field_1 = k + 0x40;
    c.field_2 = k + 0x60;
    *(struct_4_3 *) &D_sc02_015_80181D00 = c;
    *(struct_4_3 *) &D_sc02_015_80181D1C = c;
    *(struct_4_3 *) &D_sc02_015_80181D38 = c;
    *(struct_4_3 *) &D_sc02_015_80181D54 = c;
}

void func_sc02_015_8017D988(u8 *arg0) {
    D_sc02_015_80181D88[AF(arg0, u16, 2)]();
}

void func_sc02_015_8017D9C4(s32 arg0, s32 arg1) {
    func_8012AD50(arg0, arg1);
}

void func_sc02_015_8017D9E4(u8 *o) {
    struct_8_4 v;
    s16 r;
    s16 d;
    u8 *p;

    if (func_8012BEE8(o) != 0) {
        func_80015978(o + 4, &v);
        if (AF(o, s32, 0xDC) != 0) {
            r = rand() % 352;
            d = r;
            if (r & 1) {
                d = -r;
            }
            v.field_0 += d;
            r = rand() % 256;
            d = r;
            if (r & 1) {
                d = -r;
            }
            v.field_4 += d;
        }
        p = (u8 *)func_801290DC(0x27, &v);
        if (p != 0) {
            func_8012BF4C(o, (rand() & 0x7F) + 0x60);
            AF(p, s16, 0x2E) = AF(o, u16, 0xFC);
        }
    }
}

void func_sc02_015_8017DB0C(u8 *arg0) {
    D_sc02_015_80181D94[AF(arg0, u16, 2)]();
}

void func_sc02_015_8017DB48(u8 *arg0) {
    AF(arg0, s32, 0x14) = 0x20000;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc02_015_8017DC24(u8 *o);
extern void func_8012931C();
extern s32 D_sc02_015_80181D90;

void func_sc02_015_8017DB60(u8 *o) {
    struct_8_4 v;
    u8 *p;

    func_sc02_015_8017DC24(o);
    /* a velocity add with zero x / z (the original reloads and stores 0x10 and 0x18) */
    AF(o, s32, 0x10) += 0;
    AF(o, s32, 0x14) += 0xC000;
    AF(o, s32, 0x18) += 0;
    func_8012931C(o);
    if (AF(o, s16, 0x2E) < AF(o, s16, 0xA)) {
        AF(o, s16, 0xA) = AF(o, s16, 0x2E);
        func_80015978(o + 4, &v);
        p = (u8 *)func_801290DC(0x28, &v);
        if (p != 0) {
            AF(p, s32, 0x2C) = D_sc02_015_80181D90++ & 7;
        }
        func_8002D4C8(0x572, 0);
        func_801292C8(o);
    }
}

void func_sc02_015_8017DC24(u8 *o) {
    struct_28 t;
    struct_8_4 pos;
    struct_8_4 scr;
    struct_8_4 s0, s1, s2;
    u8 unused[8];
    struct_20_4 m;
    s32 otz;
    s32 flag;

    func_80015978(o + 4, &pos);
    if (func_8012EF34(&pos, &scr) & ~0x1000) {
        return;
    }
    gte_stszotz(&otz);
    D_sc02_015_80181DB0 = D_sc02_015_80181DA8 = D_sc02_015_80181DA0 = scr.field_4;
    func_80017D98(&m);
    m.field_14[0] = m.field_14[1] = m.field_14[2] = 0;
    gte_SetRotMatrix(&m);
    gte_SetTransMatrix(&m);
    gte_ldv3(&D_sc02_015_80181D9C, &D_sc02_015_80181DA4, &D_sc02_015_80181DAC);
    gte_rtpt();
    gte_stsxy3(&s0, &s1, &s2);
    gte_stflg(&flag);
    if (flag < 0) {
        return;
    }
    t.field_18[0].field_0 = t.field_18[0].field_1 = t.field_18[0].field_2 = 0xC0;
    t.field_18[1].field_0 = t.field_18[1].field_1 = 0x20;
    t.field_18[1].field_2 = 0x40;
    t.field_18[2].field_0 = t.field_18[2].field_1 = 0x20;
    t.field_18[2].field_2 = 0x40;
    t.field_24 = 0x50000000;
    t.field_0[0].field_0 = s0.field_0 + scr.field_0;
    t.field_0[0].field_2 = s0.field_2 + scr.field_2;
    t.field_0[1].field_0 = s1.field_0 + scr.field_0;
    t.field_0[1].field_2 = s1.field_2 + scr.field_2;
    t.field_0[2].field_0 = s2.field_0 + scr.field_0;
    t.field_0[2].field_2 = s2.field_2 + scr.field_2;
    t.field_0[0].field_4 = otz;
    func_8001739C(&t);
    t.field_0[1].field_2 = -s1.field_2 + scr.field_2;
    func_8001739C(&t);
    t.field_0[2].field_0 = -s2.field_0 + scr.field_0;
    func_8001739C(&t);
    t.field_0[1].field_2 = s1.field_2 + scr.field_2;
    func_8001739C(&t);
}

void func_sc02_015_8017DE44(u8 *arg0) {
    D_sc02_015_80181DB4[AF(arg0, u16, 2)]();
}

void func_sc02_015_8017DE80(u8 *arg0) {
    s32 temp_s1;
    void *temp_s0;

    temp_s1 = AF(arg0, s32, 0x20);
    temp_s0 = (AF(arg0, s32, 0x2C) << 6) + &D_sc02_015_80190330;
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

void func_sc02_015_8017DF44(u8 *arg0) {
    s16 temp_v0;
    s32 temp_a1;
    s32 var_v0;
    s8 temp_v0_3;
    u32 temp_v0_2;
    void *temp_a2;
    void *temp_v1;

    temp_a1 = AF(arg0, s32, 0x1C) - 1;
    temp_a2 = (AF(arg0, s32, 0x2C) << 6) + &D_sc02_015_80190330;
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

void func_sc02_015_8017DFF8(void) {
    if (D_sc02_015_80190618 == 0) {
        func_8002D4C8(0x1F, 0);
        D_sc02_015_80190618 = 1;
    }
}

void func_sc02_015_8017E034(arg0)
    u8 *arg0;
{
    AF(arg0, u16, 2) = 2;
    func_80178B18((s32) arg0, (s32) &D_sc02_015_80181DD4);
}

void func_sc02_015_8017E060(u8 *arg0) {
    D_sc02_015_80181E64[AF(arg0, u16, 2)]();
}

void func_sc02_015_8017E09C(void) {
    if ((D_80126B9C & 0x08000000) && (D_80126B5E < 0x90)) {
        func_sc02_015_8017E034();
    }
}

void func_sc02_015_8017E0E8(s32 arg0, s32 arg1) {
    if (func_80178970(arg0, arg1) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 1;
        func_8012E8E0(arg0, (s32) &D_sc02_015_80181DBC);
        func_8012A828(arg0, (s32) &D_sc02_015_8018B074);
    }
}

void func_sc02_015_8017E148(s32 arg0) {
    s32 temp_v0;

    if ((u32) (func_80029504() - 0xE6) >= 0xAU) {
        func_8012CAE4(arg0);
        return;
    }
    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
    }
    func_8001C214(AF(arg0, s32, 0x20), (s32) &D_sc02_015_8018D924);
    AF(arg0, s16, 2) = 1;
    func_8012E8E0(arg0, (s32) &D_sc02_015_80181DBC);
    func_8012A828(arg0, (s32) &D_sc02_015_8018B074);
    AF(AF(arg0, void *, 0x68), s16, 0xC) = 0x7FFF;
}

s32 func_sc02_015_8017E1F0(void) {
    return 0x19;
}
