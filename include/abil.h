#ifndef ABIL_H
#define ABIL_H

/* The ability packages (src/abil/, docs/overlays.md). Most of their functions take the stage engine's actor
   (Musashi's object); its layout is not mapped yet, so its fields are read by offset: AF(a, u8, 0x197) is the step
   of the button-ability template (docs/abilities.md), AF(a, u16, 2) the actor's state. */
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

typedef void (*type_1)();     /* a step or state handler, most take the actor */

/* an SVECTOR's layout (psyq.h is not included: its prototypes clash with the packages' externs); copied whole, its
   2-byte alignment gives the lwl/lwr pairs (r127) */
typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8;

/* a CVECTOR's layout (r, g, b, cd); copied whole, its 1-byte alignment gives one lwl/lwr + swl/swr pair (r131) */
typedef struct { u8 field_0, field_1, field_2, field_3; } struct_4;

/* a primitive built on the stack (four SVECTORs, four CVECTORs, a code word) and handed to func_80017758 with a
   model's matrix; written field by field with chained stores, `s.v[1].vx = s.v[1].vy = s.v[1].vz = 0` (r131) */
typedef struct { struct_8 field_0[4]; struct_4 field_20[4]; s32 field_30; } struct_34;

/* one entry of the 0x68-stride object array at D_8011F9D0 (20 entries); indexed through a base pointer,
   `struct_68 *p = D_8011F9D0; p[i].type`, its loops count up as the originals do (r131) */
typedef struct { u16 field_0; u8 field_2[0x66]; } struct_68;

/* a MATRIX's layout (0x20 bytes); copied whole it gives the four-words-at-a-time lw/sw blocks (r127) */
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20;

/* game.h's struct_84 (the drawn model an actor keeps at +0x20), cut at +0x30. Its stores must be struct stores:
   GCC 2.7.2 then lets loads from other pointers move above them (r127, func_ovl34_800CDD9C) */
typedef struct {
    /* 0x00 */ u16 field_0;
    /* 0x02 */ s16 field_2;
    /* 0x04 */ u32 field_4;
    /* 0x08 */ s16 field_8[3];
    /* 0x0E */ u8 field_E[2];
    /* 0x10 */ struct_8 field_10;
    /* 0x18 */ struct_8 field_18;
    /* 0x20 */ void *field_20;
    /* 0x24 */ u32 *field_24;
    /* 0x28 */ u32 field_28;
    /* 0x2C */ u16 field_2C;
    /* 0x2E */ u16 field_2E;
} struct_30;

#endif
