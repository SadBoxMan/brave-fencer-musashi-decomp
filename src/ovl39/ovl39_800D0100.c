#include "common.h"
#include "psyq.h"
#include "work.h"

extern void func_800118AC(void);
extern void func_80015310(void);
extern void func_800183E0(void *p);
extern void func_8001C044(void);
extern void func_8002D858(void);
extern s32 func_800D1E18(void);
extern void func_800D1E58(void);
extern void func_800D0D6C(void);
extern void func_800D12D0(void);
extern void func_800146B0(s32 mode);
extern void func_800D1D14(s32 a, s32 b);
extern void (*D_800D363C[])(void);
extern u8 D_800D4E6C[];
extern u8 D_800D52BC[];
extern s32 D_800EC88C;
extern s16 D_800EC898;
extern s32 D_800EC8A0;
extern u8 D_800D93FC[];
extern s32 D_800EC890;
extern s16 D_800EC894;
extern s32 D_800EC8B0;

void func_800D0100(void) {
    register struct_A444 *w = &D_800AF630;
    D_800D363C[w->field_A3B4]();
}

void func_800D0174(void) {
    register struct_A444 *w = &D_800AF630;
    w->field_A3E1 = 1;
    func_8001C044();
    func_80015310();
    func_8002D858();
    func_800183E0(D_800D93FC);
    D_800EC894 = 0;
    D_800EC8B0 = func_800D1E18();
    func_800118AC();
}

void func_800D0204(void) {
    if (D_800EC8B0 != 0) {
        func_800D1E58();
        func_800D0D6C();
        func_800118AC();
    } else {
        func_800118AC();
    }
}

typedef struct { s16 field_0; s16 field_2; } struct_4_2;
extern void func_80011928(u16 step);
extern void func_8001534C(s16 n, s32 x, s16 a, s16 b, u8 c, u8 d);
extern u8 D_800D3618[];
extern u8 D_800D3620[];
extern u8 *D_800D3624[];
extern struct_4_2 D_800D3630[];

extern void ClearImage(RECT *r, s32 a, s32 b, s32 c);
extern u16 func_800149E0(s32 a);
extern u16 func_800167F0(s32 a);
extern void func_800167B8(s32 a);
extern void func_8002D4C8(s32 a, s32 b);

void func_800D0268(void) {
    register struct_A444 *w = &D_800AF630;
    u16 pad;
    pad = func_800149E0(0);
    if (pad & 0x4000) {
        func_8002D4C8(0x9C1, 0);
        D_800EC894++;
        if (D_800EC894 >= 3) {
            D_800EC894 = 0;
        }
    } else if (pad & 0x1000) {
        func_8002D4C8(0x9C1, 0);
        D_800EC894--;
        if (D_800EC894 < 0) {
            D_800EC894 = 2;
        }
    }
    switch (D_800EC894) {
    case 0:
        if (pad & 0x800) {
            func_8002D4C8(0x9C0, 0);
            func_800167B8(4);
            func_800118AC();
        }
        break;
    case 1:
    case 2:
        if (pad & 0x800) {
            func_8002D4C8(0x9C0, 0);
            func_800167B8(4);
            func_800118AC();
        }
        break;
    }
    func_800D0D6C();
}

void func_800D0440(void) {
    register struct_A444 *w = &D_800AF630;
    RECT r;
    if (func_800167F0(4)) {
        switch (D_800EC894) {
        case 0:
            w->field_A3B6 = 1;
            w->field_A3B8 = 2;
            break;
        case 1:
            w->field_A3B6 = 1;
            w->field_A3B8 = 0;
            break;
        case 2:
            w->field_A3B6 = 1;
            w->field_A3B8 = 1;
            break;
        case 4:
            w->field_A3B6 = 1;
            w->field_A3B8 = 4;
            break;
        }
        r.x = 0;
        r.y = 0;
        r.w = 0x140;
        r.h = 0x1E0;
        ClearImage(&r, 0, 0, 0);
    }
    func_800D0D6C();
}

void func_800D05B4(void) {
    register struct_A444 *w = &D_800AF630;
    s32 unused[4];
    func_8001C044();
    func_80015310();
    w->field_A3E1 = 0;
    D_800EC890 = 0;
    D_800EC8A0 = 1;
    func_800183E0(D_800D4E6C);
    func_800183E0(D_800D52BC);
    D_800EC894 = 0;
    D_800EC88C = -1;
    w->field_A3B8 = 0;
    func_800118AC();
}

void func_800D0664(void) {
    register struct_A444 *w = &D_800AF630;
    s32 unused;
    func_80015310();
    func_800183E0(D_800D93FC);
    func_800118AC();
}

void func_800D06BC(void) {
    register struct_A444 *w = &D_800AF630;
    func_800D12D0();
    D_800EC890 += 4;
    if (D_800EC890 >= 0x80) {
        D_800EC890 = 0x80;
        func_800118AC();
    }
}

extern u16 D_800EC888;
/* a DR_TPAGE word and a SPRT in one packet */
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
extern struct_18 D_800EC8B4;
extern struct_18 D_800EC8CC;
extern struct_18 D_800EC944;
extern struct_18 D_800EC98C;

void func_800D0740(void) {
    register struct_A444 *w = &D_800AF630;
    s32 moved;
    func_800D12D0();
    D_800EC888 = func_800149E0(0);
    moved = 0;
    if (D_800EC888 & 0x4000) {
        func_8002D4C8(0x9C1, 0);
        moved = 1;
        D_800EC894++;
        if (D_800EC894 >= 3) {
            D_800EC894 = 0;
        }
    } else if (D_800EC888 & 0x1000) {
        func_8002D4C8(0x9C1, 0);
        moved = 1;
        D_800EC894--;
        if (D_800EC894 < 0) {
            D_800EC894 = 2;
        }
    }
    D_800EC898 = 0;
    switch (D_800EC894) {
    case 0:
        if (D_800EC888 & 0x800) {
            func_8002D4C8(0x9C0, 0);
            func_800167B8(4);
            func_800118AC();
        }
        break;
    case 1:
    case 2:
        if (D_800EC888 & 0x800) {
            func_8002D4C8(0x9C0, 0);
            func_800167B8(4);
            func_800118AC();
        }
        break;
    }
    if (D_800EC88C > 0) {
        if (--D_800EC88C == 0) {
            func_800167B8(4);
            D_800EC894 = 4;
            func_800118AC();
        }
    }
}

void func_800D09A0(void) {
    register struct_A444 *w = &D_800AF630;
    func_800D12D0();
    D_800EC898++;
    if (D_800EC898 & 4) {
        func_800D1D14(D_800EC894, 1);
    } else {
        func_800D1D14(D_800EC894, 0);
    }
    if (D_800EC898 >= 0x21) {
        func_800118AC();
    }
}

void func_800D0A7C(void) {
    register struct_A444 *w = &D_800AF630;
    D_800EC890 -= 4;
    if (D_800EC890 < 0) {
        D_800EC890 = 0;
        func_800146B0(1);
        w->field_A3E8 = 2;
        func_800118AC();
    } else {
        func_800D12D0();
    }
}

void func_800D0B1C(void) {
    register struct_A444 *w = &D_800AF630;
    func_800183E0(D_800D4E6C);
    switch (D_800EC894) {
    case 0:
        w->field_A3B6 = 1;
        w->field_A3B8 = 2;
        break;
    case 1:
        w->field_A3B6 = 1;
        w->field_A3B8 = 0;
        break;
    case 2:
        w->field_A3B6 = 1;
        w->field_A3B8 = 1;
        break;
    case 4:
        w->field_A3B6 = 1;
        w->field_A3B8 = 4;
        break;
    }
}

void func_800D0C50(void) {
    RECT r[2];
    u8 *q;
    u8 *p;
    p = (u8 *)(D_800EC894 * 0x4B220 + 0x80114014);
    q = (u8 *)(D_800EC894 * 0x4B220 + 0x80114220);
    r[0].x = 0;
    r[0].y = 0x1E0;
    r[0].w = 0x100;
    r[0].h = 1;
    r[1].x = 0x280;
    r[1].y = 0x10;
    r[1].w = 0x140;
    r[1].h = 0x1E0;
    LoadImage(&r[0], (u32 *)p);
    LoadImage(&r[1], (u32 *)q);
    func_80011928(3);
}

void func_800D0D6C(void) {
    register struct_A444 *w = &D_800AF630;
    setlen(&D_800EC8B4, 5);
    D_800EC8B4.field_4 = 0xE100010A;
    D_800EC8B4.field_B = 0x64;
    D_800EC8B4.field_A = 0x80;
    D_800EC8B4.field_9 = 0x80;
    D_800EC8B4.field_8 = 0x80;
    D_800EC8B4.field_C = -0xA0;
    D_800EC8B4.field_E = -0x78;
    D_800EC8B4.field_10 = 0;
    D_800EC8B4.field_11 = 0;
    D_800EC8B4.field_12 = 0x7800;
    D_800EC8B4.field_14 = 0x100;
    D_800EC8B4.field_16 = 0xF0;
    setlen(&D_800EC8CC, 5);
    D_800EC8CC.field_4 = 0xE100010E;
    D_800EC8CC.field_B = 0x64;
    D_800EC8CC.field_A = 0x80;
    D_800EC8CC.field_9 = 0x80;
    D_800EC8CC.field_8 = 0x80;
    D_800EC8CC.field_C = 0x60;
    D_800EC8CC.field_E = -0x78;
    D_800EC8CC.field_10 = 0;
    D_800EC8CC.field_11 = 0;
    D_800EC8CC.field_12 = 0x7800;
    D_800EC8CC.field_14 = 0x40;
    D_800EC8CC.field_16 = 0xF0;
    setlen(&D_800EC944, 5);
    D_800EC944.field_4 = 0xE100000F;
    D_800EC944.field_B = 0x64;
    D_800EC944.field_A = 0x80;
    D_800EC944.field_9 = 0x80;
    D_800EC944.field_8 = 0x80;
    D_800EC944.field_C = -0x50;
    D_800EC944.field_E = 0x20;
    D_800EC944.field_10 = 0;
    D_800EC944.field_11 = 0;
    D_800EC944.field_12 = 0x7800;
    D_800EC944.field_14 = 0x78;
    D_800EC944.field_16 = 0x3C;
    D_800EC944.field_12 = 0x7A00;
    addPrim(D_800AA60C[w->field_A3D2], &D_800EC944);
    setlen(&D_800EC98C, 5);
    D_800EC98C.field_4 = 0xE100000F;
    D_800EC98C.field_B = 0x64;
    D_800EC98C.field_A = 0x80;
    D_800EC98C.field_9 = 0x80;
    D_800EC98C.field_8 = 0x80;
    D_800EC98C.field_C = -0x6E;
    D_800EC98C.field_E = D_800EC894 * 20 + 0x20;
    D_800EC98C.field_10 = 0;
    D_800EC98C.field_11 = 0x3C;
    D_800EC98C.field_12 = 0x7800;
    D_800EC98C.field_14 = 0x1E;
    D_800EC98C.field_16 = 0x14;
    D_800EC98C.field_12 = 0x7A00;
    addPrim(D_800AA60C[w->field_A3D2], &D_800EC98C);
    addPrim(D_800AA60C[w->field_A3D2], &D_800EC8CC);
    addPrim(D_800AA60C[w->field_A3D2], &D_800EC8B4);
}

extern struct_18 D_800EC8E4;
extern struct_18 D_800EC8FC;
extern struct_18 D_800EC914;
extern struct_18 D_800EC92C;

void func_800D12D0(void) {
    register struct_A444 *w = &D_800AF630;
    setlen(&D_800EC8B4, 5);
    D_800EC8B4.field_4 = 0xE100008A;
    D_800EC8B4.field_B = 0x64;
    D_800EC8B4.field_8 = D_800EC8B4.field_9 = D_800EC8B4.field_A = D_800EC890;
    D_800EC8B4.field_C = -0x140;
    D_800EC8B4.field_E = -0xF0;
    D_800EC8B4.field_10 = 0;
    D_800EC8B4.field_11 = 0x10;
    D_800EC8B4.field_12 = 0x7800;
    D_800EC8B4.field_14 = 0x100;
    D_800EC8B4.field_16 = 0xF0;
    setlen(&D_800EC8CC, 5);
    D_800EC8CC.field_4 = 0xE100008C;
    D_800EC8CC.field_B = 0x64;
    D_800EC8CC.field_8 = D_800EC8CC.field_9 = D_800EC8CC.field_A = D_800EC890;
    D_800EC8CC.field_C = -0x40;
    D_800EC8CC.field_E = -0xF0;
    D_800EC8CC.field_10 = 0;
    D_800EC8CC.field_11 = 0x10;
    D_800EC8CC.field_12 = 0x7800;
    D_800EC8CC.field_14 = 0x100;
    D_800EC8CC.field_16 = 0xF0;
    setlen(&D_800EC8E4, 5);
    D_800EC8E4.field_4 = 0xE100008E;
    D_800EC8E4.field_B = 0x64;
    D_800EC8E4.field_8 = D_800EC8E4.field_9 = D_800EC8E4.field_A = D_800EC890;
    D_800EC8E4.field_C = 0xC0;
    D_800EC8E4.field_E = -0xF0;
    D_800EC8E4.field_10 = 0;
    D_800EC8E4.field_11 = 0x10;
    D_800EC8E4.field_12 = 0x7800;
    D_800EC8E4.field_14 = 0x80;
    D_800EC8E4.field_16 = 0xF0;
    setlen(&D_800EC8FC, 5);
    D_800EC8FC.field_4 = 0xE100009A;
    D_800EC8FC.field_B = 0x64;
    D_800EC8FC.field_8 = D_800EC8FC.field_9 = D_800EC8FC.field_A = D_800EC890;
    D_800EC8FC.field_C = -0x140;
    D_800EC8FC.field_E = 0;
    D_800EC8FC.field_10 = 0;
    D_800EC8FC.field_11 = 0;
    D_800EC8FC.field_12 = 0x7800;
    D_800EC8FC.field_14 = 0x100;
    D_800EC8FC.field_16 = 0xF0;
    setlen(&D_800EC914, 5);
    D_800EC914.field_4 = 0xE100009C;
    D_800EC914.field_B = 0x64;
    D_800EC914.field_8 = D_800EC914.field_9 = D_800EC914.field_A = D_800EC890;
    D_800EC914.field_C = -0x40;
    D_800EC914.field_E = 0;
    D_800EC914.field_10 = 0;
    D_800EC914.field_11 = 0;
    D_800EC914.field_12 = 0x7800;
    D_800EC914.field_14 = 0x100;
    D_800EC914.field_16 = 0xF0;
    setlen(&D_800EC92C, 5);
    D_800EC92C.field_4 = 0xE100009E;
    D_800EC92C.field_B = 0x64;
    D_800EC92C.field_8 = D_800EC92C.field_9 = D_800EC92C.field_A = D_800EC890;
    D_800EC92C.field_C = 0xC0;
    D_800EC92C.field_E = 0;
    D_800EC92C.field_10 = 0;
    D_800EC92C.field_11 = 0;
    D_800EC92C.field_12 = 0x7800;
    D_800EC92C.field_14 = 0x80;
    D_800EC92C.field_16 = 0xF0;
    setlen(&D_800EC944, 5);
    D_800EC944.field_4 = 0xE100000F;
    D_800EC944.field_B = 0x64;
    D_800EC944.field_8 = D_800EC944.field_9 = D_800EC944.field_A = D_800EC890;
    D_800EC944.field_C = -0xA0;
    D_800EC944.field_E = 0x64;
    D_800EC944.field_10 = 0;
    D_800EC944.field_11 = 0;
    D_800EC944.field_12 = 0x7800;
    D_800EC944.field_14 = 0x78;
    D_800EC944.field_16 = 0x3C;
    D_800EC944.field_12 = 0x7A00;
    addPrim(D_800AA60C[w->field_A3D2], &D_800EC944);
    setlen(&D_800EC98C, 5);
    D_800EC98C.field_4 = 0xE100000F;
    D_800EC98C.field_B = 0x64;
    D_800EC98C.field_8 = D_800EC98C.field_9 = D_800EC98C.field_A = D_800EC890;
    D_800EC98C.field_C = -0xBE;
    D_800EC98C.field_E = D_800EC894 * 20 + 0x64;
    D_800EC98C.field_10 = 0;
    D_800EC98C.field_11 = 0x3C;
    D_800EC98C.field_12 = 0x7800;
    D_800EC98C.field_14 = 0x1E;
    D_800EC98C.field_16 = 0x14;
    D_800EC98C.field_12 = 0x7A00;
    addPrim(D_800AA60C[w->field_A3D2], &D_800EC98C);
    addPrim(D_800AA60C[w->field_A3D2], &D_800EC92C);
    addPrim(D_800AA60C[w->field_A3D2], &D_800EC914);
    addPrim(D_800AA60C[w->field_A3D2], &D_800EC8FC);
    addPrim(D_800AA60C[w->field_A3D2], &D_800EC8E4);
    addPrim(D_800AA60C[w->field_A3D2], &D_800EC8CC);
    addPrim(D_800AA60C[w->field_A3D2], &D_800EC8B4);
}

void func_800D1D14(s32 a, s32 b) {
    if (b == 0) {
        func_8001534C(((struct_4_2 *)D_800D3630)[a].field_0, (s32)D_800D3618, 0, 0, 0, 0);
    } else {
        func_8001534C(((struct_4_2 *)D_800D3630)[a].field_0, (s32)((u8 **)D_800D3624)[a], 0x50, ((u8 *)D_800D3620)[a], 0, 0);
    }
}
