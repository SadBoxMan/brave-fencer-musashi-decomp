#include "common.h"
#include "gte.h"
#include "psyq.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc02_000_8017BE9C(void) {
}

void func_sc02_000_8017BEA4(void) {
}

void func_sc02_000_8017BEAC(void) {
}

void func_sc02_000_8017BEB4(void) {
}

typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_4;
typedef struct { s16 field_0[6]; } struct_C_3;
typedef struct { s16 field_0, field_2; } struct_4_2;
typedef struct { struct_4_2 field_0; s16 field_4; s16 field_6; struct_4_2 field_8; s32 field_C; s32 field_10; s32 field_14; s32 field_18; } struct_1C;
typedef struct { s32 field_0, field_4, field_8; } struct_C_4;
extern void func_80146A6C();
extern void (*D_sc02_000_8018E9C4[])();
extern void (*D_sc02_000_8018E614[])();
extern void func_80147324();
extern void func_sc02_000_8017C218();
extern void func_8014708C();
extern void func_801472C8();
extern void func_80146C3C();
extern void (*D_sc02_000_8018E628[])();
extern void func_80147084();
extern void func_801472B4();
extern void (*D_sc02_000_8018E63C[])();
extern void func_800D22E4();
extern void func_sc02_000_8017C910();
extern void (*D_sc02_000_8018E65C[])();
extern void (*D_sc02_000_8018E664[])();
extern u8 D_sc02_000_8018E650;
extern s32 func_800D222C();
extern void func_8001CF30();
extern void func_sc02_000_801803D0();
extern void func_sc02_000_80181D2C();
extern void (*D_sc02_000_8018EA0C[])();
extern void (*D_sc02_000_8018EAC4[])();
extern void (*D_sc02_000_8018EACC[])();
extern void (*D_sc02_000_8018EAD8[])();
extern s32 func_800167F0();
extern void (*D_sc02_000_8018EAE0[])();
extern void (*D_sc02_000_8018ED20[])();
void func_sc02_000_801824E0(u8 *arg0);
extern void (*D_sc02_000_8018ED38[])();
void func_sc02_000_801826C4(u8 *arg0);
extern void func_8016F0E4();
extern void (*D_sc02_000_8018ED5C[])();
void func_sc02_000_80182D00(u8 *arg0);
extern void (*D_sc02_000_8018EDA0[])();
void func_sc02_000_80183238(u8 *arg0);
extern void (*D_sc02_000_8018EDC0[])();
void func_sc02_000_80183718(u8 *arg0);
extern void (*D_sc02_000_8018F2E0[])();
extern void (*D_sc02_000_8018F2E8[])();
extern void (*D_sc02_000_8018F2F4[])();
extern void (*D_sc02_000_8018F2FC[])();
extern void (*D_sc02_000_8018F31C[])();
extern void (*D_sc02_000_8018F394[])();
extern s32 func_8012C1B8();
extern void func_8012CAE4();
extern void func_8001C214();
extern u8 D_sc02_000_8018AF28;
extern u8 D_sc02_000_801DCA30;
extern void (*D_sc02_000_8018F3AC[])();
extern void (*D_sc02_000_8018F3C4[])();
extern void (*D_sc02_000_8018F3D4[])();
extern void (*D_sc02_000_8018F460[])();
extern void (*D_sc02_000_8018F46C[])();
extern void (*D_sc02_000_8018F540[])();
extern void (*D_sc02_000_8018F558[])();
extern void (*D_sc02_000_8018F590[])();
extern void (*D_sc02_000_8018F598[])();
extern void (*D_sc02_000_8018F5A0[])();
extern void (*D_sc02_000_8018F5BC[])();
extern void (*D_sc02_000_8018F6C4[])();
extern void (*D_sc02_000_8018F714[])();
extern void (*D_sc02_000_8018F724[])();
extern void (*D_sc02_000_801A7818[])();
extern void (*D_sc02_000_801A782C[])();
extern void (*D_sc02_000_801A7B28[])();

void func_sc02_000_8017BEBC(s32 arg0) {
    func_80146A6C(0x19, arg0, 0, 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 1);
}

void func_sc02_000_8017BEF8(u8 *arg0) {
    D_sc02_000_8018E614[AF(arg0, u16, 2)]();
}

void func_sc02_000_8017BF34(u8 *arg0) {
    if (AF(arg0, s32, 0x30) == 0) {
        func_80147324((s32) AF(arg0, u16, 0x2E));
    }
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc02_000_8017BF84(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0xC) {
        AF(arg0, u16, 0x12) = (u16) (AF(arg0, u16, 0x12) + 0xE0);
    } else {
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc02_000_8017C218((s32) arg0);
}

void func_sc02_000_8017BFE0(u8 *arg0) {
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
    func_sc02_000_8017C218((s32) arg0);
}

void func_sc02_000_8017C064(u8 *arg0) {
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
    func_sc02_000_8017C218((s32) arg0);
}

void func_sc02_000_8017C1CC(u8 *arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x12) - 0x100;
    AF(arg0, u16, 0x12) = temp_v0;
    if ((temp_v0 << 0x10) > 0) {
        func_sc02_000_8017C218((s32) arg0);
        return;
    }
    func_80146C3C((s32) arg0);
}

extern s32 D_sc02_000_801E8668;
extern s32 func_8012C588();

extern u8 D_sc02_000_8018E6EC;
extern u8 D_sc02_000_801A6F44;
extern void func_8012B2CC();
extern void func_8012B23C();
extern s32 func_8012B14C();
extern u8 D_sc02_000_8018E6F8;
extern u8 D_sc02_000_801A73BC;
extern s32 func_8002D4C8();
extern void func_8012E364();
extern s32 func_8012E470();
extern void func_8012E4C8();
extern s32 func_8012BEE8();
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
extern s32 D_801269E4;
extern s8 D_801269E8;
extern u16 D_80126B5E;
extern u16 D_801274E8;
extern s32 func_80129CF8();
extern s32 D_sc02_000_801E8770;
extern void func_8016EDEC();
extern void func_800167B8();
extern u8 D_800D5A34;
extern s32 func_800CF854();
extern void func_80154274();
extern void func_80146994();
extern s32 func_8014C050();
extern s32 func_8013767C();
extern s32 func_801399F0();
extern void func_80139914();
extern void func_80165770();
extern void func_80175414();
extern void func_80171B44();
extern s32 func_sc02_000_80182744();
extern void (*D_sc02_000_8018ED44[])();
extern s32 func_8001AAA0();
extern void func_80175454();
extern void func_sc02_000_801818C0();
extern u8 D_sc02_000_8018EC34;
extern u8 D_sc02_000_8018ED10;
extern void func_sc02_000_80182BD0();
extern void func_sc02_000_80182CB4();
extern s32 func_8001B23C();
extern void func_801599A4();
extern void func_sc02_000_80181914();
extern u8 D_800D4744;
extern u8 D_sc02_000_801A7F50;
extern u8 D_sc02_000_801A7FF0;
extern void func_80142454();
extern s32 func_sc02_000_80185E88();
extern void func_801466F0();
extern void func_80154150();
extern void func_801477E8();
extern s32 D_80126984;
extern s32 D_80126990;
extern u8 D_sc02_000_8018ED88;
extern s32 func_8013C9C4();
extern void func_80147AD4();
extern void func_801473EC();
extern void func_80172414();
extern void func_80146D90();
extern void func_sc02_000_80185F24();
extern void func_sc02_000_80185F58();
extern s16 D_800B9ABA;
extern u8 D_sc02_000_8018EA90;
extern s32 func_sc02_000_80188F08();
extern void func_8016F094();
extern void func_800D1744();
extern void func_sc02_000_80183B64();
extern void func_sc02_000_80181CE0();
extern void func_sc02_000_80183C94();
extern s32 func_80146E98();
extern void func_80146E90();
extern void func_80146DE8();
extern void func_80146CA0();
extern void func_80162FF4();
extern void func_80162FC0();
extern void func_80162CCC();
extern void (*D_sc02_000_8018F1B4[])();
extern void func_8013D064();
extern u8 D_sc02_000_8018EDDC;
extern u8 D_sc02_000_801B9230;
extern s32 D_sc02_000_801E8754;
extern s32 D_sc02_000_801E8820;
extern void func_80036D58();
extern s32 func_sc02_000_8018623C();
extern void func_sc02_000_80185E00();
extern void func_sc02_000_80181934();
extern s32 func_sc02_000_8018621C();
extern void func_sc02_000_8018483C();
extern s32 D_sc02_000_801E873C;
extern s32 D_sc02_000_801E8750;
extern void func_8013D164();
extern u8 D_sc02_000_8018F210;
extern u8 D_sc02_000_8018F288;
extern void func_8001CA1C();
extern s32 func_8012C218();
extern void func_8012AD80();
extern s32 func_8013BD34();
extern s32 D_sc02_000_801E8010;
extern u8 D_sc02_000_8018F39C;
extern u8 D_sc02_000_801E0294;
extern void func_8001D0E8();
extern void func_8012B200();
extern s32 func_8012CBCC();
extern void func_80143B6C();
extern u8 D_sc02_000_801E10B4;
extern u8 D_sc02_000_801E14AC;
extern void func_8012AD44();
extern s32 func_80128ED8();
extern void func_801292C8();
extern u8 D_sc02_000_8018F5C4;
extern u8 D_sc02_000_8018F684;
extern u8 D_sc02_000_801E8830;
extern s32 func_sc02_000_8018A3C8();
extern void func_800233CC();
extern void func_sc02_000_8018A550();
extern void func_8012AD50();
extern s32 func_sc02_000_8018A3FC();
extern s16 D_800B9A0E;
extern s32 func_8012E544();
extern s16 D_sc02_000_8018F71E;
extern void func_sc02_000_80189C6C();
extern void func_sc02_000_80189D10();
extern u8 D_sc02_000_801A7AD4;

extern u8 D_sc02_000_8018F560;
extern void func_8001CB6C();

extern u8 D_sc02_000_8018EFDC;
extern u8 D_sc02_000_801DF700;
extern u8 D_sc02_000_8018F5A4;
extern u8 D_sc02_000_801AFAC8;

extern u8 D_sc02_000_801A668C;
extern u8 D_sc02_000_801A72C4;
extern u8 D_8012694C;
extern void func_sc02_000_80181AD4();
extern s8 D_80126D6C;
extern u8 D_80126B58;
extern u8 D_800A5E94;
extern u8 D_800A5E95;
extern u8 D_800A5E96;
extern s32 func_8012E504();

extern u8 D_sc02_000_8018E704;
extern void func_8001BFD0();
extern void func_800D0C48();
s32 func_sc02_000_801831A8(s32 arg0, s32 arg1);
extern u16 D_800B99DC[];
extern u8 D_sc02_000_8018B358;
extern s32 func_sc02_000_80185C48();
extern void func_sc02_000_80187354();
extern void func_sc02_000_80187480();
extern s32 D_sc02_000_801E8778;
extern s32 D_sc02_000_801E877C;

extern u8 D_sc02_000_801A6E7C;
extern void func_80143CD4();
extern void func_800CB0E8();
extern u8 D_sc02_000_8018E78C;
extern void func_80130740();

extern void func_sc02_000_80183A78();

extern s32 func_8012CBF4();
extern u8 D_800D3918;
extern s32 func_8012D5E4();
extern s32 D_80126D50;
extern u8 D_sc02_000_801A7804;
extern u8 D_sc02_000_801A7810;
extern s32 func_80132EF4();

extern void func_sc02_000_8018626C();
extern u16 D_800B9AB8;
extern s16 D_sc02_000_801E8832;
extern void func_sc02_000_8018A2A0();

extern u8 D_sc02_000_801A6C5C;

extern u8 D_sc02_000_8018EFF4;
extern s8 D_sc02_000_8018EFF5;
extern s8 D_sc02_000_8018EFF6;
extern s32 func_8001D074();
extern void func_8001CD9C();

extern s32 func_80171B4C();
extern void *D_801151D4;

extern u8 D_sc02_000_8018F034;
extern u8 D_sc02_000_8018F03C;
extern void func_8012F14C();
typedef struct { s32 field_0; s32 field_4; s32 field_8; s8 field_C; s8 field_D; s8 field_E; } struct_10;
extern struct_10 D_800A5E98;
extern s32 D_801270C8;
extern s32 D_801270D4;
extern u8 D_sc02_000_8018F6CC;
extern void func_80028620();
extern s32 func_8012B8A4();
extern s32 func_800CF8B4();
extern void func_sc02_000_80189340();

typedef struct { s16 field_0[3][3]; s16 field_12; s32 field_14[3]; } struct_20_3;
typedef struct { u32 field_0; u32 field_4; u32 field_8; u32 field_C; u32 *field_10; } struct_14_2;
typedef struct { s32 field_0; s32 field_4; s32 field_8; s32 field_C; s32 field_10; s32 field_14; s32 field_18; } struct_1C_2;
typedef struct { u16 field_0, field_2, field_4, field_6; } struct_8_5;
typedef struct { u8 field_0, field_1, field_2, field_3; } struct_4_3;
typedef struct { struct_8_5 field_0; struct_8_5 field_8; struct_4_3 field_10; struct_4_3 field_14; s32 field_18; } struct_1C_3;
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_4;
typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_6;
typedef struct { struct_8_6 field_0[4]; struct_4_3 field_20[4]; s32 field_30; } struct_34_2;
extern s8 D_sc02_000_8018E5E8[];
extern u16 D_800B99DA;
extern void func_80017DC4();
extern void func_80017E68();
extern void func_80017758();
extern struct_20_4 D_800AE620;
extern void func_80016A5C();

void func_sc02_000_8017C218(u8 *arg0) {
    struct_8_6 r;
    u8 gap[8];
    struct_34_2 q;
    struct_20_4 m;
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
    t = D_sc02_000_8018E5E8;
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
    t = D_sc02_000_8018E5E8;
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
        t = D_sc02_000_8018E5E8;
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

void func_sc02_000_8017C524(u8 *arg0) {
    D_sc02_000_8018E628[AF(arg0, u16, 2)]();
}

void func_sc02_000_8017C560(u8 *arg0) {
    func_80147324((s32) AF(arg0, u16, 0x2E));
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc02_000_8017C5A0(u8 *arg0) {
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
    func_sc02_000_8017C218((s32) arg0);
}

void func_sc02_000_8017C610(u8 *arg0) {
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
    func_sc02_000_8017C218((s32) arg0);
}

void func_sc02_000_8017C69C(u8 *arg0) {
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
    func_sc02_000_8017C218((s32) arg0);
}

void func_sc02_000_8017C770(u8 *arg0) {
    u16 temp_v0;
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x34);
    temp_v0 = AF(arg0, u16, 0x12) - 0x100;
    AF(arg0, u16, 0x12) = temp_v0;
    if ((temp_v0 << 0x10) > 0) {
        func_sc02_000_8017C218((s32) arg0);
        return;
    }
    AF(temp_v1, s16, 0x64) = 0x1000;
    AF(temp_v1, s16, 0x62) = 0x1000;
    AF(temp_v1, s16, 0x60) = 0x1000;
    func_80146C3C((s32) arg0);
}

void func_sc02_000_8017C7C4(u8 *arg0) {
    D_sc02_000_8018E63C[AF(arg0, u16, 2)]();
}


typedef struct { s32 field_0, field_4, field_8, field_C; } struct_10_2;
extern u8 D_sc02_000_801A79A4;
extern u8 D_sc02_000_801A777C;
extern s32 D_80126B5C;
extern s32 D_80126B60;
extern s32 D_80126B64;
extern s32 func_8012B77C();
extern u8 D_sc02_000_801A7820;

extern void func_sc02_000_80185F8C();
extern s32 D_sc02_000_801E874C;
extern s16 D_80126B66;
extern void func_8012DB84();
extern u8 D_sc02_000_8018B37C;
extern void func_sc02_000_8018762C();
extern s32 func_sc02_000_80185D58();
extern u8 D_800AF648;
extern void SetRotMatrix();
extern void SetTransMatrix();
typedef struct { u32 *field_0; s32 field_4[4]; } struct_14_3;
extern s32 D_80126950;
extern struct_14_3 D_800A651C[];
extern u16 D_800B9A02;
extern u8 *func_80010A08(s32 n);
extern s16 D_sc02_000_8018F6E4[];

extern void func_sc02_000_8017D230();
extern s32 func_8012BCCC();
extern s32 func_8012B8E4();
extern s32 func_8012C51C();
extern u8 D_sc02_000_8018E6D4;
extern u8 D_sc02_000_8018E66C;
extern u8 D_sc02_000_801A629C;
extern u8 D_sc02_000_801A6754;
extern u8 D_sc02_000_801A6534;
extern s32 func_8012C354();
extern void func_80143970();
extern void func_8012B030();
extern u8 D_sc02_000_8018E990;
extern s32 D_sc02_000_8018E960[];
extern u8 D_sc02_000_8018E7C0[][52];
extern u8 D_sc02_000_8018E6BC;
extern u8 D_sc02_000_8018E68C;
extern u8 D_sc02_000_801A648C;
extern u16 D_sc02_000_8018E7A8[][4];

typedef union { s32 m0; struct_4_2 m1; } union_4_2;
extern s32 func_8012BC60();
extern void func_8012B0B4();
extern s32 func_8012CEB0();
extern void func_8012ADE4();

extern s16 D_sc02_000_8018E6CC;
extern s16 D_sc02_000_8018E6D0;
extern s32 func_80013478();

typedef struct { u8 field_0[0x18]; struct_20_4 field_18; } struct_38;
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_5;
typedef struct { u8 field_0, field_1, field_2, field_3; } struct_4_4;
typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_7;
typedef struct { u16 field_0[6]; } struct_C_5;
typedef struct { u16 field_0; s16 field_2; s16 field_4; s16 field_6; s32 field_8; s32 field_C; } struct_10_3;
typedef struct { s16 field_0, field_2, field_4, field_6; u8 field_8, field_9; s16 field_A; struct_10_3 field_C[16]; } struct_10C_2;
typedef struct { u32 *field_0; u8 field_4[0x10]; } struct_14_4;
typedef struct { u8 field_0[0x14]; } struct_14_5;
typedef struct { unsigned field_0_b0 : 24; unsigned field_3_b0 : 8; } struct_4_5;
typedef struct { u8 field_0[8]; } struct_8_8;
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_6;
typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_9;
extern void func_800D20C0();
extern void func_800D23D0();
extern u8 D_801152A8;
extern u8 D_sc02_000_801A7AF0;
extern struct_20_4 *D_sc02_000_801A7B24;
extern struct_20_4 D_sc02_000_801E8648[];
extern s32 func_80134510();
extern s8 D_sc02_000_801A7ADC[];

extern u8 D_sc02_000_80192D94;
extern u8 D_sc02_000_80194294;
extern u8 D_sc02_000_801A7164;


typedef struct { s32 field_0[4]; } struct_10_4;
extern void func_8012C098();
extern s32 D_801270CC;
extern u8 D_sc02_000_801A7054;
extern s32 func_8012B608();
extern u8 D_sc02_000_8018E6B0;
extern s32 D_sc02_000_801E8008;
extern struct_10_4 D_sc02_000_801E6A00;
extern u8 D_80062BDC;
extern void func_80019064();
extern void func_8012E9C0();
extern u8 D_sc02_000_801A681C;
extern void func_sc02_000_8017FCB0();
extern u8 D_sc02_000_801A6344;
extern void func_8012B178();
extern u8 D_sc02_000_8018E724;

extern s32 D_801270D0;
extern s32 D_sc02_000_8018F2F0;
extern u16 D_80126B62;
extern s16 D_800D391C;
extern struct_8_4 D_sc02_000_801E82A0[];
typedef struct { s32 field_0[0x95]; } struct_254;
extern u8 D_sc02_000_801E801C;
extern s32 D_sc02_000_801E8018;
extern u16 D_801202A0;
extern s32 func_8012BD14();
extern void func_8001C810();
extern u8 D_sc02_000_801DCED0;
extern u8 D_sc02_000_8018F304;
extern u8 D_sc02_000_801E8270;
extern u8 D_sc02_000_801E827C;
extern u8 D_sc02_000_801E827D;
extern u8 D_sc02_000_801E827E;
extern u8 D_sc02_000_801E828C;
extern u8 D_sc02_000_801E828E;
extern u8 D_sc02_000_801E829E;
extern u8 D_sc02_000_801E82AC;
extern u8 D_sc02_000_801DD528;
extern s32 func_sc02_000_80188680();

extern s32 D_801270D8;
extern u8 D_sc02_000_8018E718;
extern u8 D_sc02_000_801A68A4;
extern s32 func_8012C044();

extern struct_C_3 D_sc02_000_8018F07C[];
extern u8 D_sc02_000_8018F48C;
extern u8 D_sc02_000_801A7604;
extern u8 D_sc02_000_801A766C;
extern void func_80142414();
extern s32 D_sc02_000_8018F424[];
extern s32 D_sc02_000_8018F430[];
extern s16 D_sc02_000_8018F3E4[];
extern s32 func_sc02_000_80188C0C();

extern u8 D_sc02_000_801AF280;
extern s32 func_8012A828();
extern u8 D_sc02_000_801AFAE8;
extern u8 D_sc02_000_801B6AD0;
extern void func_8013C414();
extern u8 D_sc02_000_8018EDC8;
extern void func_80171CC4();
extern s32 func_80012F74();
extern void func_sc02_000_801839C4();
extern void func_sc02_000_80183BA4();
extern void func_sc02_000_80183C9C();
extern s16 D_800B9AAC;
extern u8 D_sc02_000_8018EA48;
extern void func_800D1724();
extern u16 D_800B99D8;
extern u8 D_sc02_000_801E1B94;
extern u8 D_sc02_000_801E1714;
extern u8 D_sc02_000_801E1944;
extern void func_8012B21C();
extern s32 rand();
extern u8 D_sc02_000_8018F498;
extern u8 D_sc02_000_8018F47C;

extern void func_8012DBD0();
extern s32 func_8012CC64();
extern u8 D_sc02_000_8018E710;

extern void func_sc02_000_80183A80();
extern s16 D_80126960;
extern s16 D_80126974;

extern s32 D_sc02_000_801E8738;
extern s32 func_80012C6C();
extern s32 func_80012ABC();
extern void func_80013F3C();
extern void func_800123F0();
extern void func_80012558();
extern void func_800126C4();
extern u8 *D_800A5E60;
extern u32 D_800A6610[2][0x1000];
extern s32 GetTPage();
extern void SetDrawMode();

extern s32 D_sc02_000_801E86BC;
extern s32 D_sc02_000_801E86C0;
extern s32 D_sc02_000_801E86C4;
extern struct_8_4 D_sc02_000_801E87B0;
extern u8 D_sc02_000_801E8788;
extern s16 D_sc02_000_8018F076;
extern s16 D_sc02_000_8018F078[];
extern void RotMatrixZYX();

extern void func_sc02_000_80186424();
extern s32 D_sc02_000_8018F318;
extern s32 D_sc02_000_8018F314;
extern void bzero();
extern s32 func_sc02_000_80187F30();
extern void func_80143BDC();
extern u8 D_sc02_000_8018F044;
extern u8 D_sc02_000_8018F04C;
extern u8 D_sc02_000_8018F054;
extern u8 D_sc02_000_8018F05C;
extern u8 D_sc02_000_8018F064;
extern u8 D_sc02_000_8018F06C;
extern void func_sc02_000_801861D8();
extern void func_8013C360();

extern void func_8001CB00();
extern s32 D_sc02_000_801E8844[];

extern void RotMatrixYXZ();
extern void ApplyMatrixSV();
extern s32 D_sc02_000_801E8274;
extern s32 D_sc02_000_801E8278;
extern s32 D_sc02_000_801E8280;
extern s32 D_sc02_000_801E8284;
extern s32 D_sc02_000_801E8288;
extern s32 D_sc02_000_801E8290;
extern s32 D_sc02_000_801E8294;
extern s32 D_sc02_000_801E8298;

extern u16 D_800AF7BC;
extern u16 D_800AF7BE;

extern u8 D_800D387C;
extern u8 D_800D3888;
extern s32 func_801290DC();
extern void func_80128EA8();

extern s16 D_sc02_000_8018E794;
extern s16 D_sc02_000_8018E796;

extern s16 D_sc02_000_8018EDD0[];
extern u8 D_sc02_000_801A7CB0;
typedef struct { s16 field_0; s16 field_2; s16 field_4[8]; s16 *field_14[8]; } struct_34_3;
extern s32 D_80126E60;

typedef struct { s16 field_0, field_2, field_4; } struct_6;
typedef struct { s16 field_0, field_2; s32 field_4; } struct_8_10;
typedef struct { struct_8_4 field_0[3]; struct_4_3 field_18[3]; s32 field_24; } struct_28;
extern void func_8012AE00();
extern void func_80130D48();
extern void func_8012931C();

void func_sc02_000_8017C800(u8 *arg0) {
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

void func_sc02_000_8017C8B4(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0xA) {
        func_800D22E4();
        func_sc02_000_8017C910((s32) arg0);
        return;
    }
    func_80146C3C((s32) arg0);
}

void func_sc02_000_8017C910(u8 *arg0) {
    struct_1C_3 l;
    struct_20_4 m;

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

void func_sc02_000_8017CA80(u8 *arg0) {
    D_sc02_000_8018E65C[AF(arg0, u16, 2)]();
}

extern s16 D_sc02_000_8018EDD8[];

extern s32 func_8012913C();

extern void func_8001CC3C();
extern void RotMatrixY();
extern void ApplyMatrixLV();
typedef struct { u32 field_0_b0 : 24; u32 field_3_b0 : 8; } struct_4_6;
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_7;
typedef struct { struct_4_6 field_0; u8 field_4, field_5, field_6, field_7; s16 field_8, field_A, field_C, field_E, field_10, field_12, field_14, field_16; } struct_18;
typedef void (*type_2)();
typedef struct { s32 field_0[4]; } struct_10_5;
typedef struct { struct_10_5 field_0, field_10, field_20; } struct_30_2;
typedef struct { u8 field_0[0x34]; } struct_34_4;
typedef struct { struct_C_5 field_0[9]; } struct_6C;
typedef struct { s32 field_0, field_4, field_8, field_C; } struct_10_6;
typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_11;
typedef struct { s32 field_0, field_4, field_8, field_C; } struct_10_7;
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_8;
typedef struct { u8 field_0, field_1, field_2, field_3; } struct_4_7;
typedef struct { struct_8_11 field_0[4]; struct_4_7 field_20[4]; s32 field_30; } struct_34_5;
typedef struct { s32 field_0, field_4, field_8; } struct_C_6;
typedef struct { s16 field_0, field_2, field_4, field_6, field_8, field_A, field_C, field_E; s32 field_10; } struct_14_6;
typedef struct { s16 field_0, field_2, field_4, field_6, field_8; u16 field_A; s16 field_C, field_E; s32 field_10; } struct_14_7;
typedef struct { s32 field_0; s32 field_4; s32 field_8; s16 field_C; s16 field_E; s32 field_10[2]; s32 field_18; s32 field_1C; s32 field_20; } struct_24;
typedef struct { unsigned field_0_b0 : 31; unsigned field_3_b7 : 1; } struct_4_8;
typedef struct { s32 field_0; s32 field_4; } struct_8_12;
typedef struct { s16 field_0; } struct_2;
typedef struct { u16 field_0, field_2, field_4, field_6; } struct_8_13;
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_9;
typedef struct { u8 field_0[0x18]; struct_20_9 field_18; } struct_38_2;
typedef struct { u16 field_0[6]; } struct_C_7;
typedef struct { u16 field_0, field_2, field_4, field_6; } struct_8_14;
typedef struct { s16 field_0, field_2, field_4, field_6; s16 field_8, field_A, field_C, field_E; s32 field_10; } struct_14_8;
typedef struct { struct_8_4 field_0[4]; s32 field_20, field_24, field_28, field_2C, field_30, field_34; } struct_38_3;
typedef struct { s16 field_0; s16 field_2[5]; } struct_C_8;
typedef struct { u8 field_0; u8 field_1[11]; } struct_C_9;
typedef struct { u32 field_0; u32 field_4; s16 field_8, field_A; u8 field_C, field_D; u16 field_E; s16 field_10, field_12; } struct_14_9;
typedef struct { s8 field_0; u8 field_1; } struct_2_2;
typedef struct { u16 field_0; } struct_2_3;
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
typedef struct { u32 field_0; u32 field_4; } struct_8_15;
typedef struct { u8 field_0[0x10]; struct_4_2 field_10[13]; } struct_44;
typedef struct { s32 field_0; u8 field_4[8]; } struct_C_10;
typedef struct { s32 field_0; s32 field_4; } struct_8_16;
typedef struct { struct_8_6 field_0[4]; s32 field_20[4]; s32 field_30; s32 field_34; u8 field_38; } struct_3C;
extern void func_8001CD04();



extern type_2 D_sc02_000_801E6CA4[];
extern void *D_sc02_000_801E8784;

extern s32 func_sc02_000_80189DB8();
extern u8 D_sc02_000_8018F71C;
void func_sc02_000_80189B1C(u8 *o, s16 *r, s32 rot, s32 col);

extern s32 ratan2();
void func_sc02_000_80181E70(u8 *o, s32 a1, s16 *pos);
extern void func_sc02_000_80182058();

extern void func_8012E8E0();
extern u8 D_sc02_000_8018F324;
extern u8 D_sc02_000_801E6C84;
extern s32 func_80171D78();
extern u8 D_sc02_000_8018EDF4;

extern s16 func_80012B04();

extern struct_8_4 D_sc02_000_801E6C8C;
extern struct_8_4 D_sc02_000_801E6C94;
extern u8 D_sc02_000_8018F33C;
extern void func_80178B18();
extern s32 func_80178970();
extern void func_80178D18();
extern u8 D_sc02_000_801965CC;
extern s32 func_sc02_000_80189888();
void func_sc02_000_80188F30(s32 arg0, s32 arg1);
extern u8 D_sc02_000_8018EA6C;


extern s32 rcos();
extern s32 rsin();
extern void func_sc02_000_80187558();
extern void func_8012BF4C();

void func_sc02_000_801819F4(void);
void func_sc02_000_801831F8(void);



extern u8 D_sc02_000_801E6C7C;
extern void func_8014BB0C();
extern void func_8014BDC8();
extern void func_8014BEC0();
extern s32 func_80154B4C();
extern u8 D_sc02_000_8018EAE8;
extern u8 D_sc02_000_8018ECF0;

extern struct_8_4 D_sc02_000_801E6C9C;
extern void func_80148038();
extern void func_80147A84();
extern void func_80147460();
extern u8 D_sc02_000_801E071C;
extern u8 D_sc02_000_801E2164;
extern u8 D_sc02_000_8018F3B4;


extern s32 func_8014659C();
extern u8 D_sc02_000_801DFBA8;
extern u8 D_sc02_000_801DF720;
extern void func_80149374();
typedef struct { s32 field_0[8]; } struct_20_10;
typedef struct { s32 field_0[0x29]; } struct_A4;
extern void func_80028558();
extern void func_8002850C();
extern s16 D_800AE7E0[];
extern s16 D_800AE7E2;
extern s16 D_800AE7E4;

extern s32 func_80013200();


extern u8 D_sc02_000_8018E644;

void func_sc02_000_8017CABC(u8 *a) {
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
    o = func_800D222C(a, &D_sc02_000_8018E644, 0xFD);
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

void func_sc02_000_8017CC80(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
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

void func_sc02_000_8017CD14(u8 *arg0) {
    D_sc02_000_8018E664[AF(arg0, u16, 2)]();
}

void func_sc02_000_8017CD50(s32 arg0) {
    s32 pad[12];
    s32 temp_v0;

    temp_v0 = func_800D222C(arg0, (s32) &D_sc02_000_8018E650, 0x18);
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

void func_sc02_000_8017CDF4(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
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

void func_sc02_000_8017CE58(struct_8_4 *r, struct_8_4 *out, s32 arg2) {
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
    func_sc02_000_8017D230(&c0, &c);
    for (i = 0; i < 4; i++) {
        func_sc02_000_8017D230(&v[i], &w4[i]);
        if (func_sc02_000_8017D2D4(&c, &w4[i], &p[i], arg2) != 0) {
            func_sc02_000_8017D4CC(&p[i], &v[i]);
            v[i].field_0 = v[i].field_0 < x - d ? x - d : (v[i].field_0 > x2 + d ? x2 + d : v[i].field_0);
            v[i].field_2 = v[i].field_2 < y - d ? y - d : (v[i].field_2 > y2 + d ? y2 + d : v[i].field_2);
            func_sc02_000_8017D230(&v[i], &w4[i]);
            func_sc02_000_8017D2D4(&c, &w4[i], &p[i], arg2);
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

void func_sc02_000_8017D230(struct_8_4 *zero, struct_8_4 *out) {
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

s32 func_sc02_000_8017D2D4(struct_8_6 *a, struct_8_6 *b, struct_8_6 *o, s32 lim) {
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

s32 func_sc02_000_8017D4CC(s32 arg0, s32 arg1) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;

    ReadGeomOffset((s32) &sp10, (s32) &sp14);
    SetGeomOffset(0, 0);
    RotTransPers(arg0, arg1, (s32) &sp18, (s32) &sp1C);
    return SetGeomOffset(sp10, sp14);
}


extern void func_sc02_000_801803B0();
extern u8 D_sc02_000_8018E698;
extern u8 D_sc02_000_8018E680;
extern u8 D_sc02_000_801A65BC;
extern s16 D_sc02_000_8018E6E4;
extern s16 D_sc02_000_8018E6E8;
extern s32 func_8012BD3C();
extern void func_sc02_000_8017F5A0();
extern void func_sc02_000_8017F5E4();
s32 func_sc02_000_8017E404(u8 *p, u8 *o);
void func_sc02_000_8017E5AC(u8 *o);
void func_sc02_000_8017E6D8(u8 *o);
s32 func_sc02_000_8017E958(u8 *p, s32 k);

typedef struct { u8 *field_0; u32 field_4; u32 field_8; u32 field_C; u32 field_10; u32 *field_14; u32 *field_18; } struct_1C_4;
typedef struct { s32 field_0; s32 field_4; s32 field_8; s32 field_C; s32 field_10; s32 field_14; } struct_18_2;
extern struct_8_4 D_sc02_000_801E8678;

void func_sc02_000_8017D538(u8 *o) {
    struct_8_4 r;
    s32 tmp[4];
    struct_8_4 box[8];
    struct_8_4 scr[8];
    struct_20_3 ls;
    struct_18_2 g;
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
    func_sc02_000_8017CE58(&D_sc02_000_801E8678, &r, AF(o, s32, 0x60));
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

s32 func_sc02_000_8017E404(u8 *p, u8 *o) {
    struct_8_6 a;
    struct_8_6 b;
    union_4_2 w;
    union_4_2 x;

    if (func_8012BC60(p + 4, o + 4) < 0x1000) {
        func_8012B0B4(&w, (ratan2(AF(p, s16, 0xE) - AF(o, s16, 0xE), AF(o, s16, 6) - AF(p, s16, 6)) - 0x400) & 0xFFF, 0x41);
        b.field_0 = AF(o, u16, 6);
        b.field_2 = AF(o, u16, 0xA);
        b.field_4 = AF(o, u16, 0xE);
        x = w;
        b.field_0 += x.m1.field_0;
        b.field_4 += x.m1.field_2;
        a.field_0 = AF(p, u16, 0x3A);
        a.field_2 = AF(p, u16, 0x3E);
        a.field_4 = AF(p, u16, 0x42);
        if (func_8012CEB0(&a, &b, 0) & 0x2000) {
            AF(p, u16, 6) = b.field_0;
            AF(p, u16, 0xA) = b.field_2;
            AF(p, u16, 0xE) = b.field_4;
            return 1;
        }
        func_8012ADE4(p);
        return 1;
    }
    return 0;
}

void func_sc02_000_8017E51C(u8 *arg0) {
    u8 *p;
    u8 *end;
    s32 key;

    key = *(u16 *)arg0;
    for (p = (u8 *)&D_801202A0, end = p + 0x6480; p != end; p += 0x10C) {
        if (p != arg0 && *(u16 *)p == key && func_sc02_000_8017E404(arg0, p)) {
            break;
        }
    }
    func_8012AE00(p);
}

void func_sc02_000_8017E5AC(u8 *o) {
    AF(o, u8, 0xC1) = 0;
    AF(o, s16, 0x2) = 1;
    AF(o, s16, 0x34) = 0;
    AF(o, s32, 0x1C) = (rand() & 0x1F) + 0x46;
    AF(o, s16, 0xE0) = 0;
    AF(o, u16, 0xE2) = AF(AF(o, u8 *, 0x20), u16, 0x12);
    switch ((s16)AF(o, u16, 0x70) >> 8) {
    case 0: case 1: case 2: case 3: case 7:
        if (AF(o, u16, 0xFE) & 2) {
            AF(o, s16, 0xE2) = 0;
        }
        break;
    case 5:
        func_sc02_000_801803B0(o);
        goto tail;
    case 4: case 6:
        break;
    }
    AF(o, s16, 0xE4) = 0x1E;
    AF(o, s16, 0x5E) = 0;
    AF(o, u16, 0x5C) = 0xAA10;
    func_8012B2CC(o);
    func_8012B23C(o);
    func_8012B14C(o, &D_sc02_000_8018E68C);
    func_8012A828(o, &D_sc02_000_801A648C);
tail:
    AF(o, s16, 0x34) = 3;
    AF(o, u16, 0xE2) = (AF(AF(o, u8 *, 0x20), u16, 0x12) + 0x800) & 0xFFF;
    AF(o, s16, 0xE0) = 0;
    AF(o, s16, 0xE4) = (rand() & 0x1F) + 0x1E;
    AF(o, s32, 0x1C) = 0x16;
}

void func_sc02_000_8017E6D8(u8 *o) {
    s32 r;
    s32 a;
    if (AF(o, s16, 0x6) > 0x200) {
        AF(o, u8, 0xC1) = 0;
        AF(o, s16, 0x2) = 1;
        AF(o, s16, 0x34) = 0;
        AF(o, s32, 0x1C) = (rand() & 0x1F) + 0x46;
        AF(o, s16, 0xE0) = 0;
        AF(o, u16, 0xE2) = AF(AF(o, u8 *, 0x20), u16, 0x12);
        switch ((s16)AF(o, u16, 0x70) >> 8) {
        case 0: case 1: case 2: case 3: case 7:
            if (AF(o, u16, 0xFE) & 2) {
                AF(o, s16, 0xE2) = 0;
            }
            break;
        case 5:
            func_sc02_000_801803B0(o);
            goto tail1;
        case 4: case 6:
            break;
        }
        AF(o, s16, 0xE4) = 0x1E;
        AF(o, s16, 0x5E) = 0;
        AF(o, u16, 0x5C) = 0xAA10;
        func_8012B2CC(o);
        func_8012B23C(o);
        func_8012B14C(o, &D_sc02_000_8018E68C);
        func_8012A828(o, &D_sc02_000_801A648C);
    tail1:
        AF(o, s16, 0x34) = 4;
        a = (ratan2(AF(o, s16, 0xE) - D_sc02_000_8018E6D0, D_sc02_000_8018E6CC - AF(o, s16, 6)) - 0x400) & 0xFFF;
    } else {
        r = (rand() & 0x7FF) - 0x400;
        AF(o, u8, 0xC1) = 0;
        AF(o, s16, 0x2) = 1;
        AF(o, s16, 0x34) = 0;
        AF(o, s32, 0x1C) = (rand() & 0x1F) + 0x46;
        AF(o, s16, 0xE0) = 0;
        AF(o, u16, 0xE2) = AF(AF(o, u8 *, 0x20), u16, 0x12);
        switch ((s16)AF(o, u16, 0x70) >> 8) {
        case 0: case 1: case 2: case 3: case 7:
            if (AF(o, u16, 0xFE) & 2) {
                AF(o, s16, 0xE2) = 0;
            }
            break;
        case 5:
            func_sc02_000_801803B0(o);
            goto tail2;
        case 4: case 6:
            break;
        }
        AF(o, s16, 0xE4) = 0x1E;
        AF(o, s16, 0x5E) = 0;
        AF(o, u16, 0x5C) = 0xAA10;
        func_8012B2CC(o);
        func_8012B23C(o);
        func_8012B14C(o, &D_sc02_000_8018E68C);
        func_8012A828(o, &D_sc02_000_801A648C);
    tail2:
        AF(o, s16, 0x34) = 3;
        a = ((ratan2(AF(o, s16, 0xE) - D_sc02_000_8018E6D0, D_sc02_000_8018E6CC - AF(o, s16, 6)) - 0x400) & 0xFFF) + r;
    }
    AF(o, s16, 0xE2) = a;
    AF(o, s16, 0xE0) = 0;
    AF(o, s16, 0xE4) = (rand() & 0x1F) + 0x1E;
    AF(o, s32, 0x1C) = 0x10;
}

s32 func_sc02_000_8017E958(u8 *p, s32 k) {
    s32 lim[2] = { 0x3C100, 0x51000 };
    s32 d;
    if (((s16) AF(p, u16, 0x70) >> 8) != 4) {
        return 0;
    }
    d = func_80013478(p + 4, &D_sc02_000_8018E6CC);
    if (k == 1 && (u32) (((ratan2(AF(p, s16, 0xE) - D_sc02_000_8018E6D0, D_sc02_000_8018E6CC - AF(p, s16, 6)) - 0x400) & 0xFFF) - 0x381) < 0xFF &&
        (s16) D_80126B5E >= 0x2E0 && d > 0x3C100) {
        return 1;
    }
    if (d > lim[k] && d > AF(p, s32, 0xE8)) {
        AF(p, s32, 0xE8) = d;
        return 1;
    }
    AF(p, s32, 0xE8) = d;
    return 0;
}

void func_sc02_000_8017EA84(u8 *o) {
    u8 *p;
    u8 *end;
    s32 key;
    s32 v;
    s32 f;

    AF(o, s16, 0xE0)++;
    switch (AF(o, u16, 0x34)) {
    case 0:
        if (func_sc02_000_8017E958(o, 0)) {
            func_sc02_000_8017E6D8(o);
            break;
        }
        if (AF(o, s16, 0xE0) < 9) {
            AF(AF(o, u8 *, 0x20), u16, 0x12) += func_8012B608(AF(AF(o, u8 *, 0x20), s16, 0x12), AF(o, s16, 0xE2), 6);
        } else {
            func_8012B14C(o, (AF(o, u16, 0xFE) & 2) ? &D_sc02_000_8018E698 : &D_sc02_000_8018E68C);
        }
        v = D_sc02_000_801E8008 = func_8012CBA4(o);
        if (v == 0 || (v & 0x4000)) {
            AF(o, s32, 0x4) = AF(o, s32, 0x38);
            AF(o, s32, 0x8) = AF(o, s32, 0x3C);
            AF(o, s32, 0xC) = AF(o, s32, 0x40);
            f = 1;
        } else {
            f = 0;
        }
        if (f) {
            func_sc02_000_8017E5AC(o);
            break;
        }
        for (p = (u8 *)&D_801202A0, end = p + 0x6480, key = AF(o, u16, 0); p != end; p += 0x10C) {
            if (p != o && AF(p, u16, 0) == key && func_sc02_000_8017E404(o, p)) {
                break;
            }
        }
        func_8012AE00(p);
        if (AF(o, s16, 0xE0) >= 0x3C) {
            AF(o, s16, 0xE0) = 0;
            if (AF(o, u16, 0xFE) & 2) {
                AF(o, s16, 0xE2) = 0;
            } else {
                AF(o, u16, 0xE2) = AF(AF(o, u8 *, 0x20), u16, 0x12) + (rand() & 0x800) - 0x400;
            }
        }
        if (--AF(o, s16, 0xE4) > 0) {
            break;
        }
        if (AF(o, u16, 0xFE) & 2) {
            break;
        }
        if (func_8012BCCC(o) > 0x10000) {
            break;
        }
        if (((s16)AF(o, u16, 0x70) >> 8) == 4 && D_801270D4 != 0) {
            break;
        }
        if (AF(o, u16, 0xFE) & 1) {
            AF(o, u16, 0x5C) = 0xAA10;
            AF(o, s16, 0x2) = 1;
            AF(o, s16, 0x34) = 2;
            AF(o, s16, 0x5E) = 0;
            AF(o, s32, 0x1C) = 0x1E;
            func_8012A828(o, &D_sc02_000_801A6534);
            AF(o, s16, 0xFC) = 0;
            break;
        }
        func_8012A828(o, &D_sc02_000_801A65BC);
        AF(o, s16, 0x2) = 1;
        AF(o, s16, 0x34) = 1;
        AF(o, s32, 0x1C) = 0x19;
        AF(o, u16, 0xFE) |= 1;
        break;
    case 1:
        AF(AF(o, u8 *, 0x20), u16, 0x12) += func_8012B8E4(o, 4);
        if (AF(o, s32, 0x1C) == 0xF) {
            func_8002D4C8(0x6A9, 0);
            func_80142414(o, -0x78);
        }
        if (func_8012BEE8(o)) {
            AF(o, u16, 0x5C) = 0xAA10;
            AF(o, s16, 0x2) = 1;
            AF(o, s16, 0x34) = 2;
            AF(o, s16, 0xE0) = 0;
            AF(o, s16, 0x5E) = 0;
            AF(o, s32, 0x1C) = 0x1E;
            func_8012A828(o, &D_sc02_000_801A6534);
            AF(o, s16, 0xFC) = 0;
        }
        break;
    case 2:
        if (func_sc02_000_8017E958(o, 1)) {
            func_sc02_000_8017E6D8(o);
            break;
        }
        v = D_sc02_000_801E8008 = func_8012CBA4(o);
        if (v == 0 || (v & 0x4000)) {
            AF(o, s32, 0x4) = AF(o, s32, 0x38);
            AF(o, s32, 0x8) = AF(o, s32, 0x3C);
            AF(o, s32, 0xC) = AF(o, s32, 0x40);
            f = 1;
        } else {
            f = 0;
        }
        if (f) {
            func_sc02_000_8017E5AC(o);
            break;
        }
        for (p = (u8 *)&D_801202A0, end = p + 0x6480, key = AF(o, u16, 0); p != end; p += 0x10C) {
            if (p != o && AF(p, u16, 0) == key && func_sc02_000_8017E404(o, p)) {
                break;
            }
        }
        func_8012AE00(p);
        if (((s16)AF(o, u16, 0x70) >> 8) == 4 && (s16) D_80126B5E >= 0x220) {
            AF(AF(o, u8 *, 0x20), u16, 0x12) += func_8012B608(AF(AF(o, u8 *, 0x20), s16, 0x12),
                (ratan2(AF(o, s16, 0xE) - D_sc02_000_8018E6E8, D_sc02_000_8018E6E4 - AF(o, s16, 6)) - 0x400) & 0xFFF, 6);
        } else if (AF(o, s32, 0x1C) >= 0x16) {
            AF(AF(o, u8 *, 0x20), u16, 0x12) += func_8012B8E4(o, 6);
        }
        func_8012B14C(o, &D_sc02_000_8018E680);
        if (--AF(o, s16, 0xFC) <= 0) {
            func_80143B6C(o, 0);
            AF(o, s16, 0xFC) = 8;
        }
        if (AF(o, s16, 0xE0) >= 0x5A) {
            AF(o, s16, 0xE0) = 0;
            AF(o, u8, 0xC1) = 0;
            AF(o, s16, 0x2) = 1;
            AF(o, s16, 0x34) = 0;
            AF(o, s32, 0x1C) = (rand() & 0x1F) + 0x46;
            AF(o, s16, 0xE0) = 0;
            AF(o, u16, 0xE2) = AF(AF(o, u8 *, 0x20), u16, 0x12);
            switch ((s16)AF(o, u16, 0x70) >> 8) {
            case 0: case 1: case 2: case 3: case 7:
                if (AF(o, u16, 0xFE) & 2) {
                    AF(o, s16, 0xE2) = 0;
                }
                break;
            case 5:
                func_sc02_000_801803B0(o);
                goto tail2;
            case 4: case 6:
                break;
            }
            AF(o, s16, 0xE4) = 0x1E;
            AF(o, s16, 0x5E) = 0;
            AF(o, u16, 0x5C) = 0xAA10;
            func_8012B2CC(o);
            func_8012B23C(o);
            func_8012B14C(o, &D_sc02_000_8018E68C);
            func_8012A828(o, &D_sc02_000_801A648C);
        }
    tail2:
        if (func_8012BEE8(o)) {
            AF(o, u16, 0x5C) = 0xAA10;
            AF(o, s16, 0x2) = 1;
            AF(o, s16, 0x34) = 2;
            AF(o, s16, 0x5E) = 0;
            AF(o, s32, 0x1C) = 0x1E;
            func_8012A828(o, &D_sc02_000_801A6534);
            AF(o, s16, 0xFC) = 0;
            break;
        }
        if (((s16)AF(o, u16, 0x70) >> 8) == 1) {
            if (func_8012BD3C(o, 0x200, 0x3100)) {
                func_sc02_000_8017F5E4(o);
            }
        } else {
            if (func_8012BD3C(o, 0x400, 0x1000)) {
                func_sc02_000_8017F5A0(o);
            }
        }
        break;
    case 3:
        AF(AF(o, u8 *, 0x20), u16, 0x12) += func_8012B608(AF(AF(o, u8 *, 0x20), s16, 0x12), AF(o, s16, 0xE2), 4);
        if (func_8012BEE8(o)) {
            AF(o, u8, 0xC1) = 0;
            AF(o, s16, 0x2) = 1;
            AF(o, s16, 0x34) = 0;
            AF(o, s32, 0x1C) = (rand() & 0x1F) + 0x46;
            AF(o, s16, 0xE0) = 0;
            AF(o, u16, 0xE2) = AF(AF(o, u8 *, 0x20), u16, 0x12);
            switch ((s16)AF(o, u16, 0x70) >> 8) {
            case 0: case 1: case 2: case 3: case 7:
                if (AF(o, u16, 0xFE) & 2) {
                    AF(o, s16, 0xE2) = 0;
                }
                break;
            case 5:
                func_sc02_000_801803B0(o);
                goto tail3;
            case 4: case 6:
                break;
            }
            AF(o, s16, 0xE4) = 0x1E;
            AF(o, s16, 0x5E) = 0;
            AF(o, u16, 0x5C) = 0xAA10;
            func_8012B2CC(o);
            func_8012B23C(o);
            func_8012B14C(o, &D_sc02_000_8018E68C);
            func_8012A828(o, &D_sc02_000_801A648C);
        }
    tail3:
        break;
    case 4:
        AF(AF(o, u8 *, 0x20), u16, 0x12) = AF(o, u16, 0xE2);
        func_8012B2CC(o);
        func_8012B178(o, 0xFFF80000);
        v = D_sc02_000_801E8008 = func_8012CBA4(o);
        if (v == 0 || (v & 0x4000)) {
            AF(o, s32, 0x4) = AF(o, s32, 0x38);
            AF(o, s32, 0x8) = AF(o, s32, 0x3C);
            AF(o, s32, 0xC) = AF(o, s32, 0x40);
        }
        for (p = (u8 *)&D_801202A0, end = p + 0x6480, key = AF(o, u16, 0); p != end; p += 0x10C) {
            if (p != o && AF(p, u16, 0) == key && func_sc02_000_8017E404(o, p)) {
                break;
            }
        }
        func_8012AE00(p);
        if (AF(o, s16, 6) < 0x1F8) {
            AF(o, u8, 0xC1) = 0;
            AF(o, s16, 0x2) = 1;
            AF(o, s16, 0x34) = 0;
            AF(o, s32, 0x1C) = (rand() & 0x1F) + 0x46;
            AF(o, s16, 0xE0) = 0;
            AF(o, u16, 0xE2) = AF(AF(o, u8 *, 0x20), u16, 0x12);
            switch ((s16)AF(o, u16, 0x70) >> 8) {
            case 0: case 1: case 2: case 3: case 7:
                if (AF(o, u16, 0xFE) & 2) {
                    AF(o, s16, 0xE2) = 0;
                }
                break;
            case 5:
                func_sc02_000_801803B0(o);
                goto tail4;
            case 4: case 6:
                break;
            }
            AF(o, s16, 0xE4) = 0x1E;
            AF(o, s16, 0x5E) = 0;
            AF(o, u16, 0x5C) = 0xAA10;
            func_8012B2CC(o);
            func_8012B23C(o);
            func_8012B14C(o, &D_sc02_000_8018E68C);
            func_8012A828(o, &D_sc02_000_801A648C);
        tail4:
            AF(o, s16, 0xE4) = rand() & 0x1F;
            AF(o, s32, 0x1C) = rand() & 0x1F;
        }
        break;
    }
}

void func_sc02_000_8017F390(u8 *o) {
    s32 d;
    s32 v;
    switch (AF(o, u16, 0x34)) {
    case 0:
        d = D_80126B66 - AF(o, s16, 0xE);
        if (d < 0) {
            d = -d;
        }
        if (d < 0x171) {
            AF(o, s16, 0x34)++;
            func_8012A828(o, &D_sc02_000_801A7054);
            AF(o, s32, 0x1C) = 0x1E;
        }
        break;
    case 1:
        if (AF(o, s32, 0x1C) == 0x14) {
            D_801270C8 = 1;
        }
        if (func_8012BEE8(o) != 0) {
            AF(o, s16, 0x34)++;
            func_8012A828(o, &D_sc02_000_801A6534);
            AF(o, s32, 0x1C) = 0;
        }
        break;
    case 2:
        AF(o, s32, 0x1C)++;
        AF(AF(o, u8 *, 0x20), u16, 0x12) += func_8012B608(AF(AF(o, u8 *, 0x20), s16, 0x12), 0x800, 4);
        if (AF(o, s32, 0x1C) >= 8) {
            func_8012B14C(o, &D_sc02_000_8018E6B0);
            v = D_sc02_000_801E8008 = func_8012CBA4(o);
            if (v == 0 || (v & 0x4000)) {
                AF(o, s32, 0x4) = AF(o, s32, 0x38);
                AF(o, s32, 0x8) = AF(o, s32, 0x3C);
                AF(o, s32, 0xC) = AF(o, s32, 0x40);
            }
        }
        if (++AF(o, s32, 0x1C) >= 0x100) {
            switch ((s16)AF(o, u16, 0x70) >> 8) {
            case 0: case 1: case 2: case 5: case 6:
                func_8012C098(o);
                break;
            case 3: case 7:
                func_8012C218(o);
                break;
            case 4:
                D_801270CC--;
                func_8012C218(o);
                break;
            }
        }
        break;
    }
}

void func_sc02_000_8017F5A0(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    AF(arg0, s16, 0x34) = 0;
    func_8012A828(arg0, (s32) &D_sc02_000_801A668C);
    AF(arg0, s32, 0x1C) = 0x14;
}

void func_sc02_000_8017F5E4(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    AF(arg0, s16, 0x34) = 3;
    func_8012A828(arg0, (s32) &D_sc02_000_801A72C4);
    AF(arg0, s32, 0x1C) = 0x1E;
}

void func_sc02_000_8017F62C(s32 arg0) {
    struct { s16 field_0, field_2, field_4, field_6, field_8; u16 field_A; s16 field_C, field_E; s32 field_10; } d;
    s16 pos[4];
    s32 r;
    s32 v;

    switch (AF(arg0, u16, 0x34)) {
    case 0:
        if (AF(arg0, s32, 0x1C) == 7) {
            func_8012D5E4(arg0, &D_sc02_000_8018E6D4, &D_sc02_000_8018E6D4 + 8, 0xB);
        }
        break;
    case 2:
        if (AF(arg0, s32, 0x1C) == 10) {
            func_8012D5E4(arg0, &D_sc02_000_8018E6D4, &D_sc02_000_8018E6D4 + 8, 0xB);
        }
        break;
    case 3:
        if (AF(arg0, s32, 0x1C) >= 0x19) {
            AF(AF(arg0, s32, 0x20), u16, 0x12) += func_8012B8E4(arg0, 4);
        }
        if (AF(arg0, s32, 0x1C) == 0xC) {
            func_8012F214(arg0, &D_sc02_000_8018E66C, pos);
            d.field_0 = pos[0];
            d.field_2 = pos[1];
            d.field_4 = pos[2];
            d.field_6 = 0x20;
            d.field_8 = 2;
            d.field_A = 0;
            d.field_10 = 0;
            d.field_E = 0;
            d.field_C = AF(AF(arg0, s32, 0x20), u16, 0x12);
            r = func_8012C51C(&d, arg0);
            if (r != 0) {
                AF(AF(r, s32, 0x20), u16, 0x12) = AF(AF(arg0, s32, 0x20), u16, 0x12);
                func_8012B2CC(r);
            }
        } else if (AF(arg0, s32, 0x1C) == 0xF) {
            func_sc02_000_8018A660(arg0, &D_sc02_000_8018E66C);
        }
        break;
    }
    if (func_8012BEE8(arg0) == 0) {
        return;
    }
    switch (AF(arg0, u16, 0x34)) {
    case 0:
        v = AF(arg0, s16, 0x70) >> 8;
        if (v == 0 || v == 3 || v == 4) {
            if (func_8012BCCC(arg0) <= 0x4000) {
                AF(arg0, s16, 2) = 2;
                AF(arg0, s16, 0x34) = 1;
                func_8012A828(arg0, &D_sc02_000_801A629C);
                AF(arg0, s32, 0x1C) = 10;
                return;
            }
        }
        goto def;
    case 1:
        AF(arg0, s16, 2) = 2;
        AF(arg0, s16, 0x34) = 2;
        func_8012A828(arg0, &D_sc02_000_801A6754);
        AF(arg0, s32, 0x1C) = 0x18;
        return;
    case 3:
        if (++AF(arg0, u8, 0x102) >= 3) {
            AF(arg0, u8, 0x102) = 0;
            AF(arg0, s16, 0x34) = AF(arg0, u16, 0x34) + 1;
            func_8012A828(arg0, &D_sc02_000_801A73BC);
        } else {
            AF(arg0, s16, 2) = 2;
            AF(arg0, s16, 0x34) = 3;
            func_8012A828(arg0, &D_sc02_000_801A72C4);
        }
        AF(arg0, s32, 0x1C) = 0x1E;
        return;
    case 4:
        if (func_8012BEE8(arg0) != 0 && func_8012BCCC(arg0) <= 0x40000) {
            AF(arg0, s16, 2) = 2;
            AF(arg0, s16, 0x34) = 3;
            func_8012A828(arg0, &D_sc02_000_801A72C4);
            AF(arg0, s32, 0x1C) = 0x1E;
        }
    case 2:
    default:
    def:
        AF(arg0, u16, 0x5C) = 0xAA10;
        AF(arg0, s16, 2) = 1;
        AF(arg0, s16, 0x34) = 2;
        AF(arg0, s16, 0x5E) = 0;
        AF(arg0, s32, 0x1C) = 0x1E;
        func_8012A828(arg0, &D_sc02_000_801A6534);
        AF(arg0, s16, 0xFC) = 0;
        break;
    }
}

void func_sc02_000_8017F950(u8 *o) {
    struct_10_4 t = D_sc02_000_801E6A00;
    if (AF(o, u8, 0x5E) == 5) {
        func_80019064(&D_80062BDC);
    }
    if (AF(o, u16, 0x5E) == 0x1F) {
        func_sc02_000_80180A64(o);
        return;
    }
    AF(o, u8, 0xC1) = 0;
    func_8012E9C0(o);
    AF(o, u16, 0x76) -= AF(o, u16, 0x60);
    AF(o, u16, 0x5C) &= 0xFFFE;
    AF(AF(o, u8 *, 0x20), u16, 0x12) = (AF(o, u16, 0x62) + 0x800) & 0xFFF;
    func_8012B2CC(o);
    func_8012B23C(o);
    AF(o, s16, 0x2) = 3;
    func_80143B6C(o, 0);
    switch (AF(o, u8, 0x5E)) {
    case 13:
        func_sc02_000_8017FC9C(o);
        break;
    case 14:
        func_sc02_000_8017FCB0(o);
        break;
    case 10:
        func_sc02_000_8017FD44(o);
        break;
    case 9:
        func_sc02_000_8017FD80(o);
        break;
    case 17:
        func_sc02_000_8017FDE8(o);
        break;
    case 33:
        func_sc02_000_8017FD2C(o);
        break;
    case 15:
        if (AF(o, s16, 0x76) > 0) {
            func_sc02_000_801801EC(o);
        } else {
            func_sc02_000_8017FE68(o);
        }
        break;
    default:
        if (AF(o, s16, 0x76) > 0) {
            AF(o, s16, 0x34) = 0;
            AF(o, s32, 0x1C) = 0x10;
            func_8012A828(o, &D_sc02_000_801A681C);
        } else {
            func_sc02_000_8017FE68(o);
        }
        break;
    }
}

void func_sc02_000_8017FB24(u8 *o) {
    s32 t;
    u8 unused[8];
    switch (AF(o, u16, 0x34)) {
    case 0:
        func_8012CBCC(o);
        if (func_8012BEE8(o) == 0) {
            break;
        }
        AF(o, s16, 0x5E) = 0;
        AF(o, u8, 0xC1) = 0;
        AF(o, s16, 0x2) = 1;
        AF(o, s16, 0x34) = 0;
        AF(o, s32, 0x1C) = (rand() & 0x1F) + 0x46;
        AF(o, s16, 0xE0) = 0;
        AF(o, u16, 0xE2) = AF(AF(o, u8 *, 0x20), u16, 0x12);
        switch ((s16)AF(o, u16, 0x70) >> 8) {
        case 0: case 1: case 2: case 3: case 7:
            if (AF(o, u16, 0xFE) & 2) {
                AF(o, s16, 0xE2) = 0;
            }
            break;
        case 5:
            func_sc02_000_801803B0(o);
            return;
        case 4: case 6:
            break;
        }
        AF(o, s16, 0xE4) = 0x1E;
        AF(o, s16, 0x5E) = 0;
        AF(o, u16, 0x5C) = 0xAA10;
        func_8012B2CC(o);
        func_8012B23C(o);
        func_8012B14C(o, &D_sc02_000_8018E68C);
        func_8012A828(o, &D_sc02_000_801A648C);
        break;
    case 1:
        func_8012CBF4(o);
        t = AF(o, s32, 0x1C);
        if (t == 0x1E || t == 0xD) {
            func_80143B6C(o, 0);
        }
        if (func_8012BEE8(o) != 0) {
            func_sc02_000_80180394(o);
        }
        break;
    }
}

void func_sc02_000_8017FC9C(s32 arg0) {
    AF(arg0, s16, 2) = 4;
    AF(arg0, s16, 0x98) = 0;
    AF(arg0, s32, 0x1C) = 0;
}

void func_sc02_000_8017FCB0(s32 o) {
    switch ((s16)AF(o, u16, 0x70) >> 8) {
    case 0: case 1: case 2: case 5: case 6:
        func_8012C098(o);
        break;
    case 3: case 7:
        func_8012C218(o);
        break;
    case 4:
        D_801270CC--;
        func_8012C218(o);
        break;
    }
}

s32 func_sc02_000_8017FD2C(s32 arg0) {
    AF(arg0, s16, 2) = 0xC;
    AF(arg0, s32, 0x1C) = 6;
    AF(arg0, s16, 0x5C) = 0;
    return 6;
}

void func_sc02_000_8017FD44(s32 arg0) {
    u16 temp_a1;

    AF(arg0, s16, 2) = 5;
    temp_a1 = AF(arg0, u16, 0x70);
    AF(arg0, s16, 0x98) = 0;
    AF(arg0, s32, 0x1C) = 0x10;
    if (((s32) (temp_a1 << 0x10) >> 0x18) == 5) {
        AF(arg0, u16, 0x70) = (u16) ((temp_a1 & 0xFF) | 0x100);
    }
}

s32 func_sc02_000_8017FD80(s32 arg0) {
    s32 temp_v0;

    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, s16, 2) = 6;
    func_8012A828(arg0, (s32) &D_sc02_000_801A6F44);
    func_8012B2CC(arg0);
    func_8012B23C(arg0);
    temp_v0 = func_8012B14C(arg0, (s32) &D_sc02_000_8018E6EC);
    AF(arg0, s32, 0x1C) = 0;
    AF(arg0, u8, 0xC2) = 0;
    AF(arg0, u8, 0xC3) = 0;
    return temp_v0;
}

s32 func_sc02_000_8017FDE8(s32 arg0) {
    AF(arg0, u8, 0xC1) = 7;
    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, s16, 2) = 6;
    func_8012A828(arg0, (s32) &D_sc02_000_801A6F44);
    func_8012B2CC(arg0);
    func_8012B23C(arg0);
    func_8012B14C(arg0, (s32) &D_sc02_000_8018E6EC);
    AF(arg0, s32, 0x1C) = 0;
    AF(arg0, u8, 0xC2) = 0;
    AF(arg0, u8, 0xC3) = 0;
    return func_8012B14C(arg0, (s32) &D_sc02_000_8018E6F8);
}

s32 func_sc02_000_8017FE68(s32 arg0) {
    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, s16, 0x76) = 0;
    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, s16, 2) = 6;
    func_8012A828(arg0, (s32) &D_sc02_000_801A6F44);
    func_8012B2CC(arg0);
    func_8012B23C(arg0);
    func_8012B14C(arg0, (s32) &D_sc02_000_8018E6EC);
    AF(arg0, s32, 0x1C) = 0;
    AF(arg0, u8, 0xC2) = 0;
    AF(arg0, u8, 0xC3) = 0;
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0x300;
    AF(arg0, s32, 8) = (s32) (AF(arg0, s32, 8) + 0xFFDC0000);
    func_8012B14C(arg0, (s32) &D_sc02_000_8018E704);
    func_8012B2CC(arg0);
    return func_8002D4C8(0x6AA, 0);
}

void func_sc02_000_8017FF18(u8 *o) {
    s32 ret;
    s32 cnt;
    func_8012DBD0(o, 0x50, AF(AF(o, u8 *, 0x20), s16, 0x12) + 0x800, 0x1D);
    switch (AF(o, u8, 0xC2)) {
    case 0:
        AF(AF(o, u8 *, 0x20), u16, 0x10) -= 0x100;
        if (++AF(o, s32, 0x1C) > 0x28) {
            func_sc02_000_80180394(o);
            break;
        }
        if (AF(o, s32, 0x14) <= 0) {
            ret = func_8012CBF4(o);
        } else {
            ret = func_8012CC64(o, &D_sc02_000_8018E710);
        }
        if (ret & 0x2000) {
            if ((ret & 0xFF) == 2) {
                func_sc02_000_80180A18(o);
                break;
            }
            AF(o, u8, 0xC2) = 1;
            func_80143B6C(o, 1);
            AF(o, s32, 0x14) = 0xFFF30000;
            AF(o, s32, 0x1C) = 0;
        }
        break;
    case 1:
        AF(AF(o, u8 *, 0x20), u16, 0x10) -= 0x100;
        if (++AF(o, s32, 0x1C) > 0x28) {
            func_sc02_000_80180394(o);
            break;
        }
        cnt = AF(o, s32, 0x14);
        ret = func_8012CC64(o, &D_sc02_000_8018E710);
        if (ret & 0x2000) {
            if ((ret & 0xFF) == 2) {
                func_sc02_000_80180A18(o);
                break;
            }
            func_80143B6C(o, 1);
            AF(o, s32, 0x14) = cnt;
            AF(o, u8, 0xC2) = 2;
            AF(o, s32, 0x1C) = 0;
            AF(AF(o, u8 *, 0x20), u16, 0x10) = 0;
        }
        break;
    case 2:
        AF(o, s32, 0x10) = AF(o, s32, 0x10) * 15 / 16;
        AF(o, s32, 0x18) = AF(o, s32, 0x18) * 15 / 16;
        if (AF(o, u8, 0xC3) & 1) {
            ret = func_8012CBA4(o);
            if (!(ret & 0x2000)) {
                func_sc02_000_80180394(o);
                break;
            }
            if ((ret & 0xFF) == 2) {
                func_sc02_000_80180A18(o);
                break;
            }
        } else {
            ret = func_8012CBF4(o);
            if (ret & 0x2000) {
                AF(o, u8, 0xC3) |= 1;
            }
        }
        if ((AF(o, s32, 0x1C) & 3) == 3) {
            func_80143B6C(o, 1);
        }
        if (++AF(o, s32, 0x1C) > 0x10) {
            if (!(ret & 0x2000)) {
                func_sc02_000_80180394(o);
            } else if ((ret & 0xFF) == 2) {
                func_sc02_000_80180A18(o);
            } else if (AF(o, s16, 0x76) > 0) {
                func_sc02_000_80180878(o);
            } else {
                func_sc02_000_80180394(o);
            }
        }
        break;
    }
}

void func_sc02_000_801801EC(s32 arg0) {
    AF(arg0, s16, 2) = 8;
    func_8012A828(arg0, (s32) &D_sc02_000_801A6E7C);
    func_8012B23C(arg0);
    AF(arg0, s32, 0x1C) = 0x78;
    func_80143CD4(arg0);
    func_8002D4C8(0x47B, 0);
    func_8002D4C8(0x478, 0);
    func_800CB0E8(arg0);
    AF(arg0, u8, 0xC1) = 6;
}

void func_sc02_000_80180264(u8 *o) {
    func_8012CBA4(o);
    if ((s16)AF(o, u16, 0x70) >> 8 == 4 && D_801270D4 != 0) {
        return;
    }
    if (func_8012BEE8(o) == 0) {
        return;
    }
    AF(o, u8, 0xC1) = 0;
    AF(o, s16, 0x2) = 1;
    AF(o, s16, 0x34) = 0;
    AF(o, s32, 0x1C) = (rand() & 0x1F) + 0x46;
    AF(o, s16, 0xE0) = 0;
    AF(o, u16, 0xE2) = AF(AF(o, u8 *, 0x20), u16, 0x12);
    switch ((s16)AF(o, u16, 0x70) >> 8) {
    case 0: case 1: case 2: case 3: case 7:
        if (AF(o, u16, 0xFE) & 2) {
            AF(o, s16, 0xE2) = 0;
        }
        break;
    case 5:
        func_sc02_000_801803B0(o);
        return;
    case 4: case 6:
        break;
    }
    AF(o, s16, 0xE4) = 0x1E;
    AF(o, s16, 0x5E) = 0;
    AF(o, u16, 0x5C) = 0xAA10;
    func_8012B2CC(o);
    func_8012B23C(o);
    func_8012B14C(o, &D_sc02_000_8018E68C);
    func_8012A828(o, &D_sc02_000_801A648C);
}

void func_sc02_000_80180394(s32 arg0) {
    AF(arg0, s16, 2) = 7;
    AF(arg0, s16, 0x98) = 0;
    AF(arg0, s32, 0x1C) = 0x1E;
    AF(arg0, s16, 0x5C) = 0;
}

void func_sc02_000_801803B0(s32 arg0) {
    func_sc02_000_801803D0(arg0);
}

void func_sc02_000_801803D0(s32 arg0) {
    AF(arg0, s16, 2) = 0xB;
    AF(arg0, s16, 0x34) = 1;
    AF(arg0, s16, 0x5E) = 0;
    AF(arg0, u16, 0x5C) = 0xAA10;
    func_8012A828(arg0, (s32) &D_sc02_000_801A72C4);
    AF(arg0, u8, 0x102) = 0;
    AF(arg0, s32, 0x1C) = 0x1E;
}

s32 func_sc02_000_80180428(s32 arg0) {
    s32 temp_v0;

    AF(arg0, s16, 2) = 0xB;
    AF(arg0, s16, 0x34) = 2;
    temp_v0 = func_8012A828(arg0, (s32) &D_sc02_000_801A73BC);
    AF(arg0, u8, 0x102) = 0;
    return temp_v0;
}

void func_sc02_000_8018046C(u8 *o) {
    struct { s16 field_0, field_2, field_4, field_6, field_8; u16 field_A; s16 field_C, field_E; s32 field_10; } d;
    s16 pos[4];
    s32 r;
    u8 *q;
    u16 m;
    s32 f;
    s32 near;
    s32 dz;
    s32 c;
    m = AF(o, u16, 0x70);
    f = 1;
    if (m != 0x505 && m != 0x506) f = (m & 0xFF00) == 0x700;
    if (!f) {
        near = 0;
    } else {
        q = func_8012E544(0x298);
        if (q != 0) {
            if (AF(q, u16, 0x2) != 2) {
                near = 0;
            } else {
                dz = AF(q, s16, 0xE) - AF(o, s16, 0xE);
                if (dz < 0) dz = -dz;
                near = dz < 0x20;
            }
        }
    }
    if (near) {
        func_sc02_000_80180A64(o);
        return;
    }
    switch (AF(o, u16, 0x34)) {
    case 0:
        if (AF(o, u16, 0x72) & 0x4000) {
            c = (u8)++AF(o, u8, 0x102);
            if ((rand() & 1) < c) {
                func_sc02_000_801803D0(o);
            }
        }
        break;
    case 1:
        if (AF(o, s32, 0x1C) == 0xC) {
            func_8012F214(o, &D_sc02_000_8018E66C, pos);
            d.field_0 = pos[0];
            d.field_2 = pos[1];
            d.field_4 = pos[2];
            d.field_6 = 0x20;
            d.field_8 = 2;
            d.field_A = 0;
            d.field_10 = 0;
            d.field_E = 0;
            d.field_C = AF(AF(o, s32, 0x20), u16, 0x12);
            r = func_8012C51C(&d, o);
            if (r != 0) {
                AF(AF(r, s32, 0x20), u16, 0x12) = AF(AF(o, s32, 0x20), u16, 0x12);
                func_8012B2CC(r);
            }
        } else if (AF(o, s32, 0x1C) == 0xF) {
            func_sc02_000_8018A660(o, &D_sc02_000_8018E66C);
        }
        if (func_8012BEE8(o) != 0) {
            if (++AF(o, u8, 0x102) >= 3) {
                func_sc02_000_80180428(o);
            } else {
                AF(o, s32, 0x1C) = 0x1E;
            }
        }
        break;
    case 2:
        if (AF(o, u16, 0x72) & 0x4000) {
            AF(o, s16, 0x2) = 0xB;
            AF(o, s16, 0x34) = 0;
            AF(o, s16, 0x5E) = 0;
            AF(o, u16, 0x5C) = 0xAA10;
            func_8012A828(o, &D_sc02_000_801A6344);
            AF(o, u8, 0x102) = 0;
        }
        break;
    }
}

void func_sc02_000_801806E4(u8 *o) {
    u8 *p;
    switch (AF(o, u16, 0x34)) {
    case 0:
        func_8012B178(o, 0xFFF40000);
        func_8012AD80(o);
        if (func_8012BEE8(o) != 0) {
            AF(o, s16, 0x34) = 1;
            func_8012A828(o, &D_sc02_000_8018E724);
        }
        break;
    case 1:
        if (AF(o, s16, 0x98) == 0) {
            AF(o, s16, 0x34) = 2;
            func_8012A828(o, &D_sc02_000_801A6534);
            AF(o, s32, 0x1C) = 4;
        }
        break;
    case 2:
        p = AF(o, u8 *, 0x20);
        AF(p, u16, 0x12) -= 0x200;
        if (func_8012BEE8(o) != 0) {
            AF(o, s32, 0x1C) = 0x3C;
            AF(o, s16, 0x34) = 3;
        }
        break;
    case 3:
        func_8012B178(o, 0xFFF40000);
        func_8012AD80(o);
        if (func_8012BEE8(o) == 0) {
            break;
        }
        switch ((s16)AF(o, u16, 0x70) >> 8) {
        case 0: case 1: case 2: case 5: case 6:
            func_8012C098(o);
            break;
        case 3: case 7:
            func_8012C218(o);
            break;
        case 4:
            D_801270CC--;
            func_8012C218(o);
            break;
        }
        break;
    }
}

void func_sc02_000_80180878(s32 arg0) {
    AF(arg0, s16, 2) = 0xE;
    AF(arg0, s16, 0x34) = 0;
    func_8012A828(arg0, (s32) &D_sc02_000_801A6C5C);
    func_8012B23C(arg0);
    AF(arg0, u16, 0x5C) = 0xAA10;
}

void func_sc02_000_801808C4(u8 *o) {
    switch (AF(o, u16, 0x34)) {
    case 0:
        if (AF(o, u16, 0x72) & 0x4000) {
            AF(o, s16, 0x34) = 1;
            func_8012A828(o, &D_sc02_000_801A629C);
            AF(o, s32, 0x1C) = 0xA;
        }
        break;
    case 1:
        if (func_8012BEE8(o) == 0) {
            break;
        }
        AF(o, u8, 0xC1) = 0;
        AF(o, s16, 0x2) = 1;
        AF(o, s16, 0x34) = 0;
        AF(o, s32, 0x1C) = (rand() & 0x1F) + 0x46;
        AF(o, s16, 0xE0) = 0;
        AF(o, u16, 0xE2) = AF(AF(o, u8 *, 0x20), u16, 0x12);
        switch ((s16)AF(o, u16, 0x70) >> 8) {
        case 0: case 1: case 2: case 3: case 7:
            if (AF(o, u16, 0xFE) & 2) {
                AF(o, s16, 0xE2) = 0;
            }
            break;
        case 5:
            func_sc02_000_801803B0(o);
            return;
        case 4: case 6:
            break;
        }
        AF(o, s16, 0xE4) = 0x1E;
        AF(o, s16, 0x5E) = 0;
        AF(o, u16, 0x5C) = 0xAA10;
        func_8012B2CC(o);
        func_8012B23C(o);
        func_8012B14C(o, &D_sc02_000_8018E68C);
        func_8012A828(o, &D_sc02_000_801A648C);
        break;
    }
}

void func_sc02_000_80180A18(s32 arg0) {
    func_80130740(arg0, (s32) &D_sc02_000_8018E78C);
    AF(arg0, s32, 0x1C) = 0x1E;
    AF(arg0, s32, 0x18) = 0;
    AF(arg0, s32, 0x10) = 0;
    AF(arg0, s16, 2) = 0xF;
    AF(arg0, s16, 0x5C) = 0;
}

s32 func_sc02_000_80180A64(s32 arg0) {
    void *temp_v1;

    AF(arg0, s16, 2) = 0x10;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, s32, 0x1C) = 0;
    func_8012A828(arg0, (s32) &D_sc02_000_801A6F44);
    temp_v1 = AF(arg0, void *, 0x20);
    AF(arg0, s16, 0x98) = 0;
    AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
    AF(AF(arg0, void *, 0x20), s16, 0x1A) = 0x100;
    return func_8002D4C8(0x436, 0);
}

void func_sc02_000_80180AD4(u8 *o) {
    u16 m;
    s32 f;
    u8 *p;
    s32 d;
    s32 near;
    u8 *q;
    u8 *pl;
    pl = &D_80126B58;
    m = AF(o, u16, 0x70);
    f = 1;
    if (m != 0x505 && m != 0x506) f = (m & 0xFF00) == 0x700;
    if (!f) {
        near = 0;
    } else {
        p = (u8 *)func_8012E544(0x298);
        if (p != 0) {
            if (AF(p, u16, 2) != 2) {
                near = 0;
            } else {
                d = AF(p, s16, 0xE) - AF(o, s16, 0xE);
                if (d < 0) d = -d;
                near = d < 0x20;
            }
        }
    }
    if (near) {
        AF(o, s16, 2) = 0x10;
        AF(o, s16, 0x34) = 0;
        AF(o, s16, 0x5C) = 0;
        AF(o, s32, 0x1C) = 0;
        func_8012A828(o, &D_sc02_000_801A6F44);
        q = AF(o, u8 *, 0x20);
        AF(o, s16, 0x98) = 0;
        AF(q, u16, 0x2C) |= 0x10;
        AF(AF(o, u8 *, 0x20), s16, 0x1A) = 0x100;
        func_8002D4C8(0x436, 0);
        return;
    }
    switch (AF(o, u16, 0x34)) {
    case 0:
        if (AF(pl, s16, 0xE) > D_sc02_000_8018E794) {
            AF(o, s16, 0x34) = 1;
            func_8012B178(o, 0xFFF60000);
        }
        break;
    case 1:
        if (--AF(o, s16, 0xFC) <= 0) {
            func_80143B6C(o, 0);
            AF(o, s16, 0xFC) = 8;
        }
        func_8012CBA4(o);
        if (AF(o, s16, 0xE) < D_sc02_000_8018E796 || AF(o, s16, 0xE) - AF(pl, s16, 0xE) < 0x80) {
            AF(o, s16, 0x70) = 0;
            AF(o, u8, 0xC1) = 0;
            AF(o, s16, 0x2) = 1;
            AF(o, s16, 0x34) = 0;
            AF(o, s32, 0x1C) = (rand() & 0x1F) + 0x46;
            AF(o, s16, 0xE0) = 0;
            AF(o, u16, 0xE2) = AF(AF(o, u8 *, 0x20), u16, 0x12);
            switch ((s16)AF(o, u16, 0x70) >> 8) {
            case 0: case 1: case 2: case 3: case 7:
                if (AF(o, u16, 0xFE) & 2) {
                    AF(o, s16, 0xE2) = 0;
                }
                break;
            case 5:
                func_sc02_000_801803B0(o);
                return;
            case 4: case 6:
                break;
            }
            AF(o, s16, 0xE4) = 0x1E;
            AF(o, s16, 0x5E) = 0;
            AF(o, u16, 0x5C) = 0xAA10;
            func_8012B2CC(o);
            func_8012B23C(o);
            func_8012B14C(o, &D_sc02_000_8018E68C);
            func_8012A828(o, &D_sc02_000_801A648C);
        }
        break;
    }
}

void func_sc02_000_80180D6C(s32 arg0) {
    s32 idx;
    u8 *p;
    u16 m;
    s32 f;
    s32 pad[4];

    if (func_8012C354(arg0, &D_sc02_000_8018E990) == 0) {
        return;
    }
    idx = (s16)AF(arg0, u16, 0x70) >> 8;
    func_8001C214(AF(arg0, s32, 0x20), D_sc02_000_8018E960[idx]);
    p = D_sc02_000_8018E7C0[idx];
    AF(arg0, u8 *, 0x78) = p;
    AF(arg0, u16, 0x76) = *(u16 *)p;
    func_80143970(arg0);
    func_8012B030(arg0);
    AF(arg0, s32, 0x38) = AF(arg0, s32, 0x4);
    AF(arg0, s32, 0x3C) = AF(arg0, s32, 0x8);
    AF(arg0, s32, 0x40) = AF(arg0, s32, 0xC);
    AF(arg0, s16, 0x100) = 0;
    AF(arg0, u8 *, 0xBC) = &D_sc02_000_8018E6BC;
    m = AF(arg0, u16, 0x70);
    f = 1;
    if (m != 0x505 && m != 0x506) f = (m & 0xFF00) == 0x700;
    if (f) {
        AF(arg0, s16, 0x86) = 0xB4;
    }
    switch ((s16)AF(arg0, u16, 0x70) >> 8) {
    case 0:
        AF(arg0, u8, 0xC1) = 0;
        AF(arg0, s16, 0x2) = 1;
        AF(arg0, s16, 0x34) = 0;
        AF(arg0, s32, 0x1C) = (rand() & 0x1F) + 0x46;
        AF(arg0, s16, 0xE0) = 0;
        AF(arg0, u16, 0xE2) = AF(AF(arg0, s32, 0x20), u16, 0x12);
        switch ((s16)AF(arg0, u16, 0x70) >> 8) {
        case 0: case 1: case 2: case 3: case 7:
            if (AF(arg0, u16, 0xFE) & 2) {
                AF(arg0, s16, 0xE2) = 0;
            }
            break;
        case 5:
            func_sc02_000_801803B0(arg0);
            goto skip0;
        case 4: case 6:
            break;
        }
        AF(arg0, s16, 0xE4) = 0x1E;
        AF(arg0, s16, 0x5E) = 0;
        AF(arg0, u16, 0x5C) = 0xAA10;
        func_8012B2CC(arg0);
        func_8012B23C(arg0);
        func_8012B14C(arg0, &D_sc02_000_8018E68C);
        func_8012A828(arg0, &D_sc02_000_801A648C);
    skip0:
        if (AF(arg0, u16, 0x70) & 0x80) {
            AF(arg0, u16, 0x5C) = 0xAA10;
            AF(arg0, s16, 0x2) = 1;
            AF(arg0, s16, 0x34) = 2;
            AF(arg0, s16, 0x5E) = 0;
            AF(arg0, s32, 0x1C) = 0x1E;
            func_8012A828(arg0, &D_sc02_000_801A6534);
            AF(arg0, s16, 0xFC) = 0;
        }
        break;
    case 1:
        AF(arg0, u8, 0xC1) = 0;
        AF(arg0, s16, 0x2) = 1;
        AF(arg0, s16, 0x34) = 0;
        AF(arg0, s32, 0x1C) = (rand() & 0x1F) + 0x46;
        AF(arg0, s16, 0xE0) = 0;
        AF(arg0, u16, 0xE2) = AF(AF(arg0, s32, 0x20), u16, 0x12);
        switch ((s16)AF(arg0, u16, 0x70) >> 8) {
        case 0: case 1: case 2: case 3: case 7:
            if (AF(arg0, u16, 0xFE) & 2) {
                AF(arg0, s16, 0xE2) = 0;
            }
            break;
        case 5:
            func_sc02_000_801803B0(arg0);
            goto skip1;
        case 4: case 6:
            break;
        }
        AF(arg0, s16, 0xE4) = 0x1E;
        AF(arg0, s16, 0x5E) = 0;
        AF(arg0, u16, 0x5C) = 0xAA10;
        func_8012B2CC(arg0);
        func_8012B23C(arg0);
        func_8012B14C(arg0, &D_sc02_000_8018E68C);
        func_8012A828(arg0, &D_sc02_000_801A648C);
    skip1:
        break;
    case 2:
        AF(arg0, u8, 0xC1) = 0;
        AF(arg0, s16, 0x2) = 1;
        AF(arg0, s16, 0x34) = 0;
        AF(arg0, s32, 0x1C) = (rand() & 0x1F) + 0x46;
        AF(arg0, s16, 0xE0) = 0;
        AF(arg0, u16, 0xE2) = AF(AF(arg0, s32, 0x20), u16, 0x12);
        switch ((s16)AF(arg0, u16, 0x70) >> 8) {
        case 0: case 1: case 2: case 3: case 7:
            if (AF(arg0, u16, 0xFE) & 2) {
                AF(arg0, s16, 0xE2) = 0;
            }
            break;
        case 5:
            func_sc02_000_801803B0(arg0);
            goto skip2;
        case 4: case 6:
            break;
        }
        AF(arg0, s16, 0xE4) = 0x1E;
        AF(arg0, s16, 0x5E) = 0;
        AF(arg0, u16, 0x5C) = 0xAA10;
        func_8012B2CC(arg0);
        func_8012B23C(arg0);
        func_8012B14C(arg0, &D_sc02_000_8018E68C);
        func_8012A828(arg0, &D_sc02_000_801A648C);
    skip2:
        break;
    case 3:
        AF(arg0, u16, 0x6) = D_sc02_000_8018E7A8[AF(arg0, u8, 0x70)][0];
        AF(arg0, u16, 0xA) = D_sc02_000_8018E7A8[AF(arg0, u8, 0x70)][1];
        AF(arg0, u16, 0xE) = D_sc02_000_8018E7A8[AF(arg0, u8, 0x70)][2];
        AF(arg0, s16, 0x2) = 9;
        AF(arg0, s16, 0x34) = 0;
        AF(arg0, s16, 0x5E) = 0;
        AF(arg0, u16, 0x5C) = 0xAA10;
        AF(AF(arg0, s32, 0x20), s16, 0x12) = 0;
        func_8012B2CC(arg0);
        func_8012B23C(arg0);
        func_8012A828(arg0, &D_sc02_000_801A629C);
        break;
    case 4:
        AF(AF(arg0, s32, 0x20), s16, 0x12) = rand() & 0xFFF;
        AF(arg0, u8, 0xC1) = 0;
        AF(arg0, s16, 0x2) = 1;
        AF(arg0, s16, 0x34) = 0;
        AF(arg0, s32, 0x1C) = (rand() & 0x1F) + 0x46;
        AF(arg0, s16, 0xE0) = 0;
        AF(arg0, u16, 0xE2) = AF(AF(arg0, s32, 0x20), u16, 0x12);
        switch ((s16)AF(arg0, u16, 0x70) >> 8) {
        case 0: case 1: case 2: case 3: case 7:
            if (AF(arg0, u16, 0xFE) & 2) {
                AF(arg0, s16, 0xE2) = 0;
            }
            break;
        case 5:
            func_sc02_000_801803B0(arg0);
            goto skip4;
        case 4: case 6:
            break;
        }
        AF(arg0, s16, 0xE4) = 0x1E;
        AF(arg0, s16, 0x5E) = 0;
        AF(arg0, u16, 0x5C) = 0xAA10;
        func_8012B2CC(arg0);
        func_8012B23C(arg0);
        func_8012B14C(arg0, &D_sc02_000_8018E68C);
        func_8012A828(arg0, &D_sc02_000_801A648C);
    skip4:
        break;
    case 5:
        func_sc02_000_801803D0(arg0);
        break;
    case 6:
        AF(arg0, s16, 0x2) = 0xD;
        AF(arg0, s16, 0x34) = 0;
        AF(arg0, s16, 0x5C) = 0;
        AF(arg0, s32, 0x1C) = 0x10;
        func_8012A828(arg0, &D_sc02_000_801A6534);
        break;
    case 7:
        AF(arg0, s16, 0x2) = 0x11;
        AF(arg0, s16, 0x34) = 0;
        AF(arg0, s16, 0x5C) = 0;
        func_8012A828(arg0, &D_sc02_000_801A6534);
        AF(arg0, s32, 0x1C) = 0;
        func_8012B2CC(arg0);
        break;
    }
    AF(arg0, s32, 0x24) = AF(arg0, s16, 0x6);
    AF(arg0, s32, 0x28) = AF(arg0, s16, 0xA);
    AF(arg0, s32, 0x2C) = AF(arg0, s16, 0xE);
}

void func_sc02_000_8018127C(u8 *o) {
    u8 *p;
    s32 a;
    if (AF(o, u16, 0x5C) & 1) {
        func_sc02_000_8017F950(o);
    }
    if ((AF(o, u16, 0x70) & 0x400) && D_801270D8 != 0 && AF(o, u16, 0x2) != 10) {
        AF(o, s16, 0x2) = 10;
        AF(o, s16, 0x98) = 0;
        AF(o, s32, 0x1C) = 0x3C;
        AF(o, s16, 0x5C) = 0;
        AF(AF(o, u8 *, 0x20), u16, 0x12) = (((ratan2(AF(o, s16, 0xE) - D_sc02_000_8018E6D0, D_sc02_000_8018E6CC - AF(o, s16, 0x6)) - 0x400) & 0xFFF) + 0x800) & 0xFFF;
        if (AF(o, s16, 0x6) > 0x180) {
            p = AF(o, u8 *, 0x20);
            a = AF(p, s16, 0x12);
            AF(p, s16, 0x12) = (rand() & 1) ? a - 0x400 : a + 0x400;
        }
        func_8012B2CC(o);
        func_8012B23C(o);
        func_8012B14C(o, &D_sc02_000_8018E718);
        func_8012A828(o, &D_sc02_000_801A68A4);
    }
    if (AF(o, u16, 0x0) == 0x2F) {
        D_sc02_000_8018E9C4[AF(o, u16, 0x2)](o);
        AF(o, u16, 0xDE)++;
        if (AF(o, u16, 0x86) != 0 && --AF(o, u16, 0x86) != 0) {
            return;
        }
        if (func_8012C044(o) != 0) {
            switch ((s16)AF(o, u16, 0x70) >> 8) {
            case 0: case 1: case 2: case 5: case 6:
                func_8012C098(o);
                break;
            case 3: case 7:
                func_8012C218(o);
                break;
            case 4:
                D_801270CC--;
                func_8012C218(o);
                break;
            }
        }
    }
}

void func_sc02_000_80181498(void) {
    func_8012E364();
}

void func_sc02_000_801814B8(s32 arg0) {
    if (func_8012E470() != 0) {
        func_8012E4C8(arg0);
    }
}

void func_sc02_000_801814F0(s32 arg0, s32 arg1, s32 arg2) {
    func_8012BEE8(arg0, arg1, arg2);
    if (AF(arg0, s32, 0x1C) == 1) {
        func_8012A828(arg0, (s32) &D_sc02_000_801A6F44);
    }
}

void func_sc02_000_80181538(s32 o) {
    AF(AF(o, u8 *, 0x20), u32, 4) ^= 0x80000000;
    if (func_8012BEE8(o) != 0) {
        func_80130D48(o);
        switch ((s16)AF(o, u16, 0x70) >> 8) {
        case 0: case 1: case 2: case 5: case 6:
            func_8012C098(o);
            break;
        case 3: case 7:
            func_8012C218(o);
            break;
        case 4:
            D_801270CC--;
            func_8012C218(o);
            break;
        }
    }
}

void func_sc02_000_801815F4(s32 o) {
    func_8012AD80(o);
    if (func_8012BEE8(o) != 0) {
        switch ((s16)AF(o, u16, 0x70) >> 8) {
        case 0: case 1: case 2: case 5: case 6:
            func_8012C098(o);
            break;
        case 3: case 7:
            func_8012C218(o);
            break;
        case 4:
            D_801270CC--;
            func_8012C218(o);
            break;
        }
    }
}

void func_sc02_000_80181698(s32 o) {
    func_8012AD80(o);
    if (func_8012BEE8(o) != 0) {
        switch ((s16)AF(o, u16, 0x70) >> 8) {
        case 0: case 1: case 2: case 5: case 6:
            func_8012C098(o);
            break;
        case 3: case 7:
            func_8012C218(o);
            break;
        case 4:
            D_801270CC--;
            func_8012C218(o);
            break;
        }
    }
}

void func_sc02_000_8018173C(u8 *o) {
    s32 n = AF(o, s32, 0x1C) + 1;
    AF(o, s32, 0x1C) = n;
    if (n >= 0x3D) {
        func_80130D48();
        switch ((s16)AF(o, u16, 0x70) >> 8) {
        case 0:
        case 1:
        case 2:
        case 5:
        case 6:
            func_8012C098(o);
            break;
        case 3:
        case 7:
            func_8012C218(o);
            break;
        case 4:
            D_801270CC--;
            func_8012C218(o);
            break;
        }
    } else if (n >= 0x1F) {
        AF(AF(o, u8 *, 0x20), s32, 4) ^= 0x80000000;
    }
}

void func_sc02_000_80181820(void) {
    D_80126954 = 0x12C;
    D_8012695C = 0x3E8;
    D_80126968 = 0x80;
    D_8012696A = 0x200;
    D_80126976 = 0x50;
    D_8012696C = 0;
    D_80126978 = -0xC8;
    D_8012697A = 0;
    func_8012A018((s32) func_sc02_000_80181D2C, 0);
    func_sc02_000_80181D2C((s32) &D_80126948);
    func_8012A094((s32) &D_80126948);
}

void func_sc02_000_801818C0(void) {
    D_80126954 = 0x12C;
    D_8012695C = 0x12C;
    D_80126968 = -0x80;
    D_8012696A = 0;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x50;
    D_8012697A = 0;
}

void func_sc02_000_80181914(void) {
    D_8012694C += 1;
}

void func_sc02_000_80181934(arg0)
    s32 arg0;
{
    D_80126954 = 0x64;
    D_8012695C = 0x190;
    D_80126968 = 0x155;
    D_8012696A = 0x800;
    D_80126978 = -0x80;
    D_8012696C = 0;
    D_80126976 = 0;
    D_8012697A = 0x400;
    D_801274E8 = D_80126B5E;
    func_8012A094((s32) &D_80126948);
    func_8012A018((s32) func_sc02_000_80181D2C, 2);
    func_80129CF8();
    D_800B9AB8 = 0xFFB0;
    D_800B9ABA = 0x74;
}

void func_sc02_000_801819F4(void) {
    D_80126954 = 0x64;
    D_8012695C = 0x190;
    D_80126968 = 0x155;
    D_8012696A = 0x800;
    D_80126978 = -0x80;
    D_8012696C = 0;
    D_80126976 = 0;
    D_8012697A = 0xC8;
    D_801269E4 = 0;
    D_801269E8 = 0;
    D_801274E8 = D_80126B5E;
    func_8012A018((s32) func_sc02_000_80181D2C, 2);
}

void func_sc02_000_80181A94(void) {
    func_sc02_000_80181AD4((s32) &D_80126948);
    func_8012A094((s32) &D_80126948);
    func_sc02_000_80181D2C((s32) &D_80126948);
}

void func_sc02_000_80181AD4(s32 arg0) {
    D_801274E8 = D_80126B5E;
    AF(arg0, s32, 0xC) = 0x12C;
    AF(arg0, s32, 0x14) = 0x190;
    AF(arg0, s16, 0x20) = 0x80;
    AF(arg0, s16, 0x22) = 0x800;
    AF(arg0, s16, 0x30) = -0x80;
    AF(arg0, s16, 0x24) = 0;
    AF(arg0, s16, 0x2E) = 0;
    AF(arg0, s16, 0x32) = -0xC8;
    AF(arg0, s32, 0x9C) = 0;
    AF(arg0, u8, 0xA0) = 0;
    func_8012A018((s32) func_sc02_000_80181D2C, 2);
}

s32 func_sc02_000_80181B4C(void) {
    D_80126954 = 0x12C;
    D_8012695C = 0x190;
    D_80126968 = 0x80;
    D_8012696A = 0x800;
    D_80126978 = -0x80;
    D_8012696C = 0;
    D_80126976 = 0;
    D_8012697A = -0xC8;
    D_801269E4 = 0;
    D_801269E8 = 0;
    D_801274E8 = D_80126B5E;
    func_8012A018((s32) func_sc02_000_80181D2C, 2);
    D_80126968 = 0x120;
    func_8012A094((s32) &D_80126948);
    return func_80129CF8();
}

void func_sc02_000_80181C10(void) {
    D_80126954 = 0x12C;
    D_8012695C = 0x190;
    D_80126968 = 0x80;
    D_8012696A = 0x800;
    D_80126978 = -0x80;
    D_8012696C = 0;
    D_80126976 = 0;
    D_8012697A = -0xC8;
    D_801269E4 = 0;
    D_801269E8 = 0;
    D_801274E8 = D_80126B5E;
    func_8012A018((s32) func_sc02_000_80181D2C, 2);
    D_80126954 = 0x96;
    D_8012695C = 0x64;
    D_80126968 = 0x120;
    D_80126978 = -0x60;
}

void func_sc02_000_80181CE0(arg0)
    s32 arg0;
{
    D_8012695C = 0x50;
    D_80126968 = 0x71;
    D_80126978 = -0x80;
}

void func_sc02_000_80181D0C(void) {
    D_80126968 = 0x200;
    D_80126978 = -0x1C0;
}

void func_sc02_000_80181D2C(s32 arg0) {
    D_sc02_000_8018EA0C[AF(arg0, u8, 4)]();
}

void func_sc02_000_80181D68(u8 *o) {
    struct_8_4 v;
    s32 a;

    a = ratan2((s16)D_80126B5E, D_80126B66);
    v.field_0 = D_80126B5E;
    v.field_2 = D_80126B62;
    v.field_4 = D_80126B66;
    func_sc02_000_80181E70(o, a & 0xFFF, &v.field_0);
    func_sc02_000_80182058(o);
}

void func_sc02_000_80181DE0(void) {
}

void func_sc02_000_80181DE8(u8 *o) {
    struct_8_4 v;

    v.field_0 = D_801274E8;
    v.field_2 = D_80126B62;
    v.field_4 = D_80126B66;
    if (v.field_4 >= -0xCFF && v.field_2 >= -0x17F) {
        v.field_2 = -0x180;
    }
    if (v.field_4 < -0x1980) {
        v.field_4 = -0x1980;
    }
    func_sc02_000_80181E70(o, 0, &v.field_0);
}

void func_sc02_000_80181E70(u8 *o, s32 a1, s16 *pos) {
    struct_20_4 m;
    struct_8_4 r;
    struct_8_4 out;
    struct_8_4 ang;

    AF(o, s32, 0x8) = (s16)func_80012C6C(AF(o, s16, 0x8), AF(o, s16, 0xC), 4);
    AF(o, s32, 0x10) = (s16)func_80012C6C(AF(o, s16, 0x10), AF(o, s16, 0x14), 4);
    AF(o, s16, 0x18) = func_80012ABC(AF(o, s16, 0x18), AF(o, s16, 0x20), 4);
    AF(o, s16, 0x1A) = func_80012ABC(AF(o, s16, 0x1A), AF(o, s16, 0x22), 4);
    AF(o, s16, 0x1C) = func_80012ABC(AF(o, s16, 0x1C), AF(o, s16, 0x24), 4);
    AF(o, s16, 0x28) = func_80012C6C(AF(o, s16, 0x28), AF(o, s16, 0x2E), 0x10);
    AF(o, s16, 0x2A) = func_80012C6C(AF(o, s16, 0x2A), AF(o, s16, 0x30), 0x10);
    AF(o, s16, 0x2C) = func_80012C6C(AF(o, s16, 0x2C), AF(o, s16, 0x32), 0x10);
    AF(o, s32, 0x48) = AF(o, s16, 0x28) + pos[0];
    AF(o, s32, 0x4C) = AF(o, s16, 0x2A) + pos[1];
    AF(o, s32, 0x50) = AF(o, s16, 0x2C) + pos[2];
    ang.field_0 = AF(o, u16, 0x18);
    ang.field_2 = AF(o, u16, 0x1A) + a1;
    ang.field_4 = AF(o, u16, 0x1C);
    func_80013F3C(&m);
    func_800123F0(&m, ang.field_4);
    func_80012558(&m, ang.field_2);
    func_800126C4(&m, ang.field_0);
    m.field_14[0] = AF(o, s16, 0x28) + pos[0];
    m.field_14[1] = AF(o, s16, 0x2A) + pos[1];
    m.field_14[2] = AF(o, s16, 0x2C) + pos[2];
    r.field_0 = 0;
    r.field_2 = 0;
    r.field_4 = AF(o, s32, 0x10);
    func_8012F14C(&m, &r, &out);
    AF(o, s32, 0x3C) = out.field_0;
    AF(o, s32, 0x40) = out.field_2;
    AF(o, s32, 0x44) = out.field_4;
}

void func_sc02_000_80182058(u8 *o) {
    struct_C_4 a, b;
    s32 r;

    a.field_0 = AF(o, s32, 0x48);
    a.field_4 = 0;
    a.field_8 = AF(o, s32, 0x50);
    b.field_0 = AF(o, s32, 0x3C);
    b.field_4 = 0;
    b.field_8 = AF(o, s32, 0x44);
    r = ratan2(AF(o, s32, 0x4C) - AF(o, s32, 0x40), func_80013200(&a, &b));
    if (r > 0x800) r = 0x1000 - r;
    D_800B9ABA = r * 360 / 1024 + 0xA0;
    D_800B9AB8 = ratan2(a.field_0 - b.field_0, a.field_8 - b.field_8) * 640 / 4096 + 0x50;
}

void func_sc02_000_80182154(u8 *arg0) {
    D_sc02_000_8018EAC4[AF(arg0, u8, 0x15)]();
}

s32 func_sc02_000_80182190(u8 *arg0) {
    D_sc02_000_801E8770 = 0;
    func_8016EDEC((s32) func_sc02_000_801824E0, 0x01000000);
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc02_000_801821E8(void) {
    if ((func_800167F0(0) & 0xFFFF) != 0) {
        D_80126D6C++;
        return 1;
    }
    return 0;
}

void func_sc02_000_80182234(u8 *arg0) {
    D_sc02_000_8018EACC[AF(arg0, u8, 0x15)]();
}

s32 func_sc02_000_80182270(u8 *arg0) {
    func_8016EDEC((s32) func_sc02_000_801826C4, 0x01000000);
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc02_000_801822BC(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_8002D4C8(0x1C, 0);
        func_8001BFD0();
        func_8002D4C8(0x1D, 0);
        func_800D0C48(2);
        func_800167B8(4);
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

s32 func_sc02_000_80182338(void) {
    return (func_800167F0(4) & 0xFFFF) != 0;
}

void func_sc02_000_8018235C(u8 *arg0) {
    D_sc02_000_8018EAD8[AF(arg0, u8, 0x15)]();
}

s32 func_sc02_000_80182398(u8 *arg0) {
    D_sc02_000_801E8770 = 0;
    func_8016EDEC((s32) func_sc02_000_80183238, 0x0B000000);
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc02_000_801823F0(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc02_000_80182414(u8 *arg0) {
    D_sc02_000_8018EAE0[AF(arg0, u8, 0x15)]();
}

s32 func_sc02_000_80182450(u8 *arg0) {
    D_sc02_000_801E8770 = 0;
    func_8016EDEC((s32) func_sc02_000_80183718, 0x0B000000);
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc02_000_801824A8(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

s32 func_sc02_000_801824CC(s32 arg0, s32 arg1) {
    D_sc02_000_801E8770 = 1;
    return 1;
}

void func_sc02_000_801824E0(u8 *arg0) {
    D_sc02_000_8018ED20[AF(arg0, u8, 0x214)]();
}

void func_sc02_000_8018251C(s32 arg0) {
    if (func_800CF854(arg0) != 0) {
        AF(arg0, u8, 0x214) = 5U;
        return;
    }
    func_80154274(arg0, (s32) &D_800D5A34);
    func_8014708C(arg0);
    func_801472C8(arg0);
    AF(arg0, u8, 0x4D) = (u8) (AF(arg0, u8, 0x4D) + 1);
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
}

void func_sc02_000_8018258C(void) {
}

void func_sc02_000_80182594(s32 arg0) {
    func_80146994(0x1A, arg0, 0x04CC04CD, 0);
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
}

void func_sc02_000_801825E0(s32 arg0) {
    if (func_8014C050(arg0, 0x1A) == 0) {
        AF(arg0, s32, 0x198) = func_8013767C(AF(arg0, s32, 0x198));
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_000_80182630(u8 *arg0) {
    if (func_801399F0(AF(arg0, s32, 0x198)) != 0) {
        func_80139914(AF(arg0, s32, 0x198));
        AF(arg0, u8, 0x4D) = (u8) (AF(arg0, u8, 0x4D) - 1);
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_000_8018268C(s32 arg0) {
    func_8016F0E4(arg0);
    func_80165770(arg0);
    func_80175414();
}

void func_sc02_000_801826C4(u8 *arg0) {
    D_sc02_000_8018ED38[AF(arg0, u8, 0x214)]();
}

void func_sc02_000_80182700(u8 *arg0) {
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    AF(AF(arg0, void *, 0x20), s16, 0x12) = 0;
    func_80171B44();
    func_sc02_000_80182744((s32) arg0);
}

s32 func_sc02_000_80182744(s32 arg0) {
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = AF(D_801151D4, s32, 0xC) + 2;
    AF(D_801151D4, s32, 0xC) = temp_v0;
    AF(D_801151D4, s32, 8) = temp_v0;
    var_v0 = func_80171B4C(arg0, 0x1E);
    if (var_v0 != 0) {
        var_v0 = AF(arg0, u8, 0x214) + 1;
        AF(arg0, u8, 0x214) = (u8) var_v0;
    }
    return var_v0;
}

void func_sc02_000_801827A0(s32 arg0) {
    func_8016F0E4(arg0);
}

void func_sc02_000_801827C0(u8 *arg0) {
    s16 temp_v0;

    if (AF(arg0, s16, 0x20E) < 0) {
        if (func_8001AAA0(0x13) != 0) {
            AF(arg0, s16, 0x20E) = 0;
        }
    }
    if (AF(arg0, s16, 0x20E) > 0) {
        temp_v0 = AF(arg0, s16, 0x20E) - 1;
        AF(arg0, s16, 0x20E) = temp_v0;
        if ((temp_v0 << 0x10) == 0) {
            AF(arg0, s16, 0x20E) = -1;
        }
    }
    D_sc02_000_8018ED44[AF(arg0, u8, 0x214)](arg0);
}

void func_sc02_000_80182854(u8 *arg0) {
    func_80175454();
    func_sc02_000_801818C0();
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
}

void func_sc02_000_80182894(u8 *o) {
    struct_8_8 v;

    v = *(struct_8_8 *)&D_sc02_000_801E6C7C;
    if (((s32 (*)())func_80171CC4)(o, &v) != 0) {
        func_8014BB0C();
        func_8014BDC8();
        func_8014BEC0(o);
        func_80154274(o, &D_sc02_000_8018EAE8);
        func_80154B4C(o, &D_sc02_000_8018ECF0);
        func_80146A6C(0x18, o, 0, 0, 0, 0, 0);
        AF(o, u8, 0x4D)++;
        AF(o, u8, 0x214)++;
    }
}

void func_sc02_000_80182964(u8 *o) {
    s16 r = func_80012B04(AF(AF(o, u8 *, 0x20), s16, 0x12), 0xC00, 4);
    if (r == 0) {
        func_800D0C48(0);
        AF(o, s32, 0x204) = 0;
        AF(o, u8, 0x20C) = 0;
        AF(o, u8, 0x20D) = 0;
        AF(o, u16, 0xB8) = AF(o, u16, 0xBA);
        AF(o, u8, 0x214)++;
    }
    AF(AF(o, u8 *, 0x20), u16, 0x12) = (AF(AF(o, u8 *, 0x20), u16, 0x12) + r) & 0xFFF;
}

void func_sc02_000_801829F8(u8 *arg0) {
    func_sc02_000_80182BD0();
    if (AF(arg0, u16, 0xB8) & 0x800) {
        func_80147324(0x4C8);
    }
    if (AF(arg0, u16, 0xB8) & 0x1000) {
        func_80147324(0x4C9);
    }
    if (AF(arg0, u16, 0xB8) & 0x2000) {
        AF(arg0, s16, 0x20E) = 1;
        AF(arg0, u8, 0x20C) = 2;
    }
    if (AF(arg0, u16, 0xB8) & 0x4000) {
        AF(arg0, u16, 0xD4) = (u16) (AF(arg0, u16, 0xD4) + 1);
    }
    if (AF(arg0, u16, 0xB8) == 0x8000) {
        func_sc02_000_80182CB4((s32) arg0);
        func_80154274((s32) arg0, (s32) &D_sc02_000_8018EC34);
        func_80154B4C((s32) arg0, (s32) &D_sc02_000_8018ED10);
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_000_80182AE4(u8 *arg0) {
    u16 temp_v1;

    temp_v1 = AF(arg0, u16, 0xB8);
    if (temp_v1 & 0x2000) {
        func_801553A8((s32) arg0);
        func_80147324(0x445);
    } else if (temp_v1 & 0x4000) {
        AF(arg0, u16, 0xD4) = (u16) (AF(arg0, u16, 0xD4) + 1);
    }
    if (AF(arg0, u16, 0xB8) == 0x8000) {
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
        AF(arg0, u8, 0x4D) = (u8) (AF(arg0, u8, 0x4D) - 1);
    }
}

void func_sc02_000_80182B74(s32 arg0) {
    if (func_8001B23C(0) != 0) {
        func_8016F0E4(arg0);
        func_801599A4(arg0);
        func_801553A8(arg0);
        func_8016EDEC((s32) func_sc02_000_80182D00, 0x01000000);
    }
}

void func_sc02_000_80182BD0(u8 *o) {
    u8 *t = &D_80126948;
    u8 n;

    n = AF(o, u8, 0x20C);
    if (n != 0) {
        AF(o, u8, 0x20C) = --n;
        if (n == 0) {
            AF(o, u8, 0x20D)++;
            *(struct_A4 *)&D_80126E60 = *(struct_A4 *)t;
            AF(t, s16, 0x20) = AF(t, s16, 0x18) = 0x71;
            AF(t, s32, 0x14) = AF(t, s32, 0x10) = 0x100;
            AF(t, s16, 0x30) = AF(t, s16, 0x2A) = 0x40;
            AF(t, s16, 0x2C) = 0;
            AF(t, s16, 0x32) = 0;
        }
    }
    switch (AF(o, u8, 0x20D)) {
    case 0:
        break;
    case 1: {
        s16 a = AF(t, s16, 0x2A) - 1;
        s16 b = AF(t, s16, 0x1A) + 0x16;
        AF(t, s16, 0x2A) = a;
        AF(t, s16, 0x30) = a;
        AF(t, s16, 0x1A) = b;
        AF(t, s16, 0x22) = b;
        break;
    }
    }
}

void func_sc02_000_80182CB4(void) {
    typedef struct { s32 field_0[0x29]; } struct_A4_2;

    *(struct_A4_2 *)&D_80126948 = *(struct_A4_2 *)&D_80126E60;
}

void func_sc02_000_80182D00(u8 *arg0) {
    D_sc02_000_8018ED5C[AF(arg0, u8, 0x214)]();
}

void func_sc02_000_80182D3C(u8 *arg0) {
    AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) | 0x02000000);
    func_sc02_000_80181914();
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
}

void func_sc02_000_80182D84(u8 *o) {
    struct_8_8 v;

    v = *(struct_8_8 *)&D_sc02_000_801E6C84;
    if (func_80171D78(o, &v) != 0) {
        func_8002D4C8(0x4E0, 0);
        ((s32 (*)())func_sc02_000_801831A8)((s32)o);
        AF(o, s32, 0x204) = 8;
        AF(o, u8, 0x214)++;
    }
}

void func_sc02_000_80182E08(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x204) - 1;
    AF(arg0, s32, 0x204) = temp_v0;
    if (temp_v0 == -1) {
        AF(arg0, s32, 0x204) = 0x40;
        func_80154274((s32) arg0, (s32) &D_800D4744);
        AF(arg0, s32 *, 0xB0) = &D_sc02_000_801A7F50;
        AF(arg0, s32 *, 0xCC) = &D_sc02_000_801A7FF0;
        AF(arg0, u8, 0x4D) = (u8) (AF(arg0, u8, 0x4D) + 1);
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_000_80182E84(s32 arg0, s32 arg1) {
    s32 temp_v0;

    func_sc02_000_801831A8(arg0, arg1);
    temp_v0 = AF(arg0, s32, 0x204) - 1;
    AF(arg0, s32, 0x204) = temp_v0;
    if (temp_v0 == -1) {
        func_8002D4C8(4, 0x4E0);
        AF(arg0, s32, 0x204) = 0x40;
        AF(arg0, u8, 0x4D) = (u8) (AF(arg0, u8, 0x4D) - 1);
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_000_80182EEC(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x204) - 1;
    AF(arg0, s32, 0x204) = temp_v0;
    if (temp_v0 == -1) {
        AF(arg0, s32, 0x204) = 0x10;
        func_80142454(-0x80);
        func_sc02_000_80185E88();
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_000_80182F4C(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x204) - 1;
    AF(arg0, s32, 0x204) = temp_v0;
    if (temp_v0 == -1) {
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_000_80182F78(u8 *o) {
    struct_8_4 v[2];

    v[0] = D_sc02_000_801E6C8C;
    v[1] = D_sc02_000_801E6C94;
    if (func_80171D78(o, v) != 0) {
        AF(o, u8, 0x214)++;
    }
}

void func_sc02_000_80183010(void) {
}

void func_sc02_000_80183018(s32 arg0) {
    func_801466F0(3, arg0, 0, 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 1);
    AF(arg0, u8, 0x4D) = (u8) (AF(arg0, u8, 0x4D) + 1);
    func_80154150(arg0, 0xF);
    func_801477E8(arg0, 0);
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
}

void func_sc02_000_80183098(u8 *o) {
    struct_8_4 v;

    v = D_sc02_000_801E6C9C;
    if (AF(o, s16, 0xA) >= -0xBFF) {
        AF(o, s16, 0x6) = AF(o, s16, 0x88) = v.field_0;
        AF(o, s16, 0xA) = AF(o, s16, 0x8A) = v.field_2;
        AF(o, s16, 0xE) = AF(o, s16, 0x8C) = v.field_4;
        AF(AF(o, u8 *, 0x20), s16, 0x12) = 0;
        AF(o, u8, 0x4D)--;
        AF(o, u8, 0x214)++;
    } else {
        func_80148038(o, 0x18000);
        func_80147A84(o);
        func_801473EC(o);
        func_80147460(o);
    }
}

void func_sc02_000_8018316C(void) {
    if (D_80126984 >= 0x3E9) {
        D_80126984 -= 0x14;
        D_80126990 -= 0x14;
    }
}

s32 func_sc02_000_801831A8(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = AF(arg0, s32, 0x204) & 0xF;
    if (var_v0 == 0) {
        var_v0 = func_8013C9C4((s32) &D_sc02_000_8018ED88);
    }
    return var_v0;
}

void func_sc02_000_801831E4(void) {
    D_80126D6C = 8;
}

void func_sc02_000_801831F8(void) {
    func_8016F0E4((s32) &D_80126B58);
    func_8016EDEC((s32) func_sc02_000_80183238, 0x0B000000);
    func_80175414();
}

void func_sc02_000_80183238(u8 *arg0) {
    D_sc02_000_8018EDA0[AF(arg0, u8, 0x214)]();
}

void func_sc02_000_80183274(u8 *o) {
    func_8016F094(o);
    if (func_800CF854() != 0) {
        func_80175414();
    }
    func_800D1744((s32) &D_sc02_000_8018EA6C);
    AF(o, s16, 0x136) = 2;
    AF(o, s32 *, 0xB0) = (s32 *) &D_sc02_000_801A7F50;
    AF(o, s32 *, 0xCC) = (s32 *) &D_sc02_000_801A7FF0;
    AF(o, s16, 0x132) = 0;
    AF(o, s32, 0x44) = AF(o, s32, 0x44) | 0x03000000;
    func_sc02_000_80183A78((s32) o);
    AF(o, u8, 0x214)++;
}

void func_sc02_000_80183310(u8 *o) {
    s16 t;

    func_sc02_000_801839C4(o);
    func_sc02_000_80183A80(o);
    AF(o, u16, 0xAA) &= 0x5FFF;
    AF(o, u16, 0xAC) &= 0x5FFF;
    AF(o, u16, 0xAE) = (AF(o, u16, 0xAE) & 0xFF00) | 0x80;
    if (AF(o, s16, 0xE) < 0x2A00) {
        AF(o, s32, 0x1F8) |= 0x1000000;
        t = D_80126968 + 0x22;
        D_80126960 = D_80126968 = t;
        if (t > 0x38E) {
            D_80126960 = D_80126968 = 0x38E;
        }
        t = D_8012697A + 10;
        D_80126974 = D_8012697A = t;
        if (t > 0) {
            D_80126974 = D_8012697A = 0;
        }
    }
    if (AF(o, s16, 0xE) < 0x28E0) {
        AF(o, u16, 0xAA) |= 0x40;
        AF(o, u16, 0xAC) |= 0x40;
    }
    if (AF(o, s16, 0xE) < 0x28E0 && AF(o, s32, 0x34) > 0) {
        D_800B9ABA = 0x1E0;
        func_sc02_000_80185EC8();
        func_sc02_000_80188F08();
        AF(o, s32, 0x1F8) |= 0x1000000;
        AF(AF(o, u8 *, 0x20), s16, 0x10) = 0x400;
        AF(AF(o, u8 *, 0x20), s16, 0x12) = 0;
        AF(o, s16, 0xA) = AF(o, s16, 0x8A) = -0x6C0;
        AF(o, s16, 0x6) = AF(o, s16, 0x88) = 0;
        AF(o, s16, 0xE) = AF(o, s16, 0x8C) = 0x1C7F;
        func_80146DE8(o, 0, 0, 0xFFF00000);
        AF(o, s32, 0x204) = 0x10;
        func_sc02_000_80181A94();
        AF(o, u8, 0x4D)++;
        AF(o, u8, 0x214)++;
        func_80175454();
    }
}

void func_sc02_000_801834EC(s32 arg0) {
    s32 temp_v0;

    func_80147AD4(arg0, 0, 0, 0);
    func_801473EC(arg0);
    func_80172414(arg0);
    temp_v0 = AF(arg0, s32, 0x204) - 1;
    AF(arg0, s32, 0x204) = temp_v0;
    if (temp_v0 == -1) {
        AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
        func_80146D90(arg0);
        AF(arg0, s32, 0x204) = 0x10;
        AF(arg0, u8, 0x4D) = (u8) (AF(arg0, u8, 0x4D) - 1);
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_000_80183574(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x204) - 1;
    AF(arg0, s32, 0x204) = temp_v0;
    if (temp_v0 == -1) {
        func_sc02_000_80185F24();
        AF(arg0, s32, 0x204) = 0x30;
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_000_801835C8(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x204) - 1;
    AF(arg0, s32, 0x204) = temp_v0;
    if (temp_v0 == -1) {
        AF(arg0, s32, 0x204) = 0x30;
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_000_801835F8(u8 *arg0) {
    s32 temp_v0;

    AF(arg0, s16, 0x132) = 0x800;
    if (!(AF(arg0, s32, 0x204) & 0xF)) {
        AF(arg0, s16, 0xAC) = 0x40;
        AF(arg0, s16, 0xAA) = 0x40;
    }
    temp_v0 = AF(arg0, s32, 0x204) - 1;
    AF(arg0, s32, 0x204) = temp_v0;
    if (temp_v0 == -1) {
        func_sc02_000_80185F58();
        AF(arg0, s32, 0x204) = 0x10;
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_000_8018366C(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x204) - 1;
    AF(arg0, s32, 0x204) = temp_v0;
    if (temp_v0 == -1) {
        func_80147324(0xA52);
        func_80142454(-0x80);
        AF(arg0, s32, 0x204) = 1;
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_000_801836C8(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x204) - 1;
    AF(arg0, s32, 0x204) = temp_v0;
    if (temp_v0 == -1) {
        AF(arg0, s16, 0x132) = 0;
        AF(arg0, s16, 0xAC) = 0x40;
        AF(arg0, s16, 0xAA) = 0x40;
        func_8016F0E4((s32) arg0);
        func_8016EDEC((s32) func_sc02_000_80183718, 0x0B000000);
    }
}

void func_sc02_000_80183718(u8 *arg0) {
    D_sc02_000_8018EDC0[AF(arg0, u8, 0x214)]();
}

void func_sc02_000_80183754(s32 arg0) {
    func_sc02_000_80188F08();
    func_8016F094(arg0);
    if (func_800CF854() != 0) {
        AF(arg0, s32, 0x204) = 1;
    } else {
        AF(arg0, s32, 0x204) = 0;
    }
    AF(arg0, s32, 0x208) = 0;
    func_800D1744((s32) &D_sc02_000_8018EA90);
    AF(arg0, s16, 0x136) = 2;
    AF(arg0, s32 *, 0xB0) = &D_sc02_000_801A7F50;
    AF(arg0, s32 *, 0xCC) = &D_sc02_000_801A7FF0;
    AF(arg0, s16, 0x132) = 0;
    AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) | 0x03000000);
    D_800B9ABA = 0x1E0;
    func_sc02_000_80183B64(arg0);
    func_sc02_000_80181CE0();
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    func_sc02_000_80183C94(arg0);
}

void func_sc02_000_80183814(u8 *o) {
    s16 z;

    z = AF(o, s16, 0xE);
    if (z > 0x1390) {
        AF(o, u16, 0xAE) = 0x8080;
        AF(o, u16, 0xAA) &= 0x5FBF;
        AF(o, u16, 0xAC) &= 0x5FBF;
        func_80171CC4(o, &D_sc02_000_8018EDC8);
        D_801274E8 = AF(o, u16, 6);
    } else if (z < -0x1700) {
        u16 *p = &D_801274E8;
        *p = func_80012F74((s16)*p, 0, 10, 1);
    }
    switch (AF(o, s32, 0x208)) {
    case 0:
        if (AF(o, s16, 0xE) < 0x1700) {
            func_sc02_000_80181D0C();
            AF(o, s32, 0x208)++;
        }
        break;
    case 1:
        if (AF(o, s16, 0xE) < 0x1380) {
            func_sc02_000_80181C10();
            AF(o, s32, 0x208)++;
            func_80175414();
        }
        break;
    }
    if (AF(o, s32, 0x204) != 0) {
        AF(o, s32, 0x204)--;
        return;
    }
    func_sc02_000_801839C4(o);
    func_sc02_000_80183BA4(o);
    func_sc02_000_80183C9C(o);
    if ((u16)(AF(o, u16, 0xE) - 1) < 0xEFF) {
        D_800B9AAC = 0x7FFF;
    }
    if (AF(o, s16, 0xE) < 0 && AF(o, s16, 0xE) < -0x1950 && D_sc02_000_801E8770 != 0) {
        func_800D1724(&D_sc02_000_8018EA48);
    }
}

void func_sc02_000_801839C4(u8 *o) {
    AF(o, s32, 0x1F8) &= 0xFEFFFFFF;
    AF(o, u16, 0xAA) &= 0xFF40;
    AF(o, u16, 0xAC) &= 0xFF40;
    switch (AF(o, u8, 0xA9)) {
    case 0x41:
        AF(o, u16, 0xAA) &= 0xAFFF;
        AF(o, u16, 0xAC) &= 0xAFFF;
        AF(o, u16, 0xAA) |= 0x4000;
        AF(o, u16, 0xAC) |= 0x4000;
        break;
    case 0x53:
    case 0x73:
        AF(o, u16, 0xAE) = AF(o, u8, 0xAE) | 0xFF00;
        break;
    }
}

void func_sc02_000_80183A78(s32 arg0) {
    AF(arg0, u8, 0x20C) = 0;
}

void func_sc02_000_80183A80(u8 *arg0) {
    s16 d;
    d = D_sc02_000_8018EDD0[AF(arg0, u8, 0x20C)];
    if (d != 0) {
        d = d - AF(arg0, u16, 0xE);
        if (d < 0) {
            d = -d;
        }
        if (d < 0x180) {
            AF(arg0, s32, 0x198) = func_8013767C(&D_sc02_000_801A7CB0);
            switch (AF(arg0, u8, 0x20C)) {
            case 0:
                func_80147324(0x5A1);
                break;
            case 1:
                func_80147324(0x5F1);
                break;
            case 2:
                func_80147324(0x5F2);
                break;
            }
            AF(arg0, u8, 0x20C)++;
        }
    }
}

void func_sc02_000_80183B64(s32 arg0) {
    AF(arg0, s16, 0x20E) = (s16) (D_800A5E94 << 8);
    AF(arg0, s16, 0x210) = (s16) (D_800A5E95 << 8);
    AF(arg0, s16, 0x212) = (s16) (D_800A5E96 << 8);
}

void func_sc02_000_80183BA4(u8 *o) {
    AF(o, u16, 0x20E) += 0x30;
    if (AF(o, u8, 0x20F) >= 0xFF) {
        AF(o, u8, 0x20F) = 0xFE;
    }
    AF(o, u16, 0x210) += 0x10;
    if (AF(o, u8, 0x211) > 0x90) {
        AF(o, u8, 0x211) = 0x90;
    }
    AF(o, u16, 0x212) -= 0x10;
    if (AF(o, u8, 0x213) < 0x20) {
        AF(o, u8, 0x213) = 0x20;
    }
    func_80028558(0, AF(o, u8, 0x20F), AF(o, u8, 0x211), AF(o, u8, 0x213));
    D_800AE7E0[0] += 3;
    if (D_800AE7E0[0] > 0x1000) {
        D_800AE7E0[0] = 0x1000;
    }
    func_8002850C(D_800AE7E0[0], D_800AE7E2, D_800AE7E4);
}

void func_sc02_000_80183C94(s32 arg0) {
    AF(arg0, u8, 0x20C) = 0;
}

void func_sc02_000_80183C9C(u8 *arg0) {
    s16 d;
    d = D_sc02_000_8018EDD8[AF(arg0, u8, 0x20C)];
    if (d != 0) {
        d = d - AF(arg0, u16, 0xE);
        if (d < 0) {
            d = -d;
        }
        if (d < 0x180) {
            AF(arg0, s32, 0x198) = func_8013767C(&D_sc02_000_801A7CB0);
            switch (AF(arg0, u8, 0x20C)) {
            case 0:
                func_80147324(0x5A1);
                break;
            case 1:
                func_80147324(0x5F1);
                break;
            case 2:
                func_80147324(0x5F2);
                break;
            }
            AF(arg0, u8, 0x20C)++;
        }
    }
}

void func_sc02_000_80183D80(u8 *o) {
    typedef struct { type_2 field_0[3]; } struct_C_11;
    struct_C_11 t = *(struct_C_11 *)D_sc02_000_801E6CA4;
    t.field_0[AF(o, u16, 2)]();
}

void func_sc02_000_80183DD8(u8 *o) {
    u8 *p;
    u8 *c;

    p = AF(o, u8 *, 0x4C);
    c = (u8 *)func_8014659C();
    AF(o, u8 *, 0x20) = c;
    if (c != 0) {
        func_8001C214(c, &D_sc02_000_801DFBA8);
        AF(c, void *, 0x20) = &D_sc02_000_801DF720;
        AF(c, s32, 4) |= 0x40;
        func_80149374(p, o + 4);
        AF(AF(o, u8 *, 0x20), struct_20_10, 0x34) = AF(AF(p, u8 *, 0x20), struct_20_10, 0x34);
        func_80146E90(o, 0x10);
        func_80146CA0(o);
    }
}

void func_sc02_000_80183EB8(s32 arg0) {
    if (func_80146E98(arg0) != 0) {
        func_80146E90(arg0, 0x10);
        func_80146DE8(arg0, 0, 0x40000, 0);
        func_80146CA0(arg0);
    }
}

void func_sc02_000_80183F0C(s32 arg0) {
    func_80162FF4(arg0, 0, 0x1C000, 0);
    func_80162FC0(arg0);
    if (func_80146E98(arg0) != 0) {
        func_80162CCC(arg0);
    }
}

void func_sc02_000_80183F64(u8 *arg0) {
    D_sc02_000_8018F1B4[AF(arg0, u16, 2)]();
    if ((u16) AF(arg0, u16, 2) >= 0xAU) {
        func_8013D064();
    }
}

void func_sc02_000_80183FC8(u8 *o) {
    s32 r;
    u32 i;

    r = func_8012C1B8();
    AF(o, s32, 0x20) = r;
    if (r == 0) {
        func_8012CAE4(o);
        return;
    }
    for (i = 0; i < 26; i++) {
        D_sc02_000_8018F07C[i].field_0[5] = 0;
    }
    D_sc02_000_801E8010 = 0;
    func_8001C214(r, &D_sc02_000_801AF280);
    func_8001D0E8(r, 0x800, 0x800);
    func_8012A828(o, &D_sc02_000_8018EDDC);
    AF(o, s16, 0xF8) = 1;
    AF(o, s16, 0xFA) = 0;
    if (D_800B9A0E == 0) {
        func_8013C414(&D_sc02_000_801AFAE8, &D_sc02_000_801B6AD0);
        AF(o, u16, 2) = AF(o, u16, 2) + 1;
    } else if (D_800B9A0E == 1) {
        func_sc02_000_80181934();
        AF(AF(o, u8 *, 0x20), s16, 0x14) = -0x400;
        D_sc02_000_801E8820 = 0x3E8;
        AF(o, s16, 0xA) = -0x3F4;
        AF(o, s16, 0xE) = 0x3C98;
        AF(o, s16, 6) = 0;
        AF(o, u16, 2) = 9;
    } else {
        func_sc02_000_80181B4C();
        AF(AF(o, u8 *, 0x20), s16, 0x14) = -0x400;
        D_sc02_000_801E8820 = 0x3E8;
        AF(o, s16, 0xA) = -0x573;
        AF(o, s16, 0xE) = 0x1C59;
        AF(o, s16, 0xDC) = 0x10;
        AF(o, s32, 0x18) = 0xFFFE0000;
        AF(o, s32, 0x4C) = -0x4000;
        AF(o, s16, 0xE2) = 2;
        AF(o, s16, 6) = 0;
        AF(o, s16, 0xDE) = 0;
        AF(o, s16, 0xE0) = 0;
        AF(o, u16, 2) = 0x15;
    }
    AF(o, s32, 0x1C) = 0;
}

void func_sc02_000_80184164(u8 *arg0) {
    AF(AF(arg0, void *, 0x20), s16, 0x12) = 0xC00;
}

void func_sc02_000_80184174(u8 *arg0) {
    AF(arg0, s16, 0xDC) = 0x5A;
    AF(arg0, s16, 0xDE) = 0x3C;
    AF(arg0, s16, 0xE0) = 1;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc02_000_8018419C(u8 *arg0) {
    u16 temp_v0;
    u16 temp_v0_2;

    if (AF(arg0, s16, 0xDE) != 0) {
        temp_v0 = AF(arg0, u16, 0xE0) - 1;
        AF(arg0, u16, 0xE0) = temp_v0;
        if ((temp_v0 << 0x10) == 0) {
            func_8013C9C4((s32) &D_sc02_000_8018B358);
            AF(arg0, u16, 0xE0) = (u16) ((D_800B99DC[0] & 7) + 3);
        }
        AF(arg0, s16, 0xDE) = (s16) ((u16) AF(arg0, s16, 0xDE) - 1);
    }
    temp_v0_2 = AF(arg0, u16, 0xDC) - 1;
    AF(arg0, u16, 0xDC) = temp_v0_2;
    if ((temp_v0_2 << 0x10) == 0) {
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc02_000_80184250(u8 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = func_8001D074(0x3E, 0x7D);
    AF(arg0, s32, 0xCC) = temp_v0;
    if (temp_v0 != 0) {
        func_800233CC((s32) &D_sc02_000_8018EFF4, 0x50);
        func_8001CD9C(temp_v0, (s32) &D_sc02_000_8018EFF4);
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x50000040);
    }
    temp_v0_2 = func_8001D074(0x3E, 0x7D);
    AF(arg0, s32, 0xD0) = temp_v0_2;
    if (temp_v0_2 != 0) {
        func_800233CC((s32) &D_sc02_000_8018EFF4, 0x40);
        func_8001CD9C(temp_v0_2, (s32) &D_sc02_000_8018EFF4);
        AF(temp_v0_2, s32, 4) = (s32) (AF(temp_v0_2, s32, 4) | 0x50000040);
    }
    D_sc02_000_8018EFF4 = 0xFF;
    D_sc02_000_8018EFF5 = 0x10;
    D_sc02_000_8018EFF6 = 0x10;
    AF(arg0, s16, 0xDC) = 6;
    AF(arg0, s16, 0xDE) = 0xFF;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc02_000_80184358(u8 *o) {
    u16 sp10[3];
    s16 t;
    u8 *p;
    u16 n;

    func_8012B2CC(o);
    if (AF(o, u8 *, 0xCC) != 0) {
        func_8012F14C(AF(o, u8 *, 0x20) + 0x34, &D_sc02_000_8018F034, sp10);
        AF(AF(o, u8 *, 0xCC), u16, 8) = sp10[0];
        AF(AF(o, u8 *, 0xCC), u16, 0xA) = sp10[1];
        AF(AF(o, u8 *, 0xCC), u16, 0xC) = sp10[2];
        AF(AF(o, u8 *, 0xCC), u16, 0x10) = AF(AF(o, u8 *, 0x20), u16, 0x10);
        AF(AF(o, u8 *, 0xCC), u16, 0x12) = AF(AF(o, u8 *, 0x20), u16, 0x12);
        AF(AF(o, u8 *, 0xCC), u16, 0x14) = AF(AF(o, u8 *, 0x20), u16, 0x14);
    }
    if (AF(o, u8 *, 0xD0) != 0) {
        func_8012F14C(AF(o, u8 *, 0x20) + 0x34, &D_sc02_000_8018F03C, sp10);
        AF(AF(o, u8 *, 0xD0), u16, 8) = sp10[0];
        AF(AF(o, u8 *, 0xD0), u16, 0xA) = sp10[1];
        AF(AF(o, u8 *, 0xD0), u16, 0xC) = sp10[2];
        AF(AF(o, u8 *, 0xD0), u16, 0x10) = AF(AF(o, u8 *, 0x20), u16, 0x10);
        AF(AF(o, u8 *, 0xD0), u16, 0x12) = AF(AF(o, u8 *, 0x20), u16, 0x12);
        AF(AF(o, u8 *, 0xD0), u16, 0x14) = AF(AF(o, u8 *, 0x20), u16, 0x14);
    }
    t = AF(o, s16, 0xDC);
    if (t == 0) {
        AF(o, u16, 0xDE) -= 0x40;
        if (AF(o, s16, 0xDE) <= 0) {
            AF(o, u16, 0xDE) = 0;
        }
        D_sc02_000_8018EFF4 = AF(o, u16, 0xDE);
        if (AF(o, s16, 0xDE) == 0) {
            p = AF(o, u8 *, 0xCC);
            if (p != 0) {
                AF(p, s16, 0) = 0;
            }
            p = AF(o, u8 *, 0xD0);
            if (p != 0) {
                AF(p, s16, 0) = 0;
            }
            n = AF(o, u16, 2);
            AF(o, s16, 0xDC) = 0x1000;
            D_sc02_000_801E8738 = 0;
            AF(o, u16, 2) = n + 1;
        }
    } else {
        AF(o, s16, 0xDC) = t - 1;
    }
}

void func_sc02_000_8018453C(u8 *o) {
    struct_8_4 a;
    struct_8_4 b;
    struct_8_4 d;
    struct_8_4 c;
    s32 one;
    u8 *p;

    if (D_sc02_000_801E8738 == 0) {
        func_sc02_000_8018623C(0x4D5, 0);
        D_sc02_000_801E8738++;
    }
    func_8012B2CC(o);
    func_8012F14C(AF(o, u8 *, 0x20) + 0x34, &D_sc02_000_8018F044, &b);
    func_8012F14C(AF(o, u8 *, 0x20) + 0x34, &D_sc02_000_8018F04C, &c);
    func_8012F14C(AF(o, u8 *, 0x20) + 0x34, &D_sc02_000_8018F054, &a);
    func_8012F14C(AF(o, u8 *, 0x20) + 0x34, &D_sc02_000_8018F05C, &d);
    func_sc02_000_80185910(&a, &b, &d, &c);
    func_8012F14C(AF(o, u8 *, 0x20) + 0x34, &D_sc02_000_8018F044, &b);
    func_8012F14C(AF(o, u8 *, 0x20) + 0x34, &D_sc02_000_8018F04C, &c);
    func_8012F14C(AF(o, u8 *, 0x20) + 0x34, &D_sc02_000_8018F064, &a);
    func_8012F14C(AF(o, u8 *, 0x20) + 0x34, &D_sc02_000_8018F06C, &d);
    func_sc02_000_80185910(&a, &b, &d, &c);
    AF(AF(o, u8 *, 0x20), s16, 0x12) = 0xC00 - AF(o, u16, 0xDC);
    AF(o, s16, 0xDC) -= 0x100;
    if (AF(o, s16, 0xDC) <= 0) {
        one = 1;
        p = AF(o, u8 *, 0x20);
        D_sc02_000_801E86BC = one;
        D_sc02_000_801E86C4 = 0;
        AF(p, s16, 0x12) = 0xC00;
        AF(o, s16, 0xDC) = 4;
        D_sc02_000_801E87B0 = AF(AF(o, u8 *, 0x20), struct_8_4, 0x10);
        *(struct_20_4 *)&D_sc02_000_801E8788 = AF(AF(o, u8 *, 0x20), struct_20_4, 0x34);
        func_sc02_000_801861D8(o);
        func_8013C360(&D_sc02_000_801B6AD0);
        func_sc02_000_801831E4();
        D_801270D8 = one;
        AF(o, s16, 0x2)++;
    }
}

void func_sc02_000_801847B8(u8 *o) {
    u16 s;

    if (--AF(o, s16, 0xDC) == 0) {
        func_8012A828(o, &D_sc02_000_8018EDF4);
        AF(o, s16, 0xDC) = 0x3C;
        AF(o, s16, 0xDE) = 0xC;
        s = AF(o, u16, 2);
        D_sc02_000_801E8754 = 0x1E;
        AF(o, u16, 2) = s + 1;
    } else {
        func_sc02_000_8018483C(o);
    }
}

void func_sc02_000_8018483C(u8 *o) {
    struct_8_4 v;
    struct { s16 field_0, field_2, field_4, field_6, field_8; u16 field_A; s16 field_C, field_E; s32 field_10; } d;
    s32 i;
    s32 t;

    if (--D_sc02_000_801E86BC != 0) {
        return;
    }
    D_sc02_000_801E86BC = (D_800B99DC[0] & 1) + 3;
    D_sc02_000_801E86C0 = D_800B99D8;
    for (i = 0; i < 4; i++) {
        D_sc02_000_801E87B0.field_2 = D_800B99DC[0] & 0xFFF;
        RotMatrixZYX(&D_sc02_000_801E87B0, &D_sc02_000_801E8788);
        if ((D_800B99DC[0] & 3) == 0) {
            t = 0x40 - D_sc02_000_801E86C4;
            D_sc02_000_8018F076 = t - (D_800B99DC[0] & 0x3F);
        } else {
            D_sc02_000_8018F076 = 0x80 - D_sc02_000_801E86C4;
        }
        D_sc02_000_8018F078[0] = -0x1A0 - (D_800B99DC[0] & 0x1C);
        func_8012F14C(&D_sc02_000_801E8788, (struct_8_4 *)(D_sc02_000_8018F078 - 2), &v);
        d.field_0 = v.field_0;
        d.field_2 = v.field_2;
        d.field_4 = v.field_4;
        d.field_6 = 0x3E;
        d.field_8 = d.field_A = 0;
        func_8012C51C(&d, o);
        func_sc02_000_8018623C(0x4D6, 0);
        D_800B99DC[0] += D_sc02_000_801E86C0;
        D_sc02_000_801E86C0++;
    }
    D_sc02_000_801E86C4 += 4;
    func_8013C9C4(&D_sc02_000_8018B358);
}

void func_sc02_000_80184A08(u8 *arg0) {
    s32 temp_v0;
    u16 temp_v0_2;
    u16 temp_v0_3;

    temp_v0 = D_sc02_000_801E8754 - 1;
    D_sc02_000_801E8754 = temp_v0;
    if (temp_v0 == -1) {
        func_80036D58(2);
    }
    temp_v0_2 = AF(arg0, u16, 0xDE) - 1;
    AF(arg0, u16, 0xDE) = temp_v0_2;
    if ((temp_v0_2 << 0x10) == 0) {
        func_sc02_000_8018623C(0x4E1, 0);
    }
    temp_v0_3 = AF(arg0, u16, 0xDC) - 1;
    AF(arg0, u16, 0xDC) = temp_v0_3;
    if ((temp_v0_3 << 0x10) == 0) {
        func_sc02_000_80185E00();
        func_8012A828((s32) arg0, (s32) &D_sc02_000_8018EDDC);
        D_sc02_000_801E8820 = 0x3E8;
        func_sc02_000_80181934();
        AF(AF(arg0, void *, 0x20), s16, 0x14) = -0x400;
        func_sc02_000_8018621C((s32) &D_sc02_000_801B9230);
        AF(arg0, s16, 0xA) = -0x3F4;
        AF(arg0, s16, 6) = 0;
        AF(arg0, s16, 0xE) = 0x3C98;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        return;
    }
    func_sc02_000_8018483C((s32) arg0);
}

void func_sc02_000_80184B00(u8 *arg0) {
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc02_000_80184B14(u8 *o) {
    u16 s;

    AF(AF(o, u8 *, 0x20), u16, 0x12) += 0x20;
    AF(o, s32, 8) += -0x60000;
    if (AF(o, s16, 0xA) < -0x4F0) {
        AF(o, s32, 0x18) = -0xDC000;
        func_sc02_000_801819F4();
        func_sc02_000_801831F8();
        AF(o, s16, 0xDC) = 0x10;
        AF(o, s32, 0x18) = -0xB9999;
        s = AF(o, u16, 2);
        D_sc02_000_801E874C = 0x20;
        AF(o, s32, 0x14) = -0x80000;
        AF(o, s16, 0xDE) = 0;
        D_sc02_000_801E873C = 0;
        AF(o, s32, 0x44) = 0;
        AF(o, s32, 0x48) = 0x8000;
        AF(o, s32, 0x4C) = 0;
        AF(o, u16, 2) = s + 1;
    }
}

void func_sc02_000_80184BD8(s32 arg0) {
    s32 unused[6];
    s16 v[4];
    s32 sz;
    s32 flag;
    s32 r;
    u16 t;

    func_sc02_000_80185F8C();
    func_sc02_000_801852E4(arg0);
    if (D_sc02_000_801E873C == 0) {
        AF(AF(arg0, void *, 0x20), u16, 0x12) += D_sc02_000_801E874C;
        if (AF(arg0, s16, 0xE) < D_80126B66 + 0x80) {
            func_8012DB84();
            func_8002D4C8(4, 0x4DF);
            func_8002D4C8(4, 0x4E2);
            D_sc02_000_801E8010 = 1;
        }
        if (func_sc02_000_80185C48(arg0, 1) != 0) {
            AF(arg0, s32, 0x18) = 0xFFF46667;
            AF(arg0, s32, 0x14) = 0xFFF60000;
            AF(arg0, s32, 0x44) = 0;
            AF(arg0, s32, 0x48) = 0x3000;
            AF(arg0, s32, 0x48) = D_800B99DC[0] + 0x3000;
            AF(arg0, s32, 0x4C) = 0;
            func_8013C9C4(&D_sc02_000_8018B37C);
            func_sc02_000_8018623C(0x4D7, 0);
            v[0] = AF(arg0, u16, 6) - 0xE1;
            v[1] = AF(arg0, u16, 0xA) + 0x50;
            v[2] = AF(arg0, u16, 0xE);
            func_sc02_000_8018762C(arg0, v);
            v[0] = AF(arg0, u16, 6) + 0xE1;
            func_sc02_000_8018762C(arg0, v);
            D_sc02_000_801E874C += 8;
            func_sc02_000_80187354(arg0);
        } else if (func_sc02_000_80185D58(arg0) == 1) {
            AF(arg0, s32, 0x18) = 0xFFF4999A;
            AF(arg0, s32, 0x14) = 0xFFF00000;
            AF(arg0, s16, 0xDE) = 0;
            AF(arg0, s32, 0x44) = 0;
            AF(arg0, s32, 0x48) = 0x30000;
            AF(arg0, s32, 0x4C) = 0;
            AF(arg0, u16, 2) += 1;
        }
        return;
    }
    AF(arg0, s32, 0x1C) -= 1;
    AF(AF(arg0, void *, 0x20), u16, 0x12) += 0x80;
    t = AF(arg0, u16, 0xDC) - 1;
    AF(arg0, u16, 0xDC) = t;
    if ((t << 0x10) == 0) {
        AF(arg0, u16, 0xDC) = (D_800B99DC[0] & 3) + 1;
        func_8013C9C4(&D_sc02_000_8018B37C);
        func_sc02_000_80187354(arg0);
        if ((u16)(AF(arg0, u16, 0xE) + 0x14FF) < 0x29FF && AF(arg0, s32, 0x1C) < 0) {
            func_8012C588(0x67, 0);
            AF(arg0, s32, 0x1C) = 8;
        }
    }
    if ((AF(AF(arg0, void *, 0x20), u16, 0x12) & 0xF80) == 0x380) {
        AF(arg0, s32, 0x18) = 0xFFF46667;
        AF(arg0, s32, 0x14) = 0xFFE00000;
        AF(arg0, s32, 0x48) = 0x80000;
        AF(arg0, s32, 0x44) = 0;
        AF(arg0, s32, 0x4C) = 0;
        AF(arg0, s16, 0xDE) = 0x100;
        AF(arg0, u16, 2) += 1;
        return;
    }
    if (AF(arg0, s16, 0xE) < D_80126B66 + 0x80) {
        func_8012DB84();
        func_8002D4C8(4, 0x4DF);
        func_8002D4C8(4, 0x4E2);
        D_sc02_000_801E8010 = 1;
    }
    if (func_sc02_000_80185C48(arg0, 0) == 0) {
        AF(arg0, s32, 0x14) = 0xFFE00000;
        AF(arg0, s16, 0xDE) = 0;
        AF(arg0, s32, 0x44) = 0;
        AF(arg0, s32, 0x48) = 0x40000;
        AF(arg0, s32, 0x4C) = 0;
        AF(arg0, u16, 2) += 1;
        return;
    }
    r = func_sc02_000_80185D58(arg0);
    if (r == 1 || AF(arg0, s16, 0xDE) == 1) {
        AF(arg0, s32, 0x18) = 0xFFF4999A;
        AF(arg0, s32, 0x14) = 0xFFE00000;
        AF(arg0, s32, 0x48) = 0x40000;
        AF(arg0, s16, 0xDE) = 0;
        AF(arg0, s32, 0x44) = 0;
        AF(arg0, s32, 0x4C) = 0;
        AF(arg0, u16, 2) += 1;
        if ((u16)(AF(arg0, u16, 0xE) + 0x17BD) < 0x2BC2) {
            func_sc02_000_8018623C(0x4DD, 0);
        }
        func_sc02_000_8018623C(0x4DF, 0x1000);
        return;
    }
    if (r == 2 || AF(arg0, s16, 0xDE) == 2) {
        AF(arg0, s32, 0x18) = 0;
        AF(arg0, s32, 0x14) = 0;
        AF(arg0, s32, 0x10) = 0;
        AF(arg0, s32, 0x4C) = 0;
        AF(arg0, s32, 0x48) = 0;
        AF(arg0, s32, 0x44) = 0;
        func_sc02_000_8018623C(0x4D9, 0);
        func_8002D4C8(4, 0x4DF);
        func_8002D4C8(4, 0x4E2);
        ((void (*)())func_sc02_000_801824CC)();
        func_8013C9C4(&D_sc02_000_8018B358);
        AF(arg0, u16, 2) += 2;
        return;
    }
    t = AF(arg0, u16, 0xF8) - 1;
    AF(arg0, u16, 0xF8) = t;
    if ((t << 0x10) == 0) {
        AF(arg0, s16, 0xF8) = 8;
        SetRotMatrix(&D_800AF648);
        SetTransMatrix(&D_800AF648);
        v[0] = AF(arg0, u16, 6);
        v[1] = AF(arg0, u16, 0xA);
        v[2] = AF(arg0, u16, 0xE);
        gte_ldv0(v);
        gte_rtps();
        gte_stsz(&sz);
        sz = (sz > 0x424) ? 0x424 : sz;
        sz = (sz < 0x64) ? 0x64 : sz;
        if ((u16)(((struct_4_2 *)(arg0 + 0xC))->field_2 + 0x17BD) < 0x2BC2) {
            func_sc02_000_8018623C(0x4E2, (0x7F - (sz - 0x64) / 12) | 0x1000);
            flag = 1;
        } else {
            flag = 0;
        }
        if (flag != AF(arg0, s16, 0xFA) && flag == 0) {
            func_8002D4C8(4, 0x4E2);
        }
        AF(arg0, s16, 0xFA) = flag;
    }
}

void func_sc02_000_8018512C(u8 *o) {
    s32 r;
    s32 t;

    if (D_sc02_000_801E873C == 0) {
        AF(AF(o, u8 *, 0x20), u16, 0x12) += D_sc02_000_801E874C;
    } else {
        AF(AF(o, u8 *, 0x20), u16, 0x12) += 0x80;
    }
    func_sc02_000_80185F8C(o);
    r = func_sc02_000_80185D58(o);
    if (r != 0) {
        AF(o, s16, 0xDE) = r;
    }
    t = D_800B99D8 & 0xF;
    if (t < 16) {
        r = t;
    } else {
        r = 31 - t;
    }
    AF(AF(o, u8 *, 0x20), s16, 0x14) = -0x420 - r * 4;
    if (AF(o, s16, 0xE) < D_80126B66 + 0x80) {
        func_8012DB84();
        D_sc02_000_801E8010 = 1;
    }
    if (D_sc02_000_801E873C == 0) {
        AF(AF(o, u8 *, 0x20), u16, 0x12) += D_sc02_000_801E874C;
    } else {
        AF(AF(o, u8 *, 0x20), u16, 0x12) += 0x80;
    }
    if (func_sc02_000_80185C48(o, 1) != 0) {
        func_8013C9C4(&D_sc02_000_8018B358);
        AF(o, s32, 0x4C) = 0;
        AF(o, s32, 0x48) = 0;
        AF(o, s32, 0x44) = 0;
        AF(o, s32, 0x14) = 0;
        AF(AF(o, u8 *, 0x20), s16, 0x14) = -0x400;
        func_sc02_000_80187354(o);
        func_sc02_000_8018623C(AF(o, s16, 0xDE) != 0x100 ? 0x4D7 : 0x4DE, 0);
        func_sc02_000_8018623C(0x4DF, 0x107F);
        AF(o, u16, 2)--;
    }
}

void func_sc02_000_801852E4(s32 arg0) {
    s16 temp_a1;

    temp_a1 = AF(arg0, s16, 0xE);
    if (temp_a1 >= 0x18F5) {
        AF(arg0, s16, 6) = 0;
        return;
    }
    if (temp_a1 < 0x150E) {
        AF(arg0, s16, 6) = 0x35;
        return;
    }
    AF(arg0, s16, 6) = (s16) (((0x18F3 - temp_a1) * 0x35) / 998);
}

void func_sc02_000_8018535C(void) {
}

void func_sc02_000_80185364(u8 *arg0) {
    AF(arg0, s16, 0xA) = -0x1B26;
    AF(arg0, s16, 6) = 0;
    AF(arg0, s16, 0xE) = 0x1C59;
}

void func_sc02_000_8018537C(u8 *o) {
    s16 n;
    AF(o, s32, 0x10) = 0;
    AF(o, s32, 0x14) = 0xB3333;
    AF(o, s32, 0x18) = 0;
    AF(o, s32, 0x44) = 0;
    AF(o, s32, 0x48) = 0x40000;
    AF(o, s32, 0x4C) = 0;
    AF(o, s16, 6) = 0;
    AF(o, s16, 0xA) = -0xB26;
    AF(o, s16, 0xE) = 0x1C59;
    AF(AF(o, u8 *, 0x20), s16, 0x12) = 0;
    n = AF(o, s16, 2);
    D_sc02_000_801E8784 = o;
    AF(o, s16, 2) = n + 1;
}

void func_sc02_000_801853D4(s32 arg0) {
    if (func_sc02_000_80185C48(arg0, 1) != 0) {
        func_8013C9C4((s32) &D_sc02_000_8018B358);
        AF(arg0, s32, 0x14) = 0xFFE00000;
        AF(arg0, s32, 0x18) = 0;
        AF(arg0, s32, 0x10) = 0;
        AF(arg0, s32, 0x44) = 0;
        AF(arg0, s32, 0x48) = 0x40000;
        AF(arg0, s32, 0x4C) = 0;
        func_sc02_000_80187354(arg0);
        func_sc02_000_8018623C(0x4D7, 0);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc02_000_8018545C(s32 arg0) {
    if (func_sc02_000_80185C48(arg0, 1) != 0) {
        func_8013C9C4((s32) &D_sc02_000_8018B358);
        func_sc02_000_80187354(arg0);
        func_sc02_000_8018623C(0x4D7, 0);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc02_000_801854C4(void) {
}

void func_sc02_000_801854CC(u8 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = func_8001D074(0x3E, 0x7D);
    AF(arg0, s32, 0xCC) = temp_v0;
    if (temp_v0 != 0) {
        func_800233CC((s32) &D_sc02_000_8018EFF4, 0x50);
        func_8001CD9C(temp_v0, (s32) &D_sc02_000_8018EFF4);
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x50000040);
    }
    temp_v0_2 = func_8001D074(0x3E, 0x7D);
    AF(arg0, s32, 0xD0) = temp_v0_2;
    if (temp_v0_2 != 0) {
        func_800233CC((s32) &D_sc02_000_8018EFF4, 0x40);
        func_8001CD9C(temp_v0_2, (s32) &D_sc02_000_8018EFF4);
        AF(temp_v0_2, s32, 4) = (s32) (AF(temp_v0_2, s32, 4) | 0x50000040);
    }
    D_sc02_000_8018EFF4 = 0xFF;
    D_sc02_000_8018EFF5 = 0x10;
    D_sc02_000_8018EFF6 = 0x10;
    AF(arg0, s16, 0xDC) = 6;
    AF(arg0, s16, 0xDE) = 0xFF;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc02_000_801855D4(s32 arg0) {
    u16 sp10[3];
    s16 temp_v0;
    u16 temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;

    func_8012B2CC(arg0);
    if (AF(arg0, void *, 0xCC) != NULL) {
        func_8012F14C(AF(arg0, void *, 0x20) + 0x34, (s32) &D_sc02_000_8018F034, (s32) sp10);
        AF(AF(arg0, void *, 0xCC), u16, 8) = sp10[0];
        AF(AF(arg0, void *, 0xCC), u16, 0xA) = sp10[1];
        AF(AF(arg0, void *, 0xCC), u16, 0xC) = sp10[2];
        AF(AF(arg0, void *, 0xCC), u16, 0x10) = (u16) AF(AF(arg0, void *, 0x20), u16, 0x10);
        AF(AF(arg0, void *, 0xCC), u16, 0x12) = (u16) AF(AF(arg0, void *, 0x20), u16, 0x12);
        AF(AF(arg0, void *, 0xCC), u16, 0x14) = (u16) AF(AF(arg0, void *, 0x20), u16, 0x14);
    }
    if (AF(arg0, void *, 0xD0) != NULL) {
        func_8012F14C((s32) (AF(arg0, void *, 0x20) + 0x34), (s32) &D_sc02_000_8018F03C, (s32) sp10);
        AF(AF(arg0, void *, 0xD0), u16, 8) = sp10[0];
        AF(AF(arg0, void *, 0xD0), u16, 0xA) = sp10[1];
        AF(AF(arg0, void *, 0xD0), u16, 0xC) = sp10[2];
        AF(AF(arg0, void *, 0xD0), u16, 0x10) = (u16) AF(AF(arg0, void *, 0x20), u16, 0x10);
        AF(AF(arg0, void *, 0xD0), u16, 0x12) = (u16) AF(AF(arg0, void *, 0x20), u16, 0x12);
        AF(AF(arg0, void *, 0xD0), u16, 0x14) = (u16) AF(AF(arg0, void *, 0x20), u16, 0x14);
    }
    temp_v0 = AF(arg0, s16, 0xDC);
    if (temp_v0 == 0) {
        temp_v0_2 = AF(arg0, u16, 0xDE) - 0x20;
        AF(arg0, u16, 0xDE) = temp_v0_2;
        if ((temp_v0_2 << 0x10) <= 0) {
            AF(arg0, u16, 0xDE) = 0U;
        }
        (*(s8 *)&D_sc02_000_8018EFF4) = (s8) AF(arg0, u16, 0xDE);
        if ((s16) AF(arg0, s16, 0xDE) == 0) {
            temp_v0_3 = AF(arg0, void *, 0xCC);
            if (temp_v0_3 != NULL) {
                AF(temp_v0_3, s16, 0) = 0;
            }
            temp_v0_4 = AF(arg0, void *, 0xD0);
            if (temp_v0_4 != NULL) {
                AF(temp_v0_4, s16, 0) = 0;
            }
            AF(arg0, s16, 0xDC) = 0x2E;
            AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        }
    } else {
        AF(arg0, s16, 0xDC) = (s16) (temp_v0 - 1);
    }
}

void func_sc02_000_801857B0(u8 *arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0xDC) - 1;
    AF(arg0, u16, 0xDC) = temp_v0;
    if ((temp_v0 << 0x10) == 0) {
        AF(arg0, u16, 0xDC) = 0x10U;
        AF(arg0, s32, 0x18) = 0xFFFE0000;
        AF(arg0, s32, 0x4C) = -0x4000;
        AF(arg0, s16, 0xE2) = 2;
        AF(arg0, s16, 0xDE) = 0;
        AF(arg0, s16, 0xE0) = 0;
        D_sc02_000_801E873C = 1;
        D_sc02_000_801E8750 = 0;
        func_8013D164();
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc02_000_80185840(u8 *o) {
    s16 h;
    u32 r;

    func_sc02_000_80185C48(o, 0);
    AF(AF(o, u8 *, 0x20), s16, 0x12) += AF(o, s16, 0xE0);
    h = AF(o, s16, 0xE0);
    if (h >= 0x80) {
        AF(o, s16, 0xE0) = 0x80;
    } else {
        AF(o, s16, 0xE0) = h + AF(o, s16, 0xE2);
    }
    D_sc02_000_801E8750 += 0x27D7D;
    r = (u32)D_sc02_000_801E8750 >> 16;
    if (r >= 0x80) {
        r = 0x7F;
    }
    ((s32 (*)())func_sc02_000_8018623C)(0x4DF, r + 0x1000);
    if (AF(o, s32, 0x18) < -0xB9999) {
        AF(o, s32, 0x18) = -0xB9999;
        AF(o, s16, 2) = 0xB;
        ((s32 (*)())func_sc02_000_8018623C)(0x4DF, 0x107F);
    }
}

void func_sc02_000_80185910(struct_8_4 *a, struct_8_4 *b, struct_8_4 *c, struct_8_4 *d) {
    s32 xy[3];
    s32 flag;
    s32 otz;
    u8 *p;
    u32 *row;

    SetRotMatrix(&D_800AF648);
    SetTransMatrix(&D_800AF648);
    gte_ldv3(a, b, c);
    gte_rtpt();
    gte_stflg(&flag);
    if (flag & 0x7F85E000) {
        return;
    }
    p = D_800A5E60;
    gte_stsxy3c(xy);
    gte_ldv0(d);
    gte_rtps();
    AF(p, u8, 3) = 8;
    AF(p, u8, 7) = 0x3A;
    AF(p, s32, 8) = xy[0];
    AF(p, s32, 0x10) = xy[1];
    AF(p, s32, 0x18) = xy[2];
    gte_stsxy(p + 0x20);
    gte_stszotz(&otz);
    AF(p, u8, 0x1C) = AF(p, u8, 0xC) = 0xFF;
    AF(p, u8, 0x14) = AF(p, u8, 4) = 0;
    AF(p, u8, 0x1D) = AF(p, u8, 0x15) = AF(p, u8, 0xD) = AF(p, u8, 5) = 0;
    AF(p, u8, 0x1E) = AF(p, u8, 0x16) = AF(p, u8, 0xE) = AF(p, u8, 6) = 0;
    row = D_800A6610[D_800B9A02];
    ((struct_4_5 *)p)->field_0_b0 = ((struct_4_5 *)&row[otz])->field_0_b0;
    ((struct_4_5 *)&row[otz])->field_0_b0 = (u32)p;
    p += 0x24;
    SetDrawMode(p, 0, 0, GetTPage(0, 1, 0, 0) & 0xFFFF, 0);
    ((struct_4_5 *)p)->field_0_b0 = ((struct_4_5 *)&row[otz])->field_0_b0;
    ((struct_4_5 *)&row[otz])->field_0_b0 = (u32)p;
    D_800A5E60 = p + 0xC;
}

void func_sc02_000_80185B40(u8 *arg0) {
    D_sc02_000_8018F2E0[AF(arg0, u16, 2)]();
}

void func_sc02_000_80185B7C(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001CA1C(temp_v0, (s32) &D_sc02_000_8018F210);
    func_8012A828((s32) arg0, (s32) &D_sc02_000_8018F288);
    AF(arg0, s16, 0xDC) = 0xA;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc02_000_80185BF0(u8 *arg0, s32 arg1) {
    u16 temp_v0;
    void *temp_v1;

    temp_v0 = AF(arg0, u16, 0xDC) - 1;
    AF(arg0, u16, 0xDC) = temp_v0;
    if ((temp_v0 << 0x10) == 0) {
        func_8012C218((s32) arg0, arg1);
        return;
    }
    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, s16, 0x1C) = -0x8000;
    AF(temp_v1, s16, 0x1A) = -0x8000;
    AF(temp_v1, s16, 0x18) = -0x8000;
}

s32 func_sc02_000_80185C48(u8 *arg0, s32 arg1) {
    struct_8_5 a;
    struct_8_5 b;
    s32 r;

    a.field_0 = AF(arg0, u16, 0x3A);
    a.field_2 = AF(arg0, u16, 0x3E) + 0x51;
    a.field_4 = AF(arg0, u16, 0x42);
    AF(arg0, struct_C_4, 0x10).field_0 += AF(arg0, struct_C_4, 0x44).field_0; AF(arg0, struct_C_4, 0x10).field_4 += AF(arg0, struct_C_4, 0x44).field_4; AF(arg0, struct_C_4, 0x10).field_8 += AF(arg0, struct_C_4, 0x44).field_8; AF(arg0, struct_C_4, 4).field_0 += AF(arg0, struct_C_4, 0x10).field_0; AF(arg0, struct_C_4, 4).field_4 += AF(arg0, struct_C_4, 0x10).field_4; AF(arg0, struct_C_4, 4).field_8 += AF(arg0, struct_C_4, 0x10).field_8;
    b.field_0 = AF(arg0, u16, 6);
    b.field_2 = AF(arg0, u16, 0xA) + 0x51;
    b.field_4 = AF(arg0, u16, 0xE);
    r = func_8012CEB0(&a, &b, arg1);
    AF(arg0, u16, 6) = b.field_0;
    AF(arg0, u16, 0xA) = b.field_2 - 0x51;
    AF(arg0, u16, 0xE) = b.field_4;
    if (r & 0x6000) {
        AF(arg0, s32, 0x14) = 0;
    }
    return r;
}

s32 func_sc02_000_80185D58(u8 *o) {
    s32 v = AF(o, s16, 0xE);

    if (v >= 0x3057 && v < 0x3087) return 1;
    if (v >= 0x2D37 && v < 0x2D47) return 1;
    if (v >= 0x377 && v < 0x387) return 1;
    if (v >= 0x177 && v < 0x187) return 1;
    if (v >= -0xB54 && v < -0xB44) return 1;
    if (v >= -0xF31 && v < -0xF31 + 0x1B3) return 1;
    if (v >= -0x17E4 && v < -0x17D4) return 2;
    if (v >= -0x77E && v < -0x77E + 0x28E) return 1;
    if (v >= -0x99A && v < -0x99A + 0x10A) return 1;
    if (v >= -0x1391 && v < -0x1391 + 0x197) return 1;
    return 0;
}

void func_sc02_000_80185E00(void) {
    u32 i;
    s32 j;
    u16 t;

    for (i = 0; i < 0x60; i++) {
        j = i * 0x10C;
        t = AF(&D_801202A0, u16, j);
        if (t != 0 && t != 0x29) {
            func_8012C218((u8 *)&D_801202A0 + j);
        }
    }
}

s32 func_sc02_000_80185E88(void) {
    s32 t = func_8012E504(0, 0x29);
    if (t == 0) {
        return 0;
    }
    AF(t, s16, 2) = 4;
    return 1;
}

void func_sc02_000_80185EC8(void) {
    s32 temp_v0;

    temp_v0 = func_8012E504(0, 0x29);
    if (temp_v0 != 0) {
        func_8002D4C8(4, 0x4DF);
        AF(temp_v0, s16, 0xA) = -0x1B26;
        AF(temp_v0, s16, 0xE) = 0x1C59;
        AF(temp_v0, s16, 6) = 0;
        AF(temp_v0, s16, 2) = 0xE;
    }
}

void func_sc02_000_80185F24(void) {
    s32 temp_v0;

    temp_v0 = func_8012E504(0, 0x29);
    if (temp_v0 != 0) {
        AF(temp_v0, s16, 2) = 0xF;
    }
}

void func_sc02_000_80185F58(void) {
    s32 temp_v0;

    temp_v0 = func_8012E504(0, 0x29);
    if (temp_v0 != 0) {
        AF(temp_v0, s16, 2) = 0x13;
    }
}

void func_sc02_000_80185F8C(u8 *o) {
    struct { s16 field_0, field_2, field_4, field_6, field_8; u16 field_A; s16 field_C, field_E; s32 field_10; } d;
    u32 i;
    s32 lim;

    lim = AF(o, s16, 0xE) - 0x400;
    for (i = 0; i < 26; i++) {
        if (D_sc02_000_8018F07C[i].field_0[5] == 0 && D_sc02_000_8018F07C[i].field_0[2] < lim
            && D_sc02_000_8018F07C[i].field_0[2] + 16 >= lim) {
            d.field_0 = D_sc02_000_8018F07C[i].field_0[0];
            d.field_2 = D_sc02_000_8018F07C[i].field_0[1];
            d.field_4 = D_sc02_000_8018F07C[i].field_0[2];
            d.field_6 = D_sc02_000_8018F07C[i].field_0[3];
            d.field_8 = D_sc02_000_8018F07C[i].field_0[4];
            d.field_A = 0;
            func_8012C51C(&d, o);
            D_sc02_000_8018F07C[i].field_0[5] = 1;
        }
    }
}

void func_sc02_000_801860A8(u8 *arg0) {
    D_sc02_000_8018F2E8[AF(arg0, u16, 2)]();
}

void func_sc02_000_801860E4(u8 *arg0) {
    s32 temp_v0;

    if ((AF(arg0, s32, 0x20) = temp_v0 = func_8012C1B8()) == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc02_000_801DF700);
    func_8001D0E8(temp_v0, 0x800, 0x800);
    func_8012A828((s32) arg0, (s32) &D_sc02_000_8018EFDC);
    AF(arg0, s32, 0x14) = 0xFFFC0000;
    AF(arg0, s32, 0x48) = 0x20000;
    AF(arg0, s32, 0x44) = 0;
    AF(arg0, s32, 0x4C) = 0;
    AF(arg0, s16, 0xDC) = 0x40;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc02_000_8018618C(s32 arg0, s32 arg1) {
    u16 temp_v0;

    func_8012AD80(arg0, arg1);
    temp_v0 = AF(arg0, u16, 0xDC) - 1;
    AF(arg0, u16, 0xDC) = temp_v0;
    if ((temp_v0 << 0x10) == 0) {
        func_8012C218(arg0);
    }
}

void func_sc02_000_801861D8(u8 *o) {
    struct { s16 field_0, field_2, field_4, field_6, field_8; u16 field_A; s16 field_C, field_E; s32 field_10; } d;

    d.field_0 = 0;
    d.field_2 = -0xF70;
    d.field_4 = 0;
    d.field_6 = 0x41;
    d.field_8 = d.field_A = 0;
    func_8012C51C(&d, o);
}

s32 func_sc02_000_8018621C(s32 arg0) {
    return func_8013BD34();
}

s32 func_sc02_000_8018623C(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_v0;

    var_v0 = D_sc02_000_801E8010;
    if (var_v0 == 0) {
        var_v0 = func_8002D4C8(arg0 & 0xFFFF, arg1 & 0xFFFF);
    }
    return var_v0;
}

void func_sc02_000_8018626C(void) {
    struct { s16 field_0, field_2, field_4, field_6, field_8; u16 field_A; s16 field_C, field_E; s32 field_10; } d;
    struct_8_4 v;
    union_4_2 w;
    union_4_2 x;
    s32 *p = &D_801270D0;

    *p += 1;
    if (*p >= 0x3C && D_801270CC < D_sc02_000_8018F2F0 && D_80126D50 == 0) {
        *p = 0;
        v.field_0 = D_80126B5E;
        v.field_2 = D_80126B62;
        v.field_4 = D_80126B66;
        func_8012B0B4(&w, (ratan2(D_800D391C - v.field_4, v.field_0 - AF(&D_800D3918, s16, 0)) - 0x400) & 0xFFF, 0x110);
        x = w;
        d.field_0 = x.m1.field_0;
        d.field_2 = -0x1004;
        d.field_4 = x.m1.field_2;
        d.field_6 = 0x2F;
        d.field_8 = 0x400;
        d.field_A = 0;
        d.field_C = 0x7FFF;
        d.field_10 = 0;
        d.field_E = 0;
        if (func_8012C51C(&d, 0) != 0) {
            D_801270CC++;
        }
    }
}

void func_sc02_000_801863AC(u8 *arg0) {
    D_sc02_000_8018F2F4[AF(arg0, u16, 2)]();
}

void func_sc02_000_801863E8(u8 *arg0) {
    D_sc02_000_8018F2FC[AF(arg0, u16, 2)]();
}

void func_sc02_000_80186424(u8 *o) {
    struct_8_4 r;
    struct_20_4 m;
    s32 c;
    s32 x;
    s32 k;
    u8 *t;

    c = (rand() & 0xF) ? 0x40000000 : 0x50000000;
    t = AF(o, u8 *, 0x20);
    x = AF(t, s32, 0x4) & 0xCFFFFFFF;
    k = c | 0x40000000;
    AF(t, s32, 0x4) = x | k;
    r.field_0 = AF(o, s16, 0x108) += 0x80;
    r.field_2 = AF(o, s16, 0x10A) += 0x100;
    r.field_4 = 0;
    RotMatrixYXZ(&r, &m);
    r.field_0 = r.field_2 = 0;
    r.field_4 = 0x200;
    ApplyMatrixSV(&m, &r, &r);
    *(s32 *)&D_sc02_000_801E8270 = D_sc02_000_801E8280 = D_sc02_000_801E8290 = r.field_0;
    D_sc02_000_801E8274 = D_sc02_000_801E8284 = D_sc02_000_801E8294 = r.field_2;
    D_sc02_000_801E8278 = D_sc02_000_801E8288 = D_sc02_000_801E8298 = r.field_4;
}

void func_sc02_000_80186530(u8 *o) {
    u8 *c;
    s32 *p;
    s16 v;

    func_sc02_000_80186424(o);
    AF(AF(o, u8 *, 0x20), u16, 0x12) += 0x10;
    c = AF(o, u8 *, 0xCC);
    AF(c, u16, 0x8) = AF(o, u16, 0x6);
    AF(c, u16, 0xA) = AF(o, u16, 0xA);
    AF(c, u16, 0xC) = AF(o, u16, 0xE);
    AF(c, u16, 0x2C) |= 0x10;
    v = D_sc02_000_8018F318 * AF(o, s16, 0xFC) / 16 + D_sc02_000_8018F314;
    AF(c, s16, 0x18) = AF(c, s16, 0x1A) = AF(c, s16, 0x1C) = v;
    p = &D_801270C8;
    if (AF(o, s32, 0xDC) != *p) {
        AF(o, s32, 0xDC) = *p;
        AF(o, s32, 0xE0) = 8;
    }
    if (AF(o, s32, 0xE0) != 0) {
        AF(o, s32, 0xE0) -= 1;
    } else if (*p != 0) {
        if (AF(o, s16, 0xFE) == 0) {
            func_8002D4C8(0x4C6, 0);
            func_8002D4C8(0x4CE, 0);
        }
        AF(o, s16, 0xFE) = 1;
        AF(AF(o, u8 *, 0x20), s32, 4) |= 0x80000000;
        AF(o, s16, 0x5C) = 0;
        if (func_8012BD14(o) < 0x901) {
            func_8016EDEC(func_sc02_000_801827C0, 0x01000000);
            D_801270D4 = 1;
            bzero(AF(o, u8 *, 0xCC), 0x84);
            func_8012C218(o);
            return;
        }
    } else {
        if (AF(o, s16, 0xFE) == 1) {
            func_8002D4C8(0x4C7, 0);
        }
        AF(o, s16, 0xFE) = 0;
        AF(o, s16, 0x5C) = 0x800;
        AF(AF(o, u8 *, 0x20), s32, 4) &= 0x7FFFFFFF;
    }
    if (AF(AF(o, u8 *, 0x20), s32, 4) < 0) {
        if (--AF(o, s16, 0xFC) < 0) {
            AF(o, s16, 0xFC) = 0;
        }
    } else {
        if (++AF(o, s16, 0xFC) > 0x10) {
            AF(o, s16, 0xFC) = 0x10;
        }
    }
}

void func_sc02_000_80186764(u8 *o) {
    s32 t;
    u8 *s;

    t = func_8012C1B8();
    AF(o, s32, 0x20) = t;
    if (t == 0) {
        func_8012CAE4(o);
        return;
    }
    func_8001C810(t, &D_sc02_000_801DCED0);
    AF(o, u8 *, 0x58) = &D_sc02_000_8018F304;
    AF(o, s16, 0x5C) = 0x800;
    AF(AF(o, u8 *, 0x20), s32, 4) |= 0x40000000;
    func_8001D0E8(AF(o, s32, 0x20), 0xDC, 0x98);
    AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x20;
    AF(AF(o, u8 *, 0x20), u8 *, 0x80) = &D_sc02_000_801E8270;
    D_sc02_000_801E827D = 0xFF;
    D_sc02_000_801E829E = 0xFF;
    D_sc02_000_801E82AC = 0xFF;
    D_sc02_000_801E827D = 0xFF;
    D_sc02_000_801E828E = 0xFF;
    D_sc02_000_801E828C = 0xFF;
    D_sc02_000_801E827D = 0xFF;
    D_sc02_000_801E827E = 0xFF;
    D_sc02_000_801E827C = 0xFF;
    s = (u8 *)func_8012C1B8();
    AF(o, u8 *, 0xCC) = s;
    func_8001C214(s, &D_sc02_000_801DD528);
    AF(s, s32, 0x20) = AF(&D_sc02_000_8018AF28, s32, 0);
    func_8001D0E8(s, 0xDC, 0x98);
    func_8012A828(o, &D_sc02_000_8018AF28);
    AF(o, s16, 2) = 1;
    AF(o, s16, 0xFC) = 0x10;
    AF(o, s32, 0xDC) = D_801270C8;
}

void func_sc02_000_801868D4(u8 *arg0) {
    D_sc02_000_8018F31C[AF(arg0, u16, 2)]();
}

void func_sc02_000_80186910(u8 *arg0) {
    D_sc02_000_8018F394[AF(arg0, u16, 2)]();
}

void func_sc02_000_8018694C(u8 *o) {
    s32 r;
    u16 s;

    r = func_8012C1B8();
    AF(o, s32, 0x20) = r;
    if (r == 0) {
        func_8012CAE4(o);
        return;
    }
    func_8001C214(r, 0);
    func_8012E8E0(o, &D_sc02_000_8018F324);
    AF(AF(o, u8 *, 0x68), s16, 0xC) = 0x7FFF;
    s = AF(o, u16, 2);
    D_sc02_000_801E8018 = 0;
    AF(o, s16, 0x34) = 0;
    AF(o, u16, 2) = s + 1;
}

void func_sc02_000_801869CC(u8 *o) {
    switch (AF(o, u16, 0x34)) {
    case 0:
        if (D_sc02_000_801E8018 == 0) {
            return;
        }
        func_80178B18(o, &D_sc02_000_8018F33C);
        break;
    case 1:
        if (func_80178970(o) == 0) {
            return;
        }
        func_80178D18(o);
        break;
    case 2:
    default:
        return;
    }
    AF(o, u16, 0x34)++;
}

void func_sc02_000_80186A64(u8 *arg0) {
    AF(arg0, s32, 0x1C) = 0x96;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    func_8002D4C8(0x402, 0);
}

void func_sc02_000_80186A9C(u8 *arg0, s32 arg1, s32 arg2) {
    if ((AF(arg0, s32, 0x1C) != 0) && (func_8012BEE8((s32) arg0, arg1, arg2) != 0)) {
        func_8002D4C8(0xD, 0x402);
    }
    func_sc02_000_8018626C();
}

void func_sc02_000_80186AE4(u8 *o) {
    u8 *p;

    *(struct_254 *)&D_sc02_000_801E801C = *(struct_254 *)&D_80126B58;
    if (func_8012BD14(o) <= 0xC40) {
        D_801270C8 = 1;
        D_sc02_000_801E8018++;
        return;
    }
    D_801270C8 = 0;
    for (p = (u8 *)&D_801202A0; p < (u8 *)&D_801202A0 + 0x6480; p += 0x10C) {
        if (AF(p, u16, 0) == 0x2F && AF(p, u16, 2) != 6 && AF(p, u16, 2) != 4 && func_8012BC60(o + 4, p + 4) <= 0xC40) {
            D_801270C8 = 1;
            return;
        }
    }
}

void func_sc02_000_80186C44(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8(arg0, arg1);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc02_000_801DCA30);
    func_8012A828(arg0, (s32) &D_sc02_000_8018AF28);
    AF(arg0, s16, 2) = 1;
}

void func_sc02_000_80186CAC(u8 *arg0) {
    D_sc02_000_8018F3AC[AF(arg0, u16, 2)]();
}

void func_sc02_000_80186CE8(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc02_000_801E0294);
    func_8001D0E8(AF(arg0, s32, 0x20), 0xDC, 0xB8);
    AF(arg0, s32 *, 0x58) = &D_sc02_000_8018F39C;
    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) | 0xC00);
    func_8012A828((s32) arg0, (s32) &D_sc02_000_8018AF28);
    func_8012B200((s32) arg0);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc02_000_80186D88(u8 *o) {
    struct_8_4 v;
    u8 *t;
    u8 *r;
    u8 *q;

    t = AF(o, u8 *, 0x64);
    if (AF(t, s16, 0xE) - 0x80 < AF(o, s16, 0xE)) {
        AF(t, s16, 0xFE) = 1;
        v.field_0 = AF(o, u16, 6);
        v.field_2 = AF(o, u16, 0xA) - 0x40;
        v.field_4 = AF(o, u16, 0xE);
        r = ((u8 *(*)())func_80143BDC)(&v);
        if (r != 0) {
            q = AF(r, u8 *, 0xCC);
            AF(q, s16, 0x18) = AF(q, s16, 0x1A) = 0x5000;
        }
        func_sc02_000_80187558(o);
        func_8002D4C8(0x4DC, 0);
        func_8012C218(o);
    }
}

void func_sc02_000_80186E30(u8 *arg0) {
    D_sc02_000_8018F3C4[AF(arg0, u16, 2)]();
}

void func_sc02_000_80186E6C(u8 *o) {
    s32 p;
    u8 *a;

    p = func_8012C1B8();
    AF(o, s32, 0x20) = p;
    if (p == 0) {
        func_8012CAE4(o);
        return;
    }
    a = &D_sc02_000_801E071C;
    if (AF(o, s16, 0x70) != 0) {
        a = &D_sc02_000_801E2164;
    }
    func_8001C214(p, a);
    func_8001D0E8(AF(o, s32, 0x20), 0x140, 0xF0);
    AF(o, s32, 0x58) = (s32) &D_sc02_000_8018F3B4 | 0x40000000;
    AF(o, u16, 0x5C) |= 0xC00;
    func_8012A828((s32) o, (s32) &D_sc02_000_8018AF28);
    AF(o, u8, 0x75) = (AF(o, s16, 0x70) != 0) ? 1 : 4;
    func_8012B200(o);
    AF(o, s16, 0x2)++;
}

void func_sc02_000_80186F44(u8 *arg0) {
    if ((AF(AF(arg0, void *, 0x64), s16, 0xE) - 0x10) < AF(arg0, s16, 0xE)) {
        AF(arg0, s32, 0x18) = 0xFFDBC000;
        AF(arg0, s32, 0x14) = 0xFFE00000;
        AF(arg0, s32, 0x48) = 0x80000;
        AF(arg0, s32, 0x44) = 0;
        AF(arg0, s32, 0x4C) = 0;
        AF(arg0, s16, 0x12) = (s16) (0xF - (D_800B99DC[0] & 0x1F));
        func_8002D4C8(0x4D8, 0);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc02_000_80186FDC(u8 *arg0) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x12) = (u16) (AF(temp_v1, u16, 0x12) + 0x100);
    if (func_8012CBCC((s32) arg0) != 0) {
        AF(arg0, s32, 0x18) = 0xFFE80000;
        AF(arg0, s32, 0x14) = 0xFFC80000;
        AF(arg0, s32, 0x44) = 0;
        AF(arg0, s32, 0x48) = 0x80000;
        AF(arg0, s32, 0x4C) = 0;
        func_80143B6C((s32) arg0, 0);
        AF(arg0, s16, 0xFC) = 0x40;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc02_000_80187060(u8 *arg0, s32 arg1) {
    u16 temp_v0;
    void *temp_v1;
    void *temp_v1_2;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x12) = (u16) (AF(temp_v1, u16, 0x12) + 0x100);
    temp_v1_2 = AF(arg0, void *, 0x20);
    AF(temp_v1_2, u16, 0x14) = (u16) (AF(temp_v1_2, u16, 0x14) + 0x20);
    temp_v0 = AF(arg0, u16, 0xFC) - 1;
    AF(arg0, u16, 0xFC) = temp_v0;
    if ((temp_v0 << 0x10) == 0) {
        func_8012C218((s32) arg0, arg1);
        return;
    }
    func_8012AD80((s32) arg0, arg1);
}

void func_sc02_000_801870DC(u8 *arg0) {
    D_sc02_000_8018F3D4[AF(arg0, u16, 2)]();
}

void func_sc02_000_80187118(u8 *arg0) {
    s32 *var_a1;
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    var_a1 = &D_sc02_000_801E14AC;
    if (AF(arg0, s16, 0x70) == 0) {
        var_a1 = &D_sc02_000_801E10B4;
    }
    func_8001C214(temp_v0, (s32) var_a1);
    func_8001D0E8(AF(arg0, s32, 0x20), 0x140, 0xF0);
    func_8012A828((s32) arg0, (s32) &D_sc02_000_8018AF28);
    func_8012B200((s32) arg0);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc02_000_801871B8(u8 *arg0) {
    if ((AF(AF(arg0, void *, 0x64), s16, 0xE) - 0x80) < AF(arg0, s16, 0xE)) {
        AF(arg0, s32, 0x18) = 0xFFDBC000;
        AF(arg0, s32, 0x14) = 0xFFE00000;
        AF(arg0, s32, 0x44) = 0;
        AF(arg0, s32, 0x48) = 0x80000;
        AF(arg0, s32, 0x4C) = 0;
        AF(arg0, s16, 0x12) = (s16) (0xF - (D_800B99DC[0] & 0x1F));
        func_sc02_000_80187480();
        func_8002D4C8(0x4DA, 0);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc02_000_80187254(u8 *arg0) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x12) = (u16) (AF(temp_v1, u16, 0x12) + 0x100);
    if (func_8012CBCC((s32) arg0) != 0) {
        AF(arg0, s32, 0x18) = 0xFFE80000;
        AF(arg0, s32, 0x14) = 0xFFC80000;
        AF(arg0, s32, 0x44) = 0;
        AF(arg0, s32, 0x48) = 0x80000;
        AF(arg0, s32, 0x4C) = 0;
        func_80143B6C((s32) arg0, 0);
        AF(arg0, s16, 0xFC) = 0x40;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc02_000_801872D8(u8 *arg0, s32 arg1) {
    u16 temp_v0;
    void *temp_v1;
    void *temp_v1_2;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x12) = (u16) (AF(temp_v1, u16, 0x12) + 0x100);
    temp_v1_2 = AF(arg0, void *, 0x20);
    AF(temp_v1_2, u16, 0x14) = (u16) (AF(temp_v1_2, u16, 0x14) + 0x20);
    temp_v0 = AF(arg0, u16, 0xFC) - 1;
    AF(arg0, u16, 0xFC) = temp_v0;
    if ((temp_v0 << 0x10) == 0) {
        func_8012C218((s32) arg0, arg1);
        return;
    }
    func_8012AD80((s32) arg0, arg1);
}

void func_sc02_000_80187354(u8 *o) {
    struct_8_4 b;
    struct_8_4 p;
    s32 i;

    b.field_0 = AF(o, u16, 6) - 0xE1;
    b.field_2 = AF(o, u16, 0xA) + 0x40;
    b.field_4 = AF(o, u16, 0xE) - 0x75;
    for (i = 0; i < 16; i++) {
        p.field_2 = b.field_2 + D_sc02_000_8018F424[rand() % 3];
        p.field_4 = b.field_4 + D_sc02_000_8018F430[rand() % 5];
        p.field_0 = b.field_0 + i * 32;
        func_sc02_000_80188C0C(&p, D_sc02_000_8018F3E4[i * 2]);
    }
}

void func_sc02_000_80187480(u8 *o) {
    struct_14_7 d;
    s32 r;
    s32 step;
    s32 i;

    r = D_800B99DC[0];
    step = D_800B99D8;
    for (i = 0; i < 8; i++) {
        d.field_0 = AF(o, u16, 6) + (r & 0x1F) - 0x10;
        d.field_2 = AF(o, u16, 0xA) + ((r & 0x1F0) >> 4) - 0x10;
        d.field_4 = AF(o, u16, 0xE);
        d.field_6 = 0x48;
        if (i >= 4) {
            d.field_8 = 0;
        } else if (i >= 2) {
            d.field_8 = 1;
        } else {
            d.field_8 = 2;
        }
        d.field_A = r >> 16;
        func_8012C51C(&d, o);
        r += ++step;
    }
}

void func_sc02_000_80187558(u8 *o) {
    struct { s16 field_0, field_2, field_4, field_6, field_8; u16 field_A; s16 field_C, field_E; s32 field_10; } d;
    s32 i;
    s32 off;
    s32 c;
    s32 x;

    c = D_800B99D8;
    i = 0;
    d.field_4 = AF(o, s16, 0xE);
    off = 0;
    for (; i < 8; i++) {
        x = AF(o, s16, 0x6);
        d.field_0 = (i & 1) ? x + 0x20 : x - 0x20;
        d.field_2 = AF(o, s16, 0xA) - off;
        d.field_6 = 0x4D;
        d.field_8 = rand() % 3;
        d.field_A = c++;
        off += 0xC;
        func_8012C51C(&d, o);
    }
}

/* PORT NOTE: reads a variable never set, as the original (undefined under cl) */
void func_sc02_000_8018762C(u8 *o, struct_8_4 *p) {
    struct_14_7 d;
    s32 i;
    u16 n;
    s32 x;

    n = D_800B99D8;
    d.field_4 = p->field_4;
    for (i = 0; i < 2; i++) {
        x = p->field_0;
        d.field_0 = (i & 1) ? x + 12 : x - 12;
        d.field_2 = p->field_2 - i * 24;
        d.field_6 = 0x4D;
        if (i >= 2) {
            d.field_8 = 0;
        }
        d.field_A = n;
        n++;
        d.field_8 |= 0x100;
        func_8012C51C(&d, o);
    }
}

void func_sc02_000_801876FC(u8 *arg0) {
    D_sc02_000_8018F460[AF(arg0, u16, 2)]();
}

extern u8 D_sc02_000_801E0CBC;
extern u8 D_sc02_000_801E087C;
extern u8 D_sc02_000_801E0B5C;

void func_sc02_000_80187738(u8 *o) {
    s32 r;
    u8 *p;
    s32 k;
    s32 n;
    s32 y;

    r = func_8012C1B8();
    AF(o, s32, 0x20) = r;
    if (r == 0) {
        func_8012CAE4(o);
        return;
    }
    p = &D_sc02_000_801E0CBC;
    if (AF(o, s16, 0x70) == 0) {
        p = &D_sc02_000_801E087C;
    } else if (AF(o, s16, 0x70) == 1) {
        p = &D_sc02_000_801E0B5C;
    }
    func_8001C214(AF(o, s32, 0x20), p);
    func_8001D0E8(AF(o, s32, 0x20), 0x140, 0xF0);
    func_8012A828(o, &D_sc02_000_8018AF28);
    func_8012B200(o);
    AF(o, s32, 0x18) = 0xFFDBC000;
    AF(o, s32, 0x14) = 0xFFF40000;
    k = D_800B99DC[0];
    n = AF(o, u16, 2);
    y = AF(o, s16, 0x72);
    AF(o, s32, 0x44) = 0;
    AF(o, s32, 0x48) = 0x80000;
    AF(o, s32, 0x4C) = 0;
    n++;
    k &= 0x1F;
    AF(o, s16, 0x12) = 0xF - k;
    AF(o, s32, 0x48) = y + 0x80000;
    AF(o, u16, 2) = n;
}

void func_sc02_000_80187834(u8 *arg0) {
    void *temp_v1;
    void *temp_v1_2;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x12) = (u16) (AF(temp_v1, u16, 0x12) + 0x100);
    temp_v1_2 = AF(arg0, void *, 0x20);
    AF(temp_v1_2, u16, 0x10) = (u16) (AF(temp_v1_2, u16, 0x10) + 0x40);
    if (func_8012CBCC((s32) arg0) != 0) {
        AF(arg0, s32, 0x18) = 0xFFE80000;
        AF(arg0, s32, 0x14) = 0xFFC80000;
        AF(arg0, s32, 0x44) = 0;
        AF(arg0, s32, 0x48) = 0x80000;
        AF(arg0, s32, 0x4C) = 0;
        func_80143B6C((s32) arg0, 0);
        AF(arg0, s16, 0xFC) = 0x40;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc02_000_801878D0(u8 *arg0, s32 arg1) {
    u16 temp_v0;
    void *temp_v1;
    void *temp_v1_2;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x12) = (u16) (AF(temp_v1, u16, 0x12) + 0x100);
    temp_v1_2 = AF(arg0, void *, 0x20);
    AF(temp_v1_2, u16, 0x14) = (u16) (AF(temp_v1_2, u16, 0x14) + 0x20);
    temp_v0 = AF(arg0, u16, 0xFC) - 1;
    AF(arg0, u16, 0xFC) = temp_v0;
    if ((temp_v0 << 0x10) == 0) {
        func_8012C218((s32) arg0, arg1);
        return;
    }
    func_8012AD80((s32) arg0, arg1);
}

void func_sc02_000_8018794C(u8 *arg0) {
    D_sc02_000_8018F46C[AF(arg0, u16, 2)]();
}

void func_sc02_000_80187988(u8 *o) {
    s32 t;
    u8 *a;
    s32 lo;
    s32 hi;
    s32 s;
    s32 v;
    s32 r;

    t = func_8012C1B8();
    AF(o, s32, 0x20) = t;
    if (t == 0) {
        func_8012CAE4(o);
        return;
    }
    lo = AF(o, u16, 0x70) & 0xFF;
    hi = AF(o, u16, 0x70) & 0xFF00;
    a = &D_sc02_000_801E1B94;
    if (lo == 0) {
        a = &D_sc02_000_801E1714;
    } else if (lo == 1) {
        a = &D_sc02_000_801E1944;
    }
    func_8001C214(AF(o, s32, 0x20), a);
    func_8001D0E8(AF(o, s32, 0x20), 0x140, 0xF0);
    func_8012A828(o, &D_sc02_000_8018AF28);
    func_8012B21C(o);
    r = rand();
    if (hi != 0) {
        s = r << 4;
    } else {
        s = r << 5;
    }
    v = (rand() & 1) ? s : -s;
    AF(o, s32, 0xE0) = AF(o, s32, 0x10) = v;
    v = 0xFFE70000 - (rand() << 4);
    AF(o, s32, 0xE8) = AF(o, s32, 0x18) = v;
    AF(o, s32, 0x1C) = 0x60;
    if (hi != 0) {
        AF(o, s32, 0xE4) = AF(o, s32, 0x14) = 0xFFDD0000;
        AF(o, s32, 0x48) = AF(o, s32, 0x48) * (rand() % 3 + 3);
        AF(o, s16, 0x34) = 3;
    } else {
        v = 0xFFDA0000 - ((rand() & 0xF) << 16);
        AF(o, s32, 0xE4) = AF(o, s32, 0x14) = v;
        AF(o, s16, 0x34) = 0;
        AF(o, s32, 0x48) = AF(o, s32, 0x48) * 6;
    }
    AF(o, s32, 0xDC) = AF(o, s32, 0x48);
    AF(o, u16, 2)++;
}

void func_sc02_000_80187B40(u8 *o) {
    struct_8_4 v;

    AF(AF(o, u8 *, 0x20), u16, 0x10) += 0x40;
    AF(AF(o, u8 *, 0x20), u16, 0x12) += 0x100;
    AF(AF(o, u8 *, 0x20), u16, 0x14) += 0x58;
    if (func_sc02_000_80187F30(o, 1) != 0) {
        AF(o, s32, 0x4C) = 0;
        AF(o, s32, 0x44) = 0;
        AF(o, s32, 0x48) = AF(o, s32, 0xDC);
        switch (AF(o, u16, 0x34)) {
        case 0:
            v.field_0 = AF(o, u16, 0x6);
            v.field_2 = AF(o, u16, 0xA);
            v.field_4 = AF(o, u16, 0xE);
            func_80143BDC(&v);
            AF(o, s32, 0x10) = AF(o, s32, 0xE0) * 2 / 3;
            AF(o, s32, 0x14) = AF(o, s32, 0xE4) * 2 / 3;
            AF(o, s32, 0x18) = AF(o, s32, 0xE8) * 2 / 3;
            AF(o, s32, 0x1C) += 0x40;
            AF(o, s16, 0x34)++;
            break;
        case 1:
            v.field_0 = AF(o, u16, 0x6);
            v.field_2 = AF(o, u16, 0xA);
            v.field_4 = AF(o, u16, 0xE);
            func_80143BDC(&v);
            AF(o, s32, 0x10) = AF(o, s32, 0xE0) / 3;
            AF(o, s32, 0x14) = AF(o, s32, 0xE4) / 3;
            AF(o, s32, 0x18) = AF(o, s32, 0xE8) / 3;
            AF(o, s16, 0x34)++;
            break;
        case 2:
            AF(o, s32, 0x1C) = 0;
            break;
        case 3:
            AF(o, s32, 0x1C) = 0x100;
            AF(o, s16, 0x34)++;
        case 4:
            v.field_0 = AF(o, u16, 0x6);
            v.field_2 = AF(o, u16, 0xA);
            v.field_4 = AF(o, u16, 0xE);
            func_80143BDC(&v);
            AF(o, s32, 0x10) = AF(o, s32, 0xE0);
            AF(o, s32, 0x14) = AF(o, s32, 0xE4);
            AF(o, s32, 0x18) = AF(o, s32, 0xE8);
            break;
        }
    }
    if (func_8012BEE8(o) == 1 || AF(o, s16, 0xE) < D_80126B66 - 0x200) {
        func_8012C218(o);
    }
}

void func_sc02_000_80187DB8(u8 *o) {
    struct_8_4 v;

    AF(AF(o, u8 *, 0x20), u16, 0x12) += 0x100;
    AF(AF(o, u8 *, 0x20), u16, 0x10) += 0x40;
    AF(AF(o, u8 *, 0x20), u16, 0x14) += 0x58;
    if (func_sc02_000_80187F30(o, 1) != 0) {
        v.field_0 = AF(o, s16, 6);
        v.field_2 = AF(o, s16, 0xA);
        v.field_4 = AF(o, s16, 0xE);
        func_80143BDC(&v);
        AF(o, s32, 0x4C) = 0;
        AF(o, s32, 0x44) = 0;
        AF(o, s32, 0x10) = AF(o, s32, 0xE0);
        AF(o, s32, 0x14) = AF(o, s32, 0xE4);
        AF(o, s32, 0x18) = AF(o, s32, 0xE8);
        AF(o, s32, 0x48) = AF(o, s32, 0xDC);
    }
    if (func_8012BEE8(o) == 1 || D_80126B66 - 0x200 < AF(o, s16, 6)) {
        func_8012C218(o);
    }
}

void func_sc02_000_80187EB4(u8 *arg0, s32 arg1) {
    u16 temp_v0;
    void *temp_v1;
    void *temp_v1_2;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x12) = (u16) (AF(temp_v1, u16, 0x12) + 0x100);
    temp_v1_2 = AF(arg0, void *, 0x20);
    AF(temp_v1_2, u16, 0x14) = (u16) (AF(temp_v1_2, u16, 0x14) + 0x20);
    temp_v0 = AF(arg0, u16, 0xFC) - 1;
    AF(arg0, u16, 0xFC) = temp_v0;
    if ((temp_v0 << 0x10) == 0) {
        func_8012C218((s32) arg0, arg1);
        return;
    }
    func_8012AD80((s32) arg0, arg1);
}

s32 func_sc02_000_80187F30(u8 *arg0, s32 arg1) {
    struct_8_5 a;
    struct_8_5 b;
    s32 r;

    a.field_0 = AF(arg0, u16, 0x3A);
    a.field_2 = AF(arg0, u16, 0x3E) + 0x10;
    a.field_4 = AF(arg0, u16, 0x42);
    func_8012AD80(arg0);
    b.field_0 = AF(arg0, u16, 6);
    b.field_2 = AF(arg0, u16, 0xA) + 0x10;
    b.field_4 = AF(arg0, u16, 0xE);
    r = func_8012CEB0(&a, &b, arg1);
    AF(arg0, u16, 6) = b.field_0;
    AF(arg0, u16, 0xA) = b.field_2 - 0x10;
    AF(arg0, u16, 0xE) = b.field_4;
    if (r & 0x6000) {
        AF(arg0, s32, 0x14) = 0;
    }
    return r;
}

void func_sc02_000_80187FEC(u8 *arg0) {
    D_sc02_000_8018F540[AF(arg0, u16, 2)]();
}

void func_sc02_000_80188028(u8 *arg0) {
    s32 temp_v0;

    if ((AF(arg0, s32, 0x20) = temp_v0 = func_8012C1B8()) == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    if (AF(arg0, s16, 0x70) == 0) {
        func_8001C214(temp_v0, (s32) &D_sc02_000_80192D94);
    } else {
        func_8001C214(temp_v0, (s32) &D_sc02_000_80194294);
        AF(arg0, s16, 0xFC) = 1;
    }
    func_8012A828((s32) arg0, (s32) &D_sc02_000_801A7164);
    AF(AF(arg0, s32, 0x20), s16, 0x12) = -0x800;
    AF(arg0, s32, 0xDC) = 0x30;
    AF(arg0, s32, 0xE0) = (s32) ((D_800B99DC[0] & 0xF) + 0x20);
    AF(arg0, u16, 0xE) = (u16) (AF(arg0, u16, 0xE) + 0xC0);
    
    AF(arg0, s32, 0xE8) = (s32) ((D_800B99DC[0] & 0x1F) + 0xE0);
    AF(arg0, s32, 0xE4) = 0;
    func_8002D4C8(0x6A9, 0);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    func_80143970((s32) arg0);
    func_8012B23C((s32) arg0);
}

void func_sc02_000_80188134(u8 *o) {
    s32 t;

    t = AF(o, s32, 0xDC) - 1;
    AF(o, s32, 0xDC) = t;
    if (t == 0 || AF(AF(o, u8 *, 0x64), s16, 0xE) < AF(o, s16, 0xE) + AF(o, s32, 0xE8)) {
        if (AF(o, s16, 6) < 0) {
            AF(AF(o, u8 *, 0x20), s16, 0x12) = -(u8)D_800B99DC[0];
        } else {
            AF(AF(o, u8 *, 0x20), s16, 0x12) = (u8)D_800B99DC[0];
        }
        func_8012B2CC(o);
        func_8012B14C(o, &D_sc02_000_8018F48C);
        if (AF(o, s16, 0x70) == 0) {
            func_8012A828(o, &D_sc02_000_801A7604);
        } else {
            func_8012A828(o, &D_sc02_000_801A766C);
        }
        AF(o, s32, 0xE4) = 4;
        AF(o, u16, 2)++;
    }
    if (AF(o, s32, 0xE4) == 0 && AF(AF(o, u8 *, 0x64), s16, 0xE) < AF(o, s16, 0xE) + 0x220) {
        func_80142414(o, -0x96);
        AF(o, s32, 0xE4) = 1;
    }
}

void func_sc02_000_8018825C(u8 *o) {
    u8 unused[16];
    u8 *c;
    s32 r;

    if (--AF(o, s32, 0xE0) == 0) {
        AF(o, s32, 0x4C) = 0x4000;
    }
    if (AF(o, s16, 0xFC) != 0) {
        c = (u8 *)func_8012C588(0x3F, o);
        if (c != 0) {
            AF(o, s16, 0xFC) = 0;
            AF(c, s16, 0xFC) = 0;
            AF(c, s16, 0xE) -= 0x300;
            AF(c, s32, 0xDC) += 0x1E;
            AF(c, s32, 0x64) = AF(o, s32, 0x64);
            func_8012B030(c);
        }
    }
    if (--AF(o, s32, 0xE4) == 0) {
        func_80143B6C(o, 0);
        AF(o, s32, 0xE4) = 4;
    }
    if (AF(AF(o, u8 *, 0x64), s16, 0xE) - 0x80 < AF(o, s16, 0xE)) {
        AF(o, s16, 2) = 5;
        func_8012B23C(o);
        func_8012A828(o, &D_sc02_000_8018F498);
        AF(o, s32, 0x18) = 0xFFE30000;
        AF(o, s32, 0x14) = 0xFFE50000;
        AF(o, s32, 0xDC) = 1;
        func_8002D4C8(0x6AA, 0);
        return;
    }
    func_8012CBCC(o);
    r = func_sc02_000_801884FC(o);
    if (r == 1) {
        AF(o, s32, 0x14) = 0xFFE00000;
        AF(o, s32, 0x44) = 0;
        AF(o, s32, 0x48) = 0x40000;
        AF(o, s32, 0x4C) = 0;
        AF(o, u16, 2)++;
        func_8012A828(o, &D_sc02_000_8018F47C);
    } else if (r == 2) {
        AF(o, s32, 0x14) = 0xFFE00000;
        AF(o, s32, 0x44) = 0;
        AF(o, s32, 0x48) = 0x40000;
        AF(o, s32, 0x4C) = 0;
        func_8012A828(o, &D_sc02_000_801A68A4);
        AF(o, s16, 2) = 5;
        AF(o, s32, 0xDC) = 0x20;
    }
}

void func_sc02_000_80188414(u8 *o) {
    if (func_8012CBCC(o) != 0) {
        if (AF(o, s16, 0x70) == 0) {
            func_8012A828(o, &D_sc02_000_801A7604);
        } else {
            func_8012A828(o, &D_sc02_000_801A766C);
        }
        AF(o, s16, 2)--;
    }
}

void func_sc02_000_80188484(u8 *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0xDC) - 1;
    AF(arg0, s32, 0xDC) = temp_v0;
    if (temp_v0 == 0) {
        func_8012C218((s32) arg0, arg1);
    }
}

void func_sc02_000_801884B8(s32 arg0) {
    if (func_8012CBCC(arg0) != 0) {
        AF(arg0, s32, 0x4C) = 0;
        AF(arg0, s32, 0x48) = 0;
        AF(arg0, s32, 0x44) = 0;
        AF(arg0, s32, 0x14) = 0;
        AF(arg0, s16, 2) = 4;
    }
}

s32 func_sc02_000_801884FC(u8 *o) {
    s32 z = AF(o, s16, 0xE);

    if ((u32)(z - 0x334) < 0x163) {
        return 1;
    }
    if ((u32)(z - 0xF9) < 0xB5) {
        return 1;
    }
    if (func_sc02_000_80188680(o, -5, 0xA61) != 0) return 2;
    if (func_sc02_000_80188680(o, 0x98, 0x8FF) != 0) return 2;
    if (func_sc02_000_80188680(o, -0x12, 0x2EB) != 0) return 2;
    if (func_sc02_000_80188680(o, 0xA5, 0x301) != 0) return 2;
    if (func_sc02_000_80188680(o, 0x6F, 0xCD) != 0) return 2;
    if (func_sc02_000_80188680(o, -0x2E, -0x17A) != 0) return 2;
    if (func_sc02_000_80188680(o, 0x69, -0x10CB) != 0) return 2;
    if (func_sc02_000_80188680(o, -9, -0x1215) != 0) return 2;
    if (func_sc02_000_80188680(o, 0x77, -0x135A) != 0) return 2;
    if (func_sc02_000_80188680(o, 0x74, -0x15FA) != 0) return 2;
    if (func_sc02_000_80188680(o, -0x4B, -0x1553) != 0) return 2;
    if (func_sc02_000_80188680(o, (s16)D_80126B5E, D_80126B66) == 0) {
        return (u32)(z + 0xB54) < 0x10;
    }
    return 2;
}

s32 func_sc02_000_80188680(u8 *o, s32 x0, s32 y0) {
    s16 x = x0;
    s16 y = y0;
    s16 px = AF(o, s16, 6);
    s16 pz = AF(o, s16, 0xE);

    if (x - 0x30 < px) {
        if (px < x + 0x30) {
            if (y - 0x30 < pz) {
                if (pz < y + 0x30) {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void func_sc02_000_801886DC(u8 *arg0) {
    D_sc02_000_8018F558[AF(arg0, u16, 2)]();
}

void func_sc02_000_80188718(u8 *arg0) {
    D_sc02_000_8018F590[AF(arg0, u16, 2)]();
}

void func_sc02_000_80188754(u8 *arg0) {
    D_sc02_000_8018F598[AF(arg0, u16, 2)]();
}

void func_sc02_000_80188790(u8 *o) {
    u8 *d;
    u8 *p;
    s32 f;
    s32 a;
    s16 r;

    a = rand();
    d = &D_80126B58;
    f = AF(o, s32, 0x1C);
    if (a & 1) {
        p = (u8 *)func_8012913C(0xF);
    } else {
        p = (u8 *)func_8012913C(0xE);
    }
    if (p != 0) {
        r = rand() % 256;
        AF(p, s16, 0xE) = AF(d, u16, 0xE) + rand() % 640 - 0x290;
        if (f & 1) {
            AF(p, s16, 6) = r + 0x7A;
            AF(p, s16, 0xA) = AF(d, u16, 0xA) - 0xE0;
        } else {
            AF(p, s16, 6) = r - 0xF8;
            AF(p, s16, 0xA) = AF(d, u16, 0xA) - 0xC0;
        }
        AF(p, s16, 0x36) = AF(d, u16, 0xA) - 0x50;
    }
    if (func_8012BEE8(o) == 1) {
        func_8012C218(o);
    }
}

void func_sc02_000_801888CC(u8 *arg0) {
    AF(arg0, s32, 0x1C) = 0x10;
    func_8012AD44((s32) arg0, 1);
}

static inline void func_sc02_000_801888F4_inline(struct_20_4 *mp, s32 a) {
    *mp = D_800AE620;
    RotMatrixY(a, mp);
}

void func_sc02_000_801888F4(u8 *o) {
    struct_C_4 v;
    struct_20_4 m;
    u8 *p;

    p = AF(o, u8 *, 0x20);
    func_8001CC3C(p, (rand() & 3) * 12 + &D_sc02_000_8018F560, 0x3F0, 0x100);
    AF(p, u8, 0x27) = 0x9D;
    AF(p, s16, 0x18) = AF(p, s16, 0x1A) = 0x1000;
    AF(o, s32, 0x10) = 0;
    AF(o, s32, 0x14) = 0x20000;
    AF(o, s32, 0x18) = 0;
    func_sc02_000_801888F4_inline(&m, rand() & 0xFFF);
    v.field_0 = 0x4000;
    v.field_8 = 0;
    v.field_4 = 0;
    ApplyMatrixLV(&m, &v, &v);
    AF(o, s32, 0x2C) = v.field_0;
    AF(o, s32, 0x30) = v.field_8;
    AF(o, s16, 0x34) = 0;
    AF(o, u16, 2)++;
}

void func_sc02_000_80188A18(u8 *o) {
    func_8012931C();
    AF(o, s32, 0x10) += AF(o, s32, 0x2C);
    AF(o, s32, 0x18) += AF(o, s32, 0x30);
    AF(o, u16, 0x34)++;
    AF(o, s32, 0x8) += 0x10000;
    if (AF(o, s16, 0xA) > AF(o, s16, 0x36)) {
        func_801292C8((s32)o);
    } else if (AF(o, s16, 0x34) == 8) {
        AF(o, s32, 0x2C) = -AF(o, s32, 0x2C);
        AF(o, s32, 0x30) = -AF(o, s32, 0x30);
        AF(o, s32, 0x14) = -AF(o, s32, 0x14);
    } else if (AF(o, s16, 0x34) == 0x10) {
        AF(o, s16, 0x34) = 0;
        AF(o, s32, 0x14) = -AF(o, s32, 0x14);
    }
}

void func_sc02_000_80188AEC(u8 *arg0) {
    s32 temp_s0;

    temp_s0 = AF(arg0, s32, 0x20);
    func_8001CB6C(temp_s0, (s32) (((rand() & 3) * 0xC) + &D_sc02_000_8018F560), 0x3F0, 0x100);
    AF(temp_s0, u8, 0x27) = 0x9D;
    AF(temp_s0, s16, 0x1A) = 0x1000;
    AF(temp_s0, s16, 0x18) = 0x1000;
    AF(arg0, s32, 0x14) = (s32) ((rand() + 0xC000) * 2);
    AF(arg0, s32, 0x10) = (s32) (((rand() & 0x3FFF) * 2) - 0x4000);
    AF(arg0, s32, 0x18) = (s32) (((rand() & 0x3FFF) * 2) - 0x4000);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc02_000_80188BAC(u8 *arg0) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x12) = (u16) (AF(temp_v1, u16, 0x12) + 0x200);
    func_8012931C();
    if (AF(arg0, s16, 0xA) > AF(arg0, s16, 0x36)) {
        func_801292C8((s32) arg0);
    }
}

s32 func_sc02_000_80188C0C(s32 pos, s32 h0) {
    u8 *o;
    u8 *a;
    s16 h = h0;

    o = (u8 *)func_801290DC(0x10, pos);
    if (o == 0) {
        return 0;
    }
    a = AF(o, u8 *, 0x20);
    AF(a, u8 *, 0x20) = &D_800D387C;
    AF(a, u8, 0x27) = 0x9C;
    AF(a, s16, 0x1A) = h;
    AF(a, s16, 0x18) = h;
    AF(a, s32, 4) |= 0x50000000;
    func_80128EA8(a, o + 0x24, &D_800D3888);
    return (s32)o;
}

void func_sc02_000_80188C9C(u8 *arg0) {
    D_sc02_000_8018F5A0[AF(arg0, u16, 2)]();
}

void func_sc02_000_80188CD8(u8 *arg0) {
    if (func_80128ED8(AF(arg0, s32, 0x20), (s32) (arg0 + 0x24)) != 0) {
        func_801292C8((s32) arg0);
    }
}

void func_sc02_000_80188D18(u8 *arg0) {
    D_sc02_000_8018F5BC[AF(arg0, u16, 2)]();
}

void func_sc02_000_80188D54(u8 *arg0) {
    s32 temp_v0;

    if ((AF(arg0, s32, 0x20) = temp_v0 = func_8012C1B8()) == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc02_000_801AFAC8);
    func_8001D0E8(temp_v0, 0x800, 0x800);
    func_8012A828((s32) arg0, (s32) &D_sc02_000_8018F5A4);
    AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x40);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc02_000_80188DF0(void) {
}

void func_sc02_000_80188DF8(s32 arg0) {
    func_sc02_000_8018A3C8((s32) &D_sc02_000_801E8830);
    func_800233CC((s32) &D_sc02_000_8018F5C4, 0x20);
    func_800233CC((s32) (&D_sc02_000_8018F5C4 + 0x40), 0x20);
    func_800233CC((s32) (&D_sc02_000_8018F5C4 + 0x80), 0x20);
    func_sc02_000_8018A550((s32) &D_sc02_000_801E8830, (s32) &D_sc02_000_8018F684);
    func_8012AD50(arg0);
}

void func_sc02_000_80188E80(void) {
    (*(s16 *)&D_sc02_000_801E8830) = -(s16) D_800B9AB8;
    D_sc02_000_801E8832 = 0x10 - (*(u16 *)&D_800B9ABA);
    func_sc02_000_8018A2A0();
}

void func_sc02_000_80188ECC(u8 *arg0) {
    D_sc02_000_8018F6C4[AF(arg0, u16, 2)]();
}

s32 func_sc02_000_80188F08(void) {
    return func_sc02_000_8018A3FC((s32) &D_sc02_000_801E8830);
}

void func_sc02_000_80188F30(s32 arg0, s32 arg1) {
    AF(arg0, s16, 2) = 1;
    AF(arg0, s32, 0x1C) = 1;
    AF(arg0, s16, 0xA8) = 0x7F;
    AF(arg0, s16, 0x84) = 1;
    AF(arg0, s32, 0xA4) = 0;
    AF(arg0, u16, 0x72) = (u16) (AF(arg0, u16, 0x72) | 0x1000);
}

void func_sc02_000_80188F60(s32 arg0, s32 arg1) {
    u8 *dst = (u8 *)arg0 + 0x103;
    u8 *tbl = &D_sc02_000_8018F6CC;
    u8 *p = &D_80126B58;
    s32 i;
    s32 t;

    if (func_8012BEE8(arg0, arg1) != 0) {
        AF(arg0, s32, 0x1C) = (rand() & 1) + 1;
        for (i = 0; i < 24; i++) {
            if (*tbl != 0) {
                *dst = rand() % *tbl;
            } else {
                *dst = 0;
            }
            dst--;
            tbl++;
        }
    }
    if (AF(arg0, s16, 0x70) != 0) {
        D_800A5E98.field_0 = -0x12;
        D_800A5E98.field_4 = (rand() % 31) + 10;
        D_800A5E98.field_C = AF(arg0, u16, 0xA8);
        D_800A5E98.field_D = (AF(arg0, s16, 0xA8) * 5) / 127;
        D_800A5E98.field_E = (AF(arg0, s16, 0xA8) * 51) / 127;
        func_80028620(1, &D_800A5E98);
    }
    t = (s16)AF(arg0, u16, 0xA8) >> 1;
    AF(arg0, u16, 0xA8) = t;
    if (D_801270C8 != 1) {
        AF(arg0, u16, 0xA8) = t | 0x40;
        if (AF(arg0, s16, 0x70) == 0) {
            goto end;
        }
        if (--AF(arg0, s16, 0x84) == 0) {
            i = (func_8012B8A4(arg0) - 0x400) & 0xFFF;
            if (i >= 0x800) {
                i = 0xFFF - i;
            }
            i >>= 5;
            i += 0x10;
            if (AF(p, s16, 6) >= 0x381) {
                i += ((AF(p, s16, 6) - 0x380) * 80) / 120;
            }
            if (i >= 0x80) {
                i = 0x7F;
            }
            AF(arg0, u16, 0x84) = 0xF;
            if (func_800CF8B4() != 0) {
                func_8002D4C8(0x4CF, (u16)(i | 0x1000));
            } else {
                func_8002D4C8(4, 0x4CF);
            }
            AF(arg0, s32, 0xA4) = 1;
        }
    } else {
        if (AF(arg0, s16, 0x70) != 0 && AF(arg0, s32, 0xA4) != 0) {
            func_8002D4C8(4, 0x4CF);
            AF(arg0, u16, 0x84) = 1;
            AF(arg0, s32, 0xA4) = 0;
        }
        if (D_801270D4 == 1) {
            func_8012C218(arg0);
            D_800A5E98.field_4 = 0x18;
            D_800A5E98.field_C = 0x7F;
            D_800A5E98.field_D = 0x66;
            D_800A5E98.field_E = 0x7F;
            func_80028620(1, &D_800A5E98);
            return;
        }
    }
    if (AF(arg0, s16, 0x70) != 0 && AF(arg0, s32, 0xA4) != 0 && D_800B9A0E != 0) {
        func_8002D4C8(4, 0x4CF);
        AF(arg0, s32, 0xA4) = 0;
    }
end:
    func_sc02_000_80189340(arg0);
}

void func_sc02_000_80189304(u8 *arg0) {
    D_sc02_000_8018F714[AF(arg0, u16, 2)]();
}

void func_sc02_000_80189340(u8 *arg0) {
    u8 *pp[28];
    s16 sv[4];
    s16 sxy[4];
    s32 p;
    s32 flag;
    u8 *prim;
    u32 *ot;
    u8 mask;
    s32 otz;
    s32 i;
    s32 j;
    s32 d;
    u8 *b;
    u8 *q;

    SetRotMatrix(&D_800AF648);
    SetTransMatrix(&D_800AF648);
    mask = 1;
    b = arg0 + 0x100;
    sv[0] = D_sc02_000_8018F6E4[0 * 3] + arg0[0x103];
    sv[1] = D_sc02_000_8018F6E4[0 * 3 + 1] + arg0[0x102];
    sv[2] = D_sc02_000_8018F6E4[0 * 3 + 2] + arg0[0x101];
    otz = RotTransPers(sv, &sxy[2], &p, &flag);
    if (otz <= 0) return;
    if (flag < 0) return;
    ot = D_800A651C[D_800B9A02].field_0 + otz;
    prim = func_80010A08(0x3FC);
    if (prim == 0) return;
    SetDrawMode(prim, 0, 0, GetTPage(0, 1, 0, 0) & 0xFFFF, 0);
    pp[0] = prim + 0xC;
    for (i = 1; i < 28; i++) {
        pp[i] = pp[0] + i * 0x24;
    }
    q = pp[0];
    d = ((D_80126950 + 500) * 8) / (otz * 4);
    for (i = 1; i < 8; i++) {
        sv[0] = D_sc02_000_8018F6E4[i * 3] + *b--;
        sv[1] = D_sc02_000_8018F6E4[i * 3 + 1] + *b--;
        sv[2] = D_sc02_000_8018F6E4[i * 3 + 2] + *b--;
        sxy[0] = sxy[2];
        sxy[1] = sxy[3];
        RotTransPers(sv, &sxy[2], &p, &flag);
        if (AF(arg0, s16, 0xA8) & mask) {
            p = AF(arg0, s32, 0x1C) << 6;
            for (j = 0; j < 4; j++) {
                AF(q, s32, 4) = p;
                AF(q, s32, 0x14) = p;
                AF(q, u8, 3) = 8;
                AF(q, s32, 0xC) = 0;
                AF(q, s32, 0x1C) = 0;
                AF(q, u8, 7) = 0x3A;
                AF(q, s16, 8) = sxy[0];
                AF(q, s16, 0x10) = sxy[0];
                AF(q, s16, 0x18) = sxy[2];
                AF(q, s16, 0x20) = sxy[2];
                AF(q, s16, 0xA) = sxy[1];
                AF(q, s16, 0x12) = sxy[1];
                AF(q, s16, 0x1A) = sxy[3];
                AF(q, s16, 0x22) = sxy[3];
                switch (j) {
                case 0:
                    AF(q, s16, 0x10) += d;
                    AF(q, s16, 0x20) += d;
                    break;
                case 1:
                    AF(q, s16, 0x10) -= d;
                    AF(q, s16, 0x20) -= d;
                    break;
                case 2:
                    AF(q, s16, 0x12) += d;
                    AF(q, s16, 0x22) += d;
                    break;
                case 3:
                    AF(q, s16, 0x12) -= d;
                    AF(q, s16, 0x22) -= d;
                    break;
                }
                AddPrim(ot, q);
                q += 0x24;
            }
        }
        mask <<= 1;
    }
    AddPrim(ot, prim);
}

void func_sc02_000_80189750(u8 *o) {
    u8 *t;

    AF(o, u8 *, 0x20) = t = (u8 *) func_8012C1B8();
    if (t == 0) {
        func_8012CAE4(o);
        return;
    }
    if (func_sc02_000_80189888() != 0) {
        func_8012CAE4(o);
        return;
    }
    func_8001C214(t, &D_sc02_000_801965CC);
    func_8012A828(o, &D_sc02_000_801A629C);
    AF(AF(o, u8 *, 0x20), s32, 4) |= 0x80000000;
    ((void (*)()) func_sc02_000_80188F30)((s32) o);
}

void func_sc02_000_801897E8(void) {
    s32 temp_v0;

    if ((D_sc02_000_801E8778 == 0) && (D_800B9A0E == 0)) {
        temp_v0 = D_sc02_000_801E877C + 1;
        D_sc02_000_801E877C = temp_v0;
        if (temp_v0 >= 0x10) {
            func_8002D4C8(0x106, 0);
            D_sc02_000_801E8778 = 1;
        }
    }
}

s32 func_sc02_000_80189858(void) {
    if (D_800B9A0E == 1) {
        return 6;
    }
    if (D_800B9A0E == 2) {
        return 7;
    }
    return 5;
}

s32 func_sc02_000_80189888(void) {
    return (s32) D_800B9A0E;
}

void func_sc02_000_80189898(void) {
    s32 temp_v0;

    temp_v0 = func_8012E544(0x338);
    if (temp_v0 != 0) {
        func_8012AD50(temp_v0);
    }
}

void func_sc02_000_801898C8(u8 *arg0) {
    D_sc02_000_8018F724[AF(arg0, u16, 2)]();
}

void func_sc02_000_80189904(s32 arg0) {
    func_sc02_000_80189C6C();
    func_sc02_000_80189D10(arg0);
    AF(arg0, s16, 0xFC) = 0;
    D_sc02_000_8018F71E = 1;
    func_8012AD50(arg0);
}

void func_sc02_000_80189950(void) {
}

void func_sc02_000_80189958(u8 *o) {
    s16 r[2];
    s32 a;
    s32 b;

    a = AF(o, u16, 0x100) + 0x100;
    b = AF(o, u16, 0xFE) + a;
    AF(o, s16, 0x100) = a;
    AF(o, s16, 0xFE) = b;
    ((s16 *)&D_sc02_000_8018F71C)[1] = b;
    if ((s16)b > 0x2000) {
        ((s16 *)&D_sc02_000_8018F71C)[1] = 0x2000;
        func_8012BF4C(o, 0xA);
        func_8012AD50(o);
    }
    r[0] = 0;
    r[1] = 0x50;
    func_sc02_000_80189B1C(o, r, (s32)&D_sc02_000_8018F71C, func_sc02_000_80189DB8(o, 0x2020F0));
}

void func_sc02_000_80189A00(u8 *o) {
    s16 r[2];

    if (func_8012BEE8(o) != 0) {
        AF(o, s16, 0x100) = 0xF0;
        func_8012AD50(o);
    }
    r[0] = 0;
    r[1] = 0x50;
    func_sc02_000_80189B1C(o, r, (s32)&D_sc02_000_8018F71C, func_sc02_000_80189DB8(o, 0x2020F0));
}

void func_sc02_000_80189A70(u8 *o) {
    s16 r[2];
    s32 s;
    s32 c;

    s = (s16)(AF(o, s16, 0x100) -= 0x10);
    if (s < 0) {
        D_sc02_000_8018F71E = 1;
        func_8012AD44(o, 0);
        return;
    }
    c = s;
    if (s >= 0x20) {
        c |= 0x202000;
    } else {
        c |= (s << 16) | (s << 8);
    }
    r[0] = 0;
    r[1] = 0x50;
    func_sc02_000_80189B1C(o, r, (s32)&D_sc02_000_8018F71C, func_sc02_000_80189DB8(o, c));
}

void func_sc02_000_80189B1C(u8 *o, s16 *r, s32 rot, s32 col) {
    struct_20_4 m;
    struct_34_2 q;
    u8 unused[0xC];
    struct_8_4 *t;
    struct_8_6 *v;
    s32 i;

    t = &D_sc02_000_801E82A0[r[0]];
    func_80017DC4(rot, &m);
    m.field_14[1] = -0x1003;
    m.field_14[0] = 0;
    m.field_14[2] = 0;
    q.field_30 = 0x50000000;
    i = r[0];
    AF(&q.field_20[1], s32, 0) = col;
    AF(&q.field_20[0], s32, 0) = col;
    AF(&q.field_20[3], s32, 0) = 0;
    AF(&q.field_20[2], s32, 0) = 0;
    v = q.field_0;
    for (; i < r[1]; i++) {
        v[0].field_0 = t->field_0;
        v[0].field_2 = 0;
        v[0].field_4 = t->field_4;
        v[2] = v[0];
        v[2].field_2 = t->field_2;
        t++;
        v[1].field_0 = t->field_0;
        v[1].field_2 = 0;
        v[1].field_4 = t->field_4;
        v[3] = v[1];
        v[3].field_2 = t->field_2;
        func_80017758(v, &m);
    }
}

void func_sc02_000_80189C6C(void) {
    struct_8_4 *p;
    s32 i;
    s32 a;

    for (i = 0; i < 0x51; i++) {
        p = &D_sc02_000_801E82A0[i];
        a = (i << 12) / 80;
        p->field_0 = rsin(a) / 8;
        p->field_4 = rcos(a) / 8;
    }
}

void func_sc02_000_80189D10(void) {
    struct_8_4 *p;
    s32 i;

    for (i = 0; i < 0x51; i++) {
        p = &D_sc02_000_801E82A0[i];
        p->field_2 = -((rsin((i << 15) / 80) * 0x110) / 4096 + 0x100);
        if (p->field_2 > 0) p->field_2 = 0;
    }
}

s32 func_sc02_000_80189DB8(u8 *o, s32 c) {
    struct_4_3 t;

    if (D_800B99DA & 1) {
        *(s32 *) &t = c;
        t.field_0 -= 8;
        if (t.field_0 >= 0xF8) {
            t.field_0 = 0;
        }
        t.field_1 -= 8;
        if (t.field_1 >= 0xF8) {
            t.field_1 = 0;
        }
        t.field_2 -= 8;
        if (t.field_2 >= 0xF8) {
            t.field_2 = 0;
        }
        c = *(s32 *) &t;
    }
    return c;
}

void func_sc02_000_80189E58(u8 *arg0) {
    struct_10_2 p;
    s32 v;
    s32 w;

    if ((AF(arg0, u8 *, 0x20) = func_8012C1B8(arg0)) == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(AF(arg0, u8 *, 0x20), &D_sc02_000_801A79A4);
    func_8002D4C8(!(AF(arg0, u16, 0x70) & 0x1000) ? 0x43A : 0x6D6, 0);
    func_8012A828(arg0, &D_sc02_000_801A777C);
    AF(arg0, s16, 2) = 1;
    AF(arg0, s32, 0x1C) = 100;
    p.field_0 = D_80126B5C;
    p.field_4 = D_80126B60;
    p.field_8 = D_80126B64;
    ((s16 *)&p.field_4)[1] -= 0x20;
    func_8012B77C(&v, arg0 + 4, &p);
    w = v;
    switch (AF(arg0, u16, 0x70) & 0xF) {
    case 0:
        AF(AF(arg0, u8 *, 0x20), s16, 0x10) = w;
        break;
    case 1:
        AF(AF(arg0, u8 *, 0x20), s16, 0x10) = w;
    case 3:
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) = w >> 16;
        break;
    case 2:
        break;
    }
    if (AF(arg0, u16, 0x70) & 0x1000) {
        AF(arg0, s32, 0x1C) <<= 1;
    }
    func_8012B2CC(arg0);
    func_8012C588(0xBC, arg0);
}

void func_sc02_000_80189FD0(u8 *arg0) {
    D_sc02_000_801A7818[AF(arg0, u16, 2)]();
}

void func_sc02_000_8018A00C(u8 *arg0) {
    D_sc02_000_801A782C[AF(arg0, u16, 2)]();
}

void func_sc02_000_8018A048(s32 arg0) {
    s32 temp_v0;

    func_8012B14C(arg0, (s32) &D_sc02_000_801A7804);
    if (func_8012CBF4(arg0) != 0) {
        func_80146A6C(6, arg0, (s32) AF(arg0, s16, 6), (s32) AF(arg0, s16, 0xA), /* extra? */ (s32) AF(arg0, s16, 0xE), /* extra? */ 0, /* extra? */ 0);
        temp_v0 = func_80132EF4(arg0, 0x22);
        if (temp_v0 != 0) {
            AF(temp_v0, s16, 0x34) = 0x2000;
        }
        goto block_7;
    }
    if ((func_8012D5E4(arg0, (s32) &D_sc02_000_801A7810, (s32) &D_800D3918, 0x19) != 0) || ((AF(arg0, s16, 0x70) != 2) && (D_80126D50 != 0)) || (func_8012BEE8(arg0) != 0)) {
block_7:
        func_8012C218(arg0);
    }
}

void func_sc02_000_8018A128(u8 *arg0) {
    struct_8_6 a;
    struct_8_6 b;

    if (AF(arg0, u16, 0x34) == 0) {
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) = AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), s16, 0x12);
        func_8012B2CC(arg0);
        func_8012B23C(arg0);
        func_8012B14C(arg0, &D_sc02_000_801A7820);
        a.field_0 = 0;
        a.field_2 = 0;
        a.field_4 = 0x10;
        func_8012F214(arg0, &a, &b);
        AF(arg0, s16, 6) = b.field_0;
        AF(arg0, s16, 0xA) = b.field_2;
        AF(arg0, s16, 0xE) = b.field_4;
        AF(arg0, s32, 0x1C) = 0x5A;
        AF(arg0, s16, 0x34) = 1;
    }
    AF(AF(arg0, u8 *, 0x20), s16, 0x10) -= 0x80;
    AF(AF(arg0, u8 *, 0x20), s16, 0x12) += 4;
    AF(AF(arg0, u8 *, 0x20), s16, 0x14) += 5;
    func_8012AD80(arg0);
    if (func_8012BEE8(arg0) != 0) {
        func_8012C218(arg0);
    }
}

void func_sc02_000_8018A244(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc02_000_801A7AD4);
    AF(arg0, s16, 2) = 1;
    AF(arg0, s16, 0x34) = 0;
}

void func_sc02_000_8018A2A0(void) {
    u8 unused[8];
    s32 vis;
    s16 x;
    s16 y;
    s32 a;
    s32 b;
    s32 i;
    s32 w;
    s32 h;
    u8 *o;

    vis = 0;
    h = D_sc02_000_801E8832; y = h; x = *(s16 *) &D_sc02_000_801E8830; w = (D_800AF7BE >> 1) + 0x10;

    if (h > -w && h < w) {
        h = (D_800AF7BC >> 1) + 0x10;
        if (-h < x) {
            vis = x < h;
        }
    }
    for (i = 0; i < 8; i++) {
        o = ((u8 **) D_sc02_000_801E8844)[i];
        if (o != 0) {
            if (vis) {
                s32 k = ((s16 *) D_sc02_000_801E8844)[i - 8];
                a = (x * k) >> 12; b = (y * k) >> 12; AF(o, s32, 4) &= 0x7FFFFFFF; AF(o, s16, 8) = a; AF(o, s16, 0xA) = b;
            } else {
                AF(o, s32, 4) |= 0x80000000;
            }
        }
    }
}

s32 func_sc02_000_8018A3C8(s32 arg0) {
    s32 temp_v0;
    s32 var_a0;
    s32 var_a1;
    s32 var_v1;

    var_a0 = arg0;
    var_a1 = 0;
    var_v1 = var_a0;
    AF(var_a0, s16, 2) = 0;
    AF(var_a0, s16, 0) = 0;
    do {
        AF(var_a0, s16, 4) = 0;
        AF(var_v1, s32, 0x14) = 0;
        var_v1 += 4;
        var_a1 += 1;
        temp_v0 = var_a1 < 8;
        var_a0 += 2;
    } while (temp_v0 != 0);
    return temp_v0;
}

s32 func_sc02_000_8018A3FC(struct_34_3 *arg0) {
    s32 i;
    s16 *tmp;
    arg0->field_2 = 0;
    arg0->field_0 = 0;
    for (i = 0; i < 8; i++) {
        arg0->field_4[i] = 0;
        tmp = arg0->field_14[i];
        arg0->field_14[i] = 0;
        if (tmp != 0) {
            *tmp = 0;
        }
    }
}

s32 func_sc02_000_8018A440(s32 id0, s32 a1, s32 x1, s32 y1, s32 col0) {
    s32 id = id0;
    s32 x0 = x1;
    s32 y0 = y1;
    u8 col = col0;
    u8 *p;
    s32 i;

    for (i = 0; i < 8; i++) {
        if (D_sc02_000_801E8844[i] == 0) {
            break;
        }
    }
    if (i < 8) {
        p = (u8 *)func_8001D074(0x7E, 0x100);
        if (p != 0) {
            func_8001CB00(p, a1, (s16)x0, (s16)y0);
            AF(p, u8, 0x27) = col;
            AF(p, s32, 0x4) |= 0xD0000000;
            D_sc02_000_801E8844[i] = (s32)p;
            ((s16 *)D_sc02_000_801E8844 - 8)[i] = id;
            return i;
        }
    }
    return -1;
}

void func_sc02_000_8018A550(u8 *o, u8 *e0) {
    typedef struct { u16 field_0; u16 field_2; u16 field_4; u16 field_6; s32 field_8; s32 field_C; } struct_10_8;
    struct_10_8 *e = (struct_10_8 *)e0;
    u8 *p;
    s32 i;
    u16 id;
    do {
        for (i = 0; i < 8; i++) {
            if (AF(o, s32, 0x14 + i * 4) == 0) {
                break;
            }
        }
        p = (u8 *)func_8001D074(0x7E, 0x100);
        if (p != 0) {
            func_8001CD04(p, e->field_C);
            AF(p, s32, 0x4) |= 0xF0000000;
            AF(p, s16, 0x18) = AF(p, s16, 0x1A) = AF(p, s16, 0x1C) = e->field_6;
            AF(o, s32, 0x14 + i * 4) = (s32)p;
            AF(o, s16, 0x4 + i * 2) = e->field_4;
        }
        id = e->field_0;
        e++;
    } while (id != 0xFF);
}

void func_sc02_000_8018A640(u8 *arg0, s8 arg1, s8 arg2, s8 arg3) {
    AF(arg0, u8, 0) = arg1;
    AF(arg0, u8, 1) = arg2;
    AF(arg0, u8, 2) = arg3;
}

void func_sc02_000_8018A650(u8 *arg0, s8 arg1, s8 arg2, s8 arg3) {
    AF(arg0, u8, 4) = arg1;
    AF(arg0, u8, 5) = arg2;
    AF(arg0, u8, 6) = arg3;
}

s32 func_sc02_000_8018A660(s32 arg0, s32 arg1, s32 arg2) {
    D_sc02_000_801E8668 = arg1;
    return func_8012C588(0x85, arg0);
}

void func_sc02_000_8018A690(u8 *o) {
    struct_8_4 a;
    struct_8_4 r;
    struct_8_4 b;
    struct_20_4 mat;
    u8 *p;
    u8 *m;
    struct_20_4 *q;
    s16 y;

    if (func_8012C354(o, &D_sc02_000_801A7AF0) == 0) {
        func_8012C218(o);
    }
    func_8012A828(o, &D_sc02_000_8018AF28);
    p = AF(o, u8 *, 0x20);
    AF(o, s16, 0x70) = 0x80;
    AF(p, s32, 4) |= 0x50000040;
    AF(p, u16, 0x2C) |= 1;
    m = AF(AF(o, u8 *, 0x64), u8 *, 0x20) + 0x34;
    func_8012F14C(m, D_sc02_000_801E8668, &a);
    b = a;
    r.field_0 = r.field_2 = r.field_4 = 0x1800;
    func_80017DC4(&r, &mat);
    RotMatrixZ(rand() & 0xFFF, &mat);
    MulMatrix0(m, &mat, p + 0x34);
    func_80017E68(&b, p + 0x34);
    q = D_sc02_000_801A7B24++;
    AF(o, struct_20_4 *, 0xCC) = q;
    if (D_sc02_000_801A7B24 > D_sc02_000_801E8648) {
        D_sc02_000_801A7B24 = D_sc02_000_801E8648 - 9;
    }
    func_800D20C0(&a, &r, 7);
    func_800D23D0(&r);
    RotMatrixYXZ(&r, q);
    func_80017E68(&a, q);
    y = b.field_2;
    if (func_80134510(&b) != 0 && y - b.field_2 < 0x80) {
        b.field_2 = b.field_2 - 4;
        q = D_sc02_000_801A7B24++;
        AF(o, struct_20_4 *, 0xD0) = q;
        if (D_sc02_000_801A7B24 > D_sc02_000_801E8648) {
            D_sc02_000_801A7B24 = D_sc02_000_801E8648 - 9;
        }
        func_800D23D0(&D_801152A8);
        RotMatrixYXZ(&D_801152A8, q);
        func_80017E68(&b, q);
    }
    AF(o, s16, 2)++;
}

void func_sc02_000_8018A8D4(u8 *o) {
    struct_34_2 q;
    u8 *p;
    u8 *m;
    u8 *mm;
    s8 *t;
    s16 i;
    s16 j;
    u16 v;

    p = AF(o, u8 *, 0x20);
    if (AF(o, s32, 0x1C)++ < 2) {
        t = D_sc02_000_801A7ADC;
        i = 0;
        m = AF(o, u8 *, 0xCC);
        v = AF(o, u16, 0x70);
        q.field_0[1].field_0 = q.field_0[1].field_2 = q.field_0[1].field_4 = 0;
        q.field_0[0].field_4 = q.field_0[2].field_4 = q.field_0[3].field_4 = 0;
        q.field_20[0].field_0 = q.field_20[0].field_1 = q.field_20[0].field_2 = 0;
        q.field_20[2].field_0 = q.field_20[2].field_1 = q.field_20[2].field_2 = 0;
        q.field_20[3].field_0 = q.field_20[3].field_1 = q.field_20[3].field_2 = 0;
        q.field_30 = 0x50000000;
        q.field_20[1].field_1 = v;
        q.field_20[1].field_2 = v;
        q.field_20[1].field_0 = v;
        for (; i < 4; i++) {
            q.field_0[0].field_0 = *t++;
            q.field_0[0].field_2 = *t++;
            q.field_0[2].field_0 = *t++;
            q.field_0[2].field_2 = *t++;
            q.field_0[3].field_0 = *t++;
            q.field_0[3].field_2 = *t++;
            t -= 2;
            func_80017758(&q, m);
        }
        mm = AF(o, u8 *, 0xD0);
        if (mm != 0) {
            m = mm;
            t = D_sc02_000_801A7ADC;
            j = 0;
            v = AF(o, u16, 0x70);
        q.field_0[1].field_0 = q.field_0[1].field_2 = q.field_0[1].field_4 = 0;
        q.field_0[0].field_4 = q.field_0[2].field_4 = q.field_0[3].field_4 = 0;
        q.field_20[0].field_0 = q.field_20[0].field_1 = q.field_20[0].field_2 = 0;
        q.field_20[2].field_0 = q.field_20[2].field_1 = q.field_20[2].field_2 = 0;
        q.field_20[3].field_0 = q.field_20[3].field_1 = q.field_20[3].field_2 = 0;
        q.field_30 = 0x50000000;
        q.field_20[1].field_1 = v;
        q.field_20[1].field_2 = v;
        q.field_20[1].field_0 = v;
        for (; j < 4; j++) {
            q.field_0[0].field_0 = *t++;
            q.field_0[0].field_2 = *t++;
            q.field_0[2].field_0 = *t++;
            q.field_0[2].field_2 = *t++;
            q.field_0[3].field_0 = *t++;
            q.field_0[3].field_2 = *t++;
            t -= 2;
            func_80017758(&q, m);
        }
        }
        AF(o, s16, 0x70) >>= 1;
        AF(p, u16, 0x2C) |= 1;
    } else {
        func_8012C218(o);
    }
}

void func_sc02_000_8018AB74(u8 *arg0) {
    D_sc02_000_801A7B28[AF(arg0, u16, 2)]();
}
