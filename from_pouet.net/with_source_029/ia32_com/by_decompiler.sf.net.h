// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_029/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_23) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_10: (segment "Eq_10")
	T_10 (in ds : (ptr Eq_10))
Eq_23: (segment "Eq_23" (0 byte b0000))
	T_23 (in 0xA000 : selector)
Eq_34: (fn byte (byte))
	T_34 (in __inb : ptr32)
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in bios_video_set_mode : ptr32)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (fn T_6 (T_5)))
T_3: (in signature of bios_video_set_mode : void)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: 
T_4: (in al : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_5: (in 0x13 : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_6: (in bios_video_set_mode(0x13) : void)
  Class: Eq_6
  DataType: void
  OrigDataType: void
T_7: (in ax_12 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_8: (in 0xA000 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_9: (in al_16 : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_10: (in ds : (ptr Eq_10))
  Class: Eq_10
  DataType: (ptr Eq_10)
  OrigDataType: (ptr (segment))
T_11: (in si : (memptr (ptr Eq_10) byte))
  Class: Eq_11
  DataType: (memptr (ptr Eq_10) byte)
  OrigDataType: (memptr T_10 (struct 0001 (0 T_14 t0000)))
T_12: (in 0x0000 : word16)
  Class: Eq_12
  DataType: word16
  OrigDataType: word16
T_13: (in si + 0x0000 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_14: (in Mem0[ds:si + 0x0000:byte] : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_15: (in DPB(ax_12, al_16, 0, 8) : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_16: (in 0x0001 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_17: (in si + 0x0001 : word16)
  Class: Eq_11
  DataType: (memptr (ptr Eq_10) byte)
  OrigDataType: word16
T_18: (in 0x00 : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_19: (in al_16 == 0x00 : bool)
  Class: Eq_19
  DataType: bool
  OrigDataType: bool
T_20: (in 0x0001 : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_21: (in ax_12 - 0x0001 : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_22: (in (byte) (ax_12 - 0x0001) : byte)
  Class: Eq_22
  DataType: byte
  OrigDataType: byte
T_23: (in 0xA000 : selector)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: (ptr (segment))
T_24: (in di : (memptr (ptr Eq_23) byte))
  Class: Eq_24
  DataType: (memptr (ptr Eq_23) byte)
  OrigDataType: (memptr T_23 (struct 0001 (0 T_27 t0000)))
T_25: (in 0x0000 : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_26: (in di + 0x0000 : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_27: (in Mem23[0xA000:di + 0x0000:byte] : byte)
  Class: Eq_22
  DataType: byte
  OrigDataType: byte
T_28: (in ax_12 - 0x0001 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_29: (in 0x0001 : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_30: (in di + 0x0001 : word16)
  Class: Eq_24
  DataType: (memptr (ptr Eq_23) byte)
  OrigDataType: word16
T_31: (in 0x0000 : word16)
  Class: Eq_24
  DataType: (memptr (ptr Eq_23) byte)
  OrigDataType: word16
T_32: (in di != &Eq_23::b0000 : bool)
  Class: Eq_32
  DataType: bool
  OrigDataType: bool
T_33: (in ax_30 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in __inb : ptr32)
  Class: Eq_34
  DataType: (ptr Eq_34)
  OrigDataType: (ptr (fn T_36 (T_35)))
T_35: (in 0x60 : byte)
  Class: Eq_35
  DataType: byte
  OrigDataType: byte
T_36: (in __inb(0x60) : byte)
  Class: Eq_36
  DataType: byte
  OrigDataType: byte
T_37: (in (word16) __inb(0x60) : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_38: (in 0x0001 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in ax_30 - 0x0001 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_40: (in 0x0001 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_41: (in ax_30 != 0x0001 : bool)
  Class: Eq_41
  DataType: bool
  OrigDataType: bool
*/
typedef Eq_23 Eq_1struct Globals {
	Eq_23 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef struct Eq_10 {
} Eq_10;

typedef struct Eq_23 {
	byte b0000;	// 0
} Eq_23;

typedef byte (Eq_34)(byte);

