#include "common.h"
#include "psyq.h"
#include "work.h"

extern void func_800118AC(void);
extern void func_80011818(s32 a);
extern void func_80015310(void);
extern s32 func_800149E0(s32 a);
extern void func_800167B8(s32 a);
extern s32 func_800167F0(s32 a);
extern void func_8001C044(void);
extern void func_800CEF50(void);
extern u8 D_800B9A11;
extern void (*D_800CF0FC[])(void);
extern s32 D_800CF13C;

void func_800CEDFC(void) {
    register struct_A444 *w = &D_800AF630;
    func_800CEF50();
    D_800CF0FC[w->field_A3B4]();
}

void func_800CEE44(void) {
    func_8001C044();
    func_80015310();
    D_800B9A11 = 0;
    D_800CF13C = 0;
    func_800167B8(0);
    func_800118AC();
}

void func_800CEE8C(void) {
    if (func_800167F0(0) & 0xFFFF) {
        func_800118AC();
    }
}

void func_800CEEC0(void) {
    s32 pad;
    pad = func_800149E0(0);
    if (++D_800CF13C > 0x12C || (pad & 0x8F0)) {
        func_800167B8(4);
        func_800118AC();
    }
}

void func_800CEF1C(void) {
    if (func_800167F0(4) & 0xFFFF) {
        func_80011818(0xC);
    }
}

typedef struct {
    u32 field_0;
    u32 field_4;
    u8 field_8, field_9, field_A, field_B;
    s16 field_C, field_E;
    u8 field_10, field_11;
    u16 field_12;
    s16 field_14, field_16;
} struct_18;
extern u32 D_800AA60C[][0x1000];
extern struct_18 D_800CF10C;
extern struct_18 D_800CF124;

void func_800CEF50(void) {
    register struct_A444 *w = &D_800AF630;
    setlen(&D_800CF10C, 5);
    D_800CF10C.field_4 = 0xE100008A;
    D_800CF10C.field_B = 0x64;
    D_800CF10C.field_C = -0xA0;
    D_800CF10C.field_E = -0x6E;
    D_800CF10C.field_8 = D_800CF10C.field_9 = D_800CF10C.field_A = 0x80;
    D_800CF10C.field_10 = 0;
    D_800CF10C.field_11 = 0xA;
    D_800CF10C.field_14 = 0x100;
    D_800CF10C.field_16 = 0xF0;
    D_800CF10C.field_12 = 0x7800;
    setlen(&D_800CF124, 5);
    D_800CF124.field_4 = 0xE100008C;
    D_800CF124.field_B = 0x64;
    D_800CF124.field_C = 0x60;
    D_800CF124.field_E = -0x6E;
    D_800CF124.field_8 = D_800CF124.field_9 = D_800CF124.field_A = 0x80;
    D_800CF124.field_10 = 0;
    D_800CF124.field_11 = 0xA;
    D_800CF124.field_14 = 0x40;
    D_800CF124.field_16 = 0xF0;
    D_800CF124.field_12 = 0x7800;
    addPrim(D_800AA60C[w->field_A3D2], &D_800CF10C);
    addPrim(D_800AA60C[w->field_A3D2], &D_800CF124);
}
