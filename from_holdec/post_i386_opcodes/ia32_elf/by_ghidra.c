typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned short    word;
typedef struct eh_frame_hdr eh_frame_hdr, *Peh_frame_hdr;

struct eh_frame_hdr {
    byte eh_frame_hdr_version; // Exception Handler Frame Header Version
    dwfenc eh_frame_pointer_encoding; // Exception Handler Frame Pointer Encoding
    dwfenc eh_frame_desc_entry_count_encoding; // Encoding of # of Exception Handler FDEs
    dwfenc eh_frame_table_encoding; // Exception Handler Table Encoding
};

typedef struct fde_table_entry fde_table_entry, *Pfde_table_entry;

struct fde_table_entry {
    dword initial_loc; // Initial Location
    dword data_loc; // Data location
};

typedef struct Elf32_Dyn_x86 Elf32_Dyn_x86, *PElf32_Dyn_x86;

typedef enum Elf32_DynTag_x86 {
    DT_AUDIT=1879047932,
    DT_AUXILIARY=2147483645,
    DT_BIND_NOW=24,
    DT_CHECKSUM=1879047672,
    DT_CONFIG=1879047930,
    DT_DEBUG=21,
    DT_DEPAUDIT=1879047931,
    DT_ENCODING=32,
    DT_FEATURE_1=1879047676,
    DT_FILTER=2147483647,
    DT_FINI=13,
    DT_FINI_ARRAY=26,
    DT_FINI_ARRAYSZ=28,
    DT_FLAGS=30,
    DT_FLAGS_1=1879048187,
    DT_GNU_CONFLICT=1879047928,
    DT_GNU_CONFLICTSZ=1879047670,
    DT_GNU_HASH=1879047925,
    DT_GNU_LIBLIST=1879047929,
    DT_GNU_LIBLISTSZ=1879047671,
    DT_GNU_PRELINKED=1879047669,
    DT_HASH=4,
    DT_INIT=12,
    DT_INIT_ARRAY=25,
    DT_INIT_ARRAYSZ=27,
    DT_JMPREL=23,
    DT_MOVEENT=1879047674,
    DT_MOVESZ=1879047675,
    DT_MOVETAB=1879047934,
    DT_NEEDED=1,
    DT_NULL=0,
    DT_PLTGOT=3,
    DT_PLTPAD=1879047933,
    DT_PLTPADSZ=1879047673,
    DT_PLTREL=20,
    DT_PLTRELSZ=2,
    DT_POSFLAG_1=1879047677,
    DT_PREINIT_ARRAYSZ=33,
    DT_REL=17,
    DT_RELA=7,
    DT_RELACOUNT=1879048185,
    DT_RELAENT=9,
    DT_RELASZ=8,
    DT_RELCOUNT=1879048186,
    DT_RELENT=19,
    DT_RELSZ=18,
    DT_RPATH=15,
    DT_RUNPATH=29,
    DT_SONAME=14,
    DT_STRSZ=10,
    DT_STRTAB=5,
    DT_SYMBOLIC=16,
    DT_SYMENT=11,
    DT_SYMINENT=1879047679,
    DT_SYMINFO=1879047935,
    DT_SYMINSZ=1879047678,
    DT_SYMTAB=6,
    DT_TEXTREL=22,
    DT_TLSDESC_GOT=1879047927,
    DT_TLSDESC_PLT=1879047926,
    DT_VERDEF=1879048188,
    DT_VERDEFNUM=1879048189,
    DT_VERNEED=1879048190,
    DT_VERNEEDNUM=1879048191,
    DT_VERSYM=1879048176
} Elf32_DynTag_x86;

struct Elf32_Dyn_x86 {
    enum Elf32_DynTag_x86 d_tag;
    dword d_val;
};

typedef struct Elf32_Sym Elf32_Sym, *PElf32_Sym;

struct Elf32_Sym {
    dword st_name;
    dword st_value;
    dword st_size;
    byte st_info;
    byte st_other;
    word st_shndx;
};

typedef struct Elf32_Shdr Elf32_Shdr, *PElf32_Shdr;

typedef enum Elf_SectionHeaderType_x86 {
    SHT_CHECKSUM=1879048184,
    SHT_DYNAMIC=6,
    SHT_DYNSYM=11,
    SHT_FINI_ARRAY=15,
    SHT_GNU_ATTRIBUTES=1879048181,
    SHT_GNU_HASH=1879048182,
    SHT_GNU_LIBLIST=1879048183,
    SHT_GNU_verdef=1879048189,
    SHT_GNU_verneed=1879048190,
    SHT_GNU_versym=1879048191,
    SHT_GROUP=17,
    SHT_HASH=5,
    SHT_INIT_ARRAY=14,
    SHT_NOBITS=8,
    SHT_NOTE=7,
    SHT_NULL=0,
    SHT_PREINIT_ARRAY=16,
    SHT_PROGBITS=1,
    SHT_REL=9,
    SHT_RELA=4,
    SHT_SHLIB=10,
    SHT_STRTAB=3,
    SHT_SUNW_COMDAT=1879048187,
    SHT_SUNW_move=1879048186,
    SHT_SUNW_syminfo=1879048188,
    SHT_SYMTAB=2,
    SHT_SYMTAB_SHNDX=18
} Elf_SectionHeaderType_x86;

struct Elf32_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType_x86 sh_type;
    dword sh_flags;
    dword sh_addr;
    dword sh_offset;
    dword sh_size;
    dword sh_link;
    dword sh_info;
    dword sh_addralign;
    dword sh_entsize;
};

typedef enum Elf_ProgramHeaderType_x86 {
    PT_DYNAMIC=2,
    PT_GNU_EH_FRAME=1685382480,
    PT_GNU_RELRO=1685382482,
    PT_GNU_STACK=1685382481,
    PT_INTERP=3,
    PT_LOAD=1,
    PT_NOTE=4,
    PT_NULL=0,
    PT_PHDR=6,
    PT_SHLIB=5,
    PT_TLS=7
} Elf_ProgramHeaderType_x86;

typedef struct Elf32_Rel Elf32_Rel, *PElf32_Rel;

struct Elf32_Rel {
    dword r_offset; // location to apply the relocation action
    dword r_info; // the symbol table index and the type of relocation
};

typedef struct Elf32_Phdr Elf32_Phdr, *PElf32_Phdr;

struct Elf32_Phdr {
    enum Elf_ProgramHeaderType_x86 p_type;
    dword p_offset;
    dword p_vaddr;
    dword p_paddr;
    dword p_filesz;
    dword p_memsz;
    dword p_flags;
    dword p_align;
};

typedef struct Elf32_Ehdr Elf32_Ehdr, *PElf32_Ehdr;

struct Elf32_Ehdr {
    byte e_ident_magic_num;
    char e_ident_magic_str[3];
    byte e_ident_class;
    byte e_ident_data;
    byte e_ident_version;
    byte e_ident_pad[9];
    word e_type;
    word e_machine;
    dword e_version;
    dword e_entry;
    dword e_phoff;
    dword e_shoff;
    dword e_flags;
    word e_ehsize;
    word e_phentsize;
    word e_phnum;
    word e_shentsize;
    word e_shnum;
    word e_shstrndx;
};

typedef struct evp_pkey_ctx_st evp_pkey_ctx_st, *Pevp_pkey_ctx_st;

struct evp_pkey_ctx_st {
};

typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;




// WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = __gmon_start__();
  return iVar1;
}



void FUN_08049030(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



void __libc_start_main(void)

{
  __libc_start_main();
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void _start(void)

{
  __libc_start_main(main);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: This is an inlined function

void __i686_get_pc_thunk_bx(void)

{
  return;
}



int _annobin_init_c(void *param_1,void *param_2)

{
  int in_EAX;
  
  return in_EAX;
}



int _dl_relocate_static_pie(void *param_1,void *param_2)

{
  int in_EAX;
  
  return in_EAX;
}



// WARNING: This is an inlined function

void __x86_get_pc_thunk_bx(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x080490bc)
// WARNING: Removing unreachable block (ram,0x080490c5)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x08049108)
// WARNING: Removing unreachable block (ram,0x08049111)

void register_tm_clones(void)

{
  return;
}



void __do_global_dtors_aux(void)

{
  if (completed_6843 == '\0') {
    deregister_tm_clones();
    completed_6843 = 1;
    return;
  }
  return;
}



void frame_dummy(void)

{
  register_tm_clones();
  return;
}



undefined4 bswap_plain(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 bswap_allregs(void)

{
  DAT_00002200 = (_DAT_00001100 & 0x800) != 0;
  DAT_00002208 = (_DAT_00001100 & 0x80) != 0;
  DAT_00002204 = (_DAT_00001100 & 0x40) != 0;
  DAT_0000220a = (_DAT_00001100 & 4) != 0;
  DAT_00002202 = (_DAT_00001100 & 1) != 0;
  _DAT_00002000 =
       _DAT_00001000 >> 0x18 | (_DAT_00001000 & 0xff0000) >> 8 | (_DAT_00001000 & 0xff00) << 8 |
       _DAT_00001000 << 0x18;
  _DAT_00002004 = _DAT_00001004;
  _DAT_00002008 = _DAT_00001008;
  _DAT_0000200c = _DAT_0000100c;
  _DAT_00002010 = _DAT_00001010;
  _DAT_00002014 = _DAT_00001014;
  _DAT_00002018 = _DAT_00001018;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 =
       (ushort)((_DAT_00001100 & 0x4000) != 0) * 0x4000 | (ushort)DAT_00002200 * 0x800 |
       (ushort)((_DAT_00001100 & 0x400) != 0) * 0x400 |
       (ushort)((_DAT_00001100 & 0x200) != 0) * 0x200 |
       (ushort)((_DAT_00001100 & 0x100) != 0) * 0x100 | (ushort)DAT_00002208 * 0x80 |
       (ushort)DAT_00002204 * 0x40 | (ushort)((_DAT_00001100 & 0x10) != 0) * 0x10 |
       (ushort)DAT_0000220a * 4 | (ushort)DAT_00002202;
  DAT_00002201 = !DAT_00002200;
  DAT_00002203 = !DAT_00002202;
  DAT_00002205 = !DAT_00002204;
  DAT_00002206 = DAT_00002202 || DAT_00002204;
  DAT_00002207 = !DAT_00002202 && !DAT_00002204;
  DAT_00002209 = !DAT_00002208;
  DAT_0000220b = !DAT_0000220a;
  DAT_0000220c = DAT_00002200 != DAT_00002208;
  DAT_0000220d = DAT_00002200 == DAT_00002208;
  DAT_0000220e = DAT_00002204 || DAT_00002200 != DAT_00002208;
  DAT_0000220f = !DAT_00002204 && DAT_00002200 == DAT_00002208;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 bswap_constant_simple(void)

{
  _DAT_00002000 = 0x2000000;
  _DAT_00002004 = 3;
  _DAT_00002008 = 4;
  _DAT_0000200c = 5;
  _DAT_00002010 = 6;
  _DAT_00002014 = 7;
  _DAT_00002018 = 8;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 0;
  DAT_0000220f = 1;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 bswap_constant_complex1(void)

{
  _DAT_00002000 = 0x8479b1a3;
  _DAT_00002004 = &DAT_06671ad7;
  _DAT_00002008 = 0x46685248;
  _DAT_0000200c = 0x392456c4;
  _DAT_00002010 = 0xbc8960a4;
  _DAT_00002014 = 0xad3c2d78;
  _DAT_00002018 = 0xe465e152;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 0;
  DAT_0000220f = 1;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 bswap_constant_complex2(void)

{
  _DAT_00002000 = 0xe8c03e31;
  _DAT_00002004 = &DAT_496e81c3;
  _DAT_00002008 = 0x1e3f6cb2;
  _DAT_0000200c = 0x4e6925b3;
  _DAT_00002010 = 0x4f312610;
  _DAT_00002014 = 0x2f37a4a5;
  _DAT_00002018 = 0x91a917b4;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x4ed5;
  DAT_00002200 = 1;
  DAT_00002201 = 0;
  DAT_00002202 = 1;
  DAT_00002203 = 0;
  DAT_00002204 = 1;
  DAT_00002205 = 0;
  DAT_00002206 = 1;
  DAT_00002207 = 0;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 1;
  DAT_0000220b = 0;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



undefined4 cmpxchg1_mv_plain(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmpxchg1_mv_allregs(void)

{
  byte bVar1;
  byte bVar2;
  
  DAT_0000220a = (_DAT_00001100 & 4) != 0;
  bVar1 = (byte)_DAT_00001000;
  bVar2 = (byte)_DAT_00001004;
  DAT_00002202 = bVar1 < bVar2;
  DAT_00002200 = SBORROW1(bVar1,bVar2);
  DAT_00002208 = (char)(bVar1 - bVar2) < '\0';
  DAT_00002204 = bVar1 == bVar2;
  bVar2 = bVar2 ^ DAT_00002204 * (bVar2 ^ bVar1);
  _DAT_00002000 = _DAT_00001000 & 0xffffff00 | (uint)(byte)(bVar1 ^ DAT_00002204 * (bVar1 & bVar2));
  _DAT_00002004 = _DAT_00001004 & 0xffffff00 | (uint)bVar2;
  _DAT_00002008 = _DAT_00001008;
  _DAT_0000200c = _DAT_0000100c;
  _DAT_00002010 = _DAT_00001010;
  _DAT_00002014 = _DAT_00001014;
  _DAT_00002018 = _DAT_00001018;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 =
       (ushort)((_DAT_00001100 & 0x4000) != 0) * 0x4000 | (ushort)DAT_00002200 * 0x800 |
       (ushort)((_DAT_00001100 & 0x400) != 0) * 0x400 |
       (ushort)((_DAT_00001100 & 0x200) != 0) * 0x200 |
       (ushort)((_DAT_00001100 & 0x100) != 0) * 0x100 | (ushort)DAT_00002208 * 0x80 |
       (ushort)DAT_00002204 * 0x40 | (ushort)((_DAT_00001100 & 0x10) != 0) * 0x10 |
       (ushort)DAT_0000220a * 4 | (ushort)DAT_00002202;
  DAT_00002201 = !DAT_00002200;
  DAT_00002203 = !DAT_00002202;
  DAT_00002205 = !DAT_00002204;
  DAT_00002206 = bVar1 <= bVar2;
  DAT_00002207 = bVar2 < bVar1;
  DAT_00002209 = !DAT_00002208;
  DAT_0000220b = !DAT_0000220a;
  DAT_0000220c = (char)bVar1 < (char)bVar2;
  DAT_0000220d = (char)bVar2 <= (char)bVar1;
  DAT_0000220e = (char)bVar1 <= (char)bVar2;
  DAT_0000220f = !DAT_00002204 && (char)bVar2 <= (char)bVar1;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmpxchg1_mv_constant_simple(void)

{
  _DAT_00002000 = 2;
  _DAT_00002004 = 3;
  _DAT_00002008 = 4;
  _DAT_0000200c = 5;
  _DAT_00002010 = 6;
  _DAT_00002014 = 7;
  _DAT_00002018 = 8;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x81;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 1;
  DAT_00002203 = 0;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 1;
  DAT_00002207 = 0;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 1;
  DAT_0000220d = 0;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmpxchg1_mv_constant_complex1(void)

{
  _DAT_00002000 = &DAT_a3b17984;
  _DAT_00002004 = &DAT_06671ad7;
  _DAT_00002008 = 0x46685248;
  _DAT_0000200c = 0x392456c4;
  _DAT_00002010 = 0xbc8960a4;
  _DAT_00002014 = 0xad3c2d78;
  _DAT_00002018 = 0xe465e152;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x81;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 1;
  DAT_00002203 = 0;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 1;
  DAT_00002207 = 0;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 1;
  DAT_0000220d = 0;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmpxchg1_mv_constant_complex2(void)

{
  _DAT_00002000 = &DAT_313ec0e8;
  _DAT_00002004 = &DAT_496e81c3;
  _DAT_00002008 = 0x1e3f6cb2;
  _DAT_0000200c = 0x4e6925b3;
  _DAT_00002010 = 0x4f312610;
  _DAT_00002014 = 0x2f37a4a5;
  _DAT_00002018 = 0x91a917b4;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x4614;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 1;
  DAT_0000220b = 0;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 0;
  DAT_0000220f = 1;
  return 0;
}



undefined4 cmpxchg2_mv_plain(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmpxchg2_mv_allregs(void)

{
  ushort uVar1;
  ushort uVar2;
  
  DAT_0000220a = (_DAT_00001100 & 4) != 0;
  uVar1 = (ushort)_DAT_00001000;
  uVar2 = (ushort)_DAT_00001004;
  DAT_00002202 = uVar1 < uVar2;
  DAT_00002200 = SBORROW2(uVar1,uVar2);
  DAT_00002208 = (short)(uVar1 - uVar2) < 0;
  DAT_00002204 = uVar1 == uVar2;
  uVar2 = uVar2 ^ (ushort)DAT_00002204 * (uVar2 ^ uVar1);
  _DAT_00002000 =
       _DAT_00001000 & 0xffff0000 | (uint)(ushort)(uVar1 ^ (ushort)DAT_00002204 * (uVar1 & uVar2));
  _DAT_00002004 = _DAT_00001004 & 0xffff0000 | (uint)uVar2;
  _DAT_00002008 = _DAT_00001008;
  _DAT_0000200c = _DAT_0000100c;
  _DAT_00002010 = _DAT_00001010;
  _DAT_00002014 = _DAT_00001014;
  _DAT_00002018 = _DAT_00001018;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 =
       (ushort)((_DAT_00001100 & 0x4000) != 0) * 0x4000 | (ushort)DAT_00002200 * 0x800 |
       (ushort)((_DAT_00001100 & 0x400) != 0) * 0x400 |
       (ushort)((_DAT_00001100 & 0x200) != 0) * 0x200 |
       (ushort)((_DAT_00001100 & 0x100) != 0) * 0x100 | (ushort)DAT_00002208 * 0x80 |
       (ushort)DAT_00002204 * 0x40 | (ushort)((_DAT_00001100 & 0x10) != 0) * 0x10 |
       (ushort)DAT_0000220a * 4 | (ushort)DAT_00002202;
  DAT_00002201 = !DAT_00002200;
  DAT_00002203 = !DAT_00002202;
  DAT_00002205 = !DAT_00002204;
  DAT_00002206 = uVar1 <= uVar2;
  DAT_00002207 = uVar2 < uVar1;
  DAT_00002209 = !DAT_00002208;
  DAT_0000220b = !DAT_0000220a;
  DAT_0000220c = (short)uVar1 < (short)uVar2;
  DAT_0000220d = (short)uVar2 <= (short)uVar1;
  DAT_0000220e = (short)uVar1 <= (short)uVar2;
  DAT_0000220f = !DAT_00002204 && (short)uVar2 <= (short)uVar1;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmpxchg2_mv_constant_simple(void)

{
  _DAT_00002000 = 2;
  _DAT_00002004 = 3;
  _DAT_00002008 = 4;
  _DAT_0000200c = 5;
  _DAT_00002010 = 6;
  _DAT_00002014 = 7;
  _DAT_00002018 = 8;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x81;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 1;
  DAT_00002203 = 0;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 1;
  DAT_00002207 = 0;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 1;
  DAT_0000220d = 0;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmpxchg2_mv_constant_complex1(void)

{
  _DAT_00002000 = &DAT_a3b17984;
  _DAT_00002004 = &DAT_06671ad7;
  _DAT_00002008 = 0x46685248;
  _DAT_0000200c = 0x392456c4;
  _DAT_00002010 = 0xbc8960a4;
  _DAT_00002014 = 0xad3c2d78;
  _DAT_00002018 = 0xe465e152;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 0;
  DAT_0000220f = 1;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmpxchg2_mv_constant_complex2(void)

{
  _DAT_00002000 = &DAT_313ec0e8;
  _DAT_00002004 = &DAT_496e81c3;
  _DAT_00002008 = 0x1e3f6cb2;
  _DAT_0000200c = 0x4e6925b3;
  _DAT_00002010 = 0x4f312610;
  _DAT_00002014 = 0x2f37a4a5;
  _DAT_00002018 = 0x91a917b4;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x4614;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 1;
  DAT_0000220b = 0;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 0;
  DAT_0000220f = 1;
  return 0;
}



undefined4 cmpxchg3_plain(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmpxchg3_allregs(void)

{
  DAT_0000220a = (_DAT_00001100 & 4) != 0;
  DAT_00002202 = _DAT_00001000 < _DAT_00001008;
  DAT_00002200 = SBORROW4(_DAT_00001000,_DAT_00001008);
  DAT_00002208 = (int)(_DAT_00001000 - _DAT_00001008) < 0;
  DAT_00002204 = _DAT_00001000 == _DAT_00001008;
  _DAT_00002008 = _DAT_00001008 ^ (uint)DAT_00002204 * (_DAT_00001008 ^ _DAT_00001004);
  _DAT_00002000 = _DAT_00001000 ^ (uint)DAT_00002204 * (_DAT_00001000 & _DAT_00002008);
  _DAT_00002004 = _DAT_00001004;
  _DAT_0000200c = _DAT_0000100c;
  _DAT_00002010 = _DAT_00001010;
  _DAT_00002014 = _DAT_00001014;
  _DAT_00002018 = _DAT_00001018;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 =
       (ushort)((_DAT_00001100 & 0x4000) != 0) * 0x4000 | (ushort)DAT_00002200 * 0x800 |
       (ushort)((_DAT_00001100 & 0x400) != 0) * 0x400 |
       (ushort)((_DAT_00001100 & 0x200) != 0) * 0x200 |
       (ushort)((_DAT_00001100 & 0x100) != 0) * 0x100 | (ushort)DAT_00002208 * 0x80 |
       (ushort)DAT_00002204 * 0x40 | (ushort)((_DAT_00001100 & 0x10) != 0) * 0x10 |
       (ushort)DAT_0000220a * 4 | (ushort)DAT_00002202;
  DAT_00002201 = !DAT_00002200;
  DAT_00002203 = !DAT_00002202;
  DAT_00002205 = !DAT_00002204;
  DAT_00002206 = _DAT_00001000 <= _DAT_00001008;
  DAT_00002207 = _DAT_00001008 < _DAT_00001000;
  DAT_00002209 = !DAT_00002208;
  DAT_0000220b = !DAT_0000220a;
  DAT_0000220c = (int)_DAT_00001000 < (int)_DAT_00001008;
  DAT_0000220d = (int)_DAT_00001008 <= (int)_DAT_00001000;
  DAT_0000220e = (int)_DAT_00001000 <= (int)_DAT_00001008;
  DAT_0000220f = !DAT_00002204 && (int)_DAT_00001008 <= (int)_DAT_00001000;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmpxchg3_constant_simple(void)

{
  _DAT_00002000 = 2;
  _DAT_00002004 = 3;
  _DAT_00002008 = 4;
  _DAT_0000200c = 5;
  _DAT_00002010 = 6;
  _DAT_00002014 = 7;
  _DAT_00002018 = 8;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x81;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 1;
  DAT_00002203 = 0;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 1;
  DAT_00002207 = 0;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 1;
  DAT_0000220d = 0;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmpxchg3_constant_complex1(void)

{
  _DAT_00002000 = &DAT_a3b17984;
  _DAT_00002004 = &DAT_06671ad7;
  _DAT_00002008 = 0x46685248;
  _DAT_0000200c = 0x392456c4;
  _DAT_00002010 = 0xbc8960a4;
  _DAT_00002014 = 0xad3c2d78;
  _DAT_00002018 = 0xe465e152;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x800;
  DAT_00002200 = 1;
  DAT_00002201 = 0;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 1;
  DAT_0000220d = 0;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmpxchg3_constant_complex2(void)

{
  _DAT_00002000 = &DAT_313ec0e8;
  _DAT_00002004 = &DAT_496e81c3;
  _DAT_00002008 = 0x1e3f6cb2;
  _DAT_0000200c = 0x4e6925b3;
  _DAT_00002010 = 0x4f312610;
  _DAT_00002014 = 0x2f37a4a5;
  _DAT_00002018 = 0x91a917b4;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x4614;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 1;
  DAT_0000220b = 0;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 0;
  DAT_0000220f = 1;
  return 0;
}



undefined4 cmpxchg4_mv_plain(void)

{
  uint in_EAX;
  uint *unaff_EBX;
  
  *unaff_EBX = *unaff_EBX ^ (uint)(in_EAX == *unaff_EBX) * (*unaff_EBX ^ in_EAX);
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmpxchg4_mv_allregs(void)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  
  _DAT_00002018 = _DAT_00001018;
  _DAT_00002014 = _DAT_00001014;
  _DAT_00002010 = _DAT_00001010;
  _DAT_0000200c = _DAT_0000100c;
  _DAT_00002008 = _DAT_00001008;
  _DAT_00002004 = _DAT_00001004;
  uVar7 = _DAT_00001000;
  uVar2 = _DAT_00001100 & 0x4000;
  uVar3 = _DAT_00001100 & 0x400;
  uVar4 = _DAT_00001100 & 0x200;
  uVar5 = _DAT_00001100 & 0x100;
  uVar6 = _DAT_00001100 & 0x10;
  DAT_0000220a = (_DAT_00001100 & 4) != 0;
  DAT_00002202 = _DAT_00001000 < *_DAT_00001004;
  DAT_00002200 = SBORROW4(_DAT_00001000,*_DAT_00001004);
  uVar1 = *_DAT_00001004;
  DAT_00002208 = (int)(_DAT_00001000 - uVar1) < 0;
  DAT_00002204 = _DAT_00001000 == uVar1;
  _DAT_00002050 = (undefined *)register0x00000010;
  *_DAT_00001004 = *_DAT_00001004 ^ (uint)DAT_00002204 * (*_DAT_00001004 ^ _DAT_00001000);
  _DAT_00002000 = uVar7 ^ (uint)DAT_00002204 * (uVar7 & *_DAT_00002004);
  _DAT_00002020 = _DAT_00002050 + -(int)register0x00000010;
  _DAT_00002100 =
       (ushort)(uVar2 != 0) * 0x4000 | (ushort)DAT_00002200 * 0x800 | (ushort)(uVar3 != 0) * 0x400 |
       (ushort)(uVar4 != 0) * 0x200 | (ushort)(uVar5 != 0) * 0x100 | (ushort)DAT_00002208 * 0x80 |
       (ushort)DAT_00002204 * 0x40 | (ushort)(uVar6 != 0) * 0x10 | (ushort)DAT_0000220a * 4 |
       (ushort)DAT_00002202;
  DAT_00002201 = !DAT_00002200;
  DAT_00002203 = !DAT_00002202;
  DAT_00002205 = !DAT_00002204;
  DAT_00002206 = DAT_00002202 || DAT_00002204;
  DAT_00002207 = !DAT_00002202 && !DAT_00002204;
  DAT_00002209 = !DAT_00002208;
  DAT_0000220b = !DAT_0000220a;
  DAT_0000220c = (int)uVar7 < (int)uVar1;
  DAT_0000220d = (int)uVar1 <= (int)uVar7;
  DAT_0000220e = (int)uVar7 <= (int)uVar1;
  DAT_0000220f = !DAT_00002204 && (int)uVar1 <= (int)uVar7;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmpxchg4_mv_constant_simple(void)

{
  uint uVar1;
  
  DAT_00002202 = 2 < uRam00000003;
  DAT_00002200 = SBORROW4(2,uRam00000003);
  DAT_00002208 = (int)(2 - uRam00000003) < 0;
  DAT_00002204 = uRam00000003 == 2;
  uVar1 = uRam00000003 ^ (uint)DAT_00002204 * (uRam00000003 ^ 2);
  DAT_00002206 = 1 < uRam00000003;
  DAT_00002207 = uRam00000003 < 2;
  DAT_0000220c = 2 < (int)uRam00000003;
  DAT_0000220d = (int)uRam00000003 < 3;
  DAT_0000220e = 1 < (int)uRam00000003;
  DAT_0000220f = (int)uRam00000003 < 2;
  uRam00000003 = uVar1;
  _DAT_00002000 = (uint)DAT_00002204 * (uVar1 & 2) ^ 2;
  _DAT_00002004 = 3;
  _DAT_00002008 = 4;
  _DAT_0000200c = 5;
  _DAT_00002010 = 6;
  _DAT_00002014 = 7;
  _DAT_00002018 = 8;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 =
       (ushort)DAT_00002200 * 0x800 | (ushort)DAT_00002208 * 0x80 | (ushort)DAT_00002204 * 0x40 |
       (ushort)DAT_00002202;
  DAT_00002201 = !DAT_00002200;
  DAT_00002203 = !DAT_00002202;
  DAT_00002205 = !DAT_00002204;
  DAT_00002209 = !DAT_00002208;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmpxchg4_mv_constant_complex1(void)

{
  uint uVar1;
  
  DAT_00002202 = &DAT_a3b17984 < _DAT_06671ad7;
  DAT_00002200 = SBORROW4(-0x5c4e867c,(int)_DAT_06671ad7);
  DAT_00002208 = (int)(&DAT_a3b17984 + -(int)_DAT_06671ad7) < 0;
  DAT_00002204 = _DAT_06671ad7 == &DAT_a3b17984;
  uVar1 = (uint)_DAT_06671ad7 ^ (uint)DAT_00002204 * ((uint)_DAT_06671ad7 ^ 0xa3b17984);
  _DAT_00002000 = (uint)DAT_00002204 * (uVar1 & 0xa3b17984) ^ 0xa3b17984;
  _DAT_00002004 = &DAT_06671ad7;
  _DAT_00002008 = 0x46685248;
  _DAT_0000200c = 0x392456c4;
  _DAT_00002010 = 0xbc8960a4;
  _DAT_00002014 = 0xad3c2d78;
  _DAT_00002018 = 0xe465e152;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 =
       (ushort)DAT_00002200 * 0x800 | (ushort)DAT_00002208 * 0x80 | (ushort)DAT_00002204 * 0x40 |
       (ushort)DAT_00002202;
  DAT_00002201 = !DAT_00002200;
  DAT_00002203 = !DAT_00002202;
  DAT_00002205 = !DAT_00002204;
  DAT_00002206 = (undefined *)0xa3b17983 < _DAT_06671ad7;
  DAT_00002207 = _DAT_06671ad7 < &DAT_a3b17984;
  DAT_00002209 = !DAT_00002208;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = -0x5c4e867c < (int)_DAT_06671ad7;
  DAT_0000220d = (int)_DAT_06671ad7 < -0x5c4e867b;
  DAT_0000220e = -0x5c4e867d < (int)_DAT_06671ad7;
  DAT_0000220f = (int)_DAT_06671ad7 < -0x5c4e867c;
  _DAT_06671ad7 = (undefined *)uVar1;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmpxchg4_mv_constant_complex2(void)

{
  uint uVar1;
  
  DAT_00002202 = &DAT_313ec0e8 < _DAT_496e81c3;
  DAT_00002200 = SBORROW4(0x313ec0e8,(int)_DAT_496e81c3);
  DAT_00002208 = (int)(&DAT_313ec0e8 + -(int)_DAT_496e81c3) < 0;
  DAT_00002204 = _DAT_496e81c3 == &DAT_313ec0e8;
  uVar1 = (uint)_DAT_496e81c3 ^ (uint)DAT_00002204 * ((uint)_DAT_496e81c3 ^ 0x313ec0e8);
  _DAT_00002000 = (uint)DAT_00002204 * (uVar1 & 0x313ec0e8) ^ 0x313ec0e8;
  _DAT_00002004 = &DAT_496e81c3;
  _DAT_00002008 = 0x1e3f6cb2;
  _DAT_0000200c = 0x4e6925b3;
  _DAT_00002010 = 0x4f312610;
  _DAT_00002014 = 0x2f37a4a5;
  _DAT_00002018 = 0x91a917b4;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 =
       (ushort)DAT_00002200 * 0x800 | 0x4600 | (ushort)DAT_00002208 * 0x80 |
       (ushort)DAT_00002204 * 0x40 | 0x14 | (ushort)DAT_00002202;
  DAT_00002201 = !DAT_00002200;
  DAT_00002203 = !DAT_00002202;
  DAT_00002205 = !DAT_00002204;
  DAT_00002206 = (undefined *)0x313ec0e7 < _DAT_496e81c3;
  DAT_00002207 = _DAT_496e81c3 < &DAT_313ec0e8;
  DAT_00002209 = !DAT_00002208;
  DAT_0000220a = 1;
  DAT_0000220b = 0;
  DAT_0000220c = 0x313ec0e8 < (int)_DAT_496e81c3;
  DAT_0000220d = (int)_DAT_496e81c3 < 0x313ec0e9;
  DAT_0000220e = 0x313ec0e7 < (int)_DAT_496e81c3;
  DAT_0000220f = (int)_DAT_496e81c3 < 0x313ec0e8;
  _DAT_496e81c3 = (undefined *)uVar1;
  return 0;
}



undefined4 cmpxchg5_mv_plain(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmpxchg5_mv_allregs(void)

{
  DAT_0000220a = (_DAT_00001100 & 4) != 0;
  DAT_00002200 = SBORROW1((char)_DAT_00001000,(char)_DAT_00001000);
  _DAT_00002000 = _DAT_00001000 & 0xffffff00;
  _DAT_00002004 = _DAT_00001004;
  _DAT_00002008 = _DAT_00001008;
  _DAT_0000200c = _DAT_0000100c;
  _DAT_00002010 = _DAT_00001010;
  _DAT_00002014 = _DAT_00001014;
  _DAT_00002018 = _DAT_00001018;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 =
       (ushort)((_DAT_00001100 & 0x4000) != 0) * 0x4000 | (ushort)DAT_00002200 * 0x800 |
       (ushort)((_DAT_00001100 & 0x400) != 0) * 0x400 |
       (ushort)((_DAT_00001100 & 0x200) != 0) * 0x200 |
       (ushort)((_DAT_00001100 & 0x100) != 0) * 0x100 | 0x40 |
       (ushort)((_DAT_00001100 & 0x10) != 0) * 0x10 | (ushort)DAT_0000220a * 4;
  DAT_00002201 = !DAT_00002200;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 1;
  DAT_00002205 = 0;
  DAT_00002206 = 1;
  DAT_00002207 = 0;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220b = !DAT_0000220a;
  DAT_0000220c = 0;
  DAT_0000220d = DAT_00002200 == false;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmpxchg5_mv_constant_simple(void)

{
  _DAT_00002000 = 0;
  _DAT_00002004 = 3;
  _DAT_00002008 = 4;
  _DAT_0000200c = 5;
  _DAT_00002010 = 6;
  _DAT_00002014 = 7;
  _DAT_00002018 = 8;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x40;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 1;
  DAT_00002205 = 0;
  DAT_00002206 = 1;
  DAT_00002207 = 0;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmpxchg5_mv_constant_complex1(void)

{
  _DAT_00002000 = 0xa3b17900;
  _DAT_00002004 = &DAT_06671ad7;
  _DAT_00002008 = 0x46685248;
  _DAT_0000200c = 0x392456c4;
  _DAT_00002010 = 0xbc8960a4;
  _DAT_00002014 = 0xad3c2d78;
  _DAT_00002018 = 0xe465e152;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x40;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 1;
  DAT_00002205 = 0;
  DAT_00002206 = 1;
  DAT_00002207 = 0;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmpxchg5_mv_constant_complex2(void)

{
  _DAT_00002000 = 0x313ec000;
  _DAT_00002004 = &DAT_496e81c3;
  _DAT_00002008 = 0x1e3f6cb2;
  _DAT_0000200c = 0x4e6925b3;
  _DAT_00002010 = 0x4f312610;
  _DAT_00002014 = 0x2f37a4a5;
  _DAT_00002018 = 0x91a917b4;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x4654;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 1;
  DAT_00002205 = 0;
  DAT_00002206 = 1;
  DAT_00002207 = 0;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 1;
  DAT_0000220b = 0;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



undefined4 cmpxchg_locked_mv_plain(void)

{
  uint in_EAX;
  uint *unaff_EBX;
  
  LOCK();
  *unaff_EBX = *unaff_EBX ^ (uint)(in_EAX == *unaff_EBX) * (*unaff_EBX ^ in_EAX);
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmpxchg_locked_mv_allregs(void)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  
  _DAT_00002018 = _DAT_00001018;
  _DAT_00002014 = _DAT_00001014;
  _DAT_00002010 = _DAT_00001010;
  _DAT_0000200c = _DAT_0000100c;
  _DAT_00002008 = _DAT_00001008;
  _DAT_00002004 = _DAT_00001004;
  uVar7 = _DAT_00001000;
  uVar2 = _DAT_00001100 & 0x4000;
  uVar3 = _DAT_00001100 & 0x400;
  uVar4 = _DAT_00001100 & 0x200;
  uVar5 = _DAT_00001100 & 0x100;
  uVar6 = _DAT_00001100 & 0x10;
  DAT_0000220a = (_DAT_00001100 & 4) != 0;
  LOCK();
  DAT_00002202 = _DAT_00001000 < *_DAT_00001004;
  DAT_00002200 = SBORROW4(_DAT_00001000,*_DAT_00001004);
  uVar1 = *_DAT_00001004;
  DAT_00002208 = (int)(_DAT_00001000 - uVar1) < 0;
  DAT_00002204 = _DAT_00001000 == uVar1;
  _DAT_00002050 = (undefined *)register0x00000010;
  *_DAT_00001004 = *_DAT_00001004 ^ (uint)DAT_00002204 * (*_DAT_00001004 ^ _DAT_00001000);
  _DAT_00002000 = uVar7 ^ (uint)DAT_00002204 * (uVar7 & *_DAT_00002004);
  _DAT_00002020 = _DAT_00002050 + -(int)register0x00000010;
  _DAT_00002100 =
       (ushort)(uVar2 != 0) * 0x4000 | (ushort)DAT_00002200 * 0x800 | (ushort)(uVar3 != 0) * 0x400 |
       (ushort)(uVar4 != 0) * 0x200 | (ushort)(uVar5 != 0) * 0x100 | (ushort)DAT_00002208 * 0x80 |
       (ushort)DAT_00002204 * 0x40 | (ushort)(uVar6 != 0) * 0x10 | (ushort)DAT_0000220a * 4 |
       (ushort)DAT_00002202;
  DAT_00002201 = !DAT_00002200;
  DAT_00002203 = !DAT_00002202;
  DAT_00002205 = !DAT_00002204;
  DAT_00002206 = DAT_00002202 || DAT_00002204;
  DAT_00002207 = !DAT_00002202 && !DAT_00002204;
  DAT_00002209 = !DAT_00002208;
  DAT_0000220b = !DAT_0000220a;
  DAT_0000220c = (int)uVar7 < (int)uVar1;
  DAT_0000220d = (int)uVar1 <= (int)uVar7;
  DAT_0000220e = (int)uVar7 <= (int)uVar1;
  DAT_0000220f = !DAT_00002204 && (int)uVar1 <= (int)uVar7;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmpxchg_locked_mv_constant_simple(void)

{
  uint uVar1;
  
  LOCK();
  DAT_00002202 = 2 < uRam00000003;
  DAT_00002200 = SBORROW4(2,uRam00000003);
  DAT_00002208 = (int)(2 - uRam00000003) < 0;
  DAT_00002204 = uRam00000003 == 2;
  uVar1 = uRam00000003 ^ (uint)DAT_00002204 * (uRam00000003 ^ 2);
  DAT_00002206 = 1 < uRam00000003;
  DAT_00002207 = uRam00000003 < 2;
  DAT_0000220c = 2 < (int)uRam00000003;
  DAT_0000220d = (int)uRam00000003 < 3;
  DAT_0000220e = 1 < (int)uRam00000003;
  DAT_0000220f = (int)uRam00000003 < 2;
  uRam00000003 = uVar1;
  _DAT_00002000 = (uint)DAT_00002204 * (uVar1 & 2) ^ 2;
  _DAT_00002004 = 3;
  _DAT_00002008 = 4;
  _DAT_0000200c = 5;
  _DAT_00002010 = 6;
  _DAT_00002014 = 7;
  _DAT_00002018 = 8;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 =
       (ushort)DAT_00002200 * 0x800 | (ushort)DAT_00002208 * 0x80 | (ushort)DAT_00002204 * 0x40 |
       (ushort)DAT_00002202;
  DAT_00002201 = !DAT_00002200;
  DAT_00002203 = !DAT_00002202;
  DAT_00002205 = !DAT_00002204;
  DAT_00002209 = !DAT_00002208;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmpxchg_locked_mv_constant_complex1(void)

{
  uint uVar1;
  
  LOCK();
  DAT_00002202 = &DAT_a3b17984 < _DAT_06671ad7;
  DAT_00002200 = SBORROW4(-0x5c4e867c,(int)_DAT_06671ad7);
  DAT_00002208 = (int)(&DAT_a3b17984 + -(int)_DAT_06671ad7) < 0;
  DAT_00002204 = _DAT_06671ad7 == &DAT_a3b17984;
  uVar1 = (uint)_DAT_06671ad7 ^ (uint)DAT_00002204 * ((uint)_DAT_06671ad7 ^ 0xa3b17984);
  _DAT_00002000 = (uint)DAT_00002204 * (uVar1 & 0xa3b17984) ^ 0xa3b17984;
  _DAT_00002004 = &DAT_06671ad7;
  _DAT_00002008 = 0x46685248;
  _DAT_0000200c = 0x392456c4;
  _DAT_00002010 = 0xbc8960a4;
  _DAT_00002014 = 0xad3c2d78;
  _DAT_00002018 = 0xe465e152;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 =
       (ushort)DAT_00002200 * 0x800 | (ushort)DAT_00002208 * 0x80 | (ushort)DAT_00002204 * 0x40 |
       (ushort)DAT_00002202;
  DAT_00002201 = !DAT_00002200;
  DAT_00002203 = !DAT_00002202;
  DAT_00002205 = !DAT_00002204;
  DAT_00002206 = (undefined *)0xa3b17983 < _DAT_06671ad7;
  DAT_00002207 = _DAT_06671ad7 < &DAT_a3b17984;
  DAT_00002209 = !DAT_00002208;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = -0x5c4e867c < (int)_DAT_06671ad7;
  DAT_0000220d = (int)_DAT_06671ad7 < -0x5c4e867b;
  DAT_0000220e = -0x5c4e867d < (int)_DAT_06671ad7;
  DAT_0000220f = (int)_DAT_06671ad7 < -0x5c4e867c;
  _DAT_06671ad7 = (undefined *)uVar1;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmpxchg_locked_mv_constant_complex2(void)

{
  uint uVar1;
  
  LOCK();
  DAT_00002202 = &DAT_313ec0e8 < _DAT_496e81c3;
  DAT_00002200 = SBORROW4(0x313ec0e8,(int)_DAT_496e81c3);
  DAT_00002208 = (int)(&DAT_313ec0e8 + -(int)_DAT_496e81c3) < 0;
  DAT_00002204 = _DAT_496e81c3 == &DAT_313ec0e8;
  uVar1 = (uint)_DAT_496e81c3 ^ (uint)DAT_00002204 * ((uint)_DAT_496e81c3 ^ 0x313ec0e8);
  _DAT_00002000 = (uint)DAT_00002204 * (uVar1 & 0x313ec0e8) ^ 0x313ec0e8;
  _DAT_00002004 = &DAT_496e81c3;
  _DAT_00002008 = 0x1e3f6cb2;
  _DAT_0000200c = 0x4e6925b3;
  _DAT_00002010 = 0x4f312610;
  _DAT_00002014 = 0x2f37a4a5;
  _DAT_00002018 = 0x91a917b4;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 =
       (ushort)DAT_00002200 * 0x800 | 0x4600 | (ushort)DAT_00002208 * 0x80 |
       (ushort)DAT_00002204 * 0x40 | 0x14 | (ushort)DAT_00002202;
  DAT_00002201 = !DAT_00002200;
  DAT_00002203 = !DAT_00002202;
  DAT_00002205 = !DAT_00002204;
  DAT_00002206 = (undefined *)0x313ec0e7 < _DAT_496e81c3;
  DAT_00002207 = _DAT_496e81c3 < &DAT_313ec0e8;
  DAT_00002209 = !DAT_00002208;
  DAT_0000220a = 1;
  DAT_0000220b = 0;
  DAT_0000220c = 0x313ec0e8 < (int)_DAT_496e81c3;
  DAT_0000220d = (int)_DAT_496e81c3 < 0x313ec0e9;
  DAT_0000220e = 0x313ec0e7 < (int)_DAT_496e81c3;
  DAT_0000220f = (int)_DAT_496e81c3 < 0x313ec0e8;
  _DAT_496e81c3 = (undefined *)uVar1;
  return 0;
}



longlong cpuid_plain(void)

{
  int iVar1;
  int in_EAX;
  
  if (in_EAX == 0) {
    iVar1 = cpuid_basic_info(0);
  }
  else {
    if (in_EAX == 1) {
      iVar1 = cpuid_Version_info(1);
    }
    else {
      if (in_EAX == 2) {
        iVar1 = cpuid_cache_tlb_info(2);
      }
      else {
        if (in_EAX == 3) {
          iVar1 = cpuid_serial_info(3);
        }
        else {
          if (in_EAX == 4) {
            iVar1 = cpuid_Deterministic_Cache_Parameters_info(4);
          }
          else {
            if (in_EAX == 5) {
              iVar1 = cpuid_MONITOR_MWAIT_Features_info(5);
            }
            else {
              if (in_EAX == 6) {
                iVar1 = cpuid_Thermal_Power_Management_info(6);
              }
              else {
                if (in_EAX == 7) {
                  iVar1 = cpuid_Extended_Feature_Enumeration_info(7);
                }
                else {
                  if (in_EAX == 9) {
                    iVar1 = cpuid_Direct_Cache_Access_info(9);
                  }
                  else {
                    if (in_EAX == 10) {
                      iVar1 = cpuid_Architectural_Performance_Monitoring_info(10);
                    }
                    else {
                      if (in_EAX == 0xb) {
                        iVar1 = cpuid_Extended_Topology_info(0xb);
                      }
                      else {
                        if (in_EAX == 0xd) {
                          iVar1 = cpuid_Processor_Extended_States_info(0xd);
                        }
                        else {
                          if (in_EAX == 0xf) {
                            iVar1 = cpuid_Quality_of_Service_info(0xf);
                          }
                          else {
                            if (in_EAX == -0x7ffffffe) {
                              iVar1 = cpuid_brand_part1_info(0x80000002);
                            }
                            else {
                              if (in_EAX == -0x7ffffffd) {
                                iVar1 = cpuid_brand_part2_info(0x80000003);
                              }
                              else {
                                if (in_EAX == -0x7ffffffc) {
                                  iVar1 = cpuid_brand_part3_info(0x80000004);
                                }
                                else {
                                  iVar1 = cpuid(in_EAX);
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return (ulonglong)*(uint *)(iVar1 + 8) << 0x20;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cpuid_allregs(void)

{
  undefined4 *puVar1;
  
  DAT_00002200 = (_DAT_00001100 & 0x800) != 0;
  DAT_00002208 = (_DAT_00001100 & 0x80) != 0;
  DAT_00002204 = (_DAT_00001100 & 0x40) != 0;
  DAT_0000220a = (_DAT_00001100 & 4) != 0;
  DAT_00002202 = (_DAT_00001100 & 1) != 0;
  if (_DAT_00001000 == 0) {
    puVar1 = (undefined4 *)cpuid_basic_info(0);
  }
  else {
    if (_DAT_00001000 == 1) {
      puVar1 = (undefined4 *)cpuid_Version_info(1);
    }
    else {
      if (_DAT_00001000 == 2) {
        puVar1 = (undefined4 *)cpuid_cache_tlb_info(2);
      }
      else {
        if (_DAT_00001000 == 3) {
          puVar1 = (undefined4 *)cpuid_serial_info(3);
        }
        else {
          if (_DAT_00001000 == 4) {
            puVar1 = (undefined4 *)cpuid_Deterministic_Cache_Parameters_info(4);
          }
          else {
            if (_DAT_00001000 == 5) {
              puVar1 = (undefined4 *)cpuid_MONITOR_MWAIT_Features_info(5);
            }
            else {
              if (_DAT_00001000 == 6) {
                puVar1 = (undefined4 *)cpuid_Thermal_Power_Management_info(6);
              }
              else {
                if (_DAT_00001000 == 7) {
                  puVar1 = (undefined4 *)cpuid_Extended_Feature_Enumeration_info(7);
                }
                else {
                  if (_DAT_00001000 == 9) {
                    puVar1 = (undefined4 *)cpuid_Direct_Cache_Access_info(9);
                  }
                  else {
                    if (_DAT_00001000 == 10) {
                      puVar1 = (undefined4 *)cpuid_Architectural_Performance_Monitoring_info(10);
                    }
                    else {
                      if (_DAT_00001000 == 0xb) {
                        puVar1 = (undefined4 *)cpuid_Extended_Topology_info(0xb);
                      }
                      else {
                        if (_DAT_00001000 == 0xd) {
                          puVar1 = (undefined4 *)cpuid_Processor_Extended_States_info(0xd);
                        }
                        else {
                          if (_DAT_00001000 == 0xf) {
                            puVar1 = (undefined4 *)cpuid_Quality_of_Service_info(0xf);
                          }
                          else {
                            if (_DAT_00001000 == -0x7ffffffe) {
                              puVar1 = (undefined4 *)cpuid_brand_part1_info(0x80000002);
                            }
                            else {
                              if (_DAT_00001000 == -0x7ffffffd) {
                                puVar1 = (undefined4 *)cpuid_brand_part2_info(0x80000003);
                              }
                              else {
                                if (_DAT_00001000 == -0x7ffffffc) {
                                  puVar1 = (undefined4 *)cpuid_brand_part3_info(0x80000004);
                                }
                                else {
                                  puVar1 = (undefined4 *)cpuid(_DAT_00001000);
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  _DAT_00002000 = *puVar1;
  _DAT_00002004 = puVar1[1];
  _DAT_00002008 = puVar1[3];
  _DAT_0000200c = puVar1[2];
  _DAT_00002010 = _DAT_00001010;
  _DAT_00002014 = _DAT_00001014;
  _DAT_00002018 = _DAT_00001018;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 =
       (ushort)((_DAT_00001100 & 0x4000) != 0) * 0x4000 | (ushort)DAT_00002200 * 0x800 |
       (ushort)((_DAT_00001100 & 0x400) != 0) * 0x400 |
       (ushort)((_DAT_00001100 & 0x200) != 0) * 0x200 |
       (ushort)((_DAT_00001100 & 0x100) != 0) * 0x100 | (ushort)DAT_00002208 * 0x80 |
       (ushort)DAT_00002204 * 0x40 | (ushort)((_DAT_00001100 & 0x10) != 0) * 0x10 |
       (ushort)DAT_0000220a * 4 | (ushort)DAT_00002202;
  DAT_00002201 = !DAT_00002200;
  DAT_00002203 = !DAT_00002202;
  DAT_00002205 = !DAT_00002204;
  DAT_00002206 = DAT_00002202 || DAT_00002204;
  DAT_00002207 = !DAT_00002202 && !DAT_00002204;
  DAT_00002209 = !DAT_00002208;
  DAT_0000220b = !DAT_0000220a;
  DAT_0000220c = DAT_00002200 != DAT_00002208;
  DAT_0000220d = DAT_00002200 == DAT_00002208;
  DAT_0000220e = DAT_00002204 || DAT_00002200 != DAT_00002208;
  DAT_0000220f = !DAT_00002204 && DAT_00002200 == DAT_00002208;
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804ac6a)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cpuid_constant_simple(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)cpuid_cache_tlb_info(2);
  _DAT_00002000 = *puVar1;
  _DAT_00002004 = puVar1[1];
  _DAT_00002008 = puVar1[3];
  _DAT_0000200c = puVar1[2];
  _DAT_00002010 = 6;
  _DAT_00002014 = 7;
  _DAT_00002018 = 8;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 0;
  DAT_0000220f = 1;
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804ad50)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cpuid_constant_complex1(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)cpuid(0xa3b17984);
  _DAT_00002000 = *puVar1;
  _DAT_00002004 = puVar1[1];
  _DAT_00002008 = puVar1[3];
  _DAT_0000200c = puVar1[2];
  _DAT_00002010 = 0xbc8960a4;
  _DAT_00002014 = 0xad3c2d78;
  _DAT_00002018 = 0xe465e152;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 0;
  DAT_0000220f = 1;
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804ae37)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cpuid_constant_complex2(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)cpuid(0x313ec0e8);
  _DAT_00002000 = *puVar1;
  _DAT_00002004 = puVar1[1];
  _DAT_00002008 = puVar1[3];
  _DAT_0000200c = puVar1[2];
  _DAT_00002010 = 0x4f312610;
  _DAT_00002014 = 0x2f37a4a5;
  _DAT_00002018 = 0x91a917b4;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x4ed5;
  DAT_00002200 = 1;
  DAT_00002201 = 0;
  DAT_00002202 = 1;
  DAT_00002203 = 0;
  DAT_00002204 = 1;
  DAT_00002205 = 0;
  DAT_00002206 = 1;
  DAT_00002207 = 0;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 1;
  DAT_0000220b = 0;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



undefined4 invd_plain(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 invd_allregs(void)

{
  DAT_00002200 = (_DAT_00001100 & 0x800) != 0;
  DAT_00002208 = (_DAT_00001100 & 0x80) != 0;
  DAT_00002204 = (_DAT_00001100 & 0x40) != 0;
  DAT_0000220a = (_DAT_00001100 & 4) != 0;
  DAT_00002202 = (_DAT_00001100 & 1) != 0;
  _DAT_00002000 = _DAT_00001000;
  _DAT_00002004 = _DAT_00001004;
  _DAT_00002008 = _DAT_00001008;
  _DAT_0000200c = _DAT_0000100c;
  _DAT_00002010 = _DAT_00001010;
  _DAT_00002014 = _DAT_00001014;
  _DAT_00002018 = _DAT_00001018;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 =
       (ushort)((_DAT_00001100 & 0x4000) != 0) * 0x4000 | (ushort)DAT_00002200 * 0x800 |
       (ushort)((_DAT_00001100 & 0x400) != 0) * 0x400 |
       (ushort)((_DAT_00001100 & 0x200) != 0) * 0x200 |
       (ushort)((_DAT_00001100 & 0x100) != 0) * 0x100 | (ushort)DAT_00002208 * 0x80 |
       (ushort)DAT_00002204 * 0x40 | (ushort)((_DAT_00001100 & 0x10) != 0) * 0x10 |
       (ushort)DAT_0000220a * 4 | (ushort)DAT_00002202;
  DAT_00002201 = !DAT_00002200;
  DAT_00002203 = !DAT_00002202;
  DAT_00002205 = !DAT_00002204;
  DAT_00002206 = DAT_00002202 || DAT_00002204;
  DAT_00002207 = !DAT_00002202 && !DAT_00002204;
  DAT_00002209 = !DAT_00002208;
  DAT_0000220b = !DAT_0000220a;
  DAT_0000220c = DAT_00002200 != DAT_00002208;
  DAT_0000220d = DAT_00002200 == DAT_00002208;
  DAT_0000220e = DAT_00002204 || DAT_00002200 != DAT_00002208;
  DAT_0000220f = !DAT_00002204 && DAT_00002200 == DAT_00002208;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 invd_constant_simple(void)

{
  _DAT_00002000 = 2;
  _DAT_00002004 = 3;
  _DAT_00002008 = 4;
  _DAT_0000200c = 5;
  _DAT_00002010 = 6;
  _DAT_00002014 = 7;
  _DAT_00002018 = 8;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 0;
  DAT_0000220f = 1;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 invd_constant_complex1(void)

{
  _DAT_00002000 = &DAT_a3b17984;
  _DAT_00002004 = &DAT_06671ad7;
  _DAT_00002008 = 0x46685248;
  _DAT_0000200c = 0x392456c4;
  _DAT_00002010 = 0xbc8960a4;
  _DAT_00002014 = 0xad3c2d78;
  _DAT_00002018 = 0xe465e152;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 0;
  DAT_0000220f = 1;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 invd_constant_complex2(void)

{
  _DAT_00002000 = &DAT_313ec0e8;
  _DAT_00002004 = &DAT_496e81c3;
  _DAT_00002008 = 0x1e3f6cb2;
  _DAT_0000200c = 0x4e6925b3;
  _DAT_00002010 = 0x4f312610;
  _DAT_00002014 = 0x2f37a4a5;
  _DAT_00002018 = 0x91a917b4;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x4ed5;
  DAT_00002200 = 1;
  DAT_00002201 = 0;
  DAT_00002202 = 1;
  DAT_00002203 = 0;
  DAT_00002204 = 1;
  DAT_00002205 = 0;
  DAT_00002206 = 1;
  DAT_00002207 = 0;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 1;
  DAT_0000220b = 0;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



undefined4 invlpg_plain(void)

{
  undefined4 in_EAX;
  
  invlpg(in_EAX);
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 invlpg_allregs(void)

{
  DAT_00002200 = (_DAT_00001100 & 0x800) != 0;
  DAT_00002208 = (_DAT_00001100 & 0x80) != 0;
  DAT_00002204 = (_DAT_00001100 & 0x40) != 0;
  DAT_0000220a = (_DAT_00001100 & 4) != 0;
  DAT_00002202 = (_DAT_00001100 & 1) != 0;
  invlpg(_DAT_00001000);
  _DAT_00002000 = _DAT_00001000;
  _DAT_00002004 = _DAT_00001004;
  _DAT_00002008 = _DAT_00001008;
  _DAT_0000200c = _DAT_0000100c;
  _DAT_00002010 = _DAT_00001010;
  _DAT_00002014 = _DAT_00001014;
  _DAT_00002018 = _DAT_00001018;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 =
       (ushort)((_DAT_00001100 & 0x4000) != 0) * 0x4000 | (ushort)DAT_00002200 * 0x800 |
       (ushort)((_DAT_00001100 & 0x400) != 0) * 0x400 |
       (ushort)((_DAT_00001100 & 0x200) != 0) * 0x200 |
       (ushort)((_DAT_00001100 & 0x100) != 0) * 0x100 | (ushort)DAT_00002208 * 0x80 |
       (ushort)DAT_00002204 * 0x40 | (ushort)((_DAT_00001100 & 0x10) != 0) * 0x10 |
       (ushort)DAT_0000220a * 4 | (ushort)DAT_00002202;
  DAT_00002201 = !DAT_00002200;
  DAT_00002203 = !DAT_00002202;
  DAT_00002205 = !DAT_00002204;
  DAT_00002206 = DAT_00002202 || DAT_00002204;
  DAT_00002207 = !DAT_00002202 && !DAT_00002204;
  DAT_00002209 = !DAT_00002208;
  DAT_0000220b = !DAT_0000220a;
  DAT_0000220c = DAT_00002200 != DAT_00002208;
  DAT_0000220d = DAT_00002200 == DAT_00002208;
  DAT_0000220e = DAT_00002204 || DAT_00002200 != DAT_00002208;
  DAT_0000220f = !DAT_00002204 && DAT_00002200 == DAT_00002208;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 invlpg_constant_simple(void)

{
  invlpg(2);
  _DAT_00002000 = 2;
  _DAT_00002004 = 3;
  _DAT_00002008 = 4;
  _DAT_0000200c = 5;
  _DAT_00002010 = 6;
  _DAT_00002014 = 7;
  _DAT_00002018 = 8;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 0;
  DAT_0000220f = 1;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 invlpg_constant_complex1(void)

{
  invlpg(0xa3b17984);
  _DAT_00002000 = &DAT_a3b17984;
  _DAT_00002004 = &DAT_06671ad7;
  _DAT_00002008 = 0x46685248;
  _DAT_0000200c = 0x392456c4;
  _DAT_00002010 = 0xbc8960a4;
  _DAT_00002014 = 0xad3c2d78;
  _DAT_00002018 = 0xe465e152;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 0;
  DAT_0000220f = 1;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 invlpg_constant_complex2(void)

{
  invlpg(0x313ec0e8);
  _DAT_00002000 = &DAT_313ec0e8;
  _DAT_00002004 = &DAT_496e81c3;
  _DAT_00002008 = 0x1e3f6cb2;
  _DAT_0000200c = 0x4e6925b3;
  _DAT_00002010 = 0x4f312610;
  _DAT_00002014 = 0x2f37a4a5;
  _DAT_00002018 = 0x91a917b4;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x4ed5;
  DAT_00002200 = 1;
  DAT_00002201 = 0;
  DAT_00002202 = 1;
  DAT_00002203 = 0;
  DAT_00002204 = 1;
  DAT_00002205 = 0;
  DAT_00002206 = 1;
  DAT_00002207 = 0;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 1;
  DAT_0000220b = 0;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



undefined4 wbinvd_plain(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 wbinvd_allregs(void)

{
  DAT_00002200 = (_DAT_00001100 & 0x800) != 0;
  DAT_00002208 = (_DAT_00001100 & 0x80) != 0;
  DAT_00002204 = (_DAT_00001100 & 0x40) != 0;
  DAT_0000220a = (_DAT_00001100 & 4) != 0;
  DAT_00002202 = (_DAT_00001100 & 1) != 0;
  _DAT_00002000 = _DAT_00001000;
  _DAT_00002004 = _DAT_00001004;
  _DAT_00002008 = _DAT_00001008;
  _DAT_0000200c = _DAT_0000100c;
  _DAT_00002010 = _DAT_00001010;
  _DAT_00002014 = _DAT_00001014;
  _DAT_00002018 = _DAT_00001018;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 =
       (ushort)((_DAT_00001100 & 0x4000) != 0) * 0x4000 | (ushort)DAT_00002200 * 0x800 |
       (ushort)((_DAT_00001100 & 0x400) != 0) * 0x400 |
       (ushort)((_DAT_00001100 & 0x200) != 0) * 0x200 |
       (ushort)((_DAT_00001100 & 0x100) != 0) * 0x100 | (ushort)DAT_00002208 * 0x80 |
       (ushort)DAT_00002204 * 0x40 | (ushort)((_DAT_00001100 & 0x10) != 0) * 0x10 |
       (ushort)DAT_0000220a * 4 | (ushort)DAT_00002202;
  DAT_00002201 = !DAT_00002200;
  DAT_00002203 = !DAT_00002202;
  DAT_00002205 = !DAT_00002204;
  DAT_00002206 = DAT_00002202 || DAT_00002204;
  DAT_00002207 = !DAT_00002202 && !DAT_00002204;
  DAT_00002209 = !DAT_00002208;
  DAT_0000220b = !DAT_0000220a;
  DAT_0000220c = DAT_00002200 != DAT_00002208;
  DAT_0000220d = DAT_00002200 == DAT_00002208;
  DAT_0000220e = DAT_00002204 || DAT_00002200 != DAT_00002208;
  DAT_0000220f = !DAT_00002204 && DAT_00002200 == DAT_00002208;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 wbinvd_constant_simple(void)

{
  _DAT_00002000 = 2;
  _DAT_00002004 = 3;
  _DAT_00002008 = 4;
  _DAT_0000200c = 5;
  _DAT_00002010 = 6;
  _DAT_00002014 = 7;
  _DAT_00002018 = 8;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 0;
  DAT_0000220f = 1;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 wbinvd_constant_complex1(void)

{
  _DAT_00002000 = &DAT_a3b17984;
  _DAT_00002004 = &DAT_06671ad7;
  _DAT_00002008 = 0x46685248;
  _DAT_0000200c = 0x392456c4;
  _DAT_00002010 = 0xbc8960a4;
  _DAT_00002014 = 0xad3c2d78;
  _DAT_00002018 = 0xe465e152;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 0;
  DAT_0000220f = 1;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 wbinvd_constant_complex2(void)

{
  _DAT_00002000 = &DAT_313ec0e8;
  _DAT_00002004 = &DAT_496e81c3;
  _DAT_00002008 = 0x1e3f6cb2;
  _DAT_0000200c = 0x4e6925b3;
  _DAT_00002010 = 0x4f312610;
  _DAT_00002014 = 0x2f37a4a5;
  _DAT_00002018 = 0x91a917b4;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x4ed5;
  DAT_00002200 = 1;
  DAT_00002201 = 0;
  DAT_00002202 = 1;
  DAT_00002203 = 0;
  DAT_00002204 = 1;
  DAT_00002205 = 0;
  DAT_00002206 = 1;
  DAT_00002207 = 0;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 1;
  DAT_0000220b = 0;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



undefined4 xadd1_mv_plain(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 xadd1_mv_allregs(void)

{
  byte bVar1;
  byte bVar2;
  
  DAT_0000220a = (_DAT_00001100 & 4) != 0;
  bVar1 = (byte)_DAT_00001000;
  bVar2 = (byte)_DAT_00001004;
  DAT_00002202 = CARRY1(bVar2,bVar1);
  DAT_00002200 = SCARRY1(bVar2,bVar1);
  bVar2 = bVar2 + bVar1;
  DAT_00002208 = (char)bVar2 < '\0';
  DAT_00002204 = bVar2 == 0;
  _DAT_00002000 = _DAT_00001000 & 0xffffff00 | _DAT_00001004 & 0xff;
  _DAT_00002004 = _DAT_00001004 & 0xffffff00 | (uint)bVar2;
  _DAT_00002008 = _DAT_00001008;
  _DAT_0000200c = _DAT_0000100c;
  _DAT_00002010 = _DAT_00001010;
  _DAT_00002014 = _DAT_00001014;
  _DAT_00002018 = _DAT_00001018;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 =
       (ushort)((_DAT_00001100 & 0x4000) != 0) * 0x4000 | (ushort)DAT_00002200 * 0x800 |
       (ushort)((_DAT_00001100 & 0x400) != 0) * 0x400 |
       (ushort)((_DAT_00001100 & 0x200) != 0) * 0x200 |
       (ushort)((_DAT_00001100 & 0x100) != 0) * 0x100 | (ushort)DAT_00002208 * 0x80 |
       (ushort)DAT_00002204 * 0x40 | (ushort)((_DAT_00001100 & 0x10) != 0) * 0x10 |
       (ushort)DAT_0000220a * 4 | (ushort)DAT_00002202;
  DAT_00002201 = !DAT_00002200;
  DAT_00002203 = !DAT_00002202;
  DAT_00002205 = !DAT_00002204;
  DAT_00002206 = DAT_00002202 || DAT_00002204;
  DAT_00002207 = !DAT_00002202 && !DAT_00002204;
  DAT_00002209 = !DAT_00002208;
  DAT_0000220b = !DAT_0000220a;
  DAT_0000220c = DAT_00002200 != DAT_00002208;
  DAT_0000220d = DAT_00002200 == DAT_00002208;
  DAT_0000220e = DAT_00002204 || DAT_00002200 != DAT_00002208;
  DAT_0000220f = !DAT_00002204 && DAT_00002200 == DAT_00002208;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 xadd1_mv_constant_simple(void)

{
  _DAT_00002000 = 3;
  _DAT_00002004 = 5;
  _DAT_00002008 = 4;
  _DAT_0000200c = 5;
  _DAT_00002010 = 6;
  _DAT_00002014 = 7;
  _DAT_00002018 = 8;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 0;
  DAT_0000220f = 1;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 xadd1_mv_constant_complex1(void)

{
  _DAT_00002000 = 0xa3b179d7;
  _DAT_00002004 = 0x6671a5b;
  _DAT_00002008 = 0x46685248;
  _DAT_0000200c = 0x392456c4;
  _DAT_00002010 = 0xbc8960a4;
  _DAT_00002014 = 0xad3c2d78;
  _DAT_00002018 = 0xe465e152;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x801;
  DAT_00002200 = 1;
  DAT_00002201 = 0;
  DAT_00002202 = 1;
  DAT_00002203 = 0;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 1;
  DAT_00002207 = 0;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 1;
  DAT_0000220d = 0;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 xadd1_mv_constant_complex2(void)

{
  _DAT_00002000 = 0x313ec0c3;
  _DAT_00002004 = 0x496e81ab;
  _DAT_00002008 = 0x1e3f6cb2;
  _DAT_0000200c = 0x4e6925b3;
  _DAT_00002010 = 0x4f312610;
  _DAT_00002014 = 0x2f37a4a5;
  _DAT_00002018 = 0x91a917b4;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x4695;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 1;
  DAT_00002203 = 0;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 1;
  DAT_00002207 = 0;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 1;
  DAT_0000220b = 0;
  DAT_0000220c = 1;
  DAT_0000220d = 0;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



undefined4 xadd2_mv_plain(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 xadd2_mv_allregs(void)

{
  ushort uVar1;
  ushort uVar2;
  
  DAT_0000220a = (_DAT_00001100 & 4) != 0;
  uVar1 = (ushort)_DAT_00001000;
  uVar2 = (ushort)_DAT_00001004;
  DAT_00002202 = CARRY2(uVar2,uVar1);
  DAT_00002200 = SCARRY2(uVar2,uVar1);
  uVar2 = uVar2 + uVar1;
  DAT_00002208 = (short)uVar2 < 0;
  DAT_00002204 = uVar2 == 0;
  _DAT_00002000 = _DAT_00001000 & 0xffff0000 | _DAT_00001004 & 0xffff;
  _DAT_00002004 = _DAT_00001004 & 0xffff0000 | (uint)uVar2;
  _DAT_00002008 = _DAT_00001008;
  _DAT_0000200c = _DAT_0000100c;
  _DAT_00002010 = _DAT_00001010;
  _DAT_00002014 = _DAT_00001014;
  _DAT_00002018 = _DAT_00001018;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 =
       (ushort)((_DAT_00001100 & 0x4000) != 0) * 0x4000 | (ushort)DAT_00002200 * 0x800 |
       (ushort)((_DAT_00001100 & 0x400) != 0) * 0x400 |
       (ushort)((_DAT_00001100 & 0x200) != 0) * 0x200 |
       (ushort)((_DAT_00001100 & 0x100) != 0) * 0x100 | (ushort)DAT_00002208 * 0x80 |
       (ushort)DAT_00002204 * 0x40 | (ushort)((_DAT_00001100 & 0x10) != 0) * 0x10 |
       (ushort)DAT_0000220a * 4 | (ushort)DAT_00002202;
  DAT_00002201 = !DAT_00002200;
  DAT_00002203 = !DAT_00002202;
  DAT_00002205 = !DAT_00002204;
  DAT_00002206 = DAT_00002202 || DAT_00002204;
  DAT_00002207 = !DAT_00002202 && !DAT_00002204;
  DAT_00002209 = !DAT_00002208;
  DAT_0000220b = !DAT_0000220a;
  DAT_0000220c = DAT_00002200 != DAT_00002208;
  DAT_0000220d = DAT_00002200 == DAT_00002208;
  DAT_0000220e = DAT_00002204 || DAT_00002200 != DAT_00002208;
  DAT_0000220f = !DAT_00002204 && DAT_00002200 == DAT_00002208;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 xadd2_mv_constant_simple(void)

{
  _DAT_00002000 = 3;
  _DAT_00002004 = 5;
  _DAT_00002008 = 4;
  _DAT_0000200c = 5;
  _DAT_00002010 = 6;
  _DAT_00002014 = 7;
  _DAT_00002018 = 8;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 0;
  DAT_0000220f = 1;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 xadd2_mv_constant_complex1(void)

{
  _DAT_00002000 = 0xa3b11ad7;
  _DAT_00002004 = 0x667945b;
  _DAT_00002008 = 0x46685248;
  _DAT_0000200c = 0x392456c4;
  _DAT_00002010 = 0xbc8960a4;
  _DAT_00002014 = 0xad3c2d78;
  _DAT_00002018 = 0xe465e152;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x880;
  DAT_00002200 = 1;
  DAT_00002201 = 0;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 0;
  DAT_0000220f = 1;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 xadd2_mv_constant_complex2(void)

{
  _DAT_00002000 = 0x313e81c3;
  _DAT_00002004 = 0x496e42ab;
  _DAT_00002008 = 0x1e3f6cb2;
  _DAT_0000200c = 0x4e6925b3;
  _DAT_00002010 = 0x4f312610;
  _DAT_00002014 = 0x2f37a4a5;
  _DAT_00002018 = 0x91a917b4;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x4e15;
  DAT_00002200 = 1;
  DAT_00002201 = 0;
  DAT_00002202 = 1;
  DAT_00002203 = 0;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 1;
  DAT_00002207 = 0;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 1;
  DAT_0000220b = 0;
  DAT_0000220c = 1;
  DAT_0000220d = 0;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



undefined4 xadd3_plain(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 xadd3_allregs(void)

{
  DAT_0000220a = (_DAT_00001100 & 4) != 0;
  DAT_00002202 = CARRY4(_DAT_00001004,_DAT_00001000);
  DAT_00002200 = SCARRY4(_DAT_00001004,_DAT_00001000);
  _DAT_00002004 = _DAT_00001004 + _DAT_00001000;
  DAT_00002208 = _DAT_00002004 < 0;
  DAT_00002204 = _DAT_00002004 == 0;
  _DAT_00002000 = _DAT_00001004;
  _DAT_00002008 = _DAT_00001008;
  _DAT_0000200c = _DAT_0000100c;
  _DAT_00002010 = _DAT_00001010;
  _DAT_00002014 = _DAT_00001014;
  _DAT_00002018 = _DAT_00001018;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 =
       (ushort)((_DAT_00001100 & 0x4000) != 0) * 0x4000 | (ushort)DAT_00002200 * 0x800 |
       (ushort)((_DAT_00001100 & 0x400) != 0) * 0x400 |
       (ushort)((_DAT_00001100 & 0x200) != 0) * 0x200 |
       (ushort)((_DAT_00001100 & 0x100) != 0) * 0x100 | (ushort)DAT_00002208 * 0x80 |
       (ushort)DAT_00002204 * 0x40 | (ushort)((_DAT_00001100 & 0x10) != 0) * 0x10 |
       (ushort)DAT_0000220a * 4 | (ushort)DAT_00002202;
  DAT_00002201 = !DAT_00002200;
  DAT_00002203 = !DAT_00002202;
  DAT_00002205 = !DAT_00002204;
  DAT_00002206 = DAT_00002202 || DAT_00002204;
  DAT_00002207 = !DAT_00002202 && !DAT_00002204;
  DAT_00002209 = !DAT_00002208;
  DAT_0000220b = !DAT_0000220a;
  DAT_0000220c = DAT_00002200 != DAT_00002208;
  DAT_0000220d = DAT_00002200 == DAT_00002208;
  DAT_0000220e = DAT_00002204 || DAT_00002200 != DAT_00002208;
  DAT_0000220f = !DAT_00002204 && DAT_00002200 == DAT_00002208;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 xadd3_constant_simple(void)

{
  _DAT_00002000 = 3;
  _DAT_00002004 = 5;
  _DAT_00002008 = 4;
  _DAT_0000200c = 5;
  _DAT_00002010 = 6;
  _DAT_00002014 = 7;
  _DAT_00002018 = 8;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 0;
  DAT_0000220f = 1;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 xadd3_constant_complex1(void)

{
  _DAT_00002000 = &DAT_06671ad7;
  _DAT_00002004 = 0xaa18945b;
  _DAT_00002008 = 0x46685248;
  _DAT_0000200c = 0x392456c4;
  _DAT_00002010 = 0xbc8960a4;
  _DAT_00002014 = 0xad3c2d78;
  _DAT_00002018 = 0xe465e152;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x80;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 1;
  DAT_0000220d = 0;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 xadd3_constant_complex2(void)

{
  _DAT_00002000 = &DAT_496e81c3;
  _DAT_00002004 = 0x7aad42ab;
  _DAT_00002008 = 0x1e3f6cb2;
  _DAT_0000200c = 0x4e6925b3;
  _DAT_00002010 = 0x4f312610;
  _DAT_00002014 = 0x2f37a4a5;
  _DAT_00002018 = 0x91a917b4;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x4614;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 1;
  DAT_0000220b = 0;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 0;
  DAT_0000220f = 1;
  return 0;
}



undefined4 xadd4_mv_plain(void)

{
  int in_EAX;
  int *unaff_EBX;
  
  *unaff_EBX = *unaff_EBX + in_EAX;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 xadd4_mv_allregs(void)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  
  _DAT_00002018 = _DAT_00001018;
  _DAT_00002014 = _DAT_00001014;
  _DAT_00002010 = _DAT_00001010;
  _DAT_0000200c = _DAT_0000100c;
  _DAT_00002008 = _DAT_00001008;
  _DAT_00002004 = _DAT_00001004;
  uVar1 = _DAT_00001100 & 0x4000;
  uVar2 = _DAT_00001100 & 0x400;
  uVar3 = _DAT_00001100 & 0x200;
  uVar4 = _DAT_00001100 & 0x100;
  uVar5 = _DAT_00001100 & 0x10;
  DAT_0000220a = (_DAT_00001100 & 4) != 0;
  DAT_00002202 = CARRY4(*_DAT_00001004,_DAT_00001000);
  DAT_00002200 = SCARRY4(*_DAT_00001004,_DAT_00001000);
  uVar6 = *_DAT_00001004 + _DAT_00001000;
  _DAT_00002000 = *_DAT_00001004;
  _DAT_00002050 = (undefined *)register0x00000010;
  *_DAT_00001004 = uVar6;
  DAT_00002208 = (int)uVar6 < 0;
  DAT_00002204 = uVar6 == 0;
  _DAT_00002020 = _DAT_00002050 + -(int)register0x00000010;
  _DAT_00002100 =
       (ushort)(uVar1 != 0) * 0x4000 | (ushort)DAT_00002200 * 0x800 | (ushort)(uVar2 != 0) * 0x400 |
       (ushort)(uVar3 != 0) * 0x200 | (ushort)(uVar4 != 0) * 0x100 | (ushort)DAT_00002208 * 0x80 |
       (ushort)DAT_00002204 * 0x40 | (ushort)(uVar5 != 0) * 0x10 | (ushort)DAT_0000220a * 4 |
       (ushort)DAT_00002202;
  DAT_00002201 = !DAT_00002200;
  DAT_00002203 = !DAT_00002202;
  DAT_00002205 = !DAT_00002204;
  DAT_00002206 = DAT_00002202 || DAT_00002204;
  DAT_00002207 = !DAT_00002202 && !DAT_00002204;
  DAT_00002209 = !DAT_00002208;
  DAT_0000220b = !DAT_0000220a;
  DAT_0000220c = DAT_00002200 != DAT_00002208;
  DAT_0000220d = DAT_00002200 == DAT_00002208;
  DAT_0000220e = DAT_00002204 || DAT_00002200 != DAT_00002208;
  DAT_0000220f = !DAT_00002204 && DAT_00002200 == DAT_00002208;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 xadd4_mv_constant_simple(void)

{
  _DAT_00002000 = uRam00000003;
  DAT_00002202 = 0xfffffffd < uRam00000003;
  DAT_00002200 = SCARRY4(uRam00000003,2);
  uRam00000003 = uRam00000003 + 2;
  DAT_00002208 = (int)uRam00000003 < 0;
  DAT_00002204 = uRam00000003 == 0;
  _DAT_00002004 = 3;
  _DAT_00002008 = 4;
  _DAT_0000200c = 5;
  _DAT_00002010 = 6;
  _DAT_00002014 = 7;
  _DAT_00002018 = 8;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 =
       (ushort)DAT_00002200 * 0x800 | (ushort)DAT_00002208 * 0x80 | (ushort)DAT_00002204 * 0x40 |
       (ushort)DAT_00002202;
  DAT_00002201 = !DAT_00002200;
  DAT_00002203 = !DAT_00002202;
  DAT_00002205 = !DAT_00002204;
  DAT_00002206 = DAT_00002202 || DAT_00002204;
  DAT_00002207 = !DAT_00002202 && !DAT_00002204;
  DAT_00002209 = !DAT_00002208;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = DAT_00002200 != DAT_00002208;
  DAT_0000220d = DAT_00002200 == DAT_00002208;
  DAT_0000220e = DAT_00002204 || DAT_00002200 != DAT_00002208;
  DAT_0000220f = !DAT_00002204 && DAT_00002200 == DAT_00002208;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 xadd4_mv_constant_complex1(void)

{
  undefined *puVar1;
  
  DAT_00002202 = 0x5c4e867b < _DAT_06671ad7;
  DAT_00002200 = SCARRY4((int)_DAT_06671ad7,-0x5c4e867c);
  puVar1 = &DAT_a3b17984 + (int)_DAT_06671ad7;
  DAT_00002208 = (int)puVar1 < 0;
  DAT_00002204 = puVar1 == (undefined *)0x0;
  _DAT_00002000 = (uint)_DAT_06671ad7;
  _DAT_00002004 = &DAT_06671ad7;
  _DAT_00002008 = 0x46685248;
  _DAT_0000200c = 0x392456c4;
  _DAT_00002010 = 0xbc8960a4;
  _DAT_00002014 = 0xad3c2d78;
  _DAT_00002018 = 0xe465e152;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 =
       (ushort)DAT_00002200 * 0x800 | (ushort)DAT_00002208 * 0x80 | (ushort)DAT_00002204 * 0x40 |
       (ushort)DAT_00002202;
  DAT_00002201 = !DAT_00002200;
  DAT_00002203 = !DAT_00002202;
  DAT_00002205 = !DAT_00002204;
  DAT_00002206 = DAT_00002202 || DAT_00002204;
  DAT_00002207 = !DAT_00002202 && !DAT_00002204;
  DAT_00002209 = !DAT_00002208;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = DAT_00002200 != DAT_00002208;
  DAT_0000220d = DAT_00002200 == DAT_00002208;
  DAT_0000220e = DAT_00002204 || DAT_00002200 != DAT_00002208;
  DAT_0000220f = !DAT_00002204 && DAT_00002200 == DAT_00002208;
  _DAT_06671ad7 = puVar1;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 xadd4_mv_constant_complex2(void)

{
  undefined *puVar1;
  
  DAT_00002202 = 0xcec13f17 < _DAT_496e81c3;
  DAT_00002200 = SCARRY4((int)_DAT_496e81c3,0x313ec0e8);
  puVar1 = &DAT_313ec0e8 + (int)_DAT_496e81c3;
  DAT_00002208 = (int)puVar1 < 0;
  DAT_00002204 = puVar1 == (undefined *)0x0;
  _DAT_00002000 = (uint)_DAT_496e81c3;
  _DAT_00002004 = &DAT_496e81c3;
  _DAT_00002008 = 0x1e3f6cb2;
  _DAT_0000200c = 0x4e6925b3;
  _DAT_00002010 = 0x4f312610;
  _DAT_00002014 = 0x2f37a4a5;
  _DAT_00002018 = 0x91a917b4;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 =
       (ushort)DAT_00002200 * 0x800 | 0x4600 | (ushort)DAT_00002208 * 0x80 |
       (ushort)DAT_00002204 * 0x40 | 0x14 | (ushort)DAT_00002202;
  DAT_00002201 = !DAT_00002200;
  DAT_00002203 = !DAT_00002202;
  DAT_00002205 = !DAT_00002204;
  DAT_00002206 = DAT_00002202 || DAT_00002204;
  DAT_00002207 = !DAT_00002202 && !DAT_00002204;
  DAT_00002209 = !DAT_00002208;
  DAT_0000220a = 1;
  DAT_0000220b = 0;
  DAT_0000220c = DAT_00002200 != DAT_00002208;
  DAT_0000220d = DAT_00002200 == DAT_00002208;
  DAT_0000220e = DAT_00002204 || DAT_00002200 != DAT_00002208;
  DAT_0000220f = !DAT_00002204 && DAT_00002200 == DAT_00002208;
  _DAT_496e81c3 = puVar1;
  return 0;
}



undefined4 xadd5_mv_plain(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 xadd5_mv_allregs(void)

{
  byte bVar1;
  
  DAT_0000220a = (_DAT_00001100 & 4) != 0;
  bVar1 = (byte)_DAT_00001000;
  DAT_00002202 = CARRY1(bVar1,bVar1);
  DAT_00002200 = SCARRY1(bVar1,bVar1);
  bVar1 = bVar1 * '\x02';
  DAT_00002208 = (char)bVar1 < '\0';
  DAT_00002204 = bVar1 == 0;
  _DAT_00002000 = _DAT_00001000 & 0xffffff00 | (uint)bVar1;
  _DAT_00002004 = _DAT_00001004;
  _DAT_00002008 = _DAT_00001008;
  _DAT_0000200c = _DAT_0000100c;
  _DAT_00002010 = _DAT_00001010;
  _DAT_00002014 = _DAT_00001014;
  _DAT_00002018 = _DAT_00001018;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 =
       (ushort)((_DAT_00001100 & 0x4000) != 0) * 0x4000 | (ushort)DAT_00002200 * 0x800 |
       (ushort)((_DAT_00001100 & 0x400) != 0) * 0x400 |
       (ushort)((_DAT_00001100 & 0x200) != 0) * 0x200 |
       (ushort)((_DAT_00001100 & 0x100) != 0) * 0x100 | (ushort)DAT_00002208 * 0x80 |
       (ushort)DAT_00002204 * 0x40 | (ushort)((_DAT_00001100 & 0x10) != 0) * 0x10 |
       (ushort)DAT_0000220a * 4 | (ushort)DAT_00002202;
  DAT_00002201 = !DAT_00002200;
  DAT_00002203 = !DAT_00002202;
  DAT_00002205 = !DAT_00002204;
  DAT_00002206 = DAT_00002202 || DAT_00002204;
  DAT_00002207 = !DAT_00002202 && !DAT_00002204;
  DAT_00002209 = !DAT_00002208;
  DAT_0000220b = !DAT_0000220a;
  DAT_0000220c = DAT_00002200 != DAT_00002208;
  DAT_0000220d = DAT_00002200 == DAT_00002208;
  DAT_0000220e = DAT_00002204 || DAT_00002200 != DAT_00002208;
  DAT_0000220f = !DAT_00002204 && DAT_00002200 == DAT_00002208;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 xadd5_mv_constant_simple(void)

{
  _DAT_00002000 = 4;
  _DAT_00002004 = 3;
  _DAT_00002008 = 4;
  _DAT_0000200c = 5;
  _DAT_00002010 = 6;
  _DAT_00002014 = 7;
  _DAT_00002018 = 8;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 0;
  DAT_0000220f = 1;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 xadd5_mv_constant_complex1(void)

{
  _DAT_00002000 = 0xa3b17908;
  _DAT_00002004 = &DAT_06671ad7;
  _DAT_00002008 = 0x46685248;
  _DAT_0000200c = 0x392456c4;
  _DAT_00002010 = 0xbc8960a4;
  _DAT_00002014 = 0xad3c2d78;
  _DAT_00002018 = 0xe465e152;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x801;
  DAT_00002200 = 1;
  DAT_00002201 = 0;
  DAT_00002202 = 1;
  DAT_00002203 = 0;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 1;
  DAT_00002207 = 0;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 1;
  DAT_0000220d = 0;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 xadd5_mv_constant_complex2(void)

{
  _DAT_00002000 = 0x313ec0d0;
  _DAT_00002004 = &DAT_496e81c3;
  _DAT_00002008 = 0x1e3f6cb2;
  _DAT_0000200c = 0x4e6925b3;
  _DAT_00002010 = 0x4f312610;
  _DAT_00002014 = 0x2f37a4a5;
  _DAT_00002018 = 0x91a917b4;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x4695;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 1;
  DAT_00002203 = 0;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 1;
  DAT_00002207 = 0;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 1;
  DAT_0000220b = 0;
  DAT_0000220c = 1;
  DAT_0000220d = 0;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



undefined4 xadd_locked_mv_plain(void)

{
  int in_EAX;
  int *unaff_EBX;
  
  LOCK();
  *unaff_EBX = *unaff_EBX + in_EAX;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 xadd_locked_mv_allregs(void)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  
  _DAT_00002018 = _DAT_00001018;
  _DAT_00002014 = _DAT_00001014;
  _DAT_00002010 = _DAT_00001010;
  _DAT_0000200c = _DAT_0000100c;
  _DAT_00002008 = _DAT_00001008;
  _DAT_00002004 = _DAT_00001004;
  uVar1 = _DAT_00001100 & 0x4000;
  uVar2 = _DAT_00001100 & 0x400;
  uVar3 = _DAT_00001100 & 0x200;
  uVar4 = _DAT_00001100 & 0x100;
  uVar5 = _DAT_00001100 & 0x10;
  DAT_0000220a = (_DAT_00001100 & 4) != 0;
  LOCK();
  DAT_00002202 = CARRY4(*_DAT_00001004,_DAT_00001000);
  DAT_00002200 = SCARRY4(*_DAT_00001004,_DAT_00001000);
  uVar6 = *_DAT_00001004 + _DAT_00001000;
  _DAT_00002000 = *_DAT_00001004;
  _DAT_00002050 = (undefined *)register0x00000010;
  *_DAT_00001004 = uVar6;
  DAT_00002208 = (int)uVar6 < 0;
  DAT_00002204 = uVar6 == 0;
  _DAT_00002020 = _DAT_00002050 + -(int)register0x00000010;
  _DAT_00002100 =
       (ushort)(uVar1 != 0) * 0x4000 | (ushort)DAT_00002200 * 0x800 | (ushort)(uVar2 != 0) * 0x400 |
       (ushort)(uVar3 != 0) * 0x200 | (ushort)(uVar4 != 0) * 0x100 | (ushort)DAT_00002208 * 0x80 |
       (ushort)DAT_00002204 * 0x40 | (ushort)(uVar5 != 0) * 0x10 | (ushort)DAT_0000220a * 4 |
       (ushort)DAT_00002202;
  DAT_00002201 = !DAT_00002200;
  DAT_00002203 = !DAT_00002202;
  DAT_00002205 = !DAT_00002204;
  DAT_00002206 = DAT_00002202 || DAT_00002204;
  DAT_00002207 = !DAT_00002202 && !DAT_00002204;
  DAT_00002209 = !DAT_00002208;
  DAT_0000220b = !DAT_0000220a;
  DAT_0000220c = DAT_00002200 != DAT_00002208;
  DAT_0000220d = DAT_00002200 == DAT_00002208;
  DAT_0000220e = DAT_00002204 || DAT_00002200 != DAT_00002208;
  DAT_0000220f = !DAT_00002204 && DAT_00002200 == DAT_00002208;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 xadd_locked_mv_constant_simple(void)

{
  _DAT_00002000 = uRam00000003;
  LOCK();
  DAT_00002202 = 0xfffffffd < uRam00000003;
  DAT_00002200 = SCARRY4(uRam00000003,2);
  uRam00000003 = uRam00000003 + 2;
  DAT_00002208 = (int)uRam00000003 < 0;
  DAT_00002204 = uRam00000003 == 0;
  _DAT_00002004 = 3;
  _DAT_00002008 = 4;
  _DAT_0000200c = 5;
  _DAT_00002010 = 6;
  _DAT_00002014 = 7;
  _DAT_00002018 = 8;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 =
       (ushort)DAT_00002200 * 0x800 | (ushort)DAT_00002208 * 0x80 | (ushort)DAT_00002204 * 0x40 |
       (ushort)DAT_00002202;
  DAT_00002201 = !DAT_00002200;
  DAT_00002203 = !DAT_00002202;
  DAT_00002205 = !DAT_00002204;
  DAT_00002206 = DAT_00002202 || DAT_00002204;
  DAT_00002207 = !DAT_00002202 && !DAT_00002204;
  DAT_00002209 = !DAT_00002208;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = DAT_00002200 != DAT_00002208;
  DAT_0000220d = DAT_00002200 == DAT_00002208;
  DAT_0000220e = DAT_00002204 || DAT_00002200 != DAT_00002208;
  DAT_0000220f = !DAT_00002204 && DAT_00002200 == DAT_00002208;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 xadd_locked_mv_constant_complex1(void)

{
  undefined *puVar1;
  
  LOCK();
  DAT_00002202 = 0x5c4e867b < _DAT_06671ad7;
  DAT_00002200 = SCARRY4((int)_DAT_06671ad7,-0x5c4e867c);
  puVar1 = &DAT_a3b17984 + (int)_DAT_06671ad7;
  DAT_00002208 = (int)puVar1 < 0;
  DAT_00002204 = puVar1 == (undefined *)0x0;
  _DAT_00002000 = (uint)_DAT_06671ad7;
  _DAT_00002004 = &DAT_06671ad7;
  _DAT_00002008 = 0x46685248;
  _DAT_0000200c = 0x392456c4;
  _DAT_00002010 = 0xbc8960a4;
  _DAT_00002014 = 0xad3c2d78;
  _DAT_00002018 = 0xe465e152;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 =
       (ushort)DAT_00002200 * 0x800 | (ushort)DAT_00002208 * 0x80 | (ushort)DAT_00002204 * 0x40 |
       (ushort)DAT_00002202;
  DAT_00002201 = !DAT_00002200;
  DAT_00002203 = !DAT_00002202;
  DAT_00002205 = !DAT_00002204;
  DAT_00002206 = DAT_00002202 || DAT_00002204;
  DAT_00002207 = !DAT_00002202 && !DAT_00002204;
  DAT_00002209 = !DAT_00002208;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = DAT_00002200 != DAT_00002208;
  DAT_0000220d = DAT_00002200 == DAT_00002208;
  DAT_0000220e = DAT_00002204 || DAT_00002200 != DAT_00002208;
  DAT_0000220f = !DAT_00002204 && DAT_00002200 == DAT_00002208;
  _DAT_06671ad7 = puVar1;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 xadd_locked_mv_constant_complex2(void)

{
  undefined *puVar1;
  
  LOCK();
  DAT_00002202 = 0xcec13f17 < _DAT_496e81c3;
  DAT_00002200 = SCARRY4((int)_DAT_496e81c3,0x313ec0e8);
  puVar1 = &DAT_313ec0e8 + (int)_DAT_496e81c3;
  DAT_00002208 = (int)puVar1 < 0;
  DAT_00002204 = puVar1 == (undefined *)0x0;
  _DAT_00002000 = (uint)_DAT_496e81c3;
  _DAT_00002004 = &DAT_496e81c3;
  _DAT_00002008 = 0x1e3f6cb2;
  _DAT_0000200c = 0x4e6925b3;
  _DAT_00002010 = 0x4f312610;
  _DAT_00002014 = 0x2f37a4a5;
  _DAT_00002018 = 0x91a917b4;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 =
       (ushort)DAT_00002200 * 0x800 | 0x4600 | (ushort)DAT_00002208 * 0x80 |
       (ushort)DAT_00002204 * 0x40 | 0x14 | (ushort)DAT_00002202;
  DAT_00002201 = !DAT_00002200;
  DAT_00002203 = !DAT_00002202;
  DAT_00002205 = !DAT_00002204;
  DAT_00002206 = DAT_00002202 || DAT_00002204;
  DAT_00002207 = !DAT_00002202 && !DAT_00002204;
  DAT_00002209 = !DAT_00002208;
  DAT_0000220a = 1;
  DAT_0000220b = 0;
  DAT_0000220c = DAT_00002200 != DAT_00002208;
  DAT_0000220d = DAT_00002200 == DAT_00002208;
  DAT_0000220e = DAT_00002204 || DAT_00002200 != DAT_00002208;
  DAT_0000220f = !DAT_00002204 && DAT_00002200 == DAT_00002208;
  _DAT_496e81c3 = puVar1;
  return 0;
}



undefined4 cmpxchg8b_plain(void)

{
  longlong *in_EAX;
  undefined4 in_ECX;
  undefined4 in_EDX;
  undefined4 unaff_EBX;
  
  if (CONCAT44(in_EDX,in_EAX) == *in_EAX) {
    *in_EAX = CONCAT44(in_ECX,unaff_EBX);
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmpxchg8b_allregs(void)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  
  _DAT_00002018 = _DAT_00001018;
  _DAT_00002014 = _DAT_00001014;
  _DAT_00002010 = _DAT_00001010;
  _DAT_0000200c = _DAT_0000100c;
  _DAT_00002008 = _DAT_00001008;
  _DAT_00002004 = _DAT_00001004;
  _DAT_00002000 = _DAT_00001000;
  uVar1 = _DAT_00001100 & 0x4000;
  DAT_00002200 = (_DAT_00001100 & 0x800) != 0;
  uVar2 = _DAT_00001100 & 0x400;
  uVar3 = _DAT_00001100 & 0x200;
  uVar4 = _DAT_00001100 & 0x100;
  DAT_00002208 = (_DAT_00001100 & 0x80) != 0;
  uVar5 = _DAT_00001100 & 0x10;
  DAT_0000220a = (_DAT_00001100 & 4) != 0;
  DAT_00002202 = (_DAT_00001100 & 1) != 0;
  DAT_00002204 = CONCAT44(_DAT_0000100c,_DAT_00001000) == *_DAT_00001000;
  _DAT_00002050 = (undefined *)register0x00000010;
  if (DAT_00002204) {
    *_DAT_00001000 = CONCAT44(_DAT_00001008,_DAT_00001004);
  }
  else {
    _DAT_0000200c = (undefined4)((ulonglong)*_DAT_00001000 >> 0x20);
    _DAT_00002000 = *(longlong **)_DAT_00001000;
  }
  _DAT_00002020 = _DAT_00002050 + -(int)register0x00000010;
  _DAT_00002100 =
       (ushort)(uVar1 != 0) * 0x4000 | (ushort)DAT_00002200 * 0x800 | (ushort)(uVar2 != 0) * 0x400 |
       (ushort)(uVar3 != 0) * 0x200 | (ushort)(uVar4 != 0) * 0x100 | (ushort)DAT_00002208 * 0x80 |
       (ushort)DAT_00002204 * 0x40 | (ushort)(uVar5 != 0) * 0x10 | (ushort)DAT_0000220a * 4 |
       (ushort)DAT_00002202;
  DAT_00002201 = !DAT_00002200;
  DAT_00002203 = !DAT_00002202;
  DAT_00002205 = !DAT_00002204;
  DAT_00002206 = DAT_00002202 || DAT_00002204;
  DAT_00002207 = !DAT_00002202 && !DAT_00002204;
  DAT_00002209 = !DAT_00002208;
  DAT_0000220b = !DAT_0000220a;
  DAT_0000220c = DAT_00002200 != DAT_00002208;
  DAT_0000220d = DAT_00002200 == DAT_00002208;
  DAT_0000220e = DAT_00002204 || DAT_00002200 != DAT_00002208;
  DAT_0000220f = !DAT_00002204 && DAT_00002200 == DAT_00002208;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmpxchg8b_constant_simple(void)

{
  lRam00000002._0_4_ = 2;
  _DAT_0000200c = 5;
  DAT_00002204 = lRam00000002 == 0x500000002;
  if (DAT_00002204) {
    lRam00000002 = 0x400000003;
  }
  else {
    _DAT_0000200c = (undefined4)((ulonglong)lRam00000002 >> 0x20);
  }
  _DAT_00002000 = (undefined4)lRam00000002;
  _DAT_00002004 = 3;
  _DAT_00002008 = 4;
  _DAT_00002010 = 6;
  _DAT_00002014 = 7;
  _DAT_00002018 = 8;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = (ushort)DAT_00002204 * 0x40;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002205 = !DAT_00002204;
  DAT_00002206 = DAT_00002204;
  DAT_00002207 = !DAT_00002204;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = DAT_00002204;
  DAT_0000220f = !DAT_00002204;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmpxchg8b_constant_complex1(void)

{
  _DAT_a3b17984 = &DAT_a3b17984;
  _DAT_0000200c = 0x392456c4;
  DAT_00002204 = _DAT_a3b17984 == 0x392456c4a3b17984;
  if (DAT_00002204) {
    _DAT_a3b17984 = 0x4668524806671ad7;
  }
  else {
    _DAT_0000200c = (undefined4)((ulonglong)_DAT_a3b17984 >> 0x20);
  }
  _DAT_00002000 = _DAT_a3b17984;
  _DAT_00002004 = &DAT_06671ad7;
  _DAT_00002008 = 0x46685248;
  _DAT_00002010 = 0xbc8960a4;
  _DAT_00002014 = 0xad3c2d78;
  _DAT_00002018 = 0xe465e152;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = (ushort)DAT_00002204 * 0x40;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002205 = !DAT_00002204;
  DAT_00002206 = DAT_00002204;
  DAT_00002207 = !DAT_00002204;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = DAT_00002204;
  DAT_0000220f = !DAT_00002204;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmpxchg8b_constant_complex2(void)

{
  _DAT_313ec0e8 = &DAT_313ec0e8;
  _DAT_0000200c = 0x4e6925b3;
  DAT_00002204 = _DAT_313ec0e8 == 0x4e6925b3313ec0e8;
  if (DAT_00002204) {
    _DAT_313ec0e8 = 0x1e3f6cb2496e81c3;
  }
  else {
    _DAT_0000200c = (undefined4)((ulonglong)_DAT_313ec0e8 >> 0x20);
  }
  _DAT_00002000 = _DAT_313ec0e8;
  _DAT_00002004 = &DAT_496e81c3;
  _DAT_00002008 = 0x1e3f6cb2;
  _DAT_00002010 = 0x4f312610;
  _DAT_00002014 = 0x2f37a4a5;
  _DAT_00002018 = 0x91a917b4;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = (ushort)DAT_00002204 * 0x40 | 0x4e95;
  DAT_00002200 = 1;
  DAT_00002201 = 0;
  DAT_00002202 = 1;
  DAT_00002203 = 0;
  DAT_00002205 = !DAT_00002204;
  DAT_00002206 = 1;
  DAT_00002207 = 0;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 1;
  DAT_0000220b = 0;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = DAT_00002204;
  DAT_0000220f = !DAT_00002204;
  return 0;
}



undefined4 cmpxchg8b_locked_mv_plain(void)

{
  longlong *in_EAX;
  undefined4 in_ECX;
  undefined4 in_EDX;
  undefined4 unaff_EBX;
  
  LOCK();
  if (CONCAT44(in_EDX,in_EAX) == *in_EAX) {
    *in_EAX = CONCAT44(in_ECX,unaff_EBX);
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmpxchg8b_locked_mv_allregs(void)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  
  _DAT_00002018 = _DAT_00001018;
  _DAT_00002014 = _DAT_00001014;
  _DAT_00002010 = _DAT_00001010;
  _DAT_0000200c = _DAT_0000100c;
  _DAT_00002008 = _DAT_00001008;
  _DAT_00002004 = _DAT_00001004;
  _DAT_00002000 = _DAT_00001000;
  uVar1 = _DAT_00001100 & 0x4000;
  DAT_00002200 = (_DAT_00001100 & 0x800) != 0;
  uVar2 = _DAT_00001100 & 0x400;
  uVar3 = _DAT_00001100 & 0x200;
  uVar4 = _DAT_00001100 & 0x100;
  DAT_00002208 = (_DAT_00001100 & 0x80) != 0;
  uVar5 = _DAT_00001100 & 0x10;
  DAT_0000220a = (_DAT_00001100 & 4) != 0;
  DAT_00002202 = (_DAT_00001100 & 1) != 0;
  LOCK();
  DAT_00002204 = CONCAT44(_DAT_0000100c,_DAT_00001000) == *_DAT_00001000;
  _DAT_00002050 = (undefined *)register0x00000010;
  if (DAT_00002204) {
    *_DAT_00001000 = CONCAT44(_DAT_00001008,_DAT_00001004);
  }
  else {
    _DAT_0000200c = (undefined4)((ulonglong)*_DAT_00001000 >> 0x20);
    _DAT_00002000 = *(longlong **)_DAT_00001000;
  }
  _DAT_00002020 = _DAT_00002050 + -(int)register0x00000010;
  _DAT_00002100 =
       (ushort)(uVar1 != 0) * 0x4000 | (ushort)DAT_00002200 * 0x800 | (ushort)(uVar2 != 0) * 0x400 |
       (ushort)(uVar3 != 0) * 0x200 | (ushort)(uVar4 != 0) * 0x100 | (ushort)DAT_00002208 * 0x80 |
       (ushort)DAT_00002204 * 0x40 | (ushort)(uVar5 != 0) * 0x10 | (ushort)DAT_0000220a * 4 |
       (ushort)DAT_00002202;
  DAT_00002201 = !DAT_00002200;
  DAT_00002203 = !DAT_00002202;
  DAT_00002205 = !DAT_00002204;
  DAT_00002206 = DAT_00002202 || DAT_00002204;
  DAT_00002207 = !DAT_00002202 && !DAT_00002204;
  DAT_00002209 = !DAT_00002208;
  DAT_0000220b = !DAT_0000220a;
  DAT_0000220c = DAT_00002200 != DAT_00002208;
  DAT_0000220d = DAT_00002200 == DAT_00002208;
  DAT_0000220e = DAT_00002204 || DAT_00002200 != DAT_00002208;
  DAT_0000220f = !DAT_00002204 && DAT_00002200 == DAT_00002208;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmpxchg8b_locked_mv_constant_simple(void)

{
  lRam00000002._0_4_ = 2;
  _DAT_0000200c = 5;
  LOCK();
  DAT_00002204 = lRam00000002 == 0x500000002;
  if (DAT_00002204) {
    lRam00000002 = 0x400000003;
  }
  else {
    _DAT_0000200c = (undefined4)((ulonglong)lRam00000002 >> 0x20);
  }
  _DAT_00002000 = (undefined4)lRam00000002;
  _DAT_00002004 = 3;
  _DAT_00002008 = 4;
  _DAT_00002010 = 6;
  _DAT_00002014 = 7;
  _DAT_00002018 = 8;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = (ushort)DAT_00002204 * 0x40;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002205 = !DAT_00002204;
  DAT_00002206 = DAT_00002204;
  DAT_00002207 = !DAT_00002204;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = DAT_00002204;
  DAT_0000220f = !DAT_00002204;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmpxchg8b_locked_mv_constant_complex1(void)

{
  _DAT_a3b17984 = &DAT_a3b17984;
  _DAT_0000200c = 0x392456c4;
  LOCK();
  DAT_00002204 = _DAT_a3b17984 == 0x392456c4a3b17984;
  if (DAT_00002204) {
    _DAT_a3b17984 = 0x4668524806671ad7;
  }
  else {
    _DAT_0000200c = (undefined4)((ulonglong)_DAT_a3b17984 >> 0x20);
  }
  _DAT_00002000 = _DAT_a3b17984;
  _DAT_00002004 = &DAT_06671ad7;
  _DAT_00002008 = 0x46685248;
  _DAT_00002010 = 0xbc8960a4;
  _DAT_00002014 = 0xad3c2d78;
  _DAT_00002018 = 0xe465e152;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = (ushort)DAT_00002204 * 0x40;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002205 = !DAT_00002204;
  DAT_00002206 = DAT_00002204;
  DAT_00002207 = !DAT_00002204;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = DAT_00002204;
  DAT_0000220f = !DAT_00002204;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmpxchg8b_locked_mv_constant_complex2(void)

{
  _DAT_313ec0e8 = &DAT_313ec0e8;
  _DAT_0000200c = 0x4e6925b3;
  LOCK();
  DAT_00002204 = _DAT_313ec0e8 == 0x4e6925b3313ec0e8;
  if (DAT_00002204) {
    _DAT_313ec0e8 = 0x1e3f6cb2496e81c3;
  }
  else {
    _DAT_0000200c = (undefined4)((ulonglong)_DAT_313ec0e8 >> 0x20);
  }
  _DAT_00002000 = _DAT_313ec0e8;
  _DAT_00002004 = &DAT_496e81c3;
  _DAT_00002008 = 0x1e3f6cb2;
  _DAT_00002010 = 0x4f312610;
  _DAT_00002014 = 0x2f37a4a5;
  _DAT_00002018 = 0x91a917b4;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = (ushort)DAT_00002204 * 0x40 | 0x4e95;
  DAT_00002200 = 1;
  DAT_00002201 = 0;
  DAT_00002202 = 1;
  DAT_00002203 = 0;
  DAT_00002205 = !DAT_00002204;
  DAT_00002206 = 1;
  DAT_00002207 = 0;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 1;
  DAT_0000220b = 0;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = DAT_00002204;
  DAT_0000220f = !DAT_00002204;
  return 0;
}



ulonglong rdtsc_plain(void)

{
  ulonglong uVar1;
  
  uVar1 = rdtsc();
  return uVar1 & 0xffffffff00000000;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 rdtsc_allregs(void)

{
  undefined8 uVar1;
  
  DAT_00002200 = (_DAT_00001100 & 0x800) != 0;
  DAT_00002208 = (_DAT_00001100 & 0x80) != 0;
  DAT_00002204 = (_DAT_00001100 & 0x40) != 0;
  DAT_0000220a = (_DAT_00001100 & 4) != 0;
  DAT_00002202 = (_DAT_00001100 & 1) != 0;
  uVar1 = rdtsc();
  _DAT_00002000 = (int)uVar1;
  _DAT_00002004 = _DAT_00001004;
  _DAT_00002008 = _DAT_00001008;
  _DAT_0000200c = (int)((ulonglong)uVar1 >> 0x20);
  _DAT_00002010 = _DAT_00001010;
  _DAT_00002014 = _DAT_00001014;
  _DAT_00002018 = _DAT_00001018;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 =
       (ushort)((_DAT_00001100 & 0x4000) != 0) * 0x4000 | (ushort)DAT_00002200 * 0x800 |
       (ushort)((_DAT_00001100 & 0x400) != 0) * 0x400 |
       (ushort)((_DAT_00001100 & 0x200) != 0) * 0x200 |
       (ushort)((_DAT_00001100 & 0x100) != 0) * 0x100 | (ushort)DAT_00002208 * 0x80 |
       (ushort)DAT_00002204 * 0x40 | (ushort)((_DAT_00001100 & 0x10) != 0) * 0x10 |
       (ushort)DAT_0000220a * 4 | (ushort)DAT_00002202;
  DAT_00002201 = !DAT_00002200;
  DAT_00002203 = !DAT_00002202;
  DAT_00002205 = !DAT_00002204;
  DAT_00002206 = DAT_00002202 || DAT_00002204;
  DAT_00002207 = !DAT_00002202 && !DAT_00002204;
  DAT_00002209 = !DAT_00002208;
  DAT_0000220b = !DAT_0000220a;
  DAT_0000220c = DAT_00002200 != DAT_00002208;
  DAT_0000220d = DAT_00002200 == DAT_00002208;
  DAT_0000220e = DAT_00002204 || DAT_00002200 != DAT_00002208;
  DAT_0000220f = !DAT_00002204 && DAT_00002200 == DAT_00002208;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 rdtsc_constant_simple(void)

{
  undefined8 uVar1;
  
  uVar1 = rdtsc();
  _DAT_00002000 = (int)uVar1;
  _DAT_00002004 = 3;
  _DAT_00002008 = 4;
  _DAT_0000200c = (int)((ulonglong)uVar1 >> 0x20);
  _DAT_00002010 = 6;
  _DAT_00002014 = 7;
  _DAT_00002018 = 8;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 0;
  DAT_0000220f = 1;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 rdtsc_constant_complex1(void)

{
  undefined8 uVar1;
  
  uVar1 = rdtsc();
  _DAT_00002000 = (int)uVar1;
  _DAT_00002004 = &DAT_06671ad7;
  _DAT_00002008 = 0x46685248;
  _DAT_0000200c = (int)((ulonglong)uVar1 >> 0x20);
  _DAT_00002010 = 0xbc8960a4;
  _DAT_00002014 = 0xad3c2d78;
  _DAT_00002018 = 0xe465e152;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 0;
  DAT_0000220f = 1;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 rdtsc_constant_complex2(void)

{
  undefined8 uVar1;
  
  uVar1 = rdtsc();
  _DAT_00002000 = (int)uVar1;
  _DAT_00002004 = &DAT_496e81c3;
  _DAT_00002008 = 0x1e3f6cb2;
  _DAT_0000200c = (int)((ulonglong)uVar1 >> 0x20);
  _DAT_00002010 = 0x4f312610;
  _DAT_00002014 = 0x2f37a4a5;
  _DAT_00002018 = 0x91a917b4;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x4ed5;
  DAT_00002200 = 1;
  DAT_00002201 = 0;
  DAT_00002202 = 1;
  DAT_00002203 = 0;
  DAT_00002204 = 1;
  DAT_00002205 = 0;
  DAT_00002206 = 1;
  DAT_00002207 = 0;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 1;
  DAT_0000220b = 0;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



ulonglong rdmsr_plain(void)

{
  ulonglong uVar1;
  undefined4 in_ECX;
  
  uVar1 = rdmsr(in_ECX);
  return uVar1 & 0xffffffff00000000;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 rdmsr_allregs(void)

{
  undefined8 uVar1;
  
  DAT_00002200 = (_DAT_00001100 & 0x800) != 0;
  DAT_00002208 = (_DAT_00001100 & 0x80) != 0;
  DAT_00002204 = (_DAT_00001100 & 0x40) != 0;
  DAT_0000220a = (_DAT_00001100 & 4) != 0;
  DAT_00002202 = (_DAT_00001100 & 1) != 0;
  uVar1 = rdmsr(_DAT_00001008);
  _DAT_00002000 = (int)uVar1;
  _DAT_00002004 = _DAT_00001004;
  _DAT_00002008 = _DAT_00001008;
  _DAT_0000200c = (int)((ulonglong)uVar1 >> 0x20);
  _DAT_00002010 = _DAT_00001010;
  _DAT_00002014 = _DAT_00001014;
  _DAT_00002018 = _DAT_00001018;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 =
       (ushort)((_DAT_00001100 & 0x4000) != 0) * 0x4000 | (ushort)DAT_00002200 * 0x800 |
       (ushort)((_DAT_00001100 & 0x400) != 0) * 0x400 |
       (ushort)((_DAT_00001100 & 0x200) != 0) * 0x200 |
       (ushort)((_DAT_00001100 & 0x100) != 0) * 0x100 | (ushort)DAT_00002208 * 0x80 |
       (ushort)DAT_00002204 * 0x40 | (ushort)((_DAT_00001100 & 0x10) != 0) * 0x10 |
       (ushort)DAT_0000220a * 4 | (ushort)DAT_00002202;
  DAT_00002201 = !DAT_00002200;
  DAT_00002203 = !DAT_00002202;
  DAT_00002205 = !DAT_00002204;
  DAT_00002206 = DAT_00002202 || DAT_00002204;
  DAT_00002207 = !DAT_00002202 && !DAT_00002204;
  DAT_00002209 = !DAT_00002208;
  DAT_0000220b = !DAT_0000220a;
  DAT_0000220c = DAT_00002200 != DAT_00002208;
  DAT_0000220d = DAT_00002200 == DAT_00002208;
  DAT_0000220e = DAT_00002204 || DAT_00002200 != DAT_00002208;
  DAT_0000220f = !DAT_00002204 && DAT_00002200 == DAT_00002208;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 rdmsr_constant_simple(void)

{
  undefined8 uVar1;
  
  uVar1 = rdmsr(4);
  _DAT_00002000 = (int)uVar1;
  _DAT_00002004 = 3;
  _DAT_00002008 = 4;
  _DAT_0000200c = (int)((ulonglong)uVar1 >> 0x20);
  _DAT_00002010 = 6;
  _DAT_00002014 = 7;
  _DAT_00002018 = 8;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 0;
  DAT_0000220f = 1;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 rdmsr_constant_complex1(void)

{
  undefined8 uVar1;
  
  uVar1 = rdmsr(0x46685248);
  _DAT_00002000 = (int)uVar1;
  _DAT_00002004 = &DAT_06671ad7;
  _DAT_00002008 = 0x46685248;
  _DAT_0000200c = (int)((ulonglong)uVar1 >> 0x20);
  _DAT_00002010 = 0xbc8960a4;
  _DAT_00002014 = 0xad3c2d78;
  _DAT_00002018 = 0xe465e152;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 0;
  DAT_0000220f = 1;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 rdmsr_constant_complex2(void)

{
  undefined8 uVar1;
  
  uVar1 = rdmsr(0x1e3f6cb2);
  _DAT_00002000 = (int)uVar1;
  _DAT_00002004 = &DAT_496e81c3;
  _DAT_00002008 = 0x1e3f6cb2;
  _DAT_0000200c = (int)((ulonglong)uVar1 >> 0x20);
  _DAT_00002010 = 0x4f312610;
  _DAT_00002014 = 0x2f37a4a5;
  _DAT_00002018 = 0x91a917b4;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x4ed5;
  DAT_00002200 = 1;
  DAT_00002201 = 0;
  DAT_00002202 = 1;
  DAT_00002203 = 0;
  DAT_00002204 = 1;
  DAT_00002205 = 0;
  DAT_00002206 = 1;
  DAT_00002207 = 0;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 1;
  DAT_0000220b = 0;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



undefined4 wrmsr_plain(void)

{
  undefined4 in_EAX;
  undefined4 in_ECX;
  undefined4 in_EDX;
  
  wrmsr(in_ECX,CONCAT44(in_EDX,in_EAX));
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 wrmsr_allregs(void)

{
  DAT_00002200 = (_DAT_00001100 & 0x800) != 0;
  DAT_00002208 = (_DAT_00001100 & 0x80) != 0;
  DAT_00002204 = (_DAT_00001100 & 0x40) != 0;
  DAT_0000220a = (_DAT_00001100 & 4) != 0;
  DAT_00002202 = (_DAT_00001100 & 1) != 0;
  wrmsr(_DAT_00001008,CONCAT44(_DAT_0000100c,_DAT_00001000));
  _DAT_00002000 = _DAT_00001000;
  _DAT_00002004 = _DAT_00001004;
  _DAT_00002008 = _DAT_00001008;
  _DAT_0000200c = _DAT_0000100c;
  _DAT_00002010 = _DAT_00001010;
  _DAT_00002014 = _DAT_00001014;
  _DAT_00002018 = _DAT_00001018;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 =
       (ushort)((_DAT_00001100 & 0x4000) != 0) * 0x4000 | (ushort)DAT_00002200 * 0x800 |
       (ushort)((_DAT_00001100 & 0x400) != 0) * 0x400 |
       (ushort)((_DAT_00001100 & 0x200) != 0) * 0x200 |
       (ushort)((_DAT_00001100 & 0x100) != 0) * 0x100 | (ushort)DAT_00002208 * 0x80 |
       (ushort)DAT_00002204 * 0x40 | (ushort)((_DAT_00001100 & 0x10) != 0) * 0x10 |
       (ushort)DAT_0000220a * 4 | (ushort)DAT_00002202;
  DAT_00002201 = !DAT_00002200;
  DAT_00002203 = !DAT_00002202;
  DAT_00002205 = !DAT_00002204;
  DAT_00002206 = DAT_00002202 || DAT_00002204;
  DAT_00002207 = !DAT_00002202 && !DAT_00002204;
  DAT_00002209 = !DAT_00002208;
  DAT_0000220b = !DAT_0000220a;
  DAT_0000220c = DAT_00002200 != DAT_00002208;
  DAT_0000220d = DAT_00002200 == DAT_00002208;
  DAT_0000220e = DAT_00002204 || DAT_00002200 != DAT_00002208;
  DAT_0000220f = !DAT_00002204 && DAT_00002200 == DAT_00002208;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 wrmsr_constant_simple(void)

{
  wrmsr(4,0x500000002);
  _DAT_00002000 = 2;
  _DAT_00002004 = 3;
  _DAT_00002008 = 4;
  _DAT_0000200c = 5;
  _DAT_00002010 = 6;
  _DAT_00002014 = 7;
  _DAT_00002018 = 8;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 0;
  DAT_0000220f = 1;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 wrmsr_constant_complex1(void)

{
  wrmsr(0x46685248,0x392456c4a3b17984);
  _DAT_00002000 = &DAT_a3b17984;
  _DAT_00002004 = &DAT_06671ad7;
  _DAT_00002008 = 0x46685248;
  _DAT_0000200c = 0x392456c4;
  _DAT_00002010 = 0xbc8960a4;
  _DAT_00002014 = 0xad3c2d78;
  _DAT_00002018 = 0xe465e152;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 0;
  DAT_0000220f = 1;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 wrmsr_constant_complex2(void)

{
  wrmsr(0x1e3f6cb2,0x4e6925b3313ec0e8);
  _DAT_00002000 = &DAT_313ec0e8;
  _DAT_00002004 = &DAT_496e81c3;
  _DAT_00002008 = 0x1e3f6cb2;
  _DAT_0000200c = 0x4e6925b3;
  _DAT_00002010 = 0x4f312610;
  _DAT_00002014 = 0x2f37a4a5;
  _DAT_00002018 = 0x91a917b4;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x4ed5;
  DAT_00002200 = 1;
  DAT_00002201 = 0;
  DAT_00002202 = 1;
  DAT_00002203 = 0;
  DAT_00002204 = 1;
  DAT_00002205 = 0;
  DAT_00002206 = 1;
  DAT_00002207 = 0;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 1;
  DAT_0000220b = 0;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



undefined4 cmov1_mv_plain(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov1_mv_allregs(void)

{
  DAT_00002200 = (_DAT_00001100 & 0x800) != 0;
  DAT_00002208 = (_DAT_00001100 & 0x80) != 0;
  DAT_00002204 = (_DAT_00001100 & 0x40) != 0;
  DAT_0000220a = (_DAT_00001100 & 4) != 0;
  DAT_00002202 = (_DAT_00001100 & 1) != 0;
  _DAT_00002000 = _DAT_00001000;
  if (DAT_00002204) {
    _DAT_00002000 = _DAT_00001000 & 0xffff0000 | _DAT_00001004 & 0xffff;
  }
  _DAT_00002004 = _DAT_00001004;
  _DAT_00002008 = _DAT_00001008;
  _DAT_0000200c = _DAT_0000100c;
  _DAT_00002010 = _DAT_00001010;
  _DAT_00002014 = _DAT_00001014;
  _DAT_00002018 = _DAT_00001018;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 =
       (ushort)((_DAT_00001100 & 0x4000) != 0) * 0x4000 | (ushort)DAT_00002200 * 0x800 |
       (ushort)((_DAT_00001100 & 0x400) != 0) * 0x400 |
       (ushort)((_DAT_00001100 & 0x200) != 0) * 0x200 |
       (ushort)((_DAT_00001100 & 0x100) != 0) * 0x100 | (ushort)DAT_00002208 * 0x80 |
       (ushort)DAT_00002204 * 0x40 | (ushort)((_DAT_00001100 & 0x10) != 0) * 0x10 |
       (ushort)DAT_0000220a * 4 | (ushort)DAT_00002202;
  DAT_00002201 = !DAT_00002200;
  DAT_00002203 = !DAT_00002202;
  DAT_00002205 = !DAT_00002204;
  DAT_00002206 = DAT_00002202 || DAT_00002204;
  DAT_00002207 = !DAT_00002202 && !DAT_00002204;
  DAT_00002209 = !DAT_00002208;
  DAT_0000220b = !DAT_0000220a;
  DAT_0000220c = DAT_00002200 != DAT_00002208;
  DAT_0000220d = DAT_00002200 == DAT_00002208;
  DAT_0000220e = DAT_00002204 || DAT_00002200 != DAT_00002208;
  DAT_0000220f = !DAT_00002204 && DAT_00002200 == DAT_00002208;
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804e3be)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov1_mv_constant_simple(void)

{
  _DAT_00002000 = 2;
  _DAT_00002004 = 3;
  _DAT_00002008 = 4;
  _DAT_0000200c = 5;
  _DAT_00002010 = 6;
  _DAT_00002014 = 7;
  _DAT_00002018 = 8;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 0;
  DAT_0000220f = 1;
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804e4a6)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov1_mv_constant_complex1(void)

{
  _DAT_00002000 = &DAT_a3b17984;
  _DAT_00002004 = &DAT_06671ad7;
  _DAT_00002008 = 0x46685248;
  _DAT_0000200c = 0x392456c4;
  _DAT_00002010 = 0xbc8960a4;
  _DAT_00002014 = 0xad3c2d78;
  _DAT_00002018 = 0xe465e152;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 0;
  DAT_0000220f = 1;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov1_mv_constant_complex2(void)

{
  _DAT_00002000 = 0x313e81c3;
  _DAT_00002004 = &DAT_496e81c3;
  _DAT_00002008 = 0x1e3f6cb2;
  _DAT_0000200c = 0x4e6925b3;
  _DAT_00002010 = 0x4f312610;
  _DAT_00002014 = 0x2f37a4a5;
  _DAT_00002018 = 0x91a917b4;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x4ed5;
  DAT_00002200 = 1;
  DAT_00002201 = 0;
  DAT_00002202 = 1;
  DAT_00002203 = 0;
  DAT_00002204 = 1;
  DAT_00002205 = 0;
  DAT_00002206 = 1;
  DAT_00002207 = 0;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 1;
  DAT_0000220b = 0;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



undefined4 cmov2_mv_plain(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov2_mv_allregs(void)

{
  DAT_00002200 = (_DAT_00001100 & 0x800) != 0;
  DAT_00002208 = (_DAT_00001100 & 0x80) != 0;
  DAT_00002204 = (_DAT_00001100 & 0x40) != 0;
  DAT_0000220a = (_DAT_00001100 & 4) != 0;
  DAT_00002202 = (_DAT_00001100 & 1) != 0;
  _DAT_00002000 = _DAT_00001000;
  if (DAT_00002204) {
    _DAT_00002000 = _DAT_00001004;
  }
  _DAT_00002004 = _DAT_00001004;
  _DAT_00002008 = _DAT_00001008;
  _DAT_0000200c = _DAT_0000100c;
  _DAT_00002010 = _DAT_00001010;
  _DAT_00002014 = _DAT_00001014;
  _DAT_00002018 = _DAT_00001018;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 =
       (ushort)((_DAT_00001100 & 0x4000) != 0) * 0x4000 | (ushort)DAT_00002200 * 0x800 |
       (ushort)((_DAT_00001100 & 0x400) != 0) * 0x400 |
       (ushort)((_DAT_00001100 & 0x200) != 0) * 0x200 |
       (ushort)((_DAT_00001100 & 0x100) != 0) * 0x100 | (ushort)DAT_00002208 * 0x80 |
       (ushort)DAT_00002204 * 0x40 | (ushort)((_DAT_00001100 & 0x10) != 0) * 0x10 |
       (ushort)DAT_0000220a * 4 | (ushort)DAT_00002202;
  DAT_00002201 = !DAT_00002200;
  DAT_00002203 = !DAT_00002202;
  DAT_00002205 = !DAT_00002204;
  DAT_00002206 = DAT_00002202 || DAT_00002204;
  DAT_00002207 = !DAT_00002202 && !DAT_00002204;
  DAT_00002209 = !DAT_00002208;
  DAT_0000220b = !DAT_0000220a;
  DAT_0000220c = DAT_00002200 != DAT_00002208;
  DAT_0000220d = DAT_00002200 == DAT_00002208;
  DAT_0000220e = DAT_00002204 || DAT_00002200 != DAT_00002208;
  DAT_0000220f = !DAT_00002204 && DAT_00002200 == DAT_00002208;
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804e772)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov2_mv_constant_simple(void)

{
  _DAT_00002000 = 2;
  _DAT_00002004 = 3;
  _DAT_00002008 = 4;
  _DAT_0000200c = 5;
  _DAT_00002010 = 6;
  _DAT_00002014 = 7;
  _DAT_00002018 = 8;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 0;
  DAT_0000220f = 1;
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804e859)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov2_mv_constant_complex1(void)

{
  _DAT_00002000 = &DAT_a3b17984;
  _DAT_00002004 = &DAT_06671ad7;
  _DAT_00002008 = 0x46685248;
  _DAT_0000200c = 0x392456c4;
  _DAT_00002010 = 0xbc8960a4;
  _DAT_00002014 = 0xad3c2d78;
  _DAT_00002018 = 0xe465e152;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 0;
  DAT_0000220f = 1;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov2_mv_constant_complex2(void)

{
  _DAT_00002000 = &DAT_496e81c3;
  _DAT_00002004 = &DAT_496e81c3;
  _DAT_00002008 = 0x1e3f6cb2;
  _DAT_0000200c = 0x4e6925b3;
  _DAT_00002010 = 0x4f312610;
  _DAT_00002014 = 0x2f37a4a5;
  _DAT_00002018 = 0x91a917b4;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x4ed5;
  DAT_00002200 = 1;
  DAT_00002201 = 0;
  DAT_00002202 = 1;
  DAT_00002203 = 0;
  DAT_00002204 = 1;
  DAT_00002205 = 0;
  DAT_00002206 = 1;
  DAT_00002207 = 0;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 1;
  DAT_0000220b = 0;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



undefined4 cmov3_plain(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov3_allregs(void)

{
  DAT_00002200 = (_DAT_00001100 & 0x800) != 0;
  DAT_00002208 = (_DAT_00001100 & 0x80) != 0;
  DAT_00002204 = (_DAT_00001100 & 0x40) != 0;
  DAT_0000220a = (_DAT_00001100 & 4) != 0;
  DAT_00002202 = (_DAT_00001100 & 1) != 0;
  _DAT_00002000 = _DAT_00001000;
  if (DAT_00002204) {
    _DAT_00002000 = _DAT_00001004;
  }
  _DAT_00002004 = _DAT_00001004;
  _DAT_00002008 = _DAT_00001008;
  _DAT_0000200c = _DAT_0000100c;
  _DAT_00002010 = _DAT_00001010;
  _DAT_00002014 = _DAT_00001014;
  _DAT_00002018 = _DAT_00001018;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 =
       (ushort)((_DAT_00001100 & 0x4000) != 0) * 0x4000 | (ushort)DAT_00002200 * 0x800 |
       (ushort)((_DAT_00001100 & 0x400) != 0) * 0x400 |
       (ushort)((_DAT_00001100 & 0x200) != 0) * 0x200 |
       (ushort)((_DAT_00001100 & 0x100) != 0) * 0x100 | (ushort)DAT_00002208 * 0x80 |
       (ushort)DAT_00002204 * 0x40 | (ushort)((_DAT_00001100 & 0x10) != 0) * 0x10 |
       (ushort)DAT_0000220a * 4 | (ushort)DAT_00002202;
  DAT_00002201 = !DAT_00002200;
  DAT_00002203 = !DAT_00002202;
  DAT_00002205 = !DAT_00002204;
  DAT_00002206 = DAT_00002202 || DAT_00002204;
  DAT_00002207 = !DAT_00002202 && !DAT_00002204;
  DAT_00002209 = !DAT_00002208;
  DAT_0000220b = !DAT_0000220a;
  DAT_0000220c = DAT_00002200 != DAT_00002208;
  DAT_0000220d = DAT_00002200 == DAT_00002208;
  DAT_0000220e = DAT_00002204 || DAT_00002200 != DAT_00002208;
  DAT_0000220f = !DAT_00002204 && DAT_00002200 == DAT_00002208;
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804eb23)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov3_constant_simple(void)

{
  _DAT_00002000 = 2;
  _DAT_00002004 = 3;
  _DAT_00002008 = 4;
  _DAT_0000200c = 5;
  _DAT_00002010 = 6;
  _DAT_00002014 = 7;
  _DAT_00002018 = 8;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 0;
  DAT_0000220f = 1;
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804ec0a)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov3_constant_complex1(void)

{
  _DAT_00002000 = &DAT_a3b17984;
  _DAT_00002004 = &DAT_06671ad7;
  _DAT_00002008 = 0x46685248;
  _DAT_0000200c = 0x392456c4;
  _DAT_00002010 = 0xbc8960a4;
  _DAT_00002014 = 0xad3c2d78;
  _DAT_00002018 = 0xe465e152;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 0;
  DAT_0000220f = 1;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov3_constant_complex2(void)

{
  _DAT_00002000 = &DAT_496e81c3;
  _DAT_00002004 = &DAT_496e81c3;
  _DAT_00002008 = 0x1e3f6cb2;
  _DAT_0000200c = 0x4e6925b3;
  _DAT_00002010 = 0x4f312610;
  _DAT_00002014 = 0x2f37a4a5;
  _DAT_00002018 = 0x91a917b4;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x4ed5;
  DAT_00002200 = 1;
  DAT_00002201 = 0;
  DAT_00002202 = 1;
  DAT_00002203 = 0;
  DAT_00002204 = 1;
  DAT_00002205 = 0;
  DAT_00002206 = 1;
  DAT_00002207 = 0;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 1;
  DAT_0000220b = 0;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



undefined4 cmov4_mv_plain(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov4_mv_allregs(void)

{
  DAT_00002200 = (_DAT_00001100 & 0x800) != 0;
  DAT_00002208 = (_DAT_00001100 & 0x80) != 0;
  DAT_00002204 = (_DAT_00001100 & 0x40) != 0;
  DAT_0000220a = (_DAT_00001100 & 4) != 0;
  DAT_00002202 = (_DAT_00001100 & 1) != 0;
  _DAT_00002000 = _DAT_00001000;
  if (DAT_00002204) {
    _DAT_00002000 = _DAT_00001000 & 0xffff0000 | (uint)*(ushort *)(_DAT_00001004 + 0xc);
  }
  _DAT_00002004 = _DAT_00001004;
  _DAT_00002008 = _DAT_00001008;
  _DAT_0000200c = _DAT_0000100c;
  _DAT_00002010 = _DAT_00001010;
  _DAT_00002014 = _DAT_00001014;
  _DAT_00002018 = _DAT_00001018;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 =
       (ushort)((_DAT_00001100 & 0x4000) != 0) * 0x4000 | (ushort)DAT_00002200 * 0x800 |
       (ushort)((_DAT_00001100 & 0x400) != 0) * 0x400 |
       (ushort)((_DAT_00001100 & 0x200) != 0) * 0x200 |
       (ushort)((_DAT_00001100 & 0x100) != 0) * 0x100 | (ushort)DAT_00002208 * 0x80 |
       (ushort)DAT_00002204 * 0x40 | (ushort)((_DAT_00001100 & 0x10) != 0) * 0x10 |
       (ushort)DAT_0000220a * 4 | (ushort)DAT_00002202;
  DAT_00002201 = !DAT_00002200;
  DAT_00002203 = !DAT_00002202;
  DAT_00002205 = !DAT_00002204;
  DAT_00002206 = DAT_00002202 || DAT_00002204;
  DAT_00002207 = !DAT_00002202 && !DAT_00002204;
  DAT_00002209 = !DAT_00002208;
  DAT_0000220b = !DAT_0000220a;
  DAT_0000220c = DAT_00002200 != DAT_00002208;
  DAT_0000220d = DAT_00002200 == DAT_00002208;
  DAT_0000220e = DAT_00002204 || DAT_00002200 != DAT_00002208;
  DAT_0000220f = !DAT_00002204 && DAT_00002200 == DAT_00002208;
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804eed8)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov4_mv_constant_simple(void)

{
  _DAT_00002000 = 2;
  _DAT_00002004 = 3;
  _DAT_00002008 = 4;
  _DAT_0000200c = 5;
  _DAT_00002010 = 6;
  _DAT_00002014 = 7;
  _DAT_00002018 = 8;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 0;
  DAT_0000220f = 1;
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804efc1)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov4_mv_constant_complex1(void)

{
  _DAT_00002000 = &DAT_a3b17984;
  _DAT_00002004 = &DAT_06671ad7;
  _DAT_00002008 = 0x46685248;
  _DAT_0000200c = 0x392456c4;
  _DAT_00002010 = 0xbc8960a4;
  _DAT_00002014 = 0xad3c2d78;
  _DAT_00002018 = 0xe465e152;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 0;
  DAT_0000220f = 1;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov4_mv_constant_complex2(void)

{
  _DAT_00002000 = CONCAT22(0x313e,_DAT_496e81cf);
  _DAT_00002004 = &DAT_496e81c3;
  _DAT_00002008 = 0x1e3f6cb2;
  _DAT_0000200c = 0x4e6925b3;
  _DAT_00002010 = 0x4f312610;
  _DAT_00002014 = 0x2f37a4a5;
  _DAT_00002018 = 0x91a917b4;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x4ed5;
  DAT_00002200 = 1;
  DAT_00002201 = 0;
  DAT_00002202 = 1;
  DAT_00002203 = 0;
  DAT_00002204 = 1;
  DAT_00002205 = 0;
  DAT_00002206 = 1;
  DAT_00002207 = 0;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 1;
  DAT_0000220b = 0;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



undefined4 cmov5_mv_plain(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov5_mv_allregs(void)

{
  DAT_00002200 = (_DAT_00001100 & 0x800) != 0;
  DAT_00002208 = (_DAT_00001100 & 0x80) != 0;
  DAT_00002204 = (_DAT_00001100 & 0x40) != 0;
  DAT_0000220a = (_DAT_00001100 & 4) != 0;
  DAT_00002202 = (_DAT_00001100 & 1) != 0;
  _DAT_00002000 = _DAT_00001000;
  if (DAT_00002204) {
    _DAT_00002000 = *(undefined4 *)(_DAT_00001004 + 0x22);
  }
  _DAT_00002004 = _DAT_00001004;
  _DAT_00002008 = _DAT_00001008;
  _DAT_0000200c = _DAT_0000100c;
  _DAT_00002010 = _DAT_00001010;
  _DAT_00002014 = _DAT_00001014;
  _DAT_00002018 = _DAT_00001018;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 =
       (ushort)((_DAT_00001100 & 0x4000) != 0) * 0x4000 | (ushort)DAT_00002200 * 0x800 |
       (ushort)((_DAT_00001100 & 0x400) != 0) * 0x400 |
       (ushort)((_DAT_00001100 & 0x200) != 0) * 0x200 |
       (ushort)((_DAT_00001100 & 0x100) != 0) * 0x100 | (ushort)DAT_00002208 * 0x80 |
       (ushort)DAT_00002204 * 0x40 | (ushort)((_DAT_00001100 & 0x10) != 0) * 0x10 |
       (ushort)DAT_0000220a * 4 | (ushort)DAT_00002202;
  DAT_00002201 = !DAT_00002200;
  DAT_00002203 = !DAT_00002202;
  DAT_00002205 = !DAT_00002204;
  DAT_00002206 = DAT_00002202 || DAT_00002204;
  DAT_00002207 = !DAT_00002202 && !DAT_00002204;
  DAT_00002209 = !DAT_00002208;
  DAT_0000220b = !DAT_0000220a;
  DAT_0000220c = DAT_00002200 != DAT_00002208;
  DAT_0000220d = DAT_00002200 == DAT_00002208;
  DAT_0000220e = DAT_00002204 || DAT_00002200 != DAT_00002208;
  DAT_0000220f = !DAT_00002204 && DAT_00002200 == DAT_00002208;
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804f291)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov5_mv_constant_simple(void)

{
  _DAT_00002000 = 2;
  _DAT_00002004 = 3;
  _DAT_00002008 = 4;
  _DAT_0000200c = 5;
  _DAT_00002010 = 6;
  _DAT_00002014 = 7;
  _DAT_00002018 = 8;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 0;
  DAT_0000220f = 1;
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804f379)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov5_mv_constant_complex1(void)

{
  _DAT_00002000 = &DAT_a3b17984;
  _DAT_00002004 = &DAT_06671ad7;
  _DAT_00002008 = 0x46685248;
  _DAT_0000200c = 0x392456c4;
  _DAT_00002010 = 0xbc8960a4;
  _DAT_00002014 = 0xad3c2d78;
  _DAT_00002018 = 0xe465e152;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 0;
  DAT_0000220f = 1;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov5_mv_constant_complex2(void)

{
  _DAT_00002000 = _DAT_496e81e5;
  _DAT_00002004 = &DAT_496e81c3;
  _DAT_00002008 = 0x1e3f6cb2;
  _DAT_0000200c = 0x4e6925b3;
  _DAT_00002010 = 0x4f312610;
  _DAT_00002014 = 0x2f37a4a5;
  _DAT_00002018 = 0x91a917b4;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x4ed5;
  DAT_00002200 = 1;
  DAT_00002201 = 0;
  DAT_00002202 = 1;
  DAT_00002203 = 0;
  DAT_00002204 = 1;
  DAT_00002205 = 0;
  DAT_00002206 = 1;
  DAT_00002207 = 0;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 1;
  DAT_0000220b = 0;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



undefined4 cmov_w_with_code_0_plain(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_w_with_code_0_allregs(void)

{
  byte bVar1;
  
  DAT_0000220a = (_DAT_00001100 & 4) != 0;
  bVar1 = (byte)_DAT_00001000;
  DAT_00002202 = bVar1 < 2;
  DAT_00002200 = SBORROW1(bVar1,'\x02');
  DAT_00002208 = (char)(bVar1 - 2) < '\0';
  DAT_00002204 = bVar1 == 2;
  _DAT_00002004 = _DAT_00001004;
  if (DAT_00002200) {
    _DAT_00002004 = _DAT_00001004 & 0xffff0000 | _DAT_00001000 & 0xffff;
  }
  _DAT_00002000 = _DAT_00001000;
  _DAT_00002008 = _DAT_00001008;
  _DAT_0000200c = _DAT_0000100c;
  _DAT_00002010 = _DAT_00001010;
  _DAT_00002014 = _DAT_00001014;
  _DAT_00002018 = _DAT_00001018;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 =
       (ushort)((_DAT_00001100 & 0x4000) != 0) * 0x4000 | (ushort)DAT_00002200 * 0x800 |
       (ushort)((_DAT_00001100 & 0x400) != 0) * 0x400 |
       (ushort)((_DAT_00001100 & 0x200) != 0) * 0x200 |
       (ushort)((_DAT_00001100 & 0x100) != 0) * 0x100 | (ushort)DAT_00002208 * 0x80 |
       (ushort)DAT_00002204 * 0x40 | (ushort)((_DAT_00001100 & 0x10) != 0) * 0x10 |
       (ushort)DAT_0000220a * 4 | (ushort)DAT_00002202;
  DAT_00002201 = !DAT_00002200;
  DAT_00002203 = !DAT_00002202;
  DAT_00002205 = !DAT_00002204;
  DAT_00002206 = bVar1 < 3;
  DAT_00002207 = 2 < bVar1;
  DAT_00002209 = !DAT_00002208;
  DAT_0000220b = !DAT_0000220a;
  DAT_0000220c = (char)bVar1 < '\x02';
  DAT_0000220d = '\x01' < (char)bVar1;
  DAT_0000220e = (char)bVar1 < '\x03';
  DAT_0000220f = '\x02' < (char)bVar1;
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804f64d)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_w_with_code_0_constant_simple(void)

{
  _DAT_00002000 = 2;
  _DAT_00002004 = 3;
  _DAT_00002008 = 4;
  _DAT_0000200c = 5;
  _DAT_00002010 = 6;
  _DAT_00002014 = 7;
  _DAT_00002018 = 8;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x40;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 1;
  DAT_00002205 = 0;
  DAT_00002206 = 1;
  DAT_00002207 = 0;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804f737)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_w_with_code_0_constant_complex1(void)

{
  _DAT_00002000 = &DAT_a3b17984;
  _DAT_00002004 = &DAT_06671ad7;
  _DAT_00002008 = 0x46685248;
  _DAT_0000200c = 0x392456c4;
  _DAT_00002010 = 0xbc8960a4;
  _DAT_00002014 = 0xad3c2d78;
  _DAT_00002018 = 0xe465e152;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x80;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 1;
  DAT_0000220d = 0;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804f822)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_w_with_code_0_constant_complex2(void)

{
  _DAT_00002000 = &DAT_313ec0e8;
  _DAT_00002004 = &DAT_496e81c3;
  _DAT_00002008 = 0x1e3f6cb2;
  _DAT_0000200c = 0x4e6925b3;
  _DAT_00002010 = 0x4f312610;
  _DAT_00002014 = 0x2f37a4a5;
  _DAT_00002018 = 0x91a917b4;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x4694;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 1;
  DAT_0000220b = 0;
  DAT_0000220c = 1;
  DAT_0000220d = 0;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



undefined4 cmov_w_with_code_1_mv_plain(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_w_with_code_1_mv_allregs(void)

{
  byte bVar1;
  
  DAT_0000220a = (_DAT_00001100 & 4) != 0;
  bVar1 = (byte)_DAT_00001000;
  DAT_00002202 = bVar1 < 2;
  DAT_00002200 = SBORROW1(bVar1,'\x02');
  DAT_00002208 = (char)(bVar1 - 2) < '\0';
  DAT_00002204 = bVar1 == 2;
  _DAT_00002004 = _DAT_00001004;
  if (!DAT_00002200) {
    _DAT_00002004 = _DAT_00001004 & 0xffff0000 | _DAT_00001000 & 0xffff;
  }
  _DAT_00002000 = _DAT_00001000;
  _DAT_00002008 = _DAT_00001008;
  _DAT_0000200c = _DAT_0000100c;
  _DAT_00002010 = _DAT_00001010;
  _DAT_00002014 = _DAT_00001014;
  _DAT_00002018 = _DAT_00001018;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 =
       (ushort)((_DAT_00001100 & 0x4000) != 0) * 0x4000 | (ushort)DAT_00002200 * 0x800 |
       (ushort)((_DAT_00001100 & 0x400) != 0) * 0x400 |
       (ushort)((_DAT_00001100 & 0x200) != 0) * 0x200 |
       (ushort)((_DAT_00001100 & 0x100) != 0) * 0x100 | (ushort)DAT_00002208 * 0x80 |
       (ushort)DAT_00002204 * 0x40 | (ushort)((_DAT_00001100 & 0x10) != 0) * 0x10 |
       (ushort)DAT_0000220a * 4 | (ushort)DAT_00002202;
  DAT_00002201 = !DAT_00002200;
  DAT_00002203 = !DAT_00002202;
  DAT_00002205 = !DAT_00002204;
  DAT_00002206 = bVar1 < 3;
  DAT_00002207 = 2 < bVar1;
  DAT_00002209 = !DAT_00002208;
  DAT_0000220b = !DAT_0000220a;
  DAT_0000220c = (char)bVar1 < '\x02';
  DAT_0000220d = '\x01' < (char)bVar1;
  DAT_0000220e = (char)bVar1 < '\x03';
  DAT_0000220f = '\x02' < (char)bVar1;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_w_with_code_1_mv_constant_simple(void)

{
  _DAT_00002000 = 2;
  _DAT_00002004 = 2;
  _DAT_00002008 = 4;
  _DAT_0000200c = 5;
  _DAT_00002010 = 6;
  _DAT_00002014 = 7;
  _DAT_00002018 = 8;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x40;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 1;
  DAT_00002205 = 0;
  DAT_00002206 = 1;
  DAT_00002207 = 0;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_w_with_code_1_mv_constant_complex1(void)

{
  _DAT_00002000 = &DAT_a3b17984;
  _DAT_00002004 = 0x6677984;
  _DAT_00002008 = 0x46685248;
  _DAT_0000200c = 0x392456c4;
  _DAT_00002010 = 0xbc8960a4;
  _DAT_00002014 = 0xad3c2d78;
  _DAT_00002018 = 0xe465e152;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x80;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 1;
  DAT_0000220d = 0;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_w_with_code_1_mv_constant_complex2(void)

{
  _DAT_00002000 = &DAT_313ec0e8;
  _DAT_00002004 = 0x496ec0e8;
  _DAT_00002008 = 0x1e3f6cb2;
  _DAT_0000200c = 0x4e6925b3;
  _DAT_00002010 = 0x4f312610;
  _DAT_00002014 = 0x2f37a4a5;
  _DAT_00002018 = 0x91a917b4;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x4694;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 1;
  DAT_0000220b = 0;
  DAT_0000220c = 1;
  DAT_0000220d = 0;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



undefined4 cmov_w_with_code_2_mv_plain(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_w_with_code_2_mv_allregs(void)

{
  byte bVar1;
  
  DAT_0000220a = (_DAT_00001100 & 4) != 0;
  bVar1 = (byte)_DAT_00001000;
  DAT_00002202 = bVar1 < 2;
  DAT_00002200 = SBORROW1(bVar1,'\x02');
  DAT_00002208 = (char)(bVar1 - 2) < '\0';
  DAT_00002204 = bVar1 == 2;
  _DAT_00002004 = _DAT_00001004;
  if (DAT_00002202) {
    _DAT_00002004 = _DAT_00001004 & 0xffff0000 | _DAT_00001000 & 0xffff;
  }
  _DAT_00002000 = _DAT_00001000;
  _DAT_00002008 = _DAT_00001008;
  _DAT_0000200c = _DAT_0000100c;
  _DAT_00002010 = _DAT_00001010;
  _DAT_00002014 = _DAT_00001014;
  _DAT_00002018 = _DAT_00001018;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 =
       (ushort)((_DAT_00001100 & 0x4000) != 0) * 0x4000 | (ushort)DAT_00002200 * 0x800 |
       (ushort)((_DAT_00001100 & 0x400) != 0) * 0x400 |
       (ushort)((_DAT_00001100 & 0x200) != 0) * 0x200 |
       (ushort)((_DAT_00001100 & 0x100) != 0) * 0x100 | (ushort)DAT_00002208 * 0x80 |
       (ushort)DAT_00002204 * 0x40 | (ushort)((_DAT_00001100 & 0x10) != 0) * 0x10 |
       (ushort)DAT_0000220a * 4 | (ushort)DAT_00002202;
  DAT_00002201 = !DAT_00002200;
  DAT_00002203 = !DAT_00002202;
  DAT_00002205 = !DAT_00002204;
  DAT_00002206 = bVar1 < 3;
  DAT_00002207 = 2 < bVar1;
  DAT_00002209 = !DAT_00002208;
  DAT_0000220b = !DAT_0000220a;
  DAT_0000220c = (char)bVar1 < '\x02';
  DAT_0000220d = '\x01' < (char)bVar1;
  DAT_0000220e = (char)bVar1 < '\x03';
  DAT_0000220f = '\x02' < (char)bVar1;
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804fdcd)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_w_with_code_2_mv_constant_simple(void)

{
  _DAT_00002000 = 2;
  _DAT_00002004 = 3;
  _DAT_00002008 = 4;
  _DAT_0000200c = 5;
  _DAT_00002010 = 6;
  _DAT_00002014 = 7;
  _DAT_00002018 = 8;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x40;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 1;
  DAT_00002205 = 0;
  DAT_00002206 = 1;
  DAT_00002207 = 0;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804feb7)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_w_with_code_2_mv_constant_complex1(void)

{
  _DAT_00002000 = &DAT_a3b17984;
  _DAT_00002004 = &DAT_06671ad7;
  _DAT_00002008 = 0x46685248;
  _DAT_0000200c = 0x392456c4;
  _DAT_00002010 = 0xbc8960a4;
  _DAT_00002014 = 0xad3c2d78;
  _DAT_00002018 = 0xe465e152;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x80;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 1;
  DAT_0000220d = 0;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804ffa2)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_w_with_code_2_mv_constant_complex2(void)

{
  _DAT_00002000 = &DAT_313ec0e8;
  _DAT_00002004 = &DAT_496e81c3;
  _DAT_00002008 = 0x1e3f6cb2;
  _DAT_0000200c = 0x4e6925b3;
  _DAT_00002010 = 0x4f312610;
  _DAT_00002014 = 0x2f37a4a5;
  _DAT_00002018 = 0x91a917b4;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x4694;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 1;
  DAT_0000220b = 0;
  DAT_0000220c = 1;
  DAT_0000220d = 0;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



undefined4 cmov_w_with_code_3_mv_plain(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_w_with_code_3_mv_allregs(void)

{
  byte bVar1;
  
  DAT_0000220a = (_DAT_00001100 & 4) != 0;
  bVar1 = (byte)_DAT_00001000;
  DAT_00002202 = bVar1 < 2;
  DAT_00002200 = SBORROW1(bVar1,'\x02');
  DAT_00002208 = (char)(bVar1 - 2) < '\0';
  DAT_00002204 = bVar1 == 2;
  _DAT_00002004 = _DAT_00001004;
  if (!DAT_00002202) {
    _DAT_00002004 = _DAT_00001004 & 0xffff0000 | _DAT_00001000 & 0xffff;
  }
  _DAT_00002000 = _DAT_00001000;
  _DAT_00002008 = _DAT_00001008;
  _DAT_0000200c = _DAT_0000100c;
  _DAT_00002010 = _DAT_00001010;
  _DAT_00002014 = _DAT_00001014;
  _DAT_00002018 = _DAT_00001018;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 =
       (ushort)((_DAT_00001100 & 0x4000) != 0) * 0x4000 | (ushort)DAT_00002200 * 0x800 |
       (ushort)((_DAT_00001100 & 0x400) != 0) * 0x400 |
       (ushort)((_DAT_00001100 & 0x200) != 0) * 0x200 |
       (ushort)((_DAT_00001100 & 0x100) != 0) * 0x100 | (ushort)DAT_00002208 * 0x80 |
       (ushort)DAT_00002204 * 0x40 | (ushort)((_DAT_00001100 & 0x10) != 0) * 0x10 |
       (ushort)DAT_0000220a * 4 | (ushort)DAT_00002202;
  DAT_00002201 = !DAT_00002200;
  DAT_00002203 = !DAT_00002202;
  DAT_00002205 = !DAT_00002204;
  DAT_00002206 = bVar1 < 3;
  DAT_00002207 = 2 < bVar1;
  DAT_00002209 = !DAT_00002208;
  DAT_0000220b = !DAT_0000220a;
  DAT_0000220c = (char)bVar1 < '\x02';
  DAT_0000220d = '\x01' < (char)bVar1;
  DAT_0000220e = (char)bVar1 < '\x03';
  DAT_0000220f = '\x02' < (char)bVar1;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_w_with_code_3_mv_constant_simple(void)

{
  _DAT_00002000 = 2;
  _DAT_00002004 = 2;
  _DAT_00002008 = 4;
  _DAT_0000200c = 5;
  _DAT_00002010 = 6;
  _DAT_00002014 = 7;
  _DAT_00002018 = 8;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x40;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 1;
  DAT_00002205 = 0;
  DAT_00002206 = 1;
  DAT_00002207 = 0;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_w_with_code_3_mv_constant_complex1(void)

{
  _DAT_00002000 = &DAT_a3b17984;
  _DAT_00002004 = 0x6677984;
  _DAT_00002008 = 0x46685248;
  _DAT_0000200c = 0x392456c4;
  _DAT_00002010 = 0xbc8960a4;
  _DAT_00002014 = 0xad3c2d78;
  _DAT_00002018 = 0xe465e152;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x80;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 1;
  DAT_0000220d = 0;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_w_with_code_3_mv_constant_complex2(void)

{
  _DAT_00002000 = &DAT_313ec0e8;
  _DAT_00002004 = 0x496ec0e8;
  _DAT_00002008 = 0x1e3f6cb2;
  _DAT_0000200c = 0x4e6925b3;
  _DAT_00002010 = 0x4f312610;
  _DAT_00002014 = 0x2f37a4a5;
  _DAT_00002018 = 0x91a917b4;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x4694;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 1;
  DAT_0000220b = 0;
  DAT_0000220c = 1;
  DAT_0000220d = 0;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



undefined4 cmov_w_with_code_4_mv_plain(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_w_with_code_4_mv_allregs(void)

{
  byte bVar1;
  
  DAT_0000220a = (_DAT_00001100 & 4) != 0;
  bVar1 = (byte)_DAT_00001000;
  DAT_00002202 = bVar1 < 2;
  DAT_00002200 = SBORROW1(bVar1,'\x02');
  DAT_00002208 = (char)(bVar1 - 2) < '\0';
  DAT_00002204 = bVar1 == 2;
  _DAT_00002004 = _DAT_00001004;
  if (DAT_00002204) {
    _DAT_00002004 = _DAT_00001004 & 0xffff0000 | _DAT_00001000 & 0xffff;
  }
  _DAT_00002000 = _DAT_00001000;
  _DAT_00002008 = _DAT_00001008;
  _DAT_0000200c = _DAT_0000100c;
  _DAT_00002010 = _DAT_00001010;
  _DAT_00002014 = _DAT_00001014;
  _DAT_00002018 = _DAT_00001018;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 =
       (ushort)((_DAT_00001100 & 0x4000) != 0) * 0x4000 | (ushort)DAT_00002200 * 0x800 |
       (ushort)((_DAT_00001100 & 0x400) != 0) * 0x400 |
       (ushort)((_DAT_00001100 & 0x200) != 0) * 0x200 |
       (ushort)((_DAT_00001100 & 0x100) != 0) * 0x100 | (ushort)DAT_00002208 * 0x80 |
       (ushort)DAT_00002204 * 0x40 | (ushort)((_DAT_00001100 & 0x10) != 0) * 0x10 |
       (ushort)DAT_0000220a * 4 | (ushort)DAT_00002202;
  DAT_00002201 = !DAT_00002200;
  DAT_00002203 = !DAT_00002202;
  DAT_00002205 = !DAT_00002204;
  DAT_00002206 = bVar1 < 3;
  DAT_00002207 = 2 < bVar1;
  DAT_00002209 = !DAT_00002208;
  DAT_0000220b = !DAT_0000220a;
  DAT_0000220c = (char)bVar1 < '\x02';
  DAT_0000220d = '\x01' < (char)bVar1;
  DAT_0000220e = (char)bVar1 < '\x03';
  DAT_0000220f = '\x02' < (char)bVar1;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_w_with_code_4_mv_constant_simple(void)

{
  _DAT_00002000 = 2;
  _DAT_00002004 = 2;
  _DAT_00002008 = 4;
  _DAT_0000200c = 5;
  _DAT_00002010 = 6;
  _DAT_00002014 = 7;
  _DAT_00002018 = 8;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x40;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 1;
  DAT_00002205 = 0;
  DAT_00002206 = 1;
  DAT_00002207 = 0;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08050637)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_w_with_code_4_mv_constant_complex1(void)

{
  _DAT_00002000 = &DAT_a3b17984;
  _DAT_00002004 = &DAT_06671ad7;
  _DAT_00002008 = 0x46685248;
  _DAT_0000200c = 0x392456c4;
  _DAT_00002010 = 0xbc8960a4;
  _DAT_00002014 = 0xad3c2d78;
  _DAT_00002018 = 0xe465e152;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x80;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 1;
  DAT_0000220d = 0;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08050722)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_w_with_code_4_mv_constant_complex2(void)

{
  _DAT_00002000 = &DAT_313ec0e8;
  _DAT_00002004 = &DAT_496e81c3;
  _DAT_00002008 = 0x1e3f6cb2;
  _DAT_0000200c = 0x4e6925b3;
  _DAT_00002010 = 0x4f312610;
  _DAT_00002014 = 0x2f37a4a5;
  _DAT_00002018 = 0x91a917b4;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x4694;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 1;
  DAT_0000220b = 0;
  DAT_0000220c = 1;
  DAT_0000220d = 0;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



undefined4 cmov_w_with_code_5_mv_plain(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_w_with_code_5_mv_allregs(void)

{
  byte bVar1;
  
  DAT_0000220a = (_DAT_00001100 & 4) != 0;
  bVar1 = (byte)_DAT_00001000;
  DAT_00002202 = bVar1 < 2;
  DAT_00002200 = SBORROW1(bVar1,'\x02');
  DAT_00002208 = (char)(bVar1 - 2) < '\0';
  DAT_00002204 = bVar1 == 2;
  _DAT_00002004 = _DAT_00001004;
  if (!DAT_00002204) {
    _DAT_00002004 = _DAT_00001004 & 0xffff0000 | _DAT_00001000 & 0xffff;
  }
  _DAT_00002000 = _DAT_00001000;
  _DAT_00002008 = _DAT_00001008;
  _DAT_0000200c = _DAT_0000100c;
  _DAT_00002010 = _DAT_00001010;
  _DAT_00002014 = _DAT_00001014;
  _DAT_00002018 = _DAT_00001018;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 =
       (ushort)((_DAT_00001100 & 0x4000) != 0) * 0x4000 | (ushort)DAT_00002200 * 0x800 |
       (ushort)((_DAT_00001100 & 0x400) != 0) * 0x400 |
       (ushort)((_DAT_00001100 & 0x200) != 0) * 0x200 |
       (ushort)((_DAT_00001100 & 0x100) != 0) * 0x100 | (ushort)DAT_00002208 * 0x80 |
       (ushort)DAT_00002204 * 0x40 | (ushort)((_DAT_00001100 & 0x10) != 0) * 0x10 |
       (ushort)DAT_0000220a * 4 | (ushort)DAT_00002202;
  DAT_00002201 = !DAT_00002200;
  DAT_00002203 = !DAT_00002202;
  DAT_00002205 = !DAT_00002204;
  DAT_00002206 = bVar1 < 3;
  DAT_00002207 = 2 < bVar1;
  DAT_00002209 = !DAT_00002208;
  DAT_0000220b = !DAT_0000220a;
  DAT_0000220c = (char)bVar1 < '\x02';
  DAT_0000220d = '\x01' < (char)bVar1;
  DAT_0000220e = (char)bVar1 < '\x03';
  DAT_0000220f = '\x02' < (char)bVar1;
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805090d)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_w_with_code_5_mv_constant_simple(void)

{
  _DAT_00002000 = 2;
  _DAT_00002004 = 3;
  _DAT_00002008 = 4;
  _DAT_0000200c = 5;
  _DAT_00002010 = 6;
  _DAT_00002014 = 7;
  _DAT_00002018 = 8;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x40;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 1;
  DAT_00002205 = 0;
  DAT_00002206 = 1;
  DAT_00002207 = 0;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_w_with_code_5_mv_constant_complex1(void)

{
  _DAT_00002000 = &DAT_a3b17984;
  _DAT_00002004 = 0x6677984;
  _DAT_00002008 = 0x46685248;
  _DAT_0000200c = 0x392456c4;
  _DAT_00002010 = 0xbc8960a4;
  _DAT_00002014 = 0xad3c2d78;
  _DAT_00002018 = 0xe465e152;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x80;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 1;
  DAT_0000220d = 0;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_w_with_code_5_mv_constant_complex2(void)

{
  _DAT_00002000 = &DAT_313ec0e8;
  _DAT_00002004 = 0x496ec0e8;
  _DAT_00002008 = 0x1e3f6cb2;
  _DAT_0000200c = 0x4e6925b3;
  _DAT_00002010 = 0x4f312610;
  _DAT_00002014 = 0x2f37a4a5;
  _DAT_00002018 = 0x91a917b4;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x4694;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 1;
  DAT_0000220b = 0;
  DAT_0000220c = 1;
  DAT_0000220d = 0;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



undefined4 cmov_w_with_code_6_mv_plain(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_w_with_code_6_mv_allregs(void)

{
  byte bVar1;
  
  DAT_0000220a = (_DAT_00001100 & 4) != 0;
  bVar1 = (byte)_DAT_00001000;
  DAT_00002202 = bVar1 < 2;
  DAT_00002200 = SBORROW1(bVar1,'\x02');
  DAT_00002208 = (char)(bVar1 - 2) < '\0';
  DAT_00002204 = bVar1 == 2;
  _DAT_00002004 = _DAT_00001004;
  if (bVar1 < 3) {
    _DAT_00002004 = _DAT_00001004 & 0xffff0000 | _DAT_00001000 & 0xffff;
  }
  _DAT_00002000 = _DAT_00001000;
  _DAT_00002008 = _DAT_00001008;
  _DAT_0000200c = _DAT_0000100c;
  _DAT_00002010 = _DAT_00001010;
  _DAT_00002014 = _DAT_00001014;
  _DAT_00002018 = _DAT_00001018;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 =
       (ushort)((_DAT_00001100 & 0x4000) != 0) * 0x4000 | (ushort)DAT_00002200 * 0x800 |
       (ushort)((_DAT_00001100 & 0x400) != 0) * 0x400 |
       (ushort)((_DAT_00001100 & 0x200) != 0) * 0x200 |
       (ushort)((_DAT_00001100 & 0x100) != 0) * 0x100 | (ushort)DAT_00002208 * 0x80 |
       (ushort)DAT_00002204 * 0x40 | (ushort)((_DAT_00001100 & 0x10) != 0) * 0x10 |
       (ushort)DAT_0000220a * 4 | (ushort)DAT_00002202;
  DAT_00002201 = !DAT_00002200;
  DAT_00002203 = !DAT_00002202;
  DAT_00002205 = !DAT_00002204;
  DAT_00002206 = bVar1 < 3;
  DAT_00002207 = 2 < bVar1;
  DAT_00002209 = !DAT_00002208;
  DAT_0000220b = !DAT_0000220a;
  DAT_0000220c = (char)bVar1 < '\x02';
  DAT_0000220d = '\x01' < (char)bVar1;
  DAT_0000220e = (char)bVar1 < '\x03';
  DAT_0000220f = '\x02' < (char)bVar1;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_w_with_code_6_mv_constant_simple(void)

{
  _DAT_00002000 = 2;
  _DAT_00002004 = 2;
  _DAT_00002008 = 4;
  _DAT_0000200c = 5;
  _DAT_00002010 = 6;
  _DAT_00002014 = 7;
  _DAT_00002018 = 8;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x40;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 1;
  DAT_00002205 = 0;
  DAT_00002206 = 1;
  DAT_00002207 = 0;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08050db7)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_w_with_code_6_mv_constant_complex1(void)

{
  _DAT_00002000 = &DAT_a3b17984;
  _DAT_00002004 = &DAT_06671ad7;
  _DAT_00002008 = 0x46685248;
  _DAT_0000200c = 0x392456c4;
  _DAT_00002010 = 0xbc8960a4;
  _DAT_00002014 = 0xad3c2d78;
  _DAT_00002018 = 0xe465e152;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x80;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 1;
  DAT_0000220d = 0;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08050ea2)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_w_with_code_6_mv_constant_complex2(void)

{
  _DAT_00002000 = &DAT_313ec0e8;
  _DAT_00002004 = &DAT_496e81c3;
  _DAT_00002008 = 0x1e3f6cb2;
  _DAT_0000200c = 0x4e6925b3;
  _DAT_00002010 = 0x4f312610;
  _DAT_00002014 = 0x2f37a4a5;
  _DAT_00002018 = 0x91a917b4;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x4694;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 1;
  DAT_0000220b = 0;
  DAT_0000220c = 1;
  DAT_0000220d = 0;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



undefined4 cmov_w_with_code_7_mv_plain(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_w_with_code_7_mv_allregs(void)

{
  byte bVar1;
  
  DAT_0000220a = (_DAT_00001100 & 4) != 0;
  bVar1 = (byte)_DAT_00001000;
  DAT_00002202 = bVar1 < 2;
  DAT_00002200 = SBORROW1(bVar1,'\x02');
  DAT_00002208 = (char)(bVar1 - 2) < '\0';
  DAT_00002204 = bVar1 == 2;
  _DAT_00002004 = _DAT_00001004;
  if (2 < bVar1) {
    _DAT_00002004 = _DAT_00001004 & 0xffff0000 | _DAT_00001000 & 0xffff;
  }
  _DAT_00002000 = _DAT_00001000;
  _DAT_00002008 = _DAT_00001008;
  _DAT_0000200c = _DAT_0000100c;
  _DAT_00002010 = _DAT_00001010;
  _DAT_00002014 = _DAT_00001014;
  _DAT_00002018 = _DAT_00001018;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 =
       (ushort)((_DAT_00001100 & 0x4000) != 0) * 0x4000 | (ushort)DAT_00002200 * 0x800 |
       (ushort)((_DAT_00001100 & 0x400) != 0) * 0x400 |
       (ushort)((_DAT_00001100 & 0x200) != 0) * 0x200 |
       (ushort)((_DAT_00001100 & 0x100) != 0) * 0x100 | (ushort)DAT_00002208 * 0x80 |
       (ushort)DAT_00002204 * 0x40 | (ushort)((_DAT_00001100 & 0x10) != 0) * 0x10 |
       (ushort)DAT_0000220a * 4 | (ushort)DAT_00002202;
  DAT_00002201 = !DAT_00002200;
  DAT_00002203 = !DAT_00002202;
  DAT_00002205 = !DAT_00002204;
  DAT_00002206 = bVar1 < 3;
  DAT_00002207 = 2 < bVar1;
  DAT_00002209 = !DAT_00002208;
  DAT_0000220b = !DAT_0000220a;
  DAT_0000220c = (char)bVar1 < '\x02';
  DAT_0000220d = '\x01' < (char)bVar1;
  DAT_0000220e = (char)bVar1 < '\x03';
  DAT_0000220f = '\x02' < (char)bVar1;
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805108d)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_w_with_code_7_mv_constant_simple(void)

{
  _DAT_00002000 = 2;
  _DAT_00002004 = 3;
  _DAT_00002008 = 4;
  _DAT_0000200c = 5;
  _DAT_00002010 = 6;
  _DAT_00002014 = 7;
  _DAT_00002018 = 8;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x40;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 1;
  DAT_00002205 = 0;
  DAT_00002206 = 1;
  DAT_00002207 = 0;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_w_with_code_7_mv_constant_complex1(void)

{
  _DAT_00002000 = &DAT_a3b17984;
  _DAT_00002004 = 0x6677984;
  _DAT_00002008 = 0x46685248;
  _DAT_0000200c = 0x392456c4;
  _DAT_00002010 = 0xbc8960a4;
  _DAT_00002014 = 0xad3c2d78;
  _DAT_00002018 = 0xe465e152;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x80;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 1;
  DAT_0000220d = 0;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_w_with_code_7_mv_constant_complex2(void)

{
  _DAT_00002000 = &DAT_313ec0e8;
  _DAT_00002004 = 0x496ec0e8;
  _DAT_00002008 = 0x1e3f6cb2;
  _DAT_0000200c = 0x4e6925b3;
  _DAT_00002010 = 0x4f312610;
  _DAT_00002014 = 0x2f37a4a5;
  _DAT_00002018 = 0x91a917b4;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x4694;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 1;
  DAT_0000220b = 0;
  DAT_0000220c = 1;
  DAT_0000220d = 0;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



undefined4 cmov_w_with_code_8_mv_plain(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_w_with_code_8_mv_allregs(void)

{
  byte bVar1;
  
  DAT_0000220a = (_DAT_00001100 & 4) != 0;
  bVar1 = (byte)_DAT_00001000;
  DAT_00002202 = bVar1 < 2;
  DAT_00002200 = SBORROW1(bVar1,'\x02');
  DAT_00002208 = (char)(bVar1 - 2) < '\0';
  DAT_00002204 = bVar1 == 2;
  _DAT_00002004 = _DAT_00001004;
  if (DAT_00002208) {
    _DAT_00002004 = _DAT_00001004 & 0xffff0000 | _DAT_00001000 & 0xffff;
  }
  _DAT_00002000 = _DAT_00001000;
  _DAT_00002008 = _DAT_00001008;
  _DAT_0000200c = _DAT_0000100c;
  _DAT_00002010 = _DAT_00001010;
  _DAT_00002014 = _DAT_00001014;
  _DAT_00002018 = _DAT_00001018;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 =
       (ushort)((_DAT_00001100 & 0x4000) != 0) * 0x4000 | (ushort)DAT_00002200 * 0x800 |
       (ushort)((_DAT_00001100 & 0x400) != 0) * 0x400 |
       (ushort)((_DAT_00001100 & 0x200) != 0) * 0x200 |
       (ushort)((_DAT_00001100 & 0x100) != 0) * 0x100 | (ushort)DAT_00002208 * 0x80 |
       (ushort)DAT_00002204 * 0x40 | (ushort)((_DAT_00001100 & 0x10) != 0) * 0x10 |
       (ushort)DAT_0000220a * 4 | (ushort)DAT_00002202;
  DAT_00002201 = !DAT_00002200;
  DAT_00002203 = !DAT_00002202;
  DAT_00002205 = !DAT_00002204;
  DAT_00002206 = bVar1 < 3;
  DAT_00002207 = 2 < bVar1;
  DAT_00002209 = !DAT_00002208;
  DAT_0000220b = !DAT_0000220a;
  DAT_0000220c = (char)bVar1 < '\x02';
  DAT_0000220d = '\x01' < (char)bVar1;
  DAT_0000220e = (char)bVar1 < '\x03';
  DAT_0000220f = '\x02' < (char)bVar1;
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805144d)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_w_with_code_8_mv_constant_simple(void)

{
  _DAT_00002000 = 2;
  _DAT_00002004 = 3;
  _DAT_00002008 = 4;
  _DAT_0000200c = 5;
  _DAT_00002010 = 6;
  _DAT_00002014 = 7;
  _DAT_00002018 = 8;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x40;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 1;
  DAT_00002205 = 0;
  DAT_00002206 = 1;
  DAT_00002207 = 0;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_w_with_code_8_mv_constant_complex1(void)

{
  _DAT_00002000 = &DAT_a3b17984;
  _DAT_00002004 = 0x6677984;
  _DAT_00002008 = 0x46685248;
  _DAT_0000200c = 0x392456c4;
  _DAT_00002010 = 0xbc8960a4;
  _DAT_00002014 = 0xad3c2d78;
  _DAT_00002018 = 0xe465e152;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x80;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 1;
  DAT_0000220d = 0;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_w_with_code_8_mv_constant_complex2(void)

{
  _DAT_00002000 = &DAT_313ec0e8;
  _DAT_00002004 = 0x496ec0e8;
  _DAT_00002008 = 0x1e3f6cb2;
  _DAT_0000200c = 0x4e6925b3;
  _DAT_00002010 = 0x4f312610;
  _DAT_00002014 = 0x2f37a4a5;
  _DAT_00002018 = 0x91a917b4;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x4694;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 1;
  DAT_0000220b = 0;
  DAT_0000220c = 1;
  DAT_0000220d = 0;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



undefined4 cmov_w_with_code_9_mv_plain(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_w_with_code_9_mv_allregs(void)

{
  byte bVar1;
  
  DAT_0000220a = (_DAT_00001100 & 4) != 0;
  bVar1 = (byte)_DAT_00001000;
  DAT_00002202 = bVar1 < 2;
  DAT_00002200 = SBORROW1(bVar1,'\x02');
  DAT_00002208 = (char)(bVar1 - 2) < '\0';
  DAT_00002204 = bVar1 == 2;
  _DAT_00002004 = _DAT_00001004;
  if (!DAT_00002208) {
    _DAT_00002004 = _DAT_00001004 & 0xffff0000 | _DAT_00001000 & 0xffff;
  }
  _DAT_00002000 = _DAT_00001000;
  _DAT_00002008 = _DAT_00001008;
  _DAT_0000200c = _DAT_0000100c;
  _DAT_00002010 = _DAT_00001010;
  _DAT_00002014 = _DAT_00001014;
  _DAT_00002018 = _DAT_00001018;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 =
       (ushort)((_DAT_00001100 & 0x4000) != 0) * 0x4000 | (ushort)DAT_00002200 * 0x800 |
       (ushort)((_DAT_00001100 & 0x400) != 0) * 0x400 |
       (ushort)((_DAT_00001100 & 0x200) != 0) * 0x200 |
       (ushort)((_DAT_00001100 & 0x100) != 0) * 0x100 | (ushort)DAT_00002208 * 0x80 |
       (ushort)DAT_00002204 * 0x40 | (ushort)((_DAT_00001100 & 0x10) != 0) * 0x10 |
       (ushort)DAT_0000220a * 4 | (ushort)DAT_00002202;
  DAT_00002201 = !DAT_00002200;
  DAT_00002203 = !DAT_00002202;
  DAT_00002205 = !DAT_00002204;
  DAT_00002206 = bVar1 < 3;
  DAT_00002207 = 2 < bVar1;
  DAT_00002209 = !DAT_00002208;
  DAT_0000220b = !DAT_0000220a;
  DAT_0000220c = (char)bVar1 < '\x02';
  DAT_0000220d = '\x01' < (char)bVar1;
  DAT_0000220e = (char)bVar1 < '\x03';
  DAT_0000220f = '\x02' < (char)bVar1;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_w_with_code_9_mv_constant_simple(void)

{
  _DAT_00002000 = 2;
  _DAT_00002004 = 2;
  _DAT_00002008 = 4;
  _DAT_0000200c = 5;
  _DAT_00002010 = 6;
  _DAT_00002014 = 7;
  _DAT_00002018 = 8;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x40;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 1;
  DAT_00002205 = 0;
  DAT_00002206 = 1;
  DAT_00002207 = 0;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080518f7)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_w_with_code_9_mv_constant_complex1(void)

{
  _DAT_00002000 = &DAT_a3b17984;
  _DAT_00002004 = &DAT_06671ad7;
  _DAT_00002008 = 0x46685248;
  _DAT_0000200c = 0x392456c4;
  _DAT_00002010 = 0xbc8960a4;
  _DAT_00002014 = 0xad3c2d78;
  _DAT_00002018 = 0xe465e152;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x80;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 1;
  DAT_0000220d = 0;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080519e2)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_w_with_code_9_mv_constant_complex2(void)

{
  _DAT_00002000 = &DAT_313ec0e8;
  _DAT_00002004 = &DAT_496e81c3;
  _DAT_00002008 = 0x1e3f6cb2;
  _DAT_0000200c = 0x4e6925b3;
  _DAT_00002010 = 0x4f312610;
  _DAT_00002014 = 0x2f37a4a5;
  _DAT_00002018 = 0x91a917b4;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x4694;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 1;
  DAT_0000220b = 0;
  DAT_0000220c = 1;
  DAT_0000220d = 0;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



undefined4 cmov_w_with_code_a_mv_plain(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_w_with_code_a_mv_allregs(void)

{
  byte bVar1;
  
  DAT_0000220a = (_DAT_00001100 & 4) != 0;
  bVar1 = (byte)_DAT_00001000;
  DAT_00002202 = bVar1 < 2;
  DAT_00002200 = SBORROW1(bVar1,'\x02');
  DAT_00002208 = (char)(bVar1 - 2) < '\0';
  DAT_00002204 = bVar1 == 2;
  _DAT_00002004 = _DAT_00001004;
  if (DAT_0000220a) {
    _DAT_00002004 = _DAT_00001004 & 0xffff0000 | _DAT_00001000 & 0xffff;
  }
  _DAT_00002000 = _DAT_00001000;
  _DAT_00002008 = _DAT_00001008;
  _DAT_0000200c = _DAT_0000100c;
  _DAT_00002010 = _DAT_00001010;
  _DAT_00002014 = _DAT_00001014;
  _DAT_00002018 = _DAT_00001018;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 =
       (ushort)((_DAT_00001100 & 0x4000) != 0) * 0x4000 | (ushort)DAT_00002200 * 0x800 |
       (ushort)((_DAT_00001100 & 0x400) != 0) * 0x400 |
       (ushort)((_DAT_00001100 & 0x200) != 0) * 0x200 |
       (ushort)((_DAT_00001100 & 0x100) != 0) * 0x100 | (ushort)DAT_00002208 * 0x80 |
       (ushort)DAT_00002204 * 0x40 | (ushort)((_DAT_00001100 & 0x10) != 0) * 0x10 |
       (ushort)DAT_0000220a * 4 | (ushort)DAT_00002202;
  DAT_00002201 = !DAT_00002200;
  DAT_00002203 = !DAT_00002202;
  DAT_00002205 = !DAT_00002204;
  DAT_00002206 = bVar1 < 3;
  DAT_00002207 = 2 < bVar1;
  DAT_00002209 = !DAT_00002208;
  DAT_0000220b = !DAT_0000220a;
  DAT_0000220c = (char)bVar1 < '\x02';
  DAT_0000220d = '\x01' < (char)bVar1;
  DAT_0000220e = (char)bVar1 < '\x03';
  DAT_0000220f = '\x02' < (char)bVar1;
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08051bcd)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_w_with_code_a_mv_constant_simple(void)

{
  _DAT_00002000 = 2;
  _DAT_00002004 = 3;
  _DAT_00002008 = 4;
  _DAT_0000200c = 5;
  _DAT_00002010 = 6;
  _DAT_00002014 = 7;
  _DAT_00002018 = 8;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x40;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 1;
  DAT_00002205 = 0;
  DAT_00002206 = 1;
  DAT_00002207 = 0;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08051cb7)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_w_with_code_a_mv_constant_complex1(void)

{
  _DAT_00002000 = &DAT_a3b17984;
  _DAT_00002004 = &DAT_06671ad7;
  _DAT_00002008 = 0x46685248;
  _DAT_0000200c = 0x392456c4;
  _DAT_00002010 = 0xbc8960a4;
  _DAT_00002014 = 0xad3c2d78;
  _DAT_00002018 = 0xe465e152;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x80;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 1;
  DAT_0000220d = 0;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_w_with_code_a_mv_constant_complex2(void)

{
  _DAT_00002000 = &DAT_313ec0e8;
  _DAT_00002004 = 0x496ec0e8;
  _DAT_00002008 = 0x1e3f6cb2;
  _DAT_0000200c = 0x4e6925b3;
  _DAT_00002010 = 0x4f312610;
  _DAT_00002014 = 0x2f37a4a5;
  _DAT_00002018 = 0x91a917b4;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x4694;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 1;
  DAT_0000220b = 0;
  DAT_0000220c = 1;
  DAT_0000220d = 0;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



undefined4 cmov_w_with_code_b_mv_plain(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_w_with_code_b_mv_allregs(void)

{
  byte bVar1;
  
  DAT_0000220a = (_DAT_00001100 & 4) != 0;
  bVar1 = (byte)_DAT_00001000;
  DAT_00002202 = bVar1 < 2;
  DAT_00002200 = SBORROW1(bVar1,'\x02');
  DAT_00002208 = (char)(bVar1 - 2) < '\0';
  DAT_00002204 = bVar1 == 2;
  _DAT_00002004 = _DAT_00001004;
  if (!DAT_0000220a) {
    _DAT_00002004 = _DAT_00001004 & 0xffff0000 | _DAT_00001000 & 0xffff;
  }
  _DAT_00002000 = _DAT_00001000;
  _DAT_00002008 = _DAT_00001008;
  _DAT_0000200c = _DAT_0000100c;
  _DAT_00002010 = _DAT_00001010;
  _DAT_00002014 = _DAT_00001014;
  _DAT_00002018 = _DAT_00001018;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 =
       (ushort)((_DAT_00001100 & 0x4000) != 0) * 0x4000 | (ushort)DAT_00002200 * 0x800 |
       (ushort)((_DAT_00001100 & 0x400) != 0) * 0x400 |
       (ushort)((_DAT_00001100 & 0x200) != 0) * 0x200 |
       (ushort)((_DAT_00001100 & 0x100) != 0) * 0x100 | (ushort)DAT_00002208 * 0x80 |
       (ushort)DAT_00002204 * 0x40 | (ushort)((_DAT_00001100 & 0x10) != 0) * 0x10 |
       (ushort)DAT_0000220a * 4 | (ushort)DAT_00002202;
  DAT_00002201 = !DAT_00002200;
  DAT_00002203 = !DAT_00002202;
  DAT_00002205 = !DAT_00002204;
  DAT_00002206 = bVar1 < 3;
  DAT_00002207 = 2 < bVar1;
  DAT_00002209 = !DAT_00002208;
  DAT_0000220b = !DAT_0000220a;
  DAT_0000220c = (char)bVar1 < '\x02';
  DAT_0000220d = '\x01' < (char)bVar1;
  DAT_0000220e = (char)bVar1 < '\x03';
  DAT_0000220f = '\x02' < (char)bVar1;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_w_with_code_b_mv_constant_simple(void)

{
  _DAT_00002000 = 2;
  _DAT_00002004 = 2;
  _DAT_00002008 = 4;
  _DAT_0000200c = 5;
  _DAT_00002010 = 6;
  _DAT_00002014 = 7;
  _DAT_00002018 = 8;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x40;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 1;
  DAT_00002205 = 0;
  DAT_00002206 = 1;
  DAT_00002207 = 0;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_w_with_code_b_mv_constant_complex1(void)

{
  _DAT_00002000 = &DAT_a3b17984;
  _DAT_00002004 = 0x6677984;
  _DAT_00002008 = 0x46685248;
  _DAT_0000200c = 0x392456c4;
  _DAT_00002010 = 0xbc8960a4;
  _DAT_00002014 = 0xad3c2d78;
  _DAT_00002018 = 0xe465e152;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x80;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 1;
  DAT_0000220d = 0;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08052162)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_w_with_code_b_mv_constant_complex2(void)

{
  _DAT_00002000 = &DAT_313ec0e8;
  _DAT_00002004 = &DAT_496e81c3;
  _DAT_00002008 = 0x1e3f6cb2;
  _DAT_0000200c = 0x4e6925b3;
  _DAT_00002010 = 0x4f312610;
  _DAT_00002014 = 0x2f37a4a5;
  _DAT_00002018 = 0x91a917b4;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x4694;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 1;
  DAT_0000220b = 0;
  DAT_0000220c = 1;
  DAT_0000220d = 0;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



undefined4 cmov_w_with_code_c_mv_plain(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_w_with_code_c_mv_allregs(void)

{
  byte bVar1;
  
  DAT_0000220a = (_DAT_00001100 & 4) != 0;
  bVar1 = (byte)_DAT_00001000;
  DAT_00002202 = bVar1 < 2;
  DAT_00002200 = SBORROW1(bVar1,'\x02');
  DAT_00002208 = (char)(bVar1 - 2) < '\0';
  DAT_00002204 = bVar1 == 2;
  _DAT_00002004 = _DAT_00001004;
  if ((char)bVar1 < '\x02') {
    _DAT_00002004 = _DAT_00001004 & 0xffff0000 | _DAT_00001000 & 0xffff;
  }
  _DAT_00002000 = _DAT_00001000;
  _DAT_00002008 = _DAT_00001008;
  _DAT_0000200c = _DAT_0000100c;
  _DAT_00002010 = _DAT_00001010;
  _DAT_00002014 = _DAT_00001014;
  _DAT_00002018 = _DAT_00001018;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 =
       (ushort)((_DAT_00001100 & 0x4000) != 0) * 0x4000 | (ushort)DAT_00002200 * 0x800 |
       (ushort)((_DAT_00001100 & 0x400) != 0) * 0x400 |
       (ushort)((_DAT_00001100 & 0x200) != 0) * 0x200 |
       (ushort)((_DAT_00001100 & 0x100) != 0) * 0x100 | (ushort)DAT_00002208 * 0x80 |
       (ushort)DAT_00002204 * 0x40 | (ushort)((_DAT_00001100 & 0x10) != 0) * 0x10 |
       (ushort)DAT_0000220a * 4 | (ushort)DAT_00002202;
  DAT_00002201 = !DAT_00002200;
  DAT_00002203 = !DAT_00002202;
  DAT_00002205 = !DAT_00002204;
  DAT_00002206 = bVar1 < 3;
  DAT_00002207 = 2 < bVar1;
  DAT_00002209 = !DAT_00002208;
  DAT_0000220b = !DAT_0000220a;
  DAT_0000220c = (char)bVar1 < '\x02';
  DAT_0000220d = '\x01' < (char)bVar1;
  DAT_0000220e = (char)bVar1 < '\x03';
  DAT_0000220f = '\x02' < (char)bVar1;
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805234d)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_w_with_code_c_mv_constant_simple(void)

{
  _DAT_00002000 = 2;
  _DAT_00002004 = 3;
  _DAT_00002008 = 4;
  _DAT_0000200c = 5;
  _DAT_00002010 = 6;
  _DAT_00002014 = 7;
  _DAT_00002018 = 8;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x40;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 1;
  DAT_00002205 = 0;
  DAT_00002206 = 1;
  DAT_00002207 = 0;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_w_with_code_c_mv_constant_complex1(void)

{
  _DAT_00002000 = &DAT_a3b17984;
  _DAT_00002004 = 0x6677984;
  _DAT_00002008 = 0x46685248;
  _DAT_0000200c = 0x392456c4;
  _DAT_00002010 = 0xbc8960a4;
  _DAT_00002014 = 0xad3c2d78;
  _DAT_00002018 = 0xe465e152;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x80;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 1;
  DAT_0000220d = 0;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_w_with_code_c_mv_constant_complex2(void)

{
  _DAT_00002000 = &DAT_313ec0e8;
  _DAT_00002004 = 0x496ec0e8;
  _DAT_00002008 = 0x1e3f6cb2;
  _DAT_0000200c = 0x4e6925b3;
  _DAT_00002010 = 0x4f312610;
  _DAT_00002014 = 0x2f37a4a5;
  _DAT_00002018 = 0x91a917b4;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x4694;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 1;
  DAT_0000220b = 0;
  DAT_0000220c = 1;
  DAT_0000220d = 0;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



undefined4 cmov_w_with_code_d_mv_plain(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_w_with_code_d_mv_allregs(void)

{
  byte bVar1;
  
  DAT_0000220a = (_DAT_00001100 & 4) != 0;
  bVar1 = (byte)_DAT_00001000;
  DAT_00002202 = bVar1 < 2;
  DAT_00002200 = SBORROW1(bVar1,'\x02');
  DAT_00002208 = (char)(bVar1 - 2) < '\0';
  DAT_00002204 = bVar1 == 2;
  _DAT_00002004 = _DAT_00001004;
  if ('\x01' < (char)bVar1) {
    _DAT_00002004 = _DAT_00001004 & 0xffff0000 | _DAT_00001000 & 0xffff;
  }
  _DAT_00002000 = _DAT_00001000;
  _DAT_00002008 = _DAT_00001008;
  _DAT_0000200c = _DAT_0000100c;
  _DAT_00002010 = _DAT_00001010;
  _DAT_00002014 = _DAT_00001014;
  _DAT_00002018 = _DAT_00001018;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 =
       (ushort)((_DAT_00001100 & 0x4000) != 0) * 0x4000 | (ushort)DAT_00002200 * 0x800 |
       (ushort)((_DAT_00001100 & 0x400) != 0) * 0x400 |
       (ushort)((_DAT_00001100 & 0x200) != 0) * 0x200 |
       (ushort)((_DAT_00001100 & 0x100) != 0) * 0x100 | (ushort)DAT_00002208 * 0x80 |
       (ushort)DAT_00002204 * 0x40 | (ushort)((_DAT_00001100 & 0x10) != 0) * 0x10 |
       (ushort)DAT_0000220a * 4 | (ushort)DAT_00002202;
  DAT_00002201 = !DAT_00002200;
  DAT_00002203 = !DAT_00002202;
  DAT_00002205 = !DAT_00002204;
  DAT_00002206 = bVar1 < 3;
  DAT_00002207 = 2 < bVar1;
  DAT_00002209 = !DAT_00002208;
  DAT_0000220b = !DAT_0000220a;
  DAT_0000220c = (char)bVar1 < '\x02';
  DAT_0000220d = '\x01' < (char)bVar1;
  DAT_0000220e = (char)bVar1 < '\x03';
  DAT_0000220f = '\x02' < (char)bVar1;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_w_with_code_d_mv_constant_simple(void)

{
  _DAT_00002000 = 2;
  _DAT_00002004 = 2;
  _DAT_00002008 = 4;
  _DAT_0000200c = 5;
  _DAT_00002010 = 6;
  _DAT_00002014 = 7;
  _DAT_00002018 = 8;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x40;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 1;
  DAT_00002205 = 0;
  DAT_00002206 = 1;
  DAT_00002207 = 0;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080527f7)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_w_with_code_d_mv_constant_complex1(void)

{
  _DAT_00002000 = &DAT_a3b17984;
  _DAT_00002004 = &DAT_06671ad7;
  _DAT_00002008 = 0x46685248;
  _DAT_0000200c = 0x392456c4;
  _DAT_00002010 = 0xbc8960a4;
  _DAT_00002014 = 0xad3c2d78;
  _DAT_00002018 = 0xe465e152;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x80;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 1;
  DAT_0000220d = 0;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080528e2)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_w_with_code_d_mv_constant_complex2(void)

{
  _DAT_00002000 = &DAT_313ec0e8;
  _DAT_00002004 = &DAT_496e81c3;
  _DAT_00002008 = 0x1e3f6cb2;
  _DAT_0000200c = 0x4e6925b3;
  _DAT_00002010 = 0x4f312610;
  _DAT_00002014 = 0x2f37a4a5;
  _DAT_00002018 = 0x91a917b4;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x4694;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 1;
  DAT_0000220b = 0;
  DAT_0000220c = 1;
  DAT_0000220d = 0;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



undefined4 cmov_w_with_code_e_mv_plain(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_w_with_code_e_mv_allregs(void)

{
  byte bVar1;
  
  DAT_0000220a = (_DAT_00001100 & 4) != 0;
  bVar1 = (byte)_DAT_00001000;
  DAT_00002202 = bVar1 < 2;
  DAT_00002200 = SBORROW1(bVar1,'\x02');
  DAT_00002208 = (char)(bVar1 - 2) < '\0';
  DAT_00002204 = bVar1 == 2;
  _DAT_00002004 = _DAT_00001004;
  if ((char)bVar1 < '\x03') {
    _DAT_00002004 = _DAT_00001004 & 0xffff0000 | _DAT_00001000 & 0xffff;
  }
  _DAT_00002000 = _DAT_00001000;
  _DAT_00002008 = _DAT_00001008;
  _DAT_0000200c = _DAT_0000100c;
  _DAT_00002010 = _DAT_00001010;
  _DAT_00002014 = _DAT_00001014;
  _DAT_00002018 = _DAT_00001018;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 =
       (ushort)((_DAT_00001100 & 0x4000) != 0) * 0x4000 | (ushort)DAT_00002200 * 0x800 |
       (ushort)((_DAT_00001100 & 0x400) != 0) * 0x400 |
       (ushort)((_DAT_00001100 & 0x200) != 0) * 0x200 |
       (ushort)((_DAT_00001100 & 0x100) != 0) * 0x100 | (ushort)DAT_00002208 * 0x80 |
       (ushort)DAT_00002204 * 0x40 | (ushort)((_DAT_00001100 & 0x10) != 0) * 0x10 |
       (ushort)DAT_0000220a * 4 | (ushort)DAT_00002202;
  DAT_00002201 = !DAT_00002200;
  DAT_00002203 = !DAT_00002202;
  DAT_00002205 = !DAT_00002204;
  DAT_00002206 = bVar1 < 3;
  DAT_00002207 = 2 < bVar1;
  DAT_00002209 = !DAT_00002208;
  DAT_0000220b = !DAT_0000220a;
  DAT_0000220c = (char)bVar1 < '\x02';
  DAT_0000220d = '\x01' < (char)bVar1;
  DAT_0000220e = (char)bVar1 < '\x03';
  DAT_0000220f = '\x02' < (char)bVar1;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_w_with_code_e_mv_constant_simple(void)

{
  _DAT_00002000 = 2;
  _DAT_00002004 = 2;
  _DAT_00002008 = 4;
  _DAT_0000200c = 5;
  _DAT_00002010 = 6;
  _DAT_00002014 = 7;
  _DAT_00002018 = 8;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x40;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 1;
  DAT_00002205 = 0;
  DAT_00002206 = 1;
  DAT_00002207 = 0;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_w_with_code_e_mv_constant_complex1(void)

{
  _DAT_00002000 = &DAT_a3b17984;
  _DAT_00002004 = 0x6677984;
  _DAT_00002008 = 0x46685248;
  _DAT_0000200c = 0x392456c4;
  _DAT_00002010 = 0xbc8960a4;
  _DAT_00002014 = 0xad3c2d78;
  _DAT_00002018 = 0xe465e152;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x80;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 1;
  DAT_0000220d = 0;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_w_with_code_e_mv_constant_complex2(void)

{
  _DAT_00002000 = &DAT_313ec0e8;
  _DAT_00002004 = 0x496ec0e8;
  _DAT_00002008 = 0x1e3f6cb2;
  _DAT_0000200c = 0x4e6925b3;
  _DAT_00002010 = 0x4f312610;
  _DAT_00002014 = 0x2f37a4a5;
  _DAT_00002018 = 0x91a917b4;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x4694;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 1;
  DAT_0000220b = 0;
  DAT_0000220c = 1;
  DAT_0000220d = 0;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



undefined4 cmov_w_with_code_f_mv_plain(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_w_with_code_f_mv_allregs(void)

{
  byte bVar1;
  
  DAT_0000220a = (_DAT_00001100 & 4) != 0;
  bVar1 = (byte)_DAT_00001000;
  DAT_00002202 = bVar1 < 2;
  DAT_00002200 = SBORROW1(bVar1,'\x02');
  DAT_00002208 = (char)(bVar1 - 2) < '\0';
  DAT_00002204 = bVar1 == 2;
  _DAT_00002004 = _DAT_00001004;
  if ('\x02' < (char)bVar1) {
    _DAT_00002004 = _DAT_00001004 & 0xffff0000 | _DAT_00001000 & 0xffff;
  }
  _DAT_00002000 = _DAT_00001000;
  _DAT_00002008 = _DAT_00001008;
  _DAT_0000200c = _DAT_0000100c;
  _DAT_00002010 = _DAT_00001010;
  _DAT_00002014 = _DAT_00001014;
  _DAT_00002018 = _DAT_00001018;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 =
       (ushort)((_DAT_00001100 & 0x4000) != 0) * 0x4000 | (ushort)DAT_00002200 * 0x800 |
       (ushort)((_DAT_00001100 & 0x400) != 0) * 0x400 |
       (ushort)((_DAT_00001100 & 0x200) != 0) * 0x200 |
       (ushort)((_DAT_00001100 & 0x100) != 0) * 0x100 | (ushort)DAT_00002208 * 0x80 |
       (ushort)DAT_00002204 * 0x40 | (ushort)((_DAT_00001100 & 0x10) != 0) * 0x10 |
       (ushort)DAT_0000220a * 4 | (ushort)DAT_00002202;
  DAT_00002201 = !DAT_00002200;
  DAT_00002203 = !DAT_00002202;
  DAT_00002205 = !DAT_00002204;
  DAT_00002206 = bVar1 < 3;
  DAT_00002207 = 2 < bVar1;
  DAT_00002209 = !DAT_00002208;
  DAT_0000220b = !DAT_0000220a;
  DAT_0000220c = (char)bVar1 < '\x02';
  DAT_0000220d = '\x01' < (char)bVar1;
  DAT_0000220e = (char)bVar1 < '\x03';
  DAT_0000220f = '\x02' < (char)bVar1;
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08052e8d)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_w_with_code_f_mv_constant_simple(void)

{
  _DAT_00002000 = 2;
  _DAT_00002004 = 3;
  _DAT_00002008 = 4;
  _DAT_0000200c = 5;
  _DAT_00002010 = 6;
  _DAT_00002014 = 7;
  _DAT_00002018 = 8;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x40;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 1;
  DAT_00002205 = 0;
  DAT_00002206 = 1;
  DAT_00002207 = 0;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08052f77)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_w_with_code_f_mv_constant_complex1(void)

{
  _DAT_00002000 = &DAT_a3b17984;
  _DAT_00002004 = &DAT_06671ad7;
  _DAT_00002008 = 0x46685248;
  _DAT_0000200c = 0x392456c4;
  _DAT_00002010 = 0xbc8960a4;
  _DAT_00002014 = 0xad3c2d78;
  _DAT_00002018 = 0xe465e152;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x80;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 1;
  DAT_0000220d = 0;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08053062)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_w_with_code_f_mv_constant_complex2(void)

{
  _DAT_00002000 = &DAT_313ec0e8;
  _DAT_00002004 = &DAT_496e81c3;
  _DAT_00002008 = 0x1e3f6cb2;
  _DAT_0000200c = 0x4e6925b3;
  _DAT_00002010 = 0x4f312610;
  _DAT_00002014 = 0x2f37a4a5;
  _DAT_00002018 = 0x91a917b4;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x4694;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 1;
  DAT_0000220b = 0;
  DAT_0000220c = 1;
  DAT_0000220d = 0;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



undefined4 cmov_l_with_code_0_plain(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_l_with_code_0_allregs(void)

{
  byte bVar1;
  
  DAT_0000220a = (_DAT_00001100 & 4) != 0;
  bVar1 = (byte)_DAT_00001000;
  DAT_00002202 = bVar1 < 2;
  DAT_00002200 = SBORROW1(bVar1,'\x02');
  DAT_00002208 = (char)(bVar1 - 2) < '\0';
  DAT_00002204 = bVar1 == 2;
  _DAT_00002004 = _DAT_00001004;
  if (DAT_00002200) {
    _DAT_00002004 = _DAT_00001000;
  }
  _DAT_00002000 = _DAT_00001000;
  _DAT_00002008 = _DAT_00001008;
  _DAT_0000200c = _DAT_0000100c;
  _DAT_00002010 = _DAT_00001010;
  _DAT_00002014 = _DAT_00001014;
  _DAT_00002018 = _DAT_00001018;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 =
       (ushort)((_DAT_00001100 & 0x4000) != 0) * 0x4000 | (ushort)DAT_00002200 * 0x800 |
       (ushort)((_DAT_00001100 & 0x400) != 0) * 0x400 |
       (ushort)((_DAT_00001100 & 0x200) != 0) * 0x200 |
       (ushort)((_DAT_00001100 & 0x100) != 0) * 0x100 | (ushort)DAT_00002208 * 0x80 |
       (ushort)DAT_00002204 * 0x40 | (ushort)((_DAT_00001100 & 0x10) != 0) * 0x10 |
       (ushort)DAT_0000220a * 4 | (ushort)DAT_00002202;
  DAT_00002201 = !DAT_00002200;
  DAT_00002203 = !DAT_00002202;
  DAT_00002205 = !DAT_00002204;
  DAT_00002206 = bVar1 < 3;
  DAT_00002207 = 2 < bVar1;
  DAT_00002209 = !DAT_00002208;
  DAT_0000220b = !DAT_0000220a;
  DAT_0000220c = (char)bVar1 < '\x02';
  DAT_0000220d = '\x01' < (char)bVar1;
  DAT_0000220e = (char)bVar1 < '\x03';
  DAT_0000220f = '\x02' < (char)bVar1;
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805324b)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_l_with_code_0_constant_simple(void)

{
  _DAT_00002000 = 2;
  _DAT_00002004 = 3;
  _DAT_00002008 = 4;
  _DAT_0000200c = 5;
  _DAT_00002010 = 6;
  _DAT_00002014 = 7;
  _DAT_00002018 = 8;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x40;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 1;
  DAT_00002205 = 0;
  DAT_00002206 = 1;
  DAT_00002207 = 0;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08053334)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_l_with_code_0_constant_complex1(void)

{
  _DAT_00002000 = &DAT_a3b17984;
  _DAT_00002004 = &DAT_06671ad7;
  _DAT_00002008 = 0x46685248;
  _DAT_0000200c = 0x392456c4;
  _DAT_00002010 = 0xbc8960a4;
  _DAT_00002014 = 0xad3c2d78;
  _DAT_00002018 = 0xe465e152;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x80;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 1;
  DAT_0000220d = 0;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805341e)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_l_with_code_0_constant_complex2(void)

{
  _DAT_00002000 = &DAT_313ec0e8;
  _DAT_00002004 = &DAT_496e81c3;
  _DAT_00002008 = 0x1e3f6cb2;
  _DAT_0000200c = 0x4e6925b3;
  _DAT_00002010 = 0x4f312610;
  _DAT_00002014 = 0x2f37a4a5;
  _DAT_00002018 = 0x91a917b4;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x4694;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 1;
  DAT_0000220b = 0;
  DAT_0000220c = 1;
  DAT_0000220d = 0;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



undefined4 cmov_l_with_code_1_mv_plain(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_l_with_code_1_mv_allregs(void)

{
  byte bVar1;
  
  DAT_0000220a = (_DAT_00001100 & 4) != 0;
  bVar1 = (byte)_DAT_00001000;
  DAT_00002202 = bVar1 < 2;
  DAT_00002200 = SBORROW1(bVar1,'\x02');
  DAT_00002208 = (char)(bVar1 - 2) < '\0';
  DAT_00002204 = bVar1 == 2;
  _DAT_00002004 = _DAT_00001004;
  if (!DAT_00002200) {
    _DAT_00002004 = _DAT_00001000;
  }
  _DAT_00002000 = _DAT_00001000;
  _DAT_00002008 = _DAT_00001008;
  _DAT_0000200c = _DAT_0000100c;
  _DAT_00002010 = _DAT_00001010;
  _DAT_00002014 = _DAT_00001014;
  _DAT_00002018 = _DAT_00001018;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 =
       (ushort)((_DAT_00001100 & 0x4000) != 0) * 0x4000 | (ushort)DAT_00002200 * 0x800 |
       (ushort)((_DAT_00001100 & 0x400) != 0) * 0x400 |
       (ushort)((_DAT_00001100 & 0x200) != 0) * 0x200 |
       (ushort)((_DAT_00001100 & 0x100) != 0) * 0x100 | (ushort)DAT_00002208 * 0x80 |
       (ushort)DAT_00002204 * 0x40 | (ushort)((_DAT_00001100 & 0x10) != 0) * 0x10 |
       (ushort)DAT_0000220a * 4 | (ushort)DAT_00002202;
  DAT_00002201 = !DAT_00002200;
  DAT_00002203 = !DAT_00002202;
  DAT_00002205 = !DAT_00002204;
  DAT_00002206 = bVar1 < 3;
  DAT_00002207 = 2 < bVar1;
  DAT_00002209 = !DAT_00002208;
  DAT_0000220b = !DAT_0000220a;
  DAT_0000220c = (char)bVar1 < '\x02';
  DAT_0000220d = '\x01' < (char)bVar1;
  DAT_0000220e = (char)bVar1 < '\x03';
  DAT_0000220f = '\x02' < (char)bVar1;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_l_with_code_1_mv_constant_simple(void)

{
  _DAT_00002000 = 2;
  _DAT_00002004 = 2;
  _DAT_00002008 = 4;
  _DAT_0000200c = 5;
  _DAT_00002010 = 6;
  _DAT_00002014 = 7;
  _DAT_00002018 = 8;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x40;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 1;
  DAT_00002205 = 0;
  DAT_00002206 = 1;
  DAT_00002207 = 0;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_l_with_code_1_mv_constant_complex1(void)

{
  _DAT_00002000 = &DAT_a3b17984;
  _DAT_00002004 = &DAT_a3b17984;
  _DAT_00002008 = 0x46685248;
  _DAT_0000200c = 0x392456c4;
  _DAT_00002010 = 0xbc8960a4;
  _DAT_00002014 = 0xad3c2d78;
  _DAT_00002018 = 0xe465e152;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x80;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 1;
  DAT_0000220d = 0;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_l_with_code_1_mv_constant_complex2(void)

{
  _DAT_00002000 = &DAT_313ec0e8;
  _DAT_00002004 = &DAT_313ec0e8;
  _DAT_00002008 = 0x1e3f6cb2;
  _DAT_0000200c = 0x4e6925b3;
  _DAT_00002010 = 0x4f312610;
  _DAT_00002014 = 0x2f37a4a5;
  _DAT_00002018 = 0x91a917b4;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x4694;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 1;
  DAT_0000220b = 0;
  DAT_0000220c = 1;
  DAT_0000220d = 0;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



undefined4 cmov_l_with_code_2_mv_plain(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_l_with_code_2_mv_allregs(void)

{
  byte bVar1;
  
  DAT_0000220a = (_DAT_00001100 & 4) != 0;
  bVar1 = (byte)_DAT_00001000;
  DAT_00002202 = bVar1 < 2;
  DAT_00002200 = SBORROW1(bVar1,'\x02');
  DAT_00002208 = (char)(bVar1 - 2) < '\0';
  DAT_00002204 = bVar1 == 2;
  _DAT_00002004 = _DAT_00001004;
  if (DAT_00002202) {
    _DAT_00002004 = _DAT_00001000;
  }
  _DAT_00002000 = _DAT_00001000;
  _DAT_00002008 = _DAT_00001008;
  _DAT_0000200c = _DAT_0000100c;
  _DAT_00002010 = _DAT_00001010;
  _DAT_00002014 = _DAT_00001014;
  _DAT_00002018 = _DAT_00001018;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 =
       (ushort)((_DAT_00001100 & 0x4000) != 0) * 0x4000 | (ushort)DAT_00002200 * 0x800 |
       (ushort)((_DAT_00001100 & 0x400) != 0) * 0x400 |
       (ushort)((_DAT_00001100 & 0x200) != 0) * 0x200 |
       (ushort)((_DAT_00001100 & 0x100) != 0) * 0x100 | (ushort)DAT_00002208 * 0x80 |
       (ushort)DAT_00002204 * 0x40 | (ushort)((_DAT_00001100 & 0x10) != 0) * 0x10 |
       (ushort)DAT_0000220a * 4 | (ushort)DAT_00002202;
  DAT_00002201 = !DAT_00002200;
  DAT_00002203 = !DAT_00002202;
  DAT_00002205 = !DAT_00002204;
  DAT_00002206 = bVar1 < 3;
  DAT_00002207 = 2 < bVar1;
  DAT_00002209 = !DAT_00002208;
  DAT_0000220b = !DAT_0000220a;
  DAT_0000220c = (char)bVar1 < '\x02';
  DAT_0000220d = '\x01' < (char)bVar1;
  DAT_0000220e = (char)bVar1 < '\x03';
  DAT_0000220f = '\x02' < (char)bVar1;
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080539c1)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_l_with_code_2_mv_constant_simple(void)

{
  _DAT_00002000 = 2;
  _DAT_00002004 = 3;
  _DAT_00002008 = 4;
  _DAT_0000200c = 5;
  _DAT_00002010 = 6;
  _DAT_00002014 = 7;
  _DAT_00002018 = 8;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x40;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 1;
  DAT_00002205 = 0;
  DAT_00002206 = 1;
  DAT_00002207 = 0;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08053aaa)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_l_with_code_2_mv_constant_complex1(void)

{
  _DAT_00002000 = &DAT_a3b17984;
  _DAT_00002004 = &DAT_06671ad7;
  _DAT_00002008 = 0x46685248;
  _DAT_0000200c = 0x392456c4;
  _DAT_00002010 = 0xbc8960a4;
  _DAT_00002014 = 0xad3c2d78;
  _DAT_00002018 = 0xe465e152;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x80;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 1;
  DAT_0000220d = 0;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08053b94)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_l_with_code_2_mv_constant_complex2(void)

{
  _DAT_00002000 = &DAT_313ec0e8;
  _DAT_00002004 = &DAT_496e81c3;
  _DAT_00002008 = 0x1e3f6cb2;
  _DAT_0000200c = 0x4e6925b3;
  _DAT_00002010 = 0x4f312610;
  _DAT_00002014 = 0x2f37a4a5;
  _DAT_00002018 = 0x91a917b4;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x4694;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 1;
  DAT_0000220b = 0;
  DAT_0000220c = 1;
  DAT_0000220d = 0;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



undefined4 cmov_l_with_code_3_mv_plain(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_l_with_code_3_mv_allregs(void)

{
  byte bVar1;
  
  DAT_0000220a = (_DAT_00001100 & 4) != 0;
  bVar1 = (byte)_DAT_00001000;
  DAT_00002202 = bVar1 < 2;
  DAT_00002200 = SBORROW1(bVar1,'\x02');
  DAT_00002208 = (char)(bVar1 - 2) < '\0';
  DAT_00002204 = bVar1 == 2;
  _DAT_00002004 = _DAT_00001004;
  if (!DAT_00002202) {
    _DAT_00002004 = _DAT_00001000;
  }
  _DAT_00002000 = _DAT_00001000;
  _DAT_00002008 = _DAT_00001008;
  _DAT_0000200c = _DAT_0000100c;
  _DAT_00002010 = _DAT_00001010;
  _DAT_00002014 = _DAT_00001014;
  _DAT_00002018 = _DAT_00001018;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 =
       (ushort)((_DAT_00001100 & 0x4000) != 0) * 0x4000 | (ushort)DAT_00002200 * 0x800 |
       (ushort)((_DAT_00001100 & 0x400) != 0) * 0x400 |
       (ushort)((_DAT_00001100 & 0x200) != 0) * 0x200 |
       (ushort)((_DAT_00001100 & 0x100) != 0) * 0x100 | (ushort)DAT_00002208 * 0x80 |
       (ushort)DAT_00002204 * 0x40 | (ushort)((_DAT_00001100 & 0x10) != 0) * 0x10 |
       (ushort)DAT_0000220a * 4 | (ushort)DAT_00002202;
  DAT_00002201 = !DAT_00002200;
  DAT_00002203 = !DAT_00002202;
  DAT_00002205 = !DAT_00002204;
  DAT_00002206 = bVar1 < 3;
  DAT_00002207 = 2 < bVar1;
  DAT_00002209 = !DAT_00002208;
  DAT_0000220b = !DAT_0000220a;
  DAT_0000220c = (char)bVar1 < '\x02';
  DAT_0000220d = '\x01' < (char)bVar1;
  DAT_0000220e = (char)bVar1 < '\x03';
  DAT_0000220f = '\x02' < (char)bVar1;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_l_with_code_3_mv_constant_simple(void)

{
  _DAT_00002000 = 2;
  _DAT_00002004 = 2;
  _DAT_00002008 = 4;
  _DAT_0000200c = 5;
  _DAT_00002010 = 6;
  _DAT_00002014 = 7;
  _DAT_00002018 = 8;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x40;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 1;
  DAT_00002205 = 0;
  DAT_00002206 = 1;
  DAT_00002207 = 0;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_l_with_code_3_mv_constant_complex1(void)

{
  _DAT_00002000 = &DAT_a3b17984;
  _DAT_00002004 = &DAT_a3b17984;
  _DAT_00002008 = 0x46685248;
  _DAT_0000200c = 0x392456c4;
  _DAT_00002010 = 0xbc8960a4;
  _DAT_00002014 = 0xad3c2d78;
  _DAT_00002018 = 0xe465e152;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x80;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 1;
  DAT_0000220d = 0;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_l_with_code_3_mv_constant_complex2(void)

{
  _DAT_00002000 = &DAT_313ec0e8;
  _DAT_00002004 = &DAT_313ec0e8;
  _DAT_00002008 = 0x1e3f6cb2;
  _DAT_0000200c = 0x4e6925b3;
  _DAT_00002010 = 0x4f312610;
  _DAT_00002014 = 0x2f37a4a5;
  _DAT_00002018 = 0x91a917b4;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x4694;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 1;
  DAT_0000220b = 0;
  DAT_0000220c = 1;
  DAT_0000220d = 0;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



undefined4 cmov_l_with_code_4_mv_plain(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_l_with_code_4_mv_allregs(void)

{
  byte bVar1;
  
  DAT_0000220a = (_DAT_00001100 & 4) != 0;
  bVar1 = (byte)_DAT_00001000;
  DAT_00002202 = bVar1 < 2;
  DAT_00002200 = SBORROW1(bVar1,'\x02');
  DAT_00002208 = (char)(bVar1 - 2) < '\0';
  DAT_00002204 = bVar1 == 2;
  _DAT_00002004 = _DAT_00001004;
  if (DAT_00002204) {
    _DAT_00002004 = _DAT_00001000;
  }
  _DAT_00002000 = _DAT_00001000;
  _DAT_00002008 = _DAT_00001008;
  _DAT_0000200c = _DAT_0000100c;
  _DAT_00002010 = _DAT_00001010;
  _DAT_00002014 = _DAT_00001014;
  _DAT_00002018 = _DAT_00001018;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 =
       (ushort)((_DAT_00001100 & 0x4000) != 0) * 0x4000 | (ushort)DAT_00002200 * 0x800 |
       (ushort)((_DAT_00001100 & 0x400) != 0) * 0x400 |
       (ushort)((_DAT_00001100 & 0x200) != 0) * 0x200 |
       (ushort)((_DAT_00001100 & 0x100) != 0) * 0x100 | (ushort)DAT_00002208 * 0x80 |
       (ushort)DAT_00002204 * 0x40 | (ushort)((_DAT_00001100 & 0x10) != 0) * 0x10 |
       (ushort)DAT_0000220a * 4 | (ushort)DAT_00002202;
  DAT_00002201 = !DAT_00002200;
  DAT_00002203 = !DAT_00002202;
  DAT_00002205 = !DAT_00002204;
  DAT_00002206 = bVar1 < 3;
  DAT_00002207 = 2 < bVar1;
  DAT_00002209 = !DAT_00002208;
  DAT_0000220b = !DAT_0000220a;
  DAT_0000220c = (char)bVar1 < '\x02';
  DAT_0000220d = '\x01' < (char)bVar1;
  DAT_0000220e = (char)bVar1 < '\x03';
  DAT_0000220f = '\x02' < (char)bVar1;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_l_with_code_4_mv_constant_simple(void)

{
  _DAT_00002000 = 2;
  _DAT_00002004 = 2;
  _DAT_00002008 = 4;
  _DAT_0000200c = 5;
  _DAT_00002010 = 6;
  _DAT_00002014 = 7;
  _DAT_00002018 = 8;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x40;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 1;
  DAT_00002205 = 0;
  DAT_00002206 = 1;
  DAT_00002207 = 0;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08054220)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_l_with_code_4_mv_constant_complex1(void)

{
  _DAT_00002000 = &DAT_a3b17984;
  _DAT_00002004 = &DAT_06671ad7;
  _DAT_00002008 = 0x46685248;
  _DAT_0000200c = 0x392456c4;
  _DAT_00002010 = 0xbc8960a4;
  _DAT_00002014 = 0xad3c2d78;
  _DAT_00002018 = 0xe465e152;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x80;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 1;
  DAT_0000220d = 0;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805430a)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_l_with_code_4_mv_constant_complex2(void)

{
  _DAT_00002000 = &DAT_313ec0e8;
  _DAT_00002004 = &DAT_496e81c3;
  _DAT_00002008 = 0x1e3f6cb2;
  _DAT_0000200c = 0x4e6925b3;
  _DAT_00002010 = 0x4f312610;
  _DAT_00002014 = 0x2f37a4a5;
  _DAT_00002018 = 0x91a917b4;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x4694;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 1;
  DAT_0000220b = 0;
  DAT_0000220c = 1;
  DAT_0000220d = 0;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



undefined4 cmov_l_with_code_5_mv_plain(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_l_with_code_5_mv_allregs(void)

{
  byte bVar1;
  
  DAT_0000220a = (_DAT_00001100 & 4) != 0;
  bVar1 = (byte)_DAT_00001000;
  DAT_00002202 = bVar1 < 2;
  DAT_00002200 = SBORROW1(bVar1,'\x02');
  DAT_00002208 = (char)(bVar1 - 2) < '\0';
  DAT_00002204 = bVar1 == 2;
  _DAT_00002004 = _DAT_00001004;
  if (!DAT_00002204) {
    _DAT_00002004 = _DAT_00001000;
  }
  _DAT_00002000 = _DAT_00001000;
  _DAT_00002008 = _DAT_00001008;
  _DAT_0000200c = _DAT_0000100c;
  _DAT_00002010 = _DAT_00001010;
  _DAT_00002014 = _DAT_00001014;
  _DAT_00002018 = _DAT_00001018;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 =
       (ushort)((_DAT_00001100 & 0x4000) != 0) * 0x4000 | (ushort)DAT_00002200 * 0x800 |
       (ushort)((_DAT_00001100 & 0x400) != 0) * 0x400 |
       (ushort)((_DAT_00001100 & 0x200) != 0) * 0x200 |
       (ushort)((_DAT_00001100 & 0x100) != 0) * 0x100 | (ushort)DAT_00002208 * 0x80 |
       (ushort)DAT_00002204 * 0x40 | (ushort)((_DAT_00001100 & 0x10) != 0) * 0x10 |
       (ushort)DAT_0000220a * 4 | (ushort)DAT_00002202;
  DAT_00002201 = !DAT_00002200;
  DAT_00002203 = !DAT_00002202;
  DAT_00002205 = !DAT_00002204;
  DAT_00002206 = bVar1 < 3;
  DAT_00002207 = 2 < bVar1;
  DAT_00002209 = !DAT_00002208;
  DAT_0000220b = !DAT_0000220a;
  DAT_0000220c = (char)bVar1 < '\x02';
  DAT_0000220d = '\x01' < (char)bVar1;
  DAT_0000220e = (char)bVar1 < '\x03';
  DAT_0000220f = '\x02' < (char)bVar1;
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080544f2)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_l_with_code_5_mv_constant_simple(void)

{
  _DAT_00002000 = 2;
  _DAT_00002004 = 3;
  _DAT_00002008 = 4;
  _DAT_0000200c = 5;
  _DAT_00002010 = 6;
  _DAT_00002014 = 7;
  _DAT_00002018 = 8;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x40;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 1;
  DAT_00002205 = 0;
  DAT_00002206 = 1;
  DAT_00002207 = 0;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_l_with_code_5_mv_constant_complex1(void)

{
  _DAT_00002000 = &DAT_a3b17984;
  _DAT_00002004 = &DAT_a3b17984;
  _DAT_00002008 = 0x46685248;
  _DAT_0000200c = 0x392456c4;
  _DAT_00002010 = 0xbc8960a4;
  _DAT_00002014 = 0xad3c2d78;
  _DAT_00002018 = 0xe465e152;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x80;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 1;
  DAT_0000220d = 0;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_l_with_code_5_mv_constant_complex2(void)

{
  _DAT_00002000 = &DAT_313ec0e8;
  _DAT_00002004 = &DAT_313ec0e8;
  _DAT_00002008 = 0x1e3f6cb2;
  _DAT_0000200c = 0x4e6925b3;
  _DAT_00002010 = 0x4f312610;
  _DAT_00002014 = 0x2f37a4a5;
  _DAT_00002018 = 0x91a917b4;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x4694;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 1;
  DAT_0000220b = 0;
  DAT_0000220c = 1;
  DAT_0000220d = 0;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



undefined4 cmov_l_with_code_6_mv_plain(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_l_with_code_6_mv_allregs(void)

{
  byte bVar1;
  
  DAT_0000220a = (_DAT_00001100 & 4) != 0;
  bVar1 = (byte)_DAT_00001000;
  DAT_00002202 = bVar1 < 2;
  DAT_00002200 = SBORROW1(bVar1,'\x02');
  DAT_00002208 = (char)(bVar1 - 2) < '\0';
  DAT_00002204 = bVar1 == 2;
  _DAT_00002004 = _DAT_00001004;
  if (bVar1 < 3) {
    _DAT_00002004 = _DAT_00001000;
  }
  _DAT_00002000 = _DAT_00001000;
  _DAT_00002008 = _DAT_00001008;
  _DAT_0000200c = _DAT_0000100c;
  _DAT_00002010 = _DAT_00001010;
  _DAT_00002014 = _DAT_00001014;
  _DAT_00002018 = _DAT_00001018;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 =
       (ushort)((_DAT_00001100 & 0x4000) != 0) * 0x4000 | (ushort)DAT_00002200 * 0x800 |
       (ushort)((_DAT_00001100 & 0x400) != 0) * 0x400 |
       (ushort)((_DAT_00001100 & 0x200) != 0) * 0x200 |
       (ushort)((_DAT_00001100 & 0x100) != 0) * 0x100 | (ushort)DAT_00002208 * 0x80 |
       (ushort)DAT_00002204 * 0x40 | (ushort)((_DAT_00001100 & 0x10) != 0) * 0x10 |
       (ushort)DAT_0000220a * 4 | (ushort)DAT_00002202;
  DAT_00002201 = !DAT_00002200;
  DAT_00002203 = !DAT_00002202;
  DAT_00002205 = !DAT_00002204;
  DAT_00002206 = bVar1 < 3;
  DAT_00002207 = 2 < bVar1;
  DAT_00002209 = !DAT_00002208;
  DAT_0000220b = !DAT_0000220a;
  DAT_0000220c = (char)bVar1 < '\x02';
  DAT_0000220d = '\x01' < (char)bVar1;
  DAT_0000220e = (char)bVar1 < '\x03';
  DAT_0000220f = '\x02' < (char)bVar1;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_l_with_code_6_mv_constant_simple(void)

{
  _DAT_00002000 = 2;
  _DAT_00002004 = 2;
  _DAT_00002008 = 4;
  _DAT_0000200c = 5;
  _DAT_00002010 = 6;
  _DAT_00002014 = 7;
  _DAT_00002018 = 8;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x40;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 1;
  DAT_00002205 = 0;
  DAT_00002206 = 1;
  DAT_00002207 = 0;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08054996)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_l_with_code_6_mv_constant_complex1(void)

{
  _DAT_00002000 = &DAT_a3b17984;
  _DAT_00002004 = &DAT_06671ad7;
  _DAT_00002008 = 0x46685248;
  _DAT_0000200c = 0x392456c4;
  _DAT_00002010 = 0xbc8960a4;
  _DAT_00002014 = 0xad3c2d78;
  _DAT_00002018 = 0xe465e152;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x80;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 1;
  DAT_0000220d = 0;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08054a80)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_l_with_code_6_mv_constant_complex2(void)

{
  _DAT_00002000 = &DAT_313ec0e8;
  _DAT_00002004 = &DAT_496e81c3;
  _DAT_00002008 = 0x1e3f6cb2;
  _DAT_0000200c = 0x4e6925b3;
  _DAT_00002010 = 0x4f312610;
  _DAT_00002014 = 0x2f37a4a5;
  _DAT_00002018 = 0x91a917b4;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x4694;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 1;
  DAT_0000220b = 0;
  DAT_0000220c = 1;
  DAT_0000220d = 0;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



undefined4 cmov_l_with_code_7_mv_plain(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_l_with_code_7_mv_allregs(void)

{
  byte bVar1;
  
  DAT_0000220a = (_DAT_00001100 & 4) != 0;
  bVar1 = (byte)_DAT_00001000;
  DAT_00002202 = bVar1 < 2;
  DAT_00002200 = SBORROW1(bVar1,'\x02');
  DAT_00002208 = (char)(bVar1 - 2) < '\0';
  DAT_00002204 = bVar1 == 2;
  _DAT_00002004 = _DAT_00001004;
  if (2 < bVar1) {
    _DAT_00002004 = _DAT_00001000;
  }
  _DAT_00002000 = _DAT_00001000;
  _DAT_00002008 = _DAT_00001008;
  _DAT_0000200c = _DAT_0000100c;
  _DAT_00002010 = _DAT_00001010;
  _DAT_00002014 = _DAT_00001014;
  _DAT_00002018 = _DAT_00001018;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 =
       (ushort)((_DAT_00001100 & 0x4000) != 0) * 0x4000 | (ushort)DAT_00002200 * 0x800 |
       (ushort)((_DAT_00001100 & 0x400) != 0) * 0x400 |
       (ushort)((_DAT_00001100 & 0x200) != 0) * 0x200 |
       (ushort)((_DAT_00001100 & 0x100) != 0) * 0x100 | (ushort)DAT_00002208 * 0x80 |
       (ushort)DAT_00002204 * 0x40 | (ushort)((_DAT_00001100 & 0x10) != 0) * 0x10 |
       (ushort)DAT_0000220a * 4 | (ushort)DAT_00002202;
  DAT_00002201 = !DAT_00002200;
  DAT_00002203 = !DAT_00002202;
  DAT_00002205 = !DAT_00002204;
  DAT_00002206 = bVar1 < 3;
  DAT_00002207 = 2 < bVar1;
  DAT_00002209 = !DAT_00002208;
  DAT_0000220b = !DAT_0000220a;
  DAT_0000220c = (char)bVar1 < '\x02';
  DAT_0000220d = '\x01' < (char)bVar1;
  DAT_0000220e = (char)bVar1 < '\x03';
  DAT_0000220f = '\x02' < (char)bVar1;
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08054c68)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_l_with_code_7_mv_constant_simple(void)

{
  _DAT_00002000 = 2;
  _DAT_00002004 = 3;
  _DAT_00002008 = 4;
  _DAT_0000200c = 5;
  _DAT_00002010 = 6;
  _DAT_00002014 = 7;
  _DAT_00002018 = 8;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x40;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 1;
  DAT_00002205 = 0;
  DAT_00002206 = 1;
  DAT_00002207 = 0;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_l_with_code_7_mv_constant_complex1(void)

{
  _DAT_00002000 = &DAT_a3b17984;
  _DAT_00002004 = &DAT_a3b17984;
  _DAT_00002008 = 0x46685248;
  _DAT_0000200c = 0x392456c4;
  _DAT_00002010 = 0xbc8960a4;
  _DAT_00002014 = 0xad3c2d78;
  _DAT_00002018 = 0xe465e152;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x80;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 1;
  DAT_0000220d = 0;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_l_with_code_7_mv_constant_complex2(void)

{
  _DAT_00002000 = &DAT_313ec0e8;
  _DAT_00002004 = &DAT_313ec0e8;
  _DAT_00002008 = 0x1e3f6cb2;
  _DAT_0000200c = 0x4e6925b3;
  _DAT_00002010 = 0x4f312610;
  _DAT_00002014 = 0x2f37a4a5;
  _DAT_00002018 = 0x91a917b4;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x4694;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 1;
  DAT_0000220b = 0;
  DAT_0000220c = 1;
  DAT_0000220d = 0;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



undefined4 cmov_l_with_code_8_mv_plain(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_l_with_code_8_mv_allregs(void)

{
  byte bVar1;
  
  DAT_0000220a = (_DAT_00001100 & 4) != 0;
  bVar1 = (byte)_DAT_00001000;
  DAT_00002202 = bVar1 < 2;
  DAT_00002200 = SBORROW1(bVar1,'\x02');
  DAT_00002208 = (char)(bVar1 - 2) < '\0';
  DAT_00002204 = bVar1 == 2;
  _DAT_00002004 = _DAT_00001004;
  if (DAT_00002208) {
    _DAT_00002004 = _DAT_00001000;
  }
  _DAT_00002000 = _DAT_00001000;
  _DAT_00002008 = _DAT_00001008;
  _DAT_0000200c = _DAT_0000100c;
  _DAT_00002010 = _DAT_00001010;
  _DAT_00002014 = _DAT_00001014;
  _DAT_00002018 = _DAT_00001018;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 =
       (ushort)((_DAT_00001100 & 0x4000) != 0) * 0x4000 | (ushort)DAT_00002200 * 0x800 |
       (ushort)((_DAT_00001100 & 0x400) != 0) * 0x400 |
       (ushort)((_DAT_00001100 & 0x200) != 0) * 0x200 |
       (ushort)((_DAT_00001100 & 0x100) != 0) * 0x100 | (ushort)DAT_00002208 * 0x80 |
       (ushort)DAT_00002204 * 0x40 | (ushort)((_DAT_00001100 & 0x10) != 0) * 0x10 |
       (ushort)DAT_0000220a * 4 | (ushort)DAT_00002202;
  DAT_00002201 = !DAT_00002200;
  DAT_00002203 = !DAT_00002202;
  DAT_00002205 = !DAT_00002204;
  DAT_00002206 = bVar1 < 3;
  DAT_00002207 = 2 < bVar1;
  DAT_00002209 = !DAT_00002208;
  DAT_0000220b = !DAT_0000220a;
  DAT_0000220c = (char)bVar1 < '\x02';
  DAT_0000220d = '\x01' < (char)bVar1;
  DAT_0000220e = (char)bVar1 < '\x03';
  DAT_0000220f = '\x02' < (char)bVar1;
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08055023)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_l_with_code_8_mv_constant_simple(void)

{
  _DAT_00002000 = 2;
  _DAT_00002004 = 3;
  _DAT_00002008 = 4;
  _DAT_0000200c = 5;
  _DAT_00002010 = 6;
  _DAT_00002014 = 7;
  _DAT_00002018 = 8;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x40;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 1;
  DAT_00002205 = 0;
  DAT_00002206 = 1;
  DAT_00002207 = 0;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_l_with_code_8_mv_constant_complex1(void)

{
  _DAT_00002000 = &DAT_a3b17984;
  _DAT_00002004 = &DAT_a3b17984;
  _DAT_00002008 = 0x46685248;
  _DAT_0000200c = 0x392456c4;
  _DAT_00002010 = 0xbc8960a4;
  _DAT_00002014 = 0xad3c2d78;
  _DAT_00002018 = 0xe465e152;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x80;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 1;
  DAT_0000220d = 0;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_l_with_code_8_mv_constant_complex2(void)

{
  _DAT_00002000 = &DAT_313ec0e8;
  _DAT_00002004 = &DAT_313ec0e8;
  _DAT_00002008 = 0x1e3f6cb2;
  _DAT_0000200c = 0x4e6925b3;
  _DAT_00002010 = 0x4f312610;
  _DAT_00002014 = 0x2f37a4a5;
  _DAT_00002018 = 0x91a917b4;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x4694;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 1;
  DAT_0000220b = 0;
  DAT_0000220c = 1;
  DAT_0000220d = 0;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



undefined4 cmov_l_with_code_9_mv_plain(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_l_with_code_9_mv_allregs(void)

{
  byte bVar1;
  
  DAT_0000220a = (_DAT_00001100 & 4) != 0;
  bVar1 = (byte)_DAT_00001000;
  DAT_00002202 = bVar1 < 2;
  DAT_00002200 = SBORROW1(bVar1,'\x02');
  DAT_00002208 = (char)(bVar1 - 2) < '\0';
  DAT_00002204 = bVar1 == 2;
  _DAT_00002004 = _DAT_00001004;
  if (!DAT_00002208) {
    _DAT_00002004 = _DAT_00001000;
  }
  _DAT_00002000 = _DAT_00001000;
  _DAT_00002008 = _DAT_00001008;
  _DAT_0000200c = _DAT_0000100c;
  _DAT_00002010 = _DAT_00001010;
  _DAT_00002014 = _DAT_00001014;
  _DAT_00002018 = _DAT_00001018;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 =
       (ushort)((_DAT_00001100 & 0x4000) != 0) * 0x4000 | (ushort)DAT_00002200 * 0x800 |
       (ushort)((_DAT_00001100 & 0x400) != 0) * 0x400 |
       (ushort)((_DAT_00001100 & 0x200) != 0) * 0x200 |
       (ushort)((_DAT_00001100 & 0x100) != 0) * 0x100 | (ushort)DAT_00002208 * 0x80 |
       (ushort)DAT_00002204 * 0x40 | (ushort)((_DAT_00001100 & 0x10) != 0) * 0x10 |
       (ushort)DAT_0000220a * 4 | (ushort)DAT_00002202;
  DAT_00002201 = !DAT_00002200;
  DAT_00002203 = !DAT_00002202;
  DAT_00002205 = !DAT_00002204;
  DAT_00002206 = bVar1 < 3;
  DAT_00002207 = 2 < bVar1;
  DAT_00002209 = !DAT_00002208;
  DAT_0000220b = !DAT_0000220a;
  DAT_0000220c = (char)bVar1 < '\x02';
  DAT_0000220d = '\x01' < (char)bVar1;
  DAT_0000220e = (char)bVar1 < '\x03';
  DAT_0000220f = '\x02' < (char)bVar1;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_l_with_code_9_mv_constant_simple(void)

{
  _DAT_00002000 = 2;
  _DAT_00002004 = 2;
  _DAT_00002008 = 4;
  _DAT_0000200c = 5;
  _DAT_00002010 = 6;
  _DAT_00002014 = 7;
  _DAT_00002018 = 8;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x40;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 1;
  DAT_00002205 = 0;
  DAT_00002206 = 1;
  DAT_00002207 = 0;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080554c7)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_l_with_code_9_mv_constant_complex1(void)

{
  _DAT_00002000 = &DAT_a3b17984;
  _DAT_00002004 = &DAT_06671ad7;
  _DAT_00002008 = 0x46685248;
  _DAT_0000200c = 0x392456c4;
  _DAT_00002010 = 0xbc8960a4;
  _DAT_00002014 = 0xad3c2d78;
  _DAT_00002018 = 0xe465e152;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x80;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 1;
  DAT_0000220d = 0;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080555b1)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_l_with_code_9_mv_constant_complex2(void)

{
  _DAT_00002000 = &DAT_313ec0e8;
  _DAT_00002004 = &DAT_496e81c3;
  _DAT_00002008 = 0x1e3f6cb2;
  _DAT_0000200c = 0x4e6925b3;
  _DAT_00002010 = 0x4f312610;
  _DAT_00002014 = 0x2f37a4a5;
  _DAT_00002018 = 0x91a917b4;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x4694;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 1;
  DAT_0000220b = 0;
  DAT_0000220c = 1;
  DAT_0000220d = 0;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



undefined4 cmov_l_with_code_a_mv_plain(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_l_with_code_a_mv_allregs(void)

{
  byte bVar1;
  
  DAT_0000220a = (_DAT_00001100 & 4) != 0;
  bVar1 = (byte)_DAT_00001000;
  DAT_00002202 = bVar1 < 2;
  DAT_00002200 = SBORROW1(bVar1,'\x02');
  DAT_00002208 = (char)(bVar1 - 2) < '\0';
  DAT_00002204 = bVar1 == 2;
  _DAT_00002004 = _DAT_00001004;
  if (DAT_0000220a) {
    _DAT_00002004 = _DAT_00001000;
  }
  _DAT_00002000 = _DAT_00001000;
  _DAT_00002008 = _DAT_00001008;
  _DAT_0000200c = _DAT_0000100c;
  _DAT_00002010 = _DAT_00001010;
  _DAT_00002014 = _DAT_00001014;
  _DAT_00002018 = _DAT_00001018;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 =
       (ushort)((_DAT_00001100 & 0x4000) != 0) * 0x4000 | (ushort)DAT_00002200 * 0x800 |
       (ushort)((_DAT_00001100 & 0x400) != 0) * 0x400 |
       (ushort)((_DAT_00001100 & 0x200) != 0) * 0x200 |
       (ushort)((_DAT_00001100 & 0x100) != 0) * 0x100 | (ushort)DAT_00002208 * 0x80 |
       (ushort)DAT_00002204 * 0x40 | (ushort)((_DAT_00001100 & 0x10) != 0) * 0x10 |
       (ushort)DAT_0000220a * 4 | (ushort)DAT_00002202;
  DAT_00002201 = !DAT_00002200;
  DAT_00002203 = !DAT_00002202;
  DAT_00002205 = !DAT_00002204;
  DAT_00002206 = bVar1 < 3;
  DAT_00002207 = 2 < bVar1;
  DAT_00002209 = !DAT_00002208;
  DAT_0000220b = !DAT_0000220a;
  DAT_0000220c = (char)bVar1 < '\x02';
  DAT_0000220d = '\x01' < (char)bVar1;
  DAT_0000220e = (char)bVar1 < '\x03';
  DAT_0000220f = '\x02' < (char)bVar1;
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08055799)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_l_with_code_a_mv_constant_simple(void)

{
  _DAT_00002000 = 2;
  _DAT_00002004 = 3;
  _DAT_00002008 = 4;
  _DAT_0000200c = 5;
  _DAT_00002010 = 6;
  _DAT_00002014 = 7;
  _DAT_00002018 = 8;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x40;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 1;
  DAT_00002205 = 0;
  DAT_00002206 = 1;
  DAT_00002207 = 0;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08055882)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_l_with_code_a_mv_constant_complex1(void)

{
  _DAT_00002000 = &DAT_a3b17984;
  _DAT_00002004 = &DAT_06671ad7;
  _DAT_00002008 = 0x46685248;
  _DAT_0000200c = 0x392456c4;
  _DAT_00002010 = 0xbc8960a4;
  _DAT_00002014 = 0xad3c2d78;
  _DAT_00002018 = 0xe465e152;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x80;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 1;
  DAT_0000220d = 0;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_l_with_code_a_mv_constant_complex2(void)

{
  _DAT_00002000 = &DAT_313ec0e8;
  _DAT_00002004 = &DAT_313ec0e8;
  _DAT_00002008 = 0x1e3f6cb2;
  _DAT_0000200c = 0x4e6925b3;
  _DAT_00002010 = 0x4f312610;
  _DAT_00002014 = 0x2f37a4a5;
  _DAT_00002018 = 0x91a917b4;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x4694;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 1;
  DAT_0000220b = 0;
  DAT_0000220c = 1;
  DAT_0000220d = 0;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



undefined4 cmov_l_with_code_b_mv_plain(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_l_with_code_b_mv_allregs(void)

{
  byte bVar1;
  
  DAT_0000220a = (_DAT_00001100 & 4) != 0;
  bVar1 = (byte)_DAT_00001000;
  DAT_00002202 = bVar1 < 2;
  DAT_00002200 = SBORROW1(bVar1,'\x02');
  DAT_00002208 = (char)(bVar1 - 2) < '\0';
  DAT_00002204 = bVar1 == 2;
  _DAT_00002004 = _DAT_00001004;
  if (!DAT_0000220a) {
    _DAT_00002004 = _DAT_00001000;
  }
  _DAT_00002000 = _DAT_00001000;
  _DAT_00002008 = _DAT_00001008;
  _DAT_0000200c = _DAT_0000100c;
  _DAT_00002010 = _DAT_00001010;
  _DAT_00002014 = _DAT_00001014;
  _DAT_00002018 = _DAT_00001018;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 =
       (ushort)((_DAT_00001100 & 0x4000) != 0) * 0x4000 | (ushort)DAT_00002200 * 0x800 |
       (ushort)((_DAT_00001100 & 0x400) != 0) * 0x400 |
       (ushort)((_DAT_00001100 & 0x200) != 0) * 0x200 |
       (ushort)((_DAT_00001100 & 0x100) != 0) * 0x100 | (ushort)DAT_00002208 * 0x80 |
       (ushort)DAT_00002204 * 0x40 | (ushort)((_DAT_00001100 & 0x10) != 0) * 0x10 |
       (ushort)DAT_0000220a * 4 | (ushort)DAT_00002202;
  DAT_00002201 = !DAT_00002200;
  DAT_00002203 = !DAT_00002202;
  DAT_00002205 = !DAT_00002204;
  DAT_00002206 = bVar1 < 3;
  DAT_00002207 = 2 < bVar1;
  DAT_00002209 = !DAT_00002208;
  DAT_0000220b = !DAT_0000220a;
  DAT_0000220c = (char)bVar1 < '\x02';
  DAT_0000220d = '\x01' < (char)bVar1;
  DAT_0000220e = (char)bVar1 < '\x03';
  DAT_0000220f = '\x02' < (char)bVar1;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_l_with_code_b_mv_constant_simple(void)

{
  _DAT_00002000 = 2;
  _DAT_00002004 = 2;
  _DAT_00002008 = 4;
  _DAT_0000200c = 5;
  _DAT_00002010 = 6;
  _DAT_00002014 = 7;
  _DAT_00002018 = 8;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x40;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 1;
  DAT_00002205 = 0;
  DAT_00002206 = 1;
  DAT_00002207 = 0;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_l_with_code_b_mv_constant_complex1(void)

{
  _DAT_00002000 = &DAT_a3b17984;
  _DAT_00002004 = &DAT_a3b17984;
  _DAT_00002008 = 0x46685248;
  _DAT_0000200c = 0x392456c4;
  _DAT_00002010 = 0xbc8960a4;
  _DAT_00002014 = 0xad3c2d78;
  _DAT_00002018 = 0xe465e152;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x80;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 1;
  DAT_0000220d = 0;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08055d27)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_l_with_code_b_mv_constant_complex2(void)

{
  _DAT_00002000 = &DAT_313ec0e8;
  _DAT_00002004 = &DAT_496e81c3;
  _DAT_00002008 = 0x1e3f6cb2;
  _DAT_0000200c = 0x4e6925b3;
  _DAT_00002010 = 0x4f312610;
  _DAT_00002014 = 0x2f37a4a5;
  _DAT_00002018 = 0x91a917b4;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x4694;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 1;
  DAT_0000220b = 0;
  DAT_0000220c = 1;
  DAT_0000220d = 0;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



undefined4 cmov_l_with_code_c_mv_plain(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_l_with_code_c_mv_allregs(void)

{
  byte bVar1;
  
  DAT_0000220a = (_DAT_00001100 & 4) != 0;
  bVar1 = (byte)_DAT_00001000;
  DAT_00002202 = bVar1 < 2;
  DAT_00002200 = SBORROW1(bVar1,'\x02');
  DAT_00002208 = (char)(bVar1 - 2) < '\0';
  DAT_00002204 = bVar1 == 2;
  _DAT_00002004 = _DAT_00001004;
  if ((char)bVar1 < '\x02') {
    _DAT_00002004 = _DAT_00001000;
  }
  _DAT_00002000 = _DAT_00001000;
  _DAT_00002008 = _DAT_00001008;
  _DAT_0000200c = _DAT_0000100c;
  _DAT_00002010 = _DAT_00001010;
  _DAT_00002014 = _DAT_00001014;
  _DAT_00002018 = _DAT_00001018;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 =
       (ushort)((_DAT_00001100 & 0x4000) != 0) * 0x4000 | (ushort)DAT_00002200 * 0x800 |
       (ushort)((_DAT_00001100 & 0x400) != 0) * 0x400 |
       (ushort)((_DAT_00001100 & 0x200) != 0) * 0x200 |
       (ushort)((_DAT_00001100 & 0x100) != 0) * 0x100 | (ushort)DAT_00002208 * 0x80 |
       (ushort)DAT_00002204 * 0x40 | (ushort)((_DAT_00001100 & 0x10) != 0) * 0x10 |
       (ushort)DAT_0000220a * 4 | (ushort)DAT_00002202;
  DAT_00002201 = !DAT_00002200;
  DAT_00002203 = !DAT_00002202;
  DAT_00002205 = !DAT_00002204;
  DAT_00002206 = bVar1 < 3;
  DAT_00002207 = 2 < bVar1;
  DAT_00002209 = !DAT_00002208;
  DAT_0000220b = !DAT_0000220a;
  DAT_0000220c = (char)bVar1 < '\x02';
  DAT_0000220d = '\x01' < (char)bVar1;
  DAT_0000220e = (char)bVar1 < '\x03';
  DAT_0000220f = '\x02' < (char)bVar1;
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08055f0f)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_l_with_code_c_mv_constant_simple(void)

{
  _DAT_00002000 = 2;
  _DAT_00002004 = 3;
  _DAT_00002008 = 4;
  _DAT_0000200c = 5;
  _DAT_00002010 = 6;
  _DAT_00002014 = 7;
  _DAT_00002018 = 8;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x40;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 1;
  DAT_00002205 = 0;
  DAT_00002206 = 1;
  DAT_00002207 = 0;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_l_with_code_c_mv_constant_complex1(void)

{
  _DAT_00002000 = &DAT_a3b17984;
  _DAT_00002004 = &DAT_a3b17984;
  _DAT_00002008 = 0x46685248;
  _DAT_0000200c = 0x392456c4;
  _DAT_00002010 = 0xbc8960a4;
  _DAT_00002014 = 0xad3c2d78;
  _DAT_00002018 = 0xe465e152;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x80;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 1;
  DAT_0000220d = 0;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_l_with_code_c_mv_constant_complex2(void)

{
  _DAT_00002000 = &DAT_313ec0e8;
  _DAT_00002004 = &DAT_313ec0e8;
  _DAT_00002008 = 0x1e3f6cb2;
  _DAT_0000200c = 0x4e6925b3;
  _DAT_00002010 = 0x4f312610;
  _DAT_00002014 = 0x2f37a4a5;
  _DAT_00002018 = 0x91a917b4;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x4694;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 1;
  DAT_0000220b = 0;
  DAT_0000220c = 1;
  DAT_0000220d = 0;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



undefined4 cmov_l_with_code_d_mv_plain(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_l_with_code_d_mv_allregs(void)

{
  byte bVar1;
  
  DAT_0000220a = (_DAT_00001100 & 4) != 0;
  bVar1 = (byte)_DAT_00001000;
  DAT_00002202 = bVar1 < 2;
  DAT_00002200 = SBORROW1(bVar1,'\x02');
  DAT_00002208 = (char)(bVar1 - 2) < '\0';
  DAT_00002204 = bVar1 == 2;
  _DAT_00002004 = _DAT_00001004;
  if ('\x01' < (char)bVar1) {
    _DAT_00002004 = _DAT_00001000;
  }
  _DAT_00002000 = _DAT_00001000;
  _DAT_00002008 = _DAT_00001008;
  _DAT_0000200c = _DAT_0000100c;
  _DAT_00002010 = _DAT_00001010;
  _DAT_00002014 = _DAT_00001014;
  _DAT_00002018 = _DAT_00001018;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 =
       (ushort)((_DAT_00001100 & 0x4000) != 0) * 0x4000 | (ushort)DAT_00002200 * 0x800 |
       (ushort)((_DAT_00001100 & 0x400) != 0) * 0x400 |
       (ushort)((_DAT_00001100 & 0x200) != 0) * 0x200 |
       (ushort)((_DAT_00001100 & 0x100) != 0) * 0x100 | (ushort)DAT_00002208 * 0x80 |
       (ushort)DAT_00002204 * 0x40 | (ushort)((_DAT_00001100 & 0x10) != 0) * 0x10 |
       (ushort)DAT_0000220a * 4 | (ushort)DAT_00002202;
  DAT_00002201 = !DAT_00002200;
  DAT_00002203 = !DAT_00002202;
  DAT_00002205 = !DAT_00002204;
  DAT_00002206 = bVar1 < 3;
  DAT_00002207 = 2 < bVar1;
  DAT_00002209 = !DAT_00002208;
  DAT_0000220b = !DAT_0000220a;
  DAT_0000220c = (char)bVar1 < '\x02';
  DAT_0000220d = '\x01' < (char)bVar1;
  DAT_0000220e = (char)bVar1 < '\x03';
  DAT_0000220f = '\x02' < (char)bVar1;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_l_with_code_d_mv_constant_simple(void)

{
  _DAT_00002000 = 2;
  _DAT_00002004 = 2;
  _DAT_00002008 = 4;
  _DAT_0000200c = 5;
  _DAT_00002010 = 6;
  _DAT_00002014 = 7;
  _DAT_00002018 = 8;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x40;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 1;
  DAT_00002205 = 0;
  DAT_00002206 = 1;
  DAT_00002207 = 0;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080563b3)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_l_with_code_d_mv_constant_complex1(void)

{
  _DAT_00002000 = &DAT_a3b17984;
  _DAT_00002004 = &DAT_06671ad7;
  _DAT_00002008 = 0x46685248;
  _DAT_0000200c = 0x392456c4;
  _DAT_00002010 = 0xbc8960a4;
  _DAT_00002014 = 0xad3c2d78;
  _DAT_00002018 = 0xe465e152;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x80;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 1;
  DAT_0000220d = 0;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805649d)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_l_with_code_d_mv_constant_complex2(void)

{
  _DAT_00002000 = &DAT_313ec0e8;
  _DAT_00002004 = &DAT_496e81c3;
  _DAT_00002008 = 0x1e3f6cb2;
  _DAT_0000200c = 0x4e6925b3;
  _DAT_00002010 = 0x4f312610;
  _DAT_00002014 = 0x2f37a4a5;
  _DAT_00002018 = 0x91a917b4;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x4694;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 1;
  DAT_0000220b = 0;
  DAT_0000220c = 1;
  DAT_0000220d = 0;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



undefined4 cmov_l_with_code_e_mv_plain(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_l_with_code_e_mv_allregs(void)

{
  byte bVar1;
  
  DAT_0000220a = (_DAT_00001100 & 4) != 0;
  bVar1 = (byte)_DAT_00001000;
  DAT_00002202 = bVar1 < 2;
  DAT_00002200 = SBORROW1(bVar1,'\x02');
  DAT_00002208 = (char)(bVar1 - 2) < '\0';
  DAT_00002204 = bVar1 == 2;
  _DAT_00002004 = _DAT_00001004;
  if ((char)bVar1 < '\x03') {
    _DAT_00002004 = _DAT_00001000;
  }
  _DAT_00002000 = _DAT_00001000;
  _DAT_00002008 = _DAT_00001008;
  _DAT_0000200c = _DAT_0000100c;
  _DAT_00002010 = _DAT_00001010;
  _DAT_00002014 = _DAT_00001014;
  _DAT_00002018 = _DAT_00001018;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 =
       (ushort)((_DAT_00001100 & 0x4000) != 0) * 0x4000 | (ushort)DAT_00002200 * 0x800 |
       (ushort)((_DAT_00001100 & 0x400) != 0) * 0x400 |
       (ushort)((_DAT_00001100 & 0x200) != 0) * 0x200 |
       (ushort)((_DAT_00001100 & 0x100) != 0) * 0x100 | (ushort)DAT_00002208 * 0x80 |
       (ushort)DAT_00002204 * 0x40 | (ushort)((_DAT_00001100 & 0x10) != 0) * 0x10 |
       (ushort)DAT_0000220a * 4 | (ushort)DAT_00002202;
  DAT_00002201 = !DAT_00002200;
  DAT_00002203 = !DAT_00002202;
  DAT_00002205 = !DAT_00002204;
  DAT_00002206 = bVar1 < 3;
  DAT_00002207 = 2 < bVar1;
  DAT_00002209 = !DAT_00002208;
  DAT_0000220b = !DAT_0000220a;
  DAT_0000220c = (char)bVar1 < '\x02';
  DAT_0000220d = '\x01' < (char)bVar1;
  DAT_0000220e = (char)bVar1 < '\x03';
  DAT_0000220f = '\x02' < (char)bVar1;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_l_with_code_e_mv_constant_simple(void)

{
  _DAT_00002000 = 2;
  _DAT_00002004 = 2;
  _DAT_00002008 = 4;
  _DAT_0000200c = 5;
  _DAT_00002010 = 6;
  _DAT_00002014 = 7;
  _DAT_00002018 = 8;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x40;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 1;
  DAT_00002205 = 0;
  DAT_00002206 = 1;
  DAT_00002207 = 0;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_l_with_code_e_mv_constant_complex1(void)

{
  _DAT_00002000 = &DAT_a3b17984;
  _DAT_00002004 = &DAT_a3b17984;
  _DAT_00002008 = 0x46685248;
  _DAT_0000200c = 0x392456c4;
  _DAT_00002010 = 0xbc8960a4;
  _DAT_00002014 = 0xad3c2d78;
  _DAT_00002018 = 0xe465e152;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x80;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 1;
  DAT_0000220d = 0;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_l_with_code_e_mv_constant_complex2(void)

{
  _DAT_00002000 = &DAT_313ec0e8;
  _DAT_00002004 = &DAT_313ec0e8;
  _DAT_00002008 = 0x1e3f6cb2;
  _DAT_0000200c = 0x4e6925b3;
  _DAT_00002010 = 0x4f312610;
  _DAT_00002014 = 0x2f37a4a5;
  _DAT_00002018 = 0x91a917b4;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x4694;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 1;
  DAT_0000220b = 0;
  DAT_0000220c = 1;
  DAT_0000220d = 0;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



undefined4 cmov_l_with_code_f_mv_plain(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_l_with_code_f_mv_allregs(void)

{
  byte bVar1;
  
  DAT_0000220a = (_DAT_00001100 & 4) != 0;
  bVar1 = (byte)_DAT_00001000;
  DAT_00002202 = bVar1 < 2;
  DAT_00002200 = SBORROW1(bVar1,'\x02');
  DAT_00002208 = (char)(bVar1 - 2) < '\0';
  DAT_00002204 = bVar1 == 2;
  _DAT_00002004 = _DAT_00001004;
  if ('\x02' < (char)bVar1) {
    _DAT_00002004 = _DAT_00001000;
  }
  _DAT_00002000 = _DAT_00001000;
  _DAT_00002008 = _DAT_00001008;
  _DAT_0000200c = _DAT_0000100c;
  _DAT_00002010 = _DAT_00001010;
  _DAT_00002014 = _DAT_00001014;
  _DAT_00002018 = _DAT_00001018;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 =
       (ushort)((_DAT_00001100 & 0x4000) != 0) * 0x4000 | (ushort)DAT_00002200 * 0x800 |
       (ushort)((_DAT_00001100 & 0x400) != 0) * 0x400 |
       (ushort)((_DAT_00001100 & 0x200) != 0) * 0x200 |
       (ushort)((_DAT_00001100 & 0x100) != 0) * 0x100 | (ushort)DAT_00002208 * 0x80 |
       (ushort)DAT_00002204 * 0x40 | (ushort)((_DAT_00001100 & 0x10) != 0) * 0x10 |
       (ushort)DAT_0000220a * 4 | (ushort)DAT_00002202;
  DAT_00002201 = !DAT_00002200;
  DAT_00002203 = !DAT_00002202;
  DAT_00002205 = !DAT_00002204;
  DAT_00002206 = bVar1 < 3;
  DAT_00002207 = 2 < bVar1;
  DAT_00002209 = !DAT_00002208;
  DAT_0000220b = !DAT_0000220a;
  DAT_0000220c = (char)bVar1 < '\x02';
  DAT_0000220d = '\x01' < (char)bVar1;
  DAT_0000220e = (char)bVar1 < '\x03';
  DAT_0000220f = '\x02' < (char)bVar1;
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08056a40)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_l_with_code_f_mv_constant_simple(void)

{
  _DAT_00002000 = 2;
  _DAT_00002004 = 3;
  _DAT_00002008 = 4;
  _DAT_0000200c = 5;
  _DAT_00002010 = 6;
  _DAT_00002014 = 7;
  _DAT_00002018 = 8;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x40;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 1;
  DAT_00002205 = 0;
  DAT_00002206 = 1;
  DAT_00002207 = 0;
  DAT_00002208 = 0;
  DAT_00002209 = 1;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 0;
  DAT_0000220d = 1;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08056b29)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_l_with_code_f_mv_constant_complex1(void)

{
  _DAT_00002000 = &DAT_a3b17984;
  _DAT_00002004 = &DAT_06671ad7;
  _DAT_00002008 = 0x46685248;
  _DAT_0000200c = 0x392456c4;
  _DAT_00002010 = 0xbc8960a4;
  _DAT_00002014 = 0xad3c2d78;
  _DAT_00002018 = 0xe465e152;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x80;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 0;
  DAT_0000220b = 1;
  DAT_0000220c = 1;
  DAT_0000220d = 0;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08056c13)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 cmov_l_with_code_f_mv_constant_complex2(void)

{
  _DAT_00002000 = &DAT_313ec0e8;
  _DAT_00002004 = &DAT_496e81c3;
  _DAT_00002008 = 0x1e3f6cb2;
  _DAT_0000200c = 0x4e6925b3;
  _DAT_00002010 = 0x4f312610;
  _DAT_00002014 = 0x2f37a4a5;
  _DAT_00002018 = 0x91a917b4;
  _DAT_00002020 = 0;
  _DAT_00002050 = (undefined *)register0x00000010;
  _DAT_00002100 = 0x4694;
  DAT_00002200 = 0;
  DAT_00002201 = 1;
  DAT_00002202 = 0;
  DAT_00002203 = 1;
  DAT_00002204 = 0;
  DAT_00002205 = 1;
  DAT_00002206 = 0;
  DAT_00002207 = 1;
  DAT_00002208 = 1;
  DAT_00002209 = 0;
  DAT_0000220a = 1;
  DAT_0000220b = 0;
  DAT_0000220c = 1;
  DAT_0000220d = 0;
  DAT_0000220e = 1;
  DAT_0000220f = 0;
  return 0;
}



undefined4 callAll(void)

{
  bswap_plain();
  bswap_allregs();
  bswap_constant_simple();
  bswap_constant_complex1();
  bswap_constant_complex2();
  cmpxchg1_mv_plain();
  cmpxchg1_mv_allregs();
  cmpxchg1_mv_constant_simple();
  cmpxchg1_mv_constant_complex1();
  cmpxchg1_mv_constant_complex2();
  cmpxchg2_mv_plain();
  cmpxchg2_mv_allregs();
  cmpxchg2_mv_constant_simple();
  cmpxchg2_mv_constant_complex1();
  cmpxchg2_mv_constant_complex2();
  cmpxchg3_plain();
  cmpxchg3_allregs();
  cmpxchg3_constant_simple();
  cmpxchg3_constant_complex1();
  cmpxchg3_constant_complex2();
  cmpxchg4_mv_plain();
  cmpxchg4_mv_allregs();
  cmpxchg4_mv_constant_simple();
  cmpxchg4_mv_constant_complex1();
  cmpxchg4_mv_constant_complex2();
  cmpxchg5_mv_plain();
  cmpxchg5_mv_allregs();
  cmpxchg5_mv_constant_simple();
  cmpxchg5_mv_constant_complex1();
  cmpxchg5_mv_constant_complex2();
  cmpxchg_locked_mv_plain();
  cmpxchg_locked_mv_allregs();
  cmpxchg_locked_mv_constant_simple();
  cmpxchg_locked_mv_constant_complex1();
  cmpxchg_locked_mv_constant_complex2();
  cpuid_plain();
  cpuid_allregs();
  cpuid_constant_simple();
  cpuid_constant_complex1();
  cpuid_constant_complex2();
  invd_plain();
  invd_allregs();
  invd_constant_simple();
  invd_constant_complex1();
  invd_constant_complex2();
  invlpg_plain();
  invlpg_allregs();
  invlpg_constant_simple();
  invlpg_constant_complex1();
  invlpg_constant_complex2();
  wbinvd_plain();
  wbinvd_allregs();
  wbinvd_constant_simple();
  wbinvd_constant_complex1();
  wbinvd_constant_complex2();
  xadd1_mv_plain();
  xadd1_mv_allregs();
  xadd1_mv_constant_simple();
  xadd1_mv_constant_complex1();
  xadd1_mv_constant_complex2();
  xadd2_mv_plain();
  xadd2_mv_allregs();
  xadd2_mv_constant_simple();
  xadd2_mv_constant_complex1();
  xadd2_mv_constant_complex2();
  xadd3_plain();
  xadd3_allregs();
  xadd3_constant_simple();
  xadd3_constant_complex1();
  xadd3_constant_complex2();
  xadd4_mv_plain();
  xadd4_mv_allregs();
  xadd4_mv_constant_simple();
  xadd4_mv_constant_complex1();
  xadd4_mv_constant_complex2();
  xadd5_mv_plain();
  xadd5_mv_allregs();
  xadd5_mv_constant_simple();
  xadd5_mv_constant_complex1();
  xadd5_mv_constant_complex2();
  xadd_locked_mv_plain();
  xadd_locked_mv_allregs();
  xadd_locked_mv_constant_simple();
  xadd_locked_mv_constant_complex1();
  xadd_locked_mv_constant_complex2();
  cmpxchg8b_plain();
  cmpxchg8b_allregs();
  cmpxchg8b_constant_simple();
  cmpxchg8b_constant_complex1();
  cmpxchg8b_constant_complex2();
  cmpxchg8b_locked_mv_plain();
  cmpxchg8b_locked_mv_allregs();
  cmpxchg8b_locked_mv_constant_simple();
  cmpxchg8b_locked_mv_constant_complex1();
  cmpxchg8b_locked_mv_constant_complex2();
  rdtsc_plain();
  rdtsc_allregs();
  rdtsc_constant_simple();
  rdtsc_constant_complex1();
  rdtsc_constant_complex2();
  rdmsr_plain();
  rdmsr_allregs();
  rdmsr_constant_simple();
  rdmsr_constant_complex1();
  rdmsr_constant_complex2();
  wrmsr_plain();
  wrmsr_allregs();
  wrmsr_constant_simple();
  wrmsr_constant_complex1();
  wrmsr_constant_complex2();
  cmov1_mv_plain();
  cmov1_mv_allregs();
  cmov1_mv_constant_simple();
  cmov1_mv_constant_complex1();
  cmov1_mv_constant_complex2();
  cmov2_mv_plain();
  cmov2_mv_allregs();
  cmov2_mv_constant_simple();
  cmov2_mv_constant_complex1();
  cmov2_mv_constant_complex2();
  cmov3_plain();
  cmov3_allregs();
  cmov3_constant_simple();
  cmov3_constant_complex1();
  cmov3_constant_complex2();
  cmov4_mv_plain();
  cmov4_mv_allregs();
  cmov4_mv_constant_simple();
  cmov4_mv_constant_complex1();
  cmov4_mv_constant_complex2();
  cmov5_mv_plain();
  cmov5_mv_allregs();
  cmov5_mv_constant_simple();
  cmov5_mv_constant_complex1();
  cmov5_mv_constant_complex2();
  cmov_w_with_code_0_plain();
  cmov_w_with_code_0_allregs();
  cmov_w_with_code_0_constant_simple();
  cmov_w_with_code_0_constant_complex1();
  cmov_w_with_code_0_constant_complex2();
  cmov_w_with_code_1_mv_plain();
  cmov_w_with_code_1_mv_allregs();
  cmov_w_with_code_1_mv_constant_simple();
  cmov_w_with_code_1_mv_constant_complex1();
  cmov_w_with_code_1_mv_constant_complex2();
  cmov_w_with_code_2_mv_plain();
  cmov_w_with_code_2_mv_allregs();
  cmov_w_with_code_2_mv_constant_simple();
  cmov_w_with_code_2_mv_constant_complex1();
  cmov_w_with_code_2_mv_constant_complex2();
  cmov_w_with_code_3_mv_plain();
  cmov_w_with_code_3_mv_allregs();
  cmov_w_with_code_3_mv_constant_simple();
  cmov_w_with_code_3_mv_constant_complex1();
  cmov_w_with_code_3_mv_constant_complex2();
  cmov_w_with_code_4_mv_plain();
  cmov_w_with_code_4_mv_allregs();
  cmov_w_with_code_4_mv_constant_simple();
  cmov_w_with_code_4_mv_constant_complex1();
  cmov_w_with_code_4_mv_constant_complex2();
  cmov_w_with_code_5_mv_plain();
  cmov_w_with_code_5_mv_allregs();
  cmov_w_with_code_5_mv_constant_simple();
  cmov_w_with_code_5_mv_constant_complex1();
  cmov_w_with_code_5_mv_constant_complex2();
  cmov_w_with_code_6_mv_plain();
  cmov_w_with_code_6_mv_allregs();
  cmov_w_with_code_6_mv_constant_simple();
  cmov_w_with_code_6_mv_constant_complex1();
  cmov_w_with_code_6_mv_constant_complex2();
  cmov_w_with_code_7_mv_plain();
  cmov_w_with_code_7_mv_allregs();
  cmov_w_with_code_7_mv_constant_simple();
  cmov_w_with_code_7_mv_constant_complex1();
  cmov_w_with_code_7_mv_constant_complex2();
  cmov_w_with_code_8_mv_plain();
  cmov_w_with_code_8_mv_allregs();
  cmov_w_with_code_8_mv_constant_simple();
  cmov_w_with_code_8_mv_constant_complex1();
  cmov_w_with_code_8_mv_constant_complex2();
  cmov_w_with_code_9_mv_plain();
  cmov_w_with_code_9_mv_allregs();
  cmov_w_with_code_9_mv_constant_simple();
  cmov_w_with_code_9_mv_constant_complex1();
  cmov_w_with_code_9_mv_constant_complex2();
  cmov_w_with_code_a_mv_plain();
  cmov_w_with_code_a_mv_allregs();
  cmov_w_with_code_a_mv_constant_simple();
  cmov_w_with_code_a_mv_constant_complex1();
  cmov_w_with_code_a_mv_constant_complex2();
  cmov_w_with_code_b_mv_plain();
  cmov_w_with_code_b_mv_allregs();
  cmov_w_with_code_b_mv_constant_simple();
  cmov_w_with_code_b_mv_constant_complex1();
  cmov_w_with_code_b_mv_constant_complex2();
  cmov_w_with_code_c_mv_plain();
  cmov_w_with_code_c_mv_allregs();
  cmov_w_with_code_c_mv_constant_simple();
  cmov_w_with_code_c_mv_constant_complex1();
  cmov_w_with_code_c_mv_constant_complex2();
  cmov_w_with_code_d_mv_plain();
  cmov_w_with_code_d_mv_allregs();
  cmov_w_with_code_d_mv_constant_simple();
  cmov_w_with_code_d_mv_constant_complex1();
  cmov_w_with_code_d_mv_constant_complex2();
  cmov_w_with_code_e_mv_plain();
  cmov_w_with_code_e_mv_allregs();
  cmov_w_with_code_e_mv_constant_simple();
  cmov_w_with_code_e_mv_constant_complex1();
  cmov_w_with_code_e_mv_constant_complex2();
  cmov_w_with_code_f_mv_plain();
  cmov_w_with_code_f_mv_allregs();
  cmov_w_with_code_f_mv_constant_simple();
  cmov_w_with_code_f_mv_constant_complex1();
  cmov_w_with_code_f_mv_constant_complex2();
  cmov_l_with_code_0_plain();
  cmov_l_with_code_0_allregs();
  cmov_l_with_code_0_constant_simple();
  cmov_l_with_code_0_constant_complex1();
  cmov_l_with_code_0_constant_complex2();
  cmov_l_with_code_1_mv_plain();
  cmov_l_with_code_1_mv_allregs();
  cmov_l_with_code_1_mv_constant_simple();
  cmov_l_with_code_1_mv_constant_complex1();
  cmov_l_with_code_1_mv_constant_complex2();
  cmov_l_with_code_2_mv_plain();
  cmov_l_with_code_2_mv_allregs();
  cmov_l_with_code_2_mv_constant_simple();
  cmov_l_with_code_2_mv_constant_complex1();
  cmov_l_with_code_2_mv_constant_complex2();
  cmov_l_with_code_3_mv_plain();
  cmov_l_with_code_3_mv_allregs();
  cmov_l_with_code_3_mv_constant_simple();
  cmov_l_with_code_3_mv_constant_complex1();
  cmov_l_with_code_3_mv_constant_complex2();
  cmov_l_with_code_4_mv_plain();
  cmov_l_with_code_4_mv_allregs();
  cmov_l_with_code_4_mv_constant_simple();
  cmov_l_with_code_4_mv_constant_complex1();
  cmov_l_with_code_4_mv_constant_complex2();
  cmov_l_with_code_5_mv_plain();
  cmov_l_with_code_5_mv_allregs();
  cmov_l_with_code_5_mv_constant_simple();
  cmov_l_with_code_5_mv_constant_complex1();
  cmov_l_with_code_5_mv_constant_complex2();
  cmov_l_with_code_6_mv_plain();
  cmov_l_with_code_6_mv_allregs();
  cmov_l_with_code_6_mv_constant_simple();
  cmov_l_with_code_6_mv_constant_complex1();
  cmov_l_with_code_6_mv_constant_complex2();
  cmov_l_with_code_7_mv_plain();
  cmov_l_with_code_7_mv_allregs();
  cmov_l_with_code_7_mv_constant_simple();
  cmov_l_with_code_7_mv_constant_complex1();
  cmov_l_with_code_7_mv_constant_complex2();
  cmov_l_with_code_8_mv_plain();
  cmov_l_with_code_8_mv_allregs();
  cmov_l_with_code_8_mv_constant_simple();
  cmov_l_with_code_8_mv_constant_complex1();
  cmov_l_with_code_8_mv_constant_complex2();
  cmov_l_with_code_9_mv_plain();
  cmov_l_with_code_9_mv_allregs();
  cmov_l_with_code_9_mv_constant_simple();
  cmov_l_with_code_9_mv_constant_complex1();
  cmov_l_with_code_9_mv_constant_complex2();
  cmov_l_with_code_a_mv_plain();
  cmov_l_with_code_a_mv_allregs();
  cmov_l_with_code_a_mv_constant_simple();
  cmov_l_with_code_a_mv_constant_complex1();
  cmov_l_with_code_a_mv_constant_complex2();
  cmov_l_with_code_b_mv_plain();
  cmov_l_with_code_b_mv_allregs();
  cmov_l_with_code_b_mv_constant_simple();
  cmov_l_with_code_b_mv_constant_complex1();
  cmov_l_with_code_b_mv_constant_complex2();
  cmov_l_with_code_c_mv_plain();
  cmov_l_with_code_c_mv_allregs();
  cmov_l_with_code_c_mv_constant_simple();
  cmov_l_with_code_c_mv_constant_complex1();
  cmov_l_with_code_c_mv_constant_complex2();
  cmov_l_with_code_d_mv_plain();
  cmov_l_with_code_d_mv_allregs();
  cmov_l_with_code_d_mv_constant_simple();
  cmov_l_with_code_d_mv_constant_complex1();
  cmov_l_with_code_d_mv_constant_complex2();
  cmov_l_with_code_e_mv_plain();
  cmov_l_with_code_e_mv_allregs();
  cmov_l_with_code_e_mv_constant_simple();
  cmov_l_with_code_e_mv_constant_complex1();
  cmov_l_with_code_e_mv_constant_complex2();
  cmov_l_with_code_f_mv_plain();
  cmov_l_with_code_f_mv_allregs();
  cmov_l_with_code_f_mv_constant_simple();
  cmov_l_with_code_f_mv_constant_complex1();
  cmov_l_with_code_f_mv_constant_complex2();
  callAll();
  return 0;
}



undefined4 main(void)

{
  callAll();
  return 0;
}



// WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

int __libc_csu_init(void *param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  EVP_PKEY_CTX *in_stack_ffffffe4;
  
  _init(in_stack_ffffffe4);
  iVar2 = 0;
  do {
    iVar1 = (*(code *)(&__frame_dummy_init_array_entry)[iVar2])(param_1,param_2);
    iVar2 = iVar2 + 1;
  } while (iVar2 != 1);
  return iVar1;
}



void __libc_csu_fini(void)

{
  return;
}



// WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void _fini(void)

{
  return;
}


