#include "common.h"
#include "psyq.h"
#include "work.h"

typedef struct { char *field_0; s32 field_4[7]; } struct_20_3;
extern CdlFILE *CdSearchFile(CdlFILE *fp, char *name);
extern int ResetCallback(void);
extern void *DMACallback(s32 ch, void (*cb)(void));
extern void func_800118AC(void);
extern void func_800146B0(s32 mode);
extern void func_800183E0(void *p);
extern s32 func_8001BFA0(void);
extern void func_8001BFB0(void);
extern void func_800D1E9C(struct_20_3 *m);
extern void func_800D2D68(s32 a);
extern void func_800D2EF8(void);
extern s32 func_800D2F88(void);
extern s32 func_800D3020(void);
extern u32 func_800D30B8(void);
extern u16 D_800B99E4;
extern u16 D_800B99E6;
extern u16 D_800B99E8;
extern s32 D_800B9A18;
extern void (*D_800D3598[])(void);
extern u8 D_800D52BC[];
extern struct_20_3 D_800D942C[];
extern u32 *D_800DB670;
extern s32 D_800EC680;
extern s32 D_800EC9E0;
extern CdlFILE D_800EC9FC;

void func_800CEEC8(void) {
    D_800D3598[D_800B99E4]();
}

extern void ClearImage(RECT *r, s32 a, s32 b, s32 c);
extern int CdControl(u8 com, u8 *param, u8 *result);
extern int CdRead2(s32 mode);
extern void StSetRing(u32 *ring, u32 size);
extern void StSetStream(u32 mode, u32 start, u32 end, void (*f1)(), void (*f2)());
extern void func_80015310(void);
extern s32 func_80019A24(CdlFILE *file, void *dest, s32 arg2, s32 arg3);
extern void func_8001A9F8(s32 n);
extern void func_800CF3E8(void);
extern void func_800CFB3C(void *p);
extern void func_800CFFEC(void);
extern void func_800D1E58(void);
extern void func_800D2AA0(s32 a);
extern s32 func_800D2A24(u8 *loc);
extern void func_800D2D44(void (*cb)(void));
extern void func_800D2E64(u32 *p, u16 v);
extern CdlFILE D_800AE858;
extern u32 *D_800D946C;
extern u8 D_800DA48C[];
extern s32 D_800EC684;
extern s32 D_800EC68C;
extern s32 D_800EC6A0;
extern s32 D_800EC6A4;
extern u8 D_800EC9E8[];

extern s32 func_800CFC1C(void *p);
extern u32 D_800DB530[];
extern u32 D_800DB570[];
extern u32 D_800DB5B4[];
extern s32 D_800EC690;

typedef struct { u16 field_0; u16 field_2; RECT field_4; u16 *field_C; } struct_10;
extern void func_8001C044(void);
extern void func_8002D858(void);
extern void func_800147B8(void);
extern s32 func_800D1E18(void);
extern void GsInitGraph2(s32 w, s32 h, s32 a, s32 b, s32 c);
extern void GsDefDispBuff2(s32 a, s32 b, s32 c, s32 d);
extern void GsInit3D(void);
extern u8 D_800B9A11;
extern s16 D_800EC678;
extern s32 D_800EC67C;
extern s32 D_800EC688;
extern s32 D_800EC694;
extern s32 D_800EC698;
extern s32 D_800EC69C;
extern s16 D_800AF7BC;
extern s16 D_800AF7BE;
extern s16 D_800AF7C0;
extern u8 D_800AF6DC;
extern u8 D_800AF680;

void func_800CEF04(void) {
    D_800B9A11 = 1;
    func_8001C044();
    func_80015310();
    func_8002D858();
    D_800EC694 = 1;
    D_800EC68C = 0x80;
    D_800EC678 = 0;
    D_800EC67C = 0;
    D_800EC680 = 0;
    D_800EC690 = 0;
    D_800EC698 = 0;
    D_800EC688 = 0xFF;
    D_800EC684 = func_800D1E18();
    func_800CFB3C(D_800DA48C);
    func_800118AC();
    func_800118AC();
}

void func_800CEFBC(void) {
    func_8001A9F8(0);
    if (func_80019A24(&D_800AE858, (void *)0x80164E20, 0, 0) != 0) {
        func_80015310();
        func_800118AC();
    }
}

void func_800CF010(void) {
    if (D_800EC684 != 0) {
        func_800D1E58();
    }
    func_800CFFEC();
    D_800B9A18 = 0;
    D_800EC6A0 = 0;
    func_800CFB3C(D_800DA48C);
    D_800EC6A4 = 1;
    func_800118AC();
}

void func_800CF078(void) {
    func_800CF3E8();
    if (D_800EC6A0 == 0) {
        if (func_800CFC1C(D_800DA48C) == 0) {
            D_800EC6A0 = 1;
        }
    }
    if (D_800EC6A0 != 0 && D_800EC6A4 != 0) {
        D_800EC690 = 1;
        func_800118AC();
    }
}

extern s32 func_800149E0(s32 a);
extern s32 func_80014B10(s32 a);
extern void func_8002D4C8(s32 a, s32 b);
extern void func_800CFE00(void);

void func_800CF104(void) {
    s32 pad;
    pad = func_800149E0(0);
    func_80014B10(0);
    switch (D_800EC690) {
    case 0:
        break;
    case 1:
        D_800EC694 = (D_800EC698 & 0x1F) < 0x18;
        D_800EC698++;
        if (pad & 0x840) {
            func_8002D4C8(0xC6E, 0);
            D_800EC690++;
        } else {
            D_800EC67C++;
        }
        break;
    case 3:
        func_800CFE00();
        D_800EC690 = 2;
        break;
    case 2:
        if (pad & 0x4000) {
            func_8002D4C8(0x9C1, 0);
            if (++D_800EC678 >= 2) {
                D_800EC678 = 0;
            }
            D_800EC67C = 0;
        } else if (pad & 0x1000) {
            func_8002D4C8(0x9C1, 0);
            if (--D_800EC678 < 0) {
                D_800EC678 = 1;
            }
            D_800EC67C = 0;
        } else if (pad & 0x840) {
            func_8002D4C8(0x9C0, 0);
            D_800EC680 = D_800EC678;
            func_800118AC();
        }
        break;
    }
    func_800CF3E8();
    if (D_800EC67C >= 0x1C3) {
        D_800EC680 = 4;
        func_800118AC();
    }
}

void func_800CF300(void) {
    RECT r;
    func_800CF3E8();
    D_800EC68C -= 4;
    if (D_800EC68C < 0) {
        r.x = 0;
        r.y = 0;
        r.w = 0x280;
        r.h = 0x1E0;
        ClearImage(&r, 0, 0, 0);
        func_800118AC();
    }
}

void func_800CF370(void) {
    func_800146B0(1);
    D_800B9A18 = 2;
    func_800118AC();
}

void func_800CF3A4(void) {
    func_800183E0(D_800D52BC);
    D_800B99E6 = 1;
    D_800B99E8 = D_800EC680;
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
extern struct_18 D_800EC6A8[2];
extern struct_18 D_800EC6D8[2];
extern struct_18 D_800EC708[2];
extern struct_18 D_800EC738[2];
extern struct_18 D_800EC768[2];
extern struct_18 D_800EC798[2];
extern struct_18 D_800EC7C8[2];
extern struct_18 D_800EC7F8[2];
extern struct_18 D_800EC828[2];
extern struct_18 D_800EC858[2];

void func_800CF3E8(void) {
    struct_A444 *w = &D_800AF630;
    struct_18 *p;
    struct_18 *q;
    struct_18 *p1, *p2, *p3, *p4, *p5, *p6;
    s32 f = w->field_A3D2;
    switch (D_800EC690) {
    case 0: break;
    case 1:
        if (D_800EC694 != 0) {
            setlen(&D_800EC7C8[f], 5);
            p = &D_800EC7C8[f];
            ((u32 *)&D_800EC7C8[f])[1] = 0xE100008A;
            p->field_B = 0x64;
            p->field_8 = p->field_9 = p->field_A = D_800EC68C;
            p->field_C = -0xB0;
            p->field_E = 0x54;
            p->field_10 = 0;
            p->field_11 = 0;
            p->field_12 = 0x7800;
            p->field_14 = 0x100;
            p->field_16 = 0x20;
            D_800EC7C8[f].field_12 = 0x7880;
            addPrim(D_800AA60C[w->field_A3D2], p);
            setlen(&D_800EC7F8[f], 5);
            p = &D_800EC7F8[f];
            ((u32 *)&D_800EC7F8[f])[1] = 0xE100008C;
            p->field_B = 0x64;
            p->field_8 = p->field_9 = p->field_A = D_800EC68C;
            p->field_C = 0x50;
            p->field_E = 0x54;
            p->field_10 = 0;
            p->field_11 = 0;
            p->field_12 = 0x7800;
            p->field_14 = 0x60;
            p->field_16 = 0x20;
            D_800EC7F8[f].field_12 = 0x7880;
            addPrim(D_800AA60C[w->field_A3D2], p);
        }
        break;
    case 2:
        setlen(&D_800EC828[f], 5);
        q = &D_800EC828[f];
        ((u32 *)&D_800EC828[f])[1] = 0xE100008F;
        q->field_B = 0x64;
        q->field_8 = q->field_9 = q->field_A = D_800EC68C;
        q->field_C = -0x40;
        q->field_E = 0x44;
        q->field_10 = 0;
        q->field_11 = 0;
        q->field_12 = 0x7800;
        q->field_14 = 0x80;
        q->field_16 = 0x40;
        D_800EC828[f].field_12 = 0x7A80;
        addPrim(D_800AA60C[w->field_A3D2], q);
        setlen(&D_800EC858[f], 5);
        q = &D_800EC858[f];
        ((u32 *)&D_800EC858[f])[1] = 0xE100008D;
        q->field_B = 0x64;
        q->field_8 = q->field_9 = q->field_A = D_800EC68C;
        q->field_C = -0x70;
        q->field_E = D_800EC678 * 32 + 0x44;
        q->field_10 = 0;
        q->field_11 = 0;
        q->field_12 = 0x7800;
        q->field_14 = 0xE0;
        q->field_16 = 0x20;
        D_800EC858[f].field_12 = 0x7800;
        addPrim(D_800AA60C[w->field_A3D2], q);
        break;
    }
    setlen(&D_800EC6A8[f], 5);
    p1 = &D_800EC6A8[f];
    ((u32 *)&D_800EC6A8[f])[1] = 0xE100008A;
    p1->field_B = 0x64;
    p1->field_8 = p1->field_9 = p1->field_A = D_800EC68C;
    p1->field_C = -0x140;
    p1->field_E = -0xDC;
    p1->field_10 = 0;
    p1->field_11 = 0x24;
    p1->field_12 = 0x78C0;
    p1->field_14 = 0x100;
    p1->field_16 = 0xDC;
    setlen(&D_800EC6D8[f], 5);
    p2 = &D_800EC6D8[f];
    ((u32 *)&D_800EC6D8[f])[1] = 0xE100008C;
    p2->field_B = 0x64;
    p2->field_8 = p2->field_9 = p2->field_A = D_800EC68C;
    p2->field_C = -0x40;
    p2->field_E = -0xDC;
    p2->field_10 = 0;
    p2->field_11 = 0x24;
    p2->field_12 = 0x78C0;
    p2->field_14 = 0x100;
    p2->field_16 = 0xDC;
    setlen(&D_800EC708[f], 5);
    p3 = &D_800EC708[f];
    ((u32 *)&D_800EC708[f])[1] = 0xE100008E;
    p3->field_B = 0x64;
    p3->field_8 = p3->field_9 = p3->field_A = D_800EC68C;
    p3->field_C = 0xC0;
    p3->field_E = -0xDC;
    p3->field_10 = 0;
    p3->field_11 = 0x24;
    p3->field_12 = 0x78C0;
    p3->field_14 = 0x80;
    p3->field_16 = 0xDC;
    setlen(&D_800EC738[f], 5);
    p4 = &D_800EC738[f];
    ((u32 *)&D_800EC738[f])[1] = 0xE100009A;
    p4->field_B = 0x64;
    p4->field_8 = p4->field_9 = p4->field_A = D_800EC68C;
    p4->field_C = -0x140;
    p4->field_E = 0;
    p4->field_10 = 0;
    p4->field_11 = 0;
    p4->field_12 = 0x78C0;
    p4->field_14 = 0x100;
    p4->field_16 = 0xDC;
    setlen(&D_800EC768[f], 5);
    p5 = &D_800EC768[f];
    ((u32 *)&D_800EC768[f])[1] = 0xE100009C;
    p5->field_B = 0x64;
    p5->field_8 = p5->field_9 = p5->field_A = D_800EC68C;
    p5->field_C = -0x40;
    p5->field_E = 0;
    p5->field_10 = 0;
    p5->field_11 = 0;
    p5->field_12 = 0x78C0;
    p5->field_14 = 0x100;
    p5->field_16 = 0xDC;
    setlen(&D_800EC798[f], 5);
    p6 = &D_800EC798[f];
    ((u32 *)&D_800EC798[f])[1] = 0xE100009E;
    p6->field_B = 0x64;
    p6->field_8 = p6->field_9 = p6->field_A = D_800EC68C;
    p6->field_C = 0xC0;
    p6->field_E = 0;
    p6->field_10 = 0;
    p6->field_11 = 0;
    p6->field_12 = 0x78C0;
    p6->field_14 = 0x80;
    p6->field_16 = 0xDC;
    addPrim(D_800AA60C[f], p6);
    addPrim(D_800AA60C[f], p5);
    addPrim(D_800AA60C[f], p4);
    addPrim(D_800AA60C[f], p3);
    addPrim(D_800AA60C[f], p2);
    addPrim(D_800AA60C[f], p1);
}

void func_800CFB3C(void *arg) {
    struct_10 *p = arg;
    RECT r;
    u16 *d;
    s32 i;
    D_800EC69C = 0;
    while (p->field_0 != 0xFF) {
        if (p->field_0 == 9) {
            d = p->field_C + p->field_4.w;
            for (i = 0; i < p->field_4.w; i++) {
                *d++ = 0x7FFF;
            }
            d = p->field_C + p->field_4.w;
            r.x = p->field_4.x;
            r.y = p->field_4.y;
            r.w = p->field_4.w;
            r.h = p->field_4.h;
            LoadImage(&r, (u32 *)d);
        }
        p++;
    }
}

s32 func_800CFC1C(void *arg) {
    struct_10 *p = arg;
    RECT r;
    u16 *d;
    u16 *s;
    u16 *src;
    s32 i;
    s32 ch;
    s32 any;
    s32 cr, cg, cb;
    s32 tr, tg, tb;
    u16 c;
    s32 t;
    any = 0;
    /* PORT NOTE: no return while the counter is below 2, as the original (it returns the slti result, 1) */
    if (++D_800EC69C >= 2) {
        D_800EC69C = 0;
        while (p->field_0 != 0xFF) {
            if (p->field_0 == 9) {
                ch = 0;
                src = p->field_C;
                s = src + p->field_4.w;
                d = s;
                for (i = 0; i < p->field_4.w; i++, src++) {
                    t = *src;
                    cr = *d & 0x1F;
                    cg = *d & 0x3E0;
                    cb = *d & 0x7C00;
                    tr = t & 0x1F;
                    tg = t & 0x3E0;
                    tb = t & 0x7C00;
                    if (cr != tr) {
                        ch = 1;
                        if (cr < tr) cr += 1;
                        if (tr < cr) cr -= 1;
                    }
                    if (cg != tg) {
                        ch = 1;
                        if (cg < tg) cg += 0x20;
                        if (tg < cg) cg -= 0x20;
                    }
                    if (cb != tb) {
                        ch = 1;
                        if (cb < tb) cb += 0x400;
                        if (tb < cb) cb -= 0x400;
                    }
                    c = cr | cg | cb | (t & ~0x7FFF);
                    if (c == 0 && t != 0) {
                        c |= 0x8000;
                    }
                    *d++ = c;
                }
                if (ch) {
                    r.x = p->field_4.x;
                    r.y = p->field_4.y;
                    r.w = p->field_4.w;
                    r.h = p->field_4.h;
                    LoadImage(&r, (u32 *)s);
                }
                any |= ch;
            }
            p++;
        }
        return any;
    }
}

void func_800CFE00(void) {
    RECT r[2];
    s32 off;
    u8 *p;
    u8 *q;
    r[0].x = 0;
    r[0].y = 0x1E0;
    r[0].w = 0x100;
    r[0].h = 1;
    r[1].x = 0x280;
    r[1].y = 0x24;
    r[1].w = 0x140;
    r[1].h = 0x1B8;
    off = D_800EC678 * 0x44E20;
    p = (u8 *)0x80120014 + off;
    q = (u8 *)0x80120220 + off;
    LoadImage(&r[0], (u32 *)p);
    LoadImage(&r[1], (u32 *)q);
}

s32 func_800CFEB4(void *arg) {
    struct_10 *p = arg;
    RECT r;
    u16 *d;
    u16 *s;
    s32 i;
    s32 ch;
    s32 any;
    s32 cr, cg, cb;
    u16 c;
    u16 n;
    any = 0;
    while (p->field_0 != 0xFF) {
        if (p->field_0 == 9) {
            ch = 0;
            s = p->field_C + p->field_4.w;
            d = s;
            for (i = 0; i < p->field_4.w; i++) {
                c = *d;
                cr = c & 0x1F;
                cg = c & 0x3E0;
                cb = c & 0x7C00;
                if (cr != 0) cr -= 1;
                if (cg != 0) cg -= 0x20;
                if (cb != 0) cb -= 0x400;
                n = cr | cg | cb;
                if (n != 0) {
                    ch = 1;
                }
                *d++ = n;
            }
            if (ch) {
                r.x = p->field_4.x;
                r.y = p->field_4.y;
                r.w = p->field_4.w;
                r.h = p->field_4.h;
                LoadImage(&r, (u32 *)s);
            }
            any |= ch;
        }
        p++;
    }
    return any;
}

void func_800CFFEC(void) {
    RECT r[3];
    D_800AF7BC = 0x280;
    D_800AF7BE = 0x1E0;
    D_800AF7C0 = 1;
    GsInitGraph2(0x280, 0x1E0, 5, 0, 0);
    GsDefDispBuff2(0, 0, 0, 0);
    ResetGraph(1);
    GsInit3D();
    func_800147B8();
    r[0].x = 0;
    r[0].y = 0;
    r[0].w = 0x280;
    r[0].h = 0x14;
    ClearImage(&r[0], 0, 0, 0);
    r[1].x = 0;
    r[1].y = 0x14;
    r[1].w = 0x280;
    r[1].h = 0x1B8;
    ClearImage(&r[1], 0xFF, 0xFF, 0xFF);
    r[2].x = 0;
    r[2].y = 0x1CC;
    r[2].w = 0x280;
    r[2].h = 0x14;
    ClearImage(&r[2], 0, 0, 0);
    D_800AF6DC = 0;
    D_800AF680 = 0;
}
