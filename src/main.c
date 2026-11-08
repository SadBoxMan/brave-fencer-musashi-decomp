#include "common.h"
#include "psyq.h"
#include "work.h"

typedef struct {
    /* 0x00 */ u32 *field_0;
    /* 0x04 */ u8 field_4[8];
    /* 0x0C */ u32 *field_C;
    /* 0x10 */ u8 field_10[4];
} struct_14_2; /* size 0x14 */

extern u8 D_800BA118[];
extern s32 D_80074778;
extern s32 D_800A2B7C;
extern s32 D_800C7C70;
extern s16 D_800C7C74;
extern u8 D_8007BA70[2][0x13880];
extern u8 *D_800A5E60;
extern u8 D_800A4F48[2][0x640];
extern struct_14_2 D_800A651C[2];
extern u32 D_800A6610[2][0x1000];
extern struct_14_2 D_800AE7BC[2];
extern u32 D_800BA0D8[2][4];

extern void func_800141F0(void);
extern void func_80018918(void);
extern void func_8002C8F4(void);
extern void func_8001971C(void);
extern void func_80014238(void);
extern void func_80014390(void);
extern void func_800191A8(void);
extern void func_800189A8(void);
extern void func_80015208(void);
extern void func_80010B40(void);
extern void func_80015498(void);
extern void func_8001C00C(void);
extern void func_800D25FC(void);
extern void func_800184F0(void);
extern void func_8003500C(void);
extern void func_8002D034(void);
extern void func_8001AF34(void);
extern void func_8001513C(void);

extern s32 D_80074788;
extern u16 D_80074794;
extern u16 D_80074798;
extern s32 D_800629D0;
extern s32 D_800AE810[];

extern int DrawSyncCallback(void (*func)(void));
extern void func_8001096C(void);
void func_8001099C(void);
void func_80010A98(void);


/*
 * Boot: hardware/CD/memory card init, then the frame loop. Each frame flips
 * the double buffers, clears the ordering tables, runs the update on the
 * scratchpad stack (func_800D25FC lives in a MAIN.CD overlay), then waits
 * for vsync and draws. w->exitLoop drops out to the outer loop, which
 * re-runs the per-mode setup.
 */
int main(void)
{
    register u8 *unused_s0 = D_800BA118;
    register struct_A444 *w = &D_800AF630;
    s32 unused[6];

    SetVideoMode(0);
    D_80074778 = 0x3E0;
    func_800141F0();
    MemCardInit(0);
    MemCardStart();
    func_80018918();
    D_800A2B7C = CdInit();
    func_8002C8F4();
    func_8001971C();

    while (1) {
        func_80014238();
        func_80014390();
        func_800191A8();
        func_80010A98();

        while (!w->field_A3D4) {
            D_800C7C70++;
            D_800C7C70 = D_800C7C70 ? D_800C7C70 : 1;
            D_800C7C74 = !D_800C7C74;
            w->field_A3D2 = D_800C7C74;

            D_800A5E60 = D_8007BA70[w->field_A3D2];
            w->field_0[w->field_A3D2].field_8 = D_800A4F48[w->field_A3D2];
            w->field_0[w->field_A3D2].field_0 = 0x640;
            w->field_0[w->field_A3D2].field_4 = 0;

            func_800189A8();
            func_80015208();

            if (!w->field_A3E3) {
                w->field_A3A8++;
                w->field_A3AC += w->field_A3A8;
                D_800A651C[w->field_A3D2].field_0 = D_800A6610[w->field_A3D2];
                D_800A651C[w->field_A3D2].field_C = &D_800A6610[w->field_A3D2][0xFFF];
                ClearOTagR(D_800A651C[w->field_A3D2].field_0, 0x1000);
                D_800AE7BC[w->field_A3D2].field_0 = D_800BA0D8[w->field_A3D2];
                D_800AE7BC[w->field_A3D2].field_C = &D_800BA0D8[w->field_A3D2][3];
                ClearOTagR(D_800AE7BC[w->field_A3D2].field_0, 4);
                func_80010B40();
                SetSpadStack();
                func_80015498();
                ResetSpadStack();
                SetSpadStack();
                func_8001C00C();
                ResetSpadStack();
            } else {
                D_800AE7BC[w->field_A3D2].field_0 = D_800BA0D8[w->field_A3D2];
                D_800AE7BC[w->field_A3D2].field_C = &D_800BA0D8[w->field_A3D2][3];
                ClearOTagR(D_800AE7BC[w->field_A3D2].field_0, 4);
                SetSpadStack();
                func_800D25FC();
                ResetSpadStack();
            }

            func_800184F0();
            DrawSync(0);
            VSync(w->field_A3E8);

            w->field_188 = w->field_18A;
            w->field_18A++;
            if (w->field_18A >= 2) {
                w->field_18A = 0;
            }
            PutDispEnv(&w->field_14C[w->field_188]);
            PutDrawEnv(&w->field_38[w->field_18A]);
            CatPrim(D_800A651C[w->field_A3D2].field_0 + 0xFFC, &D_800A651C[w->field_A3D2].field_0[D_80074778]);
            DrawOTag(D_800A651C[w->field_A3D2].field_0 + 0xFFF);
            DrawOTag(D_800AE7BC[w->field_A3D2].field_0 + 3);

            func_8003500C();
            func_8002D034();
            func_8001AF34();
            func_8001513C();
        }
        VSyncCallback(0);
    }
}

extern void func_80011778(void);
extern void func_80011818(u16 n);
extern void func_80011B7C(u16 n);
extern void func_800CEDFC(void);

extern u8 D_800AE888[];
extern s32 D_80072C70;
extern s32 D_80074780;
extern void func_8001C044(void);
extern void func_80015310(void);
extern void func_80010AE0(s32 n);
extern void func_8001A9F8(s32 n);
extern s32 func_80019A24(u8 *p, s32 a, s32 b, s32 c);

extern void func_8002D4C8(s32 a, s32 b);

extern void (*D_800629F4[])(void);
extern u8 D_800AE838[];
extern s32 D_80074784;

extern s32 D_80074790;

extern u8 D_800AE870[];

extern s16 D_801150D4;
extern void func_80029690(void);
extern void func_80018FC8(void);
extern void func_8001903C(void);
extern void func_80029274(void);
extern void func_8002941C(void);
extern void func_8002CDD8(void);
extern void func_800CEE74(void);
extern u16 func_80014B10(s32 port);
extern u16 func_800149E0(u8 port);
extern void func_800CEEC8();
extern void func_80029514(s32 a);
extern s32 D_800629C8;
extern u8 D_80078E78[];
extern void func_80014338(void);
extern u8 D_800AE880[];
extern u8 D_800AE848[];
extern s32 D_800C7C60;
extern u8 *D_800C7C64;
extern u8 D_800A2E20[];
extern s16 D_800B99DA;

/* VSync callback: run the sound driver's per-vblank tick */
void func_8001096C(void) {
    func_8002CDD8();
}

/* DrawSync callback: records the VSync counter for the current frame */
void func_8001099C(void)
{
    register struct_A444 *w = &D_800AF630;

    D_800AE810[w->field_A3D2] = VSync(1);
}

/* Take size bytes (rounded up to 4) from this frame's primitive packet buffer */
u8 *func_80010A08(s32 size) {
    register struct_A444 *w = &D_800AF630;
    u8 *prim;
    s32 words;
    words = (size + 3) / 4;
    prim = D_800A5E60;
    D_800A5E60 += words << 2;
    return prim;
}

/* Install the frame-timing callbacks */
void func_80010A98(void)
{
    DrawSyncCallback(func_8001099C);
    VSyncCallback(func_8001096C);
}

/* Set the farthest ordering-table entry drawn (main links OT entry 0xFFC straight to it) */
void func_80010AE0(s32 depth) {
    D_80074778 = depth;
}

/* Return the ordering-table depth limit set by SetOtDepthLimit */
s32 func_80010B10(void) {
    return D_80074778;
}

/* Call the handler for the current game mode from the mode table */
void func_80010B40(void) {
    register struct_A444 *w = &D_800AF630;
    register void (*handler)(void);
    handler = PS1_FN(D_800629F4[w->field_A3AE]);
    handler();
}

/* Mode 0: reset the game state at boot (records, CD files, demo index, OT depth), then mode 1 */
void func_80010BB4(void) {
    register struct_A444 *w = &D_800AF630;
    w->field_A3E0 = 0;
    w->field_A3E1 = 1;
    w->field_A434 = 0;
    func_8001C044();
    func_80015310();
    func_80029690();
    D_801150D4 = 0;
    D_80074784 = 0;
    func_80018FC8();
    func_8001903C();
    func_80029274();
    func_8002941C();
    func_80010AE0(0x3E0);
    func_80011B7C(0);
    func_80011778();
}

/* Mode 1: load the licence screen overlay (MAIN.CD entry 1, ovl38), then mode 2 */
void func_80010C7C(void) {
    s32 done;
    done = func_80019A24(D_800AE838, D_80072C70, 0, 0);
    if (done != 0) {
        func_80010AE0(0x3E0);
        func_80011778();
    }
}

/* Mode 2: run the licence screen each frame; when it sets done, free records and go to mode 3 */
void func_80010CEC(void) {
    register struct_A444 *w = &D_800AF630;
    func_800CEDFC();
    if (w->field_A3B6 != 0) {
        func_8001C044();
        func_80015310();
        func_80011818(3);
    }
}

/* Mode 3: after the licence screen, reset the 2D OT depth and go to the title load (mode 5) */
void func_80010D60(void) {
    func_80010AE0(0x3E0);
    func_80011818(5);
}

/* Mode 4: unused slot that only advances to mode 5 */
void func_80010DA0(void) {
    register struct_A444 *w = &D_800AF630;
    func_80011778();
}

/* Return to the title: SetMode(5), which reloads the title overlay */
void func_80010DE0(void) {
    func_80011818(5);
}

/* Go to the trial version's end screen: SetMode(13), which loads MAIN.CD entry 8 (ovl3b) */
void func_80010E14(void) {
    func_80011818(0xD);
}

/* Switch to the empty mode 12 (nothing runs); no callers found */
void func_80010E48(void) {
    func_80011818(0xC);
}

/* Send sound command 2 and set Work.exitLoop so main() leaves its frame loop; no callers found */
void func_80010E7C(void) {
    register struct_A444 *w = &D_800AF630;
    func_8002D4C8(2, 0);
    w->field_A3D4 = 1;
}

/* Mode 5: load the title overlay (MAIN.CD entry 3, ovl39) with sound bank 0x57, reset progress and sound, then mode 6 */
void func_80010ED4(void) {
    D_800C7C60 = 0x57;
    D_800C7C64 = D_800A2E20;
    if (func_80019A24(D_800AE848, D_80072C70, 0, (s32)&D_800C7C60) != 0) {
        func_8002D4C8(2, 0);
        func_80010AE0(0x3E0);
        func_80014338();
        func_800116E0();
        D_800B99DA = 0;
        func_80011778();
    }
}

/* Mode 6: run the title; on its choice start a new game, Continue (field state 11) or a demo */
void func_80010F80(void) {
    register struct_A444 *w = &D_800AF630;
    u8 *p = D_80078E78;
    func_800CEEC8();
    if (w->field_A3B6 != 0) {
        func_80011B7C(0);
        func_8001C044();
        func_80015310();
        if (w->field_A3B8 == 4) {
            w->field_A434 = 1;
            func_80011818(0xF);
        } else if (w->field_A3B8 < 2) {
            w->field_A3D8 = 0x3005;
            w->field_A3DA = 0x3000;
            func_80029514(D_800629C8);
            if (w->field_A3B8 == 1) {
                func_80011818(0xA);
                func_80011B7C(0xB);
            } else {
                func_80011818(0xA);
            }
        }
    }
}

/* Modes 10 and 15: load the field overlay (MAIN.CD entry 10, ovl36), then the next mode */
void func_800110CC(void) {
    s32 pad0;
    func_8001A9F8(0);
    if (func_80019A24(D_800AE880, D_80072C70, 0, 0) != 0) {
        func_80010AE0(0x3E0);
        func_80011778();
        func_80015310();
    }
}

/* Mode 7: load the developer debug menu overlay (MAIN.CD entry 11, ovl37), then mode 8 */
void func_80011144(void) {
    s32 pad0;
    s32 pad1;
    func_8001A9F8(0);
    if (func_80019A24(D_800AE888, D_80072C70, 0, 0) != 0) {
        func_80010AE0(0x3E0);
        func_80011778();
        func_80015310();
    }
}

/* Mode 8: run the debug menu; when it sets done, load the field (mode 10) */
void func_800111BC(void) {
    register struct_A444 *w = &D_800AF630;
    func_800CEE74();
    if (w->field_A3B6 != 0) {
        func_80011818(0xA);
    }
}

/* Mode 9: advance to mode 10 (field load) with the game state reset to 0 */
void func_80011220(void) {
    func_80011778();
    func_80011B7C(0);
}

/* Mode 11: run the field overlay each frame (normal play); clears the demo flag */
void func_8001125C(void) {
    register struct_A444 *w = &D_800AF630;
    w->field_A434 = 0;
    func_800CEDFC();
}

/* Mode 12: does nothing (where the trial version's end screen leaves the game) */
void func_800112A8(void) {
}

/* Mode 13: load the trial version's end screen (MAIN.CD entry 8, ovl3b), then mode 14 */
void func_800112C8(void) {
    if (func_80019A24(D_800AE870, D_80072C70, 0, 0) != 0) {
        func_80011778();
    }
}

/* Mode 14: run the trial end screen each frame (it sets mode 12 itself when done) */
void func_80011320(void) {
    func_800CEDFC();
}

/* Return the index of the next attract demo (0-4); no callers found */
s32 func_80011350(void) {
    return D_80074784;
}

extern u16 D_800629D4[];
extern u16 D_800629E8[];
extern s32 D_8007478C;
extern u16 D_800B99E8;
extern u8 D_800D3A68[];
extern void func_800295D4(void);
extern void func_80029664(void);
extern s32 func_80014CAC(u8 which, s32 mask);
extern void func_800D1724(u8 *p);
extern void srand(u32 seed);
void func_80011DCC(void);
void func_80011E24(void);
void func_800118AC(void);
void func_80011EB4(void);
void func_80011DA0(void);
typedef struct { u8 field_0[0x16]; u8 field_16; } struct_17;
extern struct_17 D_800AE6A8;

/* Mode 16: set up and run an attract demo (recorded pad stream) until it times out or is skipped */
void func_80011380(void) {
    register struct_A444 *w = &D_800AF630;
    struct_17 *mapState = &D_800AE6A8;
    switch (w->field_A3B4) {
    case 0:
        D_800B99E8 = 0;
        func_800295D4();
        if (D_80074784 >= 5) {
            D_80074784 = 0;
        }
        w->field_A3D8 = D_800629D4[D_80074784 * 2];
        w->field_A3DA = D_800629D4[D_80074784 * 2] & 0xF000;
        mapState->field_16 = D_800629D4[D_80074784 * 2 + 1];
        D_8007478C = D_800629E8[D_80074784];
        if (D_80074784 == 0) {
            func_80029664();
        }
        func_80011DCC();
        func_80011E24();
        srand(1);
        w->field_A434 = 1;
        w->field_A3E0 = 0;
        D_80074784++;
        func_8002D4C8(0x28, 0);
        func_80011B7C(0);
        func_800118AC();
        break;
    case 1:
        if (w->field_A3E0 != 0) {
            func_80011EB4();
        }
        func_800CEDFC();
        if (D_8007478C < (s16)++D_800B99E8 || ((s16)func_80014CAC(0, 0x840) != 0 && w->field_A3E0 != 0)) {
            func_80011DA0();
            func_800D1724(D_800D3A68);
            func_800118AC();
        }
        break;
    case 2:
        func_800CEDFC();
        break;
    }
}

/* Mode 17: after a demo, clear the demo flag, play sound 0x29 and reload the title (mode 5) */
void func_80011680(void) {
    register struct_A444 *w = &D_800AF630;
    w->field_A434 = 0;
    func_8002D4C8(0x29, 0);
    func_80011818(5);
}

/* Send the saved sound options (two volume levels and a mode flag) to the sound driver */
extern s32 func_80028FBC();
extern s32 func_80029000();
extern s32 func_80028D9C();

void func_800116E0(void) {
    func_8002D4C8(0x21, (u16)func_80028FBC());
    func_8002D4C8(0x22, (u16)func_80029000());
    if (func_80028D9C() == 0) {
        func_8002D4C8(0xC, 0);
    } else {
        func_8002D4C8(0xB, 0);
    }
}

/* Advance Work.mode by one and clear the mode's step, timer and scratch halfwords */
void func_80011778(void) {
    register u8 *w = (u8 *)&D_800AF630;
    (*(u16 *)(w + 0xA3AE))++;
    *(u16 *)(w + 0xA3B4) = 0;
    *(u16 *)(w + 0xA3BA) = 0;
    *(u16 *)(w + 0xA3B8) = 0;
    *(u16 *)(w + 0xA3BE) = 0;
    *(u16 *)(w + 0xA3B0) = 0;
    *(u16 *)(w + 0xA3B6) = 0;
    *(u16 *)(w + 0xA3BC) = 0;
}

/* Set Work.mode and clear the mode's step, timer and scratch halfwords */
void func_80011818(u16 mode) {
    register struct_A444 *w = &D_800AF630;
    w->field_A3AE = mode;
    w->field_A3B4 = 0;
    w->field_A3BA = 0;
    w->field_A3B8 = 0;
    w->field_A3BE = 0;
    w->field_A3B0 = 0;
    w->field_A3B6 = 0;
    w->field_A3BC = 0;
}

/* Advance Work.step and clear the step's done flag, sub-step and step timers */
void func_800118AC(void) {
    register u8 *w = (u8 *)&D_800AF630;
    (*(u16 *)(w + 0xA3B4))++;
    *(u16 *)(w + 0xA3BA) = 0;
    *(u16 *)(w + 0xA3BE) = 0;
    *(u16 *)(w + 0xA3B6) = 0;
    *(u16 *)(w + 0xA3BC) = 0;
}

/* Set Work.step and clear the step's done flag, sub-step and step timers */
void func_80011928(u16 step) {
    register struct_A444 *w = &D_800AF630;
    w->field_A3B4 = step;
    w->field_A3BA = 0;
    w->field_A3BE = 0;
    w->field_A3B6 = 0;
    w->field_A3BC = 0;
}

/* Advance the mode's sub-step (Work+0xA3BA) and clear its scratch halfword */
void func_80011998(void) {
    register u8 *w = (u8 *)&D_800AF630;
    (*(u16 *)(w + 0xA3BA))++;
    *(u16 *)(w + 0xA3BC) = 0;
}

/* Set the mode's sub-step (Work+0xA3BA) and clear its scratch halfword */
void func_800119F0(u16 subStep) {
    register struct_A444 *w = &D_800AF630;
    w->field_A3BA = subStep;
    w->field_A3BC = 0;
}

/* Advance the game state (Work+0xA3C0) and clear its step, sub-step and scratch halfwords */
void func_80011A3C(void) {
    register u8 *w = (u8 *)&D_800AF630;
    (*(u16 *)(w + 0xA3C0))++;
    *(u16 *)(w + 0xA3C6) = 0;
    *(u16 *)(w + 0xA3CC) = 0;
    *(u16 *)(w + 0xA3CA) = 0;
    *(u16 *)(w + 0xA3D0) = 0;
    *(u16 *)(w + 0xA3C2) = 0;
    *(u16 *)(w + 0xA3C8) = 0;
    *(u16 *)(w + 0xA3CE) = 0;
}

/* Step the game state (Work+0xA3C0) back by one and clear its step and scratch halfwords */
void func_80011ADC(void) {
    register u8 *w = (u8 *)&D_800AF630;
    (*(u16 *)(w + 0xA3C0))--;
    *(u16 *)(w + 0xA3C6) = 0;
    *(u16 *)(w + 0xA3CC) = 0;
    *(u16 *)(w + 0xA3CA) = 0;
    *(u16 *)(w + 0xA3D0) = 0;
    *(u16 *)(w + 0xA3C2) = 0;
    *(u16 *)(w + 0xA3C8) = 0;
    *(u16 *)(w + 0xA3CE) = 0;
}

/* Set the game state (Work+0xA3C0) read by the field overlay and clear its step and scratch */
void func_80011B7C(u16 state) {
    register struct_A444 *w = &D_800AF630;
    w->field_A3C0 = state;
    w->field_A3C6 = 0;
    w->field_A3CC = 0;
    w->field_A3CA = 0;
    w->field_A3D0 = 0;
    w->field_A3C2 = 0;
    w->field_A3C8 = 0;
    w->field_A3CE = 0;
}

/* Advance the game state's step (Work+0xA3C6) and clear its sub-step and step scratch */
void func_80011C10(void) {
    register u8 *w = (u8 *)&D_800AF630;
    (*(u16 *)(w + 0xA3C6))++;
    *(u16 *)(w + 0xA3CC) = 0;
    *(u16 *)(w + 0xA3D0) = 0;
    *(u16 *)(w + 0xA3C8) = 0;
    *(u16 *)(w + 0xA3CE) = 0;
}

/* Set the game state's step (Work+0xA3C6) and clear its sub-step and step scratch */
void func_80011C8C(u16 step) {
    register struct_A444 *w = &D_800AF630;
    w->field_A3C6 = step;
    w->field_A3CC = 0;
    w->field_A3D0 = 0;
    w->field_A3C8 = 0;
    w->field_A3CE = 0;
}

/* Advance the game state's sub-step (Work+0xA3CC) and clear its scratch halfword */
void func_80011CFC(void) {
    register u8 *w = (u8 *)&D_800AF630;
    (*(u16 *)(w + 0xA3CC))++;
    *(u16 *)(w + 0xA3CE) = 0;
}

/* Set the game state's sub-step (Work+0xA3CC) and clear its scratch halfword */
void func_80011D54(u16 subStep) {
    register u8 *w = (u8 *)&D_800AF630;
    *(u16 *)(w + 0xA3CC) = subStep;
    *(u16 *)(w + 0xA3CE) = 0;
}

/* Ask the field to end the running attract demo */
void func_80011DA0(void) {
    D_80074780 = 1;
}

/* Clear the demo end request */
void func_80011DCC(void) {
    D_80074780 = 0;
}

/* Return nonzero when the attract demo has been asked to end */
s32 func_80011DF4(void) {
    return D_80074780;
}

/* Reset the demo stream position and pad words; in record mode clear the demo flag */
void func_80011E24(void)
{
    register struct_A444 *w = &D_800AF630;
    s32 unused; /* pads the frame to 0x10 like the original */

    D_80074788 = 0;
    if (D_800629D0 == 0) {
        w->field_A434 = 0;
    }
    D_80074794 = 0;
    D_80074798 = 0;
}

/* Set the pointer to the stage's recorded demo pad stream */
void func_80011E84(s32 stream) {
    D_80074790 = stream;
}

/* Per demo frame: record the live pad, or read this frame's held/pressed words from the stream */
void func_80011EB4(void) {
    u16 word;
    switch (D_800629D0) {
    case 0:
        word = func_80014B10(0);
        ((u16 *)0x80700000)[D_80074788] = word;
        D_80074788++;
        word = func_800149E0(0);
        ((u16 *)0x80700000)[D_80074788] = word;
        D_80074788++;
        break;
    case 1:
        if (D_80074790 != 0) {
            D_80074794 = ((u16 *)D_80074790)[D_80074788++];
            D_80074798 = ((u16 *)D_80074790)[D_80074788++];
        } else {
            D_80074794 = 0;
            D_80074798 = 0;
        }
        break;
    case 2:
        D_80074794 = ((u16 *)0x80700000)[D_80074788++];
        D_80074798 = ((u16 *)0x80700000)[D_80074788++];
        break;
    }
}

/* Return this demo frame's held and pressed pad words */
void func_800120DC(u16 *held, u16 *pressed) {
    *held = D_80074794;
    *pressed = D_80074798;
}

typedef struct { u32 field_0; u32 field_4; u8 field_8, field_9, field_A, field_B; s16 field_C, field_E; u8 field_10, field_11; u16 field_12; s16 field_14, field_16; } struct_18;

/* Draw the two 96x24 sprites of the demo corner logo into the OT */
void func_8001212C(void) {
    register struct_A444 *w = &D_800AF630;
    struct_18 *s = (struct_18 *)D_800A5E60;
    u32 *ot = D_800A6610[w->field_A3D2];
    setlen(s, 5);
    *(u32 *)((u8 *)s + 4) = 0xE1000018;
    s->field_B = 0x66;
    s->field_12 = 0x77D6;
    s->field_8 = 0x80;
    s->field_9 = 0x80;
    s->field_A = 0x80;
    s->field_C = 0x30;
    s->field_E = 0x2E;
    s->field_10 = 0x40;
    s->field_11 = 0xE0;
    s->field_14 = 0x60;
    s->field_16 = 0x18;
    addPrim(ot + 1, s);
    s++;
    setlen(s, 5);
    *(u32 *)((u8 *)s + 4) = 0xE1000018;
    s->field_B = 0x66;
    s->field_12 = 0x77D6;
    s->field_8 = 0x80;
    s->field_9 = 0x80;
    s->field_A = 0x80;
    s->field_C = 0x30;
    s->field_E = 0x46;
    s->field_10 = 0xA0;
    s->field_11 = 0xE0;
    s->field_14 = 0x60;
    s->field_16 = 0x18;
    addPrim(ot + 1, s);
    s++;
    D_800A5E60 = (u8 *)s;
}
