#include "common.h"
#include "gte.h"
#include "psyq.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc03_092_8017BE9C(void) {
}

void func_sc03_092_8017BEA4(void) {
}

void func_sc03_092_8017BEAC(void) {
}

void func_sc03_092_8017BEB4(void) {
}

typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_4;
typedef struct { s16 field_0[6]; } struct_C_3;
typedef struct { s16 field_0, field_2; } struct_4_2;
typedef struct { struct_4_2 field_0; s16 field_4; s16 field_6; struct_4_2 field_8; s32 field_C; s32 field_10; s32 field_14; s32 field_18; } struct_1C;
typedef struct { s32 field_0, field_4, field_8; } struct_C_4;
extern void func_80146A6C();
extern void (*D_sc03_092_80188718[])();
extern void func_80147324();
extern void func_sc03_092_8017C218();
extern void func_8014708C();
extern void func_801472C8();
extern void func_80146C3C();
extern void (*D_sc03_092_8018872C[])();
extern void func_80147084();
extern void func_801472B4();
extern void (*D_sc03_092_80188740[])();
extern void func_800D22E4();
extern void func_sc03_092_8017C910();
extern void (*D_sc03_092_80188760[])();
extern void (*D_sc03_092_80188768[])();
extern u8 D_sc03_092_80188754;
extern s32 func_800D222C();
extern void func_8001CF30();
extern void (*D_sc03_092_80188918[])();
void func_sc03_092_8017DCC8(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc03_092_80188920[])();
void func_sc03_092_8017DE4C(void);
extern void (*D_sc03_092_80188928[])();
void func_sc03_092_8017DCF0(void);
extern void func_800D1EBC();
extern void (*D_sc03_092_80188934[])();
void func_sc03_092_8017DE24(void);
extern u8 D_sc03_092_8018893C;
extern void func_8016EE40();
extern u8 D_sc03_092_80188940;
extern void (*D_sc03_092_80188954[])();
extern u8 D_sc03_092_8018894C;
extern u8 D_sc03_092_801889A4;
extern void func_sc03_092_8017E008();
extern void (*D_sc03_092_801889B4[])();
extern void (*D_sc03_092_80188C70[])();
extern void func_sc03_092_8017E6A0();
extern void (*D_sc03_092_80188E48[])();
extern void (*D_sc03_092_80188EE8[])();
extern void (*D_sc03_092_801893A0[])();
extern void (*D_sc03_092_8018944C[])();
extern void (*D_sc03_092_80189488[])();
extern void func_sc03_092_80180A10();
extern void (*D_sc03_092_80189518[])();
extern void func_8001C214();
extern s32 func_8012C1B8();
extern void func_8012CAE4();
extern u8 D_sc03_092_80189508;
extern u8 D_sc03_092_801894F8;
extern u8 D_sc03_092_801894E8;
extern u8 D_sc03_092_801894D8;
extern s32 func_80029504();
extern s32 func_sc03_092_80180AE0();
extern void (*D_sc03_092_801AC67C[])();
extern void (*D_sc03_092_801AD7C8[])();
extern void (*D_sc03_092_801AD87C[])();
extern void (*D_sc03_092_801AFEA0[])();
extern void (*D_sc03_092_801B01E8[])();
extern s32 func_8012C354();
extern s32 func_801788B8();
extern u8 D_sc03_092_8018502C;
extern s32 func_80029178();
extern u8 D_sc03_092_801AFED8;
extern s32 * func_sc03_092_801837D4();
extern s32 D_sc03_092_801AFF40[];
extern s32 func_8012C658();
extern void func_80029124();
extern void func_80178CBC();
extern s32 D_sc03_092_801B010C;
extern s32 D_sc03_092_801B0110;
extern s32 D_sc03_092_801B0124;
extern s32 D_sc03_092_801B0138;
extern s32 D_sc03_092_801B01A4;
extern s32 D_sc03_092_801B0088[];
extern s32 D_sc03_092_801B0004[];
extern void func_80178D18();
extern void func_8002AC00();
extern void func_8012C218();
extern s32 func_801789AC();
extern void func_80029514();
extern void func_80145EE8();
extern s32 func_sc03_092_8018357C();
extern u8 D_80126B58;
extern void func_8014ADA8();
extern s32 func_80174764();
extern void (*D_sc03_092_801B0210[])();
extern u8 D_sc03_092_801AFF0C;
extern u8 D_sc03_092_801AFB90;
extern u8 D_sc03_092_801AFDB0;
extern void func_8002D4C8();
extern u8 D_sc03_092_801AFBA0;
extern u8 D_sc03_092_801AFCA8;
extern void (*D_sc03_092_801B033C[])();
extern u8 D_sc03_092_801B02EC;
extern void (*D_sc03_092_801B0404[])();

void func_sc03_092_8017BEBC(s32 arg0) {
    func_80146A6C(0x19, arg0, 0, 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 1);
}

void func_sc03_092_8017BEF8(u8 *arg0) {
    D_sc03_092_80188718[AF(arg0, u16, 2)]();
}

void func_sc03_092_8017BF34(u8 *arg0) {
    if (AF(arg0, s32, 0x30) == 0) {
        func_80147324((s32) AF(arg0, u16, 0x2E));
    }
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_092_8017BF84(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0xC) {
        AF(arg0, u16, 0x12) = (u16) (AF(arg0, u16, 0x12) + 0xE0);
    } else {
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc03_092_8017C218((s32) arg0);
}

void func_sc03_092_8017BFE0(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0x20) {
        AF(arg0, u16, 0x2A) = (u16) (AF(arg0, u16, 0x2A) - 0x10);
    } else {
        if (AF(arg0, s32, 0x30) == 0) {
            func_80147324((s32) AF(arg0, u16, 0x2C));
        }
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc03_092_8017C218((s32) arg0);
}

void func_sc03_092_8017C064(u8 *arg0) {
    s16 temp_v0_4;
    s16 var_s1;
    s32 temp_v0;
    u16 temp_v0_2;
    u16 temp_v0_3;
    void *temp_s0;
    void *temp_v0_5;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;

    temp_v0 = AF(arg0, s32, 0x1C);
    temp_s0 = AF(arg0, void *, 0x34);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0x20) {
        if (AF(arg0, s32, 0x30) == 0) {
            temp_v0_2 = AF(temp_s0, u16, 0x64) - 0x80;
            AF(temp_s0, u16, 0x64) = temp_v0_2;
            AF(temp_s0, u16, 0x60) = temp_v0_2;
            AF(temp_s0, u16, 0x62) = (u16) (AF(temp_s0, u16, 0x62) + 0x100);
        } else {
            temp_v1 = AF(temp_s0, void *, 0x20);
            AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
            temp_v1_2 = AF(temp_s0, void *, 0x20);
            temp_v0_3 = AF(temp_v1_2, u16, 0x1C) - 0x80;
            AF(temp_v1_2, u16, 0x1C) = temp_v0_3;
            AF(temp_v1_2, u16, 0x18) = temp_v0_3;
            temp_v1_3 = AF(temp_s0, void *, 0x20);
            AF(temp_v1_3, u16, 0x1A) = (u16) (AF(temp_v1_3, u16, 0x1A) + 0x100);
        }
        var_s1 = 0;
        do {
            func_80146A6C(0x1B, (s32) temp_s0, 0, 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 0);
            temp_v0_4 = var_s1 + 1;
            var_s1 = temp_v0_4;
        } while (temp_v0_4 < 3);
    } else {
        if (AF(arg0, s32, 0x30) == 0) {
            func_8014708C((s32) temp_s0);
            func_801472C8((s32) temp_s0);
        } else {
            temp_v0_5 = AF(temp_s0, void *, 0x20);
            AF(temp_v0_5, s32, 4) = (s32) (AF(temp_v0_5, s32, 4) | 0x80000000);
        }
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc03_092_8017C218((s32) arg0);
}

void func_sc03_092_8017C1CC(u8 *arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x12) - 0x100;
    AF(arg0, u16, 0x12) = temp_v0;
    if ((temp_v0 << 0x10) > 0) {
        func_sc03_092_8017C218((s32) arg0);
        return;
    }
    func_80146C3C((s32) arg0);
}

extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

extern s32 func_8012AD44();
extern s32 func_sc03_092_8017F088();
extern s32 D_sc03_092_801B2E70;
extern s32 func_8012BEE8();
extern void func_sc03_092_8018052C();
extern void (*D_sc03_092_801AC620[])();
extern void func_sc03_092_80180EC8();
extern s32 D_sc03_092_801AC5D8;
extern u8 D_sc03_092_801AD2DC;
extern u8 D_sc03_092_801AD2FC;
extern u8 D_sc03_092_801AD3C0;
extern s32 func_8012CBCC();
extern void func_8012E688();
extern s32 func_8012CBA4();
extern void func_8012DFD4();
extern u8 D_sc03_092_801B023C;
extern s32 * func_sc03_092_80183C04();
extern s32 D_sc03_092_801B2F2C;
extern void func_800296F8();
extern void func_sc03_092_80184040();
extern u8 D_sc03_092_801B0368;
extern void func_sc03_092_80184370();
extern s32 func_sc03_092_8018412C();
extern s32 func_sc03_092_80183FB0();
extern s32 func_80178970();
extern void func_800D1724();

extern void func_80171990();
extern s32 func_8014C050();
extern s32 func_80171928();
extern void func_8014BB0C();
extern void func_8014BDC8();

extern s32 func_sc03_092_8017F49C();

extern void func_80146994();
extern u8 D_sc03_092_801889F0;
extern s32 D_sc03_092_80188C58[];
extern s32 func_8012BE54();
extern u8 D_sc03_092_80188E00;
extern void func_80178B18();
extern s32 func_sc03_092_8017E754();
extern void func_8001C2C4();
s32 func_sc03_092_8017F29C(s32 arg0);
extern void func_sc03_092_8018074C();
extern s32 func_sc03_092_8017F4BC();
extern s16 D_sc03_092_801B3010;
extern u8 D_sc03_092_80188EF8;
extern void func_8012E8A8();
extern s32 func_8012E8E0();
extern s32 func_8012E57C();
extern void func_8012B200();
extern void func_80172710();
extern s32 func_sc03_092_8017F87C();
extern s32 func_8012BD14();
extern void func_80178BF8();
extern s32 D_80126B9C;
extern u8 D_sc03_092_801893D4;
extern void func_sc03_092_801804C0();

extern u8 D_sc03_092_801893B4;
extern void func_8012E88C();
extern s32 D_sc03_092_80189434[];
extern u16 D_sc03_092_80189444[];
extern u8 D_sc03_092_80189458;
extern u8 D_sc03_092_80189460;
extern s32 D_sc03_092_80189480[];


extern void func_8012B23C();
extern void func_8001CA1C();
extern struct_8_4 D_sc03_092_801AD698[];
extern u8 D_sc03_092_801AD3FC;
extern u8 D_sc03_092_801AD4BC;
extern u8 D_sc03_092_801AD544;
extern u8 D_sc03_092_801AD604;
extern u8 D_sc03_092_801AD6E8;
extern u8 D_sc03_092_801AD70C;
extern u8 D_sc03_092_801AD6F8;
extern u8 D_sc03_092_801AD704;


extern s32 D_sc03_092_801B03F0[];

extern void func_8012B2CC();

void func_sc03_092_8017DD9C();

typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_5;
typedef struct { s16 field_0[3][3]; s16 field_12; s32 field_14[3]; } struct_20_3;
typedef struct { s16 field_0, field_2; s32 field_4; } struct_8_6;
extern s32 ReadGeomScreen();
extern void GsGetLs();
extern void GsSetLsMatrix();
extern void ReadRotMatrix();
extern void PushMatrix();
extern void PopMatrix();
extern void TransposeMatrix();
extern void ApplyMatrixSV();
extern u8 *D_800A5E60;
extern u32 D_800A6610[];
extern u16 D_800B9A02[];

typedef struct { s16 field_0[3][3]; s16 field_12; s32 field_14[3]; } struct_20_4;
typedef struct { u32 field_0; u32 field_4; u32 field_8; u32 field_C; u32 *field_10; } struct_14_2;
typedef struct { s32 field_0; s32 field_4; s32 field_8; s32 field_C; s32 field_10; s32 field_14; s32 field_18; } struct_1C_2;
typedef struct { u16 field_0, field_2, field_4, field_6; } struct_8_7;
typedef void (*type_2)();
extern u8 D_801202A0;
extern type_2 D_sc03_092_801AD3F4[];
extern s32 func_8012B6D4();
extern s32 func_80135888();

typedef struct { u8 field_0, field_1, field_2, field_3; } struct_4_3;
typedef struct { struct_8_7 field_0; struct_8_7 field_8; struct_4_3 field_10; struct_4_3 field_14; s32 field_18; } struct_1C_3;
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_5;
typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_8;
typedef struct { struct_8_8 field_0[4]; struct_4_3 field_20[4]; s32 field_30; } struct_34_2;
extern s8 D_sc03_092_801886EC[];
extern u16 D_800B99DA;
extern void func_80017DC4();
extern void func_80017E68();
extern void func_80017758();
extern struct_20_5 D_800AE620;
extern void func_80016A5C();
typedef struct { u8 field_0[0x18]; struct_20_5 field_18; } struct_38;
typedef struct { s32 field_0[4]; } struct_10;
typedef struct { struct_10 field_0, field_10, field_20; } struct_30_2;
extern s16 D_sc03_092_801AFDC0;
extern s16 D_sc03_092_801AFDC2;
extern s16 D_sc03_092_801AFDC4;
extern struct_30_2 D_sc03_092_801AFDC8;
extern s16 D_sc03_092_801AFDF8;
extern s16 D_sc03_092_801AFDFA;
extern s16 D_sc03_092_801AFDFC;
extern struct_30_2 D_sc03_092_801AFE00;
extern s16 D_sc03_092_801AFE30;
extern s16 D_sc03_092_801AFE32;
extern s16 D_sc03_092_801AFE34;
extern struct_30_2 D_sc03_092_801AFE38;
extern s16 D_sc03_092_801AFE68;
extern s16 D_sc03_092_801AFE6A;
extern s16 D_sc03_092_801AFE6C;
extern struct_30_2 D_sc03_092_801AFE70;
extern struct_30_2 D_800A5E88;
extern void func_8002850C();
extern void func_80028620();

void func_sc03_092_8017C218(u8 *arg0) {
    struct_8_8 r;
    u8 gap[8];
    struct_34_2 q;
    struct_20_5 m;
    u8 unused[0x20];
    u8 *o;
    s8 *t;
    s16 i;
    u8 v;
    s16 k;

    o = AF(arg0, u8 *, 0x34);
    r.field_0 = r.field_2 = r.field_4 = AF(arg0, u16, 0x12);
    func_80017DC4(&r, &m);
    q.field_0[1].field_0 = q.field_0[1].field_2 = q.field_0[1].field_4 = 0;
    q.field_0[0].field_2 = q.field_0[2].field_2 = q.field_0[3].field_2 = 0;
    q.field_20[1].field_0 = q.field_20[1].field_1 = q.field_20[1].field_2 = 0;
    v = (AF(arg0, s16, 0x12) >> 5) + 0x20;
    q.field_20[0].field_0 = q.field_20[0].field_1 = q.field_20[0].field_2 = q.field_20[2].field_0 = q.field_20[2].field_1 = q.field_20[2].field_2 = q.field_20[3].field_0 = q.field_20[3].field_1 = q.field_20[3].field_2 = v;
    if (D_800B99DA & 1) {
        q.field_20[0].field_0 = q.field_20[2].field_0 = q.field_20[3].field_0 = v >> 1;
    }
    q.field_30 = 0x50000000;
    r.field_0 = AF(o, u16, 6);
    r.field_2 = AF(o, u16, 0xA) - 8;
    r.field_4 = AF(o, u16, 0xE);
    func_80017E68(&r, &m);
    t = D_sc03_092_801886EC;
    for (i = 0; i < 10; i++) {
        q.field_0[0].field_0 = *t++;
        q.field_0[0].field_4 = *t++;
        q.field_0[2].field_0 = *t++;
        q.field_0[2].field_4 = *t++;
        q.field_0[3].field_0 = *t++;
        q.field_0[3].field_4 = *t++;
        t -= 2;
        func_80017758(&q, &m);
    }
    t = D_sc03_092_801886EC;
    q.field_20[0].field_0 = q.field_20[0].field_1 = q.field_20[0].field_2 = 0;
    for (i = 0; i < 20; i++) {
        k = *t++;
        q.field_0[2].field_0 = k;
        q.field_0[0].field_0 = k << 1;
        k = *t++;
        q.field_0[2].field_4 = k;
        q.field_0[0].field_4 = k << 1;
        k = *t++;
        q.field_0[3].field_0 = k;
        q.field_0[1].field_0 = k << 1;
        k = *t++;
        q.field_0[3].field_4 = k;
        q.field_0[1].field_4 = k << 1;
        t -= 2;
        func_80017758(&q, &m);
    }
    if (AF(arg0, s16, 0x2A) != 0) {
        t = D_sc03_092_801886EC;
        for (i = 0; i < 20; i++) {
            q.field_0[0].field_0 = q.field_0[2].field_0 = *t++;
            q.field_0[0].field_4 = q.field_0[2].field_4 = *t++;
            q.field_0[1].field_0 = q.field_0[3].field_0 = *t++;
            q.field_0[1].field_4 = q.field_0[3].field_4 = *t++;
            q.field_0[0].field_2 = q.field_0[1].field_2 = AF(arg0, u16, 0x2A);
            t -= 2;
            func_80017758(&q, &m);
        }
    }
}

void func_sc03_092_8017C524(u8 *arg0) {
    D_sc03_092_8018872C[AF(arg0, u16, 2)]();
}

void func_sc03_092_8017C560(u8 *arg0) {
    func_80147324((s32) AF(arg0, u16, 0x2E));
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_092_8017C5A0(u8 *arg0) {
    s32 temp_v0;
    void *temp_v1;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    temp_v1 = AF(arg0, void *, 0x34);
    if (temp_v0 < 0xC) {
        AF(arg0, u16, 0x12) = (u16) (AF(arg0, u16, 0x12) + 0xE0);
    } else {
        AF(temp_v1, s16, 0x64) = 0;
        AF(temp_v1, s16, 0x60) = 0;
        AF(temp_v1, s16, 0x62) = 0x3000;
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc03_092_8017C218((s32) arg0);
}

void func_sc03_092_8017C610(u8 *arg0) {
    s32 temp_s1;
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    temp_s1 = AF(arg0, s32, 0x34);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0x20) {
        AF(arg0, u16, 0x2A) = (u16) (AF(arg0, u16, 0x2A) - 0x10);
    } else {
        func_80147324((s32) AF(arg0, u16, 0x2C));
        func_80147084(temp_s1);
        func_801472B4(temp_s1);
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc03_092_8017C218((s32) arg0);
}

void func_sc03_092_8017C69C(u8 *arg0) {
    s16 temp_v0_3;
    s16 var_s2;
    s32 temp_v0;
    u16 temp_v0_2;
    void *temp_s0;

    temp_v0 = AF(arg0, s32, 0x1C);
    temp_s0 = AF(arg0, void *, 0x34);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0x20) {
        var_s2 = 0;
        temp_v0_2 = AF(temp_s0, u16, 0x64) + 0x80;
        AF(temp_s0, u16, 0x64) = temp_v0_2;
        AF(temp_s0, u16, 0x60) = temp_v0_2;
        AF(temp_s0, u16, 0x62) = (u16) (AF(temp_s0, u16, 0x62) - 0x100);
        do {
            func_80146A6C(0x1B, (s32) temp_s0, 0, 0, /* extra? */ 0, /* extra? */ 1, /* extra? */ 0);
            temp_v0_3 = var_s2 + 1;
            var_s2 = temp_v0_3;
        } while (temp_v0_3 < 3);
    } else {
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc03_092_8017C218((s32) arg0);
}

void func_sc03_092_8017C770(u8 *arg0) {
    u16 temp_v0;
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x34);
    temp_v0 = AF(arg0, u16, 0x12) - 0x100;
    AF(arg0, u16, 0x12) = temp_v0;
    if ((temp_v0 << 0x10) > 0) {
        func_sc03_092_8017C218((s32) arg0);
        return;
    }
    AF(temp_v1, s16, 0x64) = 0x1000;
    AF(temp_v1, s16, 0x62) = 0x1000;
    AF(temp_v1, s16, 0x60) = 0x1000;
    func_80146C3C((s32) arg0);
}

void func_sc03_092_8017C7C4(u8 *arg0) {
    D_sc03_092_80188740[AF(arg0, u16, 2)]();
}

typedef struct { u8 field_0[0x34]; } struct_34_3;
extern s16 D_80126B96;
extern s32 func_8012DEB8();
extern s16 D_80126B62;
extern u16 D_sc03_092_801AD330[];
extern u16 D_sc03_092_801AD358[];
extern u16 D_sc03_092_801AD380[];
extern type_2 D_sc03_092_801AD3A8[];
extern void func_8002D59C();

typedef struct { u16 field_0[6]; } struct_C_5;
typedef struct { u16 field_0; s16 field_2; s16 field_4; s16 field_6; s32 field_8; s32 field_C; } struct_10_2;
typedef struct { s16 field_0, field_2, field_4, field_6; u8 field_8, field_9; s16 field_A; struct_10_2 field_C[16]; } struct_10C_2;
extern s32 func_8012CBF4();

extern void func_80143B6C();
typedef struct { s32 field_0, field_4, field_8, field_C; } struct_10_3;
typedef struct { u32 *field_0; u8 field_4[0x10]; } struct_14_3;
typedef struct { u8 field_0[0x14]; } struct_14_4;
typedef struct { unsigned field_0_b0 : 24; unsigned field_3_b0 : 8; } struct_4_4;
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
typedef struct { u32 field_0; u32 field_4; } struct_8_9;
typedef struct { u8 field_0[0x10]; struct_4_2 field_10[13]; } struct_44;
extern void func_sc03_092_8018478C();

typedef struct { struct_C_5 field_0[9]; } struct_6C;
typedef struct { s32 field_0, field_4, field_8, field_C; } struct_10_4;
typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_10;
typedef struct { s32 field_0, field_4, field_8, field_C; } struct_10_5;
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_6;
typedef struct { u8 field_0, field_1, field_2, field_3; } struct_4_5;
typedef struct { struct_8_10 field_0[4]; struct_4_5 field_20[4]; s32 field_30; } struct_34_4;
typedef struct { s32 field_0, field_4, field_8; } struct_C_6;
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_7;
extern void func_8001E094();
extern void func_8001E378();

typedef struct { u8 field_0, field_1, field_2, field_3; } struct_4_6;
typedef struct { u8 field_0[8]; } struct_8_11;
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_8;
typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_12;
extern void func_8012AD50();
extern u16 D_sc03_092_801AC610[];
extern u8 D_sc03_092_801AC600;
extern u8 D_sc03_092_801AC5F0;

typedef struct { s32 field_0; s32 field_4; } struct_8_13;
extern void func_80132784();
extern u8 *func_80132EF4();
extern struct_8_13 D_sc03_092_801B2EB0[];
extern struct_10 D_sc03_092_801AC62C[];

typedef struct { u32 field_0_b0 : 24; u32 field_3_b0 : 8; } struct_4_7;
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_9;
typedef struct { struct_4_7 field_0; u8 field_4, field_5, field_6, field_7; s16 field_8, field_A, field_C, field_E, field_10, field_12, field_14, field_16; } struct_18;
typedef union { s32 m0; struct_4_2 m1; } union_4_2;
typedef struct { unsigned field_0_b0 : 31; unsigned field_3_b7 : 1; } struct_4_8;
typedef struct { s16 field_0, field_2, field_4, field_6, field_8; u16 field_A; s16 field_C, field_E; s32 field_10; } struct_14_5;
extern void *D_80126B78;
extern struct_8_4 D_sc03_092_801B0358[];
extern s32 func_8012BDBC();

typedef struct { s16 field_0, field_2, field_4; } struct_6;
typedef struct { s32 field_0[4]; } struct_10_6;
typedef struct { s16 field_0, field_2; s32 field_4; } struct_8_14;
typedef struct { struct_8_4 field_0[3]; struct_4_3 field_18[3]; s32 field_24; } struct_28_2;
extern u16 D_sc03_092_80189498[];
extern u8 D_sc03_092_801894B8;
extern u32 D_sc03_092_801B2E88;
extern u16 D_sc03_092_801B2E8C[];
extern void func_800183E0();
typedef struct { u16 field_0, field_2, field_4, field_6; } struct_8_15;
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_10;
typedef struct { u8 field_0[0x18]; struct_20_10 field_18; } struct_38_2;
typedef struct { u16 field_0[6]; } struct_C_7;
typedef struct { u16 field_0, field_2, field_4, field_6; } struct_8_16;
extern void func_8001C924();
extern s32 func_8012D624();
extern type_2 D_sc03_092_801AD71C[];
extern s32 func_8012B1B4();
extern s32 func_8012BCCC();
extern s32 func_8012B608();
extern s16 D_80126CB6;
extern u8 D_sc03_092_801AD68C;
extern s32 func_8012B864();
extern void func_80143970();
extern s32 func_8012B70C();
extern void func_8002A04C();
extern void func_8012C588();
extern s16 D_sc03_092_801AD78E[];
extern u8 D_sc03_092_801AD754;
extern u16 D_sc03_092_801AD788[];
extern u16 D_sc03_092_801AD78A[];
extern u16 D_sc03_092_801AD78C[];
extern u8 D_sc03_092_801AD7D4;
extern u8 D_sc03_092_801AD834;
extern struct_10 D_sc03_092_801AFDE8;
extern s32 D_800A5EB0;
extern struct_10 D_sc03_092_801AFE20;
extern s32 D_800A5E90;
typedef struct { s16 field_0, field_2, field_4, field_6, field_8, field_A, field_C, field_E; s32 field_10; } struct_14_6;
typedef struct { u8 field_0[4]; } struct_4_9;
typedef struct { s16 field_0; } struct_2;
extern s16 D_80126B5E;
extern u16 D_80126B66;

void func_sc03_092_8017C800(u8 *arg0) {
    s16 r;
    s32 d1, d2;
    u8 *s1;

    s1 = AF(arg0, u8 *, 0x34);
    r = rand();
    d1 = (r & 0x3F) - 0x20;
    AF(arg0, s16, 6) = AF(s1, u16, 6) + d1;
    if (AF(arg0, s32, 0x2C) != 0) {
        AF(arg0, u16, 0xA) = AF(s1, u16, 0xA) - 0x140;
        AF(arg0, s16, 0x16) = 0x20;
    } else {
        AF(arg0, u16, 0xA) = AF(s1, u16, 0xA);
        AF(arg0, s16, 0x16) = -0x20;
    }
    d2 = ((r >> 6) & 0x3F) - 0x20;
    AF(arg0, s16, 0xE) = AF(s1, u16, 0xE) + d2;
    AF(arg0, s32, 0x30) = (r >> 12) & 3;
    AF(arg0, u16, 2)++;
}

void func_sc03_092_8017C8B4(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0xA) {
        func_800D22E4();
        func_sc03_092_8017C910((s32) arg0);
        return;
    }
    func_80146C3C((s32) arg0);
}

void func_sc03_092_8017C910(u8 *arg0) {
    struct_1C_3 l;
    struct_20_5 m;

    if (AF(arg0, s32, 0x2C) != 0) {
        l.field_0.field_2 = AF(arg0, u16, 0xA) - 0x20;
        l.field_8.field_2 = AF(arg0, u16, 0xA) + 0x20;
    } else {
        l.field_0.field_2 = AF(arg0, u16, 0xA) + 0x20;
        l.field_8.field_2 = AF(arg0, u16, 0xA) - 0x20;
    }
    l.field_0.field_0 = AF(arg0, u16, 6);
    l.field_0.field_4 = AF(arg0, u16, 0xE);
    l.field_8.field_0 = AF(arg0, u16, 6);
    l.field_8.field_4 = AF(arg0, u16, 0xE);
    l.field_10.field_0 = l.field_10.field_1 = l.field_10.field_2 = 0;
    switch (AF(arg0, u32, 0x30)) {
    case 0:
        l.field_14.field_0 = 0xFF;
        l.field_14.field_1 = l.field_14.field_2 = 0;
        break;
    case 1:
        l.field_14.field_1 = 0xFF;
        l.field_14.field_0 = l.field_14.field_2 = 0;
        break;
    case 2:
        l.field_14.field_2 = 0xFF;
        l.field_14.field_0 = l.field_14.field_1 = 0;
        break;
    case 3:
        l.field_14.field_0 = l.field_14.field_1 = l.field_14.field_2 = 0xFF;
        break;
    }
    m = D_800AE620;
    l.field_18 = 0x50000000;
    func_80016A5C(&l, &m);
}

void func_sc03_092_8017CA80(u8 *arg0) {
    D_sc03_092_80188760[AF(arg0, u16, 2)]();
}

typedef struct { s16 field_0, field_2; u16 field_4; s16 field_6; } struct_8_17;
extern s32 func_800291B4();
extern void func_800233CC();
extern s32 func_8012C194();
extern s16 D_sc03_092_801B036C[];
extern s16 D_sc03_092_801B036E[];
extern struct_8_17 D_sc03_092_801B03D4[];
extern s32 D_sc03_092_801B03E4[];
extern s32 D_sc03_092_801B2ED8;
extern void func_8001CB6C();
extern void func_8001CF00();

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
typedef struct { struct_8_8 field_0[4]; s32 field_20[4]; s32 field_30; s32 field_34; u8 field_38; } struct_3C;
extern struct_8_4 D_sc03_092_801B0200[];

extern u8 D_sc03_092_80188EB8;
extern s32 D_801269A4;
extern s32 D_801269A8;
extern s32 D_801269AC;
extern s32 func_80013450();
extern struct_8_4 D_sc03_092_80188B60[];

extern u8 D_sc03_092_80188DD8;
extern s32 func_800D0F8C();
s32 func_sc03_092_8017F214(s32 arg0);

extern s32 func_8012CB64();
extern u8 D_sc03_092_80188FB8;
extern u8 D_sc03_092_801892E0;
extern u8 D_sc03_092_80189190;
extern s32 MoveImage();
extern u8 D_sc03_092_801A2368;
extern u8 D_sc03_092_801A21B0;
extern u8 D_sc03_092_80188E58;
extern u8 D_sc03_092_80188E68;
extern s32 D_sc03_092_80188E78[];
extern struct_8_4 D_sc03_092_80188E88[];
extern s32 func_8012A828();
extern u8 D_sc03_092_801AC5AC;
extern u8 D_sc03_092_80188F10;
extern struct_8_13 D_sc03_092_80189380[];
extern s32 *func_sc03_092_80180150(u8 *arg0);

extern s32 func_80012C6C();
extern s32 func_80012ABC();
extern void RotMatrixZYX();
extern void func_8012F14C();
extern s32 func_80013294();
extern s16 D_sc03_092_801889EA;
extern struct_8_4 D_80126940;
extern struct_8_4 D_sc03_092_801889B8[];
extern s16 D_801274E8;
extern s16 D_801274EA;
extern s16 D_801274EC;
extern s32 func_sc03_092_8017E524();
extern void func_sc03_092_8017E580();
extern void func_sc03_092_8017E60C();
extern void func_sc03_092_8017E2FC();
extern s32 func_80012DBC();
extern s32 func_80012A60();
extern s32 func_80012F74();
extern s32 func_8016F1AC();
extern s32 func_80161A30();

extern u8 D_sc03_092_80188F30;
extern u8 D_sc03_092_80188F40;
extern u8 D_sc03_092_80188F50;
extern u8 D_sc03_092_80188F70;
extern void func_8017B368();
s32 func_sc03_092_8017FE04(s32 arg0);

extern u8 D_sc03_092_80188A28[];
extern s32 D_sc03_092_80188C48[];
extern void func_8001D0E8();
extern s32 * func_sc03_092_8017EDDC();



extern void func_800D20C0();
extern void func_800D23D0();
extern u8 D_sc03_092_80188748;

void func_sc03_092_8017CABC(u8 *a) {
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
        m = ((s32 (*)())func_80146A6C)(0x12, a, AF(t, s16, 6), AF(t, s16, 0xA), AF(t, s16, 0xE), i, 0);
        if (m != 0) {
            AF(m, s16, 0x12) = r.field_0;
            AF(m, s16, 0x16) = r.field_2;
            AF(m, s16, 0x1A) = 0;
        }
    }
    o = func_800D222C(a, &D_sc03_092_80188748, 0xFD);
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

void func_sc03_092_8017CC80(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
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

void func_sc03_092_8017CD14(u8 *arg0) {
    D_sc03_092_80188768[AF(arg0, u16, 2)]();
}

void func_sc03_092_8017CD50(s32 arg0) {
    s32 pad[12];
    s32 temp_v0;

    temp_v0 = func_800D222C(arg0, (s32) &D_sc03_092_80188754, 0x18);
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

void func_sc03_092_8017CDF4(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
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

static inline void func_sc03_092_8017CE58_inline(struct_8_4 *zero, struct_8_4 *out) {
    struct_20_3 m;
    struct_20_3 mt;
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

void func_sc03_092_8017CE58(u8 *obj) {
    s32 tmp[3];
    volatile struct_8_4 box[8];
    struct_8_6 scr[8];
    struct_20_3 ls;
    struct_8_4 zero;
    struct_8_4 out;
    s32 z0;
    u8 *pkt;
    u32 *ot;
    u32 *chunk;
    u8 *mesh;
    u8 *verts;
    s32 n, i;

    z0 = ReadGeomScreen() + AF(obj, s32, 0x64);
    GsGetLs(obj + 0x10, &ls);
    GsSetLsMatrix(&ls);
    zero.field_0 = 0;
    zero.field_2 = 0;
    zero.field_4 = 0;
    func_sc03_092_8017CE58_inline(&zero, &out);
    out.field_2 -= 0x180;
    pkt = D_800A5E60;
    ot = D_800A6610 + (D_800B9A02[0] << 12);
    chunk = AF(obj, u32 *, 0xC);
    mesh = AF(obj, u8 *, 8);
    n = AF(mesh, s32, 8);
    verts = AF(mesh, u8 *, 0x10);
    for (i = 0; i < n; i++, chunk += 5)
    {
        u8 pad[0x48];
        struct { s32 field_0, field_4, field_8, field_C, field_10, field_14, field_18, field_1C; } g;
        u32 w0, w1, w2, w3;
        s16 xlo, xhi, ylo, yhi;
        s32 a, b, c, lo, hi, lo2, hi2, L, H;
        u32 cnt, j;
        u32 *poly;

        w0 = chunk[0];
        w1 = chunk[1];
        xlo = w0;
        xhi = w0 >> 16;
        ylo = w1;
        yhi = w1 >> 16;
        w2 = chunk[2];
        do {
        do {
        box[0].field_0 = xlo; box[0].field_2 = ylo;
        box[1].field_0 = xhi; box[1].field_2 = ylo;
        box[2].field_0 = xlo; box[2].field_2 = ylo;
        box[3].field_0 = xhi; box[3].field_2 = ylo;
        } while (0);
        box[4].field_0 = xlo; box[4].field_2 = yhi;
        box[5].field_0 = xhi; box[5].field_2 = yhi;
        box[6].field_0 = xlo; box[6].field_2 = yhi;
        box[7].field_0 = xhi; box[7].field_2 = yhi;
        } while (0);
        w1 = w2 >> 16;
        box[0].field_4 = w2; box[1].field_4 = w2; box[4].field_4 = w2; box[5].field_4 = w2;
        box[2].field_4 = w1; box[3].field_4 = w1; box[6].field_4 = w1; box[7].field_4 = w1;
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
        if (g.field_0 > z0) continue;

        a = scr[0].field_0; b = scr[1].field_0;
        if (a > b) { hi = a; lo = b; } else { lo = a; hi = b; }
        c = scr[2].field_0;
        if (c > hi) hi = c; else if (c < lo) lo = c;
        c = scr[3].field_0;
        if (c > hi) hi = c; else if (c < lo) lo = c;
        a = scr[4].field_0; b = scr[5].field_0;
        if (a > b) { hi2 = a; lo2 = b; } else { lo2 = a; hi2 = b; }
        c = scr[6].field_0;
        if (c > hi2) hi2 = c; else if (c < lo2) lo2 = c;
        c = scr[7].field_0;
        if (c > hi2) hi2 = c; else if (c < lo2) lo2 = c;
        L = lo; if (lo2 < L) L = lo2;
        H = hi; if (H < hi2) H = hi2;
        if ((s16)H < -160 || (s16)L > 160) continue;

        a = scr[0].field_2; b = scr[1].field_2;
        if (a > b) { hi = a; lo = b; } else { lo = a; hi = b; }
        c = scr[2].field_2;
        if (c > hi) hi = c; else if (c < lo) lo = c;
        c = scr[3].field_2;
        if (c > hi) hi = c; else if (c < lo) lo = c;
        a = scr[4].field_2; b = scr[5].field_2;
        if (a > b) { hi2 = a; lo2 = b; } else { lo2 = a; hi2 = b; }
        c = scr[6].field_2;
        if (c > hi2) hi2 = c; else if (c < lo2) lo2 = c;
        c = scr[7].field_2;
        if (c > hi2) hi2 = c; else if (c < lo2) lo2 = c;
        L = lo; if (lo2 < L) L = lo2;
        H = hi; if (H < hi2) H = hi2;
        if ((s16)H < -110 || (s16)L > 110) continue;

        poly = (u32 *)chunk[4];
        cnt = chunk[3];
        for (j = 0; j < cnt; j++, poly += 3) {
            u32 w;
            u8 *p0, *p1, *p2;
            u8 *v3p;
            u32 mask;
            s32 type;
            s32 zm;
            u32 *tex;

            w = poly[1];
            p0 = verts + (w & 0xFFFF);
            p1 = verts + (w >> 16);
            w = poly[2];
            p2 = verts + (w & 0xFFFF);
            w >>= 16;
            gte_ldv3(p0, p1, p2);
            gte_rtpt();
            type = w & 7;
            mask = 0x7F85E000;
            if (w & 1) mask = 0x80000000;
            gte_stflg(&g.field_4);
            if (g.field_4 & mask) continue;
            gte_nclip();
            v3p = verts + (w & 0xFFF8);
            gte_stopz(&g.field_8);
            if (g.field_8 <= 0) continue;
            switch (type) {
            case 6:
            case 7: {
                s16 xa, xb, xc, ya, yb, yc;
                s32 col;
                u32 *e;

                gte_stsxy3_ft3(pkt);
                gte_stsz3(&g.field_C, &g.field_10, &g.field_14);
                xa = AF(pkt, s16, 8); xb = AF(pkt, s16, 0x10);
                if (xa > xb) { xhi = xa; xlo = xb; } else { xlo = xa; xhi = xb; }
                xc = AF(pkt, s16, 0x18);
                if (xc > xhi) xhi = xc; else if (xc < xlo) xlo = xc;
                if (xhi < -160 || xlo > 160) continue;
                ya = AF(pkt, s16, 0xA); yb = AF(pkt, s16, 0x12);
                if (ya > yb) { yhi = ya; ylo = yb; } else { ylo = ya; yhi = yb; }
                yc = AF(pkt, s16, 0x1A);
                if (yc > yhi) yhi = yc; else if (yc < ylo) ylo = yc;
                if (yhi < -110 || ylo > 110) continue;
                gte_avsz3();
                {
                    s32 zc;
                    zm = g.field_C;
                    if (zm > g.field_10) {
                        zc = g.field_14;
                        if (zm < zc) zm = zc;
                    } else {
                        zm = g.field_10;
                        zc = g.field_14;
                        if (zm < zc) zm = zc;
                    }
                }
                tex = (u32 *)poly[0];
                col = 0x80 - (zm - 400) / 12;
                g.field_8 = zm;
                if (col < 0) col = 0;
                e = (u32 *)(((zm >> 2) << 2) + (s32)ot);
                { u32 word = col | (col << 8) | (col << 16);
                AF(pkt, u32, 4) = (tex[0] & 0xFF000000) | word; }
                AF(pkt, u32, 0xC) = tex[1];
                AF(pkt, u32, 0x14) = tex[2];
                AF(pkt, u16, 0x1C) = tex[3];
                AF(pkt, u32, 0) = (*e & 0xFFFFFF) | 0x07000000;
                *e = (*e & 0xFF000000) | ((u32)pkt & 0xFFFFFF);
                pkt += 0x20;
                break;
            }
            case 2:
            case 3: {
                s16 xa, xb, xc, xd, ya, yb, yc, yd;
                s32 col;
                u32 *e;
                s32 za;
                u32 t;

                gte_stsxy3c(tmp);
                gte_ldv0(v3p);
                gte_rtps();
                xa = ((s16 *)tmp)[0]; xb = ((s16 *)tmp)[2];
                if (xa > xb) { xhi = xa; xlo = xb; } else { xlo = xa; xhi = xb; }
                xc = ((s16 *)tmp)[4];
                if (xc > xhi) xhi = xc; else if (xc < xlo) xlo = xc;
                ya = ((s16 *)tmp)[1]; yb = ((s16 *)tmp)[3];
                if (ya > yb) { yhi = ya; ylo = yb; } else { ylo = ya; yhi = yb; }
                yc = ((s16 *)tmp)[5];
                if (yc > yhi) yhi = yc; else if (yc < ylo) ylo = yc;
                gte_stflg(&g.field_4);
                if (g.field_4 & mask) continue;
                gte_stsz4(&g.field_C, &g.field_10, &g.field_14, &g.field_18);
                gte_stsxy(pkt + 0x20);
                xd = AF(pkt, s16, 0x20);
                if (xd < xlo) xlo = xd; else if (xd > xhi) xhi = xd;
                if (xhi < -160 || xlo > 160) continue;
                yd = AF(pkt, s16, 0x22);
                if (yd < ylo) ylo = yd; else if (yd > yhi) yhi = yd;
                if (yhi < -110 || ylo > 110) continue;
                za = g.field_14; if (za < g.field_18) za = g.field_18;
                zm = g.field_C; if (zm < g.field_10) zm = g.field_10;
                if (zm < za) zm = za;
                g.field_8 = zm;
                AF(pkt, s32, 8) = tmp[0];
                AF(pkt, s32, 0x10) = tmp[1];
                AF(pkt, s32, 0x18) = tmp[2];
                tex = (u32 *)poly[0];
                col = 0x80 - (zm - 400) / 12;
                if (col < 0) col = 0;
                e = (u32 *)(((zm >> 2) << 2) + (s32)ot);
                { u32 word = col | (col << 8) | (col << 16);
                AF(pkt, u32, 4) = (tex[0] & 0xFF000000) | word; }
                AF(pkt, u32, 0xC) = tex[1];
                AF(pkt, u32, 0x14) = tex[2];
                t = tex[3];
                AF(pkt, u16, 0x1C) = t;
                AF(pkt, u16, 0x24) = t >> 16;
                AF(pkt, u32, 0) = (*e & 0xFFFFFF) | 0x09000000;
                *e = (*e & 0xFF000000) | ((u32)pkt & 0xFFFFFF);
                pkt += 0x28;
                break;
            }
            }
        }
    }
    D_800A5E60 = pkt;
}

void func_sc03_092_8017D9CC(u8 *arg0) {
    D_sc03_092_80188918[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_092_8017DA08(u8 *arg0) {
    func_sc03_092_8017DCC8();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_092_8017DA4C(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc03_092_8017DA70(u8 *arg0) {
    D_sc03_092_80188920[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_092_8017DAAC(u8 *arg0) {
    func_sc03_092_8017DE4C();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

void func_sc03_092_8017DAF0(u8 *arg0) {
    D_sc03_092_80188928[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_092_8017DB2C(u8 *arg0) {
    func_sc03_092_8017DCF0();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_092_8017DB6C(u8 *arg0) {
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

void func_sc03_092_8017DBE8(void) {
    func_800D1EBC();
}

void func_sc03_092_8017DC08(u8 *arg0) {
    D_sc03_092_80188934[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_092_8017DC44(u8 *arg0) {
    func_sc03_092_8017DE24();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_092_8017DC88(void) {
    if (func_800167F0(0) & 0xFFFF) {
        func_80171990((s32) &D_80126B58);
        return 1;
    }
    return 0;
}

void func_sc03_092_8017DCC8(void) {
    func_8016EE40((s32) &D_sc03_092_8018893C, 0x01000000);
}

void func_sc03_092_8017DCF0(void) {
    func_8016EE40((s32) &D_sc03_092_80188940, 0x01000000);
}

void func_sc03_092_8017DD18(u8 *arg0) {
    D_sc03_092_80188954[AF(arg0, u8, 0x216)]();
}

void func_sc03_092_8017DD54(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_80171990(arg0, arg1, arg2, arg3);
    func_8014708C(arg0);
    func_801472C8(arg0);
    func_8014706C(arg0);
    func_sc03_092_8017DD9C(arg0);
}

void func_sc03_092_8017DD9C(void) {
}

void func_sc03_092_8017DDA4(s32 arg0) {
    func_80146994(0x1A, arg0, 0x068E068F, 0);
    func_80171990(arg0);
}

void func_sc03_092_8017DDE8(s32 arg0) {
    if (func_8014C050(arg0, 0x1A) == 0) {
        func_80171928(arg0);
    }
}

void func_sc03_092_8017DE24(void) {
    func_8016EE40((s32) &D_sc03_092_8018894C, 0x01000000);
}

void func_sc03_092_8017DE4C(void) {
    func_8016EE40((s32) &D_sc03_092_801889A4, 0x01000000);
}

extern u8 *D_sc03_092_801B300C;
extern s16 D_sc03_092_801B2E78;
extern s16 D_sc03_092_801B2E7A;
extern s16 D_sc03_092_801B2E7C;
extern s16 D_sc03_092_801B2E80;
extern s16 D_sc03_092_801B2E82;
extern s16 D_sc03_092_801B2E84;

extern s32 D_sc03_092_801890F8[];
extern u8 D_sc03_092_8018910C;
extern void func_800D0F4C();
extern s32 D_80126954;
extern s32 D_8012695C;
extern s16 D_80126968;
extern s16 D_8012696A;
extern s16 D_8012696C;
extern s16 D_80126976;
extern s16 D_80126978;
extern s16 D_8012697A;
extern void func_8012A018();
extern u8 D_80126948;
extern u8 D_80127504;

extern s32 rand();
extern u8 D_sc03_092_80188C88;
extern u8 D_sc03_092_80188D48;
extern void func_8012A094();

void func_sc03_092_8017DE74(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x258;
    D_80126968 = 0x9F;
    D_8012696A = 0x600;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x50;
    D_8012697A = 0;
    func_8012A018(func_sc03_092_8017E008, 0);
    *(struct_8_4 *)&D_801274E8 = D_80126940;
    func_8012A094(&D_80126948);
    func_sc03_092_8017E008((s32)&D_80126948);
}

void func_sc03_092_8017DF40(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x258;
    D_80126968 = 0x9F;
    D_8012696A = 0x600;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x50;
    D_8012697A = 0;
    func_8012A018(func_sc03_092_8017E008, 0);
    *(struct_8_4 *)&D_801274E8 = D_80126940;
    func_sc03_092_8017E008((s32)&D_80126948);
    D_80127504 = 0x30;
}

void func_sc03_092_8017E008(s32 arg0) {
    D_sc03_092_801889B4[AF(arg0, u8, 4)]();
}

void func_sc03_092_8017E044(u8 *o) {
    struct_8_4 v;
    s32 hit;
    u8 *pl;
    s16 *c;

    pl = &D_80126B58;
    v = D_80126940;
    if (v.field_2 > -0xC0) {
        v.field_2 = -0xC0;
    }
    hit = 0;
    if (func_sc03_092_8017E524(&v, &D_sc03_092_801889B8[0]) != 0) {
        func_sc03_092_8017E580(o, &v, &D_sc03_092_801889B8[0]);
        hit = 1;
    } else if (func_sc03_092_8017E524(&v, &D_sc03_092_801889B8[1]) != 0) {
        func_sc03_092_8017E580(o, &v, &D_sc03_092_801889B8[1]);
        hit = 1;
    } else if (func_sc03_092_8017E524(&v, &D_sc03_092_801889B8[2]) != 0) {
        func_sc03_092_8017E60C(o, &v, &D_sc03_092_801889B8[2]);
        hit = 1;
    } else if (func_sc03_092_8017E524(&v, &D_sc03_092_801889B8[3]) != 0) {
        func_sc03_092_8017E60C(o, &v, &D_sc03_092_801889B8[3]);
        hit = 1;
    } else if (func_sc03_092_8017E524(&v, &D_sc03_092_801889B8[4]) != 0) {
        func_sc03_092_8017E60C(o, &v, &D_sc03_092_801889B8[4]);
        hit = 1;
    } else if (func_sc03_092_8017E524(&v, &D_sc03_092_801889B8[5]) != 0) {
        func_sc03_092_8017E60C(o, &v, &D_sc03_092_801889B8[5]);
        hit = 1;
    }
    if (hit << 16) { /* MATCH-TRICK: tests the low halfword (sll 16) of the flag */
        AF(o, s16, 0x1A) = AF(o, s16, 0x22) = func_80012DBC(AF(o, s16, 0x1A), AF(o, s16, 0xA0), 4, 1);
    } else {
        if (v.field_4 > 0x600) {
            AF(o, u16, 0xA0) = 0x800;
        } else if (func_8016F1AC() == 0 && func_80161A30(pl) == 0 && AF(pl, u16, 0) != 0x11
                && (s16) func_80012A60(AF(AF(pl, u8 *, 0x20), s16, 0x12), (AF(o, u16, 0x1A) + 0x800) & 0xFFF) >= 0xE4) {
            AF(o, u16, 0xA0) = AF(AF(pl, u8 *, 0x20), u16, 0x12);
        }
        AF(o, s16, 0x1A) = AF(o, s16, 0x22) = func_80012ABC(AF(o, s16, 0x1A), AF(o, s16, 0xA0), 0x14);
    }
    c = &D_801274E8;
    *c = func_80012F74(*c, v.field_0, 10, 1);
    D_801274EA = func_80012F74(D_801274EA, v.field_2, 10, 1);
    D_801274EC = func_80012F74(D_801274EC, v.field_4, 10, 1);
    func_sc03_092_8017E2FC(o, (u8 *)c);
}

void func_sc03_092_8017E2FC(u8 *o, u8 *p) {
    struct_20_8 m;
    struct_8_4 v;
    struct_8_4 r;
    s16 d;
    s16 k;
    s16 *q;

    AF(o, s32, 8) = (s16) func_80012C6C(AF(o, s16, 8), AF(o, s16, 0xC), 4);
    AF(o, s32, 0x10) = (s16) func_80012C6C(AF(o, s16, 0x10), AF(o, s16, 0x14), 4);
    AF(o, s16, 0x18) = func_80012ABC(AF(o, s16, 0x18), AF(o, s16, 0x20), 4);
    AF(o, s16, 0x1A) = func_80012ABC(AF(o, s16, 0x1A), AF(o, s16, 0x22), 4);
    AF(o, s16, 0x1C) = func_80012ABC(AF(o, s16, 0x1C), AF(o, s16, 0x24), 4);
    AF(o, s16, 0x28) = func_80012C6C(AF(o, s16, 0x28), AF(o, s16, 0x2E), 0x10);
    AF(o, s16, 0x2A) = func_80012C6C(AF(o, s16, 0x2A), AF(o, s16, 0x30), 0x10);
    AF(o, s16, 0x2C) = func_80012C6C(AF(o, s16, 0x2C), AF(o, s16, 0x32), 0x10);
    AF(o, s32, 0x48) = AF(o, s16, 0x28) + AF(p, s16, 0);
    AF(o, s32, 0x4C) = AF(o, s16, 0x2A) + AF(p, s16, 2);
    AF(o, s32, 0x50) = AF(o, s16, 0x2C) + AF(p, s16, 4);
    RotMatrixZYX(o + 0x18, &m);
    m.field_14[0] = AF(o, s16, 0x28) + AF(p, s16, 0);
    m.field_14[1] = AF(o, s16, 0x2A) + AF(p, s16, 2);
    m.field_14[2] = AF(o, s16, 0x2C) + AF(p, s16, 4);
    v.field_0 = 0;
    v.field_2 = 0;
    v.field_4 = AF(o, s32, 0x10);
    func_8012F14C(&m, &v, &r);
    q = &D_sc03_092_801889EA;
    *q = r.field_2;
    d = func_80013294(&r, q - 1);
    if (d < 0x300) {
        k = d - 0x80;
        if (k < 0) {
            k = 0;
        }
        r.field_2 -= (r.field_2 - AF(o, s32, 0x4C)) * (0x280 - k) / 0x280;
    }
    AF(o, s32, 0x3C) = r.field_0;
    AF(o, s32, 0x40) = r.field_2;
    AF(o, s32, 0x44) = r.field_4;
}

s32 func_sc03_092_8017E524(struct_8_4 *a, struct_8_4 *b) {
    if (a->field_0 < b->field_0 || b->field_2 < a->field_0 || a->field_4 < b->field_4) {
        return 0;
    }
    return a->field_4 <= b->field_6;
}

static inline s16 func_sc03_092_8017E580_inline(s16 a) {
    s16 r;
    if (a < 0x800) {
        r = a;
    } else {
        r = 0xFFF - a;
    }
    return r;
}

void func_sc03_092_8017E580(u8 *o, struct_8_4 *v, struct_8_4 *p) {
    s16 a;
    if (AF(o, s16, 0xA0) != 0 && AF(o, s16, 0xA0) != 0x800) {
        a = func_sc03_092_8017E580_inline(AF(o, s16, 0x1A));
        if (a > 0x400) {
            AF(o, s16, 0xA0) = 0x800;
        } else {
            AF(o, s16, 0xA0) = 0;
        }
    }
    v->field_0 = p->field_0 + (p->field_2 - p->field_0) / 2;
}

void func_sc03_092_8017E60C(u8 *o, struct_8_4 *v, struct_8_4 *p) {
    s16 a = AF(o, s16, 0xA0);
    if (a != 0x400 && a != 0xC00) {
        a = (AF(o, u16, 0x1A) - 0x400) & 0xFFF;
        a = func_sc03_092_8017E580_inline(a);
        if (a > 0x400) {
            AF(o, s16, 0xA0) = 0xC00;
        } else {
            AF(o, s16, 0xA0) = 0x400;
        }
    }
    v->field_4 = p->field_4 + (p->field_6 - p->field_4) / 2;
}

void func_sc03_092_8017E6A0() {
    u8 *p;
    s32 i;
    p = &D_801202A0;
    for (i = 0; i < 0x60; i++, p += 0x10C) {
        if (AF(p, u16, 0) == 0x179 && (AF(p, u16, 0x70) & 0xF0)) {
            AF(p, s16, 0xFE) = 1;
            func_8002D4C8(0x758, 0);
            func_80029124(0xB3, 1);
            func_800D0F4C(0x5A);
        }
    }
}

s32 func_sc03_092_8017E754(void) {
    return MoveImage((s32) &D_sc03_092_801889F0, 0x340, 0x100);
}

void func_sc03_092_8017E780(u8 *o) {
    if (func_8012C354(o, D_sc03_092_80188A28 + (AF(o, u16, 0x70) & 0xF) * 0x34) != 0) {
        AF(AF(o, u8 *, 0x20), s32, 4) |= 0x1000000;
        func_8012A828(o, &D_sc03_092_8018502C);
        if (AF(o, u16, 0x70) & 0xF0) {
            AF(o, s16, 2) = 2;
            if (func_80029178(0xB3) & 0xFF) {
                MoveImage(&D_sc03_092_801889F0, 0x340, 0x100);
                AF(o, u16, 0xFC) = D_sc03_092_80188B60[AF(o, u16, 0x70) & 0xF].field_6;
                AF(o, u16, 6) += D_sc03_092_80188B60[AF(o, u16, 0x70) & 0xF].field_0 * D_sc03_092_80188B60[AF(o, u16, 0x70) & 0xF].field_6;
                AF(o, u16, 0xA) += D_sc03_092_80188B60[AF(o, u16, 0x70) & 0xF].field_2 * D_sc03_092_80188B60[AF(o, u16, 0x70) & 0xF].field_6;
                AF(o, u16, 0xE) += D_sc03_092_80188B60[AF(o, u16, 0x70) & 0xF].field_4 * D_sc03_092_80188B60[AF(o, u16, 0x70) & 0xF].field_6;
            }
            func_8001D0E8(AF(o, s32, 0x20), 0x140, 0xF0);
        } else if (func_80029178(D_sc03_092_80188C48[AF(o, s16, 0x70)]) & 0xFF) {
            func_8012C218(o);
            return;
        } else {
            s32 dx, dz;
            AF(o, s16, 2) = 1;
            dx = AF(o, s16, 6) - D_80126B5E;
            dz = AF(o, s16, 0xE) - (s16)D_80126B66;
            if (dx * dx + dz * dz <= 0x10000) {
                AF(o, u16, 0xFC) = D_sc03_092_80188B60[AF(o, s16, 0x70)].field_6;
                AF(o, u16, 6) += D_sc03_092_80188B60[AF(o, s16, 0x70)].field_0 * D_sc03_092_80188B60[AF(o, s16, 0x70)].field_6;
                AF(o, u16, 0xA) += D_sc03_092_80188B60[AF(o, s16, 0x70)].field_2 * D_sc03_092_80188B60[AF(o, s16, 0x70)].field_6;
                AF(o, u16, 0xE) += D_sc03_092_80188B60[AF(o, s16, 0x70)].field_4 * D_sc03_092_80188B60[AF(o, s16, 0x70)].field_6;
                AF(o, s16, 2) = 5;
            } else {
                func_801788B8(o, func_sc03_092_8017EDDC);
            }
        }
        AF(o, u8, 0x75) = 0;
    }
}

void func_sc03_092_8017EAA0(u8 *o) {
    switch (AF(o, u16, 0x34)) {
    case 0:
        break;
    case 1:
        func_8002D4C8(0x739, 0);
        AF(o, u16, 0x34)++;
        break;
    case 2:
        if (AF(o, s16, 0xFC) < D_sc03_092_80188B60[AF(o, s16, 0x70)].field_6) {
            AF(o, u16, 6) += D_sc03_092_80188B60[AF(o, s16, 0x70)].field_0;
            AF(o, u16, 0xA) += D_sc03_092_80188B60[AF(o, s16, 0x70)].field_2;
            AF(o, u16, 0xE) += D_sc03_092_80188B60[AF(o, s16, 0x70)].field_4;
            AF(o, u16, 0xFC)++;
            AF(o, u16, 0x52) ^= 3;
        } else {
            func_8002D4C8(0x73B, 0);
            AF(o, u16, 0x34)++;
        }
        break;
    }
    if (func_80178970(o) != 0) {
        func_80178D18(o);
        AF(o, s16, 2) = 1;
    }
}

void func_sc03_092_8017EBD0(u8 *o) {
    s32 x = (s16)D_80126B5E;
    s32 z = (s16)D_80126B66 - 0x9E2;
    if (x * x + z * z <= 0xD2400) {
        AF(o, u32 *, 0x20)[1] &= 0x7FFFFFFF;
    } else {
        AF(o, u32 *, 0x20)[1] |= 0x80000000;
    }
    if (AF(o, s16, 0xFE) != 0) {
        if (AF(o, s16, 0xFC) < D_sc03_092_80188B60[AF(o, u16, 0x70) & 0xF].field_6) {
            AF(o, u16, 6) += D_sc03_092_80188B60[AF(o, u16, 0x70) & 0xF].field_0;
            AF(o, u16, 0xA) += D_sc03_092_80188B60[AF(o, u16, 0x70) & 0xF].field_2;
            AF(o, u16, 0xE) += D_sc03_092_80188B60[AF(o, u16, 0x70) & 0xF].field_4;
            AF(o, s16, 0xFC)++;
        }
    }
}

void func_sc03_092_8017ECFC(u8 *arg0) {
    D_sc03_092_80188C70[AF(arg0, u16, 2)]();
}

extern void (*D_sc03_092_80188DD0[])();
void func_sc03_092_8017ED38(u8 *o) {
    D_sc03_092_80188DD0[AF(o, u16, 2)]();
    if (AF(o, u16, 0) != 0) {
        AF(o, u16, 0xA) -= 0x40;
        if (func_8012D624(o, 0x10, 0xA) == 1) {
            *(u16 *)&D_80126B96 |= 0x200;
        }
        AF(o, u16, 0xA) += 0x40;
    }
}

s32 *func_sc03_092_8017EDDC(u8 *o) {
    s32 *r;

    if (func_8012BE54(AF(o, s32, 0x64)) < 0x2401) {
        AF(AF(o, u8 *, 0x64), s16, 2) = 3;
        func_80178BF8();
        r = (s32 *)&func_80172710;
    } else {
        r = 0;
    }
    return r;
}

void func_sc03_092_8017EE38(void) {
}

void func_sc03_092_8017EE40(u8 *arg0) {
    func_80178CBC((s32) arg0, D_sc03_092_80188C58[AF(arg0, s16, 0x70)]);
    AF(arg0, s16, 2) = 4;
}

void func_sc03_092_8017EE8C(u8 *o) {
    if (AF(o, s16, 0xFC) != 0) {
        AF(o, u16, 6) -= D_sc03_092_80188B60[AF(o, s16, 0x70)].field_0;
        AF(o, u16, 0xA) -= D_sc03_092_80188B60[AF(o, s16, 0x70)].field_2;
        AF(o, u16, 0xE) -= D_sc03_092_80188B60[AF(o, s16, 0x70)].field_4;
        AF(o, u16, 0xFC) -= 1;
        AF(o, u16, 0x52) ^= 3;
    } else {
        AF(o, s16, 2) = 1;
        AF(o, s16, 0xFC) = 0;
        AF(o, s16, 0x52) = 0;
        func_801788B8(o, func_sc03_092_8017EDDC);
    }
}

void func_sc03_092_8017EF54(u8 *o) {
    s32 t;
    t = func_8012C1B8();
    AF(o, s32, 0x20) = t;
    if (t == 0) {
        func_8012CAE4(o);
        return;
    }
    func_8012B23C(o);
    func_8001CA1C(AF(o, s32, 0x20), &D_sc03_092_80188C88);
    func_8012A828(o, &D_sc03_092_80188D48);
    AF(o, u16, 2)++;
    AF(AF(o, u8 *, 0x20), s16, 0x18) = 0x2000;
    AF(AF(o, u8 *, 0x20), s16, 0x1A) = 0x2000;
    AF(o, s32, 0x94) = rand() & 0xF;
    AF(AF(o, u8 *, 0x20), s32, 4) |= 0x50000000;
    AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x10;
}

void func_sc03_092_8017F01C(s32 arg0) {
    void *temp_a0;
    void *temp_v0;

    if (func_8012BE54(arg0) <= 0x400000) {
        temp_a0 = AF(arg0, void *, 0x20);
        AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) & 0x7FFFFFFF);
        return;
    }
    temp_v0 = AF(arg0, void *, 0x20);
    AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x80000000);
}

s32 func_sc03_092_8017F088(s32 arg0) {
    return func_8012AD44(arg0, 1);
}

void func_sc03_092_8017F0A8(u8 *o) {
    s16 d;
    switch (AF(o, u16, 0x34)) {
    case 0:
        d = AF(o, u16, 6) - D_80126B5E;
        if (d < 0) {
            d = -d;
        }
        if (d < 0x61 && D_80126B62 < -0xBF && AF(o, s16, 0xE) <= (s16)D_80126B66
            && AF(&D_80126B58, u16, 0) != 2 && AF(&D_80126B58, u16, 0) != 3) {
            func_80178B18(o, &D_sc03_092_80188DD8);
            AF(o, u16, 0x34)++;
        }
        break;
    case 1:
        if (func_80178970(o) != 0) {
            func_80178D18(o);
            if (func_800D0F8C(0x5A) != 0) {
                func_sc03_092_8017F214((s32)o);
            } else {
                AF(o, u16, 0x34)++;
            }
        }
        break;
    case 2:
        if ((s16)D_80126B66 < AF(o, s16, 0xE) - 0x200) {
            AF(o, u16, 0x34) = 0;
        }
        break;
    }
}

s32 func_sc03_092_8017F214(s32 arg0) {
    func_80178B18(arg0, (s32) &D_sc03_092_80188E00);
    return func_8012AD44(arg0, 2);
}

void func_sc03_092_8017F250(void) {
    func_sc03_092_8017E754();
    func_8002D4C8(0xB16, 0);
}

void func_sc03_092_8017F27C(s32 arg0) {
    func_sc03_092_8017E6A0(arg0);
}

s32 func_sc03_092_8017F29C(s32 arg0) {
    return func_8012AD44(arg0, 3);
}

void func_sc03_092_8017F2BC(u8 *arg0) {
    D_sc03_092_80188E48[AF(arg0, u16, 2)]();
}

void func_sc03_092_8017F2F8(u8 *o) {
    s32 t;
    s32 i;
    s32 *q;
    s32 off;
    RECT r;

    t = func_8012C1B8();
    AF(o, s32, 0x20) = t;
    if (t == 0) {
        func_8012CAE4(o);
        return;
    }
    if (AF(o, s16, 0x70) == 0) {
        func_8001C214(t, &D_sc03_092_801A2368);
        AF(o, s32, 0x58) = (s32)&D_sc03_092_80188E58 | 0x40000000;
        AF(o, s16, 0xFC) = 1;
        for (i = 0; i < 4; i++) {
            if (func_80029178(D_sc03_092_80188E78[i]) & 0xFF) {
                r.x = D_sc03_092_80188E88[i].field_4;
                r.y = D_sc03_092_80188E88[i].field_6;
                r.w = 0x20;
                r.h = 0x40;
                MoveImage(&r, D_sc03_092_80188E88[i].field_0, D_sc03_092_80188E88[i].field_2);
            } else {
                AF(o, s16, 0xFC) = 0;
            }
        }
        func_8012C658(0x188, 1, o);
    } else {
        func_8001C214(t, &D_sc03_092_801A21B0);
        AF(o, s32, 0x58) = (s32)&D_sc03_092_80188E68 | 0x40000000;
        AF(o, u16, 0xE) += 0x100;
    }
    AF(AF(o, u8 *, 0x20), s32, 0x28) = 0x1800180;
    AF(o, u16, 0x5C) = 0xC800;
    AF(o, u8, 0x75) = 0;
    AF(o, u16, 0x100) = AF(o, u16, 0xE);
    func_8012AD50(o);
}

s32 func_sc03_092_8017F49C(s32 arg0) {
    return func_8012AD44(arg0, 2);
}

s32 func_sc03_092_8017F4BC(s32 arg0) {
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    AF(temp_a1, s32, 4) = (s32) (AF(temp_a1, s32, 4) | 0x80000000);
    return func_8012AD44(arg0, 3);
}

s32 func_sc03_092_8017F4F4(u8 *arg0) {
    return AF(arg0, u16, 2) == 3;
}

void func_sc03_092_8017F508(u8 *arg0) {
    D_sc03_092_80188EE8[AF(arg0, u16, 2)]();
}

void func_sc03_092_8017F544(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C2C4(temp_v0);
    if (func_80029178(0xB3) & 0xFF) {
        func_sc03_092_8017F29C((s32) arg0);
        return;
    }
    func_sc03_092_8017F088((s32) arg0);
}

void func_sc03_092_8017F5B8(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        func_sc03_092_8017F29C(arg0);
    }
}

void func_sc03_092_8017F5F8(void) {
}

void func_sc03_092_8017F600(u8 *o) {
    s16 fc;
    u16 dx;
    s16 adx;
    u16 dz;
    if (AF(o, s16, 0x70) == 0) {
        fc = AF(o, s16, 0xFC);
        if (fc != 0) {
            dx = AF(o, u16, 6) - D_80126B5E;
            adx = dx;
            if ((s16)dx < 0) {
                adx = -dx;
            }
            dz = AF(o, u16, 0xE) - D_80126B66;
            if (adx < 0xC0 && (u16)(dz + 0xFF) < 0xFF) {
                AF(o, u16, 0xFC) = fc | 0x8000;
                func_sc03_092_8017F49C(o);
                AF(o, s32, 0x1C) = 0x30;
                AF(o, s16, 0x84) = 0x30;
                func_80178B18(o, &D_sc03_092_80188EB8);
            }
        }
    } else if (AF(AF(o, u8 *, 0x64), s16, 0xFC) & 0x8000) {
        func_sc03_092_8017F49C(o);
    }
    func_sc03_092_8018074C(o, o + 0x24);
}

void func_sc03_092_8017F704(s32 arg0) {
    s16 temp_v0_2;
    s16 temp_v0_3;
    u16 temp_v0;

    func_sc03_092_8018074C(arg0, arg0 + 0x24);
    if (AF(arg0, s16, 0x70) == 0) {
        if (func_8012BEE8(arg0) != 0) {
            temp_v0 = AF(arg0, u16, 0xFE) + 4;
            AF(arg0, u16, 0xFE) = temp_v0;
            AF(arg0, s16, 0xE) = (s16) (AF(arg0, u16, 0x100) - temp_v0);
            if ((s16) AF(arg0, u16, 0xFE) >= 0x90) {
                func_sc03_092_8017F4BC(arg0);
            } else {
                AF(arg0, s32, 0x1C) = 3;
            }
        }
        temp_v0_2 = AF(arg0, s16, 0x84);
        if (temp_v0_2 != 0) {
            temp_v0_3 = temp_v0_2 - 1;
            AF(arg0, s16, 0x84) = temp_v0_3;
            if ((temp_v0_3 << 0x10) == 0) {
                func_8002D4C8(0x757, 0);
            }
        }
        func_80178970(arg0);
        return;
    }
    AF(arg0, s16, 0xE) = (s16) (AF(arg0, u16, 0x100) + AF(AF(arg0, void *, 0x64), u16, 0xFE));
    if ((s16) AF(AF(arg0, void *, 0x64), u16, 0xFE) >= 0x90) {
        func_sc03_092_8017F4BC(arg0);
    }
}

void func_sc03_092_8017F7FC(u8 *arg0) {
    if ((AF(arg0, s16, 0x70) == 0) && (AF(arg0, u16, 0x34) == 0) && (func_80178970((s32) arg0) != 0) && (D_sc03_092_801B3010 == 0)) {
        func_80178D18((s32) arg0);
        AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
    }
}

s32 func_sc03_092_8017F87C(void) {
    s32 v = func_80029504();

    if (v < 0x140) {
        return 0;
    }
    if (v < 0x14A) {
        return 1;
    }
    if (v < 0x172) {
        return 2;
    }
    if (v < 0x17C) {
        return 3;
    }
    return 4;
}

void func_sc03_092_8017F8D8(u8 *o) {
    u8 *p;
    s32 t;
    s32 k;
    struct_8_4 v;

    func_sc03_092_8018074C(o, o + 0x24);
    p = &D_80126B58;
    t = func_80029504();
    if (t < 0x140) {
        k = 0;
    } else if (t < 0x14A) {
        k = 1;
    } else if (t < 0x172) {
        k = 2;
    } else if (t < 0x17C) {
        k = 3;
    } else {
        k = 4;
    }
    switch (k) {
    case 0:
        break;
    case 1:
        if ((AF(p, s32, 0x44) & 0x8000000) && AF(p, s16, 0xE) >= -0x16F) {
            AF(o, s16, 2) = 3;
            D_sc03_092_801B2E70 = 0;
            func_80178B18(o, &D_sc03_092_80188FB8);
        }
        break;
    case 3:
        v.field_0 = AF(p, u16, 6);
        v.field_2 = AF(p, u16, 0xA);
        v.field_4 = AF(p, u16, 0xE);
        if (!(func_80029178(0x105) & 0xFF)) {
            if (func_8012CB64(&v, -0x880, -0x680, -0x100, 0x100) != 0) {
                AF(o, s16, 2) = 3;
                func_80178B18(o, &D_sc03_092_801892E0);
            }
        } else if (AF(p, s32, 0x44) & 0x8000000) {
            if (func_8012CB64(&v, -0xE60, -0xDA0, -0x60, 0x60) != 0) {
                AF(o, s16, 2) = 3;
                func_80178B18(o, &D_sc03_092_80189190);
            }
        }
        break;
    case 2:
        break;
    case 4:
        break;
    }
}

void func_sc03_092_8017FA74(u8 *o) {
    s32 t;
    s32 n;
    s32 m;
    s32 *e;

    switch (D_sc03_092_801B2E70) {
    case 0:
        break;
    case 1:
        func_8017B368(o, &D_sc03_092_80188F30);
        break;
    case 2:
        func_8017B368(o, &D_sc03_092_80188F40);
        break;
    case 3:
        func_8017B368(o, &D_sc03_092_80188F50);
        break;
    case 4:
        func_8017B368(o, &D_sc03_092_80188F70);
        D_sc03_092_801B2E70 = 0;
        break;
    }
    if (func_80178970(o) != 0) {
        func_80178D18(o);
        t = func_80029504();
        if (t < 0x140) {
            n = 0;
        } else if (t < 0x14A) {
            n = 1;
        } else if (t < 0x172) {
            n = 2;
        } else if (t < 0x17C) {
            n = 3;
        } else {
            n = 4;
        }
        if (n == 4) {
            func_sc03_092_8017FE04((s32)o);
            return;
        }
        AF(o, s16, 2) = 1;
        t = func_80029504();
        if (t < 0x140) {
            m = 0;
        } else if (t < 0x14A) {
            m = 1;
        } else if (t < 0x172) {
            m = 2;
        } else if (t < 0x17C) {
            m = 3;
        } else {
            m = 4;
        }
        e = (s32 *)&D_sc03_092_80189380[m];
        func_8012E8E0(o, &D_sc03_092_80188EF8 + e[0] * 8);
        func_8012A828(o, e[1]);
        AF(o, s32, 0x58) = (s32)&D_sc03_092_80188F10 | 0x40000000;
        AF(o, s16, 0x5C) = 0x800;
        D_sc03_092_801B2E70 = 0;
    }
}

void func_sc03_092_8017FC44(u8 *o) {
    s32 t;
    s32 k;
    s32 k2;
    struct_8_13 *e;
    s32 r;
    u8 *m;

    t = func_80029504();
    if (t < 0x140) {
        k = 0;
    } else if (t < 0x14A) {
        k = 1;
    } else if (t < 0x172) {
        k = 2;
    } else if (t < 0x17C) {
        k = 3;
    } else {
        k = 4;
    }
    if (k == 0 || k == 4) {
        func_8012CAE4(o);
        return;
    }
    if ((AF(o, s32, 0x20) = func_8012C1B8()) == 0) {
        func_8012CAE4(o);
    }
    func_8001C214(AF(o, s32, 0x20), &D_sc03_092_801AC5AC);
    AF(o, s16, 2) = 1;
    t = func_80029504();
    if (t < 0x140) {
        k2 = 0;
    } else if (t < 0x14A) {
        k2 = 1;
    } else if (t < 0x172) {
        k2 = 2;
    } else if (t < 0x17C) {
        k2 = 3;
    } else {
        k2 = 4;
    }
    e = &D_sc03_092_80189380[k2];
    func_8012E8E0(o, &D_sc03_092_80188EF8 + e->field_0 * 8);
    func_8012A828(o, e->field_4);
    m = AF(o, u8 *, 0x68);
    AF(o, s32, 0x58) = (s32)&D_sc03_092_80188F10 | 0x40000000;
    AF(o, s16, 0x5C) = 0x800;
    D_sc03_092_801B2E70 = 0;
    AF(m, s16, 0xC) = 0x7FFF;
    r = func_801788B8(o, func_sc03_092_80180150);
    AF(o, s32, 0xD4) = r;
    func_8012E8E0(r, &D_sc03_092_80188EF8);
    if (k == 3) {
        func_8012C658(0x1AF, 0, 0);
        func_8012C658(0x1AF, 1, 0);
    }
}

s32 func_sc03_092_8017FE04(s32 arg0) {
    AF(arg0, s16, 2) = 4;
    func_8012E8A8(arg0);
    AF(arg0, s16, 0x98) = 0;
    AF(arg0, s16, 0x5C) = 0;
    return func_8012E8E0(arg0, (s32) &D_sc03_092_80188EF8);
}

void func_sc03_092_8017FE4C(u8 *arg0) {
    D_sc03_092_801893A0[AF(arg0, u16, 2)]();
}

void func_sc03_092_8017FE88(u8 *o) {
    s32 t;
    s32 k;
    AF(o, s16, 2) = 3;
    D_sc03_092_801B2E70 = 0;
    t = func_80029504();
    if (t < 0x140) {
        k = 0;
    } else if (t < 0x14A) {
        k = 1;
    } else if (t < 0x172) {
        k = 2;
    } else if (t < 0x17C) {
        k = 3;
    } else {
        k = 4;
    }
    switch (k) {
    case 0:
        break;
    case 1:
        break;
    case 2:
        func_80178CBC(o, &D_sc03_092_8018910C);
        break;
    case 3:
        break;
    case 4:
        break;
    }
}

void func_sc03_092_8017FF34(void) {
    func_80029514(0x14A);
}

s32 func_sc03_092_8017FF54(s32 arg0, s32 arg1) {
    D_sc03_092_801B2E70 = 1;
    return 1;
}

void func_sc03_092_8017FF68(void) {
    D_sc03_092_801B2E70 = 2;
}

void func_sc03_092_8017FF7C(void) {
    D_sc03_092_801B2E70 = 3;
}

void func_sc03_092_8017FF90(void) {
    D_sc03_092_801B2E70 = 0;
}

void func_sc03_092_8017FFA0(void) {
    D_sc03_092_801B2E70 = 4;
}

void func_sc03_092_8017FFB4(void) {
    func_80029124(0x100, 1);
}

void func_sc03_092_8017FFD8(u8 *o) {
    s32 n;
    n = 0;
    if (func_80029178(0x101) & 0xFF) {
        n = 1;
    }
    if (func_80029178(0x102) & 0xFF) {
        n++;
    }
    if (func_80029178(0x103) & 0xFF) {
        n++;
    }
    if (func_80029178(0x104) & 0xFF) {
        n++;
    }
    AF(o, s32, 0xE4) = D_sc03_092_801890F8[n];
}

void func_sc03_092_80180074(void) {
    func_8014BB0C();
    func_8014BDC8();
    func_8002D4C8(0x45C, 0);
}

void func_sc03_092_801800A8(void) {
    s32 temp_v0;

    temp_v0 = func_8012E57C(0x1AF, 1);
    if (temp_v0 != 0) {
        AF(temp_v0, s16, 0xFC) = 1;
    }
}

void func_sc03_092_801800DC(u8 *arg0) {
    func_8012B200();
    AF(arg0, s32, 0x10) = 0x40000;
}

void func_sc03_092_8018010C(void) {
    func_80029514(0x17C);
}

void func_sc03_092_8018012C(void) {
    func_80029124(0x105, 1);
}

s32 *func_sc03_092_80180150(u8 *arg0) {
    if ((AF(AF(arg0, void *, 0x64), u16, 2) == 1) && (func_sc03_092_8017F87C() != 3) && (func_sc03_092_8017F87C() != 4)) {
        if (func_8012BD14((s32) AF(arg0, void *, 0x64)) < 0x4001) {
            AF(AF(arg0, void *, 0x64), u16, 2) = 2U;
            func_80178BF8();
            return &func_80172710;
        }
        /* Duplicate return node #6. Try simplifying control flow for better match */
        return NULL;
    }
    return NULL;
}

void func_sc03_092_801801EC(void) {
}

void func_sc03_092_801801F4(u8 *arg0) {
    D_sc03_092_8018944C[AF(arg0, u16, 2)]();
}

void func_sc03_092_80180230(u8 *o) {
    struct_8_4 v;

    v.field_0 = AF(o, u16, 6);
    v.field_2 = AF(o, u16, 0xA);
    v.field_4 = AF(o, u16, 0xE);
    D_sc03_092_801B2E78 = 0;
    D_sc03_092_801B2E7A = v.field_2;
    D_sc03_092_801B2E7C = v.field_4 + 0x20;
    D_sc03_092_801B2E80 = 0;
    D_sc03_092_801B2E82 = v.field_2 - 0x180;
    D_sc03_092_801B2E84 = v.field_4 - 0xF0;
}

void func_sc03_092_80180298(u8 *o) {
    if (AF(o, u16, 0x70) & 1) {
        AF(D_sc03_092_801B300C, s32, 4) = ((AF(o, s16, 6) - 0x40) & 0xFFFF) | (AF(o, s16, 0xE) << 16);
    } else {
        AF(D_sc03_092_801B300C, s32, 4) = ((AF(o, s16, 6) + 0x40) & 0xFFFF) | (AF(o, s16, 0xE) << 16);
    }
}

void func_sc03_092_801802EC(s32 arg0) {
    func_sc03_092_8018074C(arg0, arg0 + 0x24);
    if ((AF(arg0, s16, 0x70) < 2) && !(func_80029178(0x100) & 0xFF) && (D_80126B9C & 0x08000000) && (func_8012BD14(arg0) < 0x2401)) {
        AF(arg0, s16, 2) = 2;
        func_80178B18(arg0, (s32) &D_sc03_092_801893D4);
    }
}

void func_sc03_092_80180380(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        func_80029124(0x100, 1);
        AF(arg0, s16, 2) = 1;
        func_8012E88C(arg0);
        func_8012E8E0(arg0, (s32) (((AF(arg0, u16, 0x70) & 0xF) * 8) + &D_sc03_092_801893B4));
    }
}

void func_sc03_092_801803F4(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
    }
    func_8001C214(AF(arg0, s32, 0x20), D_sc03_092_80189434[AF(arg0, s16, 0x70)]);
    AF(arg0, s16, 2) = 1;
    func_8012E88C((s32) arg0);
    func_8012E8E0((s32) arg0, (s32) ((((u16) AF(arg0, s16, 0x70) & 0xF) * 8) + &D_sc03_092_801893B4));
    AF(AF(arg0, s32, 0x20), s16, 0x14) = 0x400;
    AF(AF(arg0, s32, 0x20), s16, 0x12) = 0;
    AF(AF(arg0, s32, 0x20), u16, 0x10) = D_sc03_092_80189444[AF(arg0, s16, 0x70)];
    AF(AF(arg0, void *, 0x68), s16, 0xC) = 0x7FFF;
}

void func_sc03_092_801804C0(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_8012E8E0(arg0, (s32) &D_sc03_092_80189458);
    if (AF(arg0, s16, 0x70) != 0) {
        func_8012A828(arg0, (s32) &D_sc03_092_801AFBA0);
    }
    AF(arg0, s32, 0x1C) = 0x20;
    func_8002D4C8(0x5BF, 0);
}

void func_sc03_092_8018052C(s32 arg0) {
    AF(arg0, s16, 2) = 3;
    func_8012E8E0(arg0, (s32) &D_sc03_092_80189458);
    if (AF(arg0, s16, 0x70) != 0) {
        func_8012A828(arg0, (s32) &D_sc03_092_801AFDB0);
    }
}

void func_sc03_092_80180584(u8 *arg0) {
    D_sc03_092_80189488[AF(arg0, u16, 2)]();
}

void func_sc03_092_801805C0(s32 arg0) {
    func_sc03_092_8018074C(arg0, arg0 + 0x24);
    if ((AF(arg0, s16, 0x70) != 0) && (AF(arg0, s16, 0xFC) != 0)) {
        func_sc03_092_801804C0(arg0);
    }
}

void func_sc03_092_80180614(s32 arg0, s32 arg1) {
    if (func_8012BEE8(arg0, arg1) != 0) {
        func_sc03_092_8018052C(arg0);
    }
}

void func_sc03_092_8018064C(s32 arg0) {
    func_sc03_092_8018074C(arg0, arg0 + 0x24);
}

void func_sc03_092_8018066C(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
    }
    func_8001C214(AF(arg0, s32, 0x20), D_sc03_092_80189480[AF(arg0, s16, 0x70)]);
    AF(arg0, s16, 0x5C) = 0xC00;
    AF(arg0, s16, 2) = 1;
    AF(arg0, s32, 0x58) = (s32) ((s32) ((AF(arg0, s16, 0x70) * 0x10) + &D_sc03_092_80189460) | 0x40000000);
    func_8012E8E0((s32) arg0, (s32) &D_sc03_092_80189458);
    if ((AF(arg0, s16, 0x70) != 0) || (AF(AF(arg0, s32, 0x20), s16, 0x12) = 0x800, (AF(arg0, s16, 0x70) != 0))) {
        func_8012A828((s32) arg0, (s32) &D_sc03_092_801AFB90);
    }
    AF(AF(arg0, void *, 0x68), s16, 0xC) = 0x7FFF;
}

void func_sc03_092_8018074C(u8 *o, struct_8_4 *p) {
    struct_8_4 v;
    s32 d;
    s16 s;
    if (AF(o, s32, 0x20) != 0 && AF(o, u16, 0) != 0) {
        v.field_0 = D_801269A4;
        v.field_2 = D_801269A8;
        v.field_4 = D_801269AC;
        d = func_80013450(o + 4, &v);
        if (d >= 0x8C0) {
            func_8012E8A8(o);
            return;
        }
        if (d < 0x3C1) {
            p->field_0 = p->field_2 = p->field_4 = 0xC0;
        } else {
            s = -((d - 0x3C0) * 0x180) / 0x500 + 0xC0;
            p->field_0 = p->field_2 = p->field_4 = s;
        }
        p->field_6 = -2;
        func_8012E88C(o);
        AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x80;
        AF(AF(o, u8 *, 0x20), struct_8_4 *, 0x80) = p;
    }
}

void func_sc03_092_80180874(void) {
    struct_8_4 v;
    u8 *p;
    struct_8_4 *s;
    s32 i;
    s32 d;
    s16 c;
    u16 k;

    p = &D_801202A0;
    i = 0;
    do {
        k = AF(p, u16, 0);
        if (k == 0x8E || k == 0x8F || k == 0x1E3) {
            s = (struct_8_4 *)(p + 0x24);
            if (AF(p, u8 *, 0x20) != 0 && k != 0) {
                v.field_0 = D_801269A4;
                v.field_2 = D_801269A8;
                v.field_4 = D_801269AC;
                d = func_80013450(p + 4, &v);
                if (d >= 0x8C0) {
                    func_8012E8A8(p);
                } else {
                    if (d < 0x3C1) {
                        s->field_0 = s->field_2 = s->field_4 = 0xC0;
                    } else {
                        c = (-((d - 0x3C0) * 0x180)) / 0x500 + 0xC0;
                        s->field_0 = s->field_2 = s->field_4 = c;
                    }
                    s->field_6 = -2;
                    func_8012E88C(p);
                    AF(AF(p, u8 *, 0x20), u16, 0x2C) |= 0x80;
                    AF(AF(p, u8 *, 0x20), struct_8_4 *, 0x80) = s;
                }
            }
        }
        i++;
        p += 0x10C;
    } while (i < 0x60);
}

void func_sc03_092_801809F0(s32 arg0) {
    func_sc03_092_80180A10(arg0);
}

void func_sc03_092_80180A10(void) {
    u32 i;

    for (i = 0; i < 16; i++) {
        D_sc03_092_801B2E8C[i] = D_sc03_092_80189498[((D_sc03_092_801B2E88 >> 8) + i) & 0xF] | 0x8000;
    }
    func_800183E0(&D_sc03_092_801894B8);
    D_sc03_092_801B2E88 += 0x100;
}

s32 func_sc03_092_80180A9C(void) {
    return 0x36;
}

void func_sc03_092_80180AA4(u8 *arg0) {
    D_sc03_092_80189518[AF(arg0, u16, 2)]();
}

s32 func_sc03_092_80180AE0(u8 *arg0, s32 *t) {
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

void func_sc03_092_80180B28(u8 *arg0) {
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
    AF(arg0, s32 *, 0x58) = (s32 *) &D_sc03_092_80189508;
    AF(arg0, s16, 0x5C) = 0x80;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    if (temp_s1 >= 0x384) {
        AF(arg0, s32, 0xDC) = func_sc03_092_80180AE0(arg0, &D_sc03_092_801894F8);
    } else if (temp_s1 >= 0x258) {
        AF(arg0, s32, 0xDC) = func_sc03_092_80180AE0(arg0, &D_sc03_092_801894E8);
    } else if (temp_s1 >= 0xC8) {
        AF(arg0, s32, 0xDC) = func_sc03_092_80180AE0(arg0, &D_sc03_092_801894D8);
    }
}

void func_sc03_092_80180BF4(void) {
}

void func_sc03_092_80180BFC(u8 *p) {
    s32 r;
    u8 *o;

    r = func_8012C1B8();
    AF(p, s32, 0x20) = r;
    if (r == 0) {
        func_8012CAE4(p);
        return;
    }
    if (func_80029178(D_sc03_092_801AC610[AF(p, s16, 0x70)]) & 0xFF) {
        o = AF(p, u8 *, 0xDC);
        if (o != 0 && AF(o, s32, 4) != 0) {
            func_8001C214(AF(p, s32, 0x20), AF(o, s32, 4));
            if (AF(o, s32, 0xC) != 0) {
                AF(AF(p, u8 *, 0x20), s32, 4) |= 0x01000000;
            }
        }
        func_8012AD50(p);
    } else {
        o = AF(p, u8 *, 0xDC);
        if (o != 0 && AF(o, s32, 0) != 0) {
            func_8001C214(AF(p, s32, 0x20), AF(o, s32, 0));
            if (AF(o, s32, 0xC) != 0) {
                AF(AF(p, u8 *, 0x20), s32, 4) |= 0x01000000;
            }
        }
        AF(p, u8, 0xC0) = 1;
        AF(p, u8 *, 0xBC) = &D_sc03_092_801AC600;
        AF(p, s32, 0x58) = (s32) &D_sc03_092_801AC5F0 | 0x40000000;
        AF(p, u16, 0x5C) = 0x8800;
        AF(p, s32, 0xB4) = 0;
        AF(p, u8, 0xC1) = 0;
        AF(p, s16, 0xAE) = 0x7FFF;
        AF(p, u8, 0x75) = 0;
        AF(p, s32, 0xC4) |= 2;
    }
    func_8012AD50(p);
}

void func_sc03_092_80180D80(u8 *arg0) {
    D_sc03_092_801AC620[AF(arg0, u16, 2)]();
    func_sc03_092_80180EC8((s32) arg0);
}

void func_sc03_092_80180DD0(u8 *arg0) {
    void *p;
    s32 t;

    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, s16, 0x5E) = 0;
    AF(arg0, s16, 0x5C) = 0;
    func_80029124(D_sc03_092_801AC610[AF(arg0, s16, 0x70)], 1);
    p = AF(arg0, void *, 0xDC);
    if (p != NULL) {
        t = AF(p, s32, 4);
        if (t != 0) {
            func_8001C924(AF(arg0, s32, 0x20), t);
        }
    }
    func_sc03_092_80180E50((s32) arg0);
}

s32 func_sc03_092_80180E50(s32 arg0) {
    s32 temp_s2;
    s32 var_s0;
    void *temp_v0;
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    temp_s2 = AF(temp_v1, s32, 0x20);
    var_s0 = 0;
    AF(temp_v1, s32, 0x20) = (s32) D_sc03_092_801AC5D8;
    do {
        func_8012C658(0x150, var_s0, arg0);
        var_s0 += 1;
    } while (var_s0 < 5);
    temp_v0 = AF(arg0, void *, 0x20);
    AF(temp_v0, s32, 0x20) = temp_s2;
    return (s32) temp_v0;
}

void func_sc03_092_80180EC8(u8 *arg0) {
    u8 *p;
    type_2 fn;

    p = AF(arg0, u8 *, 0xDC);
    if (p != NULL) {
        fn = AF(p, type_2, 0xC);
        if (fn != NULL) {
            fn(arg0, arg0 + 0x24);
        }
    }
}

void func_sc03_092_80180F08(u8 *p) {
    s32 r;
    u8 *o;
    u8 *q;

    r = func_8012C1B8();
    AF(p, s32, 0x20) = r;
    if (r == 0) {
        func_8012CAE4(p);
        return;
    }
    o = AF(AF(p, u8 *, 0x64), u8 *, 0xDC);
    if (o != 0 && AF(o, s32 *, 8) != 0) {
        D_sc03_092_801B2EB0[AF(p, s16, 0x70)].field_0 = AF(o, s32 *, 8)[AF(p, s16, 0x70)];
    }
    D_sc03_092_801B2EB0[AF(p, s16, 0x70)].field_4 = 0;
    func_8001C214(AF(p, s32, 0x20), &D_sc03_092_801B2EB0[AF(p, s16, 0x70)]);
    if (AF(o, s32, 0xC) != 0) {
        AF(AF(p, u8 *, 0x20), s32, 4) |= 0x01000000;
    }
    AF(p, s16, 6) = AF(p, s16, 0xA) = AF(p, s16, 0xE) = 0;
    func_80132784(p, AF(p, u8 *, 0x64), AF(p, u16, 0x70));
    AF(p, s16, 6) = AF(AF(p, u8 *, 0x20), s32, 0x48);
    AF(p, s16, 0xA) = AF(AF(p, u8 *, 0x20), s32, 0x4C);
    AF(p, s16, 0xE) = AF(AF(p, u8 *, 0x20), s32, 0x50);
    AF(AF(p, u8 *, 0x20), struct_8_11, 0x10) = AF(AF(AF(p, u8 *, 0x64), u8 *, 0x20), struct_8_11, 0x10);
    func_8012B23C(p);
    ApplyMatrixLV(AF(AF(p, u8 *, 0x64), u8 *, 0x20) + 0x34, &D_sc03_092_801AC62C[AF(p, s16, 0x70)], p + 0x10);
    AF(p, s16, 0xFC) = rand() & 0xF0;
    AF(p, s16, 0xFE) = rand() & 0x1F0;
    AF(p, s16, 0x100) = rand() & 0x30;
    q = func_80132EF4(p, 0x22);
    if (q != 0) {
        AF(q, s16, 0x34) = 0x4001;
        AF(q, s32, 0x10) = AF(p, s32, 0x10) >> 2;
        AF(q, s32, 0x14) = AF(p, s32, 0x14) >> 2;
        AF(q, s32, 0x18) = AF(p, s32, 0x18) >> 2;
    }
    AF(p, s32, 0x1C) = 0x20;
    func_8012AD50(p);
}

void func_sc03_092_80181124(u8 *arg0) {
    D_sc03_092_801AC67C[AF(arg0, u16, 2)]();
}

void func_sc03_092_80181160(void) {
}

void func_sc03_092_80181168(void) {
}

void func_sc03_092_80181170(u8 *arg0) {
    s32 r;

    AF(AF(arg0, u8 *, 0x20), u16, 0x10) += AF(arg0, u16, 0xFC);
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) += AF(arg0, u16, 0xFE);
    AF(AF(arg0, u8 *, 0x20), u16, 0x14) += AF(arg0, u16, 0x100);
    r = func_8012CBF4(arg0);
    if (AF(arg0, s16, 0xA) > 0x100) {
        func_8012C218(arg0);
    }
    if (AF(arg0, u16, 0x34) != 0) {
        if (r & 0x6000) {
            func_8012C218(arg0);
        }
    } else if (r & 0x6000) {
        AF(arg0, s32, 0x14) = -0x80000;
        AF(arg0, s16, 0xFC) >>= 1;
        AF(arg0, s16, 0xFE) >>= 1;
        AF(arg0, u16, 0x34)++;
        AF(arg0, s16, 0x100) >>= 1;
    }
}

void func_sc03_092_80181274(u8 *arg0) {
    struct_8_7 a;
    struct_8_7 b;
    s32 y;
    s32 i;
    s32 t;
    s32 k;

    k = AF(arg0, s16, 0xA) + 0x20;
    y = D_80126B62 - k;
    if (y < -0x110) {
        y = -0x110;
    } else if (y > 0) {
        y = 0;
    }
    a.field_2 = y;
    b.field_2 = y;
    for (i = 0; i < 20; i += 4) {
        a.field_0 = D_sc03_092_801AD330[i];
        a.field_4 = D_sc03_092_801AD330[i + 1];
        b.field_0 = D_sc03_092_801AD330[i + 2];
        b.field_4 = D_sc03_092_801AD330[i + 3];
        if (func_8012DEB8(arg0, &a, &b) == 1) {
            D_80126B96 = 0x4004;
        }
    }
    for (i = 0; i < 20; i += 4) {
        a.field_0 = D_sc03_092_801AD358[i];
        a.field_4 = D_sc03_092_801AD358[i + 1];
        b.field_0 = D_sc03_092_801AD358[i + 2];
        b.field_4 = D_sc03_092_801AD358[i + 3];
        if (func_8012DEB8(arg0, &a, &b) == 1) {
            D_80126B96 = 0x4004;
        }
    }
    for (i = 0; i < 20; i += 4) {
        a.field_0 = D_sc03_092_801AD380[i];
        a.field_4 = D_sc03_092_801AD380[i + 1];
        b.field_0 = D_sc03_092_801AD380[i + 2];
        b.field_4 = D_sc03_092_801AD380[i + 3];
        if (func_8012DEB8(arg0, &a, &b) == 1) {
            D_80126B96 = 0x4004;
        }
    }
    D_sc03_092_801AD3A8[AF(arg0, u16, 2)](arg0);
    t = func_8012BD14(arg0);
    if (t > 0x3FFFF) {
        AF(arg0, s16, 0xFE) = 1;
        func_8002D59C(4, 0x609, AF(arg0, u16, 0x70));
    } else if (--AF(arg0, s16, 0xFE) == 0) {
        AF(arg0, s16, 0xFE) = 4;
        func_8002D59C(0x609, (u16)(((0x40000 - t) * 0x7F / 0x40000) | 0x1000), AF(arg0, u16, 0x70));
    }
}

void func_sc03_092_8018150C(u8 *arg0) {
    u8 unused[0x10];
    struct_8_7 a;
    struct_8_7 b;
    struct_8_7 c;
    u8 *p;
    s32 i;
    s32 ang;

    p = &D_801202A0;
    i = 0;
    D_sc03_092_801AD3F4[AF(arg0, u16, 2)]();
    do {
        if (AF(p, u16, 0) == 300) {
            a.field_0 = AF(p, u16, 6);
            a.field_2 = AF(p, u16, 0xA);
            a.field_4 = AF(p, u16, 0xE);
            ang = func_8012B6D4(arg0 + 4, p + 4);
            if (AF(AF(arg0, u8 *, 0x64), s16, 0xFC) < 0) {
                ang -= 0x400;
            } else {
                ang += 0x400;
            }
            ang &= 0xFFF;
            a.field_0 -= rsin(ang) >> 8;
            a.field_4 -= rcos(ang) >> 8;
            b.field_0 = AF(p, u16, 6);
            b.field_2 = AF(p, u16, 0xA);
            b.field_4 = AF(p, u16, 0xE);
            c = b;
            if (func_80135888(AF(arg0, s32, 0x20), AF(arg0, s32, 0x58), &a, &c) != 0) {
                AF(p, u16, 6) = a.field_0;
                AF(p, u16, 0xE) = a.field_4;
            }
        }
        i++;
        p += 0x10C;
    } while (i < 0x60);
}

void func_sc03_092_80181694(s32 arg0) {
    s32 o;

    o = func_8012C1B8();
    AF(arg0, s32, 0x20) = o;
    if (o == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8012B23C(arg0);
    AF(arg0, u16, 0x12) = D_sc03_092_801AD698[AF(arg0, s16, 0xFC)].field_0;
    AF(arg0, u16, 0x16) = D_sc03_092_801AD698[AF(arg0, s16, 0xFC)].field_2;
    AF(arg0, u16, 0x1A) = D_sc03_092_801AD698[AF(arg0, s16, 0xFC)].field_4;
    switch (AF(arg0, s16, 0x70)) {
    case 0:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_092_801AD3FC);
        func_8012A828(arg0, &D_sc03_092_801AD4BC);
        AF(arg0, s16, 2) = 1;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x2000;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x2000;
        break;
    case 1:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_092_801AD544);
        func_8012A828(arg0, &D_sc03_092_801AD604);
        AF(arg0, s16, 2) = 4;
        AF(AF(arg0, s32, 0x20), s32, 4) |= 0x80000000;
        AF(arg0, s32, 0x1C) = 8;
        AF(AF(arg0, s32, 0x20), s16, 0x1C) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3C00;
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, u8 *, 0x58) = &D_sc03_092_801AD6E8;
        AF(arg0, u16, 0x5C) = 0x8000;
        AF(arg0, s16, 0xAE) = -9;
        AF(arg0, u8 *, 0xBC) = &D_sc03_092_801AD70C;
        AF(arg0, s32, 0xB4) = 0;
        AF(arg0, u8 *, 0x78) = &D_sc03_092_801AD3C0;
        AF(arg0, s32, 0xC4) |= 2;
        AF(arg0, s32, 0xCC) = func_8012C658(0x12F, 4, arg0);
        break;
    case 2:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_092_801AD3FC);
        func_8012A828(arg0, &D_sc03_092_801AD4BC);
        AF(arg0, s16, 2) = 6;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x2000;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x2000;
        break;
    case 3:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_092_801AD544);
        func_8012A828(arg0, &D_sc03_092_801AD604);
        AF(arg0, s16, 2) = 7;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3C00;
        AF(arg0, s32, 0x1C) = 6;
        break;
    case 4:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_092_801AD6F8);
        func_8012A828(arg0, &D_sc03_092_801AD704);
        AF(arg0, s16, 2) = 8;
        AF(AF(arg0, s32, 0x20), s32, 4) |= 0x08000000;
        AF(AF(arg0, s32, 0x20), s16, 0x1C) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3C00;
        break;
    case 5:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_092_801AD3FC);
        func_8012A828(arg0, &D_sc03_092_801AD4BC);
        AF(arg0, s16, 2) = 9;
        AF(arg0, u16, 0xFE) = AF(AF(arg0, s32, 0x64), u16, 0x36);
        AF(AF(arg0, s32, 0x20), s32, 4) |= 0x80000000;
        AF(arg0, s16, 0x100) = AF(AF(arg0, s32, 0x64), s16, 0xFE) * 6;
        if (AF(AF(arg0, s32, 0x64), s16, 0x70) == 5) {
            AF(arg0, s16, 0x12) = rand() % 96 - 0x30;
            AF(arg0, s16, 0x16) = rand() % 96 - 0x60;
            AF(arg0, s16, 0x1A) = rand() % 96 - 0x40;
        } else if (AF(AF(arg0, s32, 0x64), s16, 0x70) == 6) {
            AF(arg0, s16, 0x12) = rand() % 96 - 0x30;
            AF(arg0, s16, 0x16) = rand() % 32 - 0x20;
            AF(arg0, s16, 0x1A) = rand() % 96 - 0x50;
        }
        break;
    }
    AF(arg0, s32, 0x94) = rand() & 0xF;
    AF(AF(arg0, s32, 0x20), s32, 4) |= 0x50000000;
    AF(AF(arg0, s32, 0x20), u16, 0x2C) |= 0x10;
}

void func_sc03_092_80181B40(u8 *arg0) {
    AF(AF(arg0, u8 *, 0x20), s32, 4) = AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), s32, 4);
    AF(AF(arg0, u8 *, 0x20), s32, 4) &= 0xEFFFFFFF;
    AF(AF(arg0, u8 *, 0x20), s32, 4) |= 0x08000000;
    AF(AF(arg0, u8 *, 0x20), s32, 4) |= 0x60000000;
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) = AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), u16, 0x12);
    AF(arg0, s32, 4) = AF(AF(arg0, u8 *, 0x64), s32, 4) - (rsin(AF(AF(arg0, u8 *, 0x20), u16, 0x12) & 0xFFF) << 8);
    AF(arg0, s32, 8) = AF(AF(arg0, u8 *, 0x64), s32, 8);
    AF(arg0, s32, 0xC) = AF(AF(arg0, u8 *, 0x64), s32, 0xC) - (rcos(AF(AF(arg0, u8 *, 0x20), u16, 0x12) & 0xFFF) << 8);
    AF(AF(arg0, u8 *, 0x20), s16, 0x18) = (s16) AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), u16, 0x18) / 2;
    AF(AF(arg0, u8 *, 0x20), s16, 0x1A) = (s16) AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), u16, 0x1A) / 2;
    AF(AF(arg0, u8 *, 0x20), s16, 0x1C) = (s16) AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), u16, 0x1C) / 2;
}

void func_sc03_092_80181CD4(u8 *arg0) {
    struct_8_5 in;
    struct_8_5 out;
    s32 flag;
    u8 *m;
    s32 n;

    if (AF(arg0, s16, 0xFE) != AF(AF(arg0, u8 *, 0x64), s16, 0x36)) {
        func_8012C218(arg0);
        return;
    }
    if (AF(AF(arg0, u8 *, 0x64), u16, 0x100) & 0x4000) {
        AF(AF(arg0, u8 *, 0x20), s16, 0x18) -= 0x200;
        AF(AF(arg0, u8 *, 0x20), s16, 0x1A) -= 0x200;
        if (AF(AF(arg0, u8 *, 0x20), s16, 0x18) < 0x200) {
            func_80143B6C(arg0, 0);
            func_8012C218(arg0);
            return;
        }
    } else {
        if (--AF(arg0, s16, 0x100) < 9) {
            AF(arg0, s16, 0x100) = 0x18;
            if (AF(AF(arg0, u8 *, 0x64), s16, 0x70) == 5) {
                AF(arg0, s16, 0x12) = rand() % 56 - 0x1C;
                AF(arg0, s16, 0x16) = rand() % 96 - 0x60;
                AF(arg0, s16, 0x1A) = rand() % 56 - 0x2C;
            } else if (AF(AF(arg0, u8 *, 0x64), s16, 0x70) == 6) {
                AF(arg0, s16, 0x12) = rand() % 56 - 0x1C;
                AF(arg0, s16, 0x16) = rand() % 32 - 0x20;
                AF(arg0, s16, 0x1A) = rand() % 128 - 0x60;
            }
        }
        n = AF(arg0, s16, 0x100);
        if (n < 0x10) {
            AF(AF(arg0, u8 *, 0x20), s16, 0x18) = AF(AF(arg0, u8 *, 0x20), s16, 0x1A) = n * 0x300;
        } else {
            AF(AF(arg0, u8 *, 0x20), s16, 0x18) = AF(AF(arg0, u8 *, 0x20), s16, 0x1A) = (0x20 - n) * 0x300;
        }
    }
    if (AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), s32, 4) & 0x80000000) {
        AF(AF(arg0, u8 *, 0x20), s32, 4) |= 0x80000000;
    } else {
        AF(AF(arg0, u8 *, 0x20), s32, 4) &= 0x7FFFFFFF;
    }
    AF(arg0, s32, 4) = AF(AF(arg0, u8 *, 0x64), s32, 4);
    AF(arg0, s32, 8) = AF(AF(arg0, u8 *, 0x64), s32, 8);
    AF(arg0, s32, 0xC) = AF(AF(arg0, u8 *, 0x64), s32, 0xC);
    in.field_0 = AF(arg0, s16, 0x12);
    in.field_2 = AF(arg0, s16, 0x16);
    in.field_4 = AF(arg0, s16, 0x1A);
    m = AF(AF(arg0, u8 *, 0x64), u8 *, 0x20) + 0x34;
    gte_SetRotMatrix(m);
    gte_SetTransMatrix(m);
    RotTransSV(&in, &out, &flag);
    AF(arg0, s16, 6) = out.field_0;
    AF(arg0, s16, 0xA) = out.field_2;
    AF(arg0, s16, 0xE) = out.field_4;
}

void func_sc03_092_80182084(u8 *arg0) {
    s32 temp_v0;

    D_sc03_092_801AD71C[AF(arg0, u16, 2)]();
    if ((AF(arg0, u16, 0) != 0) && (AF(AF(arg0, void *, 0x20), s32, 4) >= 0)) {
        AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) - 0x40);
        if (func_8012D624((s32) arg0, 0x1C, 0xA) == 1) {
            s16 *q = &D_80126B96;
            *q |= 0x200;
        }
        AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) + 0x40);
        if (AF(arg0, s16, 0x70) == 1) {
            temp_v0 = AF(arg0, s32, 0x1C) - 1;
            AF(arg0, s32, 0x1C) = temp_v0;
            if (temp_v0 == 0) {
                AF(arg0, s32, 0x1C) = 8;
                func_8012C658(0x12F, 3, (s32) arg0);
            }
        }
    }
}

void func_sc03_092_80182170(u8 *arg0) {
    D_sc03_092_801AD7C8[AF(arg0, u16, 2)]();
}

void func_sc03_092_801821AC(u8 *arg0) {
    D_sc03_092_801AD87C[AF(arg0, u16, 2)]();
}

void func_sc03_092_801821E8(u8 *arg0) {
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, s16, 0x5E) = 0;
    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) & 0xC800);
}

void func_sc03_092_80182200(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc03_092_801AD2FC) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32 *, 0xBC) = &D_sc03_092_801AD2DC;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 2);
        func_8012A828(arg0, (s32) &D_sc03_092_8018502C);
        AF(arg0, s16, 2) = 1;
        AF(arg0, u8, 0x75) = 0;
        AF(arg0, s16, 0xFE) = 1;
        func_8012C658(0x164, 0x555, arg0);
        func_8012C658(0x164, 0xAAA, arg0);
        func_8012C658(0x164, 0x1000, arg0);
    }
}

void func_sc03_092_801822A4(u8 *arg0) {
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    AF(temp_a1, u16, 0x12) = (u16) (AF(temp_a1, u16, 0x12) + AF(arg0, u16, 0xFC));
}

void func_sc03_092_801822C0(s32 arg0) {
    void *temp_a2;

    if (func_8012C354(arg0, (s32) &D_sc03_092_801AD3C0) != 0) {
        temp_a2 = AF(arg0, void *, 0x20);
        AF(temp_a2, s32, 4) = (s32) (AF(temp_a2, s32, 4) | 0x80000000);
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32 *, 0xBC) = &D_sc03_092_801AD2DC;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 2);
        func_8012A828(arg0, (s32) &D_sc03_092_8018502C, (s32) temp_a2);
        AF(arg0, s16, 2) = 1;
        AF(arg0, u8, 0x75) = 0;
    }
}

void func_sc03_092_80182344(u8 *arg0) {
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    AF(temp_a1, s16, 0x12) = (s16) (AF(AF(AF(arg0, void *, 0x64), void *, 0x20), u16, 0x12) + AF(arg0, u16, 0x70));
    func_8012B2CC((s32) arg0, (s32) temp_a1);
}

void func_sc03_092_80182380(u8 *arg0) {
    if (AF(arg0, u16, 0x5E) != 0x1D) {
        AF(arg0, s16, 0x5C) = 0;
        AF(arg0, s16, 2) = 7;
    } else {
        AF(arg0, u16, 0x5C) = 0x8000;
    }
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, u16, 0x5E) = 0U;
}

void func_sc03_092_801823B0(s32 arg0) {
    void *temp_a0;

    if (func_8012CBCC(arg0) & 0x2000) {
        if (AF(arg0, s16, 0x70) != 0) {
            AF(arg0, s16, 2) = 2;
            func_8012E688(arg0, 0xBA2, 0);
            return;
        }
        temp_a0 = AF(arg0, void *, 0x20);
        AF(arg0, s16, 2) = 3;
        AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) | 0x80000000);
        AF(arg0, s32, 0x1C) = 0x1E;
    }
}

void func_sc03_092_80182434(u8 *arg0) {
    if (func_8012BCCC(arg0) > 0x63FFF) {
        AF(arg0, s16, 2) = 5;
        return;
    }
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) += func_8012B608(AF(AF(arg0, u8 *, 0x20), s16, 0x12), func_8012B864(arg0), 0x10);
    func_8012B1B4(arg0, &D_sc03_092_801AD68C);
    AF(arg0, s32, 0x14) += (D_80126CB6 - AF(arg0, s16, 0xA)) << 8;
    if (func_8012CBCC(arg0) != 0) {
        AF(arg0, s16, 0x16) = -0x18;
        func_8012E688(arg0, 0xBA2, 0);
    }
}

void func_sc03_092_801824F8(s32 arg0) {
    s32 t;

    t = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = t;
    if (t == 0) {
        AF(arg0, u16, 6) = AF(arg0, u16, 0x88);
        AF(arg0, u16, 0xA) = AF(arg0, u16, 0x8A);
        AF(arg0, u16, 0xE) = AF(arg0, u16, 0x8C);
        AF(AF(arg0, s32, 0x20), s32, 4) &= 0x7FFFFFFF;
        func_8012E688(arg0, 0x679, 0);
        AF(arg0, s16, 2) = 1;
        func_8012B23C(arg0);
        AF(arg0, u16, 0x12) = D_sc03_092_801AD698[AF(arg0, s16, 0xFC)].field_0;
        AF(arg0, u16, 0x16) = D_sc03_092_801AD698[AF(arg0, s16, 0xFC)].field_2;
        AF(arg0, u16, 0x1A) = D_sc03_092_801AD698[AF(arg0, s16, 0xFC)].field_4;
    }
}

void func_sc03_092_801825D8(u8 *arg0) {
    if (func_8012BD14(arg0) <= 0x64000) {
        AF(arg0, s16, 2) = 1;
        AF(AF(arg0, u8 *, 0x20), s32, 4) &= 0x7FFFFFFF;
        func_80143970(arg0);
        func_8012E688(arg0, 0xBA2, 0);
    }
}

void func_sc03_092_80182648(u8 *arg0) {
    struct_8_4 a;

    if (func_8012BCCC(arg0) <= 0x38400) {
        AF(arg0, s16, 2) = 2;
        return;
    }
    a.field_0 = AF(arg0, s16, 6);
    a.field_4 = AF(arg0, s16, 0xE);
    AF(AF(arg0, u8 *, 0x20), s16, 0x12) += func_8012B608(AF(AF(arg0, u8 *, 0x20), s16, 0x12), func_8012B70C(&a, arg0 + 0x88), 4);
    func_8012B1B4(arg0, &D_sc03_092_801AD68C);
    AF(arg0, s32, 0x14) += (AF(arg0, s16, 0x8A) - AF(arg0, s16, 0xA)) << 8;
    if (func_8012CBCC(arg0) & 0x8000) {
        AF(arg0, s16, 0x16) = -4;
        func_8012E688(arg0, 0xBA2, 0);
    }
}

void func_sc03_092_80182724(void) {
}

void func_sc03_092_8018272C(u8 *arg0) {
    s32 t;

    if (AF(arg0, s32, 0x1C) != 0) {
        AF(arg0, s32, 0x1C)--;
    }
    AF(AF(arg0, u8 *, 0x20), u16, 0x18) -= 0x100;
    AF(AF(arg0, u8 *, 0x20), u16, 0x1A) -= 0x100;
    if (AF(AF(arg0, u8 *, 0x20), s16, 0x1A) <= 0x80) {
        if (AF(arg0, s16, 0x70) == 1) {
            t = AF(arg0, s32, 0xCC);
            if (arg0 != NULL) {
                func_8012C218(t);
            }
        }
        func_8002A04C(arg0);
        func_8012C218(arg0);
    }
}

void func_sc03_092_801827E4(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc03_092_801AD754) != 0) {
        func_8012A828(arg0, (s32) &D_sc03_092_8018502C);
        AF(arg0, s16, 2) = 1;
        AF(arg0, u8, 0x75) = 0;
        AF(arg0, u16, 0x12) = D_sc03_092_801AD788[AF(arg0, s16, 0xFC) * 4];
        AF(arg0, u16, 0x16) = D_sc03_092_801AD78A[AF(arg0, s16, 0xFC) * 4];
        AF(arg0, u16, 0x1A) = D_sc03_092_801AD78C[AF(arg0, s16, 0xFC) * 4];
        AF(arg0, s32, 0x1C) = D_sc03_092_801AD78E[AF(arg0, s16, 0xFC) * 4];
        func_8012C588(0x1C4, arg0);
    }
}

void func_sc03_092_801828A8(s32 arg0) {
    s32 temp_v0;

    func_8012CBA4(arg0);
    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == 0) {
        AF(arg0, s32, 0x1C) = 6;
        AF(arg0, s16, 2) = 2;
    }
    func_8012DFD4(arg0);
}

void func_sc03_092_801828FC(s32 arg0) {
    s32 t;

    if (--AF(arg0, s32, 0x1C) == 0) {
        t = D_sc03_092_801AD78E[AF(arg0, s16, 0xFC) * 4];
        AF(arg0, u16, 0x12) = -AF(arg0, u16, 0x12);
        AF(arg0, u16, 0x16) = -AF(arg0, u16, 0x16);
        AF(arg0, u16, 0x1A) = -AF(arg0, u16, 0x1A);
        AF(arg0, s16, 2) = 1;
        AF(arg0, s32, 0x1C) = t;
    }
    func_8012DFD4(arg0);
}

void func_sc03_092_80182978(s32 arg0) {
    s32 o;
    s16 st;

    o = func_8012C1B8();
    AF(arg0, s32, 0x20) = o;
    if (o == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001CA1C(o, &D_sc03_092_801AD7D4);
    func_8012A828(arg0, &D_sc03_092_801AD834);
    AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x10;
    AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x10;
    AF(arg0, s32, 0x94) = rand() & 7;
    AF(AF(arg0, s32, 0x20), s32, 4) |= 0x50000000;
    AF(AF(arg0, s32, 0x20), u16, 0x2C) |= 0x10;
    if ((u16)(AF(arg0, u16, 0x70) - 1) >= 0x6FFF) {
        AF(arg0, u16, 0x70) = rand() & 0x77FF;
        st = 2;
    } else {
        st = 1;
    }
    AF(arg0, s16, 2) = st;
}

void func_sc03_092_80182A5C(u8 *arg0) {
    s32 v;
    u16 a;
    void *p;
    s16 s;

    v = AF(arg0, s32, 0x1C);
    if (v == 0) {
        AF(AF(arg0, void *, 0x20), s32, 4) &= 0x7FFFFFFF;
        a = AF(arg0, u16, 0xFE) + 0x40;
        AF(arg0, u16, 0xFE) = a;
        if ((s16) a >= 0x800) {
            AF(arg0, u16, 0xFE) = 0;
            AF(arg0, s32, 0x1C) = rand() & 0x1F;
            AF(AF(arg0, void *, 0x20), s32, 4) |= 0x80000000;
        }
        s = (AF(arg0, s16, 0x70) * rsin(AF(arg0, s16, 0xFE)) >> 12) + 0x800;
        p = AF(arg0, void *, 0x20);
        AF(p, s16, 0x1A) = s;
        AF(p, s16, 0x18) = s;
    } else {
        AF(arg0, s32, 0x1C) = v - 1;
    }
}

void func_sc03_092_80182B28(u8 *o) {
    s32 n;
    s32 t;
    u8 *p;
    u8 *q;

    n = AF(o, s32, 0x1C);
    if (n == 0) {
        p = AF(o, u8 *, 0x20);
        AF(p, s32, 4) &= 0x7FFFFFFF;
        AF(o, s16, 0xFE) += 0x40;
        if (AF(o, s16, 0xFE) >= 0x800) {
            AF(o, s16, 0xFE) = 0;
            AF(o, s32, 0x1C) = rand() & 0x1F;
            AF(o, s16, 0x70) = rand() & 0x77FF;
            AF(AF(o, u8 *, 0x20), s32, 4) |= 0x80000000;
        }
        t = ((AF(o, s16, 0x70) * rsin(AF(o, s16, 0xFE))) >> 12) + 0x800;
        q = AF(o, u8 *, 0x20);
        AF(q, s16, 0x1A) = t;
        AF(q, s16, 0x18) = t;
    } else {
        AF(o, s32, 0x1C) = n - 1;
    }
}

void func_sc03_092_80182C00(u8 *arg0) {
    D_sc03_092_801AFEA0[AF(arg0, u16, 2)]();
}

void func_sc03_092_80182C3C(u8 *arg0) {
    struct_30_2 *p;

    AF(arg0, s16, 0xFE) = 0;
    switch (AF(arg0, s16, 0xFC)) {
    case 0:
        func_8002850C(D_sc03_092_801AFDC0, D_sc03_092_801AFDC2, D_sc03_092_801AFDC4);
        p = &D_sc03_092_801AFDC8;
        func_8012AD44(arg0, 1);
        break;
    case 1:
        func_8002850C(D_sc03_092_801AFDF8, D_sc03_092_801AFDFA, D_sc03_092_801AFDFC);
        p = &D_sc03_092_801AFE00;
        func_8012AD44(arg0, 2);
        break;
    case 2:
        func_8002850C(D_sc03_092_801AFE30, D_sc03_092_801AFE32, D_sc03_092_801AFE34);
        p = &D_sc03_092_801AFE38;
        func_8012AD44(arg0, 3);
        break;
    case 3:
        func_8002850C(D_sc03_092_801AFDC0, D_sc03_092_801AFDC2, D_sc03_092_801AFDC4);
        p = &D_sc03_092_801AFDC8;
        func_8012AD44(arg0, 4);
        break;
    case 4:
        func_8002850C(D_sc03_092_801AFE68, D_sc03_092_801AFE6A, D_sc03_092_801AFE6C);
        p = &D_sc03_092_801AFE70;
        func_8012AD44(arg0, 5);
        break;
    }
    D_800A5E88.field_0 = p->field_0;
    D_800A5E88.field_10 = p->field_10;
    D_800A5E88.field_20 = p->field_20;
    func_80028620(0, &D_800A5E88.field_0);
    func_80028620(1, &D_800A5E88.field_10);
    func_80028620(2, &D_800A5E88.field_20);
}

void func_sc03_092_80182E30(u8 *arg0) {
    D_800A5E88.field_20 = D_sc03_092_801AFDE8;
    D_800A5EB0 = rsin(AF(arg0, s16, 0xFE)) * 10 / 4096 - 5;
    AF(arg0, u16, 0xFE) = (AF(arg0, u16, 0xFE) + 0x71) & 0xFFF;
    func_80028620(2, &D_800A5E88.field_20);
}

void func_sc03_092_80182EE0(u8 *arg0) {
    D_800A5E88.field_20 = D_sc03_092_801AFE20;
    D_800A5EB0 = rsin(AF(arg0, s16, 0xFE)) * 6 / 4096 - 3;
    AF(arg0, u16, 0xFE) = (AF(arg0, u16, 0xFE) + 0x71) & 0xFFF;
    func_80028620(2, &D_800A5E88.field_20);
}

void func_sc03_092_80182F90(u8 *arg0) {
    D_800A5E88.field_0 = D_sc03_092_801AFE38.field_0;
    D_800A5E90 = rsin(AF(arg0, s16, 0xFE)) * 20 / 4096 - 10;
    AF(arg0, u16, 0xFE) = (AF(arg0, u16, 0xFE) + 0x71) & 0xFFF;
    func_80028620(0, &D_800A5E88);
}

void func_sc03_092_80183040(void) {
}

void func_sc03_092_80183048(u8 *arg0) {
    D_800A5E88.field_0 = D_sc03_092_801AFE70.field_0;
    D_800A5E90 = rsin(AF(arg0, s16, 0xFE)) / 512 + 8;
    AF(arg0, u16, 0xFE) = (AF(arg0, u16, 0xFE) + 0x71) & 0xFFF;
    func_80028620(0, &D_800A5E88);
}

void func_sc03_092_801830EC(u8 *arg0) {
    D_sc03_092_801B01E8[AF(arg0, u16, 2)]();
}

void func_sc03_092_80183128(s32 arg0) {
    s32 temp_v0;

    if (func_8012C354(arg0, (s32) &D_sc03_092_801AFED8) != 0) {
        if (!(func_80029178(D_sc03_092_801AFF40[AF(AF(arg0, void *, 0xDC), u16, 0xA)]) & 0xFF)) {
            AF(arg0, s32, 0xCC) = func_801788B8(arg0, (s32) &func_sc03_092_801837D4);
        } else {
            AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) | 0x4000);
        }
        temp_v0 = func_8012C658(0x8F, (s32) (s16) AF(arg0, u16, 0x70), arg0);
        AF(arg0, s32, 0x6C) = temp_v0;
        if (temp_v0 == 0) {
            func_8012CAE4(arg0);
            return;
        }
        func_8012A828(arg0, (s32) &D_sc03_092_8018502C);
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc03_092_801831FC(u8 *arg0) {
    AF(AF(AF(arg0, void *, 0x6C), void *, 0x20), s16, 0x12) = (s16) ((AF(AF(arg0, void *, 0x20), u16, 0x12) + 0x800) & 0xFFF);
    AF(arg0, s16, 2) = 2;
}

void func_sc03_092_80183224(void) {
}

void func_sc03_092_8018322C(u8 *arg0) {
    s32 *var_a1;
    s32 var_v0;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0xDC);
    if (!(AF(temp_s0, u16, 8) & 0x8000)) {
        if (func_80029178(0x1D) & 0xFF) {
            D_sc03_092_801B0124 = AF(temp_s0, s32, 4);
            if (!(AF(temp_s0, u16, 8) & 0x4000)) {
                var_v0 = D_sc03_092_801B0088[AF(temp_s0, u16, 0xC)];
                goto block_6;
            }
            D_sc03_092_801B0110 = 0;
            func_80029124(D_sc03_092_801B0088[AF(temp_s0, u16, 0xC)], 1);
            D_sc03_092_801B010C = 2;
        } else {
            D_sc03_092_801B0124 = AF(temp_s0, s32, 0);
            var_v0 = D_sc03_092_801B0004[AF(temp_s0, u16, 0xC)];
block_6:
            D_sc03_092_801B010C = 0;
            D_sc03_092_801B0110 = var_v0;
        }
        func_80178CBC((s32) arg0, (s32) &D_sc03_092_801B0138);
    } else {
        var_a1 = &D_sc03_092_801B01A4;
        *var_a1 = AF(temp_s0, s32, 0);
        func_80178CBC((s32) arg0, (s32) (var_a1 - 7));
    }
    AF(arg0, s16, 2) = 4;
    AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) | 0x8000);
}

void func_sc03_092_80183378(u8 *arg0) {
    void *temp_s2;

    temp_s2 = AF(arg0, void *, 0xDC);
    if (func_801789AC((s32) arg0) != 0) {
        func_80178D18((s32) arg0);
        if (func_80029178(D_sc03_092_801AFF40[AF(temp_s2, u16, 0xA)]) & 0xFF) {
            if (D_sc03_092_801AFF40[AF(temp_s2, u16, 0xA)] == 0x54) {
                func_80029514(0x5A);
                func_80029124(0xEA, 1);
            }
            if ((AF(temp_s2, u16, 8) & 0x4000) && (func_80029178(0x1D) & 0xFF)) {
                func_80145EE8(0);
            }
            if (func_sc03_092_8018357C() == 1) {
                func_8002AC00(0x26);
            }
            AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) & 0x8000);
            func_8012C218(AF(arg0, s32, 0xCC));
        }
        AF(arg0, s16, 2) = 2;
    }
}

void func_sc03_092_80183498(u8 *arg0) {
    AF(arg0, s16, 2) = 2;
    func_8012C218(AF(arg0, s32, 0xCC));
}

void func_sc03_092_801834C4(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 1;
}

void func_sc03_092_801834D4(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 2;
}

void func_sc03_092_801834E4(u8 *arg0) {
    func_80029124(D_sc03_092_801AFF40[AF(AF(arg0, void *, 0xDC), u16, 0xA)], 1);
}

void func_sc03_092_80183524(u8 *arg0) {
    func_8014ADA8((s32) &D_80126B58, (s32) AF(AF(arg0, void *, 0xDC), u16, 0xC));
}

s32 func_sc03_092_80183558(void) {
    return func_80174764() == 1;
}

s32 func_sc03_092_8018357C(void) {
    s32 i;

    for (i = 0; i < 0x26; i++) {
        if (!(func_80029178(D_sc03_092_801AFF40[i]) & 0xFF)) {
            return 0;
        }
    }
    return 1;
}

void func_sc03_092_801835E0(u8 *arg0) {
    D_sc03_092_801B0210[AF(arg0, u16, 2)]();
}

void func_sc03_092_8018361C(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc03_092_801AFF0C) != 0) {
        AF(arg0, u16, 0xFC) = (u16) AF(AF(arg0, void *, 0x64), u16, 0x36);
        if (AF(arg0, u16, 0x70) & 0x4000) {
            func_8012A828(arg0, (s32) &D_sc03_092_801AFDB0);
            AF(arg0, s16, 0x5C) = 0;
        } else {
            func_8012A828(arg0, (s32) &D_sc03_092_801AFB90);
        }
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc03_092_801836A4(u8 *arg0, s32 arg1) {
    s16 temp_v1;

    if (AF(arg0, s16, 0xFC) != AF(AF(arg0, void *, 0x64), s16, 0x36)) {
        func_8012C218((s32) arg0, arg1);
        return;
    }
    temp_v1 = AF(arg0, s16, 0xFE);
    if (temp_v1 == 1) {
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x1C) = 0x20;
        func_8012A828((s32) arg0, (s32) &D_sc03_092_801AFBA0);
        AF(arg0, s16, 0x5C) = 0;
        func_8002D4C8(0x5BF, 0);
    } else if (temp_v1 == 2) {
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x1C) = 0x20;
        func_8012A828((s32) arg0, (s32) &D_sc03_092_801AFCA8);
        AF(arg0, u16, 0x5C) = 0x8C00;
    }
}

void func_sc03_092_80183764(u8 *arg0) {
    s32 f;

    if (AF(arg0, s16, 0x98) == 0) {
        f = AF(arg0, s16, 0xFE);
        AF(arg0, s16, 2) = 1;
        if (f == 1) {
            func_8012A828((s32) arg0, (s32) &D_sc03_092_801AFDB0);
        } else {
            func_8012A828((s32) arg0, (s32) &D_sc03_092_801AFB90);
        }
        AF(arg0, s16, 0xFE) = 0;
    }
}

s32 *func_sc03_092_801837D4(u8 *o) {
    struct_8_4 a;
    struct_8_4 b;
    s32 f;
    u8 *p;
    s32 *r;

    p = AF(o, u8 *, 0x64);
    gte_SetRotMatrix((u8 *) D_80126B78 + 0x34);
    gte_SetTransMatrix((u8 *) D_80126B78 + 0x34);
    RotTransSV(&D_sc03_092_801B0200[0], &a, &f);
    RotTransSV(&D_sc03_092_801B0200[1], &b, &f);
    if (func_80135888(AF(p, s32, 0x20), AF(p, s32, 0x58), &a, &b) != 0 && func_8012BDBC(p, 0x300) != 0) {
        AF(p, s16, 2) = 3;
        func_80178BF8();
        r = (s32 *) &func_80172710;
    } else {
        r = NULL;
    }
    return r;
}

void func_sc03_092_801838CC(u8 *arg0) {
    D_sc03_092_801B033C[AF(arg0, u16, 2)]();
}

void func_sc03_092_80183908(u8 *arg0) {
    s32 temp_v0;

    if (func_8012C354((s32) arg0, (s32) (((AF(arg0, u16, 0x70) & 0xF) * 0x34) + &D_sc03_092_801B023C)) != 0) {
        if (!(AF(arg0, u16, 0x70) & 1)) {
            temp_v0 = func_8012C658(0x1E3, 1, (s32) arg0);
            AF(arg0, s32, 0x6C) = temp_v0;
            if (temp_v0 == 0) {
                func_8012CAE4((s32) arg0);
                return;
            }
            AF(arg0, s16, 2) = 1;
            AF(arg0, s32, 0xCC) = func_801788B8((s32) arg0, (s32) &func_sc03_092_80183C04);
            return;
        }
        AF(arg0, s16, 2) = 5;
        AF(arg0, u16, 0x100) = (u16) AF(AF(arg0, void *, 0x64), u16, 0x36);
        func_8012A828((s32) arg0, (s32) &D_sc03_092_801AFB90);
    }
}

void func_sc03_092_801839E0(u8 *arg0) {
    AF(AF(AF(arg0, void *, 0x6C), void *, 0x20), s16, 0x12) = (s16) ((AF(AF(arg0, void *, 0x20), u16, 0x12) + 0x800) & 0xFFF);
    AF(arg0, s16, 2) = 2;
}

void func_sc03_092_80183A08(void) {
}

void func_sc03_092_80183A10(u8 *arg0) {
    AF(arg0, s16, 2) = 4;
    func_80178CBC((s32) arg0, (s32) &D_sc03_092_801B02EC);
}

void func_sc03_092_80183A3C(s32 arg0) {
    if (func_801789AC(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 2;
    }
}

void func_sc03_092_80183A7C(u8 *arg0, s32 arg1) {
    s16 temp_v1;

    if (AF(arg0, s16, 0x100) != AF(AF(arg0, void *, 0x64), s16, 0x36)) {
        func_8012C218((s32) arg0, arg1);
        return;
    }
    temp_v1 = AF(arg0, s16, 0xFE);
    if (temp_v1 == 1) {
        AF(arg0, s16, 2) = 6;
        AF(arg0, s32, 0x1C) = 0x20;
        func_8012A828((s32) arg0, (s32) &D_sc03_092_801AFBA0);
        AF(arg0, s16, 0x5C) = 0;
        func_8002D4C8(0x5BF, 0);
    } else if (temp_v1 == 2) {
        AF(arg0, s16, 2) = 6;
        AF(arg0, s32, 0x1C) = 0x20;
        func_8012A828((s32) arg0, (s32) &D_sc03_092_801AFCA8);
        AF(arg0, u16, 0x5C) = 0x8C00;
    }
}

void func_sc03_092_80183B3C(u8 *arg0, s32 arg1, s32 arg2) {
    if (AF(arg0, s16, 0x98) == 0) {
        if (AF(arg0, s16, 0xFE) == 2) {
            func_8002D4C8(0x888, 0, arg2);
            func_8012A828((s32) arg0, (s32) &D_sc03_092_801AFB90);
        }
        AF(arg0, s16, 2) = 5;
        AF(arg0, s16, 0xFE) = 0;
    }
}

void func_sc03_092_80183BA8(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 1;
}

void func_sc03_092_80183BB8(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 2;
}

s32 func_sc03_092_80183BC8(void) {
    return D_sc03_092_801B2F2C == 1;
}

void func_sc03_092_80183BE0(u8 *arg0) {
    func_800296F8(AF(arg0, s32, 0xDC));
}

s32 *func_sc03_092_80183C04(u8 *o) {
    struct_20_5 m;
    struct_8_4 a;
    struct_8_4 b;
    s32 flag;
    u8 *q;

    q = AF(o, u8 *, 0x64);
    m = AF(D_80126B78, struct_20_5, 0x34);
    gte_SetRotMatrix(&m);
    gte_SetTransMatrix(&m);
    RotTransSV(&D_sc03_092_801B0358[0], &a, &flag);
    RotTransSV(&D_sc03_092_801B0358[1], &b, &flag);
    if (func_80135888(AF(AF(o, u8 *, 0x64), s32, 0x20), AF(AF(o, u8 *, 0x64), s32, 0x58), &a, &b) != 0
        && func_8012BDBC(q, 0x300) != 0) {
        AF(q, s16, 2) = 3;
        func_80178BF8();
        return (s32 *)&func_80172710;
    }
    return 0;
}

void func_sc03_092_80183D58(s32 arg0) {
    u8 unused[8];
    s32 o;
    s32 k;
    struct_8_17 *r;
    s16 c;
    s32 i;
    s32 t;

    o = func_8012C194();
    if (o == 0) {
        func_8012CAE4(arg0);
        return;
    }
    t = AF(arg0, u16, 0x72);
    k = AF(arg0, s16, 0x70);
    AF(arg0, s32, 0x20) = o;
    t |= 0x1000;
    t &= 0xFFFF;
    AF(arg0, u16, 0x72) = t;
    i = k;
    k &= 0x8000;
    if (k) {
        i &= 1;
        r = &D_sc03_092_801B03D4[i];
        func_8001CB6C(o, D_sc03_092_801B03E4[i], r->field_0, r->field_2);
        c = r->field_4;
        AF(o, s16, 0x10) = 0x400;
        AF(o, s16, 0x1A) = 0x2000;
        AF(o, s16, 0x18) = 0x2000;
        AF(o, u8, 0x27) = c;
    } else {
        func_8001CF00(o);
        AF(o, s32 *, 0x20) = &D_sc03_092_801B2ED8;
        AF(o, s16, 0x28) = 0x300;
        AF(o, s16, 0x2A) = 0x110;
        AF(o, u8, 0x27) = 0x78;
        AF(o, s16, 0x10) = 0x400;
        AF(o, s16, 0x1A) = 0x800;
        AF(o, s16, 0x18) = 0x800;
        if (!(AF(arg0, u16, 0x70) & 3)) {
            func_800233CC(&D_sc03_092_801B2ED8, 0x80);
        }
        if (AF(arg0, u16, 0x70) & 1) {
            D_sc03_092_801B036C[(AF(arg0, u16, 0x70) & 3) * 6] = 0x10;
            AF(o, s16, 0x14) = 0x400;
        } else {
            D_sc03_092_801B036C[(AF(arg0, u16, 0x70) & 3) * 6] = 0x20;
            AF(o, s32, 4) |= 0x40000000;
            if (AF(arg0, u16, 0x70) & 0x4000) {
                func_8002D4C8(0x701, 0);
            }
            if (AF(arg0, u16, 0x70) & 0x2000) {
                if (!(func_800291B4(AF(arg0, s16, 0xFC)) & 0xFF)) {
                    AF(arg0, u16, 0x70) |= 0x4000;
                } else {
                    AF(arg0, u16, 0x70) &= 0xDFFF;
                }
            }
            func_8012C658(0x1E1, (s16) (AF(arg0, u16, 0x70) | 1), arg0);
        }
        D_sc03_092_801B036E[(AF(arg0, u16, 0x70) & 3) * 6] = 0x20;
        if (AF(arg0, u16, 0x70) & 0x4000) {
            AF(o, s16, 0x1A) = 0;
            AF(o, s16, 0x18) = 0;
        }
    }
    func_8012AD50(arg0);
}

s32 func_sc03_092_80183FB0(s32 arg0) {
    D_sc03_092_801B03F0[0] = AF(arg0, u16, 6) | (AF(arg0, s16, 0xE) << 0x10);
    func_80178B18(arg0, (s32) (D_sc03_092_801B03F0 - 0x1), D_sc03_092_801B03F0);
    return func_8012AD44(arg0, 2);
}

void func_sc03_092_80184004(u8 *arg0) {
    D_sc03_092_801B0404[AF(arg0, u16, 2)]();
}

void func_sc03_092_80184040(s32 arg0) {
    s32 temp_s1;
    u16 temp_v0;
    u16 temp_v0_2;
    void *temp_s2;

    temp_s1 = AF(arg0, s32, 0x20);
    temp_s2 = ((AF(arg0, u16, 0x70) & 3) * 0xC) + &D_sc03_092_801B0368;
    func_sc03_092_80184370(temp_s1, (s32) temp_s2);
    if (AF(arg0, u16, 0x70) & 1) {
        AF(temp_s1, u16, 0x14) = (u16) (AF(temp_s1, u16, 0x14) - 4);
        temp_v0 = AF(temp_s2, u16, 4) + 1;
        AF(temp_s2, u16, 4) = temp_v0;
        if ((s16) temp_v0 >= 0x30) {
            AF(temp_s2, u16, 4) = 0x10U;
        }
    } else {
        AF(temp_s1, u16, 0x14) = (u16) (AF(temp_s1, u16, 0x14) + 4);
        temp_v0_2 = AF(temp_s2, u16, 4) - 1;
        AF(temp_s2, u16, 4) = temp_v0_2;
        if ((s16) temp_v0_2 < 0x11) {
            AF(temp_s2, u16, 4) = 0x30U;
        }
    }
}

s32 func_sc03_092_8018412C(s32 arg0, s32 arg1) {
    struct_C_4 v;
    struct_C_4 r;
    s16 dy;

    v.field_0 = AF(arg0, s16, 6) - D_80126B5E;
    v.field_4 = 0;
    v.field_8 = AF(arg0, s16, 0xE) - (s16) D_80126B66;
    Square0(&v, &r);
    dy = D_80126B62 - AF(arg0, u16, 0xA);
    if (dy < 0) {
        dy = -dy;
    }
    if (r.field_0 + r.field_8 < (u16) arg1 * (u16) arg1 && dy < 4) {
        return 1;
    }
    return 0;
}

void func_sc03_092_801841EC(void) {
    u8 *p;
    s32 i;

    p = (u8 *) &D_801202A0;
    i = 0;
    do {
        if (AF(p, u16, 0) == 0x1E1) {
            AF(p, u16, 0x70) |= 0x1000;
        }
        i++;
        p += 0x10C;
    } while (i < 0x60);
}

void func_sc03_092_8018423C(u8 *arg0) {
    s16 temp_v0;
    s16 temp_v0_2;
    void *temp_s1;

    temp_v0 = AF(arg0, s16, 0x70);
    temp_s1 = AF(arg0, void *, 0x20);
    if (!(temp_v0 & 0x8000)) {
        if (temp_v0 & 0x2000) {
            if (temp_v0 & 0x1000) {
                AF(arg0, s16, 0x70) = (s16) (temp_v0 & 0xDFFF);
                func_8002D4C8(0x701, 0);
                goto block_4;
            }
        } else {
block_4:
            temp_v0_2 = AF(temp_s1, s16, 0x18);
            if (temp_v0_2 < 0x800) {
                AF(temp_s1, s16, 0x18) = (s16) (temp_v0_2 + 0x40);
                AF(temp_s1, u16, 0x1A) = (u16) (AF(temp_s1, u16, 0x1A) + 0x40);
            } else if (!((u16) AF(arg0, s16, 0x70) & 1) && (func_sc03_092_8018412C((s32) arg0, 0x30) != 0)) {
                func_sc03_092_80183FB0((s32) arg0);
                func_80029124(0xAE, 0);
                func_80029124(0xAF, 0);
                func_80029124(0xB0, 0);
            }
            func_sc03_092_80184040((s32) arg0);
        }
    }
}

void func_sc03_092_80184324(s32 arg0, s32 arg1) {
    if (func_80178970(arg0, arg1) != 0) {
        func_80178D18(arg0);
        func_800D1724(AF(arg0, s32, 0xDC));
    }
    func_sc03_092_80184040(arg0);
}

void func_sc03_092_80184370(u8 *arg0, s32 arg1) {
    struct_8_5 pos;
    struct_8_5 v[3];
    struct { s32 field_0[13]; s32 field_34[6]; } s;
    s32 flag;
    s32 z;
    s32 flag2;
    u32 *ot;
    struct_40 *p;
    s32 i;
    s32 d;
    u16 t;

    ot = ((u32 (*)[0x1000]) D_800A6610)[D_800B9A02[0]];
    p = AF(arg0, struct_40 *, 0x20);
    if (p == 0) {
        return;
    }
    if (AF(arg0, s32, 0x34) != 0) {
        func_8001E094();
    } else {
        func_8001E378(arg0);
    }
    pos.field_0 = AF(arg0, s16, 0x2E);
    pos.field_2 = AF(arg0, s16, 0x30);
    pos.field_4 = AF(arg0, s16, 0x32);
    gte_ldv0(&pos);
    gte_rtps();
    gte_stsxy(&s.field_0[0]);
    gte_stflg(&flag);
    gte_stszotz(&z);
    if (flag & ~0x1000) {
        return;
    }
    d = z + 1;
    t = AF(arg0, u16, 0x2C);
    if (t & 0xC000) {
        if ((t & 0xC000) == 0xC000) {
            d -= t & 0xFFF;
            if (d < 0) {
                d = 0;
            }
        } else {
            d += t & 0xFFF;
        }
    }
    if (d >= 0x1000) {
        return;
    }
    if (AF(arg0, s16, 0x1E) & 0x8000) {
        for (i = 0; i < 12; i += 6) {
            v[0].field_0 = pos.field_0 + p->field_10[i].field_0;
            v[0].field_2 = pos.field_2 + p->field_10[i].field_2;
            v[0].field_4 = pos.field_4;
            v[1].field_0 = pos.field_0 + p->field_10[i + 2].field_0;
            v[1].field_2 = pos.field_2 + p->field_10[i + 2].field_2;
            v[1].field_4 = pos.field_4;
            v[2].field_0 = pos.field_0 + p->field_10[i + 4].field_0;
            v[2].field_2 = pos.field_2 + p->field_10[i + 4].field_2;
            v[2].field_4 = pos.field_4;
            gte_ldv3(&v[0], &v[1], &v[2]);
            gte_rtpt();
            gte_stsxy3(&s.field_0[i + 1], &s.field_0[i + 3], &s.field_0[i + 5]);
        }
        for (i = 1; i < 12; i += 2) {
            v[0].field_0 = pos.field_0 + p->field_10[i].field_0;
            v[0].field_2 = pos.field_2 + p->field_10[i].field_2;
            v[0].field_4 = pos.field_4;
            gte_ldv0(&v[0]);
            gte_rtps();
            gte_stsxy(&s.field_0[i + 1]);
            gte_stflg(&flag2);
            gte_stszotz(&z);
            *(s.field_34 + (i >> 1)) = z + 1;
        }
        func_sc03_092_8018478C(arg0, arg1, s.field_0, ot);
    } else {
        for (i = 0; i < 12; i += 3) {
            v[0].field_0 = pos.field_0 + p->field_10[i].field_0;
            v[0].field_2 = pos.field_2 + p->field_10[i].field_2;
            v[0].field_4 = pos.field_4;
            v[1].field_0 = pos.field_0 + p->field_10[i + 1].field_0;
            v[1].field_2 = pos.field_2 + p->field_10[i + 1].field_2;
            v[1].field_4 = pos.field_4;
            v[2].field_0 = pos.field_0 + p->field_10[i + 2].field_0;
            v[2].field_2 = pos.field_2 + p->field_10[i + 2].field_2;
            v[2].field_4 = pos.field_4;
            gte_ldv3(&v[0], &v[1], &v[2]);
            gte_rtpt();
            gte_stsxy3(&s.field_0[i + 1], &s.field_0[i + 2], &s.field_0[i + 3]);
        }
        func_sc03_092_8018478C(arg0, arg1, s.field_0, &ot[d]);
    }
}

void func_sc03_092_8018478C(u8 *o, u8 *s, u8 *v, u32 *ot) {
    struct_28 *p;
    struct_8_9 *m;
    struct_44 *uv;
    u32 fl;
    s32 tp, sh, i;
    u16 x, y;
    s32 code, abr, tpage, clut, c, tb;
    u32 ty;
    u16 u;
    u8 u0, v0;
    u16 vv;
    s32 t;
    u16 u1, v1;
    u16 sflag;

    p = (struct_28 *)D_800A5E60;
    sflag = *(u16 *)(o + 0x1E) & 0x8000;
    fl = *(u32 *)(o + 4);
    tp = (fl >> 24) & 3;
    sh = 2 - tp;
    x = *(u16 *)(o + 0x28) + (*(s16 *)(s + 4) >> sh);
    y = *(u16 *)(o + 0x2A) + *(u16 *)(s + 6);
    uv = *(struct_44 **)(o + 0x20);
    D_800A5E60 = (u8 *)p + 0xF0;
    if (fl & 0x40000000) {
        code = 0x2E;
        abr = (fl >> 28) & 3;
    } else {
        code = 0x2C;
        abr = 1;
    }
    tb = (tp << 7) | (abr << 5);
    ty = y & 0x100;
    tpage = tb | (ty >> 4) | ((x & 0x3C0) >> 6) | ((y & 0x200) << 2);
    c = (o[0x27] + 0x100) << 6;
    if (o[0x27] < 0xE0) {
        clut = c | 0x16;
    } else {
        clut = c | 0x10;
    }
    u = ((x - ((tpage & 0xF) << 6)) << sh) + (*(u16 *)(s + 4) & ((1 << sh) - 1));
    u1 = u + s[2] - 1;
    if (u1 > 0xFF) u1 = 0xFF;
    t = y;
    if (tpage & 0x10) {
        vv = t - 0x100;
    } else {
        vv = t;
    }
    v1 = vv + s[3] - 1;
    if (v1 > 0xFF) v1 = 0xFF;
    i = 1;
    u0 = u;
    v0 = vv;
    for (; i < 13; i += 2, p++) {
        ((u8 *)p)[3] = 9;
        p->field_7 = code;
        p->field_16 = tpage;
        p->field_1C = u;
        p->field_1D = vv;
        p->field_C = (uv->field_10[i - 1].field_0 >> 3) + u0;
        p->field_D = (uv->field_10[i - 1].field_2 >> 3) + v0;
        p->field_14 = (uv->field_10[i].field_0 >> 3) + u0;
        p->field_15 = (uv->field_10[i].field_2 >> 3) + v0;
        p->field_24 = (uv->field_10[i + 1].field_0 >> 3) + u0;
        p->field_25 = (uv->field_10[i + 1].field_2 >> 3) + v0;
        p->field_E = clut;
        p->field_4 = o[0x24];
        p->field_5 = o[0x25];
        p->field_6 = o[0x26];
        p->field_8 = *(s16 *)(v + i * 4);
        p->field_A = *(s16 *)(v + i * 4 + 2);
        p->field_10 = *(s16 *)(v + i * 4 + 4);
        p->field_12 = *(s16 *)(v + i * 4 + 6);
        p->field_18 = *(s16 *)(v + 0);
        p->field_1A = *(s16 *)(v + 2);
        p->field_20 = *(s16 *)(v + i * 4 + 8);
        p->field_22 = *(s16 *)(v + i * 4 + 10);
        if (sflag) {
            addPrim(&ot[*(s32 *)(v + (i >> 1) * 4 + 0x34)], p);
        } else {
            addPrim(ot, p);
        }
    }
    p[-1].field_20 = *(s16 *)(v + 4);
    p[-1].field_22 = *(s16 *)(v + 6);
    p[-1].field_24 = u + (uv->field_10[0].field_0 >> 3);
    p[-1].field_25 = (uv->field_10[0].field_2 >> 3) + vv;
    if (fl & 0x40000000) {
        m = (struct_8_9 *)p;
        if (sflag) {
            D_800A5E60 += 0x30;
            for (i = 0; i < 6; i++, m++) {
                ((u8 *)m)[3] = 1;
                m->field_4 = (abr << 5) | 0xE100000A;
                addPrim(&ot[((s32 *)(v + i * 4))[13]], m);
            }
        } else {
            m->field_4 = (abr << 5) | 0xE100000A;
            D_800A5E60 += 8;
            ((u8 *)m)[3] = 1;
            addPrim(ot, m);
        }
    }
}

void func_sc03_092_80184CAC(void) {
}
