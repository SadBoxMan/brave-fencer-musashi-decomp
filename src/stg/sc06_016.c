#include "common.h"
#include "gte.h"
#include "psyq.h"
extern void func_sc06_016_8017F5FC();
void func_sc06_016_801845E8(s32 arg0);
void func_sc06_016_80184660(s16 arg0, s32 arg1);
s32 func_sc06_016_8017EBB8(s32 arg0);
void func_sc06_016_8017E4AC(s32 arg0);
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc06_016_8017BE9C(void) {
}

void func_sc06_016_8017BEA4(void) {
}

void func_sc06_016_8017BEAC(void) {
}

void func_sc06_016_8017BEB4(void) {
}

typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_4;
typedef struct { s16 field_0[6]; } struct_C_3;
extern void (*D_sc06_016_801888D8[])();
extern void (*D_sc06_016_80188930[])();
typedef struct { s16 field_0, field_2; } struct_4_2;
typedef struct { struct_4_2 field_0; s16 field_4; s16 field_6; struct_4_2 field_8; s32 field_C; s32 field_10; s32 field_14; s32 field_18; } struct_1C;
typedef struct { s32 field_0, field_4, field_8; } struct_C_4;
void func_sc06_016_8017DB0C(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc06_016_80188938[])();
void func_sc06_016_80182BCC(void);
extern void (*D_sc06_016_80188940[])();
void func_sc06_016_8017DB34(void);
extern void func_800D1EBC();
extern void (*D_sc06_016_8018894C[])();
extern u8 D_sc06_016_80188958;
extern void func_8016EE40();
extern u8 D_sc06_016_80188964;
extern void func_sc06_016_8017DBF8();
extern void (*D_sc06_016_80188970[])();
extern s32 func_80178970();
extern void func_80178D18();
extern void (*D_sc06_016_80188E60[])();
extern void (*D_sc06_016_801890AC[])();
extern void (*D_sc06_016_801890B4[])();
extern void (*D_sc06_016_801890E4[])();
extern void (*D_sc06_016_80189104[])();
extern void (*D_sc06_016_80189110[])();
extern void (*D_sc06_016_801891D4[])();
extern s16 D_sc06_016_8019F71C;
extern u8 D_sc06_016_8019A464;
extern void (*D_sc06_016_8019A47C[])();
extern u8 D_sc06_016_8019A484;
extern void (*D_sc06_016_8019A490[])();
extern void (*D_sc06_016_8019A524[])();
extern void (*D_sc06_016_8019A5A0[])();
extern void (*D_sc06_016_8019A5DC[])();

extern s32 func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

extern s32 func_8012BEE8();
extern void func_sc06_016_8017E1D8();
extern u8 D_sc06_016_801A001C;
extern u16 D_sc06_016_801A0014;
extern u16 D_sc06_016_801A0016;
extern s16 D_sc06_016_801A0018;
extern s16 D_sc06_016_801A001A;
extern s32 func_sc06_016_80184010();
extern void func_sc06_016_80183F3C();
extern void func_80015978();
extern s32 func_sc06_016_80184484();
extern s32 func_sc06_016_801847C8();
extern void func_sc06_016_801846AC();

extern s16 D_sc06_016_8019FF14;

extern s32 func_sc06_016_8017BF34();
extern void func_8002931C();
extern void (*D_sc06_016_801889F4[])();
extern void func_8012DFD4();
extern s32 D_80126B60;
extern void func_8012AD80();
s32 func_sc06_016_8017E8A8(s32 arg0);

void func_sc06_016_8017BEBC(s32 arg0, s32 arg1) {
    func_sc06_016_8017BF34(arg0, arg1, 0xC, 0);
}

void func_sc06_016_8017BEE0(s32 arg0, s32 arg1, s16 arg2) {
    func_sc06_016_8017BF34(arg0, arg1, (s32) arg2, 0);
}

void func_sc06_016_8017BF08(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_sc06_016_8017BF34(arg0, arg1, (s32) (s16) arg2, (s32) (s16) arg3);
}

extern void func_sc06_016_80184578();

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
extern u8 D_sc06_016_801889AC;
extern u8 D_sc06_016_801889EC;
extern s32 func_8012C354();
extern void func_8001D0E8();
extern s16 D_sc06_016_80188A14;
extern u8 D_sc06_016_801947F4;
extern void func_sc06_016_8017EEFC();
extern u8 D_sc06_016_80194FFC;
extern u16 D_sc06_016_8019F708;
extern s16 D_sc06_016_8019F70C;
extern s32 func_8012C588();
extern u8 D_sc06_016_80188BFC;
extern u8 D_sc06_016_80196974;
extern void func_8002A04C();
extern void func_80029514();
extern void func_80178BF8();
extern void func_801746A4();
extern s32 func_80178CBC();
extern s16 D_sc06_016_8019F720;
extern void (*D_sc06_016_80188CF4[])();
extern void func_sc06_016_8017EE78();
extern s32 func_8012B8A4();
extern s32 func_80132EF4();
extern s32 func_8012C658();
extern void func_sc06_016_8017ECE0();
extern void func_sc06_016_8017E114();
extern void func_sc06_016_8017E4FC();
extern u16 D_sc06_016_8019F710;
extern void func_sc06_016_8017E7D0();
extern void func_sc06_016_8017E96C();
extern void func_sc06_016_8017EAE4();
extern u16 D_sc06_016_80188BB4;
extern u8 D_80126B58;
extern void func_8014708C();
extern void func_801472C8();
extern void func_80147084();
extern void func_801472B4();
extern u8 D_sc06_016_80191CBC;
extern u8 D_sc06_016_80192B1C;
extern s32 D_sc06_016_8019F9FC;
extern s32 func_8012C1B8();
extern void func_8012CAE4();
extern void func_8001C214();
extern void func_8012E8A8();
extern void func_sc06_016_8017FE90();
extern void func_80132784();
extern s32 func_8012C218();
extern s16 D_sc06_016_801890E0[];
extern s32 func_8012BD14();
extern s32 func_sc06_016_80181018();
extern void func_80143994();
extern u8 D_sc06_016_801937DC;
extern void func_8001C810();
extern void func_sc06_016_801813B0();
extern void func_sc06_016_80181840();
extern void func_8012B2CC();
extern u8 D_sc06_016_801891BC;
extern u8 D_sc06_016_801891C4;
extern void func_8012E8E0();
extern s32 func_sc06_016_80183020();
extern void func_80171928();
extern void func_80171990();
extern u8 D_sc06_016_801851C4;
extern u8 D_sc06_016_8019A4F0;
extern u8 D_sc06_016_8019A5A8;
extern void func_sc06_016_801830B4();

extern void func_8002AED0();
extern void func_sc06_016_8017E910();
extern s32 func_sc06_016_8017EB3C();

extern s16 D_sc06_016_80188A16;
extern u8 D_sc06_016_801963EC;
extern s16 D_sc06_016_8019F6FC;
extern s32 D_sc06_016_8019F700;
extern s16 D_sc06_016_8019F704;
extern s32 func_sc06_016_8017EEB4();
extern s16 D_sc06_016_80188A18;
extern u8 D_sc06_016_80195614;
extern void func_sc06_016_8017EDA0();
extern u8 D_sc06_016_80193CE4;
extern s16 D_80126B66;
extern s32 D_80126D50;

extern u16 D_sc06_016_8019F714;
extern u8 D_sc06_016_80188A04;
extern u8 D_sc06_016_80188A40;
extern u8 D_sc06_016_80188A70;
extern s32 D_sc06_016_8019F6F8;
extern s16 D_sc06_016_8019F724;

extern u16 D_sc06_016_80188A1A;
extern u8 D_sc06_016_80195E24;
extern u8 D_sc06_016_80188D38[];
extern void func_8012E88C();
s32 func_sc06_016_8017F124(s32 arg0);
s32 func_sc06_016_8017F13C(s32 arg0);

extern s16 D_sc06_016_80188A2A[];


extern u8 D_sc06_016_801890D8;
extern void func_sc06_016_80180F68();

typedef struct { s16 field_0[3][3]; s16 field_12; s32 field_14[3]; } struct_20_3;
typedef struct { u32 field_0; u32 field_4; u32 field_8; u32 field_C; u32 *field_10; } struct_14_2;
typedef struct { s32 field_0; s32 field_4; s32 field_8; s32 field_C; s32 field_10; s32 field_14; s32 field_18; } struct_1C_2;
extern u8 *D_800A5E60;
extern u16 D_800B9A02[];
extern u32 D_800A6610[2][0x1000];

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
extern struct_10C_2 D_sc06_016_8019FF08;
extern void func_sc06_016_80184804();
extern s16 D_sc06_016_8019FF0E;
extern void func_sc06_016_80184918();

extern struct_20_4 D_800AE620;
extern struct_14_3 D_800A651C[];
extern struct_14_4 D_800A6518[];
extern s32 func_80016638();
typedef void (*type_2)();
typedef struct { u8 field_0[0x18]; struct_20_4 field_18; } struct_38;
typedef struct { s32 field_0[4]; } struct_10_3;
typedef struct { struct_10_3 field_0, field_10, field_20; } struct_30_2;
typedef struct { u8 field_0[0x34]; } struct_34_3;
extern u8 D_sc06_016_8019FF10;
extern u8 D_sc06_016_8019FF11;
extern u8 D_sc06_016_8019FF12;

extern void func_8012B200();
extern void func_8012B178();

extern u8 D_800AF648;

extern u16 D_801202A0;

typedef struct { u32 field_0_b0 : 24; u32 field_3_b0 : 8; } struct_4_5;
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_5;
typedef struct { struct_4_5 field_0; u8 field_4, field_5, field_6, field_7; s16 field_8, field_A, field_C, field_E, field_10, field_12, field_14, field_16; } struct_18;
typedef union { s32 m0; struct_4_2 m1; } union_4_2;
extern u16 D_sc06_016_8019FF0A;

typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_6;
typedef struct { u8 field_0, field_1, field_2, field_3; } struct_4_6;
typedef struct { u8 field_0[8]; } struct_8_8;
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_7;
typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_9;
extern void func_sc06_016_8017DD14();
extern s32 func_80012C6C();
extern s32 func_80012ABC();
extern void func_8012F14C();


typedef struct { s16 field_0, field_2, field_4, field_6, field_8, field_A, field_C, field_E; s32 field_10; } struct_14_5;
extern u8 D_sc06_016_801888A8[];
extern s32 func_8012C750();

s32 func_sc06_016_8017BF34(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    struct_14_5 s;
    s32 r;

    s.field_6 = 0x6B;
    s.field_0 = -0x94;
    s.field_E = arg2;
    s.field_2 = -0x68;
    s.field_4 = 0;
    s.field_8 = arg3;
    s.field_A = 0;
    s.field_10 = ((s32 *)&D_sc06_016_801888A8)[(s16) arg2];
    r = func_8012C750((s32) &s);
    if (r != 0) {
        AF(r, s32, 0xD4) = arg0;
        AF(r, s32, 0xD8) = arg1;
    }
    return r;
}

void func_sc06_016_8017BFBC(s32 arg0, s32 arg1) {
    s16 i;
    u8 *p;

    p = (u8 *)&D_801202A0;
    for (i = 0; i < 0x60; p += 0x10C, i++) {
        if (*(u16 *)p == 0x6B) {
            AF(p, s32, 0xD4) = arg0;
            AF(p, s32, 0xD8) = arg1;
            return;
        }
    }
}

void func_sc06_016_8017C010(s32 arg0, s32 arg1, s16 arg2) {
    s16 i;
    u8 *p;

    p = (u8 *)&D_801202A0;
    for (i = 0; i < 0x60; p += 0x10C, i++) {
        if (*(u16 *)p == 0x6B) {
            AF(p, s16, 0x70) = arg2;
            AF(p, s32, 0xD4) = arg0;
            AF(p, s32, 0xD8) = arg1;
            return;
        }
    }
}

extern void func_80016714();

void func_sc06_016_8017C068(void) {
    s16 i;
    u8 *p;

    p = (u8 *)&D_801202A0;
    for (i = 0; i < 0x60; p += 0x10C, i++) {
        if (*(u16 *)p == 0x6B) {
            if (AF(p, s32, 0xCC) != 0) {
                func_80016714(AF(p, s32, 0xCC), 0x38);
            }
            if (AF(p, s32, 0xD0) != 0) {
                func_80016714(AF(p, s32, 0xD0), 0x38);
            }
            func_8012C218((s32) p);
            return;
        }
    }
}

void func_sc06_016_8017C114(u8 *arg0) {
    D_sc06_016_801888D8[AF(arg0, u16, 2)]();
}

typedef struct { u8 field_0[0x10C]; } struct_10C_3;
extern s32 func_80013328();
extern void func_800D1724();
extern void func_80015954();

extern void func_sc06_016_80182F44();
extern s32 func_80012A60();
extern u8 *D_sc06_016_8019FF00;
extern s32 func_8012B23C();
extern u8 D_sc06_016_8019A53C;
extern s32 D_sc06_016_8019A570[];
extern u8 *D_80126CC8;
extern u8 D_sc06_016_8019CAAC;
extern u8 D_sc06_016_8019C10C;

extern s32 func_800CF8B4();
extern s32 func_8014CB8C();
extern s32 func_801726C4();
extern s32 func_80143C74();

typedef struct { struct_8_7 field_0[4]; s32 field_20[4]; s32 field_30; } struct_34_4;
typedef struct { struct_8_4 field_0[4]; s16 field_20[8]; s32 field_30; s32 field_34; u8 field_38; u8 field_39[7]; } struct_40;
extern u8 *func_80010A08();
extern void func_80017E8C();

typedef struct { struct_C_5 field_0[9]; } struct_6C;
typedef struct { s32 field_0, field_4, field_8, field_C; } struct_10_4;
typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_10;
typedef struct { s32 field_0, field_4, field_8, field_C; } struct_10_5;
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_8;
typedef struct { u8 field_0, field_1, field_2, field_3; } struct_4_7;
typedef struct { struct_8_10 field_0[4]; struct_4_7 field_20[4]; s32 field_30; } struct_34_5;
typedef struct { s32 field_0, field_4, field_8; } struct_C_6;
typedef struct { s16 field_0, field_2, field_4, field_6, field_8; u16 field_A; s16 field_C, field_E; s32 field_10; } struct_14_6;
typedef struct { struct_4_6 field_0; struct_4_6 field_4; u8 field_8[0x38]; } struct_40_2;
typedef struct { u8 field_0[4]; } struct_4_8;
extern s16 D_sc06_016_801888A4; extern s16 D_sc06_016_80188898; extern s16 D_sc06_016_8018888C; extern u8 D_sc06_016_8019F630; extern u8 *func_8012C194(); extern void func_80024054(); extern void func_8001CE28(); extern s16 D_sc06_016_8019F658; extern s16 D_sc06_016_8019F668; extern s16 D_sc06_016_8019F662; extern s16 D_sc06_016_8019F65A; extern s16 D_sc06_016_8019F672; extern s16 D_sc06_016_8019F66A; extern s16 D_sc06_016_8019F696; extern s16 D_sc06_016_8019F68E; extern s16 D_sc06_016_8019F6A6; extern s16 D_sc06_016_8019F69E; extern s16 D_sc06_016_8019F6C0; extern s16 D_sc06_016_8019F6D0; extern s16 D_sc06_016_8019F6CA; extern s16 D_sc06_016_8019F6C2; extern s16 D_sc06_016_8019F6DA; extern s16 D_sc06_016_8019F6D2; extern s16 D_sc06_016_8019F6C4; extern s16 D_sc06_016_8019F690; extern s16 D_sc06_016_8019F65C; extern u8 D_sc06_016_8019F680; extern u8 D_sc06_016_8019F678; extern u8 D_sc06_016_8019F684; extern u8 D_sc06_016_8019F67C; extern u8 D_sc06_016_8019F681; extern u8 D_sc06_016_8019F679; extern u8 D_sc06_016_8019F686; extern u8 D_sc06_016_8019F682; extern u8 D_sc06_016_8019F67E; extern u8 D_sc06_016_8019F67A; extern u8 D_sc06_016_8019F6B4; extern u8 D_sc06_016_8019F6AC; extern u8 D_sc06_016_8019F6B5; extern u8 D_sc06_016_8019F6AD; extern u8 D_sc06_016_8019F6B9; extern u8 D_sc06_016_8019F6B1; extern u8 D_sc06_016_8019F6EC; extern u8 D_sc06_016_8019F6E8; extern u8 D_sc06_016_8019F6E4; extern u8 D_sc06_016_8019F6E0; extern u8 D_sc06_016_8019F6ED; extern u8 D_sc06_016_8019F6E9; extern u8 D_sc06_016_8019F6E5; extern u8 D_sc06_016_8019F6E1; extern u8 D_sc06_016_8019F6EE; extern u8 D_sc06_016_8019F6EA; extern u8 D_sc06_016_8019F6E6; extern u8 D_sc06_016_8019F6E2; extern u8 D_sc06_016_8019F6BA; extern u8 D_sc06_016_8019F6B6; extern u8 D_sc06_016_8019F6B2; extern u8 D_sc06_016_8019F6AE; extern s32 D_sc06_016_8019F6BC; extern s32 D_sc06_016_8019F688; extern s32 D_sc06_016_8019F6F0;
extern void func_800233CC();
extern struct_40_2 D_sc06_016_8019F95C[];
extern struct_4_6 D_sc06_016_8019E28C;
extern struct_4_6 D_sc06_016_8019E290;
extern struct_4_6 D_sc06_016_8019E294;
extern void func_8001CD9C();

void func_sc06_016_8017C150(u8 *o) {
    u8 *m;
    s16 x1;
    s16 y1;
    s16 y2;
    s16 x2;
    s16 y;
    D_sc06_016_801888A4 = 0;
    D_sc06_016_80188898 = 0;
    D_sc06_016_8018888C = 0;
    if (AF(o, u8 *, 0xD0) == 0) {
        m = func_8012C194();
        if (m == 0) return;
        func_80024054(AF(o, s32, 0xDC), &D_sc06_016_8019F630);
        func_8001CE28(m, &D_sc06_016_8019F630);
        AF(m, s16, 8) = AF(o, s16, 6) + 6;
        AF(m, s16, 0xA) = AF(o, s16, 0xA) + 9;
        AF(m, s16, 0x2C) = 3;
        AF(m, u8, 0x27) = 1;
        AF(o, u8 *, 0xD0) = m;
    }
    x1 = AF(o, s16, 6);
    D_sc06_016_8019F658 = x1;
    D_sc06_016_8019F668 = x1 - 4;
    y1 = AF(o, s16, 0xA);
    D_sc06_016_8019F65A = D_sc06_016_8019F662 = y1;
    D_sc06_016_8019F66A = D_sc06_016_8019F672 = y1 + 7;
    y2 = AF(o, s16, 0xA);
    D_sc06_016_8019F68E = D_sc06_016_8019F696 = y2;
    D_sc06_016_8019F69E = D_sc06_016_8019F6A6 = y2 + 7;
    x2 = AF(o, s16, 6);
    D_sc06_016_8019F6C0 = x2 + 2;
    D_sc06_016_8019F6D0 = x2 - 2;
    y = AF(o, s16, 0xA);
    D_sc06_016_8019F678 = D_sc06_016_8019F680 = 0xFF;
    D_sc06_016_8019F67C = D_sc06_016_8019F684 = 0xFF;
    D_sc06_016_8019F679 = D_sc06_016_8019F681 = 0;
    D_sc06_016_8019F682 = D_sc06_016_8019F686 = 0;
    D_sc06_016_8019F67A = D_sc06_016_8019F67E = 0;
    D_sc06_016_8019F6AC = D_sc06_016_8019F6B4 = 0xFF;
    D_sc06_016_8019F6C2 = D_sc06_016_8019F6CA = y + 4;
    D_sc06_016_8019F6D2 = D_sc06_016_8019F6DA = y + 0xB;
    D_sc06_016_8019F6AD = D_sc06_016_8019F6B5 = 0xFF;
    D_sc06_016_8019F6B1 = D_sc06_016_8019F6B9 = 0xFF;
    D_sc06_016_8019F6E0 = D_sc06_016_8019F6E4 = D_sc06_016_8019F6E8 = D_sc06_016_8019F6EC = 0x40;
    D_sc06_016_8019F6E1 = D_sc06_016_8019F6E5 = D_sc06_016_8019F6E9 = D_sc06_016_8019F6ED = 0x40;
    D_sc06_016_8019F6E2 = D_sc06_016_8019F6E6 = D_sc06_016_8019F6EA = D_sc06_016_8019F6EE = 0x40;
    D_sc06_016_8019F6AE = D_sc06_016_8019F6B2 = D_sc06_016_8019F6B6 = D_sc06_016_8019F6BA = 0;
    D_sc06_016_8019F65C = D_sc06_016_8019F690 = 2;
    D_sc06_016_8019F6C4 = 4;
    D_sc06_016_8019F688 = D_sc06_016_8019F6BC = 0;
    D_sc06_016_8019F6F0 = 0x60000000;
    if (AF(o, s16, 0x70) == 0) AF(o, s16, 0x70) = 0x100;
    D_sc06_016_801888A4 = 2;
    AF(o, s16, 2)++;
}

extern s16 D_sc06_016_80188A22;
extern void func_8012E9C0();
extern void func_8002A520();
extern void func_8002A790();
extern void func_80143B6C();
extern u16 D_sc06_016_8019F718;
extern s16 D_sc06_016_80188A1C;
extern s32 func_801290DC();
extern void func_8012931C();
extern u8 D_sc06_016_801890F0;
extern u8 D_sc06_016_801890FC;
extern void func_80128EA8();
extern s32 func_80128ED8();
extern void func_801292C8();
extern void func_80129350();

extern struct_4_8 D_sc06_016_8019E2A0;
extern struct_4_8 D_sc06_016_8019E2A4;
extern struct_4_8 D_sc06_016_8019FA50;
extern u8 D_sc06_016_8019FA52;
extern u8 *D_sc06_016_8019FA00[];
extern s32 func_80135004();
extern s32 func_sc06_016_801803BC();
extern void RotTransSV();
extern u8 *D_sc06_016_8019FAD0;
extern u8 *D_sc06_016_8019FAD4;
extern struct_40_2 D_sc06_016_8019FAD8[];
extern u8 *D_sc06_016_8019FB58;
extern u8 *D_sc06_016_8019FB5C;
extern s16 D_sc06_016_8019FB60;
extern s16 D_sc06_016_8019FB64;
extern s32 D_sc06_016_8018910C;
extern s16 D_sc06_016_8019FD70[];
extern s32 D_sc06_016_8019FDF4[];
extern s32 D_sc06_016_8019FEF8;
extern s32 func_sc06_016_801816DC();

extern void func_800183E0();
extern u8 D_sc06_016_80188E00;
extern u16 D_sc06_016_8019F8BC[];
extern u16 *D_sc06_016_80188DEC[];
extern s16 D_80126B5E;
extern s16 D_80126B62;
extern s32 func_8012B70C();
extern s32 func_sc06_016_80180D24();
extern u8 D_sc06_016_801890BC;
extern u8 D_sc06_016_801890C8;
extern u8 D_sc06_016_801890D0;
extern void *D_80126B78;
extern s32 D_80126B90;
extern s16 D_80126B9A;
extern u8 D_801152A8;
extern s32 func_80135888();
extern void func_8012F568();
extern void func_8012B0B4();
extern u8 D_sc06_016_80189130;
extern u8 D_sc06_016_8018913C;

extern s16 D_sc06_016_8019F7B0;
extern struct_8_4 D_sc06_016_80188B74[];
extern s16 D_sc06_016_80188B94[];
extern s32 func_80178B18();
extern u8 D_sc06_016_80188AC4;
extern s32 func_8001AAA0();

typedef struct { unsigned field_0_b0 : 31; unsigned field_3_b7 : 1; } struct_4_9;
extern struct_4_3 D_sc06_016_8019E2E8;

typedef struct { s32 field_0, field_4; } struct_8_11;
typedef struct { s16 field_0, field_2, field_4; } struct_6;
typedef struct { s16 field_0, field_2; s32 field_4; } struct_8_12;
typedef struct { struct_8_4 field_0[3]; struct_4_3 field_18[3]; s32 field_24; } struct_28;
typedef struct { u8 field_0[0x10]; struct_4_2 field_10[12]; } struct_40_3;
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
typedef struct { u32 field_0; u32 field_4; } struct_8_13;
typedef struct { u8 field_0[0x10]; struct_4_2 field_10[13]; } struct_44;
extern void func_800176F0();

void func_sc06_016_8017C43C(u8 *arg0) {
    s16 cur = AF(arg0, s16, 0x108);
    s32 tgt = *AF(arg0, s16 *, 0xD4);
    s32 max = *AF(arg0, s16 *, 0xD8);
    s32 half;
    s16 n;

    if (cur != tgt) {
        if (tgt < cur) {
            AF(arg0, s16, 0x108) = cur - (max * 3) / AF(arg0, s16, 0x70);
            if (AF(arg0, s16, 0x108) < tgt) {
                AF(arg0, s16, 0x108) = tgt;
            }
            ((struct_4_2 *)&D_sc06_016_8018888C)->field_0 = (AF(arg0, s16, 0x108) * AF(arg0, s16, 0x70)) / max;
            if (((struct_4_2 *)&D_sc06_016_8018888C)->field_0 == 0 && tgt != 0) {
                ((struct_4_2 *)&D_sc06_016_8018888C)->field_0 = 1;
            }
        } else {
            s16 t = AF(arg0, s16, 0x10A);
            if (cur < t) {
                AF(arg0, s16, 0x108) = cur + (max * 3) / AF(arg0, s16, 0x70);
                if (tgt < AF(arg0, s16, 0x108)) {
                    AF(arg0, s16, 0x108) = max;
                }
                ((struct_4_2 *)&D_sc06_016_8018888C)->field_0 = (AF(arg0, s16, 0x108) * AF(arg0, s16, 0x70)) / max;
            } else if (t < max) {
                AF(arg0, s16, 0x10A) = t + (max * 3) / AF(arg0, s16, 0x70);
                if (max < AF(arg0, s16, 0x10A)) {
                    AF(arg0, s16, 0x10A) = max;
                }
                D_sc06_016_80188898 = (AF(arg0, s16, 0x10A) * AF(arg0, s16, 0x70)) / max;
                D_sc06_016_801888A4 = D_sc06_016_80188898 + 2;
            }
        }
    }
    if (AF(arg0, s16, 0xFC) == 0xB) {
        u8 c = (AF(arg0, s32, 0x1C)++ & 1) ? 0xC0 : 0;
        ((struct_34_2 *)&D_sc06_016_8019F658)[0].field_20[2].field_1 = c;
        ((struct_34_2 *)&D_sc06_016_8019F658)[0].field_20[0].field_1 = c;
        ((struct_34_2 *)&D_sc06_016_8019F658)[1].field_20[3].field_2 = c;
        ((struct_34_2 *)&D_sc06_016_8019F658)[1].field_20[2].field_2 = c;
        ((struct_34_2 *)&D_sc06_016_8019F658)[1].field_20[1].field_2 = c;
        ((struct_34_2 *)&D_sc06_016_8019F658)[1].field_20[0].field_2 = c;
        ((struct_34_2 *)&D_sc06_016_8019F658)[0].field_20[3].field_2 = c;
        ((struct_34_2 *)&D_sc06_016_8019F658)[0].field_20[2].field_2 = c;
        ((struct_34_2 *)&D_sc06_016_8019F658)[0].field_20[1].field_2 = c;
        ((struct_34_2 *)&D_sc06_016_8019F658)[0].field_20[0].field_2 = c;
    }
    half = AF(arg0, s16, 0x70) >> 1;
    n = ((struct_4_2 *)&D_sc06_016_8018888C)->field_0;
    if (n < (s16)half) {
        s32 v;
        v = (n * 255) / (s16)half;
        ((struct_34_2 *)&D_sc06_016_8019F658)[0].field_0[1].field_0 = ((struct_34_2 *)&D_sc06_016_8019F658)[0].field_0[0].field_0 + n;
        ((struct_34_2 *)&D_sc06_016_8019F658)[0].field_0[3].field_0 = ((struct_34_2 *)&D_sc06_016_8019F658)[0].field_0[1].field_0 - 4;
        ((struct_34_2 *)&D_sc06_016_8019F658)[0].field_20[3].field_1 = v;
        ((struct_34_2 *)&D_sc06_016_8019F658)[0].field_20[1].field_1 = v;
    } else {
        s32 x;
        s16 xm;
        u8 *g;
        s32 v;
        v = ((n - (s16)half) * 255) / (s16)half;
        g = &((struct_34_2 *)&D_sc06_016_8019F658)[0].field_20[1].field_1;
        *g = ((struct_34_2 *)&D_sc06_016_8019F658)[0].field_20[3].field_1 = 0xFF;
        x = (u16)((struct_34_2 *)&D_sc06_016_8019F658)[0].field_0[0].field_0 + half;
        xm = x - 4;
        ((struct_34_2 *)&D_sc06_016_8019F658)[1].field_0[0].field_0 = x;
        ((struct_34_2 *)&D_sc06_016_8019F658)[1].field_0[1].field_0 = ((struct_34_2 *)&D_sc06_016_8019F658)[0].field_0[0].field_0 + n;
        ((struct_34_2 *)&D_sc06_016_8019F658)[0].field_0[1].field_0 = x;
        ((struct_34_2 *)&D_sc06_016_8019F658)[1].field_0[2].field_0 = xm;
        ((struct_34_2 *)&D_sc06_016_8019F658)[0].field_0[3].field_0 = xm;
        ((struct_34_2 *)&D_sc06_016_8019F658)[1].field_0[3].field_0 = ((struct_34_2 *)&D_sc06_016_8019F658)[1].field_0[1].field_0 - 4;
        ((struct_34_2 *)&D_sc06_016_8019F658)[1].field_20[3].field_0 = -v;
        ((struct_34_2 *)&D_sc06_016_8019F658)[1].field_20[1].field_0 = -v;
        func_800176F0(&((struct_34_2 *)&D_sc06_016_8019F658)[1]);
    }
    {
        s16 *p = &((struct_34_2 *)&D_sc06_016_8019F658)[2].field_0[3].field_0;
        ((struct_34_2 *)&D_sc06_016_8019F658)[2].field_0[1].field_0 = ((struct_34_2 *)&D_sc06_016_8019F658)[2].field_0[0].field_0 + D_sc06_016_80188898;
        *p = ((struct_34_2 *)&D_sc06_016_8019F658)[2].field_0[1].field_0 - 4;
    }
    func_800176F0(&((struct_34_2 *)&D_sc06_016_8019F658)[0]);
    func_800176F0(&((struct_34_2 *)&D_sc06_016_8019F658)[2]);
}

void func_sc06_016_8017C8D0(u8 *obj) {
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

void func_sc06_016_8017D7B0(void) {
    func_8002931C(0x01A40000);
}

void func_sc06_016_8017D7D0(u8 *arg0) {
    D_sc06_016_80188930[AF(arg0, u8, 0x15)]();
}

s32 func_sc06_016_8017D80C(u8 *arg0) {
    func_sc06_016_8017DB0C();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc06_016_8017D850(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc06_016_8017D874(u8 *arg0) {
    D_sc06_016_80188938[AF(arg0, u8, 0x15)]();
}

s32 func_sc06_016_8017D8B0(u8 *arg0) {
    func_sc06_016_80182BCC();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

void func_sc06_016_8017D8F4(u8 *arg0) {
    D_sc06_016_80188940[AF(arg0, u8, 0x15)]();
}

s32 func_sc06_016_8017D930(u8 *arg0) {
    func_sc06_016_8017DB34();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc06_016_8017D970(u8 *arg0) {
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

void func_sc06_016_8017D9EC(void) {
    func_800D1EBC();
}

void func_sc06_016_8017DA0C(u8 *arg0) {
    D_sc06_016_8018894C[AF(arg0, u8, 0x15)]();
}

s32 func_sc06_016_8017DA48(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_8002D4C8(0x1C, 0, arg2);
        func_8001BFD0();
        func_8002D4C8(0x1D, 0);
        func_800D0C48(1);
        func_800167B8(4);
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

s32 func_sc06_016_8017DAC4(void) {
    if (func_800167F0(4) & 0xFFFF) {
        func_8002931C(0x03930000);
        func_80029514(0x578);
        func_8002AED0();
        return 1;
    }
    return 0;
}

void func_sc06_016_8017DB0C(void) {
    func_8016EE40((s32) &D_sc06_016_80188958, 0x01000000);
}

void func_sc06_016_8017DB34(void) {
    func_8016EE40((s32) &D_sc06_016_80188964, 0x01000000);
}

void func_sc06_016_8017DB5C(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x3E8;
    D_80126968 = 0x1C7;
    D_8012696A = 0x800;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x20;
    D_8012697A = 0;
    func_8012A018((s32) func_sc06_016_8017DBF8, 0);
    func_8012A094((s32) &D_80126948);
    func_sc06_016_8017DBF8((s32) &D_80126948);
}

void func_sc06_016_8017DBF8(s32 arg0) {
    D_sc06_016_80188970[AF(arg0, u8, 4)]();
}

extern s32 func_8012EF70();
extern s32 func_8012E28C();

extern s32 D_80126950;
extern struct_8_4 D_sc06_016_8019A49C;
extern u32 D_sc06_016_8019A4A4[];
extern u8 D_sc06_016_8019A4B0[];
extern u8 D_sc06_016_8019A4C0[];
extern u8 D_sc06_016_8019A4D0[];


typedef struct { s32 field_0; s32 field_4; s32 field_8; s16 field_C; s16 field_E; s32 field_10[2]; s32 field_18; s32 field_1C; s32 field_20; } struct_24;
typedef struct { s16 field_0, field_2, field_4, field_6; s16 field_8, field_A, field_C, field_E; s32 field_10; } struct_14_7;
typedef struct { struct_8_4 field_0[4]; s32 field_20, field_24, field_28, field_2C, field_30, field_34; } struct_38_2;
typedef struct { s16 field_0; s16 field_2[5]; } struct_C_7;
typedef struct { u8 field_0; u8 field_1[11]; } struct_C_8;
typedef struct { u32 field_0; u32 field_4; s16 field_8, field_A; u8 field_C, field_D; u16 field_E; s16 field_10, field_12; } struct_14_8;
typedef struct { s8 field_0; u8 field_1; } struct_2;
typedef struct { u16 field_0; } struct_2_2;
typedef struct { u32 field_0; u8 field_4, field_5, field_6, field_7; s16 field_8, field_A; u8 field_C, field_D, field_E, field_F; s16 field_10, field_12; u8 field_14, field_15, field_16, field_17; s16 field_18, field_1A; u8 field_1C, field_1D, field_1E, field_1F; s16 field_20, field_22; } struct_24_2;
typedef struct { s32 field_0; } struct_4_10;
typedef struct { s32 field_0; u8 field_4[8]; } struct_C_9;
typedef struct { s32 field_0; s32 field_4; } struct_8_14;
typedef struct { struct_8_7 field_0[4]; s32 field_20[4]; s32 field_30; s32 field_34; u8 field_38; } struct_3C;
typedef struct { u32 field_0, field_4, field_8, field_C; u32 *field_10; } struct_14_9;

extern void func_8012B14C();
extern u8 D_sc06_016_80188BEC;
extern s32 D_sc06_016_80188BF8;

extern struct_8_4 D_80126940;
extern s32 func_8012E544();
void func_sc06_016_8017DC34(u8 *o) {
    struct_8_4 v;
    s32 lim;
    s32 t;
    v = D_80126940;
    v.field_2 = -0x280;
    if (v.field_0 < -0x80) v.field_0 = -0x80;
    if (v.field_0 > 0x80) v.field_0 = 0x80;
    t = func_8012E544(0x2D8);
    lim = -0x110;
    if (t != 0 && AF(t, s32, 0xDC) == 1) lim = 0x160;
    if (v.field_4 < lim) v.field_4 = lim;
    if (v.field_4 > 0x240) v.field_4 = 0x240;
    func_sc06_016_8017DD14(o, &v);
}

void func_sc06_016_8017DD14(u8 *arg0, u8 *arg1) {
    struct_20_7 m;
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

s32 func_sc06_016_8017DEAC(s32 arg0) {
    s32 var_v0;

    var_v0 = 0x6E;
    if (arg0 < 0x578) {
        var_v0 = 0x8B;
    }
    return var_v0;
}

void func_sc06_016_8017DEC4(u8 *arg0) {
    D_sc06_016_801889F4[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        func_8012DFD4((s32) arg0);
    }
}

s32 func_sc06_016_8017DF24(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u16 temp_v0;
    u16 temp_v1;

    temp_v1 = AF(arg0, u16, 0x34);
    switch (temp_v1) {                              /* irregular */
    case 0:
        temp_v0 = AF(arg0, u16, 0xFC) + 0x40;
        AF(arg0, u16, 0xFC) = temp_v0;
        if ((s16) temp_v0 >= 0x400) {
            AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
        }
        AF(arg0, s32, 8) = (s32) (AF(arg0, s32, 8) - ((0x1000 - rcos((s32) (s16) AF(arg0, u16, 0xFC), arg1, arg2, arg3)) << 7));
        break;
    case 1:
        if (D_80126B60 != AF(arg0, s32, 0xDC)) {
            AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) - 8);
        }
        break;
    }
    AF(arg0, s32, 0xDC) = D_80126B60;
    return 0;
}

void func_sc06_016_8017DFFC(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc06_016_801889AC) != 0) {
        func_8001D0E8(AF(arg0, s32, 0x20), 0xC8, 0x168);
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32, 0xB4) = -1;
        AF(arg0, s16, 0xAE) = -1;
        AF(arg0, s16, 2) = 1;
        AF(arg0, u8, 0x75) = 0;
        func_8012A828(arg0, (s32) &D_sc06_016_801889EC);
    }
}

extern s32 func_8012BE54();
extern s16 func_sc06_016_80181B50(void);
extern u8 D_sc06_016_80188974;
void func_sc06_016_8017E074(u8 *o) {
    if (func_8012BE54() < 0x6401) {
        if (((s32 (*)(void))func_sc06_016_80181B50)() == 1) {
            func_80178B18(o, &D_sc06_016_80188974);
            AF(o, s16, 2) = 2;
        }
    }
}

void func_sc06_016_8017E0D4(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 1;
    }
}

extern s16 D_sc06_016_80188A12;
extern u16 D_sc06_016_80188A06;
extern s32 func_sc06_016_8017F5B4(s32 arg0, s32 arg1);
void func_sc06_016_8017E114(u8 *o) {
    func_sc06_016_8017EEFC(o, 3, &D_sc06_016_80188A04, &D_sc06_016_801947F4);
    AF(o, s32, 0x1C) = D_sc06_016_80188A12;
    AF(o, s16, 0xA) = D_sc06_016_80188A06;
    AF(o, s16, 8) = 0;
    func_8002D4C8(0x97D, 0);
    func_8002D4C8(0xA90, 0);
    func_sc06_016_8017F5B4((s32)o, (s32)o);
}

s32 func_sc06_016_8017E190(s32 arg0) {
    func_sc06_016_8017EEFC(arg0, 4, 0, (s32) &D_sc06_016_801947F4);
    AF(arg0, s32, 0x1C) = (s32) D_sc06_016_80188A14;
    return (s32) D_sc06_016_80188A14;
}

void func_sc06_016_8017E1D8(s32 arg0) {
    s16 temp_v0;
    s32 var_v1;

    func_sc06_016_8017EEFC(arg0, 5, 0, (s32) &D_sc06_016_801963EC);
    AF(arg0, s16, 0x34) = 0;
    D_sc06_016_8019F6FC = 0;
    AF(arg0, s32, 0x1C) = (s32) D_sc06_016_80188A16;
    temp_v0 = func_sc06_016_8017EEB4(arg0);
    D_sc06_016_8019F704 = temp_v0;
    var_v1 = -1;
    if ((temp_v0 << 0x10) == 0) {
        var_v1 = 1;
    }
    D_sc06_016_8019F700 = var_v1;
    func_8002D4C8(0x97E, 0);
    func_8002D4C8(0xA92, 0);
    AF(arg0, s16, 0x84) = 0;
}

void func_sc06_016_8017E26C(u8 *o) {
    u8 unused[8];
    u8 *g;
    s32 s;
    s32 a;
    s32 t;
    s32 d;

    g = &D_80126B58;
    if (++AF(o, s16, 0x84) == 0x1E) {
        func_8002D4C8(0x97F, 0);
    }
    switch (AF(o, u16, 0x34)) {
    case 0:
        if (++D_sc06_016_8019F6FC >= D_sc06_016_80188A22) {
            AF(o, s16, 0x34) = 1;
            D_sc06_016_8019F6FC = 0x10;
        }
        break;
    case 1:
        s = func_sc06_016_8017EEB4(o);
        a = func_80013328(o + 4, g + 4);
        if (a < 0) {
            a = 0x80;
        } else if (a > 0x180) {
            a = 0x180;
        }
        t = 0x60000 / a * 1303;
        d = t / 16;
        if (s != 0) {
            d = -d;
        }
        if (s == D_sc06_016_8019F704) {
            D_sc06_016_8019F6FC = 4;
            D_sc06_016_8019F700 += d;
            if (s == 0) {
                if (t < D_sc06_016_8019F700) {
                    D_sc06_016_8019F700 = t;
                }
            } else {
                if (D_sc06_016_8019F700 < -t) {
                    D_sc06_016_8019F700 = -t;
                }
            }
        } else {
            if (--D_sc06_016_8019F6FC <= 0) {
                D_sc06_016_8019F704 = s;
            }
        }
        AF(AF(o, u8 *, 0x20), s16, 0x12) += D_sc06_016_8019F700 >> 16;
        break;
    }
    if (func_8012BEE8(o) != 0) {
        func_sc06_016_8017E4AC((s32)o);
    }
}

void func_sc06_016_8017E4AC(s32 arg0) {
    func_sc06_016_8017EEFC(arg0, 6, 0, (s32) &D_sc06_016_801963EC);
    AF(arg0, s32, 0x1C) = (s32) D_sc06_016_80188A18;
    func_8002D4C8(4, 0x97E);
}

void func_sc06_016_8017E4FC(arg0, arg1)
    s32 arg0;
    s32 arg1;
{
    func_sc06_016_8017EEFC(arg0, 7, 0, (s32) &D_sc06_016_80195E24);
    D_sc06_016_8019F708 = 0;
    D_sc06_016_8019F710 = D_sc06_016_80188A1A;
    func_8002D4C8(0xA97, 0);
}

void func_sc06_016_8017E54C(u8 *o) {
    s32 d;
    s32 k;

    func_8012E9C0();
    d = AF(o, s16, 0x60) * AF(AF(o, u8 *, 0x78), s16, 0x30) >> 12;
    if (d <= 0) {
        d = 1;
    }
    AF(o, s16, 0x76) -= d;
    if (AF(o, u8, 0xC8) != 0) {
        func_8002A520(o);
    }
    if (AF(o, u8, 0xC9) != 0) {
        func_8002A790(o);
    }
    if (AF(o, s16, 0x76) <= 0) {
        AF(AF(o, u8 *, 0x20), s16, 0x12) = (AF(o, u16, 0x62) + 0x800) & 0xFFF;
        func_8012B2CC(o);
        func_sc06_016_8017EBB8((s32)o);
        return;
    }
    if (D_sc06_016_8019F720 == 0) {
        D_sc06_016_8019F720 = 0xF;
        func_8002D4C8(0xA95, 0);
    }
    if (AF(o, u16, 2) != 8) {
        D_sc06_016_8019F718 = AF(o, u16, 2);
    }
    func_sc06_016_8017EEFC(o, 8, 0, &D_sc06_016_80196974);
    AF(o, u16, 0x5C) &= 0xFFFE;
    AF(AF(o, u8 *, 0x20), s16, 0x12) = (AF(o, u16, 0x62) + 0x800) & 0xFFF;
    func_80143B6C(o, 0);
    AF(o, u8, 0xC1) = 1;
    AF(o, s32, 0x1C) = D_sc06_016_80188A1C;
    k = AF(o, u8, 0x5E);
    if (k != 0 && (k < 5 || k == 8)) {
        D_sc06_016_8019F70C += 1;
    } else {
        D_sc06_016_8019F70C += 4;
    }
    if (D_sc06_016_8019F70C >= 4) {
        func_sc06_016_8017F13C((s32)o);
    }
}

extern void func_sc06_016_8017EB8C(s32 arg0);
void func_sc06_016_8017E710(u8 *o) {
    s32 k;

    if (D_sc06_016_8019F720 != 0) {
        D_sc06_016_8019F720 -= 1;
    }
    if (func_8012BEE8(o) != 0) {
        AF(o, u8, 0xC1) = 0;
        k = D_sc06_016_8019F70C;
        AF(o, s16, 0x5E) = 0;
        if (k >= 4) {
            func_sc06_016_8017E7D0(o);
        } else if (*(s16 *)&D_sc06_016_8019F718 == 7) {
            func_sc06_016_8017EEFC((s32)o, 7, 0, (s32)&D_sc06_016_80195E24);
            func_8002D4C8(0xA97, 0);
        } else {
            func_sc06_016_8017EB8C((s32)o);
        }
    }
}

extern s32 D_sc06_016_80188A34;
void func_sc06_016_8017E7D0(u8 *o) {
    func_sc06_016_8017EEFC(o, 9, 0, &D_sc06_016_80195614);
    AF(o, s32, 0x1C) = D_sc06_016_80188A2A[0];
    AF(AF(o, u8 *, 0x20), s16, 0x12) = func_8012B8A4(o);
    func_8012B2CC(o);
    func_8012B200(o);
    func_8012B14C(o, &D_sc06_016_80188A2A[3]);
    D_sc06_016_8019F70C = 0;
    AF(o, s32, 0x48) = -D_sc06_016_80188A34 / (D_sc06_016_80188A2A[0] / 2);
}

s32 func_sc06_016_8017E8A8(s32 arg0) {
    D_sc06_016_8019F70C = 0;
    D_sc06_016_8019F708 += 1;
    func_sc06_016_8017EEFC(arg0, 0xA, 0, (s32) &D_sc06_016_80194FFC);
    AF(arg0, s32, 0x1C) = 0x18;
    return func_8012C588(0x2FD, arg0);
}

void func_sc06_016_8017E910(s32 arg0) {
    func_sc06_016_8017EEFC(arg0, 0xB, 0, (s32) &D_sc06_016_80195614);
    AF(arg0, s32, 0x1C) = 0x10;
    func_sc06_016_8017ECE0(arg0);
    func_sc06_016_8017EDA0(arg0);
    func_8002D4C8(0x981, 0);
}

void func_sc06_016_8017E96C(u8 *o) {
    func_sc06_016_8017EEFC(o, 0xC, 0, 0);
    AF(o, s32, 0x1C) = (&D_sc06_016_80188A22)[(s16)D_sc06_016_8019F708];
    AF(o, s16, 0x5C) = 0;
    func_8012E8A8(o);
}

void func_sc06_016_8017E9CC(u8 *o) {
    s32 n;
    s32 r;
    s32 k;
    func_sc06_016_8017EEFC(o, 0xD, 0, &D_sc06_016_80195614);
    ((s32 *)o)[7] = 0x11;
    if ((s16)D_sc06_016_8019F708 == 1) {
        n = (D_80126B5E < 1) * 2;
        if (D_80126B66 < 0x218) {
            n++;
        }
        D_sc06_016_8019F7B0 = n;
        func_8012E8E0(o, &D_sc06_016_80188B74[n]);
    } else {
        r = rand();
        n = D_sc06_016_8019F7B0 * 3 + r % 3;
        n = D_sc06_016_80188B94[n];
        func_8012E8E0(o, &D_sc06_016_80188B74[n]);
    }
    func_8012B2CC(o);
    func_sc06_016_8017ECE0(o);
    func_8002D4C8(0xA94, 0);
}

void func_sc06_016_8017EAE4(u8 *o) {
    func_sc06_016_8017EEFC(o, 0xE, 0, &D_sc06_016_80194FFC);
    ((s32 *)o)[7] = 0x18;
    func_8012C658(0x2FF, (s16)D_sc06_016_8019F708 - 1, o);
}

s32 func_sc06_016_8017EB3C(s32 arg0) {
    u16 temp_v0;

    func_sc06_016_8017EEFC(arg0, 0xF, 0, (s32) &D_sc06_016_80193CE4);
    temp_v0 = D_sc06_016_80188A2A[(*(s16 *)&D_sc06_016_8019F708)];
    D_sc06_016_8019F714 = temp_v0;
    return (s32) temp_v0;
}

void func_sc06_016_8017EB8C(s32 arg0) {
    func_sc06_016_8017EEFC(arg0, 0xF, 0, (s32) &D_sc06_016_80193CE4);
}

s32 func_sc06_016_8017EBB8(s32 arg0) {
    func_8002A04C();
    func_sc06_016_8017EEFC(arg0, 0x10, 0, (s32) &D_sc06_016_80196974);
    AF(arg0, s32, 0x1C) = 0;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s16, 0x5E) = 0;
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, s16, 0x76) = 0;
    AF(arg0, s16, 0x5C) = 0x800;
    func_8002D4C8(0xA96, 0);
    func_80029514(0x578);
    func_800D0C48(1);
    func_80178BF8();
    func_801746A4();
    return func_80178CBC(arg0, (s32) &D_sc06_016_80188BFC);
}

void func_sc06_016_8017EC50(u8 *arg0) {
    D_sc06_016_80188CF4[AF(arg0, u16, 2)]();
    if ((AF(arg0, u16, 0) != 0) && (AF(arg0, s32, 0xDC) == 1)) {
        func_sc06_016_8017EE78();
        if (D_sc06_016_8019F720 != 0) {
            D_sc06_016_8019F720 -= 1;
        }
    }
}

void func_sc06_016_8017ECE0(arg0, arg1, arg2)
    s32 arg0;
    s32 arg1;
    s32 arg2;
{
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s2;
    void *temp_v1;

    var_s2 = 0;
loop_1:
    temp_v0 = func_80132EF4(arg0, 0x22);
    if (temp_v0 != 0) {
        temp_v1 = AF(temp_v0, void *, 0x20);
        if (temp_v1 != NULL) {
            AF(temp_v1, u16, 0x2C) = 0xC040;
        }
        temp_s0 = var_s2 << 9;
        temp_s0_2 = rsin(temp_s0);
        temp_v0_2 = rcos(temp_s0);
        var_s2 += 1;
        AF(temp_v0, s16, 0x34) = 0x2001;
        AF(temp_v0, s32, 0x14) = 0xFFF80000;
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) + (temp_s0_2 << 9));
        AF(temp_v0, s32, 0xC) = (s32) (AF(temp_v0, s32, 0xC) + (temp_v0_2 << 9));
        if (var_s2 < 8) {
            goto loop_1;
        }
    }
}

void func_sc06_016_8017EDA0(s32 arg0) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s2;
    void *temp_v1;

    var_s2 = 0;
loop_1:
    temp_v0 = func_80132EF4(arg0, 0x22);
    if (temp_v0 != 0) {
        temp_v1 = AF(temp_v0, void *, 0x20);
        if (temp_v1 != NULL) {
            AF(temp_v1, u16, 0x2C) = 0xC040;
        }
        temp_s0 = var_s2 << 7;
        temp_s0_2 = rsin(temp_s0);
        temp_v0_2 = rcos(temp_s0);
        var_s2 += 1;
        AF(temp_v0, s16, 0x34) = 0x2002;
        AF(temp_v0, s32, 0x10) = (s32) (temp_s0_2 * 0x70);
        AF(temp_v0, s32, 0x18) = (s32) (temp_v0_2 * 0x70);
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) + (temp_s0_2 << 8));
        AF(temp_v0, s32, 0xC) = (s32) (AF(temp_v0, s32, 0xC) + (temp_v0_2 << 8));
        if (var_s2 < 0x20) {
            goto loop_1;
        }
    }
}

void func_sc06_016_8017EE78(void) {
    if ((D_80126D50 == 0) && (D_80126B66 < 0x80)) {
        D_80126B66 = 0x80;
    }
}

s32 func_sc06_016_8017EEB4(s32 arg0, s32 arg1, s32 arg2) {
    return ((func_8012B8A4(arg0) - AF(AF(arg0, void *, 0x20), s16, 0x12)) & 0xFFF) >= 0x800;
}

void func_sc06_016_8017EEFC(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *temp_v1;
    void *temp_v1_2;

    AF(arg0, s16, 2) = (s16) arg1;
    if (arg2 != 0) {
        func_8012E8E0(arg0, arg2);
    }
    if (arg3 != 0) {
        func_8012A828(arg0, arg3);
    }
    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
    temp_v1_2 = AF(arg0, void *, 0x20);
    AF(temp_v1_2, s16, 0x1C) = 0x1000;
    AF(temp_v1_2, s16, 0x1A) = 0x1000;
    AF(temp_v1_2, s16, 0x18) = 0x1000;
    func_8012E88C(arg0);
    if (D_sc06_016_80188D38[arg1] != 0) {
        func_sc06_016_8017F124(arg0);
        return;
    }
    func_sc06_016_8017F13C(arg0);
}

void func_sc06_016_8017EFBC(u8 *o, s32 n) {
    s32 i;
    s32 j;
    u16 *d;
    u16 *s;
    u16 **t;
    u16 *q;
    u16 *d2;
    u16 *s2;
    u16 **t2;
    u16 *q2;
    u16 c;
    u32 rr;
    u32 gg;
    u32 bb;

    if (n <= 0) {
        func_8012E8A8();
    } else if (n >= 0x1000) {
        func_8012E88C();
        for (i = 0, d = D_sc06_016_8019F8BC, t = D_sc06_016_80188DEC; i < 5; d += 16, i++, t++) {
            for (j = 0, q = d, s = *t; j < 16; j++) {
                *q++ = *s++;
            }
        }
    } else {
        func_8012E88C();
        for (i = 0, d2 = D_sc06_016_8019F8BC, t2 = D_sc06_016_80188DEC; i < 5; d2 += 16, i++, t2++) {
            for (j = 0, q2 = d2, s2 = *t2; j < 16; j++) {
                c = *s2++;
                rr = c & 0x1F;
                rr *= n;
                gg = (c >> 5) & 0x1F;
                gg *= n;
                bb = ((c >> 10) & 0x1F) * n;
                rr = (rr >> 12) & 0x1F;
                gg = (gg >> 7) & 0x3E0;
                *q2++ = ((bb >> 2) & 0x7C00) | gg | rr;
            }
        }
    }
    func_800183E0(&D_sc06_016_80188E00);
}

s32 func_sc06_016_8017F124(s32 arg0) {
    u16 temp_v0;

    AF(arg0, s16, 0xAE) = 0x6000;
    temp_v0 = AF(arg0, u16, 0x5C) | 0x8800;
    AF(arg0, u16, 0x5C) = temp_v0;
    return (s32) temp_v0;
}

s32 func_sc06_016_8017F13C(s32 arg0) {
    u16 temp_v0;

    AF(arg0, s16, 0xAE) = -1;
    temp_v0 = AF(arg0, u16, 0x5C) | 0x8800;
    AF(arg0, u16, 0x5C) = temp_v0;
    return (s32) temp_v0;
}

void func_sc06_016_8017F154(u8 *o) {
    struct_20_4 m;
    struct_8_4 v;
    struct_4_6 c;
    s32 k;

    m = D_800AE620;
    c = D_sc06_016_8019E290;
    k = AF(o, u16, 0x2C) & 1;
    func_8001CD9C(AF(o, u8 *, 0x20), &D_sc06_016_8019F95C[k]);
    AF(AF(o, u8 *, 0x20), s32, 4) |= 0x50000000;
    AF(AF(o, u8 *, 0x20), u16, 0x2C) = 0xC040;
    if (k == 0) {
        func_800233CC(D_sc06_016_8019F95C, 0x80);
        D_sc06_016_8019F95C[0].field_0 = D_sc06_016_8019E28C;
        D_sc06_016_8019F95C[0].field_4 = D_sc06_016_8019E28C;
        func_sc06_016_80184438();
        func_sc06_016_80184578(0, &c, -8);
    } else {
        func_800233CC(&D_sc06_016_8019F95C[1], 0x10);
        D_sc06_016_8019F95C[1].field_0 = D_sc06_016_8019E294;
        D_sc06_016_8019F95C[1].field_4 = D_sc06_016_8019E28C;
        RotMatrixZ(rand() & 0xFFF, &m);
        v.field_0 = 0xC0;
        v.field_4 = 0;
        v.field_2 = 0;
        ApplyMatrixSV(&m, &v, &v);
        AF(o, s16, 6) += v.field_0;
        AF(o, s16, 0xA) += v.field_2;
        AF(o, s16, 0xE) += v.field_4;
        AF(o, s32, 0x10) = -(v.field_0 << 12);
        AF(o, s32, 0x14) = -(v.field_2 << 12);
        AF(AF(o, u8 *, 0x20), s16, 0x18) = 0;
        AF(AF(o, u8 *, 0x20), s16, 0x1A) = 0;
        AF(o, s32, 0x1C) = 0xC;
    }
    AF(o, s16, 2)++;
}

void func_sc06_016_8017F3B8(u8 *o) {
    u8 *p;
    u8 *q;
    struct_8_4 v;
    u8 b;
    s32 c;
    s16 t;

    p = AF(o, u8 *, 0x30);
    if (!(AF(o, u16, 0x2C) & 1)) {
        if (AF(p, u16, 2) == 3) {
            func_sc06_016_8017F5FC();
            func_sc06_016_801845E8((s32)(o + 4));
        }
        if (AF(p, u16, 2) == 4) {
            AF(o, u16, 2)++;
            return;
        }
        c = D_sc06_016_8019F95C[0].field_0.field_2;
        if (c < 0xFF) {
            t = c + 5;
            if (t >= 0x100) {
                t = 0xFF;
            }
            D_sc06_016_8019F95C[0].field_0.field_0 = t;
            D_sc06_016_8019F95C[0].field_0.field_2++;
            D_sc06_016_8019F95C[0].field_0.field_1 += 2;
        }
        if (AF(p, u16, 2) == 3) {
            if (!(++AF(o, s32, 0x1C) & 1)) {
                v.field_0 = AF(o, u16, 6);
                v.field_2 = AF(o, u16, 0xA);
                v.field_4 = AF(o, u16, 0xE);
                q = (u8 *)func_801290DC(0x62, &v);
                if (q != 0) {
                    AF(q, u16, 0x2C) = 1;
                }
            } else {
                func_sc06_016_80184660(rand() & 0xFF0, 0x40);
            }
        }
        func_sc06_016_80184804();
        return;
    }
    if (AF(AF(o, u8 *, 0x20), s16, 0x18) < 0x1000) {
        AF(AF(o, u8 *, 0x20), s16, 0x18) += 0x400;
        AF(AF(o, u8 *, 0x20), s16, 0x1A) += 0x400;
    }
    func_8012931C(o);
    if (AF(o, s32, 0x1C) != 0) {
        AF(o, s32, 0x1C)--;
        return;
    }
    AF(o, u16, 2)++;
}

void func_sc06_016_8017F578(u8 *arg0) {
    D_sc06_016_80188E60[AF(arg0, u16, 2)]();
}

s32 func_sc06_016_8017F5B4(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_80132EF4(arg0, 0x62);
    if (temp_v0 != 0) {
        AF(temp_v0, s32, 0x34) = arg0;
        AF(temp_v0, s32, 0x30) = arg1;
    }
    return temp_v0;
}

void func_sc06_016_8017F5FC(u8 *o) {
    struct_8_4 v;
    s32 flag;
    u8 *p;

    p = AF(o, u8 *, 0x34);
    v.field_2 = -0x40;
    v.field_0 = 0;
    v.field_4 = -0x28;
    SetRotMatrix(AF(p, u8 *, 0x20) + 0x34);
    SetTransMatrix(AF(p, u8 *, 0x20) + 0x34);
    RotTransSV(&v, &v, &flag);
    AF(o, u16, 6) = v.field_0;
    AF(o, u16, 0xA) = v.field_2;
    AF(o, u16, 0xE) = v.field_4;
}

void func_sc06_016_8017F68C(void) {
}

extern u16 D_800B99DA;
extern u8 D_sc06_016_80188FAC[];
void func_sc06_016_8017F694(u8 *o) {
    u8 *p = (u8 *)D_sc06_016_8019F9FC;
    if (p != 0) {
        if (AF(AF(o, u8 *, 0x20), u32, 4) & 0x80000000) {
            AF(p, s32, 4) |= 0x80000000;
        } else {
            AF(p, s32, 4) &= 0x7FFFFFFF;
            AF(p, s16, 0x10) = 0;
            AF(p, s16, 0x12) = AF(AF(o, u8 *, 0x20), s16, 0x12);
            AF(p, s16, 0x14) = 0;
            AF(p, struct_8_8, 8) = AF(AF(o, u8 *, 0x20), struct_8_8, 8);
            AF(p, struct_8_8, 0x18) = AF(AF(o, u8 *, 0x20), struct_8_8, 0x18);
            func_800183E0(&D_sc06_016_80188FAC[(D_800B99DA & 7) * 32]);
        }
    }
}

extern void func_8012F2E8();

extern void func_8012B370();
extern u16 D_sc06_016_8019F9DC[];
extern u16 D_sc06_016_80188E6C[];
extern u8 D_sc06_016_80188E8C;
extern void func_sc06_016_801800E0();
extern void func_sc06_016_801803FC();
extern void func_sc06_016_8018048C();
extern void func_sc06_016_801807C4();
extern void func_sc06_016_80180BF0();
typedef struct { u8 field_0[0xFC]; s16 field_FC; } struct_FE;

static inline void func_sc06_016_8017F784_inline(u8 *o) {
    s32 i;
    u16 *s;
    s = D_sc06_016_80188E6C;
    ((struct_FE *)o)->field_FC = (((struct_FE *)o)->field_FC - 1) & 0xF;
    for (i = 0; i < 16; i++) {
        D_sc06_016_8019F9DC[i] = s[(i + ((struct_FE *)o)->field_FC) & 0xF];
    }
    func_800183E0(&D_sc06_016_80188E8C);
    AF(o, s32, 4) = AF(AF(o, u8 *, 0x64), s32, 4);
    AF(o, s32, 8) = AF(AF(o, u8 *, 0x64), s32, 8) - 0x300000;
    AF(o, s32, 0xC) = AF(AF(o, u8 *, 0x64), s32, 0xC);
    AF(AF(o, u8 *, 0x20), u16, 0x12) = AF(AF(AF(o, u8 *, 0x64), u8 *, 0x20), u16, 0x12);
    AF(AF(o, u8 *, 0x20), u16, 0x14) += 0x78;
    func_8012B370(o);
    func_sc06_016_8017F694(o);
}

static inline void func_sc06_016_8017F784_inline_2(u8 *o, s32 x, s32 y, s32 z) {
    if (AF(o, u8 *, 0x20) != 0) {
        AF(AF(o, u8 *, 0x20), s16, 0x18) = x;
        AF(AF(o, u8 *, 0x20), s16, 0x1A) = y;
        AF(AF(o, u8 *, 0x20), s16, 0x1C) = z;
    }
}

void func_sc06_016_8017F784(u8 *o) {
    s32 v;

    switch (AF(o, u16, 0x34)) {
    case 0:
        if (AF(D_sc06_016_8019F6F8, u16, 2) != 5) {
            return;
        }
        func_sc06_016_8017F784_inline_2(o, 0, 0, 0);
        func_8012E88C(o);
        AF(o, s32, 0x1C) = 0;
        AF(o, u16, 0x34) = 1;
        D_sc06_016_8019FB60 = 1;
        func_sc06_016_8017F784_inline(o);
        func_sc06_016_8018048C(o);
        break;
    case 1:
        v = ++AF(o, s32, 0x1C) << 10;
        func_sc06_016_8017F784_inline_2(o, v, v, v);
        func_8012E88C(o);
        if (AF(o, s32, 0x1C) == 4) {
            AF(o, u16, 0x34) = 2;
        func_sc06_016_8017F784_inline_2(o, 0x1000, 0x1000, 0x1000);
            func_8012E88C(o);
        }
        func_sc06_016_8017F784_inline(o);
        func_sc06_016_8018048C(o);
        break;
    case 2:
        func_8012E88C(o);
        func_sc06_016_80180BF0(o);
        if (AF(D_sc06_016_8019F6F8, u16, 2) == 6) {
            AF(o, u16, 0x34) = 3;
            AF(o, s32, 0x1C) = D_sc06_016_80188A18;
        func_sc06_016_8017F784_inline_2(o, 0x1000, 0x1000, 0x1000);
            func_8012E88C(o);
            func_sc06_016_8017F784_inline(o);
            func_sc06_016_801807C4(o);
            func_sc06_016_801803FC();
        } else {
            func_sc06_016_8017F784_inline(o);
            func_sc06_016_801800E0(o);
            func_sc06_016_8018048C(o);
        }
        break;
    case 3:
        v = ((AF(o, s32, 0x1C) - 5) << 12) / (D_sc06_016_80188A18 - 5);
        if (v < 0x100) {
            v = 0x100;
        }
        func_sc06_016_8017F784_inline_2(o, v, v, 0x1000);
        if (func_8012BEE8(o) != 0) {
            func_8012E8A8(o);
            AF(o, u16, 0x34) = 0;
        }
        func_sc06_016_8017F784_inline(o);
        func_sc06_016_801807C4(o);
        break;
    }
}

void func_sc06_016_8017FE54(u8 *arg0) {
    D_sc06_016_801890AC[AF(arg0, u16, 2)]();
}

extern struct_4_6 D_sc06_016_8019E288;
extern struct_4_6 D_sc06_016_8019E29C;
extern struct_40_2 D_sc06_016_8019FA10;
extern void func_sc06_016_801806FC();

void func_sc06_016_8017FE90(u8 *o) {
    s32 i;
    u8 *m;

    func_800233CC(&D_sc06_016_8019FA10, 0xA0);
    D_sc06_016_8019FA10.field_0 = D_sc06_016_8019E288;
    D_sc06_016_8019FA10.field_4 = D_sc06_016_8019E28C;
    for (i = 0; i < 4; i++) {
        if ((D_sc06_016_8019FA00[i] = m = func_8012C194()) != 0) {
            func_8001CD9C(m, &D_sc06_016_8019FA10);
            AF(m, s16, 0x18) = 0x1000;
            AF(m, s16, 0x1A) = 0x1000;
            AF(m, u16, 0x2C) = 0xC060;
            AF(m, s32, 4) |= 0x50000000;
        }
    }
    func_800233CC((struct_40_2 *)&D_sc06_016_8019FA50, 0xE0);
    ((struct_40_2 *)&D_sc06_016_8019FA50)[0].field_0 = D_sc06_016_8019E29C;
    ((struct_40_2 *)&D_sc06_016_8019FA50)[0].field_4 = D_sc06_016_8019E28C;
    m = func_8012C194();
    D_sc06_016_8019FAD0 = m;
    if (m != 0) {
        func_8001CD9C(m, (struct_40_2 *)&D_sc06_016_8019FA50);
        AF(m, s16, 0x18) = 0x1000;
        AF(m, s16, 0x1A) = 0x1000;
        AF(m, u16, 0x2C) = 0xC060;
        AF(m, s32, 4) |= 0x50000000;
    }
    func_800233CC((struct_40_2 *)&D_sc06_016_8019FA50 + 1, 0xC0);
    ((struct_40_2 *)&D_sc06_016_8019FA50)[1].field_0 = D_sc06_016_8019E29C;
    ((struct_40_2 *)&D_sc06_016_8019FA50)[1].field_4 = D_sc06_016_8019E28C;
    m = func_8012C194();
    D_sc06_016_8019FAD4 = m;
    if (m != 0) {
        func_8001CD9C(m, (struct_40_2 *)&D_sc06_016_8019FA50 + 1);
        AF(m, s16, 0x18) = 0x1000;
        AF(m, s16, 0x1A) = 0x1000;
        AF(m, u16, 0x2C) = 0xC060;
        AF(m, s32, 4) |= 0x50000000;
    }
    func_sc06_016_801806FC(0);
    func_sc06_016_801806FC(1);
    D_sc06_016_8019FB60 = 0;
    D_sc06_016_8019FB64 = 0;
    func_sc06_016_801800E0(o);
}

void func_sc06_016_801800E0(u8 *o) {
    struct_8_4 v;
    struct_8_4 a;
    struct_8_4 b;
    s32 flag;
    s32 i;
    s32 r;
    s32 k;
    u8 **p;
    u8 *e;

    SetRotMatrix(AF(o, u8 *, 0x20) + 0x54);
    SetTransMatrix(AF(o, u8 *, 0x20) + 0x54);
    a.field_0 = AF(AF(o, u8 *, 0x20), s32, 0x68);
    a.field_2 = AF(AF(o, u8 *, 0x20), s32, 0x6C);
    a.field_4 = AF(AF(o, u8 *, 0x20), s32, 0x70);
    for (i = 0; i < 7; i++) {
        v.field_2 = 0;
        v.field_0 = 0;
        v.field_4 = -((i + 1) << 7);
        RotTransSV(&v, &b, &flag);
        r = func_80135004(1, &a, &b);
        if (r != 0) {
            break;
        }
        a = b;
    }
    do {
        i = 0;
        k = -0x40;
        p = D_sc06_016_8019FA00;
    loop:
        e = *p;
        if (e != 0) {
            v.field_0 = 0;
            v.field_2 = 0;
            v.field_4 = k;
            RotTransSV(&v, &v, &flag);
            AF(e, s16, 8) = v.field_0;
            AF(e, s16, 0xA) = v.field_2;
            AF(e, s16, 0xC) = v.field_4;
            AF(e, s32, 4) &= 0x7FFFFFFF;
        }
        k -= 0xA0;
        i++;
        p++;
        if (i < 4) goto loop;
    } while (0);
    if (r == 0) {
        e = D_sc06_016_8019FAD0;
        if (e != 0) {
            AF(e, s32, 4) |= 0x80000000;
        }
        e = D_sc06_016_8019FAD4;
        if (e != 0) {
            AF(e, s32, 4) |= 0x80000000;
        }
    } else {
        b.field_0 = ((b.field_0 - AF(AF(o, u8 *, 0x20), s32, 0x68)) * 20 >> 4) + AF(AF(o, u8 *, 0x20), s32, 0x68);
        b.field_2 = ((b.field_2 - AF(AF(o, u8 *, 0x20), s32, 0x6C)) * 20 >> 4) + AF(AF(o, u8 *, 0x20), s32, 0x6C);
        b.field_4 = ((b.field_4 - AF(AF(o, u8 *, 0x20), s32, 0x70)) * 20 >> 4) + AF(AF(o, u8 *, 0x20), s32, 0x70);
        func_sc06_016_801803BC(D_sc06_016_8019FAD0, &b);
        func_sc06_016_801803BC(D_sc06_016_8019FAD4, &b);
        if (D_sc06_016_8019FA52 == 0xB0) {
            D_sc06_016_8019FA50 = D_sc06_016_8019E2A0;
        } else {
            D_sc06_016_8019FA50 = D_sc06_016_8019E2A4;
        }
    }
}

s32 func_sc06_016_801803BC(u8 *e, struct_8_4 *c) {
    if (e != 0) {
        AF(e, s16, 0x8) = c->field_0;
        AF(e, s16, 0xA) = c->field_2;
        AF(e, s16, 0xC) = c->field_4;
        AF(e, u32, 0x4) &= 0x7FFFFFFF;
    }
}

void func_sc06_016_801803FC(void) {
    s32 i;
    u8 *e;

    for (i = 0; i < 4; i++) {
        e = D_sc06_016_8019FA00[i];
        if (e != 0) {
            AF(e, s32, 4) |= 0x80000000;
        }
    }
    e = D_sc06_016_8019FAD0;
    if (e != 0) {
        AF(e, s32, 4) |= 0x80000000;
    }
    e = D_sc06_016_8019FAD4;
    if (e != 0) {
        AF(e, s32, 4) |= 0x80000000;
    }
}

void func_sc06_016_8018048C(u8 *o) {
    typedef struct { u8 field_0[4]; s32 field_4; u8 field_8[0xA]; u16 field_12; } struct_14_10;
    struct_8_4 out;
    struct_8_4 w;
    u8 *a;
    u8 *b;
    struct_40_2 *e;
    struct_40_2 *f;
    s32 s;
    u16 t;
    s32 c;

    a = D_sc06_016_8019FB58;
    b = D_sc06_016_8019FB5C;
    e = D_sc06_016_8019FAD8;
    f = e + 1;
    if (a == 0 || b == 0) {
        return;
    }
    switch (D_sc06_016_8019FB60) {
    case 0:
        AF(a, s32, 4) |= 0x80000000;
        AF(b, s32, 4) |= 0x80000000;
        return;
    case 1:
        AF(a, s32, 4) &= 0x7FFFFFFF;
        ((struct_14_10 *)b)->field_4 &= 0x7FFFFFFF;
        D_sc06_016_8019FB64 = 0;
        D_sc06_016_8019FB60 = 2;
    case 2:
        t = D_sc06_016_8019FB64 + 1;
        AF(a, s16, 0x1E) = 0xC00;
        AF(b, s16, 0x1E) = 0x1400;
        D_sc06_016_8019FB64 = t;
        s = (t << 6) & 0xFFC0;
        func_800233CC(e, s);
        func_800233CC(f, s);
        c = D_sc06_016_8019FB64 * 32 - 0x21;
        if (c > 0x100) {
            c = 0xFF;
        }
        c = 0xFF - c;
        e->field_0 = D_sc06_016_8019E28C;
        e->field_4.field_0 = c;
        e->field_4.field_1 = c;
        e->field_4.field_2 = c / 2;
        f->field_0 = D_sc06_016_8019E28C;
        f->field_4.field_0 = c;
        f->field_4.field_1 = c;
        f->field_4.field_2 = c / 2;
        w.field_0 = 0;
        w.field_2 = -0x20;
        w.field_4 = -0x80;
        func_8012F214(o, &w, &out);
        *(struct_8_4 *)(a + 8) = out;
        *(struct_8_4 *)(b + 8) = *(struct_8_4 *)(a + 8);
        AF(a, u16, 0x12) = AF(AF(o, u8 *, 0x20), u16, 0x12);
        ((struct_14_10 *)b)->field_12 = AF(AF(o, u8 *, 0x20), u16, 0x12);
        if (D_sc06_016_8019FB64 >= 9) {
            D_sc06_016_8019FB60 = 0;
        }
        break;
    }
}

extern void func_8001CD50();
void func_sc06_016_801806FC(s32 i) {
    u8 *m;

    func_800233CC(&D_sc06_016_8019FAD8[i], 0);
    D_sc06_016_8019FAD8[i].field_0 = D_sc06_016_8019E28C;
    D_sc06_016_8019FAD8[i].field_4 = D_sc06_016_8019E28C;
    m = func_8012C194();
    (&D_sc06_016_8019FB58)[i] = m;
    if (m != 0) {
        func_8001CD50(m, &D_sc06_016_8019FAD8[i]);
        AF(m, s32, 4) |= 0xD0000000;
    }
}

extern void func_sc06_016_80180894(struct_8_4 *pa, struct_8_4 *pb, s32 w, s32 sel);
void func_sc06_016_801807C4(u8 *o) {
    struct_8_4 a;
    struct_8_4 b;
    struct_8_4 pa;
    struct_8_4 pb;
    s32 i;

    for (i = 0; i < 5; i++) {
        a.field_0 = 0;
        a.field_2 = 0;
        a.field_4 = 0x40 - (i << 7);
        b.field_0 = 0;
        b.field_2 = 0;
        b.field_4 = 0x40 - ((i + 1) << 7);
        func_8012F214(o, &a, &pa);
        func_8012F214(o, &b, &pb);
        func_sc06_016_80180894(&pa, &pb, AF(AF(o, u8 *, 0x20), s16, 0x18), i);
    }
}

void func_sc06_016_80180894(struct_8_4 *pa, struct_8_4 *pb, s32 w, s32 sel) {
    u8 unused[16];
    struct_8_4 a;
    struct_8_4 b;
    struct_4_2 p[6];
    u8 *prim;
    s32 z;
    s32 dx;
    s32 dy;

    if (func_8012EF70(pa, &a) & ~0x1000) {
        return;
    }
    if (func_8012EF70(pb, &b) & ~0x1000) {
        return;
    }
    dy = ((b.field_2 - a.field_2) * w) >> 12;
    dx = ((b.field_0 - a.field_0) * w) >> 12;
    z = a.field_4;
    p[0].field_0 = a.field_0;
    p[0].field_2 = a.field_2;
    p[1].field_0 = b.field_0;
    p[1].field_2 = b.field_2;
    p[2].field_0 = a.field_0 + dy;
    p[2].field_2 = a.field_2 - dx;
    p[4].field_0 = a.field_0 - dy;
    p[3].field_0 = b.field_0 + dy;
    p[3].field_2 = b.field_2 - dx;
    p[4].field_2 = a.field_2 + dx;
    p[5].field_0 = b.field_0 - dy;
    p[5].field_2 = b.field_2 + dx;
    prim = func_80010A08(0x24);
    if (sel == 0) {
        AF(prim, struct_4_6, 4) = D_sc06_016_8019E28C;
    } else {
        AF(prim, struct_4_6, 4) = D_sc06_016_8019E288;
    }
    AF(prim, struct_4_6, 0xC) = D_sc06_016_8019E288;
    AF(prim, struct_4_6, 0x14) = D_sc06_016_8019E28C;
    AF(prim, struct_4_6, 0x1C) = D_sc06_016_8019E28C;
    AF(prim, struct_4_2, 8) = p[0];
    AF(prim, struct_4_2, 0x10) = p[1];
    AF(prim, struct_4_2, 0x18) = p[2];
    AF(prim, struct_4_2, 0x20) = p[3];
    AF(prim, u8, 7) = 0x3A;
    AF(prim, s32, 0) = 0x08000000;
    AddPrim(D_800A651C[D_800B9A02[0]].field_0 + z, prim);
    func_8012E28C(z, 1);
    prim = func_80010A08(0x24);
    if (sel == 0) {
        AF(prim, struct_4_6, 4) = D_sc06_016_8019E28C;
    } else {
        AF(prim, struct_4_6, 4) = D_sc06_016_8019E288;
    }
    AF(prim, struct_4_6, 0xC) = D_sc06_016_8019E288;
    AF(prim, struct_4_6, 0x14) = D_sc06_016_8019E28C;
    AF(prim, struct_4_6, 0x1C) = D_sc06_016_8019E28C;
    AF(prim, struct_4_2, 8) = p[0];
    AF(prim, struct_4_2, 0x10) = p[1];
    AF(prim, struct_4_2, 0x18) = p[4];
    AF(prim, struct_4_2, 0x20) = p[5];
    AF(prim, u8, 7) = 0x3A;
    AF(prim, s32, 0) = 0x08000000;
    AddPrim(D_800A651C[D_800B9A02[0]].field_0 + z, prim);
    func_8012E28C(z, 1);
}

void func_sc06_016_80180BF0(u8 *o) {
    struct_8_4 a;
    struct_8_4 b;
    s32 r;
    s32 i;

    a.field_0 = AF(o, s16, 6);
    a.field_2 = AF(o, s16, 0xA);
    a.field_4 = AF(o, s16, 0xE);
    b.field_0 = D_80126B5E;
    b.field_2 = D_80126B62;
    b.field_4 = D_80126B66;
    r = func_8012B70C(&a, &b);
    a.field_4 = -0x280;
    b.field_4 = 0;
    for (i = 0; i < 3; i++) {
        a.field_0 = b.field_0 = (i - 1) * 0x2C;
        a.field_2 = b.field_2 = -0x2C;
        if (func_sc06_016_80180D24(o, &a, &b, r & 0xFFF)) break;
        a.field_2 = b.field_2 = 0;
        if (func_sc06_016_80180D24(o, &a, &b, r & 0xFFF)) break;
        a.field_2 = b.field_2 = 0x2C;
        if (func_sc06_016_80180D24(o, &a, &b, r & 0xFFF)) break;
    }
}

s32 func_sc06_016_80180D24(u8 *o, struct_8_4 *a, struct_8_4 *b, s32 r0) {
    struct_8_4 va;
    struct_8_4 vb;
    s16 r = r0;

    func_8012F14C(AF(o, u8 *, 0x20) + 0x54, a, &va);
    func_8012F14C(AF(o, u8 *, 0x20) + 0x54, b, &vb);
    if (func_80135888(D_80126B78, D_80126B90, &va, &vb) != 0) {
        func_8012F568(1, 0x4201, r, 0x5A, &vb, &D_801152A8);
        D_80126B9A = r;
        return 1;
    }
    return 0;
}

void func_sc06_016_80180DE8(u8 *arg0) {
    D_sc06_016_801890B4[AF(arg0, u16, 2)]();
}

void func_sc06_016_80180E24(u8 *o) {
    struct_8_4 v;
    u8 *p;
    s32 n;

    p = AF(o, u8 *, 0x2C);
    if (AF(o, u16, 2) == 0) {
        AF(AF(o, u8 *, 0x20), u8 *, 0x20) = &D_sc06_016_801890BC;
        AF(AF(o, u8 *, 0x20), u8, 0x27) = 0x43;
        AF(AF(o, u8 *, 0x20), s16, 0x18) = AF(AF(o, u8 *, 0x20), s16, 0x1A) = 0x2800;
        func_80128EA8(AF(o, u8 *, 0x20), o + 0x24, &D_sc06_016_801890C8);
        AF(o, u16, 2)++;
        func_80128ED8(AF(o, u8 *, 0x20), o + 0x24);
        AF(o, s32, 0x1C) = 0;
    }
    n = ++AF(o, s32, 0x1C);
    if (n >= 0x16 || AF(p, s16, 0x36) != AF(o, s16, 0x30)) {
        func_801292C8(o);
        return;
    }
    if (n < 4) {
        AF(AF(o, u8 *, 0x20), s16, 0x18) = AF(AF(o, u8 *, 0x20), s16, 0x1A) = n * 0xA00;
    } else {
        AF(AF(o, u8 *, 0x20), s16, 0x18) = AF(AF(o, u8 *, 0x20), s16, 0x1A) = 0x2800;
    }
    func_8012F214(p, &D_sc06_016_801890D0, &v);
    AF(o, s16, 6) = v.field_0;
    AF(o, s16, 0xA) = v.field_2;
    AF(o, s16, 0xE) = v.field_4;
    AF(AF(o, u8 *, 0x20), u16, 0x2C) = 0xC040;
}

void func_sc06_016_80180F68(s32 o) {
    u8 *p;

    p = AF(o, u8 *, 0x20);
    AF(o, u16, 2) = 2;
    AF(o, u16, 0x34) = 0;
    AF(p, s16, 0x14) = 0;
    AF(p, s16, 0x12) = 0;
    AF(p, s16, 0x10) = 0;
    func_8012B2CC(o);
    func_8012B200(o);
    if (AF(o, s16, 6) < 0) {
        if (AF(o, s16, 0x70) != 0) {
            AF(o, s32, 0x10) = 0x40000;
        } else {
            AF(o, s32, 0x10) = 0x30000;
        }
    } else {
        if (AF(o, s16, 0x70) != 0) {
            AF(o, s32, 0x10) = -0x40000;
        } else {
            AF(o, s32, 0x10) = -0x30000;
        }
    }
    AF(o, s32, 0x14) = 0x200000;
    AF(o, s32, 0x18) = 0;
    AF(o, s32, 0x48) = 0x20000;
    AF(o, s32, 0x1C) = 0;
    func_8002D4C8(0x980, 0);
}

s32 func_sc06_016_80181018(s32 arg0) {
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 0;
    do {
        func_8012C658(0x303, var_s0, arg0);
        var_s0 += 1;
        temp_v0 = var_s0 < 8;
    } while (temp_v0 != 0);
    return temp_v0;
}

void func_sc06_016_80181068(u8 *arg0) {
    D_sc06_016_801890E4[AF(arg0, u16, 2)]();
}

void func_sc06_016_801810A4(u8 *o) {
    u8 *p;
    s32 n;

    p = AF(o, u8 *, 0x2C);
    switch (AF(o, u16, 2)) {
    case 0:
        AF(o, u16, 2)++;
        AF(AF(o, u8 *, 0x20), u8 *, 0x20) = &D_sc06_016_801890F0;
        AF(AF(o, u8 *, 0x20), u8, 0x27) = 0x44;
        AF(AF(o, u8 *, 0x20), s16, 0x18) = AF(AF(o, u8 *, 0x20), s16, 0x1A) = 0xC00;
        func_80128EA8(AF(o, u8 *, 0x20), o + 0x24, &D_sc06_016_801890FC);
        func_80128ED8(AF(o, u8 *, 0x20), o + 0x24);
        AF(o, s32, 0x1C) = 0;
    case 1:
        if (AF(p, s16, 0x36) != AF(o, s16, 0x30)) {
            func_801292C8(o);
            break;
        }
        n = ++AF(o, s32, 0x1C);
        if (n < 8) {
            AF(AF(o, u8 *, 0x20), s16, 0x18) = AF(AF(o, u8 *, 0x20), s16, 0x1A) = n * 0x180;
        } else if (n < 0x16) {
            AF(AF(o, u8 *, 0x20), s16, 0x18) = AF(AF(o, u8 *, 0x20), s16, 0x1A) = 0xC00;
        } else if (AF(p, s32, 0x1C) == 0) {
            AF(AF(o, u8 *, 0x20), s16, 0x1A) = 0x600;
            AF(AF(o, u8 *, 0x20), s16, 0x18) = 0x1200;
        } else if (AF(p, s32, 0x1C) > 0x10) {
            AF(AF(o, u8 *, 0x20), s16, 0x1A) = 0xC00;
            AF(AF(o, u8 *, 0x20), s16, 0x18) = 0xC00;
        } else {
            AF(AF(o, u8 *, 0x20), s16, 0x1A) = 0xC00;
            AF(AF(o, u8 *, 0x20), s16, 0x18) = AF(p, s32, 0x1C) * 0x60 + 0x600;
        }
        func_80129350(o, p);
        AF(AF(o, u8 *, 0x20), u16, 0x2C) = 0xC040;
        break;
    }
}

void func_sc06_016_80181254(u8 *arg0) {
    D_sc06_016_80189104[AF(arg0, u16, 2)]();
}

void func_sc06_016_80181290(u8 *o) {
    typedef union { s32 m0; struct_4_2 m1; } union_4_3;
    struct_8_4 a;
    struct_8_4 b;
    union_4_3 w;
    s32 r;
    s32 v;

    if (func_8012BD14() < 0x57E5) {
        r = func_8012B8A4(o);
        a.field_0 = AF(o, s16, 6);
        a.field_2 = AF(o, s16, 0xA);
        a.field_4 = AF(o, s16, 0xE);
        b.field_0 = D_80126B5E;
        b.field_2 = D_80126B62;
        b.field_4 = D_80126B66;
        b.field_2 -= 0x40;
        if (func_80135888(D_80126B78, D_80126B90, &a, &b)) {
            func_8012F568(1, 0x4201, r, 0x5A, &b, &D_801152A8);
            D_80126B9A = r;
            func_8012B0B4(&w, r, 0x9E);
            v = w.m0;
            D_80126B5E = AF(o, s16, 6) - v;
            D_80126B66 = AF(o, s16, 0xE) - (v >> 16);
        }
    }
}

extern struct_8_4 D_sc06_016_8019FB68[];
void func_sc06_016_801813B0() {
    s32 i;
    struct_8_4 *src;

    D_sc06_016_8019FEF8 = 0;
    src = AF(*(u8 **)&D_sc06_016_801937DC, struct_8_4 *, 0xC);
    for (i = 0; i < 0x41; i++) {
        D_sc06_016_8019FB68[i] = src[i];
        if (src[i].field_2 == -0x96) {
            D_sc06_016_8019FD70[i] = 4;
        } else if (src[i].field_2 == -0x8B) {
            D_sc06_016_8019FD70[i] = 3;
        } else if (src[i].field_2 == -0x6A) {
            D_sc06_016_8019FD70[i] = 2;
        } else if (src[i].field_2 == -0x39) {
            D_sc06_016_8019FD70[i] = 1;
        } else {
            D_sc06_016_8019FD70[i] = 0;
        }
    }
}

void func_sc06_016_80181478(u8 *o) {
    u8 unused[8];
    s32 w[5];
    u8 *q;
    u8 *p;
    s32 n;
    s32 i;

    q = *(u8 **)&D_sc06_016_801937DC;
    D_sc06_016_8019FEF8 -= 0xC7;
    p = AF(q, u8 *, 0x1C);
    n = AF(q, s32, 0x20);
    if (D_sc06_016_8019FEF8 >= 0x600) {
        D_sc06_016_8019FEF8 -= 0x600;
    }
    if (D_sc06_016_8019FEF8 < 0) {
        D_sc06_016_8019FEF8 += 0x600;
    }
    if (AF(AF(o, u8 *, 0x64), u16, 2) == 6) {
        D_sc06_016_8018910C = D_sc06_016_8018910C - 0x100;
    } else {
        D_sc06_016_8018910C = 0x1000;
    }
    w[0] = func_sc06_016_801816DC(D_sc06_016_8019FEF8, D_sc06_016_8018910C);
    w[1] = func_sc06_016_801816DC(D_sc06_016_8019FEF8 + 0x133, D_sc06_016_8018910C);
    w[2] = func_sc06_016_801816DC(D_sc06_016_8019FEF8 + 0x266, D_sc06_016_8018910C);
    w[3] = func_sc06_016_801816DC(D_sc06_016_8019FEF8 + 0x399, D_sc06_016_8018910C);
    w[4] = func_sc06_016_801816DC(D_sc06_016_8019FEF8 + 0x4CC, D_sc06_016_8018910C);
    for (i = 0; i < 0x41; i++) {
        D_sc06_016_8019FDF4[i] = w[D_sc06_016_8019FD70[i]];
    }
    for (i = 0; i < n; i++) {
        if ((p[3] & 0xFD) == 0x30) {
            AF(p, s32, 4) = D_sc06_016_8019FDF4[AF(p, u16, 0x12)] | 0x32000000;
            AF(p, s32, 8) = D_sc06_016_8019FDF4[AF(p, u16, 0x16)];
            AF(p, s32, 0xC) = D_sc06_016_8019FDF4[AF(p, u16, 0x1A)];
            p += 0x1C;
        } else {
            AF(p, s32, 4) = D_sc06_016_8019FDF4[AF(p, u16, 0x16)] | 0x3A000000;
            AF(p, s32, 8) = D_sc06_016_8019FDF4[AF(p, u16, 0x1A)];
            AF(p, s32, 0xC) = D_sc06_016_8019FDF4[AF(p, u16, 0x1E)];
            AF(p, s32, 0x10) = D_sc06_016_8019FDF4[AF(p, u16, 0x22)];
            p += 0x24;
        }
    }
}

s32 func_sc06_016_801816DC(s32 a, s32 s) {
    s32 lo;
    s32 r;
    s32 g;
    s32 b;

    a %= 0x600;
    lo = a & 0xFF;
    switch (a / 0x100) {
    case 0:
        r = 0;
        g = 0;
        b = 0;
        break;
    case 1:
        r = lo;
        g = r / 2;
        b = r / 4;
        break;
    case 2:
    case 3:
        r = 0xFF;
        g = 0x7F;
        b = 0x3F;
        break;
    case 4:
        r = 0xFF - lo;
        g = r / 2;
        b = r / 4;
        break;
    case 5:
        r = 0;
        g = 0;
        b = 0;
        break;
    }
    if (s < 0) {
        s = 0;
    }
    b = (u32)(b * s) >> 12;
    if ((u32)b >= 0x100) {
        b = 0xFF;
    }
    g = (u32)(g * s) >> 12;
    if ((u32)g >= 0x100) {
        g = 0xFF;
    }
    r = (u32)(r * s) >> 12;
    if ((u32)r >= 0x100) {
        r = 0xFF;
    }
    return (b & 0xFF) | ((g << 8) & 0xFF00) | ((r << 16) & 0xFF0000);
}

void func_sc06_016_80181804(u8 *arg0) {
    D_sc06_016_80189110[AF(arg0, u16, 2)]();
}

extern u16 D_sc06_016_80189118[];
extern u16 D_sc06_016_80189124[];
extern void func_sc06_016_8018191C();
void func_sc06_016_80181840(u8 *o) {
    struct_8_4 a;
    struct_8_4 b;
    s32 r;
    s32 i;
    r = func_8012B8A4(o);
    for (i = 0; i < 5; i++) {
        a.field_0 = AF(o, u16, 6) + D_sc06_016_80189118[i];
        a.field_2 = AF(o, u16, 0xA) + 0x40;
        a.field_4 = AF(o, u16, 0xE) + D_sc06_016_80189124[i];
        b = a;
        b.field_2 -= 0x100;
        func_sc06_016_8018191C(o, &a, &b, r);
    }
}

void func_sc06_016_8018191C(u8 *o, struct_8_4 *a, struct_8_4 *b, s32 r) {
    if (func_80135888(D_80126B78, D_80126B90, a, b)) {
        func_8012F568(1, 0x4201, r, 0x5A, b, &D_801152A8);
        D_80126B9A = r;
    }
}

void func_sc06_016_80181998(u8 *o) {
    u8 *p;
    s32 n;

    p = AF(o, u8 *, 0x2C);
    switch (AF(o, u16, 2)) {
    case 0:
        AF(AF(o, u8 *, 0x20), u8 *, 0x20) = &D_sc06_016_80189130;
        AF(AF(o, u8 *, 0x20), s32, 4) |= 0x58000000;
        AF(AF(o, u8 *, 0x20), u8, 0x27) = 0x42;
        AF(AF(o, u8 *, 0x20), s16, 0x18) = AF(AF(o, u8 *, 0x20), s16, 0x1A) = 0x3800;
        func_80128EA8(AF(o, u8 *, 0x20), o + 0x24, &D_sc06_016_8018913C);
        AF(o, u16, 2)++;
        func_80128ED8(AF(o, u8 *, 0x20), o + 0x24);
        AF(o, s32, 0x1C) = 0;
    case 1:
        if (AF(p, s16, 0x36) != AF(o, s16, 0x30)) {
            func_801292C8(o);
            break;
        }
        func_80128ED8(AF(o, u8 *, 0x20), o + 0x24);
        n = ++AF(o, s32, 0x1C);
        if (n < 8) {
            AF(AF(o, u8 *, 0x20), s16, 0x18) = AF(AF(o, u8 *, 0x20), s16, 0x1A) = n * 0x700;
        } else {
            AF(AF(o, u8 *, 0x20), s16, 0x18) = AF(AF(o, u8 *, 0x20), s16, 0x1A) = 0x3800;
        }
        func_80129350(o, p);
        AF(AF(o, u8 *, 0x20), s16, 0x10) = 0;
        AF(AF(o, u8 *, 0x20), s16, 0x12) = 0;
        AF(AF(o, u8 *, 0x20), u16, 0x14) = AF(AF(p, u8 *, 0x20), u16, 0x12);
        AF(AF(o, u8 *, 0x20), u16, 0x2C) = 0xC040;
        break;
    }
}

void func_sc06_016_80181B14(u8 *arg0) {
    D_sc06_016_801891D4[AF(arg0, u16, 2)]();
}

s16 func_sc06_016_80181B50(void) {
    return D_sc06_016_8019F71C;
}

void func_sc06_016_80181B60(void) {
}

void func_sc06_016_80181B68(u8 *o) {
    u8 *p = &D_80126B58;
    switch (AF(o, u16, 0x34)) {
    case 0:
        if (AF(p, s16, 0xE) > 0x80) {
            func_80178B18(o, &D_sc06_016_80188AC4);
            AF(o, u16, 0x34)++;
        }
        break;
    case 1:
        AF(o, u16, 0x34)++;
    case 2:
        if (func_80178970(o) != 0) {
            func_80178D18(o);
            AF(o, s32, 0x1C) = 3;
            AF(o, s32, 0xDC) = 1;
            AF(o, u16, 0x34)++;
        }
        break;
    case 3:
        if (func_8001AAA0(0x7D) != 0) {
            AF(o, u16, 0x34)++;
        }
        break;
    case 4:
        if (func_8012BEE8(o) != 0) {
            func_sc06_016_8017BF08((s32)(o + 0x76), (s32)&D_sc06_016_8019F724, 7, 0xDC);
            func_sc06_016_8017E114(o);
        }
        break;
    }
}

void func_sc06_016_80181C78(u8 *arg0, s32 arg1, s32 arg2) {
    if ((AF(arg0, s32, 0x1C) & 3) == 2) {
        func_sc06_016_8017ECE0((s32) arg0, arg1, arg2);
    }
    if (func_8012BEE8((s32) arg0) != 0) {
        func_sc06_016_8017E114((s32) arg0);
    }
}

extern s32 func_8012B8E4();
void func_sc06_016_80181CD0(u8 *o) {
    AF(AF(o, u8 *, 0x20), u16, 0x12) += func_8012B8E4(o, 4);
    if (AF(o, s32, 0x1C) == 7) {
        func_8002D4C8(0xA91, 0);
    }
    if (func_8012BEE8(o) != 0) {
        func_sc06_016_8017E190((s32)o);
    }
}

void func_sc06_016_80181D44(s32 arg0, s32 arg1) {
    if (func_8012BEE8(arg0, arg1) != 0) {
        func_sc06_016_8017E1D8(arg0);
    }
}

void func_sc06_016_80181D7C(s32 arg0) {
    if (func_8012BEE8(arg0) != 0) {
        func_8002D4C8(4, 0x97F);
        func_sc06_016_8017E4FC(arg0);
    }
}

void func_sc06_016_80181DBC(s32 arg0) {
    u16 temp_v0;

    temp_v0 = D_sc06_016_8019F710 - 1;
    D_sc06_016_8019F710 = temp_v0;
    if ((temp_v0 << 0x10) <= 0) {
        func_sc06_016_8017E7D0(arg0);
    }
}

void func_sc06_016_80181DFC(s32 arg0, s32 arg1) {
    func_8012AD80(arg0, arg1);
    if (func_8012BEE8(arg0) != 0) {
        func_sc06_016_8017E8A8(arg0);
    }
}

void func_sc06_016_80181E3C(u8 *arg0, s32 arg1, s32 arg2) {
    if (AF(arg0, s32, 0x1C) == 0xA) {
        func_8002D4C8(0xA93, 0, arg2);
    }
    if (func_8012BEE8((s32) arg0) != 0) {
        func_sc06_016_8017E910((s32) arg0);
    }
}

void func_sc06_016_80181E90(u8 *arg0, s32 arg1, s32 arg2) {
    if (!(AF(arg0, s32, 0x1C) & 3)) {
        func_sc06_016_8017ECE0((s32) arg0, arg1, arg2);
    }
    if (func_8012BEE8((s32) arg0) != 0) {
        func_sc06_016_8017E96C((s32) arg0);
    }
}

extern s32 D_sc06_016_80188A00;
void func_sc06_016_80181EE8(u8 *o) {
    if (func_8012BEE8(o) != 0) {
        func_8002D4C8(0x982, 0);
        if (D_sc06_016_80188A00 == 0) {
            switch ((s16)D_sc06_016_8019F708) {
            case 0:
            case 1:
                func_sc06_016_8017E9CC(o);
                break;
            case 2:
                func_sc06_016_8017E9CC(o);
                break;
            case 3:
            default:
                func_sc06_016_8017EEFC((s32)o, 2, (s32)&D_sc06_016_80188A04, (s32)&D_sc06_016_80195614);
                AF(o, s32, 0x1C) = 0x11;
                func_8012B2CC(o);
                func_sc06_016_8017ECE0(o);
                break;
            }
        } else if (D_sc06_016_80188A00 == 1) {
            func_sc06_016_8017EEFC((s32)o, 2, (s32)&D_sc06_016_80188A04, (s32)&D_sc06_016_80195614);
            AF(o, s32, 0x1C) = 0x11;
            func_8012B2CC(o);
            func_sc06_016_8017ECE0(o);
        } else {
            D_sc06_016_8019F708 = 0;
            func_sc06_016_8017E9CC(o);
        }
    }
}

void func_sc06_016_80181FB0(u8 *arg0, s32 arg1, s32 arg2) {
    if ((AF(arg0, s32, 0x1C) & 3) == 2) {
        func_sc06_016_8017ECE0((s32) arg0, arg1, arg2);
    }
    if (func_8012BEE8((s32) arg0) != 0) {
        func_sc06_016_8017EAE4((s32) arg0);
    }
}

void func_sc06_016_80182008(u8 *arg0, s32 arg1, s32 arg2) {
    if (AF(arg0, s32, 0x1C) == 0xA) {
        func_8002D4C8(0xA93, 0, arg2);
    }
    if (func_8012BEE8((s32) arg0) != 0) {
        func_sc06_016_8017EB3C((s32) arg0);
    }
}

void func_sc06_016_8018205C(s32 arg0) {
    u16 temp_v0;

    temp_v0 = D_sc06_016_8019F714 - 1;
    D_sc06_016_8019F714 = temp_v0;
    if ((temp_v0 << 0x10) <= 0) {
        D_sc06_016_8019F70C = 0;
        D_sc06_016_8019F708 += 1;
        func_sc06_016_8017EEFC(arg0, 0xA, 0, (s32) &D_sc06_016_80194FFC);
        AF(arg0, s32, 0x1C) = 0x18;
        func_8012C588(0x2FD, arg0);
    }
}

extern s32 func_800D0CE0();
void func_sc06_016_801820E0(u8 *o) {
    switch (AF(o, u16, 0x34)) {
    case 0:
        AF(o, u16, 0x34)++;
        break;
    case 1:
        if (func_80178970(o) != 0) {
            func_80178D18(o);
            AF(o, s32, 0xDC) = 0;
            AF(o, u16, 0x34)++;
        }
        break;
    case 2:
        if (func_800D0CE0() == 1) {
            AF(o, u16, 0x34)++;
        }
        break;
    case 3:
        func_sc06_016_8017C068();
        D_sc06_016_8019F71C = 1;
        break;
    }
}

void func_sc06_016_801821B8(u8 *arg0) {
    D_sc06_016_80188BB4 = AF(AF(arg0, void *, 0x20), u16, 0x12);
}

void func_sc06_016_801821D4(u8 *o) {
    func_8012B2CC(o);
    func_8012B200(o);
    func_8012B14C(o, &D_sc06_016_80188BEC);
    AF(o, s32, 0x48) = D_sc06_016_80188BF8;
    AF(o, s32, 0x1C) = 0;
}

extern void func_80015D4C();
void func_sc06_016_80182224(u8 *o) {
    s32 v;
    func_8012AD80(o);
    v = AF(o, s32, 0x1C) += 4;
    if (v > 0xFF) {
        v = 0xFF;
    }
    func_80015D4C(-0xA0, -0x78, 0x140, 0xF0, (u8)v, (u8)v, (u8)v, 0x20, 1);
}

void func_sc06_016_801822A0(s32 arg0, s32 arg1, s32 arg2) {
    func_8002D4C8(0xC0B, 0, arg2);
}

void func_sc06_016_801822C4(void) {
    func_8014708C((s32) &D_80126B58);
    func_801472C8((s32) &D_80126B58);
}

void func_sc06_016_801822FC(void) {
    func_80147084((s32) &D_80126B58);
    func_801472B4((s32) &D_80126B58);
}

void func_sc06_016_80182334(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc06_016_80188A70) != 0) {
        func_8012E8E0(arg0, (s32) &D_sc06_016_80188A04);
        D_sc06_016_8019F6F8 = arg0;
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32, 0xB4) = 0;
        AF(arg0, u8, 0xC1) = 0;
        AF(arg0, s32 *, 0xBC) = &D_sc06_016_80188A40;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 3);
        func_8012C588(0x2D9, arg0);
        func_8012C588(0x2EE, 0);
        func_8012C588(0x30A, arg0);
        AF(arg0, s32, 0xDC) = 0;
        D_sc06_016_8019F708 = 0;
        D_sc06_016_8019F70C = 0;
        D_sc06_016_8019F71C = 0;
        D_sc06_016_8019F720 = 0;
        D_sc06_016_8019F724 = 0x708;
        func_sc06_016_8017EEFC(arg0, 1, (s32) &D_sc06_016_80188A04, (s32) &D_sc06_016_80193CE4);
        AF(arg0, s16, 0x34) = 0;
    }
}

void func_sc06_016_80182424(u8 *o) {
    u8 *p;

    func_8012931C(o);
    p = AF(o, u8 *, 0x20);
    if (AF(p, s16, 0x18) >= 0x400) {
        AF(p, s16, 0x18) -= 0x400;
        AF(AF(o, u8 *, 0x20), s16, 0x1A) -= 0x400;
        if (!(AF(o, u16, 0x2C) & 1)) {
            D_sc06_016_8019F95C[0].field_0.field_0 -= 0x30;
            D_sc06_016_8019F95C[0].field_0.field_1 -= 0x20;
            D_sc06_016_8019F95C[0].field_0.field_2 -= 8;
            func_sc06_016_8017F5FC(o);
        }
    } else {
        func_801292C8(o);
    }
}

void func_sc06_016_801824F4(s32 arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;

    temp_v0 = func_8012C1B8(arg0);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc06_016_80191CBC);
    temp_v0_2 = func_8012C1B8();
    D_sc06_016_8019F9FC = temp_v0_2;
    if (temp_v0_2 != 0) {
        func_8001C214(temp_v0_2, (s32) &D_sc06_016_80192B1C);
        AF(D_sc06_016_8019F9FC, u16, 0x2C) = (u16) (AF(D_sc06_016_8019F9FC, u16, 0x2C) | 0x10);
    }
    temp_v1 = AF(arg0, s32, 0x20);
    AF(arg0, s16, 2) = 1;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s16, 0xFC) = 0;
    AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
    AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x1000;
    AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x1000;
    AF(AF(arg0, s32, 0x20), s16, 0x1C) = 0x1000;
    func_8012E8A8(arg0);
    func_sc06_016_8017FE90(arg0);
}

void func_sc06_016_801825DC(u8 *arg0) {
    AF(arg0, s32, 0xC) = 0;
    AF(arg0, s32, 8) = 0;
    AF(arg0, s32, 4) = 0;
    func_80132784((s32) arg0, AF(arg0, s32, 0x64), 4);
    if (AF(AF(arg0, s32, 0x64), u16, 2) != 0xA) {
        func_8012C218((s32) arg0);
    }
}

void func_sc06_016_80182638(s32 arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = func_8012C1B8(arg0);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(temp_v0, 0);
    temp_v0_2 = func_80132EF4(arg0, 0x5D);
    if (temp_v0_2 != 0) {
        AF(temp_v0_2, s32, 0x2C) = arg0;
        AF(temp_v0_2, u16, 0x30) = (u16) AF(arg0, u16, 0x36);
    }
    AF(arg0, s16, 2) = 1;
}

void func_sc06_016_801826B4(u8 *arg0) {
    u16 sp10[3];

    AF(arg0, s32, 0xC) = 0;
    AF(arg0, s32, 8) = 0;
    AF(arg0, s32, 4) = 0;
    func_80132784((s32) arg0, AF(arg0, s32, 0x64), 4);
    func_8012F214((s32) arg0, (s32) &D_sc06_016_801890D8, (s32) sp10);
    AF(arg0, u16, 6) = sp10[0];
    AF(arg0, u16, 0xA) = sp10[1];
    AF(arg0, u16, 0xE) = sp10[2];
    func_8012B2CC((s32) arg0);
    if (func_8012BEE8((s32) arg0) != 0) {
        func_sc06_016_80180F68((s32) arg0);
    }
}

void func_sc06_016_80182744(u8 *arg0) {
    u16 temp_v1;

    func_8012AD80();
    AF(arg0, s32, 0x1C) = (s32) (AF(arg0, s32, 0x1C) + 1);
    if (AF(arg0, s16, 0xA) >= -0x27F) {
        AF(arg0, s16, 0xA) = -0x280;
        AF(arg0, s16, 8) = 0;
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, s32, 0x14) = (s32) -AF(arg0, s32, 0x14);
        func_8002D4C8(0x983, 0);
        temp_v1 = AF(arg0, u16, 0x34) + 1;
        AF(arg0, u16, 0x34) = temp_v1;
        if (D_sc06_016_801890E0[AF(arg0, s16, 0x70)] < (temp_v1 & 0xFFFF)) {
            func_8002D4C8(0x984, 0);
            goto block_4;
        }
    }
    if (func_8012BD14((s32) arg0) < 0x900) {
block_4:
        func_sc06_016_80181018((s32) arg0);
        func_8012C218((s32) arg0);
    }
}

void func_sc06_016_80182810(s32 arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = func_8012C1B8(arg0);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(temp_v0, 0);
    temp_v0_2 = func_80132EF4(arg0, 0x5E);
    if (temp_v0_2 != 0) {
        AF(temp_v0_2, s32, 0x2C) = arg0;
        AF(temp_v0_2, u16, 0x30) = (u16) AF(arg0, u16, 0x36);
    }
    AF(arg0, s16, 2) = 1;
    AF(arg0, s32, 0x1C) = 0x16;
    AF(arg0, s16, 0x84) = 0;
    func_80143994(arg0, 0x1800);
}

void func_sc06_016_801828A0(u8 *o) {
    u8 *s = AF(o, u8 *, 0x64);
    s32 v;
    switch (AF(s, u16, 2)) {
    case 5:
    case 6:
        AF(o, s32, 4) = AF(s, s32, 4);
        AF(o, s32, 8) = AF(s, s32, 8);
        AF(o, s32, 0xC) = AF(s, s32, 0xC);
        AF(o, s32, 0x1C)++;
        v = AF(o, s32, 0x1C) << 10;
        if (v > 0x1000) v = 0x1000;
        if (AF(o, u8 *, 0x20) != 0) {
            AF(AF(o, u8 *, 0x20), s16, 0x18) = v;
            AF(AF(o, u8 *, 0x20), s16, 0x1A) = v;
            AF(AF(o, u8 *, 0x20), s16, 0x1C) = v;
        }
        func_sc06_016_80181478(o);
        func_8012E88C(o);
        if (AF(s, u16, 2) == 5) {
            func_sc06_016_80181290(o);
        }
        break;
    default:
        AF(o, s32, 0x1C) = 0;
        func_8012E8A8(o);
        break;
    }
}

void func_sc06_016_80182990(s32 arg0) {
    s32 temp_a0;
    s32 temp_v0;
    s32 temp_v1;

    temp_v0 = func_8012C1B8(arg0);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C810(temp_v0, (s32) &D_sc06_016_801937DC);
    temp_a0 = AF(arg0, s32, 0x20);
    AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) | 0x50000000);
    temp_v1 = AF(arg0, s32, 0x20);
    AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
    func_sc06_016_801813B0(arg0);
    AF(arg0, s16, 2) = 1;
}

void func_sc06_016_80182A1C(s32 arg0) {
    func_8012AD80();
    func_sc06_016_80181840(arg0);
    if (func_8012BEE8(arg0) != 0) {
        func_8012C218(arg0);
    }
}

void func_sc06_016_80182A64(s32 arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = func_8012C1B8(arg0);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(temp_v0, 0);
    AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) - 0x40);
    temp_v0_2 = func_80132EF4(arg0, 0x60);
    if (temp_v0_2 != 0) {
        AF(temp_v0_2, s32, 0x2C) = arg0;
        AF(temp_v0_2, u16, 0x30) = (u16) AF(arg0, u16, 0x36);
    }
    AF(arg0, s16, 2) = 1;
    AF(AF(arg0, s32, 0x20), s16, 0x12) = AF(arg0, s16, 0x70) * 512;
    func_8012B2CC(arg0);
    func_8012B200(arg0);
    func_8012B178(arg0, -0xD0000);
    AF(arg0, s32, 0x1C) = 0x5A;
    func_80143994(arg0, 0x3800);
}

void func_sc06_016_80182B2C(s32 arg0, s32 arg1) {
    func_8012B2CC(arg0, arg1);
}

void func_sc06_016_80182B4C(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8(arg0);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(temp_v0, 0);
    AF(arg0, s16, 2) = 1;
    func_8012E8E0(arg0, (s32) &D_sc06_016_801891BC);
    AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc06_016_801891C4 | 0x40000000);
    AF(arg0, s16, 0x5C) = 0x400;
}

void func_sc06_016_80182BCC(void) {
    func_8016EE40((s32) &D_sc06_016_8019A464, 0x01000000);
}

void func_sc06_016_80182BF4(u8 *arg0) {
    D_sc06_016_8019A47C[AF(arg0, u8, 0x216)]();
}

void func_sc06_016_80182C30(u8 *o) {
    func_sc06_016_80182F44(o);
    if (AF(o, s16, 0x210) < 0) {
        AF(o, s16, 0x210) = -0x30;
    } else {
        AF(o, s16, 0x210) = 0x30;
    }
    func_80171990(o);
}

void func_sc06_016_80182C78(s32 arg0) {
    if (func_sc06_016_80183020() != 0) {
        func_8002D4C8(0x8B1, 0);
        func_80171928(arg0);
    }
}

void func_sc06_016_80182CB8(void) {
    func_8016EE40((s32) &D_sc06_016_8019A484, 0x01000000);
}

void func_sc06_016_80182CE0(u8 *arg0) {
    D_sc06_016_8019A490[AF(arg0, u8, 0x216)]();
}

void func_sc06_016_80182D1C(u8 *o) {
    u8 *m;
    s16 a;
    s32 c;
    s32 d;
    m = AF(o, u8 *, 0x20);
    func_sc06_016_80182F44(o);
    if (D_sc06_016_8019FF00 != 0) {
        a = (AF(m, u16, 0x12) + 0x800) & 0xFFF;
        if (AF(AF(D_sc06_016_8019FF00, u8 *, 0x20), u16, 0x12) & 0x400) {
            c = func_80012A60(a, 0x400);
            d = func_80012A60(a, 0xC00);
            if ((s16)c <= (s16)d) {
                AF(m, s16, 0x12) = 0x400;
            } else {
                AF(m, s16, 0x12) = 0xC00;
            }
        } else {
            c = func_80012A60(a, 0);
            d = func_80012A60(a, 0x800);
            if ((s16)c <= (s16)d) {
                AF(m, s16, 0x12) = 0;
            } else {
                AF(m, s16, 0x12) = 0x800;
            }
        }
    }
    func_80171990(o);
}

void func_sc06_016_80182E24(s32 arg0) {
    if (func_sc06_016_80183020() != 0) {
        func_8002D4C8(0x8B1, 0);
        func_80171990(arg0);
    }
}

void func_sc06_016_80182E64(u8 *o) {
    u8 *found;
    s32 best;
    s32 i;
    u8 *p;
    s16 d;
    found = 0;
    best = 0x7FFFFFFF;
    for (i = 0; i < 0x60; i++) {
        p = (u8 *)&((struct_10C_3 *)&D_801202A0)[i];
        if (AF(p, u16, 0) != 0 && (AF(p, u16, 0x5C) & 0x80)) {
            d = func_80013328(o + 4, p + 4);
            if (d < best) {
                best = d;
                found = p;
            }
        }
    }
    if (found != 0) func_800D1724(AF(found, s32, 0xDC));
    func_80171928(o);
}

void func_sc06_016_80182F44(u8 *o) {
    typedef struct { u8 field_0[0x10C]; } struct_10C_4;
    struct_8_4 v;
    s32 i;
    s32 best;
    u8 *p;
    s16 d;
    best = 0x7FFFFFFF;
    D_sc06_016_8019FF00 = 0;
    for (i = 0; i < 0x60; i++) {
        p = (u8 *)&((struct_10C_4 *)&D_801202A0)[i];
        if (AF(p, u16, 0) == 0x26E) {
            d = func_80013328(o + 4, p + 4);
            if (d < best) {
                best = d;
                D_sc06_016_8019FF00 = p;
            }
        }
    }
    AF(o, s16, 0x208) = 0;
    func_80015978(o + 4, &v);
    func_8012F2E8(D_sc06_016_8019FF00, &v, o + 0x20C);
    AF(o, u8 *, 0x204) = D_sc06_016_8019FF00;
    func_8002D4C8(0x8B0, 0);
}

s32 func_sc06_016_80183020(u8 *o) {
    struct_8_4 v;
    u8 *q;
    u8 *t;
    s16 a;
    q = AF(o, u8 *, 0x204);
    t = AF(q, u8 *, 0x20);
    if (q != 0) {
        AF(t, s16, 0x12) += 0x80;
        func_8012F14C(t + 0x34, o + 0x20C, &v);
        func_80015954(&v, o + 4);
    }
    AF(AF(o, u8 *, 0x20), s16, 0x12) += 0x80;
    a = AF(o, s16, 0x208) + 0x80;
    AF(o, s16, 0x208) = a;
    return a == 0x800;
}

void func_sc06_016_801830B4(o)
    u8 *o;
{
    u8 *pp[4];
    struct_8_4 v;
    s16 x[8];
    s16 y[8];
    s32 flag;
    s32 sxy;
    s32 p;
    u8 *m;
    s32 z;
    s32 r;
    s32 h;
    u32 *ot;
    u8 *prim;
    u8 *q;
    s32 i;
    s32 j;
    s16 sx;
    s16 sy;

    m = AF(o, u8 *, 0x20) + 0x34;
    gte_SetRotMatrix(m);
    gte_SetTransMatrix(m);
    RotTransSV(&D_sc06_016_8019A49C, &v, &flag);
    SetRotMatrix((struct_20_4 *)&D_800AF648);
    SetTransMatrix((struct_20_4 *)&D_800AF648);
    z = RotTransPers(&v, &sxy, &p, &flag);
    if (z > 0 && flag >= 0) {
        sx = AF(&sxy, s16, 0);
        sy = AF(&sxy, s16, 2);
        r = (D_80126950 + 500) * 48 / (z * 4);
        ot = D_800A651C[D_800B9A02[0]].field_0 + z;
        h = r * 179 >> 8;
        x[0] = sx - r;
        x[1] = sx - h;
        x[2] = sx;
        x[3] = sx + h;
        x[4] = sx + r;
        y[0] = sy - r;
        y[1] = sy - h;
        y[2] = sy;
        y[3] = sy + h;
        y[4] = sy + r;
        prim = func_80010A08(0x9C);
        if (prim != 0) {
            SetDrawMode(prim, 0, 0, (u16) GetTPage(0, 1, 0, 0), 0);
            q = pp[0] = prim + 0xC;
            pp[1] = prim + 0x30;
            pp[2] = prim + 0x54;
            pp[3] = prim + 0x78;
            for (j = 0; j < 4;) {
                i = j * 4;
                AF(q, u32, 4) = D_sc06_016_8019A4A4[D_sc06_016_8019A4D0[i]];
                AF(q, u32, 0xC) = D_sc06_016_8019A4A4[D_sc06_016_8019A4D0[i + 1]];
                AF(q, u32, 0x14) = D_sc06_016_8019A4A4[D_sc06_016_8019A4D0[i + 2]];
                AF(q, u32, 0x1C) = D_sc06_016_8019A4A4[D_sc06_016_8019A4D0[i + 3]];
                AF(q, u8, 3) = 8;
                AF(q, u8, 7) = 0x3A;
                AF(q, s16, 8) = x[D_sc06_016_8019A4B0[i]];
                AF(q, s16, 0x10) = x[D_sc06_016_8019A4B0[i + 1]];
                AF(q, s16, 0x18) = x[D_sc06_016_8019A4B0[i + 2]];
                AF(q, s16, 0x20) = x[D_sc06_016_8019A4B0[i + 3]];
                AF(q, s16, 0xA) = y[D_sc06_016_8019A4C0[i]];
                AF(q, s16, 0x12) = y[D_sc06_016_8019A4C0[i + 1]];
                AF(q, s16, 0x1A) = y[D_sc06_016_8019A4C0[i + 2]];
                AF(q, s16, 0x22) = y[D_sc06_016_8019A4C0[i + 3]];
                AddPrim(ot, q);
                j++;
                q += 0x24;
            }
            AddPrim(ot, prim);
        }
    }
}

void func_sc06_016_801834D8(u8 *o) {
    s32 dz;
    s32 s;
    u8 *p;

    AF(AF(o, u8 *, 0x20), s16, 0x14) += AF(o, s16, 0xFC);
    if (AF(&D_80126B58, s16, 0xA) < -0x4E0) {
        dz = AF(&D_80126B58, s16, 0xE) - AF(o, s16, 0xE);
        if (dz < 0x140) {
            AF(o, s16, 0xFC) -= 0x10;
            if (AF(o, s16, 0xFC) < 0) {
                AF(o, s16, 0xFC) = 0;
            }
        } else {
            AF(o, s16, 0xFC) += 0x10;
            if (AF(o, s16, 0xFC) > 0x300) {
                AF(o, s16, 0xFC) = 0x300;
            }
            if (dz < 0x900 && func_800CF8B4() != 0 && func_8014CB8C() == 0) {
                s = AF(o, s16, 0xFC) * 13 / 0x300;
                s = s * (0x900 - dz) / 0x900;
                if (func_801726C4(&D_80126B58) != 0) {
                    s *= 2;
                }
                AF(&D_80126B58, s16, 0xE) += s;
                func_8002D4C8(0x978, (s * 127 / 13 | 0x1000) & 0xFFFF);
                AF(o, s16, 0xFE) = 1;
            }
        }
    } else {
        AF(o, s16, 0xFC) += 0x10;
        if (AF(o, s16, 0xFC) > 0x300) {
            AF(o, s16, 0xFC) = 0x300;
        }
    }
    if (AF(o, s32, 0x1C) != 0) {
        AF(o, s32, 0x1C)--;
    } else if (AF(o, s16, 0xFC) > 0x40) {
        AF(o, s32, 0x1C) = 3;
        p = (u8 *) func_80143C74(o, 0);
        if (p != 0) {
            AF(p, s16, 6) = rand() % 0x120 - 0xE0;
            AF(p, s16, 0xA) = -(rand() & 0x3F) - 0x502;
            dz = rand() % 0x560 + 0x140;
            AF(p, s16, 0xE) += dz;
            s = AF(o, s16, 0xFC) * 13 / 0x300;
            s = s * (0x800 - dz) / 0x800;
            AF(p, s16, 0x1A) = s * 2;
            AF(p, s32, 0x48) = -((rand() & 0x1FF) << 7);
        }
    }
    if (AF(o, s16, 0xFE) == 2) {
        AF(o, s16, 0xFE) = 0;
        func_8002D4C8(4, 0x978);
    }
    if (AF(o, s16, 0xFE) == 1) {
        AF(o, s16, 0xFE) = 2;
    }
}

void func_sc06_016_8018384C(u8 *arg0) {
    D_sc06_016_8019A524[AF(arg0, u16, 2)]();
}

void func_sc06_016_80183888(u8 *o) {
    u16 v;
    if (func_8012C354(o, &D_sc06_016_8019A53C) != 0) {
        v = AF(o, u16, 0x70);
        if (v & 0x10) {
            v &= ~0x10;
            AF(o, u16, 0x70) = v;
            func_8001C214(AF(o, u8 *, 0x20), D_sc06_016_8019A570[(s16)v]);
            AF(AF(o, u8 *, 0x20), s32, 4) |= 0x60000040;
        } else {
            func_8001C214(AF(o, u8 *, 0x20), D_sc06_016_8019A570[(s16)v]);
        }
        if (AF(o, s16, 0x70) == 8 || AF(o, s16, 0x70) == 10) {
            AF(o, s16, 0x34) = 3;
            AF(o, u16, 0x5C) = 0x8800;
        }
        if (AF(o, s16, 0x70) == 9) {
            AF(o, s16, 0x34) = 2;
            AF(o, u16, 0x5C) = 0x8800;
        }
        if (AF(o, s16, 0x70) == 11) {
            AF(o, s16, 0x34) = 4;
        }
        AF(o, u8, 0xC0) = 1;
        AF(o, s32, 0xB4) = -1;
        AF(o, u8, 0x75) = 8;
        func_8012A828(o, &D_sc06_016_801851C4);
        AF(o, u16, 2)++;
        func_8012B23C(o);
        AF(o, s16, 0xAE) = -1;
    }
}

void func_sc06_016_801839D0(u8 *o) {
    s32 i;
    u8 *p;
    switch (AF(o, u16, 0x34)) {
    case 4:
        p = &D_801202A0;
        for (i = 0; i < 0x60; i++, p += 0x10C) {
            if (AF(p, u16, 0) == 0x2E7 && AF(p, u16, 2) == 4) {
                func_8001C214(AF(o, u8 *, 0x20), &D_sc06_016_8019CAAC);
                AF(o, u16, 0x5C) = 0x8800;
                AF(AF(o, u8 *, 0x20), s16, 0x12) = 0x400;
                AF(o, s16, 0x34) = 3;
            }
        }
    case 0:
        if (D_80126CC8 == o) {
            AF(o, s16, 0x34) = 1;
            AF(o, s16, 0x5C) = 0;
            AF(o, s16, 6) = AF(o, s16, 0x88);
            AF(o, s16, 0xA) = AF(o, s16, 0x8A);
            AF(o, s16, 0xE) = AF(o, s16, 0x8C);
            func_sc06_016_80182CB8();
        }
        break;
    case 1:
        break;
    case 2:
        p = &D_801202A0;
        for (i = 0; i < 0x60; i++, p += 0x10C) {
            if (AF(p, u16, 0) == 0x2E7 && AF(p, u16, 2) == 4) {
                func_8001C214(AF(o, u8 *, 0x20), &D_sc06_016_8019C10C);
                AF(AF(o, u8 *, 0x20), s32, 4) |= 0x60000040;
                AF(o, u16, 0x5C) = 0x9000;
                AF(AF(o, u8 *, 0x20), s16, 0x12) = 0x400;
                AF(o, s16, 0x34) = 0;
            }
        }
        break;
    case 3:
        break;
    }
}

void func_sc06_016_80183B80(u8 *arg0) {
    D_sc06_016_8019A5A0[AF(arg0, u16, 2)]();
}

void func_sc06_016_80183BBC(u8 *arg0) {
    D_sc06_016_8019A5DC[AF(arg0, u16, 2)]();
}

void func_sc06_016_80183BF8(s32 arg0) {
    void *temp_v1;

    if (func_8012C354(arg0, (s32) &D_sc06_016_8019A4F0) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s16, 0xAE) = -1;
        func_8012A828(arg0, (s32) &D_sc06_016_801851C4);
        temp_v1 = AF(arg0, void *, 0x20);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
        AF(AF(arg0, void *, 0x20), s16, 0x18) = 0xE00;
        AF(AF(arg0, void *, 0x20), s16, 0x1A) = 0xE00;
        AF(AF(arg0, void *, 0x20), s16, 0x1C) = 0xE00;
        AF(arg0, s16, 0xFC) = 0x300;
        AF(arg0, u8, 0x75) = 8;
    }
}

void func_sc06_016_80183CA0(s32 arg0) {
    void *temp_v1;

    if (func_8012C354(arg0, (s32) &D_sc06_016_8019A5A8) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        func_8012A828(arg0, (s32) &D_sc06_016_801851C4);
        temp_v1 = AF(arg0, void *, 0x20);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
        AF(AF(arg0, void *, 0x20), s16, 0x18) = 0xAAA;
        AF(AF(arg0, void *, 0x20), s16, 0x1C) = 0xAAA;
    }
}

void func_sc06_016_80183D24(u8 *arg0) {
    func_sc06_016_801830B4();
    AF(arg0, s32, 0x1C) = (s32) (AF(arg0, s32, 0x1C) + 1);
}

void func_sc06_016_80183D5C(void) {
    s16 *var_v1;
    s32 var_v0;

    var_v1 = &D_sc06_016_801A001C;
    var_v0 = 0xF;
    do {
        *var_v1 = 0;
        var_v0 -= 1;
        var_v1 = (s16 *)((u8 *)var_v1 + 0xE);
    } while (var_v0 >= 0);
}

void func_sc06_016_80183D80(s32 arg0, s32 arg1, s32 arg2, u16 *arg3) {
    struct_8_7 v;
    s32 i;
    s16 ang;

    func_sc06_016_80183E20(arg0, 0x1000, 0);
    v.field_0 = arg3[0];
    v.field_4 = arg3[1];
    v.field_6 = 1;
    for (i = 0, ang = 0; i < 0x10; i++, ang += 0x100) {
        v.field_2 = ang;
        func_sc06_016_80183F3C(i, (s32) &v, arg1, arg2);
    }
}

s32 func_sc06_016_80183E20(s32 arg0, s32 arg1, s32 arg2) {
    u16 temp_v0;

    D_sc06_016_801A0014 = AF(arg0, u16, 0);
    temp_v0 = AF(arg0, u16, 2);
    D_sc06_016_801A0018 = (s16) arg1;
    D_sc06_016_801A001A = (s16) arg2;
    D_sc06_016_801A0016 = temp_v0;
    return (s32) temp_v0;
}

void func_sc06_016_80183E50(s32 arg0) {
    u16 sp10[2];
    s32 sp18[2];
    s32 sp20;
    s32 sp24;

    func_80015978(arg0, (s32) &sp18);
    SetRotMatrix((s32) &D_800AF648);
    SetTransMatrix((s32) &D_800AF648);
    RotTransPers((s32) &sp18, (s32) sp10, (s32) &sp20, (s32) &sp24);
    D_sc06_016_801A0014 = sp10[0];
    D_sc06_016_801A0016 = sp10[1];
}

void func_sc06_016_80183EC8(s32 arg0) {
    s16 *p = &D_sc06_016_801A001A;
    *p += arg0;
}

void func_sc06_016_80183EE4(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = func_sc06_016_80184010();
    if (temp_v0 >= 0) {
        func_sc06_016_80183F3C(temp_v0, arg0, arg1, arg2);
    }
}

void func_sc06_016_80183F3C(s32 arg0, s16 *arg1, s32 arg2, s32 arg3) {
    struct struct_4_11 { u8 field_0, field_1, field_2, field_3; };
    struct struct_E { u16 field_0; s16 field_2; s16 field_4; struct struct_4_11 field_6; struct struct_4_11 field_A; } *e;

    e = (struct struct_E *)(&D_sc06_016_801A001C + arg0 * 14);
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

s32 func_sc06_016_80184010(void) {
    s32 i;
    s32 off;

    for (i = 0, off = 0; i < 0x10; i++, off += 0xE) {
        if (*(u16 *)&((u8 *)&D_sc06_016_801A001C)[off] == 0) {
            return i;
        }
    }
    return -1;
}

void func_sc06_016_8018404C(s32 arg0, s32 arg1) {
    void *temp_v1;

    if ((arg0 < 0x10) && (temp_v1 = (arg0 * 0xE) + &D_sc06_016_801A001C, (AF(temp_v1, u16, 0) != 0))) {
        if (arg1 == 0) {
            AF(temp_v1, u16, 0) = 0U;
            return;
        }
        AF(temp_v1, u8, 9) = 2;
    }
}

void func_sc06_016_80184098(void) {
    u8 *p;
    s32 i;
    s16 v;
    s16 w;

    for (p = &D_sc06_016_801A001C, i = 0; i < 0x10; i++, p += 14) {
        if (AF(p, u16, 0) != 0) {
            func_sc06_016_80184174(i);
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

void func_sc06_016_80184174(s32 i) {
    struct_20_4 m;
    struct_8_7 v;
    struct_8_7 o;
    struct_10_2 s;
    u8 *p;
    u8 *r;
    u16 cx;
    u16 cy;

    m = D_800AE620;
    p = D_800A5E60;
    D_800A5E60 = p + 0x1C;
    AF(p, u8, 3) = 6;
    AF(p, u8, 7) = 0x32;
    r = &D_sc06_016_801A001C + i * 14;
    AF(p, u8, 4) = AF(r, u8, 6);
    AF(p, u8, 5) = AF(r, u8, 7);
    AF(p, u8, 6) = AF(r, u8, 8);
    AF(p, u8, 0xC) = AF(r, u8, 0xA);
    AF(p, u8, 0xD) = AF(r, u8, 0xB);
    AF(p, u8, 0xE) = AF(r, u8, 0xC);
    AF(p, u8, 0x14) = AF(r, u8, 0xA);
    AF(p, u8, 0x15) = AF(r, u8, 0xB);
    AF(p, u8, 0x16) = AF(r, u8, 0xC);
    cx = D_sc06_016_801A0014;
    cy = D_sc06_016_801A0016;
    RotMatrixZ(D_sc06_016_801A001A, &m);
    s.field_0 = s.field_4 = s.field_8 = D_sc06_016_801A0018;
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

s32 func_sc06_016_80184438(void) {
    s16 *var_v1;
    s32 var_v0;

    var_v1 = &D_sc06_016_8019FF14;
    var_v0 = 0xF;
    do {
        *var_v1 = 0;
        var_v0 -= 1;
        var_v1 = (s16 *)((u8 *)var_v1 + 0x10);
    } while (var_v0 >= 0);
    return var_v0;
}

s32 func_sc06_016_8018445C(s32 arg0) {
    s32 sp10;

    func_80015978(arg0, (s32) &sp10);
    return func_sc06_016_80184484((s32) &sp10);
}

s32 func_sc06_016_80184484(s32 arg0) {
    s16 sxy[2];
    struct_4_3 col;
    s32 p;
    s32 flag;

    col = D_sc06_016_8019E2E8;
    SetRotMatrix((s32) &D_800AF648);
    SetTransMatrix((s32) &D_800AF648);
    RotTransPers(arg0, (s32) sxy, (s32) &p, (s32) &flag);
    return func_sc06_016_8018450C((s32) sxy, (s32) &col, 0x10, 0x18);
}

s32 func_sc06_016_8018450C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 pad[4];
    s16 var_s1;
    s32 temp_v0;
    s32 var_s0;

    func_sc06_016_80184578(arg0, arg1, (s32) (s16) arg2);
    var_s0 = 0;
    var_s1 = 0;
    do {
        func_sc06_016_801846AC(var_s0, (s32) var_s1, arg3 & 0xFFFF);
        var_s0 += 1;
        temp_v0 = var_s0 < 0x10;
        var_s1 += 0x100;
    } while (temp_v0 != 0);
    return temp_v0;
}

void func_sc06_016_80184578(u16 *p, u8 *c, s32 g) {
    if (p != 0) {
        D_sc06_016_8019FF08.field_0 = p[0];
        D_sc06_016_8019FF08.field_2 = p[1];
    } else {
        D_sc06_016_8019FF08.field_0 = 0;
        D_sc06_016_8019FF08.field_2 = 0;
    }
    D_sc06_016_8019FF10 = c[0];
    D_sc06_016_8019FF11 = c[1];
    D_sc06_016_8019FF12 = c[2];
    AF(&D_sc06_016_8019FF08, s32, 4) = g << 16;
}

void func_sc06_016_801845E8(s32 arg0) {
    u16 sp10[2];
    s32 sp18[2];
    s32 sp20;
    s32 sp24;

    func_80015978(arg0, (s32) &sp18);
    SetRotMatrix((s32) &D_800AF648);
    SetTransMatrix((s32) &D_800AF648);
    RotTransPers((s32) &sp18, (s32) sp10, (s32) &sp20, (s32) &sp24);
    D_sc06_016_8019FF08.field_0 = sp10[0];
    D_sc06_016_8019FF08.field_2 = sp10[1];
}

void func_sc06_016_80184660(s16 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_sc06_016_801847C8();
    if (temp_v0 >= 0) {
        func_sc06_016_801846AC(temp_v0, (s32) arg0, arg1 & 0xFFFF);
    }
}

void func_sc06_016_801846AC(s32 i, s32 ang, s32 spd) {
    u8 unused[0x10];
    struct_10 *p;
    s16 vx;
    s16 vz;
    u16 s;
    s32 m;
    s32 gg;

    p = &D_sc06_016_8019FF08.field_C[i];
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
    gg = D_sc06_016_8019FF08.field_6;
    p->field_4 = gg << 6;
}

s32 func_sc06_016_801847C8(void) {
    s32 i;
    s32 off;

    for (i = 0, off = 0; i < 0x10; i++, off += 0x10) {
        if (*(u16 *)&((u8 *)&D_sc06_016_8019FF14)[off] == 0) {
            return i;
        }
    }
    return -1;
}

void func_sc06_016_80184804(void) {
    struct_10 *p;
    s32 i;
    s16 g;
    s32 dx;
    s32 dz;

    g = D_sc06_016_8019FF0E;
    p = (struct_10 *)&D_sc06_016_8019FF14;
    for (i = 0; i < 16; i++, p++) {
        if (p->field_0 == 0) {
            continue;
        }
        if ((g > 0 && p->field_2 >= 0x4001) || (g < 0 && p->field_2 <= 0)) {
            p->field_0 = 0;
            continue;
        }
        func_sc06_016_80184918(i);
        dx = (rcos(p->field_6) * g) << 4;
        dz = (rsin(p->field_6) * g) << 4;
        p->field_8 += dx;
        p->field_C += dz;
        p->field_2 += p->field_4;
    }
}

void func_sc06_016_80184918(s32 i) {
    struct_20_4 m;
    struct_8_7 v;
    struct_8_7 o;
    struct_10_2 s;
    u8 *p;
    struct_10 *r;
    u16 cx;
    u16 cz;

    p = D_800A5E60;
    m = D_800AE620;
    D_800A5E60 = p + 0x14;
    AF(p, u8, 3) = 4;
    AF(p, u8, 7) = 0x22;
    AF(p, u8, 4) = D_sc06_016_8019FF10;
    AF(p, u8, 5) = D_sc06_016_8019FF11;
    AF(p, u8, 6) = D_sc06_016_8019FF12;
    r = (struct_10 *)&D_sc06_016_8019FF14 + i;
    cx = AF(r, u16, 0xA) + D_sc06_016_8019FF08.field_0;
    cz = AF(r, u16, 0xE) + D_sc06_016_8019FF08.field_2;
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

void func_sc06_016_80184BFC(u8 *o) {
    struct_8_4 v[4];
    struct_20_6 m;
    s32 pp;
    s32 flag;
    u32 *ot;
    u8 *p;
    u8 *t;
    s32 z;
    u16 w;

    ot = D_800A6610[D_800B9A02[0]];
    w = AF(o, u16, 6);
    if (w == 0) return;
    v[0].field_0 = 0;
    v[0].field_2 = -(AF(o, u16, 0x18) >> 1);
    v[0].field_4 = 0;
    v[1].field_0 = 0;
    v[1].field_2 = AF(o, u16, 0x18) >> 1;
    v[1].field_4 = 0;
    v[2].field_0 = w;
    v[2].field_2 = -(AF(o, u16, 0x1A) >> 1);
    v[2].field_4 = 0;
    v[3].field_0 = w;
    v[3].field_2 = AF(o, u16, 0x1A) >> 1;
    v[3].field_4 = 0;
    RotMatrixZYX(o + 8, &m);
    m.field_14[0] = AF(o, s16, 0);
    m.field_14[1] = AF(o, s16, 2);
    m.field_14[2] = AF(o, s16, 4);
    p = func_80010A08(0x24);
    AF(p, s32, 4) = AF(o, s32, 0x10);
    AF(p, s32, 0xC) = AF(o, s32, 0x10);
    AF(p, s32, 0x14) = AF(o, s32, 0x14);
    AF(p, s32, 0x1C) = AF(o, s32, 0x14);
    p[3] = 8;
    p[7] = 0x38;
    func_80017E8C(&m);
    z = RotTransPers4(&v[0], &v[1], &v[2], &v[3], p + 8, p + 0x10, p + 0x18, p + 0x20, &pp, &flag);
    if (flag & ~0x1000) return;
    z++;
    if ((u32)z >= 0x1000) return;
    ((struct_4_5 *)p)->field_0_b0 = ((struct_4_5 *)(ot + z))->field_0_b0;
    ((struct_4_5 *)(ot + z))->field_0_b0 = (u32)p;
    if (AF(o, u32, 0x1C) & 0x40000000) {
        p[7] |= 2;
        t = func_80010A08(8);
        t[3] = 1;
        AF(t, u32, 4) = 0xE1000200 | ((AF(o, u32, 0x1C) >> 23) & 0x60);
        ((struct_4_5 *)t)->field_0_b0 = ((struct_4_5 *)(ot + z))->field_0_b0;
        ((struct_4_5 *)(ot + z))->field_0_b0 = (u32)t;
    }
}
