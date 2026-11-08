/* sc03_014: 0x80183CF0-0x801848E4: functions built -O0 (r209, tools/stage_units.py).
 * The declarations and prototypes down to the first function are those of the units before this one. */
#include "common.h"
#include "gte.h"
#include "psyq.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))
typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_4;
typedef struct { s16 field_0[6]; } struct_C_3;
extern void (*D_sc03_014_8018EF58[])();
void func_sc03_014_8017BEE4(u8 *arg0);
extern void (*D_sc03_014_8018EF64[])();
void func_sc03_014_8017BFC8(u8 *arg0);
extern void (*D_sc03_014_8018F024[])();
extern void func_sc03_014_8017C154();
extern void (*D_sc03_014_8018F064[])();
extern void (*D_sc03_014_8018F084[])();
extern void (*D_sc03_014_8018F094[])();
extern void (*D_sc03_014_8018F0A0[])();
extern void (*D_sc03_014_8018F224[])();
void func_sc03_014_8017DB00(u8 *arg0);
typedef struct { s16 field_0, field_2; } struct_4_2;
typedef struct { struct_4_2 field_0; s16 field_4; s16 field_6; struct_4_2 field_8; s32 field_C; s32 field_10; s32 field_14; s32 field_18; } struct_1C;
typedef struct { s32 field_0, field_4, field_8; } struct_C_4;
extern void (*D_sc03_014_8018F500[])();
extern u8 D_sc03_014_8018F450;
extern void func_80154274();
extern void func_80171990();
extern void func_80147324();
extern void func_801466F0();
extern s32 func_8014C088();
extern void func_8014B5C4();
extern s32 func_8014CB58();
extern u8 D_sc03_014_8018F4F8;
extern void func_8016EE40();
extern s32 D_80126D54;
extern s16 D_80126B0C;
extern void (*D_sc03_014_8018F548[])();
extern void func_80162D28();
extern s16 D_sc03_014_8018F540;
extern s16 D_sc03_014_8018F542;
extern s16 D_sc03_014_8018F544;
extern u8 D_sc03_014_801CEE20;
extern s32 func_8014659C();
extern void func_8001C214();
extern void func_80149374();
extern void func_80146DE8();
extern void func_80146CA0();
extern u8 D_sc03_014_8018F510;
extern u8 D_sc03_014_8018F558;
extern u8 D_sc03_014_801CF478;
extern void func_8016325C();
extern void func_80162FC0();
extern void func_8013C9C4();
extern void func_8001C810();
extern void func_801466B4();
extern void func_80162CCC();
extern void (*D_sc03_014_8018F58C[])();
extern void func_sc03_014_80180DB8();
extern u8 D_800DF2E0;
extern u8 D_sc03_014_8018F56C;
extern void func_80146E90();
extern s32 func_80146E98();
extern void (*D_sc03_014_8018F5B0[])();
extern s32 func_800D222C();
extern void func_8001CF30();
extern void func_80146C3C();
extern s32 func_80146A6C();
extern void func_800D20C0();
extern void func_800D23D0();
extern u8 D_sc03_014_8018F598;
extern void (*D_sc03_014_8018F5B8[])();
extern u8 D_sc03_014_8018F5A4;
extern void (*D_sc03_014_8018F6D0[])();
extern u8 D_80126B58;
extern void func_8014BCEC();
extern void func_8014BD24();
extern void func_8002D4C8();
extern void func_sc03_014_801811D4();
extern s16 D_80115214;
extern u16 D_801152BA;
extern s32 func_80128CFC();
extern s32 func_8012C1B8();
extern void func_80178B18();
extern s32 func_80178970();
extern void func_80178D18();
extern void func_800291A0();
extern void func_8002955C();
extern s32 func_8002953C();
extern void func_8002AC00();
extern void func_8012C218();
extern void (*D_sc03_014_8018F728[])();
extern void func_sc03_014_80182348();
extern void (*D_sc03_014_8018F73C[])();
extern void func_80147084();
extern void func_801472B4();
extern void (*D_sc03_014_8018F750[])();
extern void func_800D22E4();
extern void func_sc03_014_80182A40();
extern void (*D_sc03_014_8018F7AC[])();
extern void (*D_sc03_014_8018F804[])();
void func_sc03_014_80183930(void);
extern void func_800167B8();
extern s32 func_800167F0();
void func_sc03_014_80183958(void);
extern void func_800D1EBC();
extern void (*D_sc03_014_8018F818[])();
extern void (*D_sc03_014_8018F824[])();
extern u8 D_sc03_014_8018F830;
extern u8 D_sc03_014_8018F83C;
extern void func_sc03_014_80183A18();
extern void (*D_sc03_014_8018F850[])();
extern void (*D_sc03_014_8018FE80[])();
extern void func_8001CB6C();
extern s32 func_8012C194();
extern s32 func_sc03_014_80184E4C();
extern void (*D_sc03_014_80190008[])();
extern void (*D_sc03_014_801903DC[])();
extern void (*D_sc03_014_80191890[])();
extern void (*D_sc03_014_801918B0[])();
extern s32 func_sc03_014_8018473C();
extern void (*D_sc03_014_80191B84[])();
extern s32 func_sc03_014_8017BEBC();
extern s32 func_sc03_014_8017BFA0();
extern void func_sc03_014_801890F8();
extern void func_sc03_014_80189110();
extern void (*D_sc03_014_80191C0C[])();
extern void (*D_sc03_014_801E3298[])();
extern s32 func_8012C354();
extern s32 func_801788B8();
extern u8 D_sc03_014_8018B898;
extern s32 func_80029178();
extern void func_8012CAE4();
extern u8 D_sc03_014_801E2F88;
extern s32 * func_sc03_014_8018A224();
extern s32 D_sc03_014_801E2FF0[];
extern s32 func_8012C658();
extern void func_80029124();
extern void func_80178CBC();
extern s32 D_sc03_014_801E31BC;
extern s32 D_sc03_014_801E31C0;
extern s32 D_sc03_014_801E31D4;
extern s32 D_sc03_014_801E31E8;
extern s32 D_sc03_014_801E3254;
extern s32 D_sc03_014_801E3138[];
extern s32 D_sc03_014_801E30B4[];
extern s32 func_801789AC();
extern void func_80029514();
extern void func_80145EE8();
extern s32 func_sc03_014_80189FCC();
extern void func_8014ADA8();
extern s32 func_80174764();
extern void (*D_sc03_014_801E32C0[])();
extern u8 D_sc03_014_801E2FBC;
extern u8 D_sc03_014_801E3760;
extern u8 D_sc03_014_801E3980;
extern u8 D_sc03_014_801E3770;
extern u8 D_sc03_014_801E3878;
extern void (*D_sc03_014_801E3A24[])();
extern void func_8014708C();
extern void func_801472C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();
extern s32 func_sc03_014_8017BF58();
extern s32 func_sc03_014_80184794();
extern s32 func_sc03_014_8017C03C();
extern void func_sc03_014_8017DB74();
extern s16 D_80126B3C;
extern s32 func_801399F0();
extern void func_80139914();
extern void func_sc03_014_8017D9C8();
extern s8 D_800B9A11;
extern u8 D_sc03_014_8018F160;
extern void func_8013C964();
extern void func_80129428();
extern s32 func_8012AD44();
extern u8 D_sc03_014_80191908;
extern s32 func_sc03_014_80188F18();
extern s32 func_sc03_014_80188C60();
extern void func_8013CAE8();
extern void (*D_sc03_014_80191BD4[])();
extern void func_sc03_014_801891E8();
extern u8 D_sc03_014_801EAC88;
extern void func_80128ED8();
extern s32 func_8012BEE8();
extern void func_8012AD80();
extern s32 func_sc03_014_80188B94();
extern void func_sc03_014_80188F28();
extern void func_sc03_014_8018B128();
extern s32 func_sc03_014_80188FB4();
extern void func_sc03_014_80188CB4();
extern u8 D_sc03_014_801EADEC;
extern u16 D_sc03_014_801EADE4;
extern u16 D_sc03_014_801EADE6;
extern s16 D_sc03_014_801EADE8;
extern s16 D_sc03_014_801EADEA;
extern s32 func_sc03_014_8018A934();
extern void func_sc03_014_8018A860();
extern void func_80015978();
extern s32 func_sc03_014_8018ADA8();
extern s32 func_sc03_014_8018B0EC();
extern void func_sc03_014_8018AFD0();
extern s16 D_sc03_014_801EACE4;
extern s32 D_80126CF0;
extern s32 D_8012750C;
extern s32 func_8013767C();
extern s32 func_sc03_014_80182C28();
extern s32 func_80029504();
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
extern s32 func_sc03_014_801847EC();
extern s32 func_8001AAA0();
extern void func_8016F0AC();
extern u16 D_800B99DA;
extern u8 D_sc03_014_801CF780;
extern u8 D_sc03_014_8018FE40[];
extern s32 func_800183E0();
extern s32 D_sc03_014_801EAEE4;
extern u8 D_sc03_014_8018FE9C;
extern u8 D_sc03_014_8018FEAC;
extern s32 * func_sc03_014_801859B0();
extern void func_8012B2CC();
extern s32 func_sc03_014_80184868();
extern u8 D_sc03_014_801906F8;
extern s32 D_sc03_014_801EAC80;
extern void (*D_sc03_014_80191848[])();
extern s32 D_sc03_014_80190700[];
extern void func_sc03_014_80185A0C();
extern void func_sc03_014_80187EE8();
extern void func_80131E00();
extern s32 func_8012CBCC();
extern u8 D_sc03_014_801918A0;
extern u8 D_sc03_014_801E3F20;
extern s32 func_8012C588();
extern void func_8012AD50();
extern s32 func_sc03_014_80188C0C();
extern s32 func_sc03_014_80188D64();
extern s16 D_sc03_014_801EAFC8;
extern u8 D_sc03_014_80191BFC;
extern u8 D_sc03_014_80191BEC;
extern s32 func_sc03_014_801899AC();
extern s32 func_80132EF4();
extern u8 D_sc03_014_80190468;
extern void func_8002A04C();
extern void func_sc03_014_80182D5C();
extern void func_sc03_014_8018AE9C();
extern u16 D_80126B96[];
extern u8 D_sc03_014_801907E8;
extern u8 D_sc03_014_80190FE8;
extern u8 D_sc03_014_801917E8;
extern u8 D_sc03_014_80191808;
extern s16 D_sc03_014_80191810;
extern s16 D_sc03_014_80191812;
extern s16 D_sc03_014_80191814;
extern s16 D_sc03_014_80191818;
extern s16 D_sc03_014_8019181A;
extern s16 D_sc03_014_8019181C;
extern s16 D_sc03_014_80191820;
extern s16 D_sc03_014_80191822;
extern s16 D_sc03_014_80191824;
extern u8 D_sc03_014_80191828;
extern u8 D_sc03_014_80191830;
extern s32 func_8012D5E4();
extern s32 func_80143C74();
extern s32 D_sc03_014_8018F010[];
extern u8 D_sc03_014_801E2170;
extern u8 D_sc03_014_8018F0BC;
extern void func_8013C938();
extern void func_8012943C();
extern u8 D_sc03_014_801EA880[];
extern u8 D_sc03_014_801EA881;
extern u8 D_sc03_014_801EA882;
extern s8 D_sc03_014_801EA884;
extern s8 D_sc03_014_801EA885;
extern s8 D_sc03_014_801EA886;
extern s32 func_801465C0();
extern void func_8001CD04();
extern void func_800233CC();
extern u8 D_sc03_014_801919F4;
extern void func_sc03_014_80189160();
extern void func_8012B200();
extern s32 func_sc03_014_8018918C();
typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_5;
typedef struct { u16 field_0[6]; } struct_C_5;
extern s32 func_800291B4();
extern s16 D_80126B62;
extern s32 D_80126B5C;
extern u16 D_801202A0;
extern s16 D_800B9A08;
extern u8 D_sc03_014_8018F680;
extern u8 D_sc03_014_8018F61C[];
extern s32 func_80013328();
extern void func_801746A4();
extern s32 func_8012BD14();
extern u8 D_sc03_014_801EA968;
extern u8 D_sc03_014_801EA969;
extern u8 D_sc03_014_801EA96A;
extern u8 D_sc03_014_801EA96C;
extern u8 D_sc03_014_801EA96D;
extern u8 D_sc03_014_801EA96E;
extern s32 D_sc03_014_801EAB6C;
extern s32 D_sc03_014_801EAB70;
extern s32 D_sc03_014_801EAB74;
extern s32 func_8001D074();
extern void func_8001CD50();
extern u16 D_sc03_014_801CFE18;
typedef struct { s16 field_0[3][3]; s16 field_12; s32 field_14[3]; } struct_20_3;
typedef struct { u32 field_0; u32 field_4; u32 field_8; u32 field_C; u32 *field_10; } struct_14_2;
typedef struct { s32 field_0; s32 field_4; s32 field_8; s32 field_C; s32 field_10; s32 field_14; s32 field_18; } struct_1C_2;
extern u8 *D_800A5E60;
extern u16 D_800B9A02[];
extern u32 D_800A6610[2][0x1000];
typedef struct { u16 field_0, field_2, field_4, field_6; } struct_8_6;
typedef struct { u8 field_0, field_1, field_2, field_3; } struct_4_3;
typedef struct { struct_8_6 field_0; struct_8_6 field_8; struct_4_3 field_10; struct_4_3 field_14; s32 field_18; } struct_1C_3;
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_4;
typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_7;
typedef struct { struct_8_7 field_0[4]; struct_4_3 field_20[4]; s32 field_30; } struct_34_2;
extern s8 D_sc03_014_8018F6FC[];
extern void func_80017DC4();
extern void func_80017E68();
extern void func_80017758();
extern struct_20_4 D_800AE620;
extern void func_80016A5C();
typedef struct { u16 field_0; s16 field_2; s16 field_4; s16 field_6; s32 field_8; s32 field_C; } struct_10;
typedef struct { s16 field_0, field_2, field_4, field_6; u8 field_8, field_9; s16 field_A; struct_10 field_C[16]; } struct_10C_2;
extern struct_10C_2 D_sc03_014_801EACD8;
extern s16 D_sc03_014_801EACDE;
extern void func_sc03_014_8018B23C();
typedef struct { s32 field_0, field_4, field_8, field_C; } struct_10_2;
typedef struct { u32 *field_0; u8 field_4[0x10]; } struct_14_3;
typedef struct { u8 field_0[0x14]; } struct_14_4;
typedef struct { unsigned field_0_b0 : 24; unsigned field_3_b0 : 8; } struct_4_4;
extern struct_14_3 D_800A651C[];
extern struct_14_4 D_800A6518[];
extern s32 func_80016638();
extern u8 D_sc03_014_801EACE0;
extern u8 D_sc03_014_801EACE1;
extern u8 D_sc03_014_801EACE2;
extern u8 D_sc03_014_8018F058;
extern u8 D_sc03_014_8018F07C;
extern s32 D_sc03_014_8018EFC0[];
extern s32 func_8012A68C();
extern s32 func_8012A758();
extern void func_8012EF70();
extern void func_80015954();
extern void func_8001CB00();
extern s32 D_sc03_014_8018EFFC[];
extern void func_sc03_014_8017D318();
extern struct_8_5 D_sc03_014_8018F038[];
extern void func_sc03_014_8017C290();
extern struct_4_3 D_sc03_014_801EA840;
extern u8 D_sc03_014_801EA844;
extern u8 D_sc03_014_801EA845;
extern u8 D_sc03_014_801EA846;
extern struct_4_3 D_sc03_014_8018EF84[];
extern struct_8_7 D_sc03_014_801EA8C0[4];
extern s16 D_sc03_014_801EA8C4;
extern struct_4_3 D_sc03_014_801EA8E0;
extern struct_4_3 D_sc03_014_801EA8E4;
extern struct_4_3 D_sc03_014_801EA8E8;
extern struct_4_3 D_sc03_014_801EA8EC;
extern s32 D_sc03_014_801EA8F0;
extern struct_4_3 D_sc03_014_8018EF98[];
extern struct_4_3 D_sc03_014_8018EFAC[];
extern void func_80013F3C();
extern void func_80017714();
extern s32 func_8012B23C();
extern struct_8_6 D_sc03_014_801E3990[];
extern s32 D_sc03_014_801E3A18[];
extern u16 D_sc03_014_80190490;
extern u8 D_sc03_014_801904C4;
extern u8 D_sc03_014_80190590;
extern u8 D_sc03_014_8019059C;
extern u8 D_sc03_014_801905A4;
extern u8 D_sc03_014_801905B4;
extern u8 D_sc03_014_801905E4;
extern u8 D_sc03_014_801905F0;
extern u8 D_sc03_014_80190720;
extern u8 D_sc03_014_80190780;
extern u8 D_sc03_014_801C97C8;
extern u8 D_sc03_014_80191838;
extern u8 D_sc03_014_801E732C;
extern u8 D_sc03_014_801E7B50;
extern u8 D_sc03_014_801D6ED0;
extern s16 D_80126B5E;
extern s32 D_80126B64;
extern s16 D_80126B66;
extern s32 D_sc03_014_801904F0[];
extern void *D_80126B78;
extern s32 func_8012B744();
extern s32 func_8012BA10();
extern s32 func_8012BE54();
extern void func_8012CBA4();
extern u8 D_sc03_014_801E2638;
extern u8 D_sc03_014_801E2708;
extern u8 D_sc03_014_801E25D8;
extern u8 D_sc03_014_801E2660;
extern u8 D_sc03_014_80190550;
extern u8 D_sc03_014_80190558;
extern u8 D_sc03_014_80190560;
extern u8 D_sc03_014_80190568;
extern u8 D_sc03_014_80190570;
extern u8 D_sc03_014_80190578;
extern u8 D_sc03_014_80190580;
extern u8 D_sc03_014_80190588;
typedef struct { struct_C_5 field_0[9]; } struct_6C;
typedef struct { s32 field_0, field_4, field_8, field_C; } struct_10_3;
typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_8;
typedef struct { s32 field_0, field_4, field_8, field_C; } struct_10_4;
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_5;
typedef struct { u8 field_0, field_1, field_2, field_3; } struct_4_5;
typedef struct { struct_8_8 field_0[4]; struct_4_5 field_20[4]; s32 field_30; } struct_34_3;
typedef struct { s32 field_0, field_4, field_8; } struct_C_6;
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_6;
extern struct_4_3 D_sc03_014_8018EF70[];
extern u16 D_8011D030;
extern u16 D_sc03_014_8018EFD4[][2];
extern u8 D_sc03_014_8018F5E8;
extern u8 D_sc03_014_8018F624;
extern u8 D_sc03_014_801CFDF0;
extern u8 D_sc03_014_801EA8F8;
extern u8 D_sc03_014_801EA904;
extern u8 D_sc03_014_801EA905;
extern u8 D_sc03_014_801EA906;
extern u8 D_sc03_014_801EA914;
extern u8 D_sc03_014_801EA915;
extern u8 D_sc03_014_801EA916;
extern u8 D_sc03_014_801EA925;
extern u8 D_sc03_014_801EA926;
extern u8 D_sc03_014_801EA928;
extern u8 D_sc03_014_801EA929;
extern u8 D_sc03_014_801EA92A;
extern u8 D_sc03_014_801EA92C;
extern u8 D_sc03_014_801EA92D;
extern u8 D_sc03_014_801EA92E;
extern u8 D_sc03_014_801EA934;
extern u8 D_sc03_014_801EA9A8;
typedef struct { u8 field_0, field_1, field_2, field_3; } struct_4_6;
typedef struct { u32 field_0_b0 : 24; u32 field_3_b0 : 8; } struct_4_7;
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_7;
typedef struct { struct_4_7 field_0; u8 field_4, field_5, field_6, field_7; s16 field_8, field_A, field_C, field_E, field_10, field_12, field_14, field_16; } struct_18;
typedef union { s32 m0; struct_4_2 m1; } union_4_2;
typedef void (*type_2)();
typedef struct { u8 field_0[0x18]; struct_20_4 field_18; } struct_38;
typedef struct { s32 field_0[4]; } struct_10_5;
typedef struct { struct_10_5 field_0, field_10, field_20; } struct_30_2;
typedef struct { u8 field_0[0x34]; } struct_34_4;
typedef struct { u8 field_0[8]; } struct_8_9;
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_8;
typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_10;
extern void func_sc03_014_80183B58();
extern s32 func_80012C6C();
extern s32 func_80012ABC();
extern void func_8012F14C();
extern s32 D_800AF648[];
typedef struct { s16 field_0, field_2, field_4, field_6, field_8, field_A, field_C, field_E; s32 field_10; } struct_14_5;
extern void func_80016714();
extern u8 D_sc03_014_8018F77C[];
extern s32 func_8012C750();
extern s32 D_sc03_014_801EAC90;
extern void func_8013CABC();
extern s32 func_sc03_014_801846E4();
extern void func_sc03_014_80188A80();
extern u8 D_80126940;
extern s16 D_sc03_014_8018F854[];
extern s32 func_80148800();
typedef struct { s16 field_0[8]; s32 field_10; } struct_14_6;
typedef union { s32 m0; struct { u16 field_0; s16 field_2; } m1; } union_4_3;
typedef struct {
    u8 field_0[4];
    union_4_3 field_4[3];
    u8 field_10[0xC];
    s32 field_1C;
    u8 field_20[0x14];
    u16 field_34;
    u8 field_36[0x1A];
    s16 field_50;
    s16 field_52;
    u8 field_54[0x40];
    s32 field_94;
    u8 field_98[0x48];
    s32 field_E0;
    s32 field_E4;
    u8 field_E8[0xC];
    s32 field_F4;
} struct_F8;
typedef struct { struct_4_2 field_0[5]; } struct_14_7;
typedef struct { s32 field_0; } struct_4_8;
typedef struct { struct_8_5 field_0[4]; u16 field_20[4][2]; u8 field_30, field_31, field_32, field_33; s32 field_34; u8 field_38; } struct_3C;
typedef struct { struct_8_7 field_0[4]; s32 field_20[4]; s32 field_30; } struct_34_5;
typedef struct { struct_8_4 field_0[4]; s16 field_20[8]; s32 field_30; s32 field_34; u8 field_38; u8 field_39[7]; } struct_40;
typedef struct { s16 field_0, field_2, field_4, field_6, field_8; u16 field_A; s16 field_C, field_E; s32 field_10; } struct_14_8;
typedef struct { struct_4_6 field_0; struct_4_6 field_4; u8 field_8[0x38]; } struct_40_2;
typedef struct { u8 field_0[4]; } struct_4_9;
extern s16 D_sc03_014_8018F778; extern s16 D_sc03_014_8018F76C; extern s16 D_sc03_014_8018F760; extern u8 D_sc03_014_801EAB78; extern s32 func_8012C194(); extern void func_80024054(); extern void func_8001CE28(); extern s16 D_sc03_014_801EABA0; extern s16 D_sc03_014_801EABB0; extern s16 D_sc03_014_801EABAA; extern s16 D_sc03_014_801EABA2; extern s16 D_sc03_014_801EABBA; extern s16 D_sc03_014_801EABB2; extern s16 D_sc03_014_801EABDE; extern s16 D_sc03_014_801EABD6; extern s16 D_sc03_014_801EABEE; extern s16 D_sc03_014_801EABE6; extern s16 D_sc03_014_801EAC08; extern s16 D_sc03_014_801EAC18; extern s16 D_sc03_014_801EAC12; extern s16 D_sc03_014_801EAC0A; extern s16 D_sc03_014_801EAC22; extern s16 D_sc03_014_801EAC1A; extern s16 D_sc03_014_801EAC0C; extern s16 D_sc03_014_801EABD8; extern s16 D_sc03_014_801EABA4; extern u8 D_sc03_014_801EABC8; extern u8 D_sc03_014_801EABC0; extern u8 D_sc03_014_801EABCC; extern u8 D_sc03_014_801EABC4; extern u8 D_sc03_014_801EABC9; extern u8 D_sc03_014_801EABC1; extern u8 D_sc03_014_801EABCE; extern u8 D_sc03_014_801EABCA; extern u8 D_sc03_014_801EABC6; extern u8 D_sc03_014_801EABC2; extern u8 D_sc03_014_801EABFC; extern u8 D_sc03_014_801EABF4; extern u8 D_sc03_014_801EABFD; extern u8 D_sc03_014_801EABF5; extern u8 D_sc03_014_801EAC01; extern u8 D_sc03_014_801EABF9; extern u8 D_sc03_014_801EAC34; extern u8 D_sc03_014_801EAC30; extern u8 D_sc03_014_801EAC2C; extern u8 D_sc03_014_801EAC28; extern u8 D_sc03_014_801EAC35; extern u8 D_sc03_014_801EAC31; extern u8 D_sc03_014_801EAC2D; extern u8 D_sc03_014_801EAC29; extern u8 D_sc03_014_801EAC36; extern u8 D_sc03_014_801EAC32; extern u8 D_sc03_014_801EAC2E; extern u8 D_sc03_014_801EAC2A; extern u8 D_sc03_014_801EAC02; extern u8 D_sc03_014_801EABFE; extern u8 D_sc03_014_801EABFA; extern u8 D_sc03_014_801EABF6; extern s32 D_sc03_014_801EAC04; extern s32 D_sc03_014_801EABD0; extern s32 D_sc03_014_801EAC38;
extern u8 D_sc03_014_801E7BB8;
extern u8 D_sc03_014_80191928;
extern s32 func_8001CA1C();
extern s32 func_80143970();
extern void func_sc03_014_8018A31C();
extern void func_sc03_014_80189104();
extern u8 D_sc03_014_80191BAC[];
extern u8 D_sc03_014_80191ABC;
extern struct_8_4 D_sc03_014_80190470;
extern struct_8_4 D_sc03_014_80190478;
extern struct_8_4 D_sc03_014_801EAC70;
extern struct_8_4 D_sc03_014_801EAC78;
extern void func_8001C2C4();
extern u8 D_sc03_014_801E2CE8;
extern struct_8_4 D_sc03_014_80190538;
extern s32 func_80128EA8();
extern u8 D_sc03_014_801E450C;
extern u8 D_sc03_014_801918BC;
extern u8 D_sc03_014_801918C8;
extern u8 D_sc03_014_80191918;
extern u8 D_sc03_014_801918F8;
extern u8 D_sc03_014_801E2B50;
extern struct_8_4 D_sc03_014_80190540;
extern u8 D_sc03_014_80190078;
extern void func_8012B370();
extern struct_38 D_800AF630;
extern s32 D_800AE610;
extern s32 func_8012B608();
extern s32 func_8012B8A4();
extern u8 D_sc03_014_801D6D2C;
extern u8 D_sc03_014_801E2DE0;
extern u8 D_sc03_014_801E2EE8;
extern u8 D_sc03_014_801E2EA0;
extern void func_800D0F4C();
extern s32 rsin();
extern s32 func_8012A828();
extern s32 rcos();
extern u8 D_sc03_014_801E2910;
extern struct_8_4 D_sc03_014_80190548;
extern s16 D_sc03_014_801907D0;
extern s16 D_sc03_014_801907D2;
extern s16 D_sc03_014_801907D4;
extern s16 D_sc03_014_801907D8;
extern s16 D_sc03_014_801907DA;
extern s16 D_sc03_014_801907DC;
extern s16 D_sc03_014_801907E0;
extern s16 D_sc03_014_801907E2;
extern s16 D_sc03_014_801907E4;
extern u8 D_sc03_014_801907C8;
extern s32 D_80126B60;
extern s32 func_8012B77C();
extern void func_8012B14C();
extern s32 rand();
extern u8 D_sc03_014_801905C4;
extern u8 D_sc03_014_801905D4;
extern u8 D_sc03_014_801905DC;
extern void func_8014B598();
extern s32 func_8016F1AC();
extern void func_80175454();
extern s32 func_8014CB2C();
extern s32 func_sc03_014_80184DF8();
extern s32 func_sc03_014_801842E0();
extern void func_8002959C();
extern void func_80175414();
extern u8 D_sc03_014_8018FE60;
extern u8 D_sc03_014_8018FE70;
extern void func_8012A568();
extern struct_8_4 D_sc03_014_80190048[];
extern s32 D_sc03_014_80190344[];
extern s16 D_sc03_014_8019004A;
extern s16 D_sc03_014_8019004C;
extern s16 D_sc03_014_8019005A;
extern s16 D_sc03_014_8019005C;
extern s32 D_sc03_014_801EA8FC;
extern s32 D_sc03_014_801EA900;
extern s32 D_sc03_014_801EA908;
extern s32 D_sc03_014_801EA90C;
extern s32 D_sc03_014_801EA910;
extern s32 D_sc03_014_801EA918;
extern s32 D_sc03_014_801EA91C;
extern s32 D_sc03_014_801EA920;
extern s32 func_sc03_014_80184028();
typedef struct { unsigned field_0_b0 : 31; unsigned field_3_b7 : 1; } struct_4_10;
extern s32 D_sc03_014_8018EFE8[];
extern s32 func_80012F74();
extern void func_80147364();
extern u8 D_80126B30;
extern s32 D_8011F9C8;
extern s16 D_80126B3A;
extern void *D_801151D4;
typedef struct { s16 field_0, field_2, field_4; } struct_6;
typedef struct { s32 field_0[4]; } struct_10_6;
typedef struct { s16 field_0, field_2; s32 field_4; } struct_8_11;
typedef struct { struct_8_4 field_0[3]; struct_4_3 field_18[3]; s32 field_24; } struct_28;
s32 func_sc03_014_80189050(s32 arg0, s32 arg1, s32 arg2);
extern s32 func_80135888();
extern s32 D_80126B90;
extern void func_80129350();
extern void func_80133060();
extern s8 D_sc03_014_801EAC94;
extern struct_4_3 D_sc03_014_801E94F4;
extern struct_4_3 D_sc03_014_801EAC98;
extern void func_8001CD9C();
extern struct_4_3 D_sc03_014_801E94F8;
typedef struct { s32 field_0, field_4; } struct_8_12;
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
typedef struct { s32 field_0; s32 field_4; s32 field_8; s16 field_C; s16 field_E; s32 field_10[2]; s32 field_18; s32 field_1C; s32 field_20; } struct_24;
typedef struct { s16 field_0, field_2, field_4, field_6; s16 field_8, field_A, field_C, field_E; s32 field_10; } struct_14_9;
typedef struct { struct_8_4 field_0[4]; s32 field_20, field_24, field_28, field_2C, field_30, field_34; } struct_38_2;
typedef struct { s16 field_0; s16 field_2[5]; } struct_C_7;
typedef struct { u8 field_0; u8 field_1[11]; } struct_C_8;
typedef struct { u32 field_0; u32 field_4; s16 field_8, field_A; u8 field_C, field_D; u16 field_E; s16 field_10, field_12; } struct_14_10;
typedef struct { s8 field_0; u8 field_1; } struct_2;
typedef struct { u16 field_0; } struct_2_2;
typedef struct { u32 field_0; u8 field_4, field_5, field_6, field_7; s16 field_8, field_A; u8 field_C, field_D, field_E, field_F; s16 field_10, field_12; u8 field_14, field_15, field_16, field_17; s16 field_18, field_1A; u8 field_1C, field_1D, field_1E, field_1F; s16 field_20, field_22; } struct_24_2;
typedef struct { s32 field_0; u8 field_4[8]; } struct_C_9;
typedef struct { s32 field_0; s32 field_4; } struct_8_14;
typedef struct { struct_8_7 field_0[4]; s32 field_20[4]; s32 field_30; s32 field_34; u8 field_38; } struct_3C_2;
typedef struct { u32 field_0, field_4, field_8, field_C; u32 *field_10; } struct_14_11;
extern u8 D_sc03_014_801CF680;
extern void func_80178BF8();
extern s32 func_8012BDBC();
extern void func_80172710();
extern struct_8_4 D_sc03_014_801E32B0[];
extern u8 D_sc03_014_801EAC95;
extern u8 D_sc03_014_801EAC96;
extern s16 D_80126BF0;
extern s16 D_80126BF4;
extern void func_80172780();
extern u8 D_80078EAF;
extern u8 D_sc03_014_801903A8;
extern u8 D_sc03_014_8018FEE0;
extern u8 D_sc03_014_8018FFA0;
extern u8 D_sc03_014_8018FF38;
extern void func_80131B14();
void func_sc03_014_80182D04(s32 arg0, s32 arg1, s16 arg2);
extern s32 func_80131A34();
extern void func_801439C0();
extern void func_801292C8();
extern u8 D_sc03_014_8018FB40;
extern u16 D_sc03_014_8018F250[];
void func_sc03_014_8017BE9C(void);
void func_sc03_014_8017BEA4(void);
void func_sc03_014_8017BEAC(void);
void func_sc03_014_8017BEB4(void);
s32 func_sc03_014_8017BEBC();
void func_sc03_014_8017BEE4(u8 *arg0);
void func_sc03_014_8017BF20(s32 arg0);
s32 func_sc03_014_8017BF58(s32 arg0);
void func_sc03_014_8017BF98(void);
s32 func_sc03_014_8017BFA0();
void func_sc03_014_8017BFC8(u8 *arg0);
void func_sc03_014_8017C004(s32 arg0);
s32 func_sc03_014_8017C03C(s32 arg0);
void func_sc03_014_8017C07C(void);
void func_sc03_014_8017C084(u8 *arg0, s32 arg1, s32 arg2);
void func_sc03_014_8017C0C8(u8 *arg0);
void func_sc03_014_8017C104(u8 *arg0);
void func_sc03_014_8017C12C(s32 arg0);
void func_sc03_014_8017C14C(void);
void func_sc03_014_8017C154(u8 *arg0);
void func_sc03_014_8017C290(u8 *arg0, struct_8_4 *arg1, struct_8_4 *arg2, struct_8_4 *arg3, struct_8_4 *arg4, struct_8_4 *arg5,
                            s16 *arg6);
void func_sc03_014_8017C624(u8 *arg0, s16 arg1, s32 arg2);
void func_sc03_014_8017C664(u8 *arg0);
void func_sc03_014_8017C6A0(u8 *arg0);
void func_sc03_014_8017C814(u8 *arg0);
void func_sc03_014_8017C8FC(u8 *arg0);
void func_sc03_014_8017CC44(u8 *arg0);
void func_sc03_014_8017CCC4(u8 *arg0);
void func_sc03_014_8017CD10(u8 *arg0);
s32 func_sc03_014_8017CE10(s32 arg0, s32 arg1, s32 arg2);
void func_sc03_014_8017CE54(u8 *arg0);
void func_sc03_014_8017CE90(u8 *arg0);
void func_sc03_014_8017CFBC(u8 *arg0);
s32 func_sc03_014_8017D098(s32 arg0, s32 arg1, s32 arg2);
void func_sc03_014_8017D0DC(u8 *arg0);
void func_sc03_014_8017D118(s32 arg0);
void func_sc03_014_8017D194(s32 arg0);
void func_sc03_014_8017D1E0(u8 *arg0);
void func_sc03_014_8017D318(u8 *arg0, struct_8_5 *a, struct_8_5 *b, s32 ang);
s32 func_sc03_014_8017D5F8(s32 arg0, s32 arg1, s32 arg2);
void func_sc03_014_8017D63C(u8 *arg0);
void func_sc03_014_8017D678(u8 *arg0);
void func_sc03_014_8017D75C(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_sc03_014_8017D804(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_sc03_014_8017D890(u8 *arg0);
void func_sc03_014_8017D900(s32 arg0);
void func_sc03_014_8017D9C8(s32 arg0);
void func_sc03_014_8017DA98(s16 arg0, struct_8_9 *arg1, s32 arg2);
void func_sc03_014_8017DB00(u8 *arg0);
void func_sc03_014_8017DB3C(s32 arg0);
void func_sc03_014_8017DB74(s32 arg0);
void func_sc03_014_8017DBC4(s32 arg0);
void func_sc03_014_8017DC28(u8 *arg0, s32 arg1);
void func_sc03_014_8017DC4C(u8 *arg0);
void func_sc03_014_8017DCC0(u8 *arg0);
void func_sc03_014_8017DD74(void);
s32 func_sc03_014_8017DD7C(void);
void func_sc03_014_8017DDBC(u8 *arg0);
void func_sc03_014_8017DE24(u8 *arg0);
void func_sc03_014_8017DE8C(u8 *arg0);
void func_sc03_014_8017DF7C(void);
void func_sc03_014_8017DF84(u8 *obj, u8 *hdr, s32 phase, s32 dy);
void func_sc03_014_8017EB7C(u8 *obj);
void func_sc03_014_8017FA5C(u8 *obj, u8 *hdr, s32 dy);
void func_sc03_014_801805BC(u8 *arg0);
void func_sc03_014_801805F8(s32 arg0);
void func_sc03_014_80180638(u8 *arg0);
void func_sc03_014_801806B4(s32 arg0);
void func_sc03_014_80180714(void);
void func_sc03_014_8018071C(void);
s32 func_sc03_014_80180744(void);
s16 func_sc03_014_80180760(void);
void func_sc03_014_80180770(u8 *arg0);
void func_sc03_014_801807D0(u8 *arg0);
void func_sc03_014_8018089C(u8 *arg0);
void func_sc03_014_80180A68(s32 arg0);
void func_sc03_014_80180AC4(s32 arg0);
void func_sc03_014_80180B20(u8 *arg0);
void func_sc03_014_80180B84(u8 *arg0);
void func_sc03_014_80180C34(u8 *arg0);
void func_sc03_014_80180CF8(u8 *arg0);
void func_sc03_014_80180DB8(u8 *arg0);
void func_sc03_014_80180DFC(u8 *arg0);
void func_sc03_014_80180E38(u8 *a);
void func_sc03_014_80180FFC(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_sc03_014_80181090(u8 *arg0);
void func_sc03_014_801810CC(s32 arg0);
void func_sc03_014_80181170(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_sc03_014_801811D4(u8 *arg0, s32 arg1_0);
void func_sc03_014_80181304(u8 *arg0);
void func_sc03_014_80181690(u8 *arg0);
void func_sc03_014_80181908(u8 *arg0);
void func_sc03_014_80181A50(u8 *arg0);
void func_sc03_014_80181BD0(u8 *arg0);
void func_sc03_014_80181C0C(void);
void func_sc03_014_80181C58(u8 *arg0);
void func_sc03_014_80181D4C(u8 *arg0);
void func_sc03_014_80181DCC(u8 *arg0);
void func_sc03_014_80181E80(u8 *arg0);
void func_sc03_014_80181EEC(u8 *arg0, s32 arg1);
void func_sc03_014_80181F78(s32 arg0, s32 arg1);
void func_sc03_014_80181F98(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_sc03_014_80181FEC(s32 arg0);
void func_sc03_014_80182028(u8 *arg0);
void func_sc03_014_80182064(u8 *arg0);
void func_sc03_014_801820B4(u8 *arg0);
void func_sc03_014_80182110(u8 *arg0);
void func_sc03_014_80182194(u8 *arg0);
void func_sc03_014_801822FC(u8 *arg0);
void func_sc03_014_80182348(u8 *arg0);
void func_sc03_014_80182654(u8 *arg0);
void func_sc03_014_80182690(u8 *arg0);
void func_sc03_014_801826D0(u8 *arg0);
void func_sc03_014_80182740(u8 *arg0);
void func_sc03_014_801827CC(u8 *arg0);
void func_sc03_014_801828A0(u8 *arg0);
void func_sc03_014_801828F4(u8 *arg0);
void func_sc03_014_80182930(u8 *arg0);
void func_sc03_014_801829E4(u8 *arg0);
void func_sc03_014_80182A40(u8 *arg0);
void func_sc03_014_80182BB0(s32 arg0, s32 arg1);
void func_sc03_014_80182BD4(s32 arg0, s32 arg1, s16 arg2);
void func_sc03_014_80182BFC(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_sc03_014_80182C28(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_sc03_014_80182CB0(s32 arg0, s32 arg1);
void func_sc03_014_80182D04(s32 arg0, s32 arg1, s16 arg2);
void func_sc03_014_80182D5C(void);
void func_sc03_014_80182E08(u8 *arg0);
void func_sc03_014_80182E44(u8 *o);
void func_sc03_014_80183130(u8 *arg0);
void func_sc03_014_801835C4(u8 *arg0);
s32 func_sc03_014_80183600(u8 *arg0);
s32 func_sc03_014_80183644(void);
s32 func_sc03_014_80183668(u8 *arg0);
s32 func_sc03_014_801836A8(u8 *arg0);
void func_sc03_014_80183724(void);
void func_sc03_014_80183744(u8 *arg0);
s32 func_sc03_014_80183780(u8 *arg0);
s32 func_sc03_014_801837C0(u8 *arg0);
void func_sc03_014_8018383C(void);
void func_sc03_014_8018385C(u8 *arg0);
s32 func_sc03_014_80183898(u8 *arg0);
void func_sc03_014_80183930(void);
void func_sc03_014_80183958(void);
void func_sc03_014_80183980(void);
void func_sc03_014_80183A18(s32 arg0);
void func_sc03_014_80183A54(u8 *arg0);
void func_sc03_014_80183B58(u8 *arg0, u8 *arg1);

typedef struct { u16 field_0; u16 field_2; } struct_4_11;
extern void (*D_sc03_014_8018FB30[])();

void func_sc03_014_80183CF0(struct_4_11 *o) {
    D_sc03_014_8018FB30[o->field_2](o);
}

typedef struct { u8 field_0[2]; s16 field_2; u8 field_4[0xD8]; s16 field_DC; u8 field_DE[4]; s16 field_E2; s16 field_E4; u8 field_E6[2]; s16 field_E8; s16 field_EA; } struct_EC;
typedef struct { u8 field_0[0x37]; u8 field_37; } struct_38_3;
extern struct_38_3 D_80078E78;
extern u8 D_sc03_014_801B5864;
extern u8 D_sc03_014_801B5E30;
extern u8 D_sc03_014_801B75CC;
extern void func_8013C0F8();
extern void func_sc03_014_80184440();
extern void func_8013373C();

void func_sc03_014_80183D50(struct_EC *o) {
    struct_38_3 *p = &D_80078E78;

    func_8013C0F8(&D_sc03_014_801B5864);
    func_8013C0F8(&D_sc03_014_801B5E30);
    func_8013C0F8(&D_sc03_014_801B75CC);
    o->field_DC = 0;
    o->field_E4 = 0;
    o->field_E8 = 1;
    o->field_EA = 0x3C;
    o->field_E2 = -0x3C0;
    func_sc03_014_80184440();
    o->field_2++;
    if (func_80029178(0xB9) & 0xFF) {
        func_8013373C(1);
        o->field_E2 = -0x68;
        o->field_E2 = 0;
        o->field_E4 = 0;
        o->field_2 = 3;
    } else if (p->field_37 == 0 || p->field_37 == 3 || p->field_37 == 4) {
        o->field_E2 = -0x3C0;
        o->field_E2 = 0;
        o->field_E4 = 2;
    } else {
        func_8013373C(0);
        o->field_E2 = -0x2C9;
        o->field_E2 = 0;
        o->field_E4 = 1;
    }
}

extern u8 *D_sc03_014_8018F858[];
extern u8 D_sc03_014_801EAFD0;
extern s32 D_801270C8;
extern void func_sc03_014_80184354();

void func_sc03_014_80183F28(struct_EC *o) {
    func_sc03_014_8017DF84(&D_sc03_014_801EAFD0, D_sc03_014_8018F858[o->field_E4], o->field_DC, o->field_E2);
    o->field_DC += 8;
    if ((func_80029178(0xB9) & 0xFF) == 0) {
        if (D_801270C8 != 0) {
            o->field_2++;
        }
        o->field_EA = 0x3C;
        func_sc03_014_80184354();
    }
}

extern s32 D_sc03_014_801EAC68;

s32 func_sc03_014_80184028(void) {
    return D_sc03_014_801EAC68;
}

typedef struct { u8 field_0[0xE0]; s32 field_E0; } struct_E4;
extern u8 D_sc03_014_8018BCC8;
extern u16 D_800B99DC;

void func_sc03_014_80184058(struct_EC *o) {
    func_sc03_014_8017DF84(&D_sc03_014_801EAFD0, D_sc03_014_8018F858[o->field_E4], o->field_DC, o->field_E2);
    func_sc03_014_80184354();
    if (o->field_EA == 0) {
        ((struct_E4 *)o)->field_E0 += 0x5CCCC;
    } else if (--o->field_EA == 0) {
        func_8002D4C8(0x81E, 0);
    }
    if (--o->field_E8 == 0) {
        func_8013C9C4(&D_sc03_014_8018BCC8);
        o->field_E8 = (D_800B99DC & 7) + 3;
    }
    if (o->field_E2 >= 0x259) {
        o->field_E2 = 0;
        D_801270C8 = 2;
        o->field_E4 = 0;
        func_8013373C(1);
        func_8002D4C8(4, 0x81E);
        o->field_2++;
    }
    o->field_DC += 8;
}

typedef struct { u8 field_0[0xE2]; s16 field_E2; s16 field_E4; } struct_E6;
extern void func_sc03_014_80184474();

void func_sc03_014_80184264(struct_E6 *o) {
    func_sc03_014_8017FA5C(&D_sc03_014_801EAFD0, D_sc03_014_8018F858[o->field_E4], o->field_E2);
    func_sc03_014_80184474();
}

s32 func_sc03_014_801842E0(void) {
    if (D_801270C8 == 0) {
        D_801270C8 = 1;
    } else if (D_801270C8 == 2) {
        return 1;
    }
    return 0;
}

extern u16 D_sc03_014_801EAC44[];
extern u32 D_sc03_014_801EAC40;
extern u16 D_sc03_014_8018F864[];
extern u8 D_sc03_014_8018F884;

void func_sc03_014_80184354(void) {
    u32 i;

    for (i = 0; i < 16; i++) {
        D_sc03_014_801EAC44[i] = D_sc03_014_8018F864[((D_sc03_014_801EAC40 >> 8) + i) & 0xF];
    }
    func_800183E0(&D_sc03_014_8018F884);
    D_sc03_014_801EAC40 += 0x40;
}

extern s32 D_sc03_014_801EAC64;

void func_sc03_014_80184440(void) {
    D_sc03_014_801EAC64 = 1;
    D_sc03_014_801EAC68 = 0;
}

extern u8 D_sc03_014_8018F8A4[];
extern void func_sc03_014_80184538();

void func_sc03_014_80184474(void) {
    s32 unused;

    D_sc03_014_801EAC64--;
    if (D_sc03_014_801EAC64 == 0) {
        func_sc03_014_80184538(D_sc03_014_801EAC68);
        D_sc03_014_801EAC64 = D_sc03_014_8018F8A4[D_sc03_014_801EAC68] * 2;
        if (++D_sc03_014_801EAC68 >= 0x1E) {
            D_sc03_014_801EAC68 = 0;
        }
    }
}

typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_15;
typedef struct { s32 field_0; s32 field_4; u16 field_8, field_A, field_C, field_E, field_10, field_12; } struct_14_12;
extern struct_14_12 D_sc03_014_8018F8C4[];
extern s32 MoveImage();

void func_sc03_014_80184538(s32 i) {
    struct_8_15 r;
    s32 x;
    s32 y;

    if (D_sc03_014_8018F8C4[i].field_0 == 0) {
        r.field_0 = D_sc03_014_8018F8C4[i].field_8;
        r.field_2 = D_sc03_014_8018F8C4[i].field_A;
        r.field_4 = D_sc03_014_8018F8C4[i].field_C;
        r.field_6 = D_sc03_014_8018F8C4[i].field_E;
        x = D_sc03_014_8018F8C4[i].field_10;
        y = D_sc03_014_8018F8C4[i].field_12;
        MoveImage(&r, x, y);
    } else {
        func_800183E0(D_sc03_014_8018F8C4[i].field_4);
    }
}

extern u8 D_800AEE50;
extern s32 func_8001ABBC();

s32 func_sc03_014_801846E4(void) {
    s32 r;

    r = func_8001ABBC(0, 0, &D_800AEE50, 0, 0);
    return r;
}

extern u8 D_800AEE58;

s32 func_sc03_014_8018473C(void) {
    s32 r;

    r = func_8001ABBC(0, 0, &D_800AEE58, 0, 0);
    return r;
}

extern u8 D_800AEE60;

s32 func_sc03_014_80184794(void) {
    s32 r;

    r = func_8001ABBC(0, 0, &D_800AEE60, 0, 0);
    return r;
}

extern s32 D_800C7C60;
extern u8 *D_800C7C64;
extern u8 D_800A2E20[];
extern u8 D_800AEE40;

s32 func_sc03_014_801847EC(void) {
    s32 r;

    D_800C7C60 = 0x41;
    D_800C7C64 = D_800A2E20;
    r = func_8001ABBC(0, 0, &D_800AEE40, 0, &D_800C7C60);
    return r;
}

extern u8 D_800AEE48;

s32 func_sc03_014_80184868(void) {
    s32 r;

    D_800C7C60 = 0x39;
    D_800C7C64 = D_800A2E20;
    r = func_8001ABBC(0, 0, &D_800AEE48, 0, &D_800C7C60);
    return r;
}
