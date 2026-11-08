#include "common.h"
#include "work.h"

extern void func_800118AC(void);
extern u16 func_800149E0(s32 a);
extern s16 func_80014CAC(s32 a, s32 b);
extern void func_80015310(void);
extern void func_8001534C(s16 n, s32 x, s16 a, s16 b, u8 c, u8 d);
extern void func_800167B8(s32 a);
extern s32 func_800167F0(s32 arg0);
extern void func_800183E0(void *p);
extern void func_8001AA98(char *name);
extern void func_8001C044(void);
extern s32 func_800CF3B0(void);
extern void func_800CF408(s32 a, s32 b);
extern void func_800CF6D0(s32 a, s32 b);
extern u16 D_800B99E4;
extern u16 D_800B99E6;
extern s16 D_800B99E8;
extern u8 D_800B9A11;
extern char D_800CEDFC[];
extern char D_800CEE14[];
extern char D_800CFAB4[];
extern char D_800CFAC4[];
extern char D_800CFAD4[];
extern void (*D_800CFADC[])(void);
extern char D_800D130C[];
extern void (*D_800D133C[])(void);
extern void (*D_800D1344[])(void);
extern s32 D_800D1364;
extern s32 D_800D1368;
extern s32 D_800D136C;
extern s32 D_800D1370;
extern s32 D_800D1374;

void func_800CEE2C(void) {
    register struct_A444 *w = &D_800AF630;

    D_800CFAB4[11] = D_800B99E4 + '0';
    func_8001534C(1, (s32)D_800CFAB4, 0x60, 0x64, 0, 0);
    if (D_800D1364 != 0) {
        func_8001534C(2, (s32)D_800CFAC4, 0x60, 0x70, 0, 0);
    } else {
        func_8001534C(3, (s32)D_800CFAD4, 0x60, 0x70, 0, 0);
    }
    if (w->field_A3B4 < 4) {
        D_800CFADC[w->field_A3B4]();
    }
}

void func_800CEEFC(void) {
    D_800B9A11 = 1;
    func_8001C044();
    func_80015310();
    D_800D1364 = 0;
    func_800183E0(D_800D130C);
    func_800167B8(0);
    D_800B99E8 = 0;
    func_800118AC();
}

void func_800CEF60(void) {
    if (func_800167F0(0) & 0xFFFF) {
        func_800118AC();
    }
}

void func_800CEF94(void) {
    if (++D_800B99E8 > 0x80 || func_80014CAC(0, 0x800) != 0) {
        func_800167B8(4);
        func_800118AC();
    }
}

void func_800CEFF8(void) {
    if (func_800167F0(4) & 0xFFFF) {
        D_800B99E6 = 1;
    }
}

void func_800CF02C(void) {
    D_800D133C[D_800B99E4]();
}

void func_800CF068(void) {
    func_8001AA98(D_800CEDFC);
    D_800D1368 = 0;
    D_800D1370 = 0;
    D_800D1374 = 0;
    func_800167B8(0);
    func_800118AC();
}

void func_800CF0B8(void) {
    D_800D1344[D_800D1374]();
}

void func_800CF0F4(void) {
    func_800CF408(0, D_800D1368);
    if (func_800167F0(0) & 0xFFFF) {
        D_800D1374++;
    }
}

void func_800CF148(void) {
    if (func_800CF3B0() == 0) {
        func_800CF408(0, D_800D1368);
        if (--D_800D1368 < -0x10F) {
            func_800167B8(4);
            D_800D1368 = -0x110;
            D_800D1374++;
        }
    }
}

void func_800CF1CC(void) {
    func_800CF408(0, D_800D1368);
    if (func_800167F0(4) & 0xFFFF) {
        D_800D1374++;
    }
}

void func_800CF220(void) {
    func_8001AA98(D_800CEE14);
    func_800167B8(0);
    D_800D1374++;
}

void func_800CF268(void) {
    func_800CF6D0(-0x400, 0);
    if (func_800167F0(0) & 0xFFFF) {
        D_800D136C = -0x340;
        D_800D1374++;
    }
}

void func_800CF2BC(void) {
    if (func_800CF3B0() == 0) {
        func_800CF6D0(D_800D136C++, 0);
        if (D_800D136C > 0x140) {
            func_800167B8(4);
            D_800D1374++;
        }
    }
}

void func_800CF33C(void) {
    func_800CF6D0(D_800D136C, 0);
    if (func_800167F0(4) & 0xFFFF) {
        D_800D1374++;
    }
}

void func_800CF390(void) {
    func_800CF3B0();
}

s32 func_800CF3B0(void) {
    if ((func_800149E0(0) | func_800149E0(1)) & 0x800) {
        D_800B99E6 = 1;
        return 1;
    }
    return 0;
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
extern struct_18 *D_800A5E60;
extern u32 D_800AA60C[][0x1000];

void func_800CF408(s32 a, s32 b) {
    register struct_A444 *w = &D_800AF630;
    struct_18 *p;

    a -= 160;
    b -= 120;

    p = D_800A5E60;
    setlen(p, 5);
    p->field_4 = 0xE1000086;
    p->field_B = 0x64;
    p->field_12 = 0x7980;
    p->field_8 = p->field_9 = p->field_A = 0x80;
    p->field_C = a;
    p->field_E = b;
    p->field_10 = 0x20;
    p->field_11 = 0;
    p->field_14 = 160;
    p->field_16 = 256;
    addPrim(D_800AA60C[w->field_A3D2], p);
    p++;
    setlen(p, 5);
    p->field_4 = 0xE1000087;
    p->field_B = 0x64;
    p->field_12 = 0x7980;
    p->field_8 = p->field_9 = p->field_A = 0x80;
    p->field_C = a + 160;
    p->field_E = b;
    p->field_10 = 0x40;
    p->field_11 = 0;
    p->field_14 = 160;
    p->field_16 = 256;
    addPrim(D_800AA60C[w->field_A3D2], p);
    p++;
    setlen(p, 5);
    p->field_4 = 0xE1000096;
    p->field_B = 0x64;
    p->field_12 = 0x7980;
    p->field_8 = p->field_9 = p->field_A = 0x80;
    p->field_C = a;
    p->field_E = b + 256;
    p->field_10 = 0x20;
    p->field_11 = 0;
    p->field_14 = 160;
    p->field_16 = 256;
    addPrim(D_800AA60C[w->field_A3D2], p);
    p++;
    setlen(p, 5);
    p->field_4 = 0xE1000097;
    p->field_B = 0x64;
    p->field_12 = 0x7980;
    p->field_8 = p->field_9 = p->field_A = 0x80;
    p->field_C = a + 160;
    p->field_E = b + 256;
    p->field_10 = 0x40;
    p->field_11 = 0;
    p->field_14 = 160;
    p->field_16 = 256;
    addPrim(D_800AA60C[w->field_A3D2], p);
    p++;
    D_800A5E60 = p;
}

void func_800CF6D0(s32 a, s32 b) {
    register struct_A444 *w = &D_800AF630;
    struct_18 *p;

    a -= 160;
    b -= 120;

    p = D_800A5E60;
    setlen(p, 5);
    p->field_4 = 0xE1000089;
    p->field_B = 0x64;
    p->field_12 = 0x7940;
    p->field_8 = p->field_9 = p->field_A = 0x80;
    p->field_C = a;
    p->field_E = b;
    p->field_10 = 0;
    p->field_11 = 0;
    p->field_14 = 256;
    p->field_16 = 256;
    addPrim(D_800AA60C[w->field_A3D2], p);
    p++;
    setlen(p, 5);
    p->field_4 = 0xE100008B;
    p->field_B = 0x64;
    p->field_12 = 0x7940;
    p->field_8 = p->field_9 = p->field_A = 0x80;
    p->field_C = a + 256;
    p->field_E = b;
    p->field_10 = 0;
    p->field_11 = 0;
    p->field_14 = 256;
    p->field_16 = 256;
    addPrim(D_800AA60C[w->field_A3D2], p);
    p++;
    setlen(p, 5);
    p->field_4 = 0xE100008D;
    p->field_B = 0x64;
    p->field_12 = 0x7940;
    p->field_8 = p->field_9 = p->field_A = 0x80;
    p->field_C = a + 512;
    p->field_E = b;
    p->field_10 = 0;
    p->field_11 = 0;
    p->field_14 = 256;
    p->field_16 = 256;
    addPrim(D_800AA60C[w->field_A3D2], p);
    p++;
    setlen(p, 5);
    p->field_4 = 0xE100008F;
    p->field_B = 0x64;
    p->field_12 = 0x7940;
    p->field_8 = p->field_9 = p->field_A = 0x80;
    p->field_C = a + 768;
    p->field_E = b;
    p->field_10 = 0;
    p->field_11 = 0;
    p->field_14 = 64;
    p->field_16 = 256;
    addPrim(D_800AA60C[w->field_A3D2], p);
    p++;
    setlen(p, 5);
    p->field_4 = 0xE1000086;
    p->field_B = 0x64;
    p->field_12 = 0x7880;
    p->field_8 = p->field_9 = p->field_A = 0x80;
    p->field_C = -160;
    p->field_E = -120;
    p->field_10 = 0x20;
    p->field_11 = 0;
    p->field_14 = 160;
    p->field_16 = 256;
    addPrim(D_800AA60C[w->field_A3D2], p);
    p++;
    setlen(p, 5);
    p->field_4 = 0xE1000087;
    p->field_B = 0x64;
    p->field_12 = 0x7880;
    p->field_8 = p->field_9 = p->field_A = 0x80;
    p->field_C = 0;
    p->field_E = -120;
    p->field_10 = 0x40;
    p->field_11 = 0;
    p->field_14 = 160;
    p->field_16 = 256;
    addPrim(D_800AA60C[w->field_A3D2], p);
    p++;
    D_800A5E60 = p;
}
