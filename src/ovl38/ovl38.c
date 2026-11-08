/*
 * Overlay 0x38: the Sony licence screen, the first overlay run after boot.
 * Loaded to 0x800CEDF8 from MAIN.CD entry 1; the u32 overlay ID precedes this
 * code, so the step dispatcher below sits at 0x800CEDFC.
 */
#include "common.h"
#include "psyq.h"
#include "work.h"

/* A sprite with its own texture-page command (6 words) */
typedef struct {
    /* 0x00 */ u32 field_0;
    /* 0x04 */ u32 field_4;
    /* 0x08 */ u8 field_8, field_9, field_A, field_B;
    /* 0x0C */ s16 field_C, field_E;
    /* 0x10 */ u8 field_10, field_11;
    /* 0x12 */ u16 field_12;
    /* 0x14 */ s16 field_14, field_16;
} struct_18; /* size 0x18 */

extern u32 D_800A6610[2][0x1000];
extern s32 D_800AE840[];
/* Parameters for an archive read (func_8001ABBC / func_80019A24) */
typedef struct {
    /* 0x0 */ s32 field_0;
    /* 0x4 */ u8 *field_4;
} struct_8_4;

extern struct_8_4 D_800C7C60;
extern u8 D_800A2E20[];

extern struct_18 D_800CF3F0[2];
extern struct_18 D_800CF420[2];
extern void (*D_800CF450[8])(void);
extern u8 D_800D3ABC[];
extern struct_18 D_800D3AEC[2];
extern struct_18 D_800D3B1C[2];
extern s32 D_800D3C0C;
extern s32 D_800D3C10;


extern void func_800116E0(void);
extern void func_800118AC(void);
extern void func_80011928(s32 arg0);
extern void func_800146B0(s32 arg0);
extern s32 func_800149E0(s32 arg0);
extern void func_80015310(void);
extern void func_800167B8(s32 arg0);
extern s32 func_800167F0(s32 arg0);
extern void func_800183E0(void *arg0);
extern s32 func_8001ABBC(s32 arg0, s32 arg1, s32 *arg2, s32 arg3, struct_8_4 *arg4);
extern s32 func_8001BFE8(void);
extern void func_8001BFF8(void);
extern void func_8001C044(void);

void func_800CF114(void);
void func_800CF180(void);
void func_800CF290(void);

/* Overlay main (0x800CEDFC): run the current step of the licence screen */
void func_800CEDFC(void)
{
    if (WORK->field_A3B4 < 8) {
        PS1_FN(D_800CF450[WORK->field_A3B4])();
    }
}

/* Step 0: reset display state, decide whether to skip straight to the next mode */
void func_800CEE40(void)
{
    WORK->field_A3E1 = 1;
    func_8001C044();
    func_80015310();
    func_800146B0(7);
    SetDispMask(0);
    VSync(0);
    SetDispMask(1);
    WORK->field_A3E8 = 0;
    func_800167B8(0);
    func_800183E0(D_800D3ABC);
    D_800D3C0C = 0;
    D_800D3C10 = 0;
    func_800116E0();
    WORK->field_A3B8 = 0;
    if (func_8001BFE8() != 0) {
        func_80011928(3);
        return;
    }
    func_8001BFF8();
    func_800118AC();
}

/* Step 1: fade the licence image in */
void func_800CEF04(void)
{
    D_800D3C10 += 16;
    if (D_800D3C10 >= 0x80) {
        D_800D3C10 = 0x80;
        func_800118AC();
    }
    func_800CF290();
}

/* Step 2: hold the licence image for 0x105 frames */
void func_800CEF54(void)
{
    func_800CF290();
    if (++WORK->field_A3BE >= 0x105) {
        func_800118AC();
    }
}

/* Step 3: fade the licence image out */
void func_800CEFA8(void)
{
    D_800D3C10 -= 4;
    if (D_800D3C10 <= 0) {
        D_800D3C10 = 0;
        func_800118AC();
    }
    func_800CF290();
}

/* Step 4: wait for the screen fade, preloading the next data */
void func_800CEFF4(void)
{
    func_800CF180();
    func_800CF114();
    if (func_800167F0(0) & 0xFFFF) {
        func_800118AC();
    }
}

/* Step 5: wait for the preload and a timeout or button press */
void func_800CF038(void)
{
    s32 pad;

    func_800CF180();
    func_800CF114();
    WORK->field_A3B8++;
    pad = func_800149E0(0);
    if (D_800D3C0C != 0 && (WORK->field_A3B8 >= 0x81 || (pad & 0x840))) {
        func_800167B8(4);
        func_800118AC();
    }
}

/* Step 6: wait for the fade to finish, then hand over to the next mode */
void func_800CF0C4(void)
{
    func_800CF180();
    if (func_800167F0(4) & 0xFFFF) {
        WORK->field_A3B6 = 1;
        func_800146B0(1);
        WORK->field_A3E8 = 2;
    }
}

/* Start the background read of MAIN.CD entry 2 once */
void func_800CF114(void)
{
    if (D_800D3C0C == 0) {
        D_800C7C60.field_0 = 0;
        D_800C7C60.field_4 = D_800A2E20;
        if (func_8001ABBC(0, 0, D_800AE840, 0, &D_800C7C60) != 0) {
            D_800D3C0C = 1;
        }
    }
}

/* Link the SQUARESOFT logo's two sprites into this frame's ordering table (shown in steps 4 to 6) */
void func_800CF180(void)
{
    addPrim(&D_800A6610[WORK->field_A3D2][0xFFF], &D_800CF3F0[WORK->field_A3D2]);
    addPrim(&D_800A6610[WORK->field_A3D2][0xFFF], &D_800CF420[WORK->field_A3D2]);
}

/* Steps 1 to 3: build the licence image's two sprites (texture page, colour = the fade level) and link them into
 * the last entry of this frame's ordering table */
void func_800CF290(void)
{
    struct_18 *p;
    struct_18 *q;
    u32 *t; /* the texture-page word, written through its own pointer (as the original) */
    u32 *u;
    s32 f = WORK->field_A3D2;

    p = &D_800D3AEC[f];
    t = &D_800D3AEC[f].field_4;
    setlen(p, 5);
    *t = 0xE100008A;
    p->field_B = 0x64;
    p->field_8 = p->field_9 = p->field_A = D_800D3C10;
    p->field_12 = 0x7840;
    p->field_C = -0x100;
    p->field_E = -0x1C;
    p->field_10 = 0;
    p->field_11 = 0x38;
    p->field_14 = 0x100;
    p->field_16 = 0x60;
    q = &D_800D3B1C[f];
    u = &D_800D3B1C[f].field_4;
    setlen(q, 5);
    *u = 0xE100008C;
    q->field_B = 0x64;
    q->field_8 = q->field_9 = q->field_A = D_800D3C10;
    q->field_12 = 0x7840;
    q->field_C = 0;
    q->field_E = -0x1C;
    q->field_10 = 0;
    q->field_11 = 0x38;
    q->field_14 = 0x100;
    q->field_16 = 0x60;
    addPrim(&D_800A6610[f][0xFFF], q);
    addPrim(&D_800A6610[f][0xFFF], p);
}
