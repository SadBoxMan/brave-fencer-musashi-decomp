#include "common.h"
#include "abil.h"

extern void func_800183E0();
extern u8 D_ovl16_800CB570[];
extern type_1 D_ovl16_800CB51C[];
extern void func_80165A20();
extern s32 D_80078EC8;

void func_ovl16_800CAE0C(void) {
    func_800183E0(D_ovl16_800CB570);
}

void func_ovl16_800CAE34(u8 *a) {
    AF(a, s32, 0x44) |= 8;
    D_ovl16_800CB51C[AF(a, u8, 0x197)](a);
}

extern void func_80146C3C();
extern s32 func_ovl16_800CAF84();
extern u8 D_80078EC1;
extern type_1 D_ovl16_800CB53C[];
extern void func_80146A6C();
extern void func_801655E4();
extern s32 func_80165910();
extern s32 rand();

extern s32 MulMatrix();
extern s32 RotMatrixYXZ();

void func_ovl16_800CAE78(u8 *arg0) {
    AF(arg0, u8, 0x197) = (u8) (AF(arg0, u8, 0x197) + 1);
}

void func_ovl16_800CAE8C(u8 *arg0) {
    if (func_80165910() == 0) {
        func_801655E4(arg0);
    }
    func_80146A6C(0x4B, arg0, 0, 0, 0, 0, 0);
    AF(arg0, u8, 0x197) = (u8) (AF(arg0, u8, 0x197) + 1);
}

void func_ovl16_800CAEF4(void) {
    if (D_80078EC8 == 0) {
        func_80165A20();
    }
}

void func_ovl16_800CAF20(void) {
}

void func_ovl16_800CAF28(u8 *arg0) {
    if (D_80078EC1 == 1) {
        D_ovl16_800CB53C[AF(arg0, u16, 2)]();
        return;
    }
    func_80146C3C();
}

extern s8 D_ovl16_800CB528[];
extern void func_80017DC4();
extern void func_8012F14C();
extern void func_800D20C0();
extern void func_800D23D0();
extern void func_80017E68();
extern void func_80017758();

s32 func_ovl16_800CAF84(arg0) u8 *arg0; {
    s8 *p;
    s16 i;
    struct_8 v;
    struct_8 r;
    struct_34 s;
    struct_20 a;
    struct_20 b;

    v.field_0 = v.field_2 = v.field_4 = AF(arg0, u16, 0x28);
    func_80017DC4(&v, &a);
    v.field_0 = v.field_4 = 0;
    v.field_2 = -0x2C;
    func_8012F14C(arg0 + 0x38, &v, &v);
    func_800D20C0(&v, &r, 5);
    func_800D23D0(&r);
    s.field_0[1].field_0 = s.field_0[1].field_2 = s.field_0[1].field_4 = 0;
    s.field_0[0].field_4 = s.field_0[2].field_4 = s.field_0[3].field_4 = 0;
    s.field_20[1].field_2 = (AF(arg0, s16, 0x28) >> 6) + 0x70;
    s.field_20[1].field_0 = s.field_20[1].field_1 = 0;
    s.field_20[0].field_0 = s.field_20[0].field_1 = s.field_20[0].field_2 = 0;
    s.field_20[2].field_0 = s.field_20[2].field_1 = s.field_20[2].field_2 = 0;
    s.field_20[3].field_0 = s.field_20[3].field_1 = s.field_20[3].field_2 = 0;
    s.field_30 = 0x50000000;
    func_80017E68(&v, &a);
    RotMatrixYXZ(&r, &b);
    MulMatrix(&a, &b);
    p = D_ovl16_800CB528;
    i = 0;
    do {
        s.field_0[0].field_0 = *p++;
        s.field_0[0].field_2 = *p++;
        s.field_0[2].field_0 = *p++;
        s.field_0[2].field_2 = *p++;
        s.field_0[3].field_0 = *p++;
        s.field_0[3].field_2 = *p--;
        func_80017758(&s, &a);
        i++;
    } while (i < 4);
}

void func_ovl16_800CB158(u8 *arg0) {
    u8 *s;
    s32 n;

    s = AF(arg0, u8 *, 0x34);
    if (!(AF(arg0, s32, 0x2C) & 0x8000)) {
        n = AF(arg0, s32, 0x1C);
        AF(arg0, s32, 0x1C) = n + 1;
        if (n < 8) {
            AF(arg0, u16, 0x28) += 0x120;
        } else {
            AF(arg0, s32, 0x1C) = 0;
            AF(arg0, u16, 2) = 4;
        }
        AF(arg0, struct_20, 0x38) = AF(AF(s, u8 *, 0x20), struct_20, 0x34);
        func_ovl16_800CAF84(arg0);
        return;
    }
    AF(arg0, u16, 2)++;
}

void func_ovl16_800CB228(u8 *arg0) {
    u8 *s;
    s32 n;

    s = AF(arg0, u8 *, 0x34);
    {
        n = AF(arg0, s32, 0x1C);
        AF(arg0, s32, 0x1C) = n + 1;
        if (n < 0xA) {
            AF(arg0, u16, 0x28) += 0x120;
        } else {
            AF(arg0, s16, 0x12) = AF(s, s16, 0x12) >> 1;
            AF(arg0, s16, 0x1A) = AF(s, s16, 0x1A) >> 1;
            AF(arg0, s32, 0x30) = 0x20;
            AF(arg0, s32, 0x1C) = -0xC0;
            AF(arg0, s16, 0x2A) = 0x500;
            AF(arg0, u16, 2)++;
        }
        AF(arg0, struct_20, 0x38) = AF(AF(s, u8 *, 0x20), struct_20, 0x34);        func_ovl16_800CAF84(arg0);
    }
}

void func_ovl16_800CB304(u8 *arg0) {
    s32 r;
    s32 t;

    if (AF(arg0, s16, 0x28) > AF(arg0, s16, 0x2A)) {
        if (AF(arg0, s32, 0x1C) > 0) {
            AF(arg0, s16, 0x2A) = (rand() & 0x180) + 0x500;
            AF(arg0, s32, 0x1C) = -0xA0;
        }
    } else if (AF(arg0, s32, 0x1C) < 0) {
        AF(arg0, s16, 0x2A) = (rand() & 0x180) + 0x800;
        AF(arg0, s32, 0x1C) = 0xA0;
    }
    AF(arg0, s16, 0x28) += AF(arg0, s32, 0x1C);
    r = AF(arg0, s16, 0x12);
    AF(arg0, s32, 0x4C) += r;
    AF(arg0, s32, 0x50) -= 2;
    AF(arg0, s32, 0x54) += AF(arg0, s16, 0x1A);
    func_ovl16_800CAF84(arg0, r);
    t = AF(arg0, s32, 0x30);
    AF(arg0, s32, 0x30) = t - 1;
    if (t == 0) {
        AF(arg0, u16, 2)++;
    }
}

void func_ovl16_800CB400(u8 *arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x28) - 0x100;
    AF(arg0, u16, 0x28) = temp_v0;
    if ((temp_v0 << 0x10) > 0) {
        AF(arg0, s32, 0x50) = (s32) (AF(arg0, s32, 0x50) - 2);
        func_ovl16_800CAF84();
        return;
    }
    func_80146C3C();
}

void func_ovl16_800CB458(u8 *arg0) {
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_v0_2;
    void *temp_s1;
    void *temp_v0;

    temp_s1 = AF(arg0, void *, 0x34);
    AF(arg0, struct_20, 0x38) = AF(AF(temp_s1, void *, 0x20), struct_20, 0x34);
    func_ovl16_800CAF84(arg0);
    temp_v0_2 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0_2;
    if (temp_v0_2 == -1) {
        func_80146A6C(0x4B, (s32) temp_s1, 0, 0, /* extra? */ 0, /* extra? */ 0x8000, /* extra? */ 0);
        AF(arg0, s32, 0x1C) = 0x18;
    }
}
