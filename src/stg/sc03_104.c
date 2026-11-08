#include "common.h"
#include "gte.h"
#include "psyq.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc03_104_8017BE9C(void) {
}

void func_sc03_104_8017BEA4(void) {
}

void func_sc03_104_8017BEAC(void) {
}

void func_sc03_104_8017BEB4(void) {
}

typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_4;
typedef struct { s16 field_0[6]; } struct_C_3;
typedef struct { s16 field_0, field_2; } struct_4_2;
typedef struct { struct_4_2 field_0; s16 field_4; s16 field_6; struct_4_2 field_8; s32 field_C; s32 field_10; s32 field_14; s32 field_18; } struct_1C;
typedef struct { s32 field_0, field_4, field_8; } struct_C_4;
extern void func_80146A6C();
extern void (*D_sc03_104_8018E6D8[])();
extern void func_80147324();
extern void func_sc03_104_8017C218();
extern void func_8014708C();
extern void func_801472C8();
extern void func_80146C3C();
extern void (*D_sc03_104_8018E6EC[])();
extern void func_80147084();
extern void func_801472B4();
extern void (*D_sc03_104_8018E700[])();
extern void func_800D22E4();
extern void func_sc03_104_8017C910();
extern void (*D_sc03_104_8018E7A4[])();
void func_sc03_104_80181188(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc03_104_8018E7AC[])();
void func_sc03_104_801811B0(void);
extern void func_800D1EBC();
extern void (*D_sc03_104_8018E7B8[])();
extern void (*D_sc03_104_8018E7C4[])();
extern u8 D_sc03_104_8018E7D4;
extern void func_8016EE40();
extern u8 D_sc03_104_8018E7D8;
extern void (*D_sc03_104_8018E7E4[])();
extern u8 D_sc03_104_8018E7DC;
extern void func_sc03_104_80181404();
extern void (*D_sc03_104_8018E7EC[])();
extern void (*D_sc03_104_80199DC0[])();
extern void (*D_sc03_104_80199EF8[])();
extern void (*D_sc03_104_8019A070[])();
extern void (*D_sc03_104_8019A080[])();
extern void (*D_sc03_104_8019CA70[])();
extern void (*D_sc03_104_8019CB14[])();
extern void (*D_sc03_104_8019D68C[])();
extern void (*D_sc03_104_8019D740[])();
extern void (*D_sc03_104_801BCC04[])();
extern void (*D_sc03_104_801BCF4C[])();
extern s32 func_8012C354();
extern s32 func_801788B8();
extern u8 D_sc03_104_8018AFEC;
extern s32 func_80029178();
extern void func_8012CAE4();
extern u8 D_sc03_104_801BCC3C;
extern s32 * func_sc03_104_8018AB7C();
extern s32 D_sc03_104_801BCCA4[];
extern s32 func_8012C658();
extern void func_80029124();
extern void func_80178CBC();
extern s32 D_sc03_104_801BCE70;
extern s32 D_sc03_104_801BCE74;
extern s32 D_sc03_104_801BCE88;
extern s32 D_sc03_104_801BCE9C;
extern s32 D_sc03_104_801BCF08;
extern s32 D_sc03_104_801BCDEC[];
extern s32 D_sc03_104_801BCD68[];
extern void func_80178D18();
extern void func_8002AC00();
extern void func_8012C218();
extern s32 func_801789AC();
extern void func_80029514();
extern void func_80145EE8();
extern s32 func_sc03_104_8018A924();
extern u8 D_80126B58;
extern void func_8014ADA8();
extern s32 func_80174764();
extern void (*D_sc03_104_801BCF74[])();
extern u8 D_sc03_104_801BCC70;
extern u8 D_sc03_104_801BD414;
extern u8 D_sc03_104_801BD634;
extern void func_8002D4C8();
extern u8 D_sc03_104_801BD424;
extern u8 D_sc03_104_801BD52C;

void func_sc03_104_8017BEBC(s32 arg0) {
    func_80146A6C(0x19, arg0, 0, 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 1);
}

void func_sc03_104_8017BEF8(u8 *arg0) {
    D_sc03_104_8018E6D8[AF(arg0, u16, 2)]();
}

void func_sc03_104_8017BF34(u8 *arg0) {
    if (AF(arg0, s32, 0x30) == 0) {
        func_80147324((s32) AF(arg0, u16, 0x2E));
    }
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_104_8017BF84(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0xC) {
        AF(arg0, u16, 0x12) = (u16) (AF(arg0, u16, 0x12) + 0xE0);
    } else {
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc03_104_8017C218((s32) arg0);
}

void func_sc03_104_8017BFE0(u8 *arg0) {
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
    func_sc03_104_8017C218((s32) arg0);
}

void func_sc03_104_8017C064(u8 *arg0) {
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
    func_sc03_104_8017C218((s32) arg0);
}

void func_sc03_104_8017C1CC(u8 *arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x12) - 0x100;
    AF(arg0, u16, 0x12) = temp_v0;
    if ((temp_v0 << 0x10) > 0) {
        func_sc03_104_8017C218((s32) arg0);
        return;
    }
    func_80146C3C((s32) arg0);
}

extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

void func_sc03_104_801812B0(void);
extern s32 func_sc03_104_8018125C();
extern u8 D_800AE6BD;
extern s32 func_8014C050();
extern s32 func_80171928();
extern s32 D_sc03_104_8018E7FC[];
extern s32 func_8013B7F4();
extern void (*D_sc03_104_8019CA44[])();
extern void func_sc03_104_80183D98();
extern void func_sc03_104_801853E4();
extern void func_8012B2CC();
extern void func_sc03_104_8018536C();
extern s32 func_sc03_104_801855B4();
extern s8 D_sc03_104_801C00B0;
extern s8 D_sc03_104_801C00B1;
extern s8 D_sc03_104_801C00B2;
extern void func_sc03_104_80183DEC();
extern s32 func_8012C1B8();
extern s32 D_sc03_104_8019CA14;
extern u8 D_sc03_104_8019CA60;
extern void func_8001C2C4();
extern void func_8012AD50();
extern void func_sc03_104_80184604();
extern u8 D_sc03_104_8019CA78;
extern void func_sc03_104_80184934();
extern s32 func_sc03_104_801846F0();
extern s32 func_sc03_104_80184574();
extern s32 func_80178970();
extern void func_800D1724();
extern u8 D_sc03_104_801C0244;
extern u16 D_sc03_104_801C023C;
extern u16 D_sc03_104_801C023E;
extern s16 D_sc03_104_801C0240;
extern s16 D_sc03_104_801C0242;
extern s32 func_sc03_104_8018552C();
extern void func_sc03_104_80185458();
extern void func_80015978();
extern s32 func_sc03_104_801859A0();
extern s32 func_sc03_104_80185CE4();
extern void func_sc03_104_80185BC8();
extern u8 D_sc03_104_8019D1A0;
extern u8 D_sc03_104_8019D1C0;
extern u8 D_sc03_104_8019D284;
extern s32 func_8012CBCC();
extern void func_8012E688();
extern s32 func_8012CBA4();
extern void func_8012DFD4();
extern void func_80131B14();
extern void func_8012B23C();
extern void func_80131A34();
extern s32 func_80153BD8();
extern void func_80153BF0();
extern u8 D_sc03_104_8019F5D0;
extern void func_8012B14C();
extern u8 D_sc03_104_801ABACC;
extern void func_8012C588();
extern u8 D_sc03_104_8019F5EC;
extern u8 D_sc03_104_801AB8B4;
extern s16 D_80126B96;
extern s16 D_80126B98;
extern s32 D_80127078;
extern u8 D_sc03_104_8019F884;
extern u8 D_sc03_104_8019F88C;
extern u8 D_sc03_104_801AC374;
extern u8 D_sc03_104_801ACAF4;
extern s32 func_8012DEB8();
extern u8 D_sc03_104_801AC6B4;
extern u8 D_sc03_104_801ACF64;

extern s16 D_sc03_104_801C013C;

extern void func_80171990();
extern void func_80146994();
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
extern void func_8013B7AC();
extern void (*D_sc03_104_80199E4C[])();
extern void func_sc03_104_8018282C();
extern s32 func_8012CBF4();
extern s32 func_80013478();
extern s16 D_80126CBA;
extern s32 func_8012BE54();
extern s32 func_sc03_104_80182898();
extern s32 func_8012BEE8();
extern void func_8012E88C();
extern void func_8002A04C();
extern void func_8012B200();
extern void func_8012E8A8();
extern u8 D_sc03_104_80199E78;
extern s32 func_8012D5E4();
extern u8 D_80078EC1;
extern void func_sc03_104_80182CB4();
extern void func_sc03_104_8018300C();
extern void func_sc03_104_80182FCC();
extern u8 D_sc03_104_80199F10;
extern void func_80017274();
extern s32 func_8012AD44();
extern u8 D_sc03_104_8019C9F8;
extern void func_80178B18();
extern s32 func_sc03_104_80183C30();
extern void func_8012C098();

extern s32 func_8012BD14();
extern void func_80016714();


extern void func_sc03_104_80185A94();

extern void func_8001CA1C();
extern struct_8_4 D_sc03_104_8019D55C[];
extern u8 D_sc03_104_8019D2C0;
extern u8 D_sc03_104_8019D380;
extern u8 D_sc03_104_8019D408;
extern u8 D_sc03_104_8019D4C8;
extern u8 D_sc03_104_8019D5AC;
extern u8 D_sc03_104_8019D5D0;
extern u8 D_sc03_104_8019D5BC;
extern u8 D_sc03_104_8019D5C8;

extern u8 D_sc03_104_80199F28;
extern u8 D_sc03_104_80199FE8;

extern void func_801330E0();
extern s32 D_sc03_104_8019CB00[];

extern void (*D_sc03_104_8019F958[])();
extern s32 func_8012D624();
extern void func_8012B370();

extern u8 D_sc03_104_8018EA00;
extern u8 D_sc03_104_8018EB7C;
s32 func_sc03_104_80181774(s32 arg0);
extern s32 *D_801274C8;
extern s32 *D_801274CC;
extern s32 D_8012704C;
extern u8 D_sc03_104_8018EB90;
extern u8 D_sc03_104_8018EC1C;
extern s32 func_sc03_104_80181AD0();
extern s32 func_sc03_104_80181B14();
extern u8 D_sc03_104_8019F91C;
extern u8 D_sc03_104_8019F934;
extern u8 D_sc03_104_8019F94C;
extern u8 D_sc03_104_8019F964;
extern u8 D_sc03_104_8019FA24;
extern u8 D_sc03_104_8019FAAC;


typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_5;
extern void func_8012B77C();
extern s32 func_80143C74();
extern u8 *D_801151D4;
extern u8 D_sc03_104_801AB22C;
extern u8 D_sc03_104_801AB434;
extern u8 D_sc03_104_801ABFEC;
extern s32 func_8012CEB0();
extern void func_80131E00();


typedef struct { s16 field_0[3][3]; s16 field_12; s32 field_14[3]; } struct_20_3;
typedef struct { u32 field_0; u32 field_4; u32 field_8; u32 field_C; u32 *field_10; } struct_14_2;
typedef struct { s32 field_0; s32 field_4; s32 field_8; s32 field_C; s32 field_10; s32 field_14; s32 field_18; } struct_1C_2;
extern u8 *D_800A5E60;
extern u16 D_800B9A02[];
extern u32 D_800A6610[2][0x1000];

typedef struct { u16 field_0, field_2, field_4, field_6; } struct_8_6;
typedef void (*type_2)();
extern u8 D_801202A0;
extern type_2 D_sc03_104_8019D2B8[];
extern s32 func_8012B6D4();
extern s32 func_80135888();
extern void func_8012B030();
extern u8 D_sc03_104_801A59A0;
extern u8 D_sc03_104_801AD0E4;
extern void func_8001C214();
extern s32 func_8012B8E4();
extern s32 func_8012B1B4();
extern u8 D_sc03_104_8019F8A4;
extern u8 D_sc03_104_801AC5AC;
extern s32 func_80133784();
extern s32 func_8012BCCC();
extern s32 func_8012BDBC();
extern s32 D_80126B5C;
extern s16 D_80126B62;
extern s32 D_80126B64;

typedef struct { u8 field_0, field_1, field_2, field_3; } struct_4_3;
typedef struct { struct_8_6 field_0; struct_8_6 field_8; struct_4_3 field_10; struct_4_3 field_14; s32 field_18; } struct_1C_3;
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_4;
typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_7;
typedef struct { struct_8_7 field_0[4]; struct_4_3 field_20[4]; s32 field_30; } struct_34_2;
extern s8 D_sc03_104_8018E6AC[];
extern u16 D_800B99DA;
extern void func_80017DC4();
extern void func_80017E68();
extern void func_80017758();
extern struct_20_4 D_800AE620;
extern void func_80016A5C();
typedef struct { u8 field_0[0x18]; struct_20_4 field_18; } struct_38;
typedef struct { s32 field_0[4]; } struct_10;
typedef struct { struct_10 field_0, field_10, field_20; } struct_30_2;
extern s32 func_8012BD3C();
extern struct_38 D_800AF630;
extern struct_20_4 D_800AF648;
extern s32 func_8012BE98();
extern s32 func_8012B608();
extern s32 func_8012B744();
extern u8 D_sc03_104_8019F5DC;
extern u8 D_sc03_104_8019F8B0;
extern u8 D_sc03_104_801AD0FC;
extern s16 D_sc03_104_801BCB24;
extern s16 D_sc03_104_801BCB26;
extern s16 D_sc03_104_801BCB28;
extern struct_30_2 D_sc03_104_801BCB2C;
extern s16 D_sc03_104_801BCB5C;
extern s16 D_sc03_104_801BCB5E;
extern s16 D_sc03_104_801BCB60;
extern struct_30_2 D_sc03_104_801BCB64;
extern s16 D_sc03_104_801BCB94;
extern s16 D_sc03_104_801BCB96;
extern s16 D_sc03_104_801BCB98;
extern struct_30_2 D_sc03_104_801BCB9C;
extern s16 D_sc03_104_801BCBCC;
extern s16 D_sc03_104_801BCBCE;
extern s16 D_sc03_104_801BCBD0;
extern struct_30_2 D_sc03_104_801BCBD4;
extern struct_30_2 D_800A5E88;
extern void func_8002850C();
extern void func_80028620();

void func_sc03_104_8017C218(u8 *arg0) {
    struct_8_7 r;
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
    t = D_sc03_104_8018E6AC;
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
    t = D_sc03_104_8018E6AC;
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
        t = D_sc03_104_8018E6AC;
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

void func_sc03_104_8017C524(u8 *arg0) {
    D_sc03_104_8018E6EC[AF(arg0, u16, 2)]();
}

void func_sc03_104_8017C560(u8 *arg0) {
    func_80147324((s32) AF(arg0, u16, 0x2E));
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_104_8017C5A0(u8 *arg0) {
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
    func_sc03_104_8017C218((s32) arg0);
}

void func_sc03_104_8017C610(u8 *arg0) {
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
    func_sc03_104_8017C218((s32) arg0);
}

void func_sc03_104_8017C69C(u8 *arg0) {
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
    func_sc03_104_8017C218((s32) arg0);
}

void func_sc03_104_8017C770(u8 *arg0) {
    u16 temp_v0;
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x34);
    temp_v0 = AF(arg0, u16, 0x12) - 0x100;
    AF(arg0, u16, 0x12) = temp_v0;
    if ((temp_v0 << 0x10) > 0) {
        func_sc03_104_8017C218((s32) arg0);
        return;
    }
    AF(temp_v1, s16, 0x64) = 0x1000;
    AF(temp_v1, s16, 0x62) = 0x1000;
    AF(temp_v1, s16, 0x60) = 0x1000;
    func_80146C3C((s32) arg0);
}

void func_sc03_104_8017C7C4(u8 *arg0) {
    D_sc03_104_8018E700[AF(arg0, u16, 2)]();
}

typedef struct { u16 field_0[6]; } struct_C_5;
typedef struct { u16 field_0; s16 field_2; s16 field_4; s16 field_6; s32 field_8; s32 field_C; } struct_10_2;
typedef struct { s16 field_0, field_2, field_4, field_6; u8 field_8, field_9; s16 field_A; struct_10_2 field_C[16]; } struct_10C_2;
extern struct_10C_2 D_sc03_104_801C0130;
extern void func_sc03_104_80185D20();
extern s16 D_sc03_104_801C0136;
extern void func_sc03_104_80185E34();
typedef struct { u8 field_0[0x34]; } struct_34_3;
extern u16 D_sc03_104_8019D1F4[];
extern u16 D_sc03_104_8019D21C[];
extern u16 D_sc03_104_8019D244[];
extern type_2 D_sc03_104_8019D26C[];
extern void func_8002D59C();
extern struct_34_3 D_sc03_104_8019F60C[];
extern u8 D_sc03_104_8019F744;
extern u8 D_sc03_104_8019F7E4;
extern u8 D_sc03_104_8019F82C;
extern u8 D_sc03_104_801ACDE4;
extern void func_80143970();

typedef struct { s32 field_0, field_4, field_8, field_C; } struct_10_3;
typedef struct { u32 *field_0; u8 field_4[0x10]; } struct_14_3;
typedef struct { u8 field_0[0x14]; } struct_14_4;
typedef struct { unsigned field_0_b0 : 24; unsigned field_3_b0 : 8; } struct_4_4;
extern struct_14_3 D_800A651C[];
extern struct_14_4 D_800A6518[];
extern s32 func_80016638();
extern u8 D_sc03_104_801C0138;
extern u8 D_sc03_104_801C0139;
extern u8 D_sc03_104_801C013A;

extern u8 D_sc03_104_801AC26C;
extern u8 D_sc03_104_801AC8EC;

extern s32 * func_sc03_104_8018271C();
extern void func_8012B178();
extern s32 func_sc03_104_801827EC();
extern s32 func_sc03_104_80183318();

extern s16 D_sc03_104_8019CA30[];
extern void func_sc03_104_80183AF4();

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
typedef struct { u32 field_0; u32 field_4; } struct_8_8;
typedef struct { u8 field_0[0x10]; struct_4_2 field_10[13]; } struct_44;
extern void func_8001E094();
extern void func_8001E378();
extern void func_sc03_104_80184D50();
extern void func_80143B6C();
extern u8 D_sc03_104_801AB95C;

typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_5;
typedef struct { u8 field_0, field_1, field_2, field_3; } struct_4_5;
typedef struct { u8 field_0[8]; } struct_8_9;
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_6;
typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_10;
extern void func_sc03_104_801815DC();
extern s32 func_80012C6C();
extern s32 func_80012ABC();
extern void func_8012F14C();
typedef struct { u32 field_0_b0 : 24; u32 field_3_b0 : 8; } struct_4_6;
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_7;
typedef struct { struct_4_6 field_0; u8 field_4, field_5, field_6, field_7; s16 field_8, field_A, field_C, field_E, field_10, field_12, field_14, field_16; } struct_18;
typedef union { s32 m0; struct_4_2 m1; } union_4_2;


typedef struct { struct_C_5 field_0[9]; } struct_6C;
typedef struct { s32 field_0, field_4, field_8, field_C; } struct_10_4;
typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_11;
typedef struct { s32 field_0, field_4, field_8, field_C; } struct_10_5;
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_8;
typedef struct { u8 field_0, field_1, field_2, field_3; } struct_4_7;
typedef struct { struct_8_11 field_0[4]; struct_4_7 field_20[4]; s32 field_30; } struct_34_4;
typedef struct { s32 field_0, field_4, field_8; } struct_C_6;
extern u8 D_sc03_104_8019C84C;
extern void func_8012B0B4();
extern s32 func_8012E778();
extern u8 D_sc03_104_80199F08;
extern void func_sc03_104_80182D18();
typedef struct { s16 field_0, field_2, field_4, field_6, field_8, field_A, field_C, field_E; s32 field_10; } struct_14_5;
typedef struct { u8 field_0[4]; } struct_4_8;
extern struct_8_7 D_sc03_104_801BED1C;
extern void func_8012C51C();

extern void func_800233CC();
extern u8 D_sc03_104_801C00B4;
extern u8 D_sc03_104_801BED0C;
extern u8 D_sc03_104_801BED10;
extern u8 D_sc03_104_8019C9AC;
extern u8 D_sc03_104_8019C9E0;
extern s32 D_sc03_104_8019CA20[];
extern s32 func_8012C194();
extern void func_8001CD9C();

extern s32 func_sc03_104_80181A2C();

typedef struct { unsigned field_0_b0 : 31; unsigned field_3_b7 : 1; } struct_4_9;
extern u8 D_sc03_104_80199F20;

extern u8 D_sc03_104_80199E14;

typedef struct { s32 field_0; s32 field_4; } struct_8_12;

typedef struct { s16 field_0, field_2, field_4; } struct_6;
typedef struct { s32 field_0[4]; } struct_10_6;
typedef struct { s16 field_0, field_2; s32 field_4; } struct_8_13;
typedef struct { struct_8_4 field_0[3]; struct_4_3 field_18[3]; s32 field_24; } struct_28_2;
typedef struct { u16 field_0, field_2, field_4; } struct_6_2;
typedef struct { u8 field_0, field_1, field_2, field_3; s32 field_4[3]; } struct_10_7;
extern void func_8013B598();
extern void func_8013B6A0();
extern u8 D_sc03_104_80199DD8;
extern u8 D_sc03_104_80199E1C;
extern void *D_80126B78;
extern s32 func_80134510();
extern u8 D_sc03_104_80199E88;
extern u8 D_sc03_104_80199EC8;
extern u8 D_sc03_104_8019A384;
extern u8 D_sc03_104_801BED04;
extern s32 func_8012CC64();
extern u8 D_sc03_104_80199E89;
extern u8 D_sc03_104_80199E8A;
extern struct_10_7 D_sc03_104_80199ED4[];
typedef struct { s16 field_0; } struct_2;
typedef struct { u16 field_0, field_2, field_4, field_6; } struct_8_14;
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_9;
typedef struct { u8 field_0[0x18]; struct_20_9 field_18; } struct_38_2;
typedef struct { u16 field_0[6]; } struct_C_7;
typedef struct { u16 field_0, field_2, field_4, field_6; } struct_8_15;
typedef struct { s16 field_0, field_2, field_4, field_6, field_8; u16 field_A; s16 field_C, field_E; s32 field_10; } struct_14_6;
extern struct_4_3 D_sc03_104_801BED14;
extern struct_4_3 D_sc03_104_801BED18;
extern s16 D_80126B5E;
extern u16 D_80126B66;
extern struct_4_3 D_sc03_104_801BED24;
extern type_2 D_sc03_104_8019D5E0[];
extern s16 D_80126CB6;
extern u8 D_sc03_104_8019D550;
extern s32 func_8012B864();
extern s32 func_8012B70C();
extern s16 D_sc03_104_8019D652[];
extern u8 D_sc03_104_8019D618;
extern u16 D_sc03_104_8019D64C[];
extern u16 D_sc03_104_8019D64E[];
extern u16 D_sc03_104_8019D650[];
extern u8 D_sc03_104_8019D698;
extern u8 D_sc03_104_8019D6F8;
extern type_2 D_sc03_104_8019F8C8[];
extern type_2 D_sc03_104_8019FAB8[];
extern u8 D_sc03_104_801ACE7C;
extern u8 D_sc03_104_8019F5C0;
extern void func_80153C74();
extern u8 D_sc03_104_801AC7E4;
extern u8 D_sc03_104_8019F894;
extern u8 D_sc03_104_8019F89C;
extern u8 D_sc03_104_8019F8BC;
extern struct_10 D_sc03_104_801BCB4C;
extern s32 D_800A5EB0;
extern struct_10 D_sc03_104_801BCB84;
extern s32 D_800A5E90;

void func_sc03_104_8017C800(u8 *arg0) {
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

void func_sc03_104_8017C8B4(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0xA) {
        func_800D22E4();
        func_sc03_104_8017C910((s32) arg0);
        return;
    }
    func_80146C3C((s32) arg0);
}

void func_sc03_104_8017C910(u8 *arg0) {
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

void func_sc03_104_8017CA80(u8 *obj) {
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
    ot = D_800A6610[D_800B9A02[0]];
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

typedef struct { s16 field_0, field_2; u16 field_4; s16 field_6; } struct_8_16;
extern s32 func_800291B4();
extern s16 D_sc03_104_8019CA7C[];
extern s16 D_sc03_104_8019CA7E[];
extern struct_8_16 D_sc03_104_8019CAE4[];
extern s32 D_sc03_104_8019CAF4[];
extern s32 D_sc03_104_801C00F0;
extern void func_8001CB6C();
extern void func_8001CF00();

extern void func_8012F568();
extern s32 D_sc03_104_8019A078;
extern u8 D_sc03_104_8019C9F0;
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
typedef struct { s32 field_0; s32 field_4; } struct_8_17;
typedef struct { struct_8_7 field_0[4]; s32 field_20[4]; s32 field_30; s32 field_34; u8 field_38; } struct_3C;
extern void func_80178BF8();
extern void func_80172710();
extern struct_8_4 D_sc03_104_801BCF64[];

extern struct_8_4 D_80126940;
extern s32 func_80148800();
extern s16 D_sc03_104_8018E7F8[];
extern s16 D_sc03_104_8018E7F4[];

extern s32 D_sc03_104_801C0370;
extern s16 D_sc03_104_801C0374;
extern s16 D_sc03_104_801C0376;
extern s16 D_sc03_104_801C0378;
extern s32 D_sc03_104_801C037C;
extern s32 D_sc03_104_801C038C;
extern s16 D_sc03_104_801C0390;
extern s16 D_sc03_104_801C0392;
extern s16 D_sc03_104_801C0394;
extern s32 D_sc03_104_801C0398;
extern s32 D_sc03_104_801C03A8;
extern s16 D_sc03_104_801C03AC;
extern s16 D_sc03_104_801C03AE;
extern s16 D_sc03_104_801C03B0;
extern s32 D_sc03_104_801C03B4;

void func_sc03_104_8017D960(u8 *o) {
    u8 *w;
    s32 sxy[3];
    struct_8_4 box[8];
    struct_8_4 scr[8];
    s32 ls[8];
    s32 otz;
    s32 flag;
    s32 z;
    s32 sz0, sz1, sz2, sz3;
    s32 far;
    s32 i;
    u32 j;
    u8 *p3;
    u32 *ot;
    u8 *pkt;
    s16 vx3, vz3, vy3;
    u32 *face;
    u32 count;
    u8 *base;
    s32 n;
    u32 *bb;
    s16 x0_1, x1_1, y0_1, y1_1, z0_1, z1_1;
    s16 x0_2, x1_2, y0_2, y1_2, z0_2, z1_2;
    s16 x0_3, x1_3, y0_3, y1_3, z0_3, z1_3;
    s16 cx1, cy1, cz1;
    s16 cx2, cy2, cz2;
    s16 cx3, cy3, cz3;
    s16 r1, r2, r3, q1, q2, q3;
    s32 in1, in2, in3;
    u8 *hdr;
    u32 wx, wy, wz;
    s16 bz0, bz1;
    s32 mx0, mn0, mx1, mn1, mx, mn;
    s32 v;
    u8 *p0, *p1, *p2;
    u32 hi;
    s32 type;
    s16 tmx, tmn, umx, umn;
    s32 zm;
    u32 q0, qw;
    s16 vx0, vy0, vz0, vx1, vy1, vz1, vx2, vy2, vz2;
    s32 d, a, b, c;
    s32 c0, c1, c2, c3;
    u32 *tex;
    u32 code;
    u32 cw;
    s32 zb;

    w = (u8 *)&D_800AF630;
    far = ReadGeomScreen() + AF(o, s32, 0x64);
    GsGetLs(o + 0x10, ls);
    GsSetLsMatrix(ls);
    q3 = 0;
    q2 = 0;
    q1 = 0;
    r3 = 0;
    r2 = 0;
    r1 = 0;
    if (D_sc03_104_801C0370 != 0) {
        cx1 = D_sc03_104_801C0374;
        cy1 = D_sc03_104_801C0376;
        cz1 = D_sc03_104_801C0378;
        r1 = D_sc03_104_801C037C;
        q1 = r1 - 0x80;
    } else {
        cx1 = cy1 = cz1 = 0x6000;
    }
    if (D_sc03_104_801C038C != 0) {
        cx2 = D_sc03_104_801C0390;
        cy2 = D_sc03_104_801C0392;
        cz2 = D_sc03_104_801C0394;
        r2 = D_sc03_104_801C0398;
        q2 = r2 - 0x80;
    } else {
        cx2 = cy2 = cz2 = 0x6000;
    }
    if (D_sc03_104_801C03A8 != 0) {
        cx3 = D_sc03_104_801C03AC;
        cy3 = D_sc03_104_801C03AE;
        cz3 = D_sc03_104_801C03B0;
        r3 = D_sc03_104_801C03B4;
        q3 = r3 - 0x80;
    } else {
        cx3 = cy3 = cz3 = 0x6000;
    }
    x0_1 = cx1 - r1;
    x1_1 = cx1 + r1;
    y0_1 = cy1 - r1;
    y1_1 = cy1 + r1;
    z0_1 = cz1 - r1;
    z1_1 = cz1 + r1;
    x0_2 = cx2 - r2;
    x1_2 = cx2 + r2;
    y0_2 = cy2 - r2;
    y1_2 = cy2 + r2;
    z0_2 = cz2 - r2;
    z1_2 = cz2 + r2;
    x0_3 = cx3 - r3;
    x1_3 = cx3 + r3;
    y0_3 = cy3 - r3;
    y1_3 = cy3 + r3;
    z0_3 = cz3 - r3;
    z1_3 = cz3 + r3;
    pkt = D_800A5E60;
    ot = D_800A6610[AF(w, u16, 0xA3D2)];
    bb = AF(o, u32 *, 0xC);
    hdr = AF(o, u8 *, 8);
    n = AF(hdr, s32, 8);
    base = AF(hdr, u8 *, 0x10);
    for (i = 0; i < n; i++, bb += 5) {
        wx = bb[0];
        wy = bb[1];
        wz = bb[2];
        tmn = wx;
        tmx = wx >> 16;
        umn = wy;
        umx = wy >> 16;
        bz0 = wz;
        bz1 = wz >> 16;
        box[0].field_0 = tmn;
        box[0].field_2 = umn;
        box[1].field_0 = tmx;
        box[1].field_2 = umn;
        box[2].field_0 = tmn;
        box[2].field_2 = umn;
        box[3].field_0 = tmx;
        box[3].field_2 = umn;
        box[4].field_0 = tmn;
        box[4].field_2 = umx;
        box[5].field_0 = tmx;
        box[5].field_2 = umx;
        box[6].field_0 = tmn;
        box[6].field_2 = umx;
        box[7].field_0 = tmx;
        box[7].field_2 = umx;
        box[0].field_4 = bz0;
        box[1].field_4 = bz0;
        box[4].field_4 = bz0;
        box[5].field_4 = bz0;
        box[2].field_4 = bz1;
        box[3].field_4 = bz1;
        box[6].field_4 = bz1;
        box[7].field_4 = bz1;
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
        gte_stszotz(&otz);
        if (far < otz) continue;
        if (scr[0].field_0 > scr[1].field_0) {
            mx0 = scr[0].field_0;
            mn0 = scr[1].field_0;
        } else {
            mn0 = scr[0].field_0;
            mx0 = scr[1].field_0;
        }
        v = scr[2].field_0;
        if (mx0 < v) mx0 = v;
        else if (v < mn0) mn0 = v;
        v = scr[3].field_0;
        if (mx0 < v) mx0 = v;
        else if (v < mn0) mn0 = v;
        if (scr[4].field_0 > scr[5].field_0) {
            mx1 = scr[4].field_0;
            mn1 = scr[5].field_0;
        } else {
            mn1 = scr[4].field_0;
            mx1 = scr[5].field_0;
        }
        v = scr[6].field_0;
        if (mx1 < v) mx1 = v;
        else if (v < mn1) mn1 = v;
        v = scr[7].field_0;
        if (mx1 < v) mx1 = v;
        else if (v < mn1) mn1 = v;
        mn = mn0;
        if (mn1 < mn) mn = mn1;
        mx = mx0;
        if (mx < mx1) mx = mx1;
        if ((s16)mx < -0xA0 || (s16)mn > 0xA0) continue;
        if (scr[0].field_2 > scr[1].field_2) {
            mx0 = scr[0].field_2;
            mn0 = scr[1].field_2;
        } else {
            mn0 = scr[0].field_2;
            mx0 = scr[1].field_2;
        }
        v = scr[2].field_2;
        if (mx0 < v) mx0 = v;
        else if (v < mn0) mn0 = v;
        v = scr[3].field_2;
        if (mx0 < v) mx0 = v;
        else if (v < mn0) mn0 = v;
        if (scr[4].field_2 > scr[5].field_2) {
            mx1 = scr[4].field_2;
            mn1 = scr[5].field_2;
        } else {
            mn1 = scr[4].field_2;
            mx1 = scr[5].field_2;
        }
        v = scr[6].field_2;
        if (mx1 < v) mx1 = v;
        else if (v < mn1) mn1 = v;
        v = scr[7].field_2;
        if (mx1 < v) mx1 = v;
        else if (v < mn1) mn1 = v;
        mn = mn0;
        if (mn1 < mn) mn = mn1;
        mx = mx0;
        if (mx < mx1) mx = mx1;
        if ((s16)mx < -0x6E || (s16)mn > 0x6E) continue;
        face = (u32 *)bb[4];
        count = bb[3];
        for (j = 0; j < count; j++, face += 3) {
            hi = face[1];
            p0 = base + (hi & 0xFFFF);
            p1 = base + (hi >> 16);
            hi = face[2];
            p2 = base + (hi & 0xFFFF);
            hi = hi >> 16;
            gte_ldv3(p0, p1, p2);
            gte_rtpt();
            gte_stflg(&flag);
            if (flag & 0x7F85E000) continue;
            gte_nclip();
            type = hi & 7;
            p3 = base + (hi & 0xFFF8);
            gte_stopz(&z);
            if (z <= 0) continue;
            switch (type) {
            case 6:
            case 7: {
                gte_stsxy3c(sxy);
                gte_stsz3(&sz0, &sz1, &sz2);
                {
                    s16 pa, pb, pc;
                    pa = AF(sxy, s16, 0);
                    pb = AF(sxy, s16, 4);
                    if (pa > pb) {
                        tmx = pa;
                        tmn = pb;
                    } else {
                        tmn = pa;
                        tmx = pb;
                    }
                    pc = AF(sxy, s16, 8);
                    if (pc > tmx) tmx = pc;
                    else if (pc < tmn) tmn = pc;
                }
                if (tmx < -0xA0 || tmn > 0xA0) break;
                {
                    s16 pa, pb, pc;
                    pa = AF(sxy, s16, 2);
                    pb = AF(sxy, s16, 6);
                    if (pa > pb) {
                        umx = pa;
                        umn = pb;
                    } else {
                        do { umn = pa; } while (0); /* MATCH-TRICK: raises umn above umx in global-alloc (umn a2, umx a3) */
                        umx = pb;
                    }
                    pc = AF(sxy, s16, 10);
                    if (pc > umx) umx = pc;
                    else if (pc < umn) umn = pc;
                }
                if (umx < -0x6E || umn > 0x6E) break;
                if (sz0 > sz1) {
                    zm = sz0;
                    if (zm < sz2) zm = sz2;
                } else {
                    zm = sz1;
                    if (zm < sz2) zm = sz2;
                }
                z = zm;
                in1 = in2 = in3 = 0;
                q0 = AF(p0, u32, 0);
                qw = AF(p0, u32, 4);
                vx0 = q0;
                vy0 = q0 >> 16;
                vz0 = qw;
                if (x0_1 < vx0 && vx0 < x1_1 && y0_1 < vy0 && vy0 < y1_1 && z0_1 < vz0 && vz0 < z1_1) in1 = 1;
                if (x0_2 < vx0 && vx0 < x1_2 && y0_2 < vy0 && vy0 < y1_2 && z0_2 < vz0 && vz0 < z1_2) in2 = 1;
                if (x0_3 < vx0 && vx0 < x1_3 && y0_3 < vy0 && vy0 < y1_3 && z0_3 < vz0 && vz0 < z1_3) in3 = 1;
                q0 = AF(p1, u32, 0);
                qw = AF(p1, u32, 4);
                vx1 = q0;
                vy1 = q0 >> 16;
                vz1 = qw;
                if (x0_1 < vx1 && vx1 < x1_1 && y0_1 < vy1 && vy1 < y1_1 && z0_1 < vz1 && vz1 < z1_1) in1 = 1;
                if (x0_2 < vx1 && vx1 < x1_2 && y0_2 < vy1 && vy1 < y1_2 && z0_2 < vz1 && vz1 < z1_2) in2 = 1;
                if (x0_3 < vx1 && vx1 < x1_3 && y0_3 < vy1 && vy1 < y1_3 && z0_3 < vz1 && vz1 < z1_3) in3 = 1;
                q0 = AF(p2, u32, 0);
                qw = AF(p2, u32, 4);
                vx2 = q0;
                vy2 = q0 >> 16;
                vz2 = qw;
                if (x0_1 < vx2 && vx2 < x1_1 && y0_1 < vy2 && vy2 < y1_1 && z0_1 < vz2 && vz2 < z1_1) in1 = 1;
                if (x0_2 < vx2 && vx2 < x1_2 && y0_2 < vy2 && vy2 < y1_2 && z0_2 < vz2 && vz2 < z1_2) in2 = 1;
                if (x0_3 < vx2 && vx2 < x1_3 && y0_3 < vy2 && vy2 < y1_3 && z0_3 < vz2 && vz2 < z1_3) in3 = 1;
                if (in1 | in2 | in3) {
                    a = 0;
                    if (in1) {
                        d = vx0 - cx1;
                        if (d < 0) d = cx1 - vx0;
                        if (d < r1) {
                            if (d < q1) a = 0x80;
                            else a = r1 - d;
                        }
                        d = vz0 - cz1;
                        if (d < 0) d = cz1 - vz0;
                        if (r1 < d) a = 0;
                        else if (q1 < d) a = (a * (r1 - d)) >> 7;
                        d = vy0 - cy1;
                        if (d < 0) d = cy1 - vy0;
                        if (r1 < d) a = 0;
                        else if (q1 < d) a = (a * (r1 - d)) >> 7;
                    }
                    b = 0;
                    if (in2) {
                        d = vx0 - cx2;
                        if (d < 0) d = cx2 - vx0;
                        if (d < r2) {
                            if (d < q2) b = 0x80;
                            else b = r2 - d;
                        }
                        d = vz0 - cz2;
                        if (d < 0) d = cz2 - vz0;
                        if (r2 < d) b = 0;
                        else if (q2 < d) b = (b * (r2 - d)) >> 7;
                        d = vy0 - cy2;
                        if (d < 0) d = cy2 - vy0;
                        if (r2 < d) b = 0;
                        else if (q2 < d) b = (b * (r2 - d)) >> 7;
                    }
                    c = 0;
                    if (in3) {
                        d = vx0 - cx3;
                        if (d < 0) d = cx3 - vx0;
                        if (d < r3) {
                            if (d < q3) c = 0x80;
                            else c = r3 - d;
                        }
                        d = vz0 - cz3;
                        if (d < 0) d = cz3 - vz0;
                        if (r3 < d) c = 0;
                        else if (q3 < d) c = (c * (r3 - d)) >> 7;
                        d = vy0 - cy3;
                        if (d < 0) d = cy3 - vy0;
                        if (r3 < d) c = 0;
                        else if (q3 < d) c = (c * (r3 - d)) >> 7;
                    }
                    c0 = a + b + c;
                    if (c0 > 0x80) c0 = 0x80;
                    a = 0;
                    if (in1) {
                        d = vx1 - cx1;
                        if (d < 0) d = cx1 - vx1;
                        if (d < r1) {
                            if (d < q1) a = 0x80;
                            else a = r1 - d;
                        }
                        d = vz1 - cz1;
                        if (d < 0) d = cz1 - vz1;
                        if (r1 < d) a = 0;
                        else if (q1 < d) a = (a * (r1 - d)) >> 7;
                        d = vy1 - cy1;
                        if (d < 0) d = cy1 - vy1;
                        if (r1 < d) a = 0;
                        else if (q1 < d) a = (a * (r1 - d)) >> 7;
                    }
                    b = 0;
                    if (in2) {
                        d = vx1 - cx2;
                        if (d < 0) d = cx2 - vx1;
                        if (d < r2) {
                            if (d < q2) b = 0x80;
                            else b = r2 - d;
                        }
                        d = vz1 - cz2;
                        if (d < 0) d = cz2 - vz1;
                        if (r2 < d) b = 0;
                        else if (q2 < d) b = (b * (r2 - d)) >> 7;
                        d = vy1 - cy2;
                        if (d < 0) d = cy2 - vy1;
                        if (r2 < d) b = 0;
                        else if (q2 < d) b = (b * (r2 - d)) >> 7;
                    }
                    c = 0;
                    if (in3) {
                        d = vx1 - cx3;
                        if (d < 0) d = cx3 - vx1;
                        if (d < r3) {
                            if (d < q3) c = 0x80;
                            else c = r3 - d;
                        }
                        d = vz1 - cz3;
                        if (d < 0) d = cz3 - vz1;
                        if (r3 < d) c = 0;
                        else if (q3 < d) c = (c * (r3 - d)) >> 7;
                        d = vy1 - cy3;
                        if (d < 0) d = cy3 - vy1;
                        if (r3 < d) c = 0;
                        else if (q3 < d) c = (c * (r3 - d)) >> 7;
                    }
                    c1 = a + b + c;
                    if (c1 > 0x80) c1 = 0x80;
                    a = 0;
                    if (in1) {
                        d = vx2 - cx1;
                        if (d < 0) d = cx1 - vx2;
                        if (d < r1) {
                            if (d < q1) a = 0x80;
                            else a = r1 - d;
                        }
                        d = vz2 - cz1;
                        if (d < 0) d = cz1 - vz2;
                        if (r1 < d) a = 0;
                        else if (q1 < d) a = (a * (r1 - d)) >> 7;
                        d = vy2 - cy1;
                        if (d < 0) d = cy1 - vy2;
                        if (r1 < d) a = 0;
                        else if (q1 < d) a = (a * (r1 - d)) >> 7;
                    }
                    b = 0;
                    if (in2) {
                        d = vx2 - cx2;
                        if (d < 0) d = cx2 - vx2;
                        if (d < r2) {
                            if (d < q2) b = 0x80;
                            else b = r2 - d;
                        }
                        d = vz2 - cz2;
                        if (d < 0) d = cz2 - vz2;
                        if (r2 < d) b = 0;
                        else if (q2 < d) b = (b * (r2 - d)) >> 7;
                        d = vy2 - cy2;
                        if (d < 0) d = cy2 - vy2;
                        if (r2 < d) b = 0;
                        else if (q2 < d) b = (b * (r2 - d)) >> 7;
                    }
                    c = 0;
                    if (in3) {
                        d = vx2 - cx3;
                        if (d < 0) d = cx3 - vx2;
                        if (d < r3) {
                            if (d < q3) c = 0x80;
                            else c = r3 - d;
                        }
                        d = vz2 - cz3;
                        if (d < 0) d = cz3 - vz2;
                        if (r3 < d) c = 0;
                        else if (q3 < d) c = (c * (r3 - d)) >> 7;
                        d = vy2 - cy3;
                        if (d < 0) d = cy3 - vy2;
                        if (r3 < d) c = 0;
                        else if (q3 < d) c = (c * (r3 - d)) >> 7;
                    }
                    c2 = a + b + c;
                    if (c2 > 0x80) c2 = 0x80;
                    AF(pkt, s32, 0x08) = sxy[0];
                    AF(pkt, s32, 0x14) = sxy[1];
                    AF(pkt, s32, 0x20) = sxy[2];
                    tex = (u32 *)face[0];
                    code = 0x34000000;
                    cw = code | c0 | (c0 << 8) | (c0 << 16);
                    AF(pkt, u32, 0x04) = cw;
                    cw = code | c1 | (c1 << 8) | (c1 << 16);
                    AF(pkt, u32, 0x10) = cw;
                    cw = code | c2 | (c2 << 8) | (c2 << 16);
                    AF(pkt, u32, 0x1C) = cw;
                    AF(pkt, u32, 0x0C) = tex[1];
                    AF(pkt, u32, 0x18) = tex[2];
                    AF(pkt, u16, 0x24) = tex[3];
                    {
                        u32 *o;
                        o = (u32 *)(((z >> 2) << 2) + (u32)ot);
                        *(u32 *)pkt = (*o & 0xFFFFFF) | ((9) << 24);
                        *o = (*o & 0xFF000000) | ((u32)pkt & 0xFFFFFF);
                    }
                    pkt += 0x28;
                } else {
                    AF(pkt, s32, 0x08) = sxy[0];
                    AF(pkt, s32, 0x10) = sxy[1];
                    AF(pkt, s32, 0x18) = sxy[2];
                    tex = (u32 *)face[0];
                    code = tex[0] & 0xFF000000;
                    AF(pkt, u32, 0x04) = code;
                    AF(pkt, u32, 0x0C) = tex[1];
                    AF(pkt, u32, 0x14) = tex[2];
                    AF(pkt, u16, 0x1C) = tex[3];
                    {
                        u32 *o;
                        o = (u32 *)(((z >> 2) << 2) + (u32)ot);
                        *(u32 *)pkt = (*o & 0xFFFFFF) | ((7) << 24);
                        *o = (*o & 0xFF000000) | ((u32)pkt & 0xFFFFFF);
                    }
                    pkt += 0x20;
                }
                break;
            }
            case 2:
            case 3: {
                gte_stsxy3c(sxy);
                gte_ldv0(p3);
                gte_rtps();
                {
                    s16 pa, pb, pc;
                    pa = AF(sxy, s16, 0);
                    pb = AF(sxy, s16, 4);
                    if (pa > pb) {
                        tmx = pa;
                        tmn = pb;
                    } else {
                        tmn = pa;
                        tmx = pb;
                    }
                    pc = AF(sxy, s16, 8);
                    if (pc > tmx) tmx = pc;
                    else if (pc < tmn) tmn = pc;
                }
                {
                    s16 pa, pb, pc;
                    pa = AF(sxy, s16, 2);
                    pb = AF(sxy, s16, 6);
                    if (pa > pb) {
                        umx = pa;
                        umn = pb;
                    } else {
                        umn = pa;
                        umx = pb;
                    }
                    pc = AF(sxy, s16, 10);
                    if (pc > umx) umx = pc;
                    else if (pc < umn) umn = pc;
                }
                gte_stflg(&flag);
                if (flag & 0x7F85E000) break;
                gte_stsz4(&sz0, &sz1, &sz2, &sz3);
                gte_stsxy(pkt + 0x20);
                {
                    s16 pd;
                    pd = AF(pkt, s16, 0x20);
                    if (pd < tmn) tmn = pd;
                    else if (tmx < pd) tmx = pd;
                }
                if (tmx < -0xA0 || tmn > 0xA0) break;
                {
                    s16 pd;
                    pd = AF(pkt, s16, 0x22);
                    if (pd < umn) umn = pd;
                    else if (umx < pd) umx = pd;
                }
                if (umx < -0x6E || umn > 0x6E) break;
                {
                s32 za, zc;
                zc = sz2;
                if (zc < sz3) zc = sz3;
                za = sz0;
                if (za < sz1) za = sz1;
                if (za < zc) za = zc;
                z = za;
                }
                in1 = in2 = in3 = 0;
                q0 = AF(p0, u32, 0);
                qw = AF(p0, u32, 4);
                vx0 = q0;
                vy0 = q0 >> 16;
                vz0 = qw;
                if (x0_1 < vx0 && vx0 < x1_1 && y0_1 < vy0 && vy0 < y1_1 && z0_1 < vz0 && vz0 < z1_1) in1 = 1;
                if (x0_2 < vx0 && vx0 < x1_2 && y0_2 < vy0 && vy0 < y1_2 && z0_2 < vz0 && vz0 < z1_2) in2 = 1;
                if (x0_3 < vx0 && vx0 < x1_3 && y0_3 < vy0 && vy0 < y1_3 && z0_3 < vz0 && vz0 < z1_3) in3 = 1;
                q0 = AF(p1, u32, 0);
                qw = AF(p1, u32, 4);
                vx1 = q0;
                vy1 = q0 >> 16;
                vz1 = qw;
                if (x0_1 < vx1 && vx1 < x1_1 && y0_1 < vy1 && vy1 < y1_1 && z0_1 < vz1 && vz1 < z1_1) in1 = 1;
                if (x0_2 < vx1 && vx1 < x1_2 && y0_2 < vy1 && vy1 < y1_2 && z0_2 < vz1 && vz1 < z1_2) in2 = 1;
                if (x0_3 < vx1 && vx1 < x1_3 && y0_3 < vy1 && vy1 < y1_3 && z0_3 < vz1 && vz1 < z1_3) in3 = 1;
                q0 = AF(p2, u32, 0);
                qw = AF(p2, u32, 4);
                vx2 = q0;
                vy2 = q0 >> 16;
                vz2 = qw;
                if (x0_1 < vx2 && vx2 < x1_1 && y0_1 < vy2 && vy2 < y1_1 && z0_1 < vz2 && vz2 < z1_1) in1 = 1;
                if (x0_2 < vx2 && vx2 < x1_2 && y0_2 < vy2 && vy2 < y1_2 && z0_2 < vz2 && vz2 < z1_2) in2 = 1;
                if (x0_3 < vx2 && vx2 < x1_3 && y0_3 < vy2 && vy2 < y1_3 && z0_3 < vz2 && vz2 < z1_3) in3 = 1;
                q0 = AF(p3, u32, 0);
                qw = AF(p3, u32, 4);
                vx3 = q0;
                vy3 = q0 >> 16;
                vz3 = qw;
                if (x0_1 < vx3 && vx3 < x1_1 && y0_1 < vy3 && vy3 < y1_1 && z0_1 < vz3 && vz3 < z1_1) in1 = 1;
                if (x0_2 < vx3 && vx3 < x1_2 && y0_2 < vy3 && vy3 < y1_2 && z0_2 < vz3 && vz3 < z1_2) in2 = 1;
                if (x0_3 < vx3 && vx3 < x1_3 && y0_3 < vy3 && vy3 < y1_3 && z0_3 < vz3 && vz3 < z1_3) in3 = 1;
                if (in1 | in2 | in3) {
                    a = 0;
                    if (in1) {
                        d = vx0 - cx1;
                        if (d < 0) d = cx1 - vx0;
                        if (d < r1) {
                            if (d < q1) a = 0x80;
                            else a = r1 - d;
                        }
                        d = vz0 - cz1;
                        if (d < 0) d = cz1 - vz0;
                        if (r1 < d) a = 0;
                        else if (q1 < d) a = (a * (r1 - d)) >> 7;
                        d = vy0 - cy1;
                        if (d < 0) d = cy1 - vy0;
                        if (r1 < d) a = 0;
                        else if (q1 < d) a = (a * (r1 - d)) >> 7;
                    }
                    b = 0;
                    if (in2) {
                        d = vx0 - cx2;
                        if (d < 0) d = cx2 - vx0;
                        if (d < r2) {
                            if (d < q2) b = 0x80;
                            else b = r2 - d;
                        }
                        d = vz0 - cz2;
                        if (d < 0) d = cz2 - vz0;
                        if (r2 < d) b = 0;
                        else if (q2 < d) b = (b * (r2 - d)) >> 7;
                        d = vy0 - cy2;
                        if (d < 0) d = cy2 - vy0;
                        if (r2 < d) b = 0;
                        else if (q2 < d) b = (b * (r2 - d)) >> 7;
                    }
                    c = 0;
                    if (in3) {
                        d = vx0 - cx3;
                        if (d < 0) d = cx3 - vx0;
                        if (d < r3) {
                            if (d < q3) c = 0x80;
                            else c = r3 - d;
                        }
                        d = vz0 - cz3;
                        if (d < 0) d = cz3 - vz0;
                        if (r3 < d) c = 0;
                        else if (q3 < d) c = (c * (r3 - d)) >> 7;
                        d = vy0 - cy3;
                        if (d < 0) d = cy3 - vy0;
                        if (r3 < d) c = 0;
                        else if (q3 < d) c = (c * (r3 - d)) >> 7;
                    }
                    c0 = a + b + c;
                    if (c0 > 0x80) c0 = 0x80;
                    a = 0;
                    if (in1) {
                        d = vx1 - cx1;
                        if (d < 0) d = cx1 - vx1;
                        if (d < r1) {
                            if (d < q1) a = 0x80;
                            else a = r1 - d;
                        }
                        d = vz1 - cz1;
                        if (d < 0) d = cz1 - vz1;
                        if (r1 < d) a = 0;
                        else if (q1 < d) a = (a * (r1 - d)) >> 7;
                        d = vy1 - cy1;
                        if (d < 0) d = cy1 - vy1;
                        if (r1 < d) a = 0;
                        else if (q1 < d) a = (a * (r1 - d)) >> 7;
                    }
                    b = 0;
                    if (in2) {
                        d = vx1 - cx2;
                        if (d < 0) d = cx2 - vx1;
                        if (d < r2) {
                            if (d < q2) b = 0x80;
                            else b = r2 - d;
                        }
                        d = vz1 - cz2;
                        if (d < 0) d = cz2 - vz1;
                        if (r2 < d) b = 0;
                        else if (q2 < d) b = (b * (r2 - d)) >> 7;
                        d = vy1 - cy2;
                        if (d < 0) d = cy2 - vy1;
                        if (r2 < d) b = 0;
                        else if (q2 < d) b = (b * (r2 - d)) >> 7;
                    }
                    c = 0;
                    if (in3) {
                        d = vx1 - cx3;
                        if (d < 0) d = cx3 - vx1;
                        if (d < r3) {
                            if (d < q3) c = 0x80;
                            else c = r3 - d;
                        }
                        d = vz1 - cz3;
                        if (d < 0) d = cz3 - vz1;
                        if (r3 < d) c = 0;
                        else if (q3 < d) c = (c * (r3 - d)) >> 7;
                        d = vy1 - cy3;
                        if (d < 0) d = cy3 - vy1;
                        if (r3 < d) c = 0;
                        else if (q3 < d) c = (c * (r3 - d)) >> 7;
                    }
                    c1 = a + b + c;
                    if (c1 > 0x80) c1 = 0x80;
                    a = 0;
                    if (in1) {
                        d = vx2 - cx1;
                        if (d < 0) d = cx1 - vx2;
                        if (d < r1) {
                            if (d < q1) a = 0x80;
                            else a = r1 - d;
                        }
                        d = vz2 - cz1;
                        if (d < 0) d = cz1 - vz2;
                        if (r1 < d) a = 0;
                        else if (q1 < d) a = (a * (r1 - d)) >> 7;
                        d = vy2 - cy1;
                        if (d < 0) d = cy1 - vy2;
                        if (r1 < d) a = 0;
                        else if (q1 < d) a = (a * (r1 - d)) >> 7;
                    }
                    b = 0;
                    if (in2) {
                        d = vx2 - cx2;
                        if (d < 0) d = cx2 - vx2;
                        if (d < r2) {
                            if (d < q2) b = 0x80;
                            else b = r2 - d;
                        }
                        d = vz2 - cz2;
                        if (d < 0) d = cz2 - vz2;
                        if (r2 < d) b = 0;
                        else if (q2 < d) b = (b * (r2 - d)) >> 7;
                        d = vy2 - cy2;
                        if (d < 0) d = cy2 - vy2;
                        if (r2 < d) b = 0;
                        else if (q2 < d) b = (b * (r2 - d)) >> 7;
                    }
                    c = 0;
                    if (in3) {
                        d = vx2 - cx3;
                        if (d < 0) d = cx3 - vx2;
                        if (d < r3) {
                            if (d < q3) c = 0x80;
                            else c = r3 - d;
                        }
                        d = vz2 - cz3;
                        if (d < 0) d = cz3 - vz2;
                        if (r3 < d) c = 0;
                        else if (q3 < d) c = (c * (r3 - d)) >> 7;
                        d = vy2 - cy3;
                        if (d < 0) d = cy3 - vy2;
                        if (r3 < d) c = 0;
                        else if (q3 < d) c = (c * (r3 - d)) >> 7;
                    }
                    c2 = a + b + c;
                    if (c2 > 0x80) c2 = 0x80;
                    a = 0;
                    if (in1) {
                        d = vx3 - cx1;
                        if (d < 0) d = cx1 - vx3;
                        if (d < r1) {
                            if (d < q1) a = 0x80;
                            else a = r1 - d;
                        }
                        d = vz3 - cz1;
                        if (d < 0) d = cz1 - vz3;
                        if (r1 < d) a = 0;
                        else if (q1 < d) a = (a * (r1 - d)) >> 7;
                        d = vy3 - cy1;
                        if (d < 0) d = cy1 - vy3;
                        if (r1 < d) a = 0;
                        else if (q1 < d) a = (a * (r1 - d)) >> 7;
                    }
                    b = 0;
                    if (in2) {
                        d = vx3 - cx2;
                        if (d < 0) d = cx2 - vx3;
                        if (d < r2) {
                            if (d < q2) b = 0x80;
                            else b = r2 - d;
                        }
                        d = vz3 - cz2;
                        if (d < 0) d = cz2 - vz3;
                        if (r2 < d) b = 0;
                        else if (q2 < d) b = (b * (r2 - d)) >> 7;
                        d = vy3 - cy2;
                        if (d < 0) d = cy2 - vy3;
                        if (r2 < d) b = 0;
                        else if (q2 < d) b = (b * (r2 - d)) >> 7;
                    }
                    c = 0;
                    if (in3) {
                        d = vx3 - cx3;
                        if (d < 0) d = cx3 - vx3;
                        if (d < r3) {
                            if (d < q3) c = 0x80;
                            else c = r3 - d;
                        }
                        d = vz3 - cz3;
                        if (d < 0) d = cz3 - vz3;
                        if (r3 < d) c = 0;
                        else if (q3 < d) c = (c * (r3 - d)) >> 7;
                        d = vy3 - cy3;
                        if (d < 0) d = cy3 - vy3;
                        if (r3 < d) c = 0;
                        else if (q3 < d) c = (c * (r3 - d)) >> 7;
                    }
                    c3 = a + b + c;
                    if (c3 > 0x80) c3 = 0x80;
                    AF(pkt, s32, 0x08) = sxy[0];
                    AF(pkt, s32, 0x14) = sxy[1];
                    AF(pkt, s32, 0x20) = sxy[2];
                    gte_stsxy(pkt + 0x2C);
                    tex = (u32 *)face[0];
                    code = 0x3C000000;
                    cw = code | c0 | (c0 << 8) | (c0 << 16);
                    AF(pkt, u32, 0x04) = cw;
                    cw = code | c1 | (c1 << 8) | (c1 << 16);
                    AF(pkt, u32, 0x10) = cw;
                    cw = code | c2 | (c2 << 8) | (c2 << 16);
                    AF(pkt, u32, 0x1C) = cw;
                    cw = code | c3 | (c3 << 8) | (c3 << 16);
                    AF(pkt, u32, 0x28) = cw;
                    AF(pkt, u32, 0x0C) = tex[1];
                    AF(pkt, u32, 0x18) = tex[2];
                    q0 = tex[3];
                    AF(pkt, u16, 0x24) = q0;
                    AF(pkt, u16, 0x30) = q0 >> 16;
                    {
                        u32 *o;
                        o = (u32 *)(((z >> 2) << 2) + (u32)ot);
                        *(u32 *)pkt = (*o & 0xFFFFFF) | ((12) << 24);
                        *o = (*o & 0xFF000000) | ((u32)pkt & 0xFFFFFF);
                    }
                    pkt += 0x34;
                } else {
                    AF(pkt, s32, 0x08) = sxy[0];
                    AF(pkt, s32, 0x10) = sxy[1];
                    AF(pkt, s32, 0x18) = sxy[2];
                    tex = (u32 *)face[0];
                    code = tex[0] & 0xFF000000;
                    AF(pkt, u32, 0x04) = code;
                    AF(pkt, u32, 0x0C) = tex[1];
                    AF(pkt, u32, 0x14) = tex[2];
                    q0 = tex[3];
                    AF(pkt, u16, 0x1C) = q0;
                    AF(pkt, u16, 0x24) = q0 >> 16;
                    {
                        u32 *o;
                        o = (u32 *)(((z >> 2) << 2) + (u32)ot);
                        *(u32 *)pkt = (*o & 0xFFFFFF) | ((9) << 24);
                        *o = (*o & 0xFF000000) | ((u32)pkt & 0xFFFFFF);
                    }
                    pkt += 0x28;
                }
                break;
            }
            }
        }
    }
    D_800A5E60 = pkt;
}

void func_sc03_104_80180D88(void) {
    D_801274C8 = &D_sc03_104_8018EA00;
    D_801274CC = &D_sc03_104_8018EB7C;
    func_sc03_104_80181774(0);
}

void func_sc03_104_80180DC8(void) {
    D_801274C8 = &D_sc03_104_8018EB90;
    D_801274CC = &D_sc03_104_8018EC1C;
    func_sc03_104_80181774(1);
    D_8012704C = 1;
}

void func_sc03_104_80180E14(u8 *arg0) {
    D_sc03_104_8018E7A4[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_104_80180E50(u8 *arg0) {
    func_sc03_104_80181188();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_104_80180E94(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc03_104_80180EB8(u8 *arg0) {
    D_sc03_104_8018E7AC[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_104_80180EF4(u8 *arg0) {
    func_sc03_104_801811B0();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_104_80180F34(u8 *arg0) {
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

void func_sc03_104_80180FB0(void) {
    func_800D1EBC();
}

void func_sc03_104_80180FD0(u8 *arg0) {
    D_sc03_104_8018E7B8[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_104_8018100C(u8 *arg0) {
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

void func_sc03_104_80181080(u8 *arg0) {
    D_sc03_104_8018E7C4[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_104_801810BC(u8 *arg0) {
    func_sc03_104_801812B0();
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_104_801810F8(void) {
    return 0;
}

s32 func_sc03_104_80181100(u8 *arg0) {
    func_8002D4C8(0x1C, 0);
    func_8001BFD0();
    func_8002D4C8(0x1D, 0);
    func_800D0C48(1);
    func_800D1E28();
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

void func_sc03_104_80181168(void) {
    func_800D1EBC();
}

void func_sc03_104_80181188(void) {
    func_8016EE40((s32) &D_sc03_104_8018E7D4, 0x01000000);
}

void func_sc03_104_801811B0(void) {
    func_8016EE40((s32) &D_sc03_104_8018E7D8, 0x01000000);
}

void func_sc03_104_801811D8(u8 *arg0) {
    D_sc03_104_8018E7E4[AF(arg0, u8, 0x216)]();
}

void func_sc03_104_80181214(s32 arg0) {
    func_80171990();
    func_80146994(0x19, arg0, 0x06920693, 0);
    func_sc03_104_8018125C(arg0);
}

s32 func_sc03_104_8018125C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_v0;

    var_v0 = func_8014C050(arg0, 0x19);
    if (var_v0 == 0) {
        D_800AE6BD += 1;
        var_v0 = func_80171928(arg0);
    }
    return var_v0;
}

void func_sc03_104_801812B0(void) {
    func_8016EE40((s32) &D_sc03_104_8018E7DC, 0x01000000);
}

void func_sc03_104_801812D8(void) {
    D_80126954 = 0x1F4;
    D_8012695C = 0x4B0;
    D_80126968 = 0x2AA;
    D_8012696A = 0;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc03_104_80181404, 0);
    func_8012A094((s32) &D_80126948);
    func_sc03_104_80181404((s32) &D_80126948);
}

void func_sc03_104_8018136C(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x3E8;
    D_80126968 = 0x35;
    D_8012696A = 0;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x73;
    D_8012697A = 0;
    func_8012A018((s32) func_sc03_104_80181404, 1);
    func_8012A094((s32) &D_80126948);
    func_sc03_104_80181404((s32) &D_80126948);
}

void func_sc03_104_80181404(s32 arg0) {
    D_sc03_104_8018E7EC[AF(arg0, u8, 4)]();
}

void func_sc03_104_80181440(u8 *o) {
    struct_8_4 v;
    s16 lim;

    if (func_80148800(&D_80126B58) & 3) {
        AF(o, u8, 5) = (AF(o, u8, 5) + 1) & 1;
        AF(o, s32, 0x14) = D_sc03_104_8018E7F4[AF(o, u8, 5)];
    }
    v = D_80126940;
    lim = -0x40;
    if (v.field_0 < lim) {
        v.field_0 = lim;
    }
    lim = 0x40;
    if (v.field_0 > lim) {
        v.field_0 = lim;
    }
    lim = 0x4A0;
    if (v.field_4 > lim) {
        v.field_4 = lim;
    }
    func_sc03_104_801815DC(o, &v);
}

void func_sc03_104_80181528(u8 *o) {
    struct_8_4 v;

    if (func_80148800(&D_80126B58) & 3) {
        AF(o, u8, 5) = (AF(o, u8, 5) + 1) & 1;
        AF(o, s32, 0x14) = D_sc03_104_8018E7F8[AF(o, u8, 5)];
    }
    v = D_80126940;
    v.field_0 = 0;
    v.field_2 = -0x82;
    v.field_4 = -0x5A0;
    func_sc03_104_801815DC(o, &v);
}

void func_sc03_104_801815DC(u8 *arg0, u8 *arg1) {
    struct_20_6 m;
    struct_8_10 v;
    struct_8_10 o;

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

s32 func_sc03_104_80181774(s32 arg0) {
    return func_8013B7F4(D_sc03_104_8018E7FC[arg0], 0);
}

s32 func_sc03_104_801817A4(void) {
    if (D_8012704C == 0) {
        return 0x3E;
    }
    return 0x47;
}

void func_sc03_104_801817C4(u8 *arg0) {
    D_sc03_104_80199DC0[AF(arg0, u16, 2)]();
}

void func_sc03_104_80181800(u8 *arg0) {
    s32 var_s0;

    var_s0 = 0;
    do {
        func_8013B7AC(var_s0);
        var_s0 += 1;
    } while (var_s0 < 3);
    AF(arg0, s32, 0xCC) = 0;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_104_80181858(u8 *p) {
    u8 *a;
    u8 *b;
    u8 *o;
    s32 i;
    s32 found;
    s32 da;
    s32 db;
    s32 d;
    u8 unused[8];

    a = 0;
    b = 0;
    found = 0;
    if (AF(p, u8 *, 0xCC) != 0) {
        func_sc03_104_80181AD0(AF(p, u8 *, 0xCC) + 4, 0);
    } else {
        func_8013B7AC(0);
    }
    for (o = (u8 *) &D_801202A0, i = 0; i < 0x60; i++, o += 0x10C) {
        if (func_sc03_104_80181A2C(o) == 1) {
            da = func_8012BD14(o);
            a = o;
            found = 1;
            break;
        }
    }
    if (found == 0) {
        func_8013B7AC(1);
        func_8013B7AC(2);
        return;
    }
    found = 0;
    for (; i < 0x60; i++, o += 0x10C) {
        if (func_sc03_104_80181A2C(o) == 1) {
            db = func_8012BD14(o);
            b = o;
            found = 1;
            break;
        }
    }
    if (found == 0) {
        func_sc03_104_80181A84(a, 1);
        func_8013B7AC(2);
        return;
    }
    for (; i < 0x60; i++, o += 0x10C) {
        if (func_sc03_104_80181A2C(o) == 1) {
            d = func_8012BD14(o);
            if (d < da) {
                b = a;
                a = o;
                db = da;
                da = d;
            } else if (d < db) {
                b = o;
                db = d;
            }
        }
    }
    func_sc03_104_80181A84(a, 1);
    func_sc03_104_80181A84(b, 2);
}

s32 func_sc03_104_80181A2C(u8 *o) {
    if (AF(o, u16, 0) == 0x1E8 || AF(o, u16, 0) == 0x19E ||
        (AF(o, u16, 0) == 0x178 && AF(AF(o, u8 *, 0x20), s32, 4) >= 0)) {
        return 1;
    }
    return AF(o, u16, 0) == 0x1AA;
}

s32 func_sc03_104_80181A84(s32 arg0, s32 arg1) {
    u16 temp_v1;

    temp_v1 = AF(arg0, s32, 0);
    if ((temp_v1 != 0x178) && (temp_v1 != 0x1E8)) {
        return func_sc03_104_80181AD0(arg0 + 4, arg1);
    }
    return func_sc03_104_80181B14(arg0 + 4, arg1, 0xC0);
}

s32 func_sc03_104_80181AD0(u16 *a, s32 b) {
    struct_6_2 p;

    p.field_0 = a[1];
    p.field_2 = a[3];
    p.field_4 = a[5];
    func_8013B598(b, &p);
}

s32 func_sc03_104_80181B14(u16 *a, s32 b, s32 n) {
    struct_6_2 p;

    p.field_0 = a[1];
    p.field_2 = a[3];
    p.field_4 = a[5];
    func_8013B6A0(b, &p, n);
}

void func_sc03_104_80181B58(void) {
}

void func_sc03_104_80181B60(u8 *arg0) {
    s32 temp_v0;

    D_sc03_104_80199E4C[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        temp_v0 = AF(arg0, s32, 0xE4) + 1;
        AF(arg0, s32, 0xE4) = temp_v0;
        if (!(temp_v0 & 0xF)) {
            func_sc03_104_8018282C((s32) arg0);
        }
    }
}

void func_sc03_104_80181BDC(u8 *arg0) {
    s32 r;

    if (func_8012C354(arg0, &D_sc03_104_80199DD8) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32, 0xB4) = -1;
        AF(arg0, s32 *, 0xBC) = (s32 *)&D_sc03_104_80199E1C;
        AF(arg0, s32, 0xC4) |= 1;
        r = rand();
        AF(arg0, s32, 0xE0) = -((r % 8 + 8) << 16);
        func_8012A828(arg0, &D_sc03_104_8019C84C);
        AF(arg0, s32, 0xCC) = func_8012C658(0x178, AF(arg0, s16, 0x70), arg0);
        if (AF(arg0, u16, 0x70) & 1) {
            AF(arg0, s16, 2) = 1;
        } else {
            AF(arg0, s16, 2) = 4;
        }
    }
}

void func_sc03_104_80181CA8(u8 *arg0) {
    s16 r;

    r = rand();
    AF(arg0, s16, 0x104) = AF(arg0, s16, 0xFC);
    func_8012B200(arg0);
    AF(arg0, s32, 0x1C) = rand() % 60 + 0x78;
    AF(arg0, s16, 0xFE) = r % 32 + 10;
    AF(arg0, s16, 2) = 2;
}

void func_sc03_104_80181D58(u8 *arg0) {
    s32 w;
    s32 t;
    s32 x;

    func_sc03_104_8018271C(&w, arg0, arg0 + 0x102);
    x = w;
    AF(AF(arg0, u8 *, 0x20), s16, 0x10) = x;
    t = func_8012B608(AF(AF(arg0, u8 *, 0x20), s16, 0x12), w >> 16, AF(arg0, s16, 0xFE));
    AF(AF(arg0, u8 *, 0x20), s16, 0x12) += t;
    func_8012B178(arg0, AF(arg0, s32, 0xE0));
    func_8012CBF4(arg0);
    if (func_8012BEE8(arg0) != 0 && func_sc03_104_80182898(arg0) != 1 && func_sc03_104_801827EC(arg0) == 1) {
        if (func_8012BE54(arg0) <= 0x8000) {
            AF(arg0, s16, 2) = 8;
            return;
        }
        AF(arg0, s32, 0x1C) = rand() % 60 + 0x78;
        AF(arg0, s16, 0xFE) = rand() % 32 + 0xA;
    }
}

void func_sc03_104_80181EA0(s32 arg0, s32 arg1) {
    func_8012CBF4(arg0, arg1);
    if (func_80013478(arg0 + 4, arg0 + 0x88) < 0x101) {
        AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
        AF(arg0, s16, 2) = 4;
    }
}

void func_sc03_104_80181EF4(s32 arg0) {
    if ((func_8012BE54(arg0) <= 0x40000) && (D_80126CBA == 0) && (func_sc03_104_80182898(arg0) == 0)) {
        AF(arg0, s16, 2) = 5;
    }
}

void func_sc03_104_80181F54(u8 *arg0) {
    s16 v[3];
    s32 w;
    s16 r;
    s32 x;

    func_8012B0B4(&w, AF(D_80126B78, s16, 0x12) + 0x800, (s16)(r % 128) + 0x100);
    v[0] = w;
    v[1] = -0x20;
    v[2] = w >> 16;
    func_sc03_104_8018271C(&w, arg0, v);
    x = w;
    AF(AF(arg0, u8 *, 0x20), s16, 0x10) = x;
    AF(AF(arg0, u8 *, 0x20), s16, 0x12) = w >> 16;
    func_8012B200(arg0);
    func_8012B2CC(arg0);
    func_8012B178(arg0, AF(arg0, s32, 0xE0) - 0x20000);
    AF(arg0, s16, 2) = 6;
    AF(arg0, s16, 0x34) = 0;
}

void func_sc03_104_80182038(u8 *p) {
    s16 v[8];
    union_4_2 w;
    union_4_2 *wp;
    union_4_2 x;
    s16 t;

    switch (AF(p, u16, 0x34)) {
    case 0:
        if (func_8012CBF4(p) != 0) {
            AF(p, s32, 0x1C) = 0x1E;
            AF(AF(p, u8 *, 0x20), s16, 0x10) = 0;
            AF(p, u16, 0x34)++;
            break;
        }
        t = AF(p, s16, 0x100);
        if (t < AF(p, s16, 0xA)) {
            AF(p, s16, 0xA) = t;
            AF(p, s32, 0x1C) = 0x1E;
            AF(AF(p, u8 *, 0x20), s16, 0x10) = 0;
            AF(p, u16, 0x34)++;
        }
        break;
    case 1:
        AF(AF(p, u8 *, 0x20), u16, 0x12) += func_8012B8E4(p, 6);
        if (func_8012BEE8(p) != 0) {
            AF(p, u16, 0x34)++;
            func_8012B200(p);
            AF(p, s32, 0x1C) = 0x20;
            func_8002D4C8(0x6FF, 0);
        }
        break;
    case 2:
        wp = &w;
        func_sc03_104_8018271C(wp, p, &D_sc03_104_80199E14);
        x = w;
        AF(AF(p, u8 *, 0x20), s16, 0x10) = x.m1.field_0;
        AF(AF(p, u8 *, 0x20), s16, 0x12) = x.m1.field_2;
        func_8012B178(p, AF(p, s32, 0xE0) - 0x80000);
        func_8012CBF4(p);
        if (func_sc03_104_801826F0(p) == 1 || func_8012BEE8(p) != 0) {
            AF(p, u16, 0x34)++;
            v[1] = AF(p, u16, 0x88);
            v[3] = AF(p, u16, 0x8A);
            v[5] = AF(p, u16, 0x8C);
            func_8012B77C(wp, p + 4, v);
            x = w;
            AF(AF(p, u8 *, 0x20), s16, 0x10) = x.m1.field_0;
            AF(AF(p, u8 *, 0x20), s16, 0x12) = x.m1.field_2;
            func_8012B2CC(p);
            func_8012B178(p, AF(p, s32, 0xE0) - 0x80000);
            AF(p, s32, 0x1C) = 0x80;
        }
        break;
    case 3:
        func_8012CBF4(p);
        if (func_8012BEE8(p) != 0 || AF(p, s16, 0xA) < AF(p, s16, 0x8A)) {
            AF(p, u16, 0xA) = AF(p, u16, 0x8A);
            AF(AF(p, u8 *, 0x20), s16, 0x10) = 0;
            AF(p, s32, 0x1C) = 0x3C;
            AF(p, u16, 0x34)++;
        }
        break;
    case 4:
        if (func_8012BEE8(p) != 0) {
            AF(p, s16, 2) = 4;
        }
        break;
    default:
        AF(p, s16, 2) = 4;
        break;
    }
}

void func_sc03_104_801822A0(u8 *p) {
    s16 v[8];
    union_4_2 w;
    union_4_2 *wp;
    union_4_2 x;
    s32 h;

    if (func_8012BEE8() != 0) {
        if (AF(p, u16, 0x70) & 1) {
            AF(p, s16, 2) = 1;
        } else {
            AF(p, s16, 2) = 3;
            wp = &w;
            func_8012B0B4(wp, rand() % 4096, 0x100);
            x = w;
            AF(p, u16, 6) += x.m1.field_0;
            AF(p, u16, 0xA) -= 0x100;
            AF(p, u16, 0xE) += x.m1.field_2;
            v[1] = AF(p, u16, 0x88);
            v[3] = AF(p, u16, 0x8A);
            v[5] = AF(p, u16, 0x8C);
            func_8012B77C(wp, p + 4, v);
            x = w;
            AF(AF(p, u8 *, 0x20), s16, 0x10) = x.m1.field_0;
            AF(AF(p, u8 *, 0x20), s16, 0x12) = x.m1.field_2;
            func_8012B2CC(p, x);
            func_8012B178(p, AF(p, s32, 0xE0));
        }
        AF(p, u16, 0x5C) = AF(AF(p, u8 *, 0x78), u16, 2);
        AF(p, u16, 0x76) = AF(AF(p, u8 *, 0x78), u16, 0);
        func_8012E88C(p);
        func_8012A828(p, &D_sc03_104_8019C84C);
        if (AF(p, u8 *, 0xCC) != 0) {
            AF(AF(p, u8 *, 0xCC), s16, 0xFC) = 0;
        }
    }
}

void func_sc03_104_801823F0(u8 *arg0) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0xCC);
    AF(arg0, s16, 2) = 9;
    AF(arg0, s32, 0x1C) = 0x20;
    AF(arg0, s16, 0x34) = 0;
    if (temp_v1 != NULL) {
        AF(temp_v1, s16, 0xFC) = 1;
    }
}

void func_sc03_104_8018241C(u8 *p) {
    s16 v[8];
    s32 pad[2];
    union_4_2 w;
    union_4_2 *wp;
    union_4_2 x;
    s16 r;

    if (AF(p, u16, 0x34) == 0) {
        if (func_8012BEE8() != 0) {
            r = rand();
            wp = &w;
            func_8012B0B4(wp, (s16) (r % 4096), (s16) (r % 128) + 0xC0);
            x = w;
            v[1] = x.m1.field_0;
            v[3] = AF(p, u16, 0xA) - 0x180;
            v[5] = x.m1.field_2;
            func_8012B77C(wp, p + 4, v);
            x = w;
            AF(AF(p, u8 *, 0x20), s16, 0x10) = x.m1.field_0;
            AF(AF(p, u8 *, 0x20), s16, 0x12) = x.m1.field_2;
            func_8012B200(p);
            func_8012B2CC(p);
            func_8012B178(p, AF(p, s32, 0xE0) - 0x20000);
            AF(p, u16, 0x34)++;
        }
    } else {
        func_8012CBF4(p);
        if (func_8012E778(p, 0xA000C8) == 0) {
            AF(p, s16, 2) = 0xA;
            AF(p, s32, 0x1C) = 0x80;
            func_8012E8A8(p);
        }
    }
}

void func_sc03_104_80182578(s32 arg0, s32 arg1) {
    void *temp_a0;

    if (func_8012BEE8(arg0, arg1) != 0) {
        AF(arg0, s16, 2) = 1;
        func_8012E88C(arg0);
        temp_a0 = AF(arg0, void *, 0xCC);
        if (temp_a0 != NULL) {
            AF(temp_a0, s16, 0xFC) = 0;
        }
    }
}

void func_sc03_104_801825C8(u8 *arg0) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0xCC);
    if (temp_v1 != NULL) {
        AF(temp_v1, s16, 0xFC) = 1;
    }
}

void func_sc03_104_801825E4(s32 arg0) {
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;

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
        temp_v1_2 = AF(arg0, void *, 0x20);
        AF(temp_v1_2, u16, 0x2C) = (u16) (AF(temp_v1_2, u16, 0x2C) & 0xFFEF);
        temp_v1_3 = AF(arg0, void *, 0x20);
        AF(temp_v1_3, s16, 0x1C) = 0x1000;
        AF(temp_v1_3, s16, 0x1A) = 0x1000;
        AF(temp_v1_3, s16, 0x18) = 0x1000;
        func_8012B200(arg0);
        func_8012E8A8(arg0);
        AF(arg0, u16, 6) = (u16) AF(arg0, u16, 0x88);
        AF(arg0, u16, 0xA) = (u16) AF(arg0, u16, 0x8A);
        AF(arg0, u16, 0xE) = (u16) AF(arg0, u16, 0x8C);
        return;
    }
    func_8012C218(arg0);
}

void func_sc03_104_801826A0(u8 *arg0) {
    if (AF(arg0, u16, 0x70) & 1) {
        AF(arg0, s16, 2) = 1;
    } else {
        AF(arg0, s16, 2) = 4;
    }
    AF(arg0, u16, 0x5C) = AF(AF(arg0, u8 *, 0x78), u16, 2);
    func_8012A828((s32) arg0, (s32) &D_sc03_104_8019C84C);
}

s32 func_sc03_104_801826F0(s32 arg0) {
    return func_8012D5E4(arg0, (s32) &D_sc03_104_80199E78, (s32) (&D_sc03_104_80199E78 + 8), 5) != 0;
}

s32 *func_sc03_104_8018271C(s32 *ret, u8 *p, u16 *off) {
    s16 v[8];
    s32 r;
    u16 *b;
    s16 *g;

    g = &D_80126CBA;
    if (*g == 0 && func_sc03_104_80182898(p) == 0) {
        b = (u16 *)(g - 3);
        AF(p, s32, 0xDC) = 0;
    } else {
        b = (u16 *)(p + 0x88);
        AF(p, s32, 0xDC) = 1;
    }
    v[1] = b[0] + off[0];
    v[3] = b[1] + off[1];
    AF(p, s16, 0x100) = v[3];
    v[5] = b[2] + off[2];
    func_8012B77C(&r, p + 4, v);
    *ret = r;
    return ret;
}

s32 func_sc03_104_801827EC(u8 *arg0) {
    struct_8_6 v;

    v.field_0 = AF(arg0, u16, 0x6);
    v.field_2 = AF(arg0, u16, 0xA);
    v.field_4 = AF(arg0, u16, 0xE);
    return func_80134510(&v) != 0;
}

void func_sc03_104_8018282C(s32 arg0) {
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 0x7F;
    temp_v0 = func_8012BD14(arg0);
    if (temp_v0 >= 0x1001) {
        var_s0 = 0x7F - ((temp_v0 - 0x1000) / 9984);
    }
    func_8002D4C8(0x6FE, (var_s0 | 0x1000) & 0xFFFF);
}

s32 func_sc03_104_80182898(s32 arg0) {
    return D_80078EC1 == 0x15;
}

void func_sc03_104_801828B0(u8 *arg0) {
    D_sc03_104_80199EF8[AF(arg0, u16, 2)]();
}

void func_sc03_104_801828EC(u8 *arg0) {
    s32 o;
    s32 q;
    u8 *t;


    o = func_8012C1B8();
    AF(arg0, s32, 0x20) = o;
    if (o == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(o, &D_sc03_104_8019A384);
    q = func_8012C194();
    if (q != 0) {
        AF(arg0, s32, 0xCC) = q;
        func_8001CD9C(q, &D_sc03_104_80199E88);
        AF(q, s16, 0x18) = 0x800;
        AF(q, s16, 0x1A) = 0x800;
        AF(q, s32, 4) |= 0x50000000;
    }
    t = AF(arg0, u8 *, 0x20);
    AF(t, u16, 0x2C) |= 0x20;
    AF(AF(arg0, u8 *, 0x20), u8 *, 0x80) = &D_sc03_104_80199EC8;
    AF(arg0, u16, 0xFE) = AF(AF(arg0, u8 *, 0x64), u16, 0x36);
    AF(arg0, s16, 2) = 1;
}

void func_sc03_104_801829C4(u8 *p) {
    u16 sp10[4];
    u8 *o;

    o = AF(p, u8 *, 0x64);
    if (AF(p, s16, 0xFC) != 0) {
        AF(p, s16, 2) = 2;
        func_8012B23C(p);
        AF(p, s32, 0x1C) = 0x5A;
        return;
    }
    if (AF(p, s16, 0xFE) != AF(o, s16, 0x36)) {
        func_sc03_104_80182CB4(p);
        return;
    }
    func_8012F214(o, &D_sc03_104_80199F08, sp10);
    AF(p, u16, 6) = sp10[0];
    AF(p, u16, 0xA) = sp10[1];
    AF(p, u16, 0xE) = sp10[2];
    func_sc03_104_80182D18(p);
    AF(AF(p, u8 *, 0x20), s32, 0x20) = AF(AF(o, u8 *, 0x20), s32, 0x20);
    AF(AF(p, u8 *, 0x20), struct_8_9, 0x10) = AF(AF(o, u8 *, 0x20), struct_8_9, 0x10);
    AF(AF(p, u8 *, 0x20), struct_8_9, 0x18) = AF(AF(o, u8 *, 0x20), struct_8_9, 0x18);
    AF(AF(p, u8 *, 0x20), u16, 0x2C) = AF(AF(o, u8 *, 0x20), u16, 0x2C) | 0x20;
    AF(AF(p, u8 *, 0x20), s32, 4) = AF(AF(o, u8 *, 0x20), s32, 4);
}

void func_sc03_104_80182B08(u8 *arg0) {
    struct_8_9 sp10;
    s32 i;

    sp10 = *(struct_8_9 *)&D_sc03_104_801BED04;
    if (func_8012CC64(arg0, &sp10) & 0x2000) {
        AF(arg0, s16, 2) = 3;
        func_8012E8A8(arg0);
        func_sc03_104_8018302C(AF(arg0, s32, 0xCC));
        func_8012C588(0x1AA, arg0);
        for (i = 0; i < 8; i++) {
            func_8012C588(0x1B0, arg0);
        }
        func_8002D4C8(0x705, 0);
    } else if (func_8012BEE8(arg0) != 0) {
        AF(arg0, s16, 2) = 3;
        func_8012E8A8(arg0);
        func_sc03_104_8018302C(AF(arg0, s32, 0xCC));
    } else {
        func_sc03_104_80182CEC((s32) arg0);
        func_sc03_104_80182FCC(arg0);
    }
}

void func_sc03_104_80182C08(u8 *arg0) {
    if (AF(arg0, s16, 0xFE) != AF(AF(arg0, void *, 0x64), s16, 0x36)) {
        func_sc03_104_80182CB4((s32) arg0);
        return;
    }
    if (AF(arg0, s16, 0xFC) == 0) {
        AF(arg0, s16, 2) = 1;
        func_8012E88C((s32) arg0);
        func_sc03_104_8018300C(AF(arg0, s32, 0xCC));
        AF(arg0, s32, 4) = (s32) AF(AF(arg0, void *, 0x64), s32, 4);
        AF(arg0, s32, 8) = (s32) AF(AF(arg0, void *, 0x64), s32, 8);
        AF(arg0, s32, 0xC) = (s32) AF(AF(arg0, void *, 0x64), s32, 0xC);
        func_8012B2CC((s32) arg0);
        func_sc03_104_80182FCC((s32) arg0);
    }
}

void func_sc03_104_80182CB4(s32 arg0) {
    func_80016714(AF(arg0, s32, 0xCC), 0x38);
    func_8012C218(arg0);
}

s32 func_sc03_104_80182CEC(s32 arg0) {
    return func_8012D5E4(arg0, (s32) &D_sc03_104_80199F10, (s32) (&D_sc03_104_80199F10 + 8), 5);
}

void func_sc03_104_80182D18(u8 *p) {
    struct_8_9 o;
    struct_8_7 a;
    struct_20_4 m;
    struct_20_4 r;
    u8 *s;
    u32 w;
    struct_20_4 *g;
    u8 *q;
    u8 unused[8];

    if (AF(p, u8 *, 0xCC) == 0) {
        return;
    }
    s = (u8 *) (AF(AF(AF(p, u8 *, 0x64), u8 *, 0x20), u32, 0x20) & 0xFEFFFFFF);
    a.field_0 = AF(s, u16, 6);
    w = AF(s, u32, 0);
    a.field_2 = AF(s, u8, 1) | ((w & 0xF) << 8);
    a.field_4 = ((w >> 16) & 0xFF) | ((w & 0xF0) << 4);
    RotMatrixZYX(&a, &m);
    m.field_14[0] = AF(s, s8, 3);
    m.field_14[1] = AF(s, s8, 4);
    m.field_14[2] = AF(s, s8, 5);
    g = (struct_20_4 *) (AF(AF(p, u8 *, 0x64), u8 *, 0x20) + 0x34);
    gte_SetRotMatrix(g);
    gte_ldclmv(&m.field_0[0][0]);
    gte_rtir();
    gte_stclmv(&r.field_0[0][0]);
    gte_ldclmv(&m.field_0[0][1]);
    gte_rtir();
    gte_stclmv(&r.field_0[0][1]);
    gte_ldclmv(&m.field_0[0][2]);
    gte_rtir();
    gte_stclmv(&r.field_0[0][2]);
    g = (struct_20_4 *) (AF(AF(p, u8 *, 0x64), u8 *, 0x20) + 0x34);
    gte_SetTransMatrix(g);
    gte_ldlv0(m.field_14);
    gte_rtv0tr();
    gte_stlvnl(r.field_14);
    func_8012F14C(&r, &D_sc03_104_80199F20, &o);
    AF(AF(p, u8 *, 0xCC), struct_8_9, 8) = o;
    if (AF(AF(AF(p, u8 *, 0x64), u8 *, 0x20), struct_4_9, 4).field_3_b7) {
        AF(AF(p, u8 *, 0xCC), struct_4_9, 4).field_3_b7 = 1;
    } else {
        AF(AF(p, u8 *, 0xCC), struct_4_9, 4).field_3_b7 = 0;
    }

}

void func_sc03_104_80182FCC(s32 arg0) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0xCC);
    if (temp_v1 != NULL) {
        AF(temp_v1, u16, 8) = (u16) AF(arg0, u16, 6);
        AF(temp_v1, s16, 0xA) = (s16) (AF(arg0, u16, 0xA) - 0x19);
        AF(temp_v1, u16, 0xC) = (u16) AF(arg0, u16, 0xE);
    }
}

void func_sc03_104_8018300C(s32 arg0) {
    if (arg0 != 0) {
        AF(arg0, s32, 4) = (s32) (AF(arg0, s32, 4) & 0x7FFFFFFF);
    }
}

void func_sc03_104_8018302C(s32 arg0) {
    if (arg0 != 0) {
        AF(arg0, s32, 4) = (s32) (AF(arg0, s32, 4) | 0x80000000);
    }
}

void func_sc03_104_8018304C(u8 *arg0) {
    struct_10_7 *p;
    s32 i;
    s32 v;

    v = ((rsin((AF(arg0, s32, 0x1C) << 6) & 0x7C0) * 0x64) >> 0xC) + 0x64;
    i = 0;
    p = D_sc03_104_80199ED4;
loop:
    i++;
    p->field_2 = v;
    p->field_1 = v;
    p->field_0 = v;
    p++;
    if (i < 3) goto loop;
    D_sc03_104_80199E8A = v;
    D_sc03_104_80199E89 = v;
    D_sc03_104_80199E88 = v;
    AF(arg0, s32, 0x1C)++;
}

void func_sc03_104_801830F0(u8 *arg0) {
    D_sc03_104_8019A070[AF(arg0, u16, 2)]();
}

void func_sc03_104_8018312C(s32 arg0) {
    s32 pad[2];
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    AF(arg0, s32, 0x20) = temp_v0;
    func_8001CA1C(temp_v0, (s32) &D_sc03_104_80199F28);
    AF(temp_v0, s16, 0x18) = 0x2000;
    AF(temp_v0, s16, 0x1A) = 1;
    AF(temp_v0, u16, 0x2E) = 0xC004;
    AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x50000000);
    AF(temp_v0, u16, 0x2C) = (u16) (AF(temp_v0, u16, 0x2C) | 0x10);
    AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) - 0x19);
    func_8012A828(arg0, (s32) &D_sc03_104_80199FE8);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_104_801831E8(u8 *arg0) {
    s32 v;

    switch (AF(arg0, u16, 0x34)) {
    case 0:
        v = rsin(AF(arg0, s32, 0x1C) << 6);
        AF(AF(arg0, u8 *, 0x20), s16, 0x18) = v * 7;
        AF(AF(arg0, u8 *, 0x20), s16, 0x1A) = v * 2;
        if (++AF(arg0, s32, 0x1C) >= 0x10) {
            AF(AF(arg0, u8 *, 0x20), s16, 0x1A) = 0x7000;
            AF(AF(arg0, u8 *, 0x20), s16, 0x1A) = 0x2000;
            AF(arg0, s32, 0x1C) = 0x40;
            AF(arg0, u16, 0x34)++;
        }
        break;
    case 1:
        if (func_8012BEE8(arg0) != 0) {
            AF(arg0, s32, 0x1C) = 0x10;
            AF(arg0, u16, 0x34)++;
        }
        break;
    case 2:
        AF(AF(arg0, u8 *, 0x20), s16, 0x1A) = rsin(AF(arg0, s32, 0x1C) << 6) * 2;
        if (--AF(arg0, s32, 0x1C) == 0) {
            func_8012C218(arg0);
            return;
        }
        break;
    }
    func_sc03_104_80183318(arg0);
}

s32 func_sc03_104_80183318(u8 *arg0) {
    s32 r;
    s32 lim;
    struct_8_6 v;

    r = AF(AF(arg0, u8 *, 0x20), s16, 0x18);
    r = (r & ~0xFF) >> 8;
    if (func_8012BE54(arg0) > r * r) {
        return 0;
    }
    lim = AF(AF(arg0, u8 *, 0x20), s16, 0x1A);
    lim = (lim & ~0x3F) >> 6;
    if (lim < ((AF(arg0, s16, 0xA) - D_80126B62) >= 0 ? (AF(arg0, s16, 0xA) - D_80126B62) : -(AF(arg0, s16, 0xA) - D_80126B62))) {
        return 0;
    }
    v.field_0 = AF(arg0, u16, 0x6);
    v.field_2 = AF(arg0, u16, 0xA);
    v.field_4 = AF(arg0, u16, 0xE);
    return ((s32 (*)())func_8012F568)(1, 0x4201, 0, 0x1C, &v, &D_sc03_104_8019A078);
}

void func_sc03_104_801833F0(u8 *arg0) {
    D_sc03_104_8019A080[AF(arg0, u16, 2)]();
}

void func_sc03_104_8018342C(s32 arg0) {
    s32 o;
    s32 t;
    s32 r;
    s32 sign;
    s32 x;
    s32 pad[2];
    s32 v;
    s32 m;

    o = func_8012C1B8();
    if (o == 0) {
        func_8012CAE4(arg0);
        return;
    }
    AF(arg0, s32, 0x20) = o;
    func_8001C214(o, 0);
    t = rand();
    r = (s16)t;
    sign = -1;
    AF(o, u16, 0x2C) |= 0x10;
    AF(o, s16, 0x18) = AF(o, s16, 0x1A) = AF(o, s16, 0x1C) = r % 384 + 0x400;
    if (t & 1) {
        sign = 1;
    }
    m = sign * (r % 128);
    AF(o, s16, 0x10) = m - 0x300;
    AF(o, s16, 0x12) = r % 4096;
    AF(o, s16, 0x14) = 0;
    AF(arg0, u16, 0xA) -= 0x19;
    func_8012B2CC(arg0);
    func_8012B23C(arg0);
    func_8012B178(arg0, -0xC0000 - ((r % 8) << 16));
    AF(arg0, s32, 0x1C) = 0x5A;
    x = rand() % 8;
    if (!(rand() & 1)) v = -x - 16; else v = x - 16;
    AF(arg0, s16, 0xDC) = v;
    AF(arg0, s16, 0xDE) = 0;
    x = rand() % 8;
    if (!(rand() & 1)) v = -x - 16; else v = x - 16;
    AF(arg0, s16, 0xE0) = v;
    x = rand() % 8;
    if (!(rand() & 1)) v = -x + 16; else v = x + 16;
    AF(arg0, s16, 0xE4) = v;
    AF(arg0, s16, 0xE6) = 0;
    x = rand() % 8;
    if (!(rand() & 1)) v = -x - 16; else v = x - 16;
    AF(arg0, s16, 0xE8) = v;
    x = rand() % 8;
    if (!(rand() & 1)) v = -x - 16; else v = x - 16;
    AF(arg0, s16, 0xEC) = v;
    AF(arg0, s16, 0xEE) = 0;
    x = rand() % 8;
    if (!(rand() & 1)) v = -x + 16; else v = x + 16;
    AF(arg0, s16, 0xF0) = v;
    x = rand() % 8;
    if (!(rand() & 1)) v = -x + 16; else v = x + 16;
    AF(arg0, s16, 0xF4) = v;
    AF(arg0, s16, 0xF6) = 0;
    x = rand() % 8;
    if (!(rand() & 1)) v = -x + 16; else v = x + 16;
    AF(arg0, s16, 0xF8) = v;
    AF(arg0, u8, 0xFC) = 0x80;
    AF(arg0, u8, 0xFD) = 0x80;
    AF(arg0, u8, 0xFE) = 0x80;
    AF(arg0, s32, 0x100) |= 0x50000000;
    AF(arg0, s16, 2)++;
}

void func_sc03_104_801837C8(u8 *arg0) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x10) = (u16) (AF(temp_v1, u16, 0x10) + 0x40);
    if ((func_8012CBCC((s32) arg0) != 0) || (func_8012BEE8((s32) arg0) != 0)) {
        func_8012C218((s32) arg0);
        return;
    }
    func_80017274((s32) (arg0 + 0xDC), (s32) (AF(arg0, void *, 0x20) + 0x34));
}

void func_sc03_104_8018383C(u8 *p) {
    u8 *o;
    s8 *d;

    if (func_8012C354(p, &D_sc03_104_8019C9AC) != 0) {
        AF(p, u8, 0xC0) = 1;
        AF(p, u8 *, 0xBC) = &D_sc03_104_8019C9E0;
        AF(p, s32, 0xB4) = 0;
        AF(p, u8, 0xC1) = 0;
        AF(p, u8, 0x75) = 0x14;
        AF(p, s32, 0xC4) |= 2;
        AF(p, u16, 0x72) |= 0x1000;
        if (func_80029178(D_sc03_104_8019CA20[AF(p, s16, 0x70)]) & 0xFF) {
            AF(AF(p, u8 *, 0x20), s32, 4) |= 0x80000000;
            AF(p, s16, 0xAE) = -1;
            func_sc03_104_80183C30(p);
            AF(p, u16, 0x34)++;
            return;
        }
        AF(p, s16, 0xAE) = -4;
        o = (u8 *) func_8012C194();
        AF(p, u8 *, 0xCC) = o;
        if (o != 0) {
            d = &D_sc03_104_801C00B0;
            func_8001CD9C(o, d);
            func_800233CC(d, 0x80);
            *(struct_4_8 *) d = *(struct_4_8 *) &D_sc03_104_801BED0C;
            *(struct_4_8 *) &D_sc03_104_801C00B4 = *(struct_4_8 *) &D_sc03_104_801BED10;
            AF(o, s16, 0x18) = 0x800;
            AF(o, s16, 0x1A) = 0x800;
            AF(o, s32, 4) |= 0x50000000;
        }
        func_sc03_104_80185278();
        func_8012AD50(p);
    }
}

void func_sc03_104_801839C0(u8 *arg0) {
    u8 *o;
    u8 *c;
    s16 v;
    u8 n;

    o = AF(arg0, u8 *, 0xCC);
    if (o != NULL) {
        if (AF(o, s16, 0x18) < 0x1C00) {
            AF(o, s16, 0x18) += 0x200;
            AF(o, s16, 0x1A) += 0x200;
        }
        if (AF(o, s16, 0x18) > 0x1000 && (v = D_sc03_104_8019CA30[AF(arg0, s16, 0xFC)]) >= 0) {
            func_sc03_104_80183AF4(v);
            AF(arg0, s16, 0xFC)++;
        }
    }
    c = (u8 *) &D_sc03_104_801C00B0;
    if (*c < 0xFF) {
        n = *c + 0x10;
        *c = n;
        D_sc03_104_801C00B1 += 0x10;
        D_sc03_104_801C00B2 += 0x10;
        if (n == 0) {
            *c = 0xFF;
            *(u8 *) &D_sc03_104_801C00B1 = 0xFF;
            *(u8 *) &D_sc03_104_801C00B2 = 0xFF;
        }
    }
    func_sc03_104_80183D54(arg0);
    if (func_8012BEE8(arg0) != 0) {
        func_sc03_104_80183B90(arg0);
    }
}

void func_sc03_104_80183AF4(s32 arg0) {
    struct_4_3 a;
    struct_4_3 b;
    struct_8_7 v;

    a = D_sc03_104_801BED14;
    b = D_sc03_104_801BED18;
    a.field_2 = (rand() & 0x3F) - 0x80;
    v.field_0 = 0x100;
    v.field_2 = arg0;
    v.field_4 = 0x80;
    v.field_6 = 1;
    func_sc03_104_80185400((s32)&v, (s32)&a, (s32)&b);
}

s32 func_sc03_104_80183B90(s32 arg0) {
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    AF(temp_a1, s32, 4) = (s32) (AF(temp_a1, s32, 4) | 0x80000000);
    AF(arg0, s16, 0xFC) = 0;
    return func_8012AD44(arg0, 3);
}

s32 func_sc03_104_80183BCC(s32 arg0) {
    AF(arg0, s32, 0x1C) = 0x20;
    return func_8012AD44(arg0, 4);
}

s32 func_sc03_104_80183BF4(s32 arg0) {
    func_80178B18(arg0, (s32) &D_sc03_104_8019C9F8);
    return func_8012AD44(arg0, 5);
}

s32 func_sc03_104_80183C30(arg0, arg1)
    s32 arg0;
    s32 arg1;
{
    return func_8012AD44(arg0, 6);
}

void func_sc03_104_80183C50(u8 *arg0) {
    D_sc03_104_8019CA44[AF(arg0, u16, 2)]();
    func_sc03_104_80183D98((s32) arg0);
}

void func_sc03_104_80183CA0(u8 *arg0) {
    u16 sp10[2];
    s8 *d;

    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, s16, 0x5E) = 0;
    AF(arg0, s16, 0x5C) = 0x800;
    *(struct_4_8 *) &D_sc03_104_801C00B0 = *(struct_4_8 *) &D_sc03_104_801BED0C;
    func_sc03_104_80185278();
    func_sc03_104_8018533C((s32) sp10, 0x1000, 0);
    func_8012B2CC(arg0);
    func_sc03_104_8018536C(arg0 + 4);
    AF(arg0, s16, 0xFC) = 0;
    AF(arg0, s32, 0x1C) = 0x40;
    func_80178B18(arg0, &D_sc03_104_8019C9F0);
    func_8012AD44(arg0, 2);
    func_8002D4C8(0x700, 0);
}

s32 func_sc03_104_80183D54(s32 arg0) {
    func_sc03_104_801853E4(8);
    func_8012B2CC(arg0);
    func_sc03_104_8018536C(arg0 + 4);
    return func_sc03_104_801855B4();
}

void func_sc03_104_80183D98(s32 arg0) {
    void *temp_a0;
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0xCC);
    if (temp_v1 != NULL) {
        AF(temp_v1, u16, 8) = (u16) AF(arg0, u16, 6);
        AF(temp_v1, u16, 0xA) = (u16) AF(arg0, u16, 0xA);
        temp_a0 = temp_v1 + 8;
        AF(temp_v1, u16, 0xC) = (u16) AF(arg0, u16, 0xE);
        func_801330E0((s32) temp_a0, (s32) temp_a0, -0x100);
    }
}

void func_sc03_104_80183DEC(u8 *p, s32 k) {
    struct_14_5 a;
    struct_8_7 v;
    struct_20_4 m;
    u8 *q;

    v = D_sc03_104_801BED1C;
    m = D_800AE620;
    RotMatrixY(AF(AF(p, u8 *, 0x20), s16, 0x12), &m);
    ApplyMatrixSV(&m, &v, &v);
    if (p != 0 && AF(p, u16, 0) != 0) {
        a.field_0 = AF(p, u16, 6) + v.field_0;
        a.field_2 = AF(p, u16, 0xA) + v.field_2;
        a.field_4 = AF(p, u16, 0xE) + v.field_4;
    } else {
        a.field_0 = a.field_2 = a.field_4 = 0;
    }
    q = p;
    a.field_6 = 0x1E1;
    a.field_8 = k;
    a.field_A = 0;
    a.field_E = 0;
    a.field_10 = AF(q, s32, 0xDC);
    a.field_C = 0x7FFF;
    func_8012C51C(&a, q);
}

void func_sc03_104_80183F4C(u8 *arg0) {
    D_sc03_104_8019CA70[AF(arg0, u16, 2)]();
}

void func_sc03_104_80183F88(u8 *arg0) {
    s32 temp_v1;
    s32 var_v0;
    s8 temp_v0;

    temp_v1 = AF(arg0, s32, 0x1C) + 1;
    AF(arg0, s32, 0x1C) = temp_v1;
    if (temp_v1 & 0x10) {
        var_v0 = ((s32) (temp_v1 & 0xF) >> 1) + 9;
    } else {
        var_v0 = 0x10 - ((s32) (temp_v1 & 0xF) >> 1);
    }
    temp_v0 = (var_v0 & 0xFF) * 8;
    D_sc03_104_801C00B2 = temp_v0;
    D_sc03_104_801C00B1 = temp_v0;
    D_sc03_104_801C00B0 = temp_v0;
}

void func_sc03_104_80183FE8(u8 *arg0) {
    u8 *o;
    u8 *c;

    o = AF(arg0, u8 *, 0xCC);
    if (AF(arg0, s16, 0xFC) < 0x10) {
        func_sc03_104_80185568(AF(arg0, s16, 0xFC), 1);
        AF(arg0, s16, 0xFC)++;
    }
    if (AF(arg0, s16, 0xFC) >= 9) {
        if (o != NULL && AF(o, s16, 0x18) > 0) {
            AF(o, s16, 0x18) -= 0x100;
            AF(o, s16, 0x1A) -= 0x100;
        }
        c = (u8 *) &D_sc03_104_801C00B0;
        if (*c > 0x10) {
            *c -= 0x10;
            D_sc03_104_801C00B1 -= 0x10;
            D_sc03_104_801C00B2 -= 0x10;
        } else {
            AF(o, s16, 0) = 0;
            AF(arg0, u8 *, 0xCC) = NULL;
            func_sc03_104_80183DEC(arg0, 0x4000);
            func_sc03_104_80183BCC(arg0);
        }
    }
    func_sc03_104_80183D54(arg0);
}

void func_sc03_104_801840F4(u8 *arg0) {
    s32 any;
    s32 i;
    s32 *p;

    if (func_8012BEE8(arg0) != 0) {
        func_80178D18(arg0);
        any = 0;
        i = 0;
        p = D_sc03_104_8019CA20;
        for (; i < 4; i++) {
            any |= func_80029178(*p++) & 0xFF;
        }
        if (any == 0) {
            func_sc03_104_80183BF4(arg0);
        } else {
            func_sc03_104_80183C30(arg0);
        }
        any = 1;
        func_80029124(D_sc03_104_8019CA20[AF(arg0, s16, 0x70)], 1);
        for (i = 0; i < 4; i++) {
            if (!(func_80029178(D_sc03_104_8019CA20[i]) & 0xFF)) {
                any = 0;
            }
        }
        if (any != 0) {
            func_80029514(0x172);
        }
    }
}

void func_sc03_104_80184200(s32 arg0) {
    if (func_80178970() != 0) {
        func_80178D18(arg0);
        func_sc03_104_80183C30(arg0);
    }
}

void func_sc03_104_80184240(u8 *arg0) {
    if (AF(arg0, u16, 0x34) != 0) {
        func_sc03_104_80183DEC((s32) arg0, 0);
        AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) - 1);
    }
}

void func_sc03_104_8018428C(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8(arg0, arg1);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C2C4(temp_v0);
    AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc03_104_8019CA60 | 0x40000000);
    AF(arg0, s16, 0x5C) = 0x800;
    AF(arg0, u16, 0x72) = (u16) (AF(arg0, u16, 0x72) | 0x1000);
    D_sc03_104_8019CA14 = AF(arg0, s32, 0xDC);
    func_8012AD50(arg0);
}

void func_sc03_104_80184314(void) {
}

void func_sc03_104_8018431C(s32 arg0) {
    u8 unused[8];
    s32 o;
    s32 k;
    struct_8_16 *r;
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
        r = &D_sc03_104_8019CAE4[i];
        func_8001CB6C(o, D_sc03_104_8019CAF4[i], r->field_0, r->field_2);
        c = r->field_4;
        AF(o, s16, 0x10) = 0x400;
        AF(o, s16, 0x1A) = 0x2000;
        AF(o, s16, 0x18) = 0x2000;
        AF(o, u8, 0x27) = c;
    } else {
        func_8001CF00(o);
        AF(o, s32 *, 0x20) = &D_sc03_104_801C00F0;
        AF(o, s16, 0x28) = 0x300;
        AF(o, s16, 0x2A) = 0x110;
        AF(o, u8, 0x27) = 0x78;
        AF(o, s16, 0x10) = 0x400;
        AF(o, s16, 0x1A) = 0x800;
        AF(o, s16, 0x18) = 0x800;
        if (!(AF(arg0, u16, 0x70) & 3)) {
            func_800233CC(&D_sc03_104_801C00F0, 0x80);
        }
        if (AF(arg0, u16, 0x70) & 1) {
            D_sc03_104_8019CA7C[(AF(arg0, u16, 0x70) & 3) * 6] = 0x10;
            AF(o, s16, 0x14) = 0x400;
        } else {
            D_sc03_104_8019CA7C[(AF(arg0, u16, 0x70) & 3) * 6] = 0x20;
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
        D_sc03_104_8019CA7E[(AF(arg0, u16, 0x70) & 3) * 6] = 0x20;
        if (AF(arg0, u16, 0x70) & 0x4000) {
            AF(o, s16, 0x1A) = 0;
            AF(o, s16, 0x18) = 0;
        }
    }
    func_8012AD50(arg0);
}

s32 func_sc03_104_80184574(s32 arg0) {
    D_sc03_104_8019CB00[0] = AF(arg0, u16, 6) | (AF(arg0, s16, 0xE) << 0x10);
    func_80178B18(arg0, (s32) (D_sc03_104_8019CB00 - 0x1), D_sc03_104_8019CB00);
    return func_8012AD44(arg0, 2);
}

void func_sc03_104_801845C8(u8 *arg0) {
    D_sc03_104_8019CB14[AF(arg0, u16, 2)]();
}

void func_sc03_104_80184604(s32 arg0) {
    s32 temp_s1;
    u16 temp_v0;
    u16 temp_v0_2;
    void *temp_s2;

    temp_s1 = AF(arg0, s32, 0x20);
    temp_s2 = ((AF(arg0, u16, 0x70) & 3) * 0xC) + &D_sc03_104_8019CA78;
    func_sc03_104_80184934(temp_s1, (s32) temp_s2);
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

s32 func_sc03_104_801846F0(s32 arg0, s32 arg1) {
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

void func_sc03_104_801847B0(void) {
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

void func_sc03_104_80184800(u8 *arg0) {
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
            } else if (!((u16) AF(arg0, s16, 0x70) & 1) && (func_sc03_104_801846F0((s32) arg0, 0x30) != 0)) {
                func_sc03_104_80184574((s32) arg0);
                func_80029124(0xAE, 0);
                func_80029124(0xAF, 0);
                func_80029124(0xB0, 0);
            }
            func_sc03_104_80184604((s32) arg0);
        }
    }
}

void func_sc03_104_801848E8(s32 arg0, s32 arg1) {
    if (func_80178970(arg0, arg1) != 0) {
        func_80178D18(arg0);
        func_800D1724(AF(arg0, s32, 0xDC));
    }
    func_sc03_104_80184604(arg0);
}

void func_sc03_104_80184934(u8 *arg0, s32 arg1) {
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

    ot = D_800A6610[D_800B9A02[0]];
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
        func_sc03_104_80184D50(arg0, arg1, s.field_0, ot);
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
        func_sc03_104_80184D50(arg0, arg1, s.field_0, &ot[d]);
    }
}

void func_sc03_104_80184D50(u8 *o, u8 *s, u8 *v, u32 *ot) {
    struct_28 *p;
    struct_8_8 *m;
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
        m = (struct_8_8 *)p;
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

void func_sc03_104_80185270(void) {
}

void func_sc03_104_80185278(void) {
    s16 *var_v1;
    s32 var_v0;

    var_v1 = &D_sc03_104_801C0244;
    var_v0 = 0xF;
    do {
        *var_v1 = 0;
        var_v0 -= 1;
        var_v1 = (s16 *)((u8 *)var_v1 + 0xE);
    } while (var_v0 >= 0);
}

void func_sc03_104_8018529C(s32 arg0, s32 arg1, s32 arg2, u16 *arg3) {
    struct_8_7 v;
    s32 i;
    s16 ang;

    func_sc03_104_8018533C(arg0, 0x1000, 0);
    v.field_0 = arg3[0];
    v.field_4 = arg3[1];
    v.field_6 = 1;
    for (i = 0, ang = 0; i < 0x10; i++, ang += 0x100) {
        v.field_2 = ang;
        func_sc03_104_80185458(i, (s32) &v, arg1, arg2);
    }
}

s32 func_sc03_104_8018533C(s32 arg0, s32 arg1, s32 arg2) {
    u16 temp_v0;

    D_sc03_104_801C023C = AF(arg0, u16, 0);
    temp_v0 = AF(arg0, u16, 2);
    D_sc03_104_801C0240 = (s16) arg1;
    D_sc03_104_801C0242 = (s16) arg2;
    D_sc03_104_801C023E = temp_v0;
    return (s32) temp_v0;
}

void func_sc03_104_8018536C(s32 arg0) {
    u16 sp10[2];
    s32 sp18[2];
    s32 sp20;
    s32 sp24;

    func_80015978(arg0, (s32) &sp18);
    SetRotMatrix((s32) &D_800AF648);
    SetTransMatrix((s32) &D_800AF648);
    RotTransPers((s32) &sp18, (s32) sp10, (s32) &sp20, (s32) &sp24);
    D_sc03_104_801C023C = sp10[0];
    D_sc03_104_801C023E = sp10[1];
}

void func_sc03_104_801853E4(s32 arg0) {
    s16 *p = &D_sc03_104_801C0242;
    *p += arg0;
}

void func_sc03_104_80185400(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = func_sc03_104_8018552C();
    if (temp_v0 >= 0) {
        func_sc03_104_80185458(temp_v0, arg0, arg1, arg2);
    }
}

void func_sc03_104_80185458(s32 arg0, s16 *arg1, s32 arg2, s32 arg3) {
    struct struct_4_11 { u8 field_0, field_1, field_2, field_3; };
    struct struct_E { u16 field_0; s16 field_2; s16 field_4; struct struct_4_11 field_6; struct struct_4_11 field_A; } *e;

    e = (struct struct_E *)(&D_sc03_104_801C0244 + arg0 * 14);
    e->field_0 = arg1[0];
    e->field_6 = *(struct struct_4_11 *)arg2;
    e->field_6.field_3 = 0;
    e->field_A = *(struct struct_4_11 *)arg3;
    e->field_A.field_3 = 0;
    e->field_2 = arg1[1] + (rand() & 0x3F) - 0x20;
    e->field_4 = (arg1[2] * ((rand() & 0x7F0) + 0xC00)) >> 12;
    if (arg1[3] != 0) {
        e->field_6.field_3 = 1;
        e->field_A.field_3 = e->field_4;
        e->field_4 = 0;
    }
}

s32 func_sc03_104_8018552C(void) {
    s32 i;
    s32 off;

    for (i = 0, off = 0; i < 0x10; i++, off += 0xE) {
        if (*(u16 *)&((u8 *)&D_sc03_104_801C0244)[off] == 0) {
            return i;
        }
    }
    return -1;
}

void func_sc03_104_80185568(s32 arg0, s32 arg1) {
    void *temp_v1;

    if ((arg0 < 0x10) && (temp_v1 = (arg0 * 0xE) + &D_sc03_104_801C0244, (AF(temp_v1, u16, 0) != 0))) {
        if (arg1 == 0) {
            AF(temp_v1, u16, 0) = 0U;
            return;
        }
        AF(temp_v1, u8, 9) = 2;
    }
}

s32 func_sc03_104_801855B4(void) {
    u8 *p;
    s32 i;
    s16 v;
    s16 w;

    for (p = &D_sc03_104_801C0244, i = 0; i < 0x10; i++, p += 14) {
        if (AF(p, u16, 0) != 0) {
            func_sc03_104_80185690(i);
            switch (AF(p, u8, 9)) {
            case 1:
                v = AF(p, s16, 4);
                if (v < AF(p, u8, 13)) {
                    AF(p, s16, 4) = v + 8;
                } else {
                    AF(p, u8, 9) = 0;
                }
                break;
            case 2:
                w = AF(p, s16, 4);
                if (w == 0 || (w -= 0x10, AF(p, s16, 4) = w, w <= 0)) {
                    AF(p, u16, 0) = 0;
                }
                break;
            }
        }
    }
}

void func_sc03_104_80185690(s32 i) {
    struct_20_4 m;
    struct_8_7 v;
    struct_8_7 o;
    struct_10_3 s;
    u8 *p;
    u8 *r;
    u16 cx;
    u16 cy;

    m = D_800AE620;
    p = D_800A5E60;
    D_800A5E60 = p + 0x1C;
    AF(p, u8, 3) = 6;
    AF(p, u8, 7) = 0x32;
    r = &D_sc03_104_801C0244 + i * 14;
    AF(p, u8, 4) = AF(r, u8, 6);
    AF(p, u8, 5) = AF(r, u8, 7);
    AF(p, u8, 6) = AF(r, u8, 8);
    AF(p, u8, 0xC) = AF(r, u8, 0xA);
    AF(p, u8, 0xD) = AF(r, u8, 0xB);
    AF(p, u8, 0xE) = AF(r, u8, 0xC);
    AF(p, u8, 0x14) = AF(r, u8, 0xA);
    AF(p, u8, 0x15) = AF(r, u8, 0xB);
    AF(p, u8, 0x16) = AF(r, u8, 0xC);
    cx = D_sc03_104_801C023C;
    cy = D_sc03_104_801C023E;
    RotMatrixZ(D_sc03_104_801C0242, &m);
    s.field_0 = s.field_4 = s.field_8 = D_sc03_104_801C0240;
    ScaleMatrix(&m, &s);
    v.field_0 = AF(r, u16, 0);
    v.field_2 = v.field_4 = 0;
    AF(p, u16, 8) = cx;
    AF(p, u16, 0xA) = cy;
    RotMatrixZ(AF(r, s16, 2) - (AF(r, s16, 4) >> 1), &m);
    ApplyMatrixSV(&m, &v, &o);
    AF(p, u16, 0x10) = cx + o.field_0;
    AF(p, u16, 0x12) = cy + o.field_2;
    RotMatrixZ(AF(r, s16, 4), &m);
    ApplyMatrixSV(&m, &v, &o);
    AF(p, u16, 0x18) = cx + o.field_0;
    AF(p, u16, 0x1A) = cy + o.field_2;
    ((struct_4_4 *)p)->field_0_b0 = ((struct_4_4 *)&D_800A651C[D_800B9A02[0]].field_0[16])->field_0_b0;
    ((struct_4_4 *)&D_800A651C[D_800B9A02[0]].field_0[16])->field_0_b0 = (u32)p;
    func_80016638(&D_800A6518[D_800B9A02[0]], 0x10, 1);
}

s32 func_sc03_104_80185954(void) {
    s16 *var_v1;
    s32 var_v0;

    var_v1 = &D_sc03_104_801C013C;
    var_v0 = 0xF;
    do {
        *var_v1 = 0;
        var_v0 -= 1;
        var_v1 = (s16 *)((u8 *)var_v1 + 0x10);
    } while (var_v0 >= 0);
    return var_v0;
}

s32 func_sc03_104_80185978(s32 arg0) {
    s32 sp10;

    func_80015978(arg0, (s32) &sp10);
    return func_sc03_104_801859A0((s32) &sp10);
}

s32 func_sc03_104_801859A0(s32 arg0) {
    s16 sxy[2];
    struct_4_3 col;
    s32 p;
    s32 flag;

    col = D_sc03_104_801BED24;
    SetRotMatrix((s32) &D_800AF648);
    SetTransMatrix((s32) &D_800AF648);
    RotTransPers(arg0, (s32) sxy, (s32) &p, (s32) &flag);
    return func_sc03_104_80185A28((s32) sxy, (s32) &col, 0x10, 0x18);
}

s32 func_sc03_104_80185A28(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 pad[4];
    s16 var_s1;
    s32 temp_v0;
    s32 var_s0;

    func_sc03_104_80185A94(arg0, arg1, (s32) (s16) arg2);
    var_s0 = 0;
    var_s1 = 0;
    do {
        func_sc03_104_80185BC8(var_s0, (s32) var_s1, arg3 & 0xFFFF);
        var_s0 += 1;
        temp_v0 = var_s0 < 0x10;
        var_s1 += 0x100;
    } while (temp_v0 != 0);
    return temp_v0;
}

void func_sc03_104_80185A94(u16 *p, u8 *c, s32 g) {
    if (p != 0) {
        D_sc03_104_801C0130.field_0 = p[0];
        D_sc03_104_801C0130.field_2 = p[1];
    } else {
        D_sc03_104_801C0130.field_0 = 0;
        D_sc03_104_801C0130.field_2 = 0;
    }
    D_sc03_104_801C0138 = c[0];
    D_sc03_104_801C0139 = c[1];
    D_sc03_104_801C013A = c[2];
    AF(&D_sc03_104_801C0130, s32, 4) = g << 16;
}

void func_sc03_104_80185B04(s32 arg0) {
    u16 sp10[2];
    s32 sp18[2];
    s32 sp20;
    s32 sp24;

    func_80015978(arg0, (s32) &sp18);
    SetRotMatrix((s32) &D_800AF648);
    SetTransMatrix((s32) &D_800AF648);
    RotTransPers((s32) &sp18, (s32) sp10, (s32) &sp20, (s32) &sp24);
    D_sc03_104_801C0130.field_0 = sp10[0];
    D_sc03_104_801C0130.field_2 = sp10[1];
}

void func_sc03_104_80185B7C(s16 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_sc03_104_80185CE4();
    if (temp_v0 >= 0) {
        func_sc03_104_80185BC8(temp_v0, (s32) arg0, arg1 & 0xFFFF);
    }
}

void func_sc03_104_80185BC8(s32 i, s32 ang, s32 spd) {
    u8 unused[0x10];
    struct_10_2 *p;
    s16 vx;
    s16 vz;
    u16 s;
    s32 m;
    s32 gg;

    p = &D_sc03_104_801C0130.field_C[i];
    s = spd;
    s += rand() % (s >> 2) - (s >> 3);
    m = s;
    p->field_6 = ang + (rand() & 0x3F) - 0x20;
    vx = (rcos(p->field_6) * m) >> 12;
    vz = (rsin(p->field_6) * m) >> 12;
    p->field_8 = vx << 16;
    p->field_C = vz << 16;
    p->field_0 = (rand() & 0xF) + 0x10;
    p->field_2 = m << 6;
    gg = D_sc03_104_801C0130.field_6;
    p->field_4 = gg << 6;
}

s32 func_sc03_104_80185CE4(void) {
    s32 i;
    s32 off;

    for (i = 0, off = 0; i < 0x10; i++, off += 0x10) {
        if (*(u16 *)&((u8 *)&D_sc03_104_801C013C)[off] == 0) {
            return i;
        }
    }
    return -1;
}

void func_sc03_104_80185D20(void) {
    struct_10_2 *p;
    s32 i;
    s16 g;
    s32 dx;
    s32 dz;

    g = D_sc03_104_801C0136;
    p = (struct_10_2 *)&D_sc03_104_801C013C;
    for (i = 0; i < 16; i++, p++) {
        if (p->field_0 == 0) {
            continue;
        }
        if ((g > 0 && p->field_2 >= 0x4001) || (g < 0 && p->field_2 <= 0)) {
            p->field_0 = 0;
            continue;
        }
        func_sc03_104_80185E34(i);
        dx = (rcos(p->field_6) * g) << 4;
        dz = (rsin(p->field_6) * g) << 4;
        p->field_8 += dx;
        p->field_C += dz;
        p->field_2 += p->field_4;
    }
}

void func_sc03_104_80185E34(s32 i) {
    struct_20_4 m;
    struct_8_7 v;
    struct_8_7 o;
    struct_10_3 s;
    u8 *p;
    struct_10_2 *r;
    u16 cx;
    u16 cz;

    p = D_800A5E60;
    m = D_800AE620;
    D_800A5E60 = p + 0x14;
    AF(p, u8, 3) = 4;
    AF(p, u8, 7) = 0x22;
    AF(p, u8, 4) = D_sc03_104_801C0138;
    AF(p, u8, 5) = D_sc03_104_801C0139;
    AF(p, u8, 6) = D_sc03_104_801C013A;
    r = (struct_10_2 *)&D_sc03_104_801C013C + i;
    cx = AF(r, u16, 0xA) + D_sc03_104_801C0130.field_0;
    cz = AF(r, u16, 0xE) + D_sc03_104_801C0130.field_2;
    RotMatrixZ(r->field_6, &m);
    s.field_0 = r->field_2;
    s.field_4 = r->field_2;
    s.field_8 = r->field_2;
    ScaleMatrix(&m, &s);
    v.field_0 = r->field_0;
    v.field_2 = v.field_4 = 0;
    ApplyMatrixSV(&m, &v, &o);
    AF(p, u16, 8) = cx + (o.field_0 >> 1) * 3;
    AF(p, u16, 0xA) = cz + (o.field_2 >> 1) * 3;
    AF(p, u16, 0xC) = cx - (o.field_0 >> 1);
    AF(p, u16, 0xE) = cz - (o.field_2 >> 1);
    AF(p, u16, 0x10) = cx + o.field_0;
    AF(p, u16, 0x12) = cz + o.field_2;
    if (r->field_0 & 1) {
        RotMatrixZ(0x400, &m);
    } else {
        RotMatrixZ(-0x400, &m);
    }
    v.field_0 = 2;
    ApplyMatrixSV(&m, &v, &o);
    AF(p, u16, 0x10) += o.field_0;
    AF(p, u16, 0x12) += o.field_2;
    ((struct_4_4 *)p)->field_0_b0 = ((struct_4_4 *)&D_800A651C[D_800B9A02[0]].field_0[16])->field_0_b0;
    ((struct_4_4 *)&D_800A651C[D_800B9A02[0]].field_0[16])->field_0_b0 = (u32)p;
    func_80016638(&D_800A6518[D_800B9A02[0]], 0x10, 1);
}

void func_sc03_104_80186118(u8 *arg0) {
    struct_8_6 a;
    struct_8_6 b;
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
        a.field_0 = D_sc03_104_8019D1F4[i];
        a.field_4 = D_sc03_104_8019D1F4[i + 1];
        b.field_0 = D_sc03_104_8019D1F4[i + 2];
        b.field_4 = D_sc03_104_8019D1F4[i + 3];
        if (func_8012DEB8(arg0, &a, &b) == 1) {
            D_80126B96 = 0x4004;
        }
    }
    for (i = 0; i < 20; i += 4) {
        a.field_0 = D_sc03_104_8019D21C[i];
        a.field_4 = D_sc03_104_8019D21C[i + 1];
        b.field_0 = D_sc03_104_8019D21C[i + 2];
        b.field_4 = D_sc03_104_8019D21C[i + 3];
        if (func_8012DEB8(arg0, &a, &b) == 1) {
            D_80126B96 = 0x4004;
        }
    }
    for (i = 0; i < 20; i += 4) {
        a.field_0 = D_sc03_104_8019D244[i];
        a.field_4 = D_sc03_104_8019D244[i + 1];
        b.field_0 = D_sc03_104_8019D244[i + 2];
        b.field_4 = D_sc03_104_8019D244[i + 3];
        if (func_8012DEB8(arg0, &a, &b) == 1) {
            D_80126B96 = 0x4004;
        }
    }
    D_sc03_104_8019D26C[AF(arg0, u16, 2)](arg0);
    t = func_8012BD14(arg0);
    if (t > 0x3FFFF) {
        AF(arg0, s16, 0xFE) = 1;
        func_8002D59C(4, 0x609, AF(arg0, u16, 0x70));
    } else if (--AF(arg0, s16, 0xFE) == 0) {
        AF(arg0, s16, 0xFE) = 4;
        func_8002D59C(0x609, (u16)(((0x40000 - t) * 0x7F / 0x40000) | 0x1000), AF(arg0, u16, 0x70));
    }
}

void func_sc03_104_801863B0(u8 *arg0) {
    u8 unused[0x10];
    struct_8_6 a;
    struct_8_6 b;
    struct_8_6 c;
    u8 *p;
    s32 i;
    s32 ang;

    p = &D_801202A0;
    i = 0;
    D_sc03_104_8019D2B8[AF(arg0, u16, 2)]();
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

void func_sc03_104_80186538(s32 arg0) {
    s32 o;

    o = func_8012C1B8();
    AF(arg0, s32, 0x20) = o;
    if (o == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8012B23C(arg0);
    AF(arg0, u16, 0x12) = D_sc03_104_8019D55C[AF(arg0, s16, 0xFC)].field_0;
    AF(arg0, u16, 0x16) = D_sc03_104_8019D55C[AF(arg0, s16, 0xFC)].field_2;
    AF(arg0, u16, 0x1A) = D_sc03_104_8019D55C[AF(arg0, s16, 0xFC)].field_4;
    switch (AF(arg0, s16, 0x70)) {
    case 0:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_104_8019D2C0);
        func_8012A828(arg0, &D_sc03_104_8019D380);
        AF(arg0, s16, 2) = 1;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x2000;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x2000;
        break;
    case 1:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_104_8019D408);
        func_8012A828(arg0, &D_sc03_104_8019D4C8);
        AF(arg0, s16, 2) = 4;
        AF(AF(arg0, s32, 0x20), s32, 4) |= 0x80000000;
        AF(arg0, s32, 0x1C) = 8;
        AF(AF(arg0, s32, 0x20), s16, 0x1C) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3C00;
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, u8 *, 0x58) = &D_sc03_104_8019D5AC;
        AF(arg0, u16, 0x5C) = 0x8000;
        AF(arg0, s16, 0xAE) = -9;
        AF(arg0, u8 *, 0xBC) = &D_sc03_104_8019D5D0;
        AF(arg0, s32, 0xB4) = 0;
        AF(arg0, u8 *, 0x78) = &D_sc03_104_8019D284;
        AF(arg0, s32, 0xC4) |= 2;
        AF(arg0, s32, 0xCC) = func_8012C658(0x12F, 4, arg0);
        break;
    case 2:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_104_8019D2C0);
        func_8012A828(arg0, &D_sc03_104_8019D380);
        AF(arg0, s16, 2) = 6;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x2000;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x2000;
        break;
    case 3:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_104_8019D408);
        func_8012A828(arg0, &D_sc03_104_8019D4C8);
        AF(arg0, s16, 2) = 7;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3C00;
        AF(arg0, s32, 0x1C) = 6;
        break;
    case 4:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_104_8019D5BC);
        func_8012A828(arg0, &D_sc03_104_8019D5C8);
        AF(arg0, s16, 2) = 8;
        AF(AF(arg0, s32, 0x20), s32, 4) |= 0x08000000;
        AF(AF(arg0, s32, 0x20), s16, 0x1C) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3C00;
        break;
    case 5:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_104_8019D2C0);
        func_8012A828(arg0, &D_sc03_104_8019D380);
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

void func_sc03_104_801869E4(u8 *arg0) {
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

void func_sc03_104_80186B78(u8 *arg0) {
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

void func_sc03_104_80186F28(u8 *arg0) {
    s32 temp_v0;

    D_sc03_104_8019D5E0[AF(arg0, u16, 2)]();
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

void func_sc03_104_80187014(u8 *arg0) {
    D_sc03_104_8019D68C[AF(arg0, u16, 2)]();
}

void func_sc03_104_80187050(u8 *arg0) {
    D_sc03_104_8019D740[AF(arg0, u16, 2)]();
}

void func_sc03_104_8018708C(u8 *arg0) {
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, s16, 0x5E) = 0;
    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) & 0xC800);
}

void func_sc03_104_801870A4(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc03_104_8019D1C0) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32 *, 0xBC) = &D_sc03_104_8019D1A0;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 2);
        func_8012A828(arg0, (s32) &D_sc03_104_8018AFEC);
        AF(arg0, s16, 2) = 1;
        AF(arg0, u8, 0x75) = 0;
        AF(arg0, s16, 0xFE) = 1;
        func_8012C658(0x164, 0x555, arg0);
        func_8012C658(0x164, 0xAAA, arg0);
        func_8012C658(0x164, 0x1000, arg0);
    }
}

void func_sc03_104_80187148(u8 *arg0) {
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    AF(temp_a1, u16, 0x12) = (u16) (AF(temp_a1, u16, 0x12) + AF(arg0, u16, 0xFC));
}

void func_sc03_104_80187164(s32 arg0) {
    void *temp_a2;

    if (func_8012C354(arg0, (s32) &D_sc03_104_8019D284) != 0) {
        temp_a2 = AF(arg0, void *, 0x20);
        AF(temp_a2, s32, 4) = (s32) (AF(temp_a2, s32, 4) | 0x80000000);
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32 *, 0xBC) = &D_sc03_104_8019D1A0;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 2);
        func_8012A828(arg0, (s32) &D_sc03_104_8018AFEC, (s32) temp_a2);
        AF(arg0, s16, 2) = 1;
        AF(arg0, u8, 0x75) = 0;
    }
}

void func_sc03_104_801871E8(u8 *arg0, s32 arg2) {
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    AF(temp_a1, s16, 0x12) = (s16) (AF(AF(AF(arg0, void *, 0x64), void *, 0x20), u16, 0x12) + AF(arg0, u16, 0x70));
    func_8012B2CC((s32) arg0, (s32) temp_a1);
}

void func_sc03_104_80187224(u8 *arg0) {
    if (AF(arg0, u16, 0x5E) != 0x1D) {
        AF(arg0, s16, 0x5C) = 0;
        AF(arg0, s16, 2) = 7;
    } else {
        AF(arg0, u16, 0x5C) = 0x8000;
    }
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, u16, 0x5E) = 0U;
}

void func_sc03_104_80187254(s32 arg0) {
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

void func_sc03_104_801872D8(u8 *arg0) {
    if (func_8012BCCC(arg0) > 0x63FFF) {
        AF(arg0, s16, 2) = 5;
        return;
    }
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) += func_8012B608(AF(AF(arg0, u8 *, 0x20), s16, 0x12), func_8012B864(arg0), 0x10);
    func_8012B1B4(arg0, &D_sc03_104_8019D550);
    AF(arg0, s32, 0x14) += (D_80126CB6 - AF(arg0, s16, 0xA)) << 8;
    if (func_8012CBCC(arg0) != 0) {
        AF(arg0, s16, 0x16) = -0x18;
        func_8012E688(arg0, 0xBA2, 0);
    }
}

void func_sc03_104_8018739C(s32 arg0) {
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
        AF(arg0, u16, 0x12) = D_sc03_104_8019D55C[AF(arg0, s16, 0xFC)].field_0;
        AF(arg0, u16, 0x16) = D_sc03_104_8019D55C[AF(arg0, s16, 0xFC)].field_2;
        AF(arg0, u16, 0x1A) = D_sc03_104_8019D55C[AF(arg0, s16, 0xFC)].field_4;
    }
}

void func_sc03_104_8018747C(u8 *arg0) {
    if (func_8012BD14(arg0) <= 0x64000) {
        AF(arg0, s16, 2) = 1;
        AF(AF(arg0, u8 *, 0x20), s32, 4) &= 0x7FFFFFFF;
        func_80143970(arg0);
        func_8012E688(arg0, 0xBA2, 0);
    }
}

void func_sc03_104_801874EC(u8 *arg0) {
    struct_8_4 a;

    if (func_8012BCCC(arg0) <= 0x38400) {
        AF(arg0, s16, 2) = 2;
        return;
    }
    a.field_0 = AF(arg0, s16, 6);
    a.field_4 = AF(arg0, s16, 0xE);
    AF(AF(arg0, u8 *, 0x20), s16, 0x12) += func_8012B608(AF(AF(arg0, u8 *, 0x20), s16, 0x12), func_8012B70C(&a, arg0 + 0x88), 4);
    func_8012B1B4(arg0, &D_sc03_104_8019D550);
    AF(arg0, s32, 0x14) += (AF(arg0, s16, 0x8A) - AF(arg0, s16, 0xA)) << 8;
    if (func_8012CBCC(arg0) & 0x8000) {
        AF(arg0, s16, 0x16) = -4;
        func_8012E688(arg0, 0xBA2, 0);
    }
}

void func_sc03_104_801875C8(void) {
}

void func_sc03_104_801875D0(u8 *arg0) {
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

void func_sc03_104_80187688(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc03_104_8019D618) != 0) {
        func_8012A828(arg0, (s32) &D_sc03_104_8018AFEC);
        AF(arg0, s16, 2) = 1;
        AF(arg0, u8, 0x75) = 0;
        AF(arg0, u16, 0x12) = D_sc03_104_8019D64C[AF(arg0, s16, 0xFC) * 4];
        AF(arg0, u16, 0x16) = D_sc03_104_8019D64E[AF(arg0, s16, 0xFC) * 4];
        AF(arg0, u16, 0x1A) = D_sc03_104_8019D650[AF(arg0, s16, 0xFC) * 4];
        AF(arg0, s32, 0x1C) = D_sc03_104_8019D652[AF(arg0, s16, 0xFC) * 4];
        func_8012C588(0x1C4, arg0);
    }
}

void func_sc03_104_8018774C(s32 arg0) {
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

void func_sc03_104_801877A0(s32 arg0) {
    s32 t;

    if (--AF(arg0, s32, 0x1C) == 0) {
        t = D_sc03_104_8019D652[AF(arg0, s16, 0xFC) * 4];
        AF(arg0, u16, 0x12) = -AF(arg0, u16, 0x12);
        AF(arg0, u16, 0x16) = -AF(arg0, u16, 0x16);
        AF(arg0, u16, 0x1A) = -AF(arg0, u16, 0x1A);
        AF(arg0, s16, 2) = 1;
        AF(arg0, s32, 0x1C) = t;
    }
    func_8012DFD4(arg0);
}

void func_sc03_104_8018781C(s32 arg0) {
    s32 o;
    s16 st;

    o = func_8012C1B8();
    AF(arg0, s32, 0x20) = o;
    if (o == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001CA1C(o, &D_sc03_104_8019D698);
    func_8012A828(arg0, &D_sc03_104_8019D6F8);
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

void func_sc03_104_80187900(u8 *arg0) {
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

void func_sc03_104_801879CC(u8 *o) {
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

void func_sc03_104_80187AA4(u8 *arg0) {
    struct_8_6 a;
    struct_8_6 b;
    u16 s;
    u8 *o;
    s16 t;
    u16 v;

    func_8002AC00(0xD);
    if (AF(arg0, u16, 0) != 0) {
        b.field_0 = a.field_0 = AF(arg0, u16, 6);
        b.field_2 = a.field_2 = AF(arg0, u16, 0xA);
        b.field_4 = a.field_4 = AF(arg0, u16, 0xE);
        a.field_2 -= 8;
        b.field_2 += 8;
        if (!(func_8012CEB0(&a, &b, 0) & 0x1F) && !(AF(arg0, s16, 0x100) & 0x8000)) {
            s = AF(AF(arg0, u8 *, 0x20), u16, 0x12);
            func_8001C214(AF(arg0, u8 *, 0x20), &D_sc03_104_801A59A0);
            func_8012A828(arg0, &D_sc03_104_801AD0E4);
            AF(AF(arg0, u8 *, 0x20), u16, 0x12) = s;
            o = (u8 *)func_8012C658(0x12C, 1, arg0);
            if (o != 0) {
                if (AF(arg0, s16, 0xA) >= 0x10) {
                    func_8012C218(o);
                    return;
                }
                AF(AF(o, u8 *, 0x20), u16, 0x12) = s;
                func_8012B030(o);
                if (AF(arg0, s16, 0x70) == 5) {
                    v = AF(arg0, u16, 0x100);
                    AF(o, s16, 0x70) = 6;
                    AF(o, s16, 0xFE) = 1;
                    AF(o, u16, 0x100) = v;
                    do {
                        func_8012C658(0x12F, 5, o);
                        t = AF(o, s16, 0xFE) + 3;
                        AF(o, s16, 0xFE) = t;
                    } while (t < 0x10);
                    AF(o, s16, 0xFE) = 0;
                }
            }
        }
    }
}

void func_sc03_104_80187C28(u8 *arg0) {
    s16 t;

    if (func_8012C354(arg0, &D_sc03_104_8019F60C[AF(arg0, s16, 0x70)]) == 0) {
        func_8012CAE4(arg0);
        return;
    }
    AF(arg0, u8, 0xC0) = 1;
    AF(arg0, s32, 0xB4) = -0x401;
    func_80143970(arg0);
    switch (AF(arg0, s16, 0x70)) {
    case 0:
        func_8012A828(arg0, &D_sc03_104_801ABFEC);
        AF(arg0, s16, 2) = 1;
        func_8012B23C(arg0);
        AF(arg0, u8 *, 0xBC) = &D_sc03_104_8019F744;
        AF(arg0, s16, 0x100) = AF(arg0, s16, 0xFC);
        AF(arg0, s16, 0xFC) = 0;
        break;
    case 2:
        func_8012A828(arg0, &D_sc03_104_801AB8B4);
        AF(arg0, s16, 2) = 9;
        AF(arg0, u8 *, 0xBC) = &D_sc03_104_8019F7E4;
        AF(arg0, s16, 0x100) = AF(arg0, s16, 0xFC);
        break;
    case 1:
    case 3:
        func_8012A828(arg0, &D_sc03_104_801ACF64);
        AF(arg0, s16, 2) = 6;
        AF(arg0, u8 *, 0xBC) = &D_sc03_104_8019F82C;
        break;
    case 4:
        func_8012A828(arg0, &D_sc03_104_801ABFEC);
        AF(arg0, s16, 2) = 0xD;
        func_8012B23C(arg0);
        AF(arg0, u8 *, 0xBC) = &D_sc03_104_8019F744;
        AF(arg0, s16, 0xFC) = 0x1E;
        break;
    case 5:
        if (AF(arg0, s16, 0xFC) != 0) {
            func_8012A828(arg0, &D_sc03_104_801ACDE4);
            AF(arg0, s16, 2) = 0xE;
            AF(AF(arg0, u8 *, 0x20), s16, 0x12) = rand() & 0xFFF;
        } else {
            func_8012A828(arg0, &D_sc03_104_801ABFEC);
            AF(arg0, s16, 2) = 1;
        }
        func_8012B23C(arg0);
        AF(arg0, u8 *, 0xBC) = &D_sc03_104_8019F744;
        AF(arg0, s16, 0xFE) = 1;
        do {
            func_8012C658(0x12F, 5, arg0);
            t = AF(arg0, s16, 0xFE) + 1;
            AF(arg0, s16, 0xFE) = t;
        } while (t < 6);
        AF(arg0, s16, 0xFE) = 0;
        break;
    }
    func_8012B2CC(arg0);
}

void func_sc03_104_80187E4C(u8 *arg0) {
    s32 vec[8];
    struct_8_5 a;
    struct_8_5 b;
    struct_8_5 c;
    s32 sxy;
    s32 p;
    s32 flag;
    s32 x;
    s32 ax;
    s32 r;

    if (AF(arg0, u16, 0x72) & 0x4000) {
        func_8012A828(arg0, &D_sc03_104_801ABFEC);
        AF(arg0, s16, 0xFE) = 0;
    }
    AF(arg0, s16, 0xFC)++;
    if (func_8012BE98(arg0, arg0 + 0x88) >= 0x1000) {
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) += func_8012B608(AF(AF(arg0, u8 *, 0x20), s16, 0x12), func_8012B744(arg0 + 4, arg0 + 0x88), 0x20);
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) &= 0xFFF;
    }
    vec[0] = 0;
    vec[1] = 0;
    vec[2] = -(AF(arg0, s16, 0xFC) << 17) / 24;
    func_8012B1B4(arg0, vec);
    if (!(((s32 (*)())func_8012CBA4)(arg0) & 0x6000)) {
        AF(arg0, s32, 4) = AF(arg0, s32, 0x38);
        AF(arg0, s32, 8) = AF(arg0, s32, 0x3C);
        AF(arg0, s32, 0xC) = AF(arg0, s32, 0x40);
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) += func_8012B608(AF(AF(arg0, u8 *, 0x20), s16, 0x12), func_8012B744(arg0 + 4, arg0 + 0x88), 0x20);
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) &= 0xFFF;
    }
    r = 0x30;
    a.field_0 = AF(arg0, s16, 6) - ((rsin(AF(AF(arg0, u8 *, 0x20), u16, 0x12) & 0xFFF) * r) >> 12);
    a.field_2 = AF(arg0, s16, 0xA) - 0x20;
    a.field_4 = AF(arg0, s16, 0xE) - ((rcos(AF(AF(arg0, u8 *, 0x20), u16, 0x12) & 0xFFF) * r) >> 12);
    b.field_0 = a.field_0;
    b.field_2 = a.field_2 + 0x60;
    b.field_4 = a.field_4;
    if (!(func_80133784(1, &a, &b) & 0x6000)) {
        AF(arg0, s32, 4) = AF(arg0, s32, 0x38);
        AF(arg0, s32, 0xC) = AF(arg0, s32, 0x40);
    }
    if (AF(arg0, s16, 0xFE) == 0 && func_8012BD3C(arg0, 0x200, 0x40000) == 1) {
        func_8012A828(arg0, &D_sc03_104_801AB95C);
        AF(arg0, s16, 2) = 2;
        c.field_0 = AF(AF(arg0, u8 *, 0x20), s32, 0x48);
        c.field_2 = AF(AF(arg0, u8 *, 0x20), s32, 0x4C);
        c.field_4 = AF(AF(arg0, u8 *, 0x20), s32, 0x50);
        SetRotMatrix(&D_800AF630.field_18);
        SetTransMatrix(&D_800AF648);
        RotTransPers(&c, &sxy, &p, &flag);
        if (flag >= 0 && (u16)(((s16 *)&sxy)[0] + 0x9F) < 0x13F && (u16)(((s16 *)&sxy)[1] + 0x77) < 0xEF) {
            x = ((s16 *)&sxy)[0];
            ax = x;
            if (x < 0) {
                ax = -x;
            }
            ax = (0xA0 - ax) * 0x7F / 160;
            x = (x + 0xA0) / 20;
            if (x == 16) {
                x = 15;
            }
            x <<= 8;
            func_8002D4C8(0xA9B, (u16)(ax | 0x3000 | x));
        }
    }
    if (AF(arg0, s16, 0xFC) == 0x18) {
        AF(arg0, s16, 0xFC) = 0;
    }
}

void func_sc03_104_80188200(u8 *arg0) {
    s32 v[4];
    u8 unused[0x10];
    struct_8_6 a;
    struct_8_6 b;
    s32 t;
    s32 r;

    AF(arg0, s16, 0xFC)++;
    v[0] = 0;
    v[1] = 0;
    v[2] = -(AF(arg0, s16, 0xFC) << 17) / 36;
    func_8012B1B4(arg0, v);
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) += func_8012B8E4(arg0, 0x10);
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) &= 0xFFF;
    if (!(func_8012CBA4(arg0) & 0x6000)) {
        AF(arg0, s32, 4) = AF(arg0, s32, 0x38);
        AF(arg0, s32, 8) = AF(arg0, s32, 0x3C);
        AF(arg0, s32, 0xC) = AF(arg0, s32, 0x40);
    }
    r = 0x30;
    a.field_0 = AF(arg0, u16, 6) - ((rsin(AF(AF(arg0, u8 *, 0x20), u16, 0x12) & 0xFFF) * r) >> 12);
    a.field_2 = AF(arg0, u16, 0xA) - 0x20;
    a.field_4 = AF(arg0, u16, 0xE) - ((rcos(AF(AF(arg0, u8 *, 0x20), u16, 0x12) & 0xFFF) * r) >> 12);
    b.field_0 = a.field_0;
    b.field_2 = a.field_2 + 0x60;
    b.field_4 = a.field_4;
    if (!(func_80133784(1, &a, &b) & 0x6000)) {
        AF(arg0, s32, 4) = AF(arg0, s32, 0x38);
        AF(arg0, s32, 0xC) = AF(arg0, s32, 0x40);
    }
    t = func_8012BCCC(arg0);
    if (t < 0x1001 && func_8012BDBC(arg0, 0x200) == 1) {
        if (!(rand() & 3)) {
            func_8012A828(arg0, &D_sc03_104_801AC8EC);
            AF(arg0, s16, 2) = 5;
        } else {
            func_8012A828(arg0, &D_sc03_104_801AC26C);
            AF(arg0, s16, 2) = 0xF;
        }
    }
    if (t > 0x40000) {
        func_8012A828(arg0, &D_sc03_104_801ACAF4);
        AF(arg0, s16, 2) = 1;
        AF(arg0, s16, 0xFC) = 0;
        AF(arg0, s16, 0xFE) = 1;
    }
    if (AF(arg0, s16, 0xFC) == 0x24) {
        AF(arg0, s16, 0xFC) = 0;
    }
}

void func_sc03_104_80188440(u8 *arg0) {
    u8 unused[0x10];
    struct_8_7 p;
    s32 sxy;
    s32 pp;
    s32 flag;
    u8 *q;
    s32 x;
    s32 a;

    q = arg0 + 0x88;
    if (func_8012BE98(arg0, q) >= 0x1000) {
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) += func_8012B608(AF(AF(arg0, u8 *, 0x20), s16, 0x12), func_8012B744(arg0 + 4, q), 0x20);
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) &= 0xFFF;
    }
    func_8012B1B4(arg0, &D_sc03_104_8019F8A4);
    if (!(func_8012CBA4(arg0) & 0x6000)) {
        AF(arg0, s32, 4) = AF(arg0, s32, 0x38);
        AF(arg0, s32, 8) = AF(arg0, s32, 0x3C);
        AF(arg0, s32, 0xC) = AF(arg0, s32, 0x40);
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) += func_8012B608(AF(AF(arg0, u8 *, 0x20), s16, 0x12), func_8012B744(arg0 + 4, q), 0x20);
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) &= 0xFFF;
    }
    if (func_8012BD3C(arg0, 0x200, 0x40000) == 1) {
        AF(arg0, s16, 2) = 7;
        p.field_0 = AF(AF(arg0, u8 *, 0x20), s32, 0x48);
        p.field_2 = AF(AF(arg0, u8 *, 0x20), s32, 0x4C);
        p.field_4 = AF(AF(arg0, u8 *, 0x20), s32, 0x50);
        SetRotMatrix(&D_800AF630.field_18);
        SetTransMatrix(&D_800AF648);
        RotTransPers(&p, &sxy, &pp, &flag);
        if (flag >= 0 && ((s16 *)&sxy)[0] >= -0x9F && ((s16 *)&sxy)[0] < 0xA0 && ((s16 *)&sxy)[1] >= -0x77 && ((s16 *)&sxy)[1] < 0x78) {
            x = ((s16 *)&sxy)[0];
            a = x;
            if (x < 0) {
                a = -x;
            }
            a = (0xA0 - a) * 0x7F / 160;
            x = (x + 0xA0) / 20;
            if (x == 0x10) {
                x = 0xF;
            }
            x <<= 8;
            func_8002D4C8(0xA9B, (u16)(a | 0x3000 | x));
        }
    }
}

void func_sc03_104_801886A8(u8 *arg0) {
    u8 unused[0x10];
    struct_8_6 a;
    struct_8_6 b;
    s32 t;
    s32 r;

    func_8012B1B4(arg0, &D_sc03_104_8019F8A4);
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) += func_8012B8E4(arg0, 0x10);
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) &= 0xFFF;
    if (!(func_8012CBA4(arg0) & 0x6000)) {
        AF(arg0, s32, 4) = AF(arg0, s32, 0x38);
        AF(arg0, s32, 8) = AF(arg0, s32, 0x3C);
        AF(arg0, s32, 0xC) = AF(arg0, s32, 0x40);
    }
    r = 0x30;
    a.field_0 = AF(arg0, u16, 6) - ((rsin(AF(AF(arg0, u8 *, 0x20), u16, 0x12) & 0xFFF) * r) >> 12);
    a.field_2 = AF(arg0, u16, 0xA) - 0x20;
    a.field_4 = AF(arg0, u16, 0xE) - ((rcos(AF(AF(arg0, u8 *, 0x20), u16, 0x12) & 0xFFF) * r) >> 12);
    b.field_0 = a.field_0;
    b.field_2 = a.field_2 + 0x60;
    b.field_4 = a.field_4;
    if (!(func_80133784(1, &a, &b) & 0x6000)) {
        AF(arg0, s32, 4) = AF(arg0, s32, 0x38);
        AF(arg0, s32, 0xC) = AF(arg0, s32, 0x40);
    }
    t = func_8012BCCC(arg0);
    if (t < 0x2401 && func_8012BDBC(arg0, 0x200) == 1) {
        AF(arg0, s16, 2) = 0x11;
        func_8012A828(arg0, &D_sc03_104_801AC5AC);
    }
    if (t > 0x40000) {
        AF(arg0, s16, 2) = 6;
    }
}

void func_sc03_104_80188850(u8 *arg0) {
    struct_8_7 p;
    s32 sxy;
    s32 pp;
    s32 flag;
    s32 x;
    s16 y;

    if (AF(arg0, s32, 0x94) == 0xD) {
        p.field_0 = AF(AF(arg0, u8 *, 0x20), s32, 0x48);
        p.field_2 = AF(AF(arg0, u8 *, 0x20), s32, 0x4C);
        p.field_4 = AF(AF(arg0, u8 *, 0x20), s32, 0x50);
        SetRotMatrix(&D_800AF630.field_18);
        SetTransMatrix(&D_800AF648);
        RotTransPers(&p, &sxy, &pp, &flag);
        if (flag >= 0 && ((s16 *)&sxy)[0] >= -0x9F && ((s16 *)&sxy)[0] < 0xA0 && ((s16 *)&sxy)[1] >= -0x77 && ((s16 *)&sxy)[1] < 0x78) {
            x = ((s16 *)&sxy)[0];
            if (x < 0) {
                x = -x;
            }
            x = (0xA0 - x) * 0x7F / 160;
            func_8002D4C8(0x702, (u16)(x | 0x1000));
        }
    }
    if (func_8012BCCC(arg0) <= 0x24000) {
        if (++AF(arg0, s16, 0x102) >= 0x78) {
            if (!(AF(arg0, u16, 0x100) & 0x2000)) {
                func_8012A828(arg0, &D_sc03_104_801AD0FC);
                AF(arg0, s16, 2) = 0xA;
                AF(arg0, s16, 0x102) = 0;
                AF(arg0, s32, 0x58) = (s32)&D_sc03_104_8019F5DC | 0x40000000 | 0x20000000;
            }
        }
    }
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) += func_8012B8E4(arg0, 0x10);
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) &= 0xFFF;
    y = AF(arg0, s16, 0xA);
    if (y <= D_80126B62 - 0x100) {
        AF(arg0, s16, 0xA) = y + 8;
    } else if (y >= D_80126B62 - 0x80) {
        AF(arg0, s16, 0xA) = y - 8;
    }
    func_8012B1B4(arg0, &D_sc03_104_8019F8B0);
    func_8012CBCC(arg0);
}

void func_sc03_104_80188A9C(u8 *arg0) {
    s32 v[4];
    s32 d;
    s16 y;

    if (AF(arg0, s32, 0x94) == 0xA) {
        AF(arg0, s16, 0x98) = 0;
    }
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) += func_8012B8E4(arg0, 4);
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) &= 0xFFF;
    v[0] = 0;
    v[1] = 0;
    d = AF(arg0, s32, 4) - D_80126B5C;
    v[2] = d;
    if (d > 0) {
        v[2] = -d;
    }
    d = AF(arg0, s32, 0xC) - D_80126B64;
    v[3] = d;
    if (d > 0) {
        v[3] = -d;
    }
    v[2] = (v[2] + v[3]) >> 4;
    func_8012B1B4(arg0, v);
    y = AF(arg0, s16, 0xA);
    if (y <= D_80126B62 - 0xA) {
        AF(arg0, s16, 0xA) = y + 8;
    } else if (y >= D_80126B62) {
        AF(arg0, s16, 0xA) = y - 8;
    } else if (AF(arg0, s32, 0x94) == 0xA) {
        AF(arg0, s16, 2) = 0xB;
        AF(arg0, s16, 0x98) = 1;
    }
    func_8012CBCC(arg0);
}

void func_sc03_104_80188BE8(u8 *arg0) {
    u8 *p;
    s32 i;

    D_sc03_104_8019F8C8[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0 && (AF(arg0, u16, 0x100) & 0x1000)) {
        for (p = &D_801202A0, i = 0; i < 0x60; i++, p += 0x10C) {
            if (AF(p, u16, 0) == 0x15E) {
                if (AF(arg0, s16, 6) < AF(p, s16, 6) + 0xF0) {
                    AF(arg0, s16, 6) = AF(p, s16, 6) + 0xF0;
                }
                return;
            }
        }
    }
}

void func_sc03_104_80188CA0(u8 *arg0) {
    s16 v[8];
    s32 r[2];
    s32 t;
    u8 *o;
    u8 *g;

    g = D_801151D4;
    AF(arg0, s32, 0x1C) -= 1;
    v[1] = AF(g, s32, 0x5C);
    v[3] = AF(g, s32, 0x60);
    v[5] = AF(g, s32, 0x64);
    func_8012B77C(r, arg0 + 4, v);
    AF(AF(arg0, u8 *, 0x20), s16, 0x10) = (r[0] + 0x400) & 0xFFF;
    AF(AF(arg0, u8 *, 0x20), u16, 0x18) += 0x55;
    AF(AF(arg0, u8 *, 0x20), u16, 0x1A) += 0x55;
    t = AF(arg0, s32, 0x1C);
    if (t == 0xF) {
        func_8002D4C8(0xCBA, 0);
        t = AF(arg0, s32, 0x1C);
    }
    if (t < 0x10) {
        if (t == 0) {
            func_8012C218(arg0);
            return;
        }
        o = (u8 *) func_80143C74(arg0, 0);
        if (o != 0) {
            AF(o, s16, 0x16) = -4;
            AF(o, s16, 0x12) = (rand() & 7) - 4;
            AF(o, s16, 0x1A) = (rand() & 7) - 4;
            AF(o, s16, 6) += (rand() & 0x1F) - 0x10;
            AF(o, s16, 0xE) += (rand() & 0x1F) - 0x10;
        }
    }
}

void func_sc03_104_80188DF4(u8 *arg0) {
    D_sc03_104_8019F958[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) - 0x40);
        if (func_8012D624((s32) arg0, (s32) (AF(AF(arg0, void *, 0x20), u16, 0x18) << 0x10) >> 0x18, 0x14) == 1) {
            func_8012C218((s32) arg0);
            return;
        }
        AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) + 0x40);
        func_8012B370(arg0);
    }
}

void func_sc03_104_80188EA0(u8 *arg0) {
    D_sc03_104_8019FAB8[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) - 0x40);
        if (func_8012D624(arg0, 0x10, 0x16) == 1) {
            s16 *q = &D_80126B96;
            *q |= 0x200;
            func_8012C218(arg0);
            return;
        }
        AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) + 0x40);
    }
}

void func_sc03_104_80188F50(u8 *arg0) {
    struct_8_5 a;
    struct_8_5 b;
    u16 x, y, z;

    x = AF(arg0, u16, 6);
    a.field_0 = x;
    b.field_0 = x;
    y = AF(arg0, u16, 0xA);
    a.field_2 = y;
    b.field_2 = y;
    z = AF(arg0, u16, 0xE);
    a.field_2 = y - 8;
    b.field_2 = y + 8;
    a.field_4 = z;
    b.field_4 = z;
    if (func_8012CEB0(&a, &b, 0) & 0x1F) {
        func_80131E00(arg0, 6);
        return;
    }
    func_8012A828(arg0, &D_sc03_104_801ACE7C);
    AF(arg0, s16, 2) = 1;
    AF(arg0, u16, 0x5C) = 0xAA10;
    AF(arg0, u8 *, 0xBC) = &D_sc03_104_8019F744;
    AF(arg0, s16, 0xFC) = 0;
    AF(arg0, s32, 0x58) = (s32)&D_sc03_104_8019F5DC | 0x40000000 | 0x20000000;
    AF(arg0, u16, 0x88) = AF(arg0, u16, 6);
    AF(arg0, u16, 0x8A) = AF(arg0, u16, 0xA);
    AF(arg0, u16, 0x8C) = AF(arg0, u16, 0xE);
}

void func_sc03_104_80189038(u8 *arg0) {
    struct_8_5 a;
    struct_8_5 b;
    u16 x, y, z;

    x = AF(arg0, u16, 6);
    a.field_0 = x;
    b.field_0 = x;
    y = AF(arg0, u16, 0xA);
    a.field_2 = y;
    b.field_2 = y;
    z = AF(arg0, u16, 0xE);
    a.field_2 = y - 8;
    b.field_2 = y + 8;
    a.field_4 = z;
    b.field_4 = z;
    if (func_8012CEB0(&a, &b, 0) & 0x1F) {
        AF(arg0, u16, 0x100) |= 0x8000;
        func_80131E00(arg0, 6);
        return;
    }
    if (AF(arg0, u8 *, 0x90) == &D_sc03_104_801AB434) {
        func_8012A828(arg0, &D_sc03_104_801AB22C);
        AF(arg0, s16, 2) = 0x14;
        AF(arg0, s16, 0x34) = 1;
        AF(arg0, s16, 0xFE) = 0;
        AF(arg0, u8 *, 0xCC) = &D_sc03_104_801ABFEC;
    } else {
        if (AF(arg0, s16, 0xFE) != 0) {
            func_8012A828(arg0, &D_sc03_104_801ACAF4);
        } else {
            func_8012A828(arg0, &D_sc03_104_801ABFEC);
        }
        AF(arg0, s16, 2) = 1;
    }
    AF(arg0, s16, 0xFC) = 0;
    AF(arg0, u16, 0x5C) = 0xAA10;
}

void func_sc03_104_80189154(u8 *arg0) {
    s32 temp_v0;

    if (AF(arg0, u16, 0) != 0) {
        if (AF(arg0, s16, 0x70) == 4) {
            temp_v0 = func_8012C658(0x12C, 4, (s32) arg0);
            if (temp_v0 != 0) {
                AF(temp_v0, u16, 6) = (u16) AF(arg0, u16, 0x88);
                AF(temp_v0, u16, 0x88) = (u16) AF(arg0, u16, 0x88);
                AF(temp_v0, u16, 0xE) = (u16) AF(arg0, u16, 0x8C);
                AF(temp_v0, u16, 0x8C) = (u16) AF(arg0, u16, 0x8C);
                AF(temp_v0, s16, 0xA) = (s16) (AF(arg0, u16, 0x8A) - 0x400);
                AF(temp_v0, u16, 0x8A) = (u16) AF(arg0, u16, 0x8A);
                func_8012B2CC(temp_v0);
            }
        }
        if (func_80153BD8((s32) arg0) != 0) {
            func_80153BF0((s32) arg0);
        }
        if (AF(arg0, s32, 0x78) != 0) {
            func_8002A04C((s32) arg0);
        }
        func_8012C098((s32) arg0);
    }
}

void func_sc03_104_80189234(u8 *arg0) {
    struct_8_4 a;
    struct_8_4 b;

    if (AF(arg0, s32, 0x94) >= 8) {
        AF(arg0, s16, 0xFE) = 1;
        func_8012B1B4(arg0, &D_sc03_104_8019F5C0);
        if (!(func_8012CBA4(arg0) & 0x6000)) {
            a.field_0 = AF(arg0, u16, 0x3A);
            a.field_2 = AF(arg0, u16, 0x3E);
            a.field_4 = AF(arg0, u16, 0x42);
            b = a;
            b.field_2 += 8;
            if (func_80133784(1, &a, &b) != 0) {
                AF(arg0, s32, 4) = AF(arg0, s32, 0x38);
                AF(arg0, s32, 8) = AF(arg0, s32, 0x3C);
                AF(arg0, s32, 0xC) = AF(arg0, s32, 0x40);
            }
        }
    }
}

void func_sc03_104_8018930C(u8 *arg0) {
    AF(arg0, u16, 0x100) = (u16) (AF(arg0, u16, 0x100) | 0x8000);
    AF(arg0, u16, 0x60) = (u16) (AF(arg0, u16, 0x60) * 4);
    func_80131B14();
    AF(arg0, u8, 0xC2) = 0;
    AF(arg0, s16, 0x98) = 0;
    func_8012B23C((s32) arg0);
    func_80131A34((s32) arg0, 8);
    func_8002D4C8(0xA74, 0);
}

void func_sc03_104_80189374(u8 *arg0) {
    AF(arg0, s16, 0xFE) = 0;
    if (func_80153BD8((s32) arg0) != 0) {
        func_80153BF0((s32) arg0);
    }
}

void func_sc03_104_801893B0(u8 *arg0) {
    struct_8_5 a;
    struct_8_5 b;
    u16 x, y, z;

    x = AF(arg0, u16, 6);
    a.field_0 = x;
    b.field_0 = x;
    y = AF(arg0, u16, 0xA);
    a.field_2 = y;
    b.field_2 = y;
    z = AF(arg0, u16, 0xE);
    a.field_2 = y - 8;
    b.field_2 = y + 8;
    a.field_4 = z;
    b.field_4 = z;
    if (func_8012CEB0(&a, &b, 0) & 0x19) {
        func_80131E00(arg0, 6);
        return;
    }
    func_8012A828(arg0, &D_sc03_104_801ACF64);
    AF(arg0, s16, 2) = 6;
    AF(arg0, u16, 0x5C) = 0xA810;
}

void func_sc03_104_80189454(u8 *arg0) {
    struct_8_6 a;
    struct_8_6 b;

    func_8012B1B4(arg0, &D_sc03_104_8019F5C0);
    if (!(func_8012CBA4(arg0) & 0x6000)) {
        a.field_0 = AF(arg0, u16, 0x3A);
        a.field_2 = AF(arg0, u16, 0x3E);
        a.field_4 = AF(arg0, u16, 0x42);
        b = a;
        b.field_2 += 8;
        if (func_80133784(1, &a, &b) != 0) {
            AF(arg0, s32, 4) = AF(arg0, s32, 0x38);
            AF(arg0, s32, 8) = AF(arg0, s32, 0x3C);
            AF(arg0, s32, 0xC) = AF(arg0, s32, 0x40);
        }
    }
}

void func_sc03_104_80189514(u8 *arg0) {
    AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) & ~4);
    func_8012B14C((s32) arg0, (s32) &D_sc03_104_8019F5D0);
}

void func_sc03_104_80189548(u8 *arg0) {
    if (AF(arg0, u8, 0x5E) == 0x23) {
        AF(arg0, u16, 0x100) = (u16) (AF(arg0, u16, 0x100) | 0x4000);
    }
    if (func_80153BD8((s32) arg0) != 0) {
        func_80153BF0((s32) arg0);
    }
}

void func_sc03_104_801895A4(s32 arg0) {
    if (func_80153BD8(arg0) != 0) {
        func_80153BF0(arg0);
    }
}

void func_sc03_104_801895DC(u8 *arg0, s32 arg1, s32 arg2) {
    if (AF(arg0, u16, 0x72) & 0x4000) {
        func_8012A828((s32) arg0, (s32) &D_sc03_104_801ABACC, arg2);
        AF(arg0, s16, 2) = 3;
        AF(arg0, s16, 0xFC) = 0;
        AF(arg0, s16, 0xFE) = 1;
    }
}

void func_sc03_104_80189638(s32 arg0) {
    s32 temp_v1;

    if (func_80153BD8(arg0) == 0) {
        func_80153BF0(arg0);
        func_8012A828(arg0, (s32) &D_sc03_104_801ABACC);
        AF(arg0, s16, 2) = 0x13;
        AF(arg0, s16, 0x34) = 3;
        AF(arg0, s16, 0xFC) = 0;
        AF(arg0, s32, 0x1C) = 0x1E;
    }
    temp_v1 = AF(arg0, s32, 0x94);
    if ((temp_v1 == 0xA || temp_v1 == 0x1A) && func_8012DEB8(arg0, (s32) &D_sc03_104_8019F884, (s32) &D_sc03_104_8019F88C) == 1) {
        func_8002D4C8(0xCB2, 0);
        if ((u16)(AF(arg0, u16, 0x70) - 2) < 2) {
            func_80153C74(3, 0x18);
        } else {
            func_80153C74(1, 0x14);
        }
    }
}

void func_sc03_104_80189710(u8 *arg0) {
    s32 var_a0;

    if (AF(arg0, s32, 0x94) == 0x17) {
        if (AF(arg0, s16, 0x70) == 2) {
            var_a0 = 0x1A7;
        } else {
            func_8002D4C8(0xCB3, 0);
            var_a0 = 0x19F;
        }
        func_8012C588(var_a0, (s32) arg0);
    }
    if (AF(arg0, u16, 0x72) & 0x4000) {
        func_8012A828((s32) arg0, (s32) &D_sc03_104_801ABACC);
        AF(arg0, s16, 2) = 3;
        AF(arg0, s16, 0xFC) = 0;
        AF(arg0, s16, 0xFE) = 0;
    }
}

void func_sc03_104_801897A4(s32 arg0) {
    if (func_80153BD8(arg0) == 0) {
        func_80153BF0(arg0);
        func_8012A828(arg0, (s32) &D_sc03_104_801AC7E4);
        AF(arg0, s16, 0x34) = 7;
        AF(arg0, s16, 2) = 0x13;
        AF(arg0, s32, 0x1C) = 0x1E;
    }
    if (AF(arg0, s32, 0x94) == 0x17 && func_8012DEB8(arg0, (s32) &D_sc03_104_8019F884, (s32) &D_sc03_104_8019F88C) == 1) {
        func_8002D4C8(0xCB2, 0);
        if ((u16)(AF(arg0, u16, 0x70) - 2) < 2) {
            func_80153C74(3, 0x18);
        } else {
            func_80153C74(1, 0x14);
        }
    }
}

void func_sc03_104_80189870(u8 *arg0) {
    if (AF(arg0, u16, 0x72) & 0x4000) {
        AF(arg0, s16, 2) = 0xC;
        func_8012B1B4((s32) arg0, (s32) &D_sc03_104_8019F8BC);
        AF(arg0, s16, 0x16) = -8;
        func_8012A828((s32) arg0, (s32) &D_sc03_104_801AB8B4);
        AF(arg0, s16, 0x98) = 1;
    }
    if (AF(arg0, s32, 0x94) == 0xF && func_8012D5E4((s32) arg0, (s32) &D_sc03_104_8019F894, (s32) &D_sc03_104_8019F89C, 0x14) == 1) {
        func_8002D4C8(0xCB2, 0);
        if ((u16)(AF(arg0, u16, 0x70) - 2) < 2) {
            s16 *q = &D_80126B96;
            D_80126B98 = 0x18;
            *q |= 0x2000;
        }
    }
}

void func_sc03_104_80189948(u8 *arg0) {
    u16 temp_v0;

    if (AF(arg0, s32, 0x94) == 0xD) {
        func_8002D4C8(0x702, 0x107F);
    }
    func_8012CBCC((s32) arg0);
    temp_v0 = AF(arg0, u16, 0x102) + 1;
    AF(arg0, u16, 0x102) = temp_v0;
    if ((s16) temp_v0 == 0x1E) {
        AF(arg0, s16, 2) = 9;
        func_8012A828((s32) arg0, (s32) &D_sc03_104_801AB8B4);
        AF(arg0, u16, 0x102) = 0U;
        AF(arg0, s32, 0x14) = 0;
        AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc03_104_8019F5EC | 0x40000000 | 0x20000000);
    }
}

void func_sc03_104_801899E4(u8 *arg0) {
    s16 temp_v0;

    temp_v0 = AF(arg0, s16, 0xFC);
    if (temp_v0 != 0) {
        AF(arg0, s16, 0xFC) = (s16) (temp_v0 - 1);
        return;
    }
    if (func_8012CBCC((s32) arg0) & 0x6000) {
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc03_104_80189A3C(void) {
}

void func_sc03_104_80189A44(s32 arg0) {
    if (func_8012DEB8(arg0, (s32) &D_sc03_104_8019F884, (s32) &D_sc03_104_8019F88C) == 1) {
        D_80126B96 = 0x400F;
        D_80126B98 = 0;
        D_80127078 = arg0;
        AF(arg0, s16, 2) = 0x10;
        func_8012A828(arg0, (s32) &D_sc03_104_801AC374);
        return;
    }
    func_8012A828(arg0, (s32) &D_sc03_104_801ACAF4);
    AF(arg0, s16, 2) = 3;
    AF(arg0, s16, 0xFC) = 0;
    AF(arg0, s16, 0xFE) = 1;
}

void func_sc03_104_80189AE4(s32 arg0) {
    if (func_80153BD8(arg0) == 0) {
        func_8012A828(arg0, (s32) &D_sc03_104_801ACAF4);
        AF(arg0, s16, 2) = 3;
        AF(arg0, s16, 0xFC) = 0;
        return;
    }
    AF(arg0, s16, 2) = 4;
}

void func_sc03_104_80189B38(s32 arg0) {
    if (func_8012DEB8(arg0, (s32) &D_sc03_104_8019F884, (s32) &D_sc03_104_8019F88C) == 1) {
        D_80126B96 = 0x400F;
        D_80126B98 = 0;
        D_80127078 = arg0;
        AF(arg0, s16, 2) = 0x12;
        func_8012A828(arg0, (s32) &D_sc03_104_801AC6B4);
        return;
    }
    func_8012A828(arg0, (s32) &D_sc03_104_801ACF64);
    AF(arg0, s16, 2) = 6;
}

void func_sc03_104_80189BCC(s32 arg0) {
    if (func_80153BD8(arg0) == 0) {
        func_8012A828(arg0, (s32) &D_sc03_104_801AC7E4);
        AF(arg0, s16, 2) = 6;
    } else {
        AF(arg0, s16, 2) = 8;
    }
}

void func_sc03_104_80189C14(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == 0) {
        AF(arg0, u16, 2) = (u16) AF(arg0, u16, 0x34);
    }
}

void func_sc03_104_80189C3C(u8 *arg0, s32 arg1, s32 arg2) {
    if ((AF(arg0, u16, 0x72) & 0x4000) || (AF(arg0, s16, 0x98) == 0)) {
        AF(arg0, u16, 2) = (u16) AF(arg0, u16, 0x34);
        func_8012A828((s32) arg0, AF(arg0, s32, 0xCC), arg2);
    }
}

void func_sc03_104_80189C88(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001CA1C(temp_v0, (s32) &D_sc03_104_8019F91C);
    func_8012A828((s32) arg0, (s32) &D_sc03_104_8019F934);
    AF(AF(arg0, s32, 0x20), u16, 0x12) = (u16) AF(AF(AF(arg0, void *, 0x64), void *, 0x20), u16, 0x12);
    func_8012B23C((s32) arg0);
    func_8012B2CC((s32) arg0);
    func_8012B14C((s32) arg0, (s32) &D_sc03_104_8019F94C);
    AF(arg0, s16, 2) = 1;
    AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) - 0x90);
    AF(arg0, u16, 6) = (u16) (AF(arg0, u16, 6) - (rsin((s32) (s16) AF(AF(arg0, s32, 0x20), u16, 0x12)) >> 8));
    AF(arg0, u16, 0xE) = (u16) (AF(arg0, u16, 0xE) - (rcos((s32) (s16) AF(AF(arg0, s32, 0x20), u16, 0x12)) >> 8));
}

void func_sc03_104_80189D74(s32 arg0) {
    void *temp_a0;
    void *temp_v1;

    if (func_8012CBCC(arg0) & 0x2000) {
        temp_v1 = AF(arg0, void *, 0x20);
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x1C) = 0x3C;
        AF(arg0, s16, 0x98) = 1;
        AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
        temp_a0 = AF(arg0, void *, 0x20);
        AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) | 0x08000000);
        AF(AF(arg0, void *, 0x20), s16, 0x12) = 0;
        func_8002D4C8(0xCB4, 0);
    }
}

void func_sc03_104_80189DF8(u8 *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001CA1C(temp_v0, (s32) &D_sc03_104_8019F964);
    func_8012A828((s32) arg0, (s32) &D_sc03_104_8019FA24);
    AF(arg0, s32, 0x94) = (s32) (rand() & 0xF);
    AF(AF(arg0, s32, 0x20), u16, 0x12) = (u16) AF(AF(AF(arg0, void *, 0x64), void *, 0x20), u16, 0x12);
    func_8012B23C((s32) arg0);
    func_8012B2CC((s32) arg0);
    func_8012B14C((s32) arg0, (s32) &D_sc03_104_8019FAAC);
    temp_v1 = AF(arg0, s32, 0x20);
    AF(arg0, s16, 2) = 1;
    AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
    AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) - 0x90);
    AF(arg0, u16, 6) = (u16) (AF(arg0, u16, 6) - (rsin((s32) (s16) AF(AF(arg0, s32, 0x20), u16, 0x12)) >> 8));
    AF(arg0, u16, 0xE) = (u16) (AF(arg0, u16, 0xE) - (rcos((s32) (s16) AF(AF(arg0, s32, 0x20), u16, 0x12)) >> 8));
}

void func_sc03_104_80189F04(s32 arg0) {
    if (func_8012CBCC(arg0) & 0x2000) {
        AF(arg0, s16, 2) = 2;
    }
}

void func_sc03_104_80189F3C(u8 *arg0, s32 arg1) {
    void *temp_v1;
    void *temp_v1_2;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x18) = (u16) (AF(temp_v1, u16, 0x18) + 0x200);
    temp_v1_2 = AF(arg0, void *, 0x20);
    AF(temp_v1_2, u16, 0x1A) = (u16) (AF(temp_v1_2, u16, 0x1A) - 0x200);
    if ((s16) AF(AF(arg0, void *, 0x20), u16, 0x1A) < 0x401) {
        func_8012C218((s32) arg0, arg1);
    }
}

void func_sc03_104_80189FA8(u8 *arg0) {
    D_sc03_104_801BCC04[AF(arg0, u16, 2)]();
}

void func_sc03_104_80189FE4(u8 *arg0) {
    struct_30_2 *p;

    AF(arg0, s16, 0xFE) = 0;
    switch (AF(arg0, s16, 0xFC)) {
    case 0:
        func_8002850C(D_sc03_104_801BCB24, D_sc03_104_801BCB26, D_sc03_104_801BCB28);
        p = &D_sc03_104_801BCB2C;
        func_8012AD44(arg0, 1);
        break;
    case 1:
        func_8002850C(D_sc03_104_801BCB5C, D_sc03_104_801BCB5E, D_sc03_104_801BCB60);
        p = &D_sc03_104_801BCB64;
        func_8012AD44(arg0, 2);
        break;
    case 2:
        func_8002850C(D_sc03_104_801BCB94, D_sc03_104_801BCB96, D_sc03_104_801BCB98);
        p = &D_sc03_104_801BCB9C;
        func_8012AD44(arg0, 3);
        break;
    case 3:
        func_8002850C(D_sc03_104_801BCB24, D_sc03_104_801BCB26, D_sc03_104_801BCB28);
        p = &D_sc03_104_801BCB2C;
        func_8012AD44(arg0, 4);
        break;
    case 4:
        func_8002850C(D_sc03_104_801BCBCC, D_sc03_104_801BCBCE, D_sc03_104_801BCBD0);
        p = &D_sc03_104_801BCBD4;
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

void func_sc03_104_8018A1D8(u8 *arg0) {
    D_800A5E88.field_20 = D_sc03_104_801BCB4C;
    D_800A5EB0 = rsin(AF(arg0, s16, 0xFE)) * 10 / 4096 - 5;
    AF(arg0, u16, 0xFE) = (AF(arg0, u16, 0xFE) + 0x71) & 0xFFF;
    func_80028620(2, &D_800A5E88.field_20);
}

void func_sc03_104_8018A288(u8 *arg0) {
    D_800A5E88.field_20 = D_sc03_104_801BCB84;
    D_800A5EB0 = rsin(AF(arg0, s16, 0xFE)) * 6 / 4096 - 3;
    AF(arg0, u16, 0xFE) = (AF(arg0, u16, 0xFE) + 0x71) & 0xFFF;
    func_80028620(2, &D_800A5E88.field_20);
}

void func_sc03_104_8018A338(u8 *arg0) {
    D_800A5E88.field_0 = D_sc03_104_801BCB9C.field_0;
    D_800A5E90 = rsin(AF(arg0, s16, 0xFE)) * 20 / 4096 - 10;
    AF(arg0, u16, 0xFE) = (AF(arg0, u16, 0xFE) + 0x71) & 0xFFF;
    func_80028620(0, &D_800A5E88);
}

void func_sc03_104_8018A3E8(void) {
}

void func_sc03_104_8018A3F0(u8 *arg0) {
    D_800A5E88.field_0 = D_sc03_104_801BCBD4.field_0;
    D_800A5E90 = rsin(AF(arg0, s16, 0xFE)) / 512 + 8;
    AF(arg0, u16, 0xFE) = (AF(arg0, u16, 0xFE) + 0x71) & 0xFFF;
    func_80028620(0, &D_800A5E88);
}

void func_sc03_104_8018A494(u8 *arg0) {
    D_sc03_104_801BCF4C[AF(arg0, u16, 2)]();
}

void func_sc03_104_8018A4D0(s32 arg0) {
    s32 temp_v0;

    if (func_8012C354(arg0, (s32) &D_sc03_104_801BCC3C) != 0) {
        if (!(func_80029178(D_sc03_104_801BCCA4[AF(AF(arg0, void *, 0xDC), u16, 0xA)]) & 0xFF)) {
            AF(arg0, s32, 0xCC) = func_801788B8(arg0, (s32) &func_sc03_104_8018AB7C);
        } else {
            AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) | 0x4000);
        }
        temp_v0 = func_8012C658(0x8F, (s32) (s16) AF(arg0, u16, 0x70), arg0);
        AF(arg0, s32, 0x6C) = temp_v0;
        if (temp_v0 == 0) {
            func_8012CAE4(arg0);
            return;
        }
        func_8012A828(arg0, (s32) &D_sc03_104_8018AFEC);
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc03_104_8018A5A4(u8 *arg0) {
    AF(AF(AF(arg0, void *, 0x6C), void *, 0x20), s16, 0x12) = (s16) ((AF(AF(arg0, void *, 0x20), u16, 0x12) + 0x800) & 0xFFF);
    AF(arg0, s16, 2) = 2;
}

void func_sc03_104_8018A5CC(void) {
}

void func_sc03_104_8018A5D4(u8 *arg0) {
    s32 *var_a1;
    s32 var_v0;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0xDC);
    if (!(AF(temp_s0, u16, 8) & 0x8000)) {
        if (func_80029178(0x1D) & 0xFF) {
            D_sc03_104_801BCE88 = AF(temp_s0, s32, 4);
            if (!(AF(temp_s0, u16, 8) & 0x4000)) {
                var_v0 = D_sc03_104_801BCDEC[AF(temp_s0, u16, 0xC)];
                goto block_6;
            }
            D_sc03_104_801BCE74 = 0;
            func_80029124(D_sc03_104_801BCDEC[AF(temp_s0, u16, 0xC)], 1);
            D_sc03_104_801BCE70 = 2;
        } else {
            D_sc03_104_801BCE88 = AF(temp_s0, s32, 0);
            var_v0 = D_sc03_104_801BCD68[AF(temp_s0, u16, 0xC)];
block_6:
            D_sc03_104_801BCE70 = 0;
            D_sc03_104_801BCE74 = var_v0;
        }
        func_80178CBC((s32) arg0, (s32) &D_sc03_104_801BCE9C);
    } else {
        var_a1 = &D_sc03_104_801BCF08;
        *var_a1 = AF(temp_s0, s32, 0);
        func_80178CBC((s32) arg0, (s32) (var_a1 - 7));
    }
    AF(arg0, s16, 2) = 4;
    AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) | 0x8000);
}

void func_sc03_104_8018A720(u8 *arg0) {
    void *temp_s2;

    temp_s2 = AF(arg0, void *, 0xDC);
    if (func_801789AC((s32) arg0) != 0) {
        func_80178D18((s32) arg0);
        if (func_80029178(D_sc03_104_801BCCA4[AF(temp_s2, u16, 0xA)]) & 0xFF) {
            if (D_sc03_104_801BCCA4[AF(temp_s2, u16, 0xA)] == 0x54) {
                func_80029514(0x5A);
                func_80029124(0xEA, 1);
            }
            if ((AF(temp_s2, u16, 8) & 0x4000) && (func_80029178(0x1D) & 0xFF)) {
                func_80145EE8(0);
            }
            if (func_sc03_104_8018A924() == 1) {
                func_8002AC00(0x26);
            }
            AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) & 0x8000);
            func_8012C218(AF(arg0, s32, 0xCC));
        }
        AF(arg0, s16, 2) = 2;
    }
}

void func_sc03_104_8018A840(u8 *arg0) {
    AF(arg0, s16, 2) = 2;
    func_8012C218(AF(arg0, s32, 0xCC));
}

void func_sc03_104_8018A86C(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 1;
}

void func_sc03_104_8018A87C(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 2;
}

void func_sc03_104_8018A88C(u8 *arg0) {
    func_80029124(D_sc03_104_801BCCA4[AF(AF(arg0, void *, 0xDC), u16, 0xA)], 1);
}

void func_sc03_104_8018A8CC(u8 *arg0) {
    func_8014ADA8((s32) &D_80126B58, (s32) AF(AF(arg0, void *, 0xDC), u16, 0xC));
}

s32 func_sc03_104_8018A900(void) {
    return func_80174764() == 1;
}

s32 func_sc03_104_8018A924(void) {
    s32 i;

    for (i = 0; i < 0x26; i++) {
        if (!(func_80029178(D_sc03_104_801BCCA4[i]) & 0xFF)) {
            return 0;
        }
    }
    return 1;
}

void func_sc03_104_8018A988(u8 *arg0) {
    D_sc03_104_801BCF74[AF(arg0, u16, 2)]();
}

void func_sc03_104_8018A9C4(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc03_104_801BCC70) != 0) {
        AF(arg0, u16, 0xFC) = (u16) AF(AF(arg0, void *, 0x64), u16, 0x36);
        if (AF(arg0, u16, 0x70) & 0x4000) {
            func_8012A828(arg0, (s32) &D_sc03_104_801BD634);
            AF(arg0, s16, 0x5C) = 0;
        } else {
            func_8012A828(arg0, (s32) &D_sc03_104_801BD414);
        }
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc03_104_8018AA4C(u8 *arg0, s32 arg1) {
    s16 temp_v1;

    if (AF(arg0, s16, 0xFC) != AF(AF(arg0, void *, 0x64), s16, 0x36)) {
        func_8012C218((s32) arg0, arg1);
        return;
    }
    temp_v1 = AF(arg0, s16, 0xFE);
    if (temp_v1 == 1) {
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x1C) = 0x20;
        func_8012A828((s32) arg0, (s32) &D_sc03_104_801BD424);
        AF(arg0, s16, 0x5C) = 0;
        func_8002D4C8(0x5BF, 0);
    } else if (temp_v1 == 2) {
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x1C) = 0x20;
        func_8012A828((s32) arg0, (s32) &D_sc03_104_801BD52C);
        AF(arg0, u16, 0x5C) = 0x8C00;
    }
}

void func_sc03_104_8018AB0C(u8 *arg0) {
    s32 f;

    if (AF(arg0, s16, 0x98) == 0) {
        f = AF(arg0, s16, 0xFE);
        AF(arg0, s16, 2) = 1;
        if (f == 1) {
            func_8012A828((s32) arg0, (s32) &D_sc03_104_801BD634);
        } else {
            func_8012A828((s32) arg0, (s32) &D_sc03_104_801BD414);
        }
        AF(arg0, s16, 0xFE) = 0;
    }
}

s32 *func_sc03_104_8018AB7C(u8 *o) {
    struct_8_4 a;
    struct_8_4 b;
    s32 f;
    u8 *p;
    s32 *r;

    p = AF(o, u8 *, 0x64);
    gte_SetRotMatrix((u8 *) D_80126B78 + 0x34);
    gte_SetTransMatrix((u8 *) D_80126B78 + 0x34);
    RotTransSV(&D_sc03_104_801BCF64[0], &a, &f);
    RotTransSV(&D_sc03_104_801BCF64[1], &b, &f);
    if (func_80135888(AF(p, s32, 0x20), AF(p, s32, 0x58), &a, &b) != 0 && func_8012BDBC(p, 0x300) != 0) {
        AF(p, s16, 2) = 3;
        func_80178BF8();
        r = (s32 *) &func_80172710;
    } else {
        r = NULL;
    }
    return r;
}
