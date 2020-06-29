typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned long long    qword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef void _IO_lock_t;

typedef struct _IO_marker _IO_marker, *P_IO_marker;

typedef struct _IO_FILE _IO_FILE, *P_IO_FILE;

typedef long __off_t;

typedef long __off64_t;

typedef ulong size_t;

struct _IO_FILE {
    int _flags;
    char * _IO_read_ptr;
    char * _IO_read_end;
    char * _IO_read_base;
    char * _IO_write_base;
    char * _IO_write_ptr;
    char * _IO_write_end;
    char * _IO_buf_base;
    char * _IO_buf_end;
    char * _IO_save_base;
    char * _IO_backup_base;
    char * _IO_save_end;
    struct _IO_marker * _markers;
    struct _IO_FILE * _chain;
    int _fileno;
    int _flags2;
    __off_t _old_offset;
    ushort _cur_column;
    char _vtable_offset;
    char _shortbuf[1];
    _IO_lock_t * _lock;
    __off64_t _offset;
    void * __pad1;
    void * __pad2;
    void * __pad3;
    void * __pad4;
    size_t __pad5;
    int _mode;
    char _unused2[15];
};

struct _IO_marker {
    struct _IO_marker * _next;
    struct _IO_FILE * _sbuf;
    int _pos;
};

typedef struct _IO_FILE FILE;

typedef longlong long int;

typedef ulonglong sizetype;


// WARNING! conflicting data type names: /DWARF/libio.h/_IO_marker - /libio.h/_IO_marker


// WARNING! conflicting data type names: /DWARF/libio.h/_IO_FILE - /stdio.h/_IO_FILE


// WARNING! conflicting data type names: /DWARF/stddef.h/size_t - /stddef.h/size_t


// WARNING! conflicting data type names: /DWARF/types.h/__off_t - /types.h/__off_t


// WARNING! conflicting data type names: /DWARF/types.h/__off64_t - /types.h/__off64_t

typedef struct _IO_FILE_plus _IO_FILE_plus, *P_IO_FILE_plus;

struct _IO_FILE_plus {
};

typedef struct evp_pkey_ctx_st evp_pkey_ctx_st, *Pevp_pkey_ctx_st;

struct evp_pkey_ctx_st {
};

typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;

typedef struct Elf64_Rela Elf64_Rela, *PElf64_Rela;

struct Elf64_Rela {
    qword r_offset; // location to apply the relocation action
    qword r_info; // the symbol table index and the type of relocation
    qword r_addend; // a constant addend used to compute the relocatable field value
};

typedef struct Elf64_Shdr Elf64_Shdr, *PElf64_Shdr;

typedef enum Elf_SectionHeaderType_AARCH64 {
    SHT_AARCH64_ATTRIBUTES=1879048195,
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
} Elf_SectionHeaderType_AARCH64;

struct Elf64_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType_AARCH64 sh_type;
    qword sh_flags;
    qword sh_addr;
    qword sh_offset;
    qword sh_size;
    dword sh_link;
    dword sh_info;
    qword sh_addralign;
    qword sh_entsize;
};

typedef struct Elf64_Phdr Elf64_Phdr, *PElf64_Phdr;

typedef enum Elf_ProgramHeaderType_AARCH64 {
    PT_AARCH64_ARCHEXT=1879048192,
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
} Elf_ProgramHeaderType_AARCH64;

struct Elf64_Phdr {
    enum Elf_ProgramHeaderType_AARCH64 p_type;
    dword p_flags;
    qword p_offset;
    qword p_vaddr;
    qword p_paddr;
    qword p_filesz;
    qword p_memsz;
    qword p_align;
};

typedef struct Elf64_Dyn_AARCH64 Elf64_Dyn_AARCH64, *PElf64_Dyn_AARCH64;

typedef enum Elf64_DynTag_AARCH64 {
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
} Elf64_DynTag_AARCH64;

struct Elf64_Dyn_AARCH64 {
    enum Elf64_DynTag_AARCH64 d_tag;
    qword d_val;
};

typedef struct Elf64_Sym Elf64_Sym, *PElf64_Sym;

struct Elf64_Sym {
    dword st_name;
    byte st_info;
    byte st_other;
    word st_shndx;
    qword st_value;
    qword st_size;
};

typedef struct Elf64_Ehdr Elf64_Ehdr, *PElf64_Ehdr;

struct Elf64_Ehdr {
    byte e_ident_magic_num;
    char e_ident_magic_str[3];
    byte e_ident_class;
    byte e_ident_data;
    byte e_ident_version;
    byte e_ident_pad[9];
    word e_type;
    word e_machine;
    dword e_version;
    qword e_entry;
    qword e_phoff;
    qword e_shoff;
    dword e_flags;
    word e_ehsize;
    word e_phentsize;
    word e_phnum;
    word e_shentsize;
    word e_shnum;
    word e_shstrndx;
};




int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = call_weak_fn((int)ctx);
  return iVar1;
}



void FUN_00100c60(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



void __cxa_finalize(void)

{
  __cxa_finalize();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

FILE * fopen(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = fopen(__filename,__modes);
  return pFVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int isspace(int param_1)

{
  int iVar1;
  
  iVar1 = isspace(param_1);
  return iVar1;
}



void dlsym(void)

{
  dlsym();
  return;
}



void __libc_start_main(void)

{
  __libc_start_main();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int fgetc(FILE *__stream)

{
  int iVar1;
  
  iVar1 = fgetc(__stream);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = calloc(__nmemb,__size);
  return pvVar1;
}



void __gmon_start__(void)

{
  __gmon_start__();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void abort(void)

{
                    // WARNING: Subroutine does not return
  abort();
}



// WARNING: Unknown calling convention yet parameter storage is locked

long strtol(char *__nptr,char **__endptr,int __base)

{
  long lVar1;
  
  lVar1 = strtol(__nptr,__endptr,__base);
  return lVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = strcpy(__dest,__src);
  return pcVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * strstr(char *__haystack,char *__needle)

{
  char *pcVar1;
  
  pcVar1 = strstr(__haystack,__needle);
  return pcVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int isalnum(int param_1)

{
  int iVar1;
  
  iVar1 = isalnum(param_1);
  return iVar1;
}



int main(int g,int e)

{
  int iVar1;
  FILE *pFVar2;
  void *pvVar3;
  char *pcVar4;
  
  Q = (int)stdin;
  if (1 < g) {
    e = e + 4;
    pFVar2 = fopen((char *)(longlong)*(int *)(longlong)e,"r");
    Q = (int)pFVar2;
  }
  pvVar3 = calloc(1,99999);
  R = (int)pvVar3;
  pcVar4 = strcpy((char *)(longlong)R," int if else while break return for define main ");
  D = (int)pcVar4 + 0x30;
  pvVar3 = calloc(1,99999);
  v = (int)pvVar3;
  pvVar3 = calloc(1,99999);
  ac = (int)pvVar3;
  q = ac;
  pvVar3 = calloc(1,99999);
  P = (int)pvVar3;
  o();
  ad();
  ab(0);
                    // WARNING: Could not recover jumptable at 0x00100e74. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)(longlong)*(int *)(longlong)(P + 0x250))((ulonglong)(g - 1),(ulonglong)(uint)e);
  return iVar1;
}



void _start(undefined8 param_1)

{
  undefined8 param_9;
  
  __libc_start_main(main,param_9,&stack0x00000008,__libc_csu_init,__libc_csu_fini,param_1);
                    // WARNING: Subroutine does not return
  abort();
}



// WARNING: Removing unreachable block (ram,0x00100ec0)

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



// WARNING: Removing unreachable block (ram,0x00100ee8)
// WARNING: Removing unreachable block (ram,0x00100ef4)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x00100f24)
// WARNING: Removing unreachable block (ram,0x00100f30)

void register_tm_clones(void)

{
  return;
}



void FUN_00100f3c(void)

{
  if (completed_7433 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_7433 = '\x01';
  }
  return;
}



void __do_global_dtors_aux(void)

{
  if (completed_7433 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_7433 = '\x01';
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void frame_dummy(void)

{
  if (___JCR_END__ == 0) {
    register_tm_clones();
    return;
  }
  _Jv_RegisterClasses();
  register_tm_clones();
  return;
}



int E(int e)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)(longlong)D;
  D = D + 1;
  *puVar1 = (char)e;
  return e;
}



int o(void)

{
  int iVar1;
  byte *pbVar2;
  
  if (L == 0) {
    iVar1 = fgetc((FILE *)(longlong)Q);
    h = iVar1;
  }
  else {
    pbVar2 = (byte *)(longlong)L;
    iVar1 = 0x113094;
    h = (uint)*pbVar2;
    L = L + 1;
    if (*pbVar2 == 2) {
      L = 0;
      iVar1 = W;
      h = W;
    }
  }
  return iVar1;
}



int X(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = h;
  uVar2 = isalnum(h);
  return (int)(iVar1 == 0x5f | uVar2);
}



int Y(void)

{
  if (h == 0x5c) {
    o();
    if (h == 0x6e) {
      h = 10;
    }
  }
  return h;
}



int ad(void)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  byte *pbVar6;
  longlong lVar7;
  
  do {
    while( true ) {
      iVar4 = h;
      uVar3 = isspace(h);
      if ((iVar4 == 0x23 | uVar3) == 0) break;
      if (iVar4 == 0x23) {
        o();
        ad();
        if (d == 0x218) {
          ad();
          E(0x20);
          *(undefined4 *)(longlong)d = 1;
          *(int *)(longlong)(d + 4) = D;
        }
        while (h != 10) {
          E(h);
          o();
        }
        E(10);
        E(2);
      }
      o();
    }
    d = iVar4;
    C = 0;
    iVar4 = X();
    if (iVar4 == 0) {
      o();
      if (d == 0x27) {
        d = 2;
        Y();
        z = h;
        o();
        iVar4 = o();
        return iVar4;
      }
      if (d != 0x2f || h != 0x2a) {
        iVar4 = 0x101e78;
        do {
          pbVar6 = (byte *)(longlong)iVar4;
          if (*pbVar6 == 0) {
            return iVar4;
          }
          lVar7 = (longlong)(iVar4 + 3);
          bVar2 = *(byte *)(longlong)(iVar4 + 1);
          z = 0;
          while( true ) {
            pbVar1 = (byte *)(lVar7 + -1);
            iVar4 = (int)lVar7;
            lVar7 = lVar7 + 1;
            C = (uint)*pbVar1 - 0x62;
            if (-1 < C) break;
            z = C + z * 0x40 + 0x40;
          }
        } while (bVar2 != 0x40 && h != (uint)bVar2 || d != (uint)*pbVar6);
        if (h == (uint)bVar2) {
          o();
          iVar4 = 1;
          d = 1;
        }
        return iVar4;
      }
      o();
      while (h != 0) {
        while (h != 0x2a) {
          o();
        }
        o();
        if (h == 0x2f) {
          h = 0;
        }
      }
    }
    else {
      E(0x20);
      M = D;
      while (iVar4 = X(), iVar4 != 0) {
        E(h);
        o();
      }
      if (d - 0x30U < 10) {
        z = strtol((char *)(ulonglong)(uint)M,(char **)0x0,0);
        d = 2;
        return 2;
      }
      *(undefined *)(longlong)D = 0x20;
      iVar4 = R;
      pcVar5 = strstr((char *)(longlong)R,(char *)(longlong)(M + -1));
      d = (int)pcVar5 - iVar4;
      *(undefined *)(longlong)D = 0;
      d = (d + 0x20) * 8;
      if (d < 0x219) {
        return d;
      }
      d = d + P;
      if (*(int *)(longlong)d != 1) {
        return d;
      }
      L = *(int *)(longlong)(d + 4);
      W = h;
    }
    o();
  } while( true );
}



int ae(int g)

{
  undefined *puVar1;
  
  while (1 < g + 1U) {
    puVar1 = (undefined *)(longlong)q;
    q = q + 1;
    *puVar1 = (char)g;
    g = g >> 8;
  }
  return g;
}



int A(int e)

{
  int iVar1;
  int *piVar2;
  
  while (e != 0) {
    piVar2 = (int *)(longlong)e;
    iVar1 = q - e;
    e = *piVar2;
    *piVar2 = iVar1 + -4;
  }
  return 0;
}



int s(int g,int e)

{
  int iVar1;
  
  ae(g);
  *(int *)(longlong)q = e;
  iVar1 = q;
  q = q + 4;
  return iVar1;
}



int H(int e)

{
  int iVar1;
  
  iVar1 = s(0xb8,e);
  return iVar1;
}



int B(int e)

{
  int iVar1;
  
  iVar1 = s(0xe9,e);
  return iVar1;
}



int S(int j,int e)

{
  int iVar1;
  
  ae(0xfc085);
  iVar1 = s(j + 0x84,e);
  return iVar1;
}



int Z(int e)

{
  int iVar1;
  
  ae(0xc139);
  H(0);
  ae(0xf);
  ae(e + 0x90);
  iVar1 = ae(0xc0);
  return iVar1;
}



int N(int j,int e)

{
  int g;
  
  ae(j + 0x83);
  g = 0x85;
  if (0x1ff < e) {
    g = 5;
  }
  g = s(g,e);
  return g;
}



int w(void)

{
  int iVar1;
  
  iVar1 = O(0xb);
  return iVar1;
}



int T(int j)

{
  int iVar1;
  int e;
  undefined *puVar2;
  int iVar3;
  int e_00;
  
  iVar1 = C;
  e = z;
  iVar3 = d;
  if (d == 0x22) {
    H(v);
    while (h != 0x22) {
      Y();
      puVar2 = (undefined *)(longlong)v;
      v = v + 1;
      *puVar2 = (char)h;
      o();
    }
    *(undefined *)(longlong)v = 0;
    v = v + 4U & 0xfffffffc;
    o();
    goto LAB_001015e0;
  }
  ad();
  if (iVar3 == 2) {
    H(e);
LAB_0010163c:
    e = 1;
  }
  else {
    if (iVar1 == 2) {
      T(0);
      s(0xb9,0);
      if (iVar3 == 0x21) {
        Z(e);
      }
      else {
LAB_00101788:
        ae(e);
      }
      goto LAB_0010163c;
    }
    if (iVar3 == 0x28) {
      w();
LAB_001015e0:
      ad();
      goto LAB_0010163c;
    }
    if (iVar3 == 0x2a) {
      ad();
      iVar3 = d;
      ad();
      ad();
      if (d == 0x2a) {
        ad();
        iVar3 = 0;
        ad();
        ad();
        ad();
      }
      ad();
      T(0);
      if (d == 0x3d) {
        ad();
        ae(0x50);
        w();
        ae(0x59);
        e = (uint)(iVar3 == 0x100) + 0x188;
        goto LAB_00101788;
      }
      e = 1;
      if (iVar3 != 0) {
        e = 0x8b;
        if (iVar3 != 0x100) {
          e = 0xbe0f;
        }
        ae(e);
        q = q + 1;
        goto LAB_0010163c;
      }
    }
    else {
      if (iVar3 == 0x26) {
        N(10,*(int *)(longlong)d);
        goto LAB_001015e0;
      }
      e = *(int *)(longlong)iVar3;
      if (e == 0) {
        e = dlsym(0,(ulonglong)(uint)M);
      }
      if (((uint)(d == 0x3d) & j) == 0) {
        if ((d != 0x28) && (N(8,e), C == 0xb)) {
          N(0,e);
          ae(z);
          ad();
        }
      }
      else {
        ad();
        w();
        N(6,e);
      }
    }
  }
  iVar1 = d;
  if (d == 0x28) {
    if (e == 1) {
      ae(0x50);
    }
    e_00 = 0;
    iVar1 = s(0xec81,0);
    ad();
    while (d != 0x29) {
      w();
      s(0x248489,e_00);
      if (d == 0x2c) {
        ad();
      }
      e_00 = e_00 + 4;
    }
    *(int *)(longlong)iVar1 = e_00;
    ad();
    if (e == 0) {
      iVar1 = s(0xe8,*(int *)(longlong)(iVar3 + 4));
      *(int *)(longlong)(iVar3 + 4) = iVar1;
    }
    else {
      if (e == 1) {
        e = e_00 + 4;
        s(0x2494ff,e_00);
        goto LAB_001018bc;
      }
      iVar1 = s(0xe8,(e - q) + -5);
    }
    e = e_00;
    if (e_00 != 0) {
LAB_001018bc:
      e = s(0xc481,e);
      return e;
    }
  }
  return iVar1;
}



int O(int j)

{
  int iVar1;
  int g;
  bool bVar2;
  bool bVar3;
  int j_00;
  int e;
  uint unaff_w20;
  
  if (j == 1) {
    j_00 = T(1);
    return j_00;
  }
  j_00 = j + -1;
  O(j_00);
  e = 0;
  while (g = z, iVar1 = d, j_00 == C) {
    ad();
    unaff_w20 = g;
    if (j_00 < 9) {
      ae(0x50);
      O(j_00);
      ae(0x59);
      if (j - 5U < 2) {
        Z(g);
      }
      else {
        ae(g);
        if (iVar1 == 0x25) {
          ae(0x92);
        }
      }
    }
    else {
      e = S(g,e);
      O(j_00);
    }
  }
  bVar3 = e != 0;
  bVar2 = false;
  if (bVar3) {
    bVar2 = j + -9 < 0;
  }
  if ((bVar3 && j_00 != 8) && bVar2 == (bVar3 && SBORROW4(j_00,8))) {
    j_00 = S(unaff_w20,e);
    H(unaff_w20 ^ 1);
    B(5);
    A(j_00);
    j_00 = H(unaff_w20);
    return j_00;
  }
  return C;
}



int U(void)

{
  int iVar1;
  
  w();
  iVar1 = S(0,0);
  return iVar1;
}



int ab(int j)

{
  int iVar1;
  
  while (j == 0 && d != -1 || d == 0x100) {
    if (d == 0x100) {
      ad();
      while (d != 0x3b) {
        if (j == 0) {
          *(int *)(longlong)d = v;
          v = v + 4;
        }
        else {
          iVar1 = -4 - G;
          G = G + 4;
          *(int *)(longlong)d = iVar1;
        }
        ad();
        if (d == 0x2c) {
          ad();
        }
      }
      ad();
    }
    else {
      iVar1 = 8;
      A(*(int *)(longlong)(d + 4));
      *(int *)(longlong)d = q;
      ad();
      ad();
      while (d != 0x29) {
        *(int *)(longlong)d = iVar1;
        iVar1 = iVar1 + 4;
        ad();
        if (d == 0x2c) {
          ad();
        }
      }
      ad();
      G = 0;
      K = 0;
      ae(0xe58955);
      iVar1 = s(0xec81,0);
      I(0);
      A(K);
      ae(0xc3c9);
      *(int *)(longlong)iVar1 = G;
    }
  }
  return d;
}



int I(int j)

{
  int iVar1;
  int e;
  int *piVar2;
  int iVar3;
  int m;
  
  iVar1 = d;
  if (d == 0x120) {
    ad();
    ad();
    m = U();
    ad();
    I(j);
    if (d == 0x138) {
      ad();
      iVar1 = B(0);
      A(m);
      I(j);
      m = iVar1;
    }
  }
  else {
    if (d != 0x160 && d != 0x1f8) {
      if (d == 0x7b) {
        ad();
        ab(1);
        while (d != 0x7d) {
          I(j);
        }
      }
      else {
        if (d == 0x1c0) {
          ad();
          if (d != 0x3b) {
            w();
          }
          piVar2 = &K;
          iVar1 = B(K);
          *piVar2 = iVar1;
        }
        else {
          if (d == 400) {
            ad();
            iVar1 = B(*(int *)(longlong)j);
            *(int *)(longlong)j = iVar1;
          }
          else {
            if (d != 0x3b) {
              w();
            }
          }
        }
      }
      iVar1 = ad();
      return iVar1;
    }
    ad();
    ad();
    iVar3 = q;
    if (iVar1 == 0x160) {
      m = U();
    }
    else {
      if (d != 0x3b) {
        w();
      }
      ad();
      iVar3 = q;
      m = 0;
      if (d != 0x3b) {
        m = U();
      }
      ad();
      if (d != 0x29) {
        e = B(0);
        w();
        iVar1 = iVar3 - q;
        iVar3 = e + 4;
        B(iVar1 + -5);
        A(e);
      }
    }
    ad();
    I((int)register0x00000008 + -4);
    B((iVar3 - q) + -5);
  }
  iVar1 = A(m);
  return iVar1;
}



undefined8 __libc_csu_init(EVP_PKEY_CTX *param_1,undefined8 param_2,undefined8 param_3)

{
  code **ppcVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  _init(param_1);
  lVar3 = 0;
  do {
    ppcVar1 = (code **)(&__frame_dummy_init_array_entry + lVar3);
    lVar3 = lVar3 + 1;
    uVar2 = (**ppcVar1)((ulonglong)param_1 & 0xffffffff,param_2,param_3);
  } while (lVar3 != 1);
  return uVar2;
}



void __libc_csu_fini(void)

{
  return;
}



void _fini(void)

{
  return;
}


