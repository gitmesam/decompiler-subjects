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

typedef struct tower tower, *Ptower;

struct tower {
    int * x;
    int n;
    undefined field_0xc;
    undefined field_0xd;
    undefined field_0xe;
    undefined field_0xf;
};

typedef struct _IO_FILE_plus _IO_FILE_plus, *P_IO_FILE_plus;

struct _IO_FILE_plus {
};

typedef uint __useconds_t;

typedef struct evp_pkey_ctx_st evp_pkey_ctx_st, *Pevp_pkey_ctx_st;

struct evp_pkey_ctx_st {
};

typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;

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

typedef struct Elf64_Rela Elf64_Rela, *PElf64_Rela;

struct Elf64_Rela {
    qword r_offset; // location to apply the relocation action
    qword r_info; // the symbol table index and the type of relocation
    qword r_addend; // a constant addend used to compute the relocatable field value
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



void FUN_00100840(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



void __cxa_finalize(void)

{
  __cxa_finalize();
  return;
}



void __libc_start_main(void)

{
  __libc_start_main();
  return;
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

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = puts(__s);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

long strtol(char *__nptr,char **__endptr,int __base)

{
  long lVar1;
  
  lVar1 = strtol(__nptr,__endptr,__base);
  return lVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = fflush(__stream);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int usleep(__useconds_t __useconds)

{
  int iVar1;
  
  iVar1 = usleep(__useconds);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = printf(__format);
  return iVar1;
}



// WARNING: Heritage AFTER dead removal. Example location: r0x00112080 : 0x00100978
// WARNING: Restarted to delay deadcode elimination for space: ram

int main(int c,char **v)

{
  int iVar1;
  int **ppiVar2;
  tower *ptVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  
  puts("\x1b[H\x1b[J");
  if ((c < 2) || (height = strtol(v[1],(char **)0x0,10), height < 1)) {
    height = 8;
  }
  iVar6 = height;
  lVar5 = 0;
  iVar1 = height + 4;
  do {
    plVar4 = (longlong *)calloc(1,iVar1 * 4);
    *(longlong **)((longlong)t + lVar5) = plVar4;
    lVar5 = lVar5 + 8;
    *(longlong **)plVar4 = plVar4 + 2;
  } while (lVar5 != 0x18);
  while (iVar6 != 0) {
    while( true ) {
      ptVar3 = t[0];
      iVar1 = t[0]->n;
      ppiVar2 = &t[0]->x;
      t[0]->n = iVar1 + 1;
      (*ppiVar2)[iVar1] = iVar6;
      printf("\x1b[%d;%dH",(ulonglong)((height - ptVar3->n) + 1),
             (ulonglong)(uint)((height + 1) - iVar6));
      iVar1 = iVar6;
      if (iVar6 != 0) break;
      iVar6 = -1;
      usleep(100000);
      fflush(stdout);
    }
    do {
      printf("%s",&DAT_00101078);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    usleep(100000);
    fflush(stdout);
    iVar6 = iVar6 + -1;
  }
  move(height,0,2,1);
  text(1,0,1,"\n");
  return 0;
}



void _start(undefined8 param_1)

{
  undefined8 param_9;
  
  __libc_start_main(main,param_9,&stack0x00000008,__libc_csu_init,__libc_csu_fini,param_1);
                    // WARNING: Subroutine does not return
  abort();
}



// WARNING: Removing unreachable block (ram,0x00100b2c)

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



// WARNING: Removing unreachable block (ram,0x00100b50)
// WARNING: Removing unreachable block (ram,0x00100b5c)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x00100b8c)
// WARNING: Removing unreachable block (ram,0x00100b98)

void register_tm_clones(void)

{
  return;
}



void FUN_00100ba4(void)

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



tower * new_tower(int cap)

{
  tower *ptVar1;
  
  ptVar1 = (tower *)calloc(1,(cap + 4) * 4);
  *(tower **)&ptVar1->x = ptVar1 + 1;
  return ptVar1;
}



void text(int y,int i,int d,char *s)

{
  printf("\x1b[%d;%dH",(ulonglong)((height - y) + 1),
         (ulonglong)(uint)((height + 1 + i * 2 * (height + 1)) - d));
  if (d != 0) {
    do {
      printf("%s",s);
      d = d + -1;
    } while (d != 0);
  }
  return;
}



void add_disk(int i,int d)

{
  int iVar1;
  tower *ptVar2;
  
  ptVar2 = t[i];
  iVar1 = ptVar2->n;
  ptVar2->n = iVar1 + 1;
  ptVar2->x[iVar1] = d;
  printf("\x1b[%d;%dH",(ulonglong)((height - ptVar2->n) + 1),
         (ulonglong)(uint)((height + 1 + i * 2 * (height + 1)) - d));
  if (d != 0) {
    do {
      printf("%s",&DAT_00101078);
      d = d + -1;
    } while (d != 0);
  }
  usleep(100000);
  fflush(stdout);
  return;
}



int remove_disk(int i)

{
  int iVar1;
  int iVar2;
  int iVar3;
  tower *ptVar4;
  
  ptVar4 = t[i];
  iVar1 = height + 1;
  iVar2 = ptVar4->n + -1;
  iVar3 = height - ptVar4->n;
  ptVar4->n = iVar2;
  iVar2 = ptVar4->x[iVar2];
  printf("\x1b[%d;%dH",(ulonglong)(iVar3 + 1),(ulonglong)(uint)((iVar1 + i * 2 * iVar1) - iVar2));
  iVar1 = iVar2;
  while (iVar1 != 0) {
    printf("%s",&DAT_00101080);
    iVar1 = iVar1 + -1;
  }
  return iVar2;
}



void FUN_00100e34(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  tower *ptVar6;
  int from;
  
  if (param_1 != 0) {
    iVar1 = param_3 * 2 + 1;
    do {
      from = param_2;
      param_1 = param_1 + -1;
      move(param_1,from,param_4,param_3);
      iVar5 = height;
      ptVar6 = t[from];
      iVar3 = ptVar6->n;
      iVar2 = height + 1;
      iVar4 = iVar3 + -1;
      ptVar6->n = iVar4;
      iVar4 = ptVar6->x[iVar4];
      printf("\x1b[%d;%dH",(ulonglong)((iVar5 - iVar3) + 1),
             (ulonglong)(uint)((iVar2 + from * 2 * iVar2) - iVar4));
      iVar2 = iVar4;
      while (iVar2 != 0) {
        printf("%s",&DAT_00101080);
        iVar2 = iVar2 + -1;
      }
      ptVar6 = t[param_3];
      iVar2 = ptVar6->n;
      ptVar6->n = iVar2 + 1;
      ptVar6->x[iVar2] = iVar4;
      printf("\x1b[%d;%dH",(ulonglong)((height - ptVar6->n) + 1),
             (ulonglong)(uint)((iVar1 + height * iVar1) - iVar4));
      while (iVar4 != 0) {
        printf("%s",&DAT_00101078);
        iVar4 = iVar4 + -1;
      }
      usleep(100000);
      fflush(stdout);
      param_2 = param_4;
      param_4 = from;
    } while (param_1 != 0);
  }
  return;
}



void move(int n,int from,int to,int via)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int from_00;
  int iVar5;
  tower *ptVar6;
  
  if (n != 0) {
    iVar1 = to * 2 + 1;
    do {
      from_00 = from;
      n = n + -1;
      move(n,from_00,via,to);
      iVar5 = height;
      ptVar6 = t[from_00];
      iVar3 = ptVar6->n;
      iVar2 = height + 1;
      iVar4 = iVar3 + -1;
      ptVar6->n = iVar4;
      iVar4 = ptVar6->x[iVar4];
      printf("\x1b[%d;%dH",(ulonglong)((iVar5 - iVar3) + 1),
             (ulonglong)(uint)((iVar2 + from_00 * 2 * iVar2) - iVar4));
      iVar2 = iVar4;
      while (iVar2 != 0) {
        printf("%s",&DAT_00101080);
        iVar2 = iVar2 + -1;
      }
      ptVar6 = t[to];
      iVar2 = ptVar6->n;
      ptVar6->n = iVar2 + 1;
      ptVar6->x[iVar2] = iVar4;
      printf("\x1b[%d;%dH",(ulonglong)((height - ptVar6->n) + 1),
             (ulonglong)(uint)((iVar1 + height * iVar1) - iVar4));
      while (iVar4 != 0) {
        printf("%s",&DAT_00101078);
        iVar4 = iVar4 + -1;
      }
      usleep(100000);
      fflush(stdout);
      from = via;
      via = from_00;
    } while (n != 0);
  }
  return;
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


