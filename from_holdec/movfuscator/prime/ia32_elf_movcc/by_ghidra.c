typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned short    word;
typedef unsigned int    wchar32;
typedef long __clock_t;

typedef uint __uid_t;

typedef int __pid_t;

typedef void (* __sighandler_t)(int);

typedef struct __sigset_t __sigset_t, *P__sigset_t;

struct __sigset_t {
    ulong __val[128];
};

typedef struct sigaction sigaction, *Psigaction;

typedef union _union_1048 _union_1048, *P_union_1048;

typedef struct siginfo siginfo, *Psiginfo;

typedef struct siginfo siginfo_t;

typedef union _union_1028 _union_1028, *P_union_1028;

typedef struct _struct_1029 _struct_1029, *P_struct_1029;

typedef struct _struct_1030 _struct_1030, *P_struct_1030;

typedef struct _struct_1031 _struct_1031, *P_struct_1031;

typedef struct _struct_1032 _struct_1032, *P_struct_1032;

typedef struct _struct_1033 _struct_1033, *P_struct_1033;

typedef struct _struct_1034 _struct_1034, *P_struct_1034;

typedef union sigval sigval, *Psigval;

typedef union sigval sigval_t;

struct _struct_1034 {
    long si_band;
    int si_fd;
};

struct _struct_1033 {
    void * si_addr;
};

union sigval {
    int sival_int;
    void * sival_ptr;
};

struct _struct_1032 {
    __pid_t si_pid;
    __uid_t si_uid;
    int si_status;
    __clock_t si_utime;
    __clock_t si_stime;
};

struct _struct_1031 {
    __pid_t si_pid;
    __uid_t si_uid;
    sigval_t si_sigval;
};

struct _struct_1029 {
    __pid_t si_pid;
    __uid_t si_uid;
};

struct _struct_1030 {
    int si_tid;
    int si_overrun;
    sigval_t si_sigval;
};

union _union_1028 {
    int _pad[125];
    struct _struct_1029 _kill;
    struct _struct_1030 _timer;
    struct _struct_1031 _rt;
    struct _struct_1032 _sigchld;
    struct _struct_1033 _sigfault;
    struct _struct_1034 _sigpoll;
};

struct siginfo {
    int si_signo;
    int si_errno;
    int si_code;
    union _union_1028 _sifields;
};

union _union_1048 {
    __sighandler_t sa_handler;
    void (* sa_sigaction)(int, siginfo_t *, void *);
};

struct sigaction {
    union _union_1048 __sigaction_handler;
    struct __sigset_t sa_mask;
    int sa_flags;
    void (* sa_restorer)(void);
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

typedef struct Elf32_Phdr Elf32_Phdr, *PElf32_Phdr;

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

typedef struct Elf32_Rel Elf32_Rel, *PElf32_Rel;

struct Elf32_Rel {
    dword r_offset; // location to apply the relocation action
    dword r_info; // the symbol table index and the type of relocation
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




// WARNING: Unknown calling convention yet parameter storage is locked

int printf(char *__format,...)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention yet parameter storage is locked

void exit(int __status)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention yet parameter storage is locked

int sigaction(int __sig,sigaction *__act,sigaction *__oact)

{
  int iVar1;
  
  iVar1 = sigaction(__sig,__act,__oact);
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void dispatch(void)

{
                    // WARNING: Could not recover jumptable at 0x08048236. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_external)();
  return;
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void entry(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint3 uVar7;
  
  piVar1 = *(int **)(&push + *(int *)(&push + *(int *)(&push + *(int *)(sp + -0x200068))));
  sesp = (undefined4 *)register0x00000010;
  *piVar1 = 0xb;
  piVar1[1] = 0x85fd1c4;
  piVar1[2] = 0;
  piVar1[-1] = 0x8048280;
  sigaction(*piVar1,(sigaction *)piVar1[1],(sigaction *)piVar1[2]);
  piVar1 = *(int **)(&push + *(int *)(&push + *(int *)(sp + -0x200068)));
  *piVar1 = 4;
  piVar1[1] = 0x85fd250;
  piVar1[2] = 0;
  piVar1[-1] = 0x80482b7;
  sigaction(*piVar1,(sigaction *)piVar1[1],(sigaction *)piVar1[2]);
  *(undefined4 *)(&sel_on)[toggle_execution] = 1;
  toggle_execution = 0;
  stack_temp = (char *)(*(uint *)(&alu_add16)[*(int *)((&alu_add16)[(uint)sesp & 0xffff] + 0x10)] &
                        0xffff | *(int *)((&alu_add16)[*(int *)(&alu_add16)[(uint)sesp >> 0x10]] +
                                         (*(uint *)(&alu_add16)
                                                   [*(int *)((&alu_add16)[(uint)sesp & 0xffff] +
                                                            0x10)] >> 0x10) * 4) << 0x10);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = (char *)*sesp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = (char *)0x8804851e;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88050641;
  iVar3 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  *(undefined **)(puVar2 + 3) = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = D0;
  puVar2[1] = DAT_08054064;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805406c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar3 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x1e]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x85] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][4] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar3;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_085fd19c;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_085fd1a4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = (char *)0x0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  iVar3 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][100]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x87] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][4] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar3;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_085fd19c;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_085fd1a4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = fp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = (char *)R1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = (char *)R2;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = (char *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = (char *)D1;
  DAT_081fd104 = DAT_0805406c;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&push + *(int *)(sp + -0x200068));
  puVar2 = (undefined4 *)(&sel_data)[on];
  *(char **)puVar2 = stack_temp;
  puVar2[1] = DAT_081fd104;
  *(undefined **)(&sel_data)[on] = sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  R3 = *(undefined **)(&sel_data)[on];
  R2 = 1;
  uVar4 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)R3 & 0xffff] + (uint)uRam08168042 * 4)]
                   + 4);
  sf = sf & 0xffffff00;
  zf = zf & 0xffffff00 |
       (uint)(byte)(&alu_false)
                   [(byte)(&alu_true)
                          [(uint)(byte)(&alu_true)
                                       [(uint)(byte)(&alu_true)
                                                    [(uint)(byte)(&alu_true)[uVar4 & 0xff] +
                                                     (uVar4 >> 8 & 0xff)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[(uint)R3 >> 0x10] +
                                                            (uint)_alu_inv16 * 4)] +
                                                  (uVar4 >> 0x10) * 4) & 0xff)] +
                           (*(uint *)((&alu_add16)
                                      [*(int *)((&alu_add16)[(uint)R3 >> 0x10] +
                                               (uint)_alu_inv16 * 4)] + (uVar4 >> 0x10) * 4) >> 8 &
                           0xff)]];
  of = of & 0xffffff00;
  b0 = *(int *)((&and)[*(int *)(&alu_false + zf * 4)] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x88048eec;
  iVar3 = b0;
  puVar2 = (undefined4 *)(&sel_data)[b0];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  *(undefined **)(puVar2 + 3) = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = D0;
  puVar2[1] = DAT_08054064;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805406c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  R0 = 0;
  *(undefined4 *)(&sel_target)[on] = 0x88050155;
  iVar3 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  *(undefined **)(puVar2 + 3) = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = D0;
  puVar2[1] = DAT_08054064;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805406c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar3 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xec]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x8e] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][4] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar3;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_085fd19c;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_085fd1a4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R3 = *(undefined **)(&sel_data)[on];
  R2 = 2;
  uVar4 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)R3 & 0xffff] + (uint)uRam08168044 * 4)]
                   + 4);
  sf = sf & 0xffffff00;
  zf = zf & 0xffffff00 |
       (uint)(byte)(&alu_false)
                   [(byte)(&alu_true)
                          [(uint)(byte)(&alu_true)
                                       [(uint)(byte)(&alu_true)
                                                    [(uint)(byte)(&alu_true)[uVar4 & 0xff] +
                                                     (uVar4 >> 8 & 0xff)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[(uint)R3 >> 0x10] +
                                                            (uint)_alu_inv16 * 4)] +
                                                  (uVar4 >> 0x10) * 4) & 0xff)] +
                           (*(uint *)((&alu_add16)
                                      [*(int *)((&alu_add16)[(uint)R3 >> 0x10] +
                                               (uint)_alu_inv16 * 4)] + (uVar4 >> 0x10) * 4) >> 8 &
                           0xff)]];
  of = of & 0xffffff00;
  b0 = *(int *)((&and)[*(int *)(&alu_false + zf * 4)] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x88049439;
  iVar3 = b0;
  puVar2 = (undefined4 *)(&sel_data)[b0];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  *(undefined **)(puVar2 + 3) = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = D0;
  puVar2[1] = DAT_08054064;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805406c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  R0 = 1;
  *(undefined4 *)(&sel_target)[on] = 0x88050155;
  iVar3 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  *(undefined **)(puVar2 + 3) = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = D0;
  puVar2[1] = DAT_08054064;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805406c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar3 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x39]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x94] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][4] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar3;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_085fd19c;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_085fd1a4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R3 = (undefined *)0x2;
  *(undefined4 *)(&sel_data)[on] = 2;
  *(undefined4 *)(&sel_target)[on] = 0x8804f66f;
  iVar3 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  *(undefined **)(puVar2 + 3) = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = D0;
  puVar2[1] = DAT_08054064;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805406c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar3 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][2]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x97] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][4] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar3;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_085fd19c;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_085fd1a4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  _alu_n = *(uint *)(&sel_data)[on];
  _alu_d = *(uint *)(&sel_data)[on];
  alu_ns = *(int *)(&alu_b7 + (_alu_n >> 0x18) * 4);
  alu_ds = *(int *)(&alu_b7 + (_alu_d >> 0x18) * 4);
  alu_rs = alu_ns;
  *(uint *)(&sel_data)[alu_ns] =
       *(uint *)((&alu_add16)
                 [*(int *)(alu_add16 + (uint)*(ushort *)(&alu_inv16 + (_alu_n & 0xffff) * 2) * 4)] +
                4) & 0xffff |
       *(int *)((&alu_add16)
                [*(int *)(alu_add16 + (uint)*(ushort *)(&alu_inv16 + (_alu_n >> 0x10) * 2) * 4)] +
               (*(uint *)((&alu_add16)
                          [*(int *)(alu_add16 +
                                   (uint)*(ushort *)(&alu_inv16 + (_alu_n & 0xffff) * 2) * 4)] + 4)
               >> 0x10) * 4) << 0x10;
  *(uint *)(&sel_data)[alu_ds] =
       *(uint *)((&alu_add16)
                 [*(int *)(alu_add16 + (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                4) & 0xffff |
       *(int *)((&alu_add16)
                [*(int *)(alu_add16 + (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
               (*(uint *)((&alu_add16)
                          [*(int *)(alu_add16 +
                                   (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4)
               >> 0x10) * 4) << 0x10;
  _alu_q = 0;
  uVar5 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b7 +
                                                                      (_alu_n >> 0x18) * 4) & 0xff)
                                                            * 4 + _alu_div_shl3_8_d) >> 8 & 0xff) *
                                                  4 + _alu_div_shl3_8_d) >> 8 & 0xff) * 4 +
                                        _alu_div_shl3_8_d),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b7 + (_alu_n >> 0x18) * 4
                                                                     ) & 0xff) * 4 +
                                                           _alu_div_shl3_8_d) >> 8 & 0xff) * 4 +
                                                 _alu_div_shl3_8_d),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b7 + (_alu_n >> 0x18) * 4) & 0xff)
                                                 * 4 + _alu_div_shl3_8_d)));
  _alu_r = uVar5 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b7 + (_alu_n >> 0x18) * 4)
                                                         & 0xff) * 4 + _alu_div_shl3_8_d) >> 8 &
                                               0xff) * 4 + _alu_div_shl3_8_d) >> 8 & 0xff) * 4 +
                                     _alu_div_shl3_8_d) >> 8 & 0xff) * 4 + _alu_div_shl3_8_d) <<
                   0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar4 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar4 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  _alu_sq = *alu_psel_q & 0xffffff | (uint)(byte)(&alu_b_s_7)[*alu_psel_q >> 0x18] << 0x18;
  *alu_psel_q = _alu_sq;
  uVar5 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b6 +
                                                                      (_alu_n >> 0x18) * 4) & 0xff)
                                                            * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                          (_alu_r & 0xff) * 4)) >> 8
                                                  & 0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b6 + (_alu_n >> 0x18) * 4
                                                                     ) & 0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b6 + (_alu_n >> 0x18) * 4) & 0xff)
                                                 * 4 + *(int *)(&alu_div_shl3_8_d +
                                                               (_alu_r & 0xff) * 4))));
  _alu_r = uVar5 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b6 + (_alu_n >> 0x18) * 4)
                                                         & 0xff) * 4 +
                                                         *(int *)(&alu_div_shl3_8_d +
                                                                 (_alu_r & 0xff) * 4)) >> 8 & 0xff)
                                               * 4 + *(int *)(&alu_div_shl3_8_d +
                                                             ((_alu_r & 0xff00) >> 8) * 4)) >> 8 &
                                     0xff) * 4 +
                                     *(int *)(&alu_div_shl3_8_d + ((_alu_r & 0xff0000) >> 0x10) * 4)
                                     ) >> 8 & 0xff) * 4 +
                           *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar4 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar4 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  _alu_sq = *alu_psel_q & 0xffffff | (uint)(byte)(&alu_b_s_6)[*alu_psel_q >> 0x18] << 0x18;
  *alu_psel_q = _alu_sq;
  uVar5 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b5 +
                                                                      (_alu_n >> 0x18) * 4) & 0xff)
                                                            * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                          (_alu_r & 0xff) * 4)) >> 8
                                                  & 0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b5 + (_alu_n >> 0x18) * 4
                                                                     ) & 0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b5 + (_alu_n >> 0x18) * 4) & 0xff)
                                                 * 4 + *(int *)(&alu_div_shl3_8_d +
                                                               (_alu_r & 0xff) * 4))));
  _alu_r = uVar5 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b5 + (_alu_n >> 0x18) * 4)
                                                         & 0xff) * 4 +
                                                         *(int *)(&alu_div_shl3_8_d +
                                                                 (_alu_r & 0xff) * 4)) >> 8 & 0xff)
                                               * 4 + *(int *)(&alu_div_shl3_8_d +
                                                             ((_alu_r & 0xff00) >> 8) * 4)) >> 8 &
                                     0xff) * 4 +
                                     *(int *)(&alu_div_shl3_8_d + ((_alu_r & 0xff0000) >> 0x10) * 4)
                                     ) >> 8 & 0xff) * 4 +
                           *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar4 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar4 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  _alu_sq = *alu_psel_q & 0xffffff | (uint)(byte)(&alu_b_s_5)[*alu_psel_q >> 0x18] << 0x18;
  *alu_psel_q = _alu_sq;
  uVar5 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b4 +
                                                                      (_alu_n >> 0x18) * 4) & 0xff)
                                                            * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                          (_alu_r & 0xff) * 4)) >> 8
                                                  & 0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b4 + (_alu_n >> 0x18) * 4
                                                                     ) & 0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b4 + (_alu_n >> 0x18) * 4) & 0xff)
                                                 * 4 + *(int *)(&alu_div_shl3_8_d +
                                                               (_alu_r & 0xff) * 4))));
  _alu_r = uVar5 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b4 + (_alu_n >> 0x18) * 4)
                                                         & 0xff) * 4 +
                                                         *(int *)(&alu_div_shl3_8_d +
                                                                 (_alu_r & 0xff) * 4)) >> 8 & 0xff)
                                               * 4 + *(int *)(&alu_div_shl3_8_d +
                                                             ((_alu_r & 0xff00) >> 8) * 4)) >> 8 &
                                     0xff) * 4 +
                                     *(int *)(&alu_div_shl3_8_d + ((_alu_r & 0xff0000) >> 0x10) * 4)
                                     ) >> 8 & 0xff) * 4 +
                           *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar4 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar4 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  _alu_sq = *alu_psel_q & 0xffffff | (uint)(byte)(&alu_b_s_4)[*alu_psel_q >> 0x18] << 0x18;
  *alu_psel_q = _alu_sq;
  uVar5 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b3 +
                                                                      (_alu_n >> 0x18) * 4) & 0xff)
                                                            * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                          (_alu_r & 0xff) * 4)) >> 8
                                                  & 0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b3 + (_alu_n >> 0x18) * 4
                                                                     ) & 0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b3 + (_alu_n >> 0x18) * 4) & 0xff)
                                                 * 4 + *(int *)(&alu_div_shl3_8_d +
                                                               (_alu_r & 0xff) * 4))));
  _alu_r = uVar5 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b3 + (_alu_n >> 0x18) * 4)
                                                         & 0xff) * 4 +
                                                         *(int *)(&alu_div_shl3_8_d +
                                                                 (_alu_r & 0xff) * 4)) >> 8 & 0xff)
                                               * 4 + *(int *)(&alu_div_shl3_8_d +
                                                             ((_alu_r & 0xff00) >> 8) * 4)) >> 8 &
                                     0xff) * 4 +
                                     *(int *)(&alu_div_shl3_8_d + ((_alu_r & 0xff0000) >> 0x10) * 4)
                                     ) >> 8 & 0xff) * 4 +
                           *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar4 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar4 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  _alu_sq = *alu_psel_q & 0xffffff | (uint)(byte)(&alu_b_s_3)[*alu_psel_q >> 0x18] << 0x18;
  *alu_psel_q = _alu_sq;
  uVar5 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b2 +
                                                                      (_alu_n >> 0x18) * 4) & 0xff)
                                                            * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                          (_alu_r & 0xff) * 4)) >> 8
                                                  & 0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b2 + (_alu_n >> 0x18) * 4
                                                                     ) & 0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b2 + (_alu_n >> 0x18) * 4) & 0xff)
                                                 * 4 + *(int *)(&alu_div_shl3_8_d +
                                                               (_alu_r & 0xff) * 4))));
  _alu_r = uVar5 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b2 + (_alu_n >> 0x18) * 4)
                                                         & 0xff) * 4 +
                                                         *(int *)(&alu_div_shl3_8_d +
                                                                 (_alu_r & 0xff) * 4)) >> 8 & 0xff)
                                               * 4 + *(int *)(&alu_div_shl3_8_d +
                                                             ((_alu_r & 0xff00) >> 8) * 4)) >> 8 &
                                     0xff) * 4 +
                                     *(int *)(&alu_div_shl3_8_d + ((_alu_r & 0xff0000) >> 0x10) * 4)
                                     ) >> 8 & 0xff) * 4 +
                           *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar4 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar4 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  _alu_sq = *alu_psel_q & 0xffffff | (uint)(byte)(&alu_b_s_2)[*alu_psel_q >> 0x18] << 0x18;
  *alu_psel_q = _alu_sq;
  uVar5 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b1 +
                                                                      (_alu_n >> 0x18) * 4) & 0xff)
                                                            * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                          (_alu_r & 0xff) * 4)) >> 8
                                                  & 0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b1 + (_alu_n >> 0x18) * 4
                                                                     ) & 0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b1 + (_alu_n >> 0x18) * 4) & 0xff)
                                                 * 4 + *(int *)(&alu_div_shl3_8_d +
                                                               (_alu_r & 0xff) * 4))));
  _alu_r = uVar5 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b1 + (_alu_n >> 0x18) * 4)
                                                         & 0xff) * 4 +
                                                         *(int *)(&alu_div_shl3_8_d +
                                                                 (_alu_r & 0xff) * 4)) >> 8 & 0xff)
                                               * 4 + *(int *)(&alu_div_shl3_8_d +
                                                             ((_alu_r & 0xff00) >> 8) * 4)) >> 8 &
                                     0xff) * 4 +
                                     *(int *)(&alu_div_shl3_8_d + ((_alu_r & 0xff0000) >> 0x10) * 4)
                                     ) >> 8 & 0xff) * 4 +
                           *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar4 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar4 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  _alu_sq = *alu_psel_q & 0xffffff | (uint)(byte)(&alu_b_s_1)[*alu_psel_q >> 0x18] << 0x18;
  *alu_psel_q = _alu_sq;
  uVar5 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b0 +
                                                                      (_alu_n >> 0x18) * 4) & 0xff)
                                                            * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                          (_alu_r & 0xff) * 4)) >> 8
                                                  & 0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b0 + (_alu_n >> 0x18) * 4
                                                                     ) & 0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b0 + (_alu_n >> 0x18) * 4) & 0xff)
                                                 * 4 + *(int *)(&alu_div_shl3_8_d +
                                                               (_alu_r & 0xff) * 4))));
  _alu_r = uVar5 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b0 + (_alu_n >> 0x18) * 4)
                                                         & 0xff) * 4 +
                                                         *(int *)(&alu_div_shl3_8_d +
                                                                 (_alu_r & 0xff) * 4)) >> 8 & 0xff)
                                               * 4 + *(int *)(&alu_div_shl3_8_d +
                                                             ((_alu_r & 0xff00) >> 8) * 4)) >> 8 &
                                     0xff) * 4 +
                                     *(int *)(&alu_div_shl3_8_d + ((_alu_r & 0xff0000) >> 0x10) * 4)
                                     ) >> 8 & 0xff) * 4 +
                           *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar4 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar4 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  _alu_sq = *alu_psel_q & 0xffffff | (uint)(byte)(&alu_b_s_0)[*alu_psel_q >> 0x18] << 0x18;
  *alu_psel_q = _alu_sq;
  uVar5 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b7 +
                                                                      (_alu_n >> 0x10 & 0xff) * 4) &
                                                            0xff) * 4 +
                                                            *(int *)(&alu_div_shl3_8_d +
                                                                    (_alu_r & 0xff) * 4)) >> 8 &
                                                  0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b7 +
                                                                     (_alu_n >> 0x10 & 0xff) * 4) &
                                                           0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b7 + (_alu_n >> 0x10 & 0xff) * 4) &
                                                 0xff) * 4 +
                                                 *(int *)(&alu_div_shl3_8_d + (_alu_r & 0xff) * 4)))
                        );
  _alu_r = uVar5 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b7 +
                                                                   (_alu_n >> 0x10 & 0xff) * 4) &
                                                         0xff) * 4 +
                                                         *(int *)(&alu_div_shl3_8_d +
                                                                 (_alu_r & 0xff) * 4)) >> 8 & 0xff)
                                               * 4 + *(int *)(&alu_div_shl3_8_d +
                                                             ((_alu_r & 0xff00) >> 8) * 4)) >> 8 &
                                     0xff) * 4 +
                                     *(int *)(&alu_div_shl3_8_d + ((_alu_r & 0xff0000) >> 0x10) * 4)
                                     ) >> 8 & 0xff) * 4 +
                           *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar4 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar4 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  uVar4 = *alu_psel_q;
  _alu_sq = (ushort)uVar4;
  _alu_sq = CONCAT12((&alu_b_s_7)[uVar4 >> 0x10 & 0xff],_alu_sq);
  _alu_sq = uVar4 & 0xff000000 | (uint)_alu_sq;
  *alu_psel_q = _alu_sq;
  uVar5 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b6 +
                                                                      (_alu_n >> 0x10 & 0xff) * 4) &
                                                            0xff) * 4 +
                                                            *(int *)(&alu_div_shl3_8_d +
                                                                    (_alu_r & 0xff) * 4)) >> 8 &
                                                  0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b6 +
                                                                     (_alu_n >> 0x10 & 0xff) * 4) &
                                                           0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b6 + (_alu_n >> 0x10 & 0xff) * 4) &
                                                 0xff) * 4 +
                                                 *(int *)(&alu_div_shl3_8_d + (_alu_r & 0xff) * 4)))
                        );
  _alu_r = uVar5 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b6 +
                                                                   (_alu_n >> 0x10 & 0xff) * 4) &
                                                         0xff) * 4 +
                                                         *(int *)(&alu_div_shl3_8_d +
                                                                 (_alu_r & 0xff) * 4)) >> 8 & 0xff)
                                               * 4 + *(int *)(&alu_div_shl3_8_d +
                                                             ((_alu_r & 0xff00) >> 8) * 4)) >> 8 &
                                     0xff) * 4 +
                                     *(int *)(&alu_div_shl3_8_d + ((_alu_r & 0xff0000) >> 0x10) * 4)
                                     ) >> 8 & 0xff) * 4 +
                           *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar4 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar4 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  uVar4 = *alu_psel_q;
  _alu_sq = (ushort)uVar4;
  _alu_sq = CONCAT12((&alu_b_s_6)[uVar4 >> 0x10 & 0xff],_alu_sq);
  _alu_sq = uVar4 & 0xff000000 | (uint)_alu_sq;
  *alu_psel_q = _alu_sq;
  uVar5 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b5 +
                                                                      (_alu_n >> 0x10 & 0xff) * 4) &
                                                            0xff) * 4 +
                                                            *(int *)(&alu_div_shl3_8_d +
                                                                    (_alu_r & 0xff) * 4)) >> 8 &
                                                  0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b5 +
                                                                     (_alu_n >> 0x10 & 0xff) * 4) &
                                                           0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b5 + (_alu_n >> 0x10 & 0xff) * 4) &
                                                 0xff) * 4 +
                                                 *(int *)(&alu_div_shl3_8_d + (_alu_r & 0xff) * 4)))
                        );
  _alu_r = uVar5 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b5 +
                                                                   (_alu_n >> 0x10 & 0xff) * 4) &
                                                         0xff) * 4 +
                                                         *(int *)(&alu_div_shl3_8_d +
                                                                 (_alu_r & 0xff) * 4)) >> 8 & 0xff)
                                               * 4 + *(int *)(&alu_div_shl3_8_d +
                                                             ((_alu_r & 0xff00) >> 8) * 4)) >> 8 &
                                     0xff) * 4 +
                                     *(int *)(&alu_div_shl3_8_d + ((_alu_r & 0xff0000) >> 0x10) * 4)
                                     ) >> 8 & 0xff) * 4 +
                           *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar4 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar4 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  uVar4 = *alu_psel_q;
  _alu_sq = (ushort)uVar4;
  _alu_sq = CONCAT12((&alu_b_s_5)[uVar4 >> 0x10 & 0xff],_alu_sq);
  _alu_sq = uVar4 & 0xff000000 | (uint)_alu_sq;
  *alu_psel_q = _alu_sq;
  uVar5 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b4 +
                                                                      (_alu_n >> 0x10 & 0xff) * 4) &
                                                            0xff) * 4 +
                                                            *(int *)(&alu_div_shl3_8_d +
                                                                    (_alu_r & 0xff) * 4)) >> 8 &
                                                  0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b4 +
                                                                     (_alu_n >> 0x10 & 0xff) * 4) &
                                                           0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b4 + (_alu_n >> 0x10 & 0xff) * 4) &
                                                 0xff) * 4 +
                                                 *(int *)(&alu_div_shl3_8_d + (_alu_r & 0xff) * 4)))
                        );
  _alu_r = uVar5 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b4 +
                                                                   (_alu_n >> 0x10 & 0xff) * 4) &
                                                         0xff) * 4 +
                                                         *(int *)(&alu_div_shl3_8_d +
                                                                 (_alu_r & 0xff) * 4)) >> 8 & 0xff)
                                               * 4 + *(int *)(&alu_div_shl3_8_d +
                                                             ((_alu_r & 0xff00) >> 8) * 4)) >> 8 &
                                     0xff) * 4 +
                                     *(int *)(&alu_div_shl3_8_d + ((_alu_r & 0xff0000) >> 0x10) * 4)
                                     ) >> 8 & 0xff) * 4 +
                           *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar4 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar4 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  uVar4 = *alu_psel_q;
  _alu_sq = (ushort)uVar4;
  _alu_sq = CONCAT12((&alu_b_s_4)[uVar4 >> 0x10 & 0xff],_alu_sq);
  _alu_sq = uVar4 & 0xff000000 | (uint)_alu_sq;
  *alu_psel_q = _alu_sq;
  uVar5 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b3 +
                                                                      (_alu_n >> 0x10 & 0xff) * 4) &
                                                            0xff) * 4 +
                                                            *(int *)(&alu_div_shl3_8_d +
                                                                    (_alu_r & 0xff) * 4)) >> 8 &
                                                  0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b3 +
                                                                     (_alu_n >> 0x10 & 0xff) * 4) &
                                                           0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b3 + (_alu_n >> 0x10 & 0xff) * 4) &
                                                 0xff) * 4 +
                                                 *(int *)(&alu_div_shl3_8_d + (_alu_r & 0xff) * 4)))
                        );
  _alu_r = uVar5 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b3 +
                                                                   (_alu_n >> 0x10 & 0xff) * 4) &
                                                         0xff) * 4 +
                                                         *(int *)(&alu_div_shl3_8_d +
                                                                 (_alu_r & 0xff) * 4)) >> 8 & 0xff)
                                               * 4 + *(int *)(&alu_div_shl3_8_d +
                                                             ((_alu_r & 0xff00) >> 8) * 4)) >> 8 &
                                     0xff) * 4 +
                                     *(int *)(&alu_div_shl3_8_d + ((_alu_r & 0xff0000) >> 0x10) * 4)
                                     ) >> 8 & 0xff) * 4 +
                           *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar4 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar4 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  uVar4 = *alu_psel_q;
  _alu_sq = (ushort)uVar4;
  _alu_sq = CONCAT12((&alu_b_s_3)[uVar4 >> 0x10 & 0xff],_alu_sq);
  _alu_sq = uVar4 & 0xff000000 | (uint)_alu_sq;
  *alu_psel_q = _alu_sq;
  uVar5 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b2 +
                                                                      (_alu_n >> 0x10 & 0xff) * 4) &
                                                            0xff) * 4 +
                                                            *(int *)(&alu_div_shl3_8_d +
                                                                    (_alu_r & 0xff) * 4)) >> 8 &
                                                  0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b2 +
                                                                     (_alu_n >> 0x10 & 0xff) * 4) &
                                                           0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b2 + (_alu_n >> 0x10 & 0xff) * 4) &
                                                 0xff) * 4 +
                                                 *(int *)(&alu_div_shl3_8_d + (_alu_r & 0xff) * 4)))
                        );
  _alu_r = uVar5 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b2 +
                                                                   (_alu_n >> 0x10 & 0xff) * 4) &
                                                         0xff) * 4 +
                                                         *(int *)(&alu_div_shl3_8_d +
                                                                 (_alu_r & 0xff) * 4)) >> 8 & 0xff)
                                               * 4 + *(int *)(&alu_div_shl3_8_d +
                                                             ((_alu_r & 0xff00) >> 8) * 4)) >> 8 &
                                     0xff) * 4 +
                                     *(int *)(&alu_div_shl3_8_d + ((_alu_r & 0xff0000) >> 0x10) * 4)
                                     ) >> 8 & 0xff) * 4 +
                           *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar4 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar4 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  uVar4 = *alu_psel_q;
  _alu_sq = (ushort)uVar4;
  _alu_sq = CONCAT12((&alu_b_s_2)[uVar4 >> 0x10 & 0xff],_alu_sq);
  _alu_sq = uVar4 & 0xff000000 | (uint)_alu_sq;
  *alu_psel_q = _alu_sq;
  uVar5 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b1 +
                                                                      (_alu_n >> 0x10 & 0xff) * 4) &
                                                            0xff) * 4 +
                                                            *(int *)(&alu_div_shl3_8_d +
                                                                    (_alu_r & 0xff) * 4)) >> 8 &
                                                  0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b1 +
                                                                     (_alu_n >> 0x10 & 0xff) * 4) &
                                                           0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b1 + (_alu_n >> 0x10 & 0xff) * 4) &
                                                 0xff) * 4 +
                                                 *(int *)(&alu_div_shl3_8_d + (_alu_r & 0xff) * 4)))
                        );
  _alu_r = uVar5 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b1 +
                                                                   (_alu_n >> 0x10 & 0xff) * 4) &
                                                         0xff) * 4 +
                                                         *(int *)(&alu_div_shl3_8_d +
                                                                 (_alu_r & 0xff) * 4)) >> 8 & 0xff)
                                               * 4 + *(int *)(&alu_div_shl3_8_d +
                                                             ((_alu_r & 0xff00) >> 8) * 4)) >> 8 &
                                     0xff) * 4 +
                                     *(int *)(&alu_div_shl3_8_d + ((_alu_r & 0xff0000) >> 0x10) * 4)
                                     ) >> 8 & 0xff) * 4 +
                           *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar4 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar4 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  uVar4 = *alu_psel_q;
  _alu_sq = (ushort)uVar4;
  _alu_sq = CONCAT12((&alu_b_s_1)[uVar4 >> 0x10 & 0xff],_alu_sq);
  _alu_sq = uVar4 & 0xff000000 | (uint)_alu_sq;
  *alu_psel_q = _alu_sq;
  uVar5 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b0 +
                                                                      (_alu_n >> 0x10 & 0xff) * 4) &
                                                            0xff) * 4 +
                                                            *(int *)(&alu_div_shl3_8_d +
                                                                    (_alu_r & 0xff) * 4)) >> 8 &
                                                  0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b0 +
                                                                     (_alu_n >> 0x10 & 0xff) * 4) &
                                                           0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b0 + (_alu_n >> 0x10 & 0xff) * 4) &
                                                 0xff) * 4 +
                                                 *(int *)(&alu_div_shl3_8_d + (_alu_r & 0xff) * 4)))
                        );
  _alu_r = uVar5 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b0 +
                                                                   (_alu_n >> 0x10 & 0xff) * 4) &
                                                         0xff) * 4 +
                                                         *(int *)(&alu_div_shl3_8_d +
                                                                 (_alu_r & 0xff) * 4)) >> 8 & 0xff)
                                               * 4 + *(int *)(&alu_div_shl3_8_d +
                                                             ((_alu_r & 0xff00) >> 8) * 4)) >> 8 &
                                     0xff) * 4 +
                                     *(int *)(&alu_div_shl3_8_d + ((_alu_r & 0xff0000) >> 0x10) * 4)
                                     ) >> 8 & 0xff) * 4 +
                           *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar4 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar4 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  uVar4 = *alu_psel_q;
  _alu_sq = (ushort)uVar4;
  _alu_sq = CONCAT12((&alu_b_s_0)[uVar4 >> 0x10 & 0xff],_alu_sq);
  _alu_sq = uVar4 & 0xff000000 | (uint)_alu_sq;
  *alu_psel_q = _alu_sq;
  uVar5 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b7 +
                                                                      (_alu_n >> 8 & 0xff) * 4) &
                                                            0xff) * 4 +
                                                            *(int *)(&alu_div_shl3_8_d +
                                                                    (_alu_r & 0xff) * 4)) >> 8 &
                                                  0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b7 +
                                                                     (_alu_n >> 8 & 0xff) * 4) &
                                                           0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b7 + (_alu_n >> 8 & 0xff) * 4) &
                                                 0xff) * 4 +
                                                 *(int *)(&alu_div_shl3_8_d + (_alu_r & 0xff) * 4)))
                        );
  _alu_r = uVar5 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b7 +
                                                                   (_alu_n >> 8 & 0xff) * 4) & 0xff)
                                                         * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                       (_alu_r & 0xff) * 4)) >> 8 &
                                               0xff) * 4 +
                                               *(int *)(&alu_div_shl3_8_d +
                                                       ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff) *
                                     4 + *(int *)(&alu_div_shl3_8_d +
                                                 ((_alu_r & 0xff0000) >> 0x10) * 4)) >> 8 & 0xff) *
                           4 + *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar4 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar4 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  uVar4 = *alu_psel_q;
  alu_sq = (undefined)uVar4;
  _alu_sq = CONCAT11((&alu_b_s_7)[uVar4 >> 8 & 0xff],alu_sq);
  _alu_sq = uVar4 & 0xffff0000 | (uint)_alu_sq;
  *alu_psel_q = _alu_sq;
  uVar5 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b6 +
                                                                      (_alu_n >> 8 & 0xff) * 4) &
                                                            0xff) * 4 +
                                                            *(int *)(&alu_div_shl3_8_d +
                                                                    (_alu_r & 0xff) * 4)) >> 8 &
                                                  0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b6 +
                                                                     (_alu_n >> 8 & 0xff) * 4) &
                                                           0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b6 + (_alu_n >> 8 & 0xff) * 4) &
                                                 0xff) * 4 +
                                                 *(int *)(&alu_div_shl3_8_d + (_alu_r & 0xff) * 4)))
                        );
  _alu_r = uVar5 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b6 +
                                                                   (_alu_n >> 8 & 0xff) * 4) & 0xff)
                                                         * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                       (_alu_r & 0xff) * 4)) >> 8 &
                                               0xff) * 4 +
                                               *(int *)(&alu_div_shl3_8_d +
                                                       ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff) *
                                     4 + *(int *)(&alu_div_shl3_8_d +
                                                 ((_alu_r & 0xff0000) >> 0x10) * 4)) >> 8 & 0xff) *
                           4 + *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar4 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar4 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  uVar4 = *alu_psel_q;
  alu_sq = (undefined)uVar4;
  _alu_sq = CONCAT11((&alu_b_s_6)[uVar4 >> 8 & 0xff],alu_sq);
  _alu_sq = uVar4 & 0xffff0000 | (uint)_alu_sq;
  *alu_psel_q = _alu_sq;
  uVar5 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b5 +
                                                                      (_alu_n >> 8 & 0xff) * 4) &
                                                            0xff) * 4 +
                                                            *(int *)(&alu_div_shl3_8_d +
                                                                    (_alu_r & 0xff) * 4)) >> 8 &
                                                  0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b5 +
                                                                     (_alu_n >> 8 & 0xff) * 4) &
                                                           0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b5 + (_alu_n >> 8 & 0xff) * 4) &
                                                 0xff) * 4 +
                                                 *(int *)(&alu_div_shl3_8_d + (_alu_r & 0xff) * 4)))
                        );
  _alu_r = uVar5 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b5 +
                                                                   (_alu_n >> 8 & 0xff) * 4) & 0xff)
                                                         * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                       (_alu_r & 0xff) * 4)) >> 8 &
                                               0xff) * 4 +
                                               *(int *)(&alu_div_shl3_8_d +
                                                       ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff) *
                                     4 + *(int *)(&alu_div_shl3_8_d +
                                                 ((_alu_r & 0xff0000) >> 0x10) * 4)) >> 8 & 0xff) *
                           4 + *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar4 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar4 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  uVar4 = *alu_psel_q;
  alu_sq = (undefined)uVar4;
  _alu_sq = CONCAT11((&alu_b_s_5)[uVar4 >> 8 & 0xff],alu_sq);
  _alu_sq = uVar4 & 0xffff0000 | (uint)_alu_sq;
  *alu_psel_q = _alu_sq;
  uVar5 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b4 +
                                                                      (_alu_n >> 8 & 0xff) * 4) &
                                                            0xff) * 4 +
                                                            *(int *)(&alu_div_shl3_8_d +
                                                                    (_alu_r & 0xff) * 4)) >> 8 &
                                                  0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b4 +
                                                                     (_alu_n >> 8 & 0xff) * 4) &
                                                           0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b4 + (_alu_n >> 8 & 0xff) * 4) &
                                                 0xff) * 4 +
                                                 *(int *)(&alu_div_shl3_8_d + (_alu_r & 0xff) * 4)))
                        );
  _alu_r = uVar5 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b4 +
                                                                   (_alu_n >> 8 & 0xff) * 4) & 0xff)
                                                         * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                       (_alu_r & 0xff) * 4)) >> 8 &
                                               0xff) * 4 +
                                               *(int *)(&alu_div_shl3_8_d +
                                                       ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff) *
                                     4 + *(int *)(&alu_div_shl3_8_d +
                                                 ((_alu_r & 0xff0000) >> 0x10) * 4)) >> 8 & 0xff) *
                           4 + *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar4 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar4 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  uVar4 = *alu_psel_q;
  alu_sq = (undefined)uVar4;
  _alu_sq = CONCAT11((&alu_b_s_4)[uVar4 >> 8 & 0xff],alu_sq);
  _alu_sq = uVar4 & 0xffff0000 | (uint)_alu_sq;
  *alu_psel_q = _alu_sq;
  uVar5 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b3 +
                                                                      (_alu_n >> 8 & 0xff) * 4) &
                                                            0xff) * 4 +
                                                            *(int *)(&alu_div_shl3_8_d +
                                                                    (_alu_r & 0xff) * 4)) >> 8 &
                                                  0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b3 +
                                                                     (_alu_n >> 8 & 0xff) * 4) &
                                                           0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b3 + (_alu_n >> 8 & 0xff) * 4) &
                                                 0xff) * 4 +
                                                 *(int *)(&alu_div_shl3_8_d + (_alu_r & 0xff) * 4)))
                        );
  _alu_r = uVar5 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b3 +
                                                                   (_alu_n >> 8 & 0xff) * 4) & 0xff)
                                                         * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                       (_alu_r & 0xff) * 4)) >> 8 &
                                               0xff) * 4 +
                                               *(int *)(&alu_div_shl3_8_d +
                                                       ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff) *
                                     4 + *(int *)(&alu_div_shl3_8_d +
                                                 ((_alu_r & 0xff0000) >> 0x10) * 4)) >> 8 & 0xff) *
                           4 + *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar4 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar4 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  uVar4 = *alu_psel_q;
  alu_sq = (undefined)uVar4;
  _alu_sq = CONCAT11((&alu_b_s_3)[uVar4 >> 8 & 0xff],alu_sq);
  _alu_sq = uVar4 & 0xffff0000 | (uint)_alu_sq;
  *alu_psel_q = _alu_sq;
  uVar5 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b2 +
                                                                      (_alu_n >> 8 & 0xff) * 4) &
                                                            0xff) * 4 +
                                                            *(int *)(&alu_div_shl3_8_d +
                                                                    (_alu_r & 0xff) * 4)) >> 8 &
                                                  0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b2 +
                                                                     (_alu_n >> 8 & 0xff) * 4) &
                                                           0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b2 + (_alu_n >> 8 & 0xff) * 4) &
                                                 0xff) * 4 +
                                                 *(int *)(&alu_div_shl3_8_d + (_alu_r & 0xff) * 4)))
                        );
  _alu_r = uVar5 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b2 +
                                                                   (_alu_n >> 8 & 0xff) * 4) & 0xff)
                                                         * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                       (_alu_r & 0xff) * 4)) >> 8 &
                                               0xff) * 4 +
                                               *(int *)(&alu_div_shl3_8_d +
                                                       ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff) *
                                     4 + *(int *)(&alu_div_shl3_8_d +
                                                 ((_alu_r & 0xff0000) >> 0x10) * 4)) >> 8 & 0xff) *
                           4 + *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar4 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar4 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  uVar4 = *alu_psel_q;
  alu_sq = (undefined)uVar4;
  _alu_sq = CONCAT11((&alu_b_s_2)[uVar4 >> 8 & 0xff],alu_sq);
  _alu_sq = uVar4 & 0xffff0000 | (uint)_alu_sq;
  *alu_psel_q = _alu_sq;
  uVar5 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b1 +
                                                                      (_alu_n >> 8 & 0xff) * 4) &
                                                            0xff) * 4 +
                                                            *(int *)(&alu_div_shl3_8_d +
                                                                    (_alu_r & 0xff) * 4)) >> 8 &
                                                  0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b1 +
                                                                     (_alu_n >> 8 & 0xff) * 4) &
                                                           0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b1 + (_alu_n >> 8 & 0xff) * 4) &
                                                 0xff) * 4 +
                                                 *(int *)(&alu_div_shl3_8_d + (_alu_r & 0xff) * 4)))
                        );
  _alu_r = uVar5 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b1 +
                                                                   (_alu_n >> 8 & 0xff) * 4) & 0xff)
                                                         * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                       (_alu_r & 0xff) * 4)) >> 8 &
                                               0xff) * 4 +
                                               *(int *)(&alu_div_shl3_8_d +
                                                       ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff) *
                                     4 + *(int *)(&alu_div_shl3_8_d +
                                                 ((_alu_r & 0xff0000) >> 0x10) * 4)) >> 8 & 0xff) *
                           4 + *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar4 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar4 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  uVar4 = *alu_psel_q;
  alu_sq = (undefined)uVar4;
  _alu_sq = CONCAT11((&alu_b_s_1)[uVar4 >> 8 & 0xff],alu_sq);
  _alu_sq = uVar4 & 0xffff0000 | (uint)_alu_sq;
  *alu_psel_q = _alu_sq;
  uVar5 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b0 +
                                                                      (_alu_n >> 8 & 0xff) * 4) &
                                                            0xff) * 4 +
                                                            *(int *)(&alu_div_shl3_8_d +
                                                                    (_alu_r & 0xff) * 4)) >> 8 &
                                                  0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b0 +
                                                                     (_alu_n >> 8 & 0xff) * 4) &
                                                           0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b0 + (_alu_n >> 8 & 0xff) * 4) &
                                                 0xff) * 4 +
                                                 *(int *)(&alu_div_shl3_8_d + (_alu_r & 0xff) * 4)))
                        );
  _alu_r = uVar5 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b0 +
                                                                   (_alu_n >> 8 & 0xff) * 4) & 0xff)
                                                         * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                       (_alu_r & 0xff) * 4)) >> 8 &
                                               0xff) * 4 +
                                               *(int *)(&alu_div_shl3_8_d +
                                                       ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff) *
                                     4 + *(int *)(&alu_div_shl3_8_d +
                                                 ((_alu_r & 0xff0000) >> 0x10) * 4)) >> 8 & 0xff) *
                           4 + *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar4 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar4 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  uVar4 = *alu_psel_q;
  alu_sq = (undefined)uVar4;
  _alu_sq = CONCAT11((&alu_b_s_0)[uVar4 >> 8 & 0xff],alu_sq);
  _alu_sq = uVar4 & 0xffff0000 | (uint)_alu_sq;
  *alu_psel_q = _alu_sq;
  uVar5 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b7 + (_alu_n & 0xff) * 4
                                                                      ) & 0xff) * 4 +
                                                            *(int *)(&alu_div_shl3_8_d +
                                                                    (_alu_r & 0xff) * 4)) >> 8 &
                                                  0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b7 + (_alu_n & 0xff) * 4)
                                                           & 0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b7 + (_alu_n & 0xff) * 4) & 0xff) *
                                                 4 + *(int *)(&alu_div_shl3_8_d +
                                                             (_alu_r & 0xff) * 4))));
  _alu_r = uVar5 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b7 + (_alu_n & 0xff) * 4) &
                                                         0xff) * 4 +
                                                         *(int *)(&alu_div_shl3_8_d +
                                                                 (_alu_r & 0xff) * 4)) >> 8 & 0xff)
                                               * 4 + *(int *)(&alu_div_shl3_8_d +
                                                             ((_alu_r & 0xff00) >> 8) * 4)) >> 8 &
                                     0xff) * 4 +
                                     *(int *)(&alu_div_shl3_8_d + ((_alu_r & 0xff0000) >> 0x10) * 4)
                                     ) >> 8 & 0xff) * 4 +
                           *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar4 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar4 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  _alu_sq = *alu_psel_q & 0xffffff00 | (uint)(byte)(&alu_b_s_7)[*alu_psel_q & 0xff];
  *alu_psel_q = _alu_sq;
  uVar5 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b6 + (_alu_n & 0xff) * 4
                                                                      ) & 0xff) * 4 +
                                                            *(int *)(&alu_div_shl3_8_d +
                                                                    (_alu_r & 0xff) * 4)) >> 8 &
                                                  0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b6 + (_alu_n & 0xff) * 4)
                                                           & 0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b6 + (_alu_n & 0xff) * 4) & 0xff) *
                                                 4 + *(int *)(&alu_div_shl3_8_d +
                                                             (_alu_r & 0xff) * 4))));
  _alu_r = uVar5 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b6 + (_alu_n & 0xff) * 4) &
                                                         0xff) * 4 +
                                                         *(int *)(&alu_div_shl3_8_d +
                                                                 (_alu_r & 0xff) * 4)) >> 8 & 0xff)
                                               * 4 + *(int *)(&alu_div_shl3_8_d +
                                                             ((_alu_r & 0xff00) >> 8) * 4)) >> 8 &
                                     0xff) * 4 +
                                     *(int *)(&alu_div_shl3_8_d + ((_alu_r & 0xff0000) >> 0x10) * 4)
                                     ) >> 8 & 0xff) * 4 +
                           *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar4 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar4 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  _alu_sq = *alu_psel_q & 0xffffff00 | (uint)(byte)(&alu_b_s_6)[*alu_psel_q & 0xff];
  *alu_psel_q = _alu_sq;
  uVar5 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b5 + (_alu_n & 0xff) * 4
                                                                      ) & 0xff) * 4 +
                                                            *(int *)(&alu_div_shl3_8_d +
                                                                    (_alu_r & 0xff) * 4)) >> 8 &
                                                  0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b5 + (_alu_n & 0xff) * 4)
                                                           & 0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b5 + (_alu_n & 0xff) * 4) & 0xff) *
                                                 4 + *(int *)(&alu_div_shl3_8_d +
                                                             (_alu_r & 0xff) * 4))));
  _alu_r = uVar5 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b5 + (_alu_n & 0xff) * 4) &
                                                         0xff) * 4 +
                                                         *(int *)(&alu_div_shl3_8_d +
                                                                 (_alu_r & 0xff) * 4)) >> 8 & 0xff)
                                               * 4 + *(int *)(&alu_div_shl3_8_d +
                                                             ((_alu_r & 0xff00) >> 8) * 4)) >> 8 &
                                     0xff) * 4 +
                                     *(int *)(&alu_div_shl3_8_d + ((_alu_r & 0xff0000) >> 0x10) * 4)
                                     ) >> 8 & 0xff) * 4 +
                           *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar4 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar4 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  _alu_sq = *alu_psel_q & 0xffffff00 | (uint)(byte)(&alu_b_s_5)[*alu_psel_q & 0xff];
  *alu_psel_q = _alu_sq;
  uVar5 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b4 + (_alu_n & 0xff) * 4
                                                                      ) & 0xff) * 4 +
                                                            *(int *)(&alu_div_shl3_8_d +
                                                                    (_alu_r & 0xff) * 4)) >> 8 &
                                                  0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b4 + (_alu_n & 0xff) * 4)
                                                           & 0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b4 + (_alu_n & 0xff) * 4) & 0xff) *
                                                 4 + *(int *)(&alu_div_shl3_8_d +
                                                             (_alu_r & 0xff) * 4))));
  _alu_r = uVar5 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b4 + (_alu_n & 0xff) * 4) &
                                                         0xff) * 4 +
                                                         *(int *)(&alu_div_shl3_8_d +
                                                                 (_alu_r & 0xff) * 4)) >> 8 & 0xff)
                                               * 4 + *(int *)(&alu_div_shl3_8_d +
                                                             ((_alu_r & 0xff00) >> 8) * 4)) >> 8 &
                                     0xff) * 4 +
                                     *(int *)(&alu_div_shl3_8_d + ((_alu_r & 0xff0000) >> 0x10) * 4)
                                     ) >> 8 & 0xff) * 4 +
                           *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar4 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar4 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  _alu_sq = *alu_psel_q & 0xffffff00 | (uint)(byte)(&alu_b_s_4)[*alu_psel_q & 0xff];
  *alu_psel_q = _alu_sq;
  uVar5 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b3 + (_alu_n & 0xff) * 4
                                                                      ) & 0xff) * 4 +
                                                            *(int *)(&alu_div_shl3_8_d +
                                                                    (_alu_r & 0xff) * 4)) >> 8 &
                                                  0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b3 + (_alu_n & 0xff) * 4)
                                                           & 0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b3 + (_alu_n & 0xff) * 4) & 0xff) *
                                                 4 + *(int *)(&alu_div_shl3_8_d +
                                                             (_alu_r & 0xff) * 4))));
  _alu_r = uVar5 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b3 + (_alu_n & 0xff) * 4) &
                                                         0xff) * 4 +
                                                         *(int *)(&alu_div_shl3_8_d +
                                                                 (_alu_r & 0xff) * 4)) >> 8 & 0xff)
                                               * 4 + *(int *)(&alu_div_shl3_8_d +
                                                             ((_alu_r & 0xff00) >> 8) * 4)) >> 8 &
                                     0xff) * 4 +
                                     *(int *)(&alu_div_shl3_8_d + ((_alu_r & 0xff0000) >> 0x10) * 4)
                                     ) >> 8 & 0xff) * 4 +
                           *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar4 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar4 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  _alu_sq = *alu_psel_q & 0xffffff00 | (uint)(byte)(&alu_b_s_3)[*alu_psel_q & 0xff];
  *alu_psel_q = _alu_sq;
  uVar5 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b2 + (_alu_n & 0xff) * 4
                                                                      ) & 0xff) * 4 +
                                                            *(int *)(&alu_div_shl3_8_d +
                                                                    (_alu_r & 0xff) * 4)) >> 8 &
                                                  0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b2 + (_alu_n & 0xff) * 4)
                                                           & 0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b2 + (_alu_n & 0xff) * 4) & 0xff) *
                                                 4 + *(int *)(&alu_div_shl3_8_d +
                                                             (_alu_r & 0xff) * 4))));
  _alu_r = uVar5 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b2 + (_alu_n & 0xff) * 4) &
                                                         0xff) * 4 +
                                                         *(int *)(&alu_div_shl3_8_d +
                                                                 (_alu_r & 0xff) * 4)) >> 8 & 0xff)
                                               * 4 + *(int *)(&alu_div_shl3_8_d +
                                                             ((_alu_r & 0xff00) >> 8) * 4)) >> 8 &
                                     0xff) * 4 +
                                     *(int *)(&alu_div_shl3_8_d + ((_alu_r & 0xff0000) >> 0x10) * 4)
                                     ) >> 8 & 0xff) * 4 +
                           *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar4 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar4 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  _alu_sq = *alu_psel_q & 0xffffff00 | (uint)(byte)(&alu_b_s_2)[*alu_psel_q & 0xff];
  *alu_psel_q = _alu_sq;
  uVar5 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b1 + (_alu_n & 0xff) * 4
                                                                      ) & 0xff) * 4 +
                                                            *(int *)(&alu_div_shl3_8_d +
                                                                    (_alu_r & 0xff) * 4)) >> 8 &
                                                  0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b1 + (_alu_n & 0xff) * 4)
                                                           & 0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b1 + (_alu_n & 0xff) * 4) & 0xff) *
                                                 4 + *(int *)(&alu_div_shl3_8_d +
                                                             (_alu_r & 0xff) * 4))));
  _alu_r = uVar5 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b1 + (_alu_n & 0xff) * 4) &
                                                         0xff) * 4 +
                                                         *(int *)(&alu_div_shl3_8_d +
                                                                 (_alu_r & 0xff) * 4)) >> 8 & 0xff)
                                               * 4 + *(int *)(&alu_div_shl3_8_d +
                                                             ((_alu_r & 0xff00) >> 8) * 4)) >> 8 &
                                     0xff) * 4 +
                                     *(int *)(&alu_div_shl3_8_d + ((_alu_r & 0xff0000) >> 0x10) * 4)
                                     ) >> 8 & 0xff) * 4 +
                           *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar4 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar5 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar4 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  _alu_sq = *alu_psel_q & 0xffffff00 | (uint)(byte)(&alu_b_s_1)[*alu_psel_q & 0xff];
  *alu_psel_q = _alu_sq;
  uVar4 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b0 + (_alu_n & 0xff) * 4
                                                                      ) & 0xff) * 4 +
                                                            *(int *)(&alu_div_shl3_8_d +
                                                                    (_alu_r & 0xff) * 4)) >> 8 &
                                                  0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b0 + (_alu_n & 0xff) * 4)
                                                           & 0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b0 + (_alu_n & 0xff) * 4) & 0xff) *
                                                 4 + *(int *)(&alu_div_shl3_8_d +
                                                             (_alu_r & 0xff) * 4))));
  _alu_r = uVar4 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b0 + (_alu_n & 0xff) * 4) &
                                                         0xff) * 4 +
                                                         *(int *)(&alu_div_shl3_8_d +
                                                                 (_alu_r & 0xff) * 4)) >> 8 & 0xff)
                                               * 4 + *(int *)(&alu_div_shl3_8_d +
                                                             ((_alu_r & 0xff00) >> 8) * 4)) >> 8 &
                                     0xff) * 4 +
                                     *(int *)(&alu_div_shl3_8_d + ((_alu_r & 0xff0000) >> 0x10) * 4)
                                     ) >> 8 & 0xff) * 4 +
                           *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_r = (uint *)(&alu_sel_r)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  alu_sr = *(uint *)((&alu_add16)
                     [*(int *)((&alu_add16)[*alu_psel_r & 0xffff] +
                              (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) &
           0xffff | *(int *)((&alu_add16)
                             [*(int *)((&alu_add16)[*alu_psel_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[*alu_psel_r & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) << 0x10;
  *alu_psel_r = alu_sr;
  _alu_sq = *alu_psel_q & 0xffffff00 | (uint)(byte)(&alu_b_s_0)[*alu_psel_q & 0xff];
  *alu_psel_q = _alu_sq;
  *(uint *)(&sel_data)[alu_rs] =
       *(uint *)((&alu_add16)
                 [*(int *)(alu_add16 + (uint)*(ushort *)(&alu_inv16 + (_alu_r & 0xffff) * 2) * 4)] +
                4) & 0xffff |
       *(int *)((&alu_add16)
                [*(int *)(alu_add16 + (uint)*(ushort *)(&alu_inv16 + (_alu_r >> 0x10) * 2) * 4)] +
               (*(uint *)((&alu_add16)
                          [*(int *)(alu_add16 +
                                   (uint)*(ushort *)(&alu_inv16 + (_alu_r & 0xffff) * 2) * 4)] + 4)
               >> 0x10) * 4) << 0x10;
  R3 = (undefined *)_alu_r;
  R2 = 0;
  uVar4 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[_alu_r & 0xffff] + (uint)_alu_inv16 * 4)] + 4
                   );
  sf = sf & 0xffffff00;
  zf = zf & 0xffffff00 |
       (uint)(byte)(&alu_false)
                   [(byte)(&alu_true)
                          [(uint)(byte)(&alu_true)
                                       [(uint)(byte)(&alu_true)
                                                    [(uint)(byte)(&alu_true)[uVar4 & 0xff] +
                                                     (uVar4 >> 8 & 0xff)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                            (uint)_alu_inv16 * 4)] +
                                                  (uVar4 >> 0x10) * 4) & 0xff)] +
                           (*(uint *)((&alu_add16)
                                      [*(int *)((&alu_add16)[_alu_r >> 0x10] + (uint)_alu_inv16 * 4)
                                      ] + (uVar4 >> 0x10) * 4) >> 8 & 0xff)]];
  of = of & 0xffffff00;
  b0 = *(int *)((&and)[*(int *)(&alu_false + zf * 4)] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x8804f1c0;
  iVar3 = b0;
  puVar2 = (undefined4 *)(&sel_data)[b0];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  *(undefined **)(puVar2 + 3) = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = D0;
  puVar2[1] = DAT_08054064;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805406c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  R0 = 0;
  *(undefined4 *)(&sel_target)[on] = 0x88050155;
  iVar3 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  *(undefined **)(puVar2 + 3) = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = D0;
  puVar2[1] = DAT_08054064;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805406c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar3 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xc0]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xf1] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][4] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar3;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_085fd19c;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_085fd1a4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  iVar3 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x9a]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xf3] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][4] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar3;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_085fd19c;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_085fd1a4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(uint *)(&sel_data)[on] =
       *(uint *)(&alu_add16)[*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 4)] & 0xffff
       | *(int *)((&alu_add16)[*(int *)(&alu_add16)[*(uint *)(&sel_data)[on] >> 0x10]] +
                 (*(uint *)(&alu_add16)
                           [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 4)] >> 0x10)
                 * 4) << 0x10;
  iVar3 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x6f]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xf6] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][4] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar3;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_085fd19c;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_085fd1a4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  uVar4 = *(uint *)(&sel_data)[on];
  alu_x._1_1_ = (byte)(uVar4 >> 8);
  DAT_081fcfe2._0_1_ = (byte)(uVar4 >> 0x10);
  _alu_z0 = CONCAT12((&alu_mul_sum8l)
                     [(uint)(byte)(&alu_mul_sum8l)
                                  [(uint)(byte)(&alu_mul_mul8h)[alu_x._1_1_][uVar4 & 0xff] +
                                   (uint)(byte)(&alu_mul_sum8h)
                                               [(uint)(byte)(&alu_mul_sum8l)
                                                            [(uint)(byte)(&alu_mul_mul8h)
                                                                         [uVar4 & 0xff]
                                                                         [uVar4 & 0xff] +
                                                             (uint)(byte)(&alu_mul_sum8h)
                                                                         [(byte)(&alu_mul_mul8l)
                                                                                [uVar4 & 0xff]
                                                                                [uVar4 & 0xff]]] +
                                                (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                            [uVar4 & 0xff]]] +
                      (uint)(byte)(&alu_mul_mul8l)[(byte)DAT_081fcfe2][uVar4 & 0xff]],
                     CONCAT11((&alu_mul_sum8l)
                              [(uint)(byte)(&alu_mul_sum8l)
                                           [(uint)(byte)(&alu_mul_mul8h)[uVar4 & 0xff][uVar4 & 0xff]
                                            + (uint)(byte)(&alu_mul_sum8h)
                                                          [(byte)(&alu_mul_mul8l)[uVar4 & 0xff]
                                                                 [uVar4 & 0xff]]] +
                               (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_][uVar4 & 0xff]],
                              (&alu_mul_sum8l)[(byte)(&alu_mul_mul8l)[uVar4 & 0xff][uVar4 & 0xff]]))
  ;
  DAT_081fcfe2._1_1_ = (byte)(uVar4 >> 0x18);
  _alu_z0 = CONCAT13((&alu_mul_sum8l)
                     [(uint)(byte)(&alu_mul_sum8l)
                                  [(uint)(byte)(&alu_mul_mul8h)[(byte)DAT_081fcfe2][uVar4 & 0xff] +
                                   (uint)(byte)(&alu_mul_sum8h)
                                               [(uint)(byte)(&alu_mul_sum8l)
                                                            [(uint)(byte)(&alu_mul_mul8h)
                                                                         [alu_x._1_1_][uVar4 & 0xff]
                                                             + (uint)(byte)(&alu_mul_sum8h)
                                                                           [(uint)(byte)(&
                                                  alu_mul_sum8l)
                                                  [(uint)(byte)(&alu_mul_mul8h)[uVar4 & 0xff]
                                                               [uVar4 & 0xff] +
                                                   (uint)(byte)(&alu_mul_sum8h)
                                                               [(byte)(&alu_mul_mul8l)[uVar4 & 0xff]
                                                                      [uVar4 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [uVar4 & 0xff]]] +
                                                (uint)(byte)(&alu_mul_mul8l)[(byte)DAT_081fcfe2]
                                                            [uVar4 & 0xff]]] +
                      (uint)(byte)(&alu_mul_mul8l)[DAT_081fcfe2._1_1_][uVar4 & 0xff]],_alu_z0);
  _alu_z1 = (uint)CONCAT12((&alu_mul_sum8l)
                           [(uint)(byte)(&alu_mul_sum8l)
                                        [(uint)(byte)(&alu_mul_mul8h)[alu_x._1_1_][alu_x._1_1_] +
                                         (uint)(byte)(&alu_mul_sum8h)
                                                     [(uint)(byte)(&alu_mul_sum8l)
                                                                  [(uint)(byte)(&alu_mul_mul8h)
                                                                               [uVar4 & 0xff]
                                                                               [alu_x._1_1_] +
                                                                   (uint)(byte)(&alu_mul_sum8h)
                                                                               [(byte)(&
                                                  alu_mul_mul8l)[uVar4 & 0xff][alu_x._1_1_]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [alu_x._1_1_]]] +
                            (uint)(byte)(&alu_mul_mul8l)[(byte)DAT_081fcfe2][alu_x._1_1_]],
                           CONCAT11((&alu_mul_sum8l)
                                    [(uint)(byte)(&alu_mul_sum8l)
                                                 [(uint)(byte)(&alu_mul_mul8h)[uVar4 & 0xff]
                                                              [alu_x._1_1_] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar4 & 0xff]
                                                                     [alu_x._1_1_]]] +
                                     (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_][alu_x._1_1_]],
                                    (&alu_mul_sum8l)
                                    [(byte)(&alu_mul_mul8l)[uVar4 & 0xff][alu_x._1_1_]])) << 8;
  _alu_z2 = (uint)CONCAT11((&alu_mul_sum8l)
                           [(uint)(byte)(&alu_mul_sum8l)
                                        [(uint)(byte)(&alu_mul_mul8h)[uVar4 & 0xff]
                                                     [(byte)DAT_081fcfe2] +
                                         (uint)(byte)(&alu_mul_sum8h)
                                                     [(byte)(&alu_mul_mul8l)[uVar4 & 0xff]
                                                            [(byte)DAT_081fcfe2]]] +
                            (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_][(byte)DAT_081fcfe2]],
                           (&alu_mul_sum8l)
                           [(byte)(&alu_mul_mul8l)[uVar4 & 0xff][(byte)DAT_081fcfe2]]) << 0x10;
  _alu_z3 = (uint)(byte)(&alu_mul_sum8l)[(byte)(&alu_mul_mul8l)[uVar4 & 0xff][DAT_081fcfe2._1_1_]]
            << 0x18;
  uVar7 = CONCAT12((char)*(uint *)(&alu_mul_sums +
                                  *(int *)(&alu_mul_shl2 +
                                          *(int *)(&alu_mul_sums +
                                                  *(int *)(&alu_mul_shl2 +
                                                          *(int *)(&alu_mul_sums +
                                                                  *(int *)(&alu_mul_shl2 +
                                                                          (uint)(byte)(&
                                                  alu_mul_sum8l)
                                                  [(uint)(byte)(&alu_mul_sum8l)
                                                               [(uint)(byte)(&alu_mul_mul8h)
                                                                            [uVar4 & 0xff]
                                                                            [alu_x._1_1_] +
                                                                (uint)(byte)(&alu_mul_sum8h)
                                                                            [(byte)(&alu_mul_mul8l)
                                                                                   [uVar4 & 0xff]
                                                                                   [alu_x._1_1_]]] +
                                                   (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                               [alu_x._1_1_]] * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[alu_x._1_1_][uVar4 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(uint)(byte)(&alu_mul_sum8l)
                                                                           [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar4 & 0xff][uVar4 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar4 & 0xff]
                                                                     [uVar4 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [uVar4 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[(byte)DAT_081fcfe2]
                                                              [uVar4 & 0xff]] * 4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(byte)(&alu_mul_mul8l)
                                                                             [uVar4 & 0xff]
                                                                             [(byte)DAT_081fcfe2]] *
                                                          4)) * 4) +
                                  *(int *)(&alu_mul_shl2 +
                                          (*(uint *)(&alu_mul_sums +
                                                    *(int *)(&alu_mul_shl2 +
                                                            *(int *)(&alu_mul_sums +
                                                                    *(int *)(&alu_mul_shl2 +
                                                                            (uint)(byte)(&
                                                  alu_mul_sum8l)
                                                  [(byte)(&alu_mul_mul8l)[uVar4 & 0xff][alu_x._1_1_]
                                                  ] * 4) + *(int *)(&alu_mul_shl2 +
                                                                   (uint)(byte)(&alu_mul_sum8l)
                                                                               [(uint)(byte)(&
                                                  alu_mul_sum8l)
                                                  [(uint)(byte)(&alu_mul_mul8h)[uVar4 & 0xff]
                                                               [uVar4 & 0xff] +
                                                   (uint)(byte)(&alu_mul_sum8h)
                                                               [(byte)(&alu_mul_mul8l)[uVar4 & 0xff]
                                                                      [uVar4 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [uVar4 & 0xff]] * 4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (*(uint *)(&alu_mul_sums +
                                                                    _alu_mul_shl2 +
                                                                    *(int *)(&alu_mul_shl2 +
                                                                            ((uint)_alu_z0 & 0xff) *
                                                                            4)) >> 8 & 0xff) * 4))
                                           >> 8 & 0xff) * 4)),
                   CONCAT11((char)*(uint *)(&alu_mul_sums +
                                           *(int *)(&alu_mul_shl2 +
                                                   *(int *)(&alu_mul_sums +
                                                           *(int *)(&alu_mul_shl2 +
                                                                   (uint)(byte)(&alu_mul_sum8l)
                                                                               [(byte)(&
                                                  alu_mul_mul8l)[uVar4 & 0xff][alu_x._1_1_]] * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar4 & 0xff][uVar4 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar4 & 0xff]
                                                                     [uVar4 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [uVar4 & 0xff]] * 4)) * 4) +
                                           *(int *)(&alu_mul_shl2 +
                                                   (*(uint *)(&alu_mul_sums +
                                                             _alu_mul_shl2 +
                                                             *(int *)(&alu_mul_shl2 +
                                                                     ((uint)_alu_z0 & 0xff) * 4)) >>
                                                    8 & 0xff) * 4)),
                            (char)*(uint *)(&alu_mul_sums +
                                           _alu_mul_shl2 +
                                           *(int *)(&alu_mul_shl2 + ((uint)_alu_z0 & 0xff) * 4))));
  R3 = (undefined *)
       CONCAT13((char)*(uint *)(&alu_mul_sums +
                               *(int *)(&alu_mul_shl2 +
                                       *(int *)(&alu_mul_sums +
                                               *(int *)(&alu_mul_shl2 +
                                                       *(int *)(&alu_mul_sums +
                                                               *(int *)(&alu_mul_shl2 +
                                                                       *(int *)(&alu_mul_sums +
                                                                               *(int *)(&
                                                  alu_mul_shl2 +
                                                  (uint)(byte)(&alu_mul_sum8l)
                                                              [(uint)(byte)(&alu_mul_sum8l)
                                                                           [(uint)(byte)(&
                                                  alu_mul_mul8h)[alu_x._1_1_][alu_x._1_1_] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(uint)(byte)(&alu_mul_sum8l)
                                                                           [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar4 & 0xff][alu_x._1_1_] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar4 & 0xff]
                                                                     [alu_x._1_1_]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [alu_x._1_1_]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[(byte)DAT_081fcfe2]
                                                              [alu_x._1_1_]] * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[(byte)DAT_081fcfe2][uVar4 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(uint)(byte)(&alu_mul_sum8l)
                                                                           [(uint)(byte)(&
                                                  alu_mul_mul8h)[alu_x._1_1_][uVar4 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(uint)(byte)(&alu_mul_sum8l)
                                                                           [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar4 & 0xff][uVar4 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar4 & 0xff]
                                                                     [uVar4 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [uVar4 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[(byte)DAT_081fcfe2]
                                                              [uVar4 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[DAT_081fcfe2._1_1_]
                                                              [uVar4 & 0xff]] * 4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar4 & 0xff][(byte)DAT_081fcfe2] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar4 & 0xff]
                                                                     [(byte)DAT_081fcfe2]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [(byte)DAT_081fcfe2]] * 4)) * 4) +
                                               *(int *)(&alu_mul_shl2 +
                                                       (uint)(byte)(&alu_mul_sum8l)
                                                                   [(byte)(&alu_mul_mul8l)
                                                                          [uVar4 & 0xff]
                                                                          [DAT_081fcfe2._1_1_]] * 4)
                                               ) * 4) +
                               *(int *)(&alu_mul_shl2 +
                                       (*(uint *)(&alu_mul_sums +
                                                 *(int *)(&alu_mul_shl2 +
                                                         *(int *)(&alu_mul_sums +
                                                                 *(int *)(&alu_mul_shl2 +
                                                                         *(int *)(&alu_mul_sums +
                                                                                 *(int *)(&
                                                  alu_mul_shl2 +
                                                  (uint)(byte)(&alu_mul_sum8l)
                                                              [(uint)(byte)(&alu_mul_sum8l)
                                                                           [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar4 & 0xff][alu_x._1_1_] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar4 & 0xff]
                                                                     [alu_x._1_1_]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [alu_x._1_1_]] * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[alu_x._1_1_][uVar4 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(uint)(byte)(&alu_mul_sum8l)
                                                                           [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar4 & 0xff][uVar4 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar4 & 0xff]
                                                                     [uVar4 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [uVar4 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[(byte)DAT_081fcfe2]
                                                              [uVar4 & 0xff]] * 4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(byte)(&alu_mul_mul8l)
                                                                             [uVar4 & 0xff]
                                                                             [(byte)DAT_081fcfe2]] *
                                                          4)) * 4) +
                                                 *(int *)(&alu_mul_shl2 +
                                                         (*(uint *)(&alu_mul_sums +
                                                                   *(int *)(&alu_mul_shl2 +
                                                                           *(int *)(&alu_mul_sums +
                                                                                   *(int *)(&
                                                  alu_mul_shl2 +
                                                  (uint)(byte)(&alu_mul_sum8l)
                                                              [(byte)(&alu_mul_mul8l)[uVar4 & 0xff]
                                                                     [alu_x._1_1_]] * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar4 & 0xff][uVar4 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar4 & 0xff]
                                                                     [uVar4 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [uVar4 & 0xff]] * 4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (*(uint *)(&alu_mul_sums +
                                                                    _alu_mul_shl2 +
                                                                    *(int *)(&alu_mul_shl2 +
                                                                            ((uint)_alu_z0 & 0xff) *
                                                                            4)) >> 8 & 0xff) * 4))
                                                  >> 8 & 0xff) * 4)) >> 8 & 0xff) * 4)),uVar7);
  R2 = *(uint *)(&sel_data)[on];
  uVar5 = *(uint *)((&alu_add16)
                    [*(int *)((&alu_add16)[(uint)uVar7 & 0xffff] +
                             (uint)*(ushort *)(&alu_inv16 + (R2 & 0xffff) * 2) * 4)] + 4);
  alu_s._3_1_ = (byte)(*(uint *)((&alu_add16)
                                 [*(int *)((&alu_add16)[(uint)R3 >> 0x10] +
                                          (uint)*(ushort *)(&alu_inv16 + (R2 >> 0x10) * 2) * 4)] +
                                (uVar5 >> 0x10) * 4) >> 8);
  sf = sf & 0xffffff00 | *(uint *)(&alu_b7 + (uint)alu_s._3_1_ * 4) & 0xff;
  zf = zf & 0xffffff00 |
       (uint)(byte)(&alu_false)
                   [(byte)(&alu_true)
                          [(uint)(byte)(&alu_true)
                                       [(uint)(byte)(&alu_true)
                                                    [(uint)(byte)(&alu_true)[uVar5 & 0xff] +
                                                     (uVar5 >> 8 & 0xff)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[(uint)R3 >> 0x10] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 + (R2 >> 0x10) * 2) *
                                                            4)] + (uVar5 >> 0x10) * 4) & 0xff)] +
                           (uint)alu_s._3_1_]];
  of = of & 0xffffff00 |
       **(uint **)(*(int *)((&alu_cmp_of)
                            [*(uint *)(&alu_b7 +
                                      (*(uint *)(&alu_mul_sums +
                                                *(int *)(&alu_mul_shl2 +
                                                        *(int *)(&alu_mul_sums +
                                                                *(int *)(&alu_mul_shl2 +
                                                                        *(int *)(&alu_mul_sums +
                                                                                *(int *)(&
                                                  alu_mul_shl2 +
                                                  *(int *)(&alu_mul_sums +
                                                          *(int *)(&alu_mul_shl2 +
                                                                  (uint)(byte)(&alu_mul_sum8l)
                                                                              [(uint)(byte)(&
                                                  alu_mul_sum8l)
                                                  [(uint)(byte)(&alu_mul_mul8h)[alu_x._1_1_]
                                                               [alu_x._1_1_] +
                                                   (uint)(byte)(&alu_mul_sum8h)
                                                               [(uint)(byte)(&alu_mul_sum8l)
                                                                            [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar4 & 0xff][alu_x._1_1_] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar4 & 0xff]
                                                                     [alu_x._1_1_]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [alu_x._1_1_]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[(byte)DAT_081fcfe2]
                                                              [alu_x._1_1_]] * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[(byte)DAT_081fcfe2][uVar4 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(uint)(byte)(&alu_mul_sum8l)
                                                                           [(uint)(byte)(&
                                                  alu_mul_mul8h)[alu_x._1_1_][uVar4 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(uint)(byte)(&alu_mul_sum8l)
                                                                           [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar4 & 0xff][uVar4 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar4 & 0xff]
                                                                     [uVar4 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [uVar4 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[(byte)DAT_081fcfe2]
                                                              [uVar4 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[DAT_081fcfe2._1_1_]
                                                              [uVar4 & 0xff]] * 4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar4 & 0xff][(byte)DAT_081fcfe2] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar4 & 0xff]
                                                                     [(byte)DAT_081fcfe2]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [(byte)DAT_081fcfe2]] * 4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(byte)(&alu_mul_mul8l)
                                                                             [uVar4 & 0xff]
                                                                             [DAT_081fcfe2._1_1_]] *
                                                          4)) * 4) +
                                                *(int *)(&alu_mul_shl2 +
                                                        (*(uint *)(&alu_mul_sums +
                                                                  *(int *)(&alu_mul_shl2 +
                                                                          *(int *)(&alu_mul_sums +
                                                                                  *(int *)(&
                                                  alu_mul_shl2 +
                                                  *(int *)(&alu_mul_sums +
                                                          *(int *)(&alu_mul_shl2 +
                                                                  (uint)(byte)(&alu_mul_sum8l)
                                                                              [(uint)(byte)(&
                                                  alu_mul_sum8l)
                                                  [(uint)(byte)(&alu_mul_mul8h)[uVar4 & 0xff]
                                                               [alu_x._1_1_] +
                                                   (uint)(byte)(&alu_mul_sum8h)
                                                               [(byte)(&alu_mul_mul8l)[uVar4 & 0xff]
                                                                      [alu_x._1_1_]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [alu_x._1_1_]] * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[alu_x._1_1_][uVar4 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(uint)(byte)(&alu_mul_sum8l)
                                                                           [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar4 & 0xff][uVar4 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar4 & 0xff]
                                                                     [uVar4 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [uVar4 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[(byte)DAT_081fcfe2]
                                                              [uVar4 & 0xff]] * 4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(byte)(&alu_mul_mul8l)
                                                                             [uVar4 & 0xff]
                                                                             [(byte)DAT_081fcfe2]] *
                                                          4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (*(uint *)(&alu_mul_sums +
                                                                    *(int *)(&alu_mul_shl2 +
                                                                            *(int *)(&alu_mul_sums +
                                                                                    *(int *)(&
                                                  alu_mul_shl2 +
                                                  (uint)(byte)(&alu_mul_sum8l)
                                                              [(byte)(&alu_mul_mul8l)[uVar4 & 0xff]
                                                                     [alu_x._1_1_]] * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar4 & 0xff][uVar4 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar4 & 0xff]
                                                                     [uVar4 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [uVar4 & 0xff]] * 4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (*(uint *)(&alu_mul_sums +
                                                                    _alu_mul_shl2 +
                                                                    *(int *)(&alu_mul_shl2 +
                                                                            ((uint)_alu_z0 & 0xff) *
                                                                            4)) >> 8 & 0xff) * 4))
                                                  >> 8 & 0xff) * 4)) >> 8 & 0xff) * 4)) & 0xff) * 4)
                            ] + *(uint *)(&alu_b7 +
                                         (*(uint *)(&alu_b7 +
                                                   (*(uint *)(&alu_mul_sums +
                                                             *(int *)(&alu_mul_shl2 +
                                                                     *(int *)(&alu_mul_sums +
                                                                             *(int *)(&alu_mul_shl2
                                                                                     + *(int *)(&
                                                  alu_mul_sums +
                                                  *(int *)(&alu_mul_shl2 +
                                                          *(int *)(&alu_mul_sums +
                                                                  *(int *)(&alu_mul_shl2 +
                                                                          (uint)(byte)(&
                                                  alu_mul_sum8l)
                                                  [(uint)(byte)(&alu_mul_sum8l)
                                                               [(uint)(byte)(&alu_mul_mul8h)
                                                                            [alu_x._1_1_]
                                                                            [alu_x._1_1_] +
                                                                (uint)(byte)(&alu_mul_sum8h)
                                                                            [(uint)(byte)(&
                                                  alu_mul_sum8l)
                                                  [(uint)(byte)(&alu_mul_mul8h)[uVar4 & 0xff]
                                                               [alu_x._1_1_] +
                                                   (uint)(byte)(&alu_mul_sum8h)
                                                               [(byte)(&alu_mul_mul8l)[uVar4 & 0xff]
                                                                      [alu_x._1_1_]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [alu_x._1_1_]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[(byte)DAT_081fcfe2]
                                                              [alu_x._1_1_]] * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[(byte)DAT_081fcfe2][uVar4 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(uint)(byte)(&alu_mul_sum8l)
                                                                           [(uint)(byte)(&
                                                  alu_mul_mul8h)[alu_x._1_1_][uVar4 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(uint)(byte)(&alu_mul_sum8l)
                                                                           [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar4 & 0xff][uVar4 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar4 & 0xff]
                                                                     [uVar4 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [uVar4 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[(byte)DAT_081fcfe2]
                                                              [uVar4 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[DAT_081fcfe2._1_1_]
                                                              [uVar4 & 0xff]] * 4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar4 & 0xff][(byte)DAT_081fcfe2] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar4 & 0xff]
                                                                     [(byte)DAT_081fcfe2]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [(byte)DAT_081fcfe2]] * 4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(byte)(&alu_mul_mul8l)
                                                                             [uVar4 & 0xff]
                                                                             [DAT_081fcfe2._1_1_]] *
                                                          4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (*(uint *)(&alu_mul_sums +
                                                                    *(int *)(&alu_mul_shl2 +
                                                                            *(int *)(&alu_mul_sums +
                                                                                    *(int *)(&
                                                  alu_mul_shl2 +
                                                  *(int *)(&alu_mul_sums +
                                                          *(int *)(&alu_mul_shl2 +
                                                                  (uint)(byte)(&alu_mul_sum8l)
                                                                              [(uint)(byte)(&
                                                  alu_mul_sum8l)
                                                  [(uint)(byte)(&alu_mul_mul8h)[uVar4 & 0xff]
                                                               [alu_x._1_1_] +
                                                   (uint)(byte)(&alu_mul_sum8h)
                                                               [(byte)(&alu_mul_mul8l)[uVar4 & 0xff]
                                                                      [alu_x._1_1_]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [alu_x._1_1_]] * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[alu_x._1_1_][uVar4 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(uint)(byte)(&alu_mul_sum8l)
                                                                           [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar4 & 0xff][uVar4 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar4 & 0xff]
                                                                     [uVar4 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [uVar4 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[(byte)DAT_081fcfe2]
                                                              [uVar4 & 0xff]] * 4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(byte)(&alu_mul_mul8l)
                                                                             [uVar4 & 0xff]
                                                                             [(byte)DAT_081fcfe2]] *
                                                          4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (*(uint *)(&alu_mul_sums +
                                                                    *(int *)(&alu_mul_shl2 +
                                                                            *(int *)(&alu_mul_sums +
                                                                                    *(int *)(&
                                                  alu_mul_shl2 +
                                                  (uint)(byte)(&alu_mul_sum8l)
                                                              [(byte)(&alu_mul_mul8l)[uVar4 & 0xff]
                                                                     [alu_x._1_1_]] * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar4 & 0xff][uVar4 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar4 & 0xff]
                                                                     [uVar4 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [uVar4 & 0xff]] * 4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (*(uint *)(&alu_mul_sums +
                                                                    _alu_mul_shl2 +
                                                                    *(int *)(&alu_mul_shl2 +
                                                                            ((uint)_alu_z0 & 0xff) *
                                                                            4)) >> 8 & 0xff) * 4))
                                                  >> 8 & 0xff) * 4)) >> 8 & 0xff) * 4)) & 0xff) * 4)
                                          & 0xffffff00 | R2 >> 0x18) * 4) * 4) +
                  *(int *)(&alu_b7 +
                          (*(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 +
                                              (*(uint *)(&alu_mul_sums +
                                                        *(int *)(&alu_mul_shl2 +
                                                                *(int *)(&alu_mul_sums +
                                                                        *(int *)(&alu_mul_shl2 +
                                                                                *(int *)(&
                                                  alu_mul_sums +
                                                  *(int *)(&alu_mul_shl2 +
                                                          *(int *)(&alu_mul_sums +
                                                                  *(int *)(&alu_mul_shl2 +
                                                                          (uint)(byte)(&
                                                  alu_mul_sum8l)
                                                  [(uint)(byte)(&alu_mul_sum8l)
                                                               [(uint)(byte)(&alu_mul_mul8h)
                                                                            [alu_x._1_1_]
                                                                            [alu_x._1_1_] +
                                                                (uint)(byte)(&alu_mul_sum8h)
                                                                            [(uint)(byte)(&
                                                  alu_mul_sum8l)
                                                  [(uint)(byte)(&alu_mul_mul8h)[uVar4 & 0xff]
                                                               [alu_x._1_1_] +
                                                   (uint)(byte)(&alu_mul_sum8h)
                                                               [(byte)(&alu_mul_mul8l)[uVar4 & 0xff]
                                                                      [alu_x._1_1_]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [alu_x._1_1_]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[(byte)DAT_081fcfe2]
                                                              [alu_x._1_1_]] * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[(byte)DAT_081fcfe2][uVar4 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(uint)(byte)(&alu_mul_sum8l)
                                                                           [(uint)(byte)(&
                                                  alu_mul_mul8h)[alu_x._1_1_][uVar4 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(uint)(byte)(&alu_mul_sum8l)
                                                                           [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar4 & 0xff][uVar4 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar4 & 0xff]
                                                                     [uVar4 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [uVar4 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[(byte)DAT_081fcfe2]
                                                              [uVar4 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[DAT_081fcfe2._1_1_]
                                                              [uVar4 & 0xff]] * 4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar4 & 0xff][(byte)DAT_081fcfe2] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar4 & 0xff]
                                                                     [(byte)DAT_081fcfe2]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [(byte)DAT_081fcfe2]] * 4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(byte)(&alu_mul_mul8l)
                                                                             [uVar4 & 0xff]
                                                                             [DAT_081fcfe2._1_1_]] *
                                                          4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (*(uint *)(&alu_mul_sums +
                                                                    *(int *)(&alu_mul_shl2 +
                                                                            *(int *)(&alu_mul_sums +
                                                                                    *(int *)(&
                                                  alu_mul_shl2 +
                                                  *(int *)(&alu_mul_sums +
                                                          *(int *)(&alu_mul_shl2 +
                                                                  (uint)(byte)(&alu_mul_sum8l)
                                                                              [(uint)(byte)(&
                                                  alu_mul_sum8l)
                                                  [(uint)(byte)(&alu_mul_mul8h)[uVar4 & 0xff]
                                                               [alu_x._1_1_] +
                                                   (uint)(byte)(&alu_mul_sum8h)
                                                               [(byte)(&alu_mul_mul8l)[uVar4 & 0xff]
                                                                      [alu_x._1_1_]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [alu_x._1_1_]] * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[alu_x._1_1_][uVar4 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(uint)(byte)(&alu_mul_sum8l)
                                                                           [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar4 & 0xff][uVar4 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar4 & 0xff]
                                                                     [uVar4 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [uVar4 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[(byte)DAT_081fcfe2]
                                                              [uVar4 & 0xff]] * 4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(byte)(&alu_mul_mul8l)
                                                                             [uVar4 & 0xff]
                                                                             [(byte)DAT_081fcfe2]] *
                                                          4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (*(uint *)(&alu_mul_sums +
                                                                    *(int *)(&alu_mul_shl2 +
                                                                            *(int *)(&alu_mul_sums +
                                                                                    *(int *)(&
                                                  alu_mul_shl2 +
                                                  (uint)(byte)(&alu_mul_sum8l)
                                                              [(byte)(&alu_mul_mul8l)[uVar4 & 0xff]
                                                                     [alu_x._1_1_]] * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar4 & 0xff][uVar4 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar4 & 0xff]
                                                                     [uVar4 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [uVar4 & 0xff]] * 4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (*(uint *)(&alu_mul_sums +
                                                                    _alu_mul_shl2 +
                                                                    *(int *)(&alu_mul_shl2 +
                                                                            ((uint)_alu_z0 & 0xff) *
                                                                            4)) >> 8 & 0xff) * 4))
                                                  >> 8 & 0xff) * 4)) >> 8 & 0xff) * 4)) & 0xff) * 4)
                                     & 0xffffff00 | R2 >> 0x18) * 4) & 0xffffff00 |
                          (uint)alu_s._3_1_) * 4) * 4) & 0xff;
  b0 = *(int *)((&and)[*(int *)((&or)[*(int *)((&xor)[sf] + of * 4)] + zf * 4)] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x88049702;
  iVar3 = b0;
  puVar2 = (undefined4 *)(&sel_data)[b0];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  *(undefined **)(puVar2 + 3) = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = D0;
  puVar2[1] = DAT_08054064;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805406c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  R0 = 1;
  iVar3 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x55]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][1] * 4)]
                                  + (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar3;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_085fd19c;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_085fd1a4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined **)(&sel_data)[on] = fp;
  stack_temp = *(char **)sp;
  DAT_081fd104 = *(undefined4 *)(sp + 4);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&pop + *(int *)(sp + -0x200060));
  puVar2 = (undefined4 *)(&sel_data)[on];
  *(char **)puVar2 = stack_temp;
  puVar2[1] = DAT_081fd104;
  stack_temp = *(char **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = *(char **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = *(char **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = *(char **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = *(char **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = *(char **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(char **)(&sel_target)[on] = stack_temp;
  iVar3 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  *(undefined **)(puVar2 + 3) = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = D0;
  puVar2[1] = DAT_08054064;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805406c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar3 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x41]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][6] * 4)]
                                  + (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar3;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_085fd19c;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_085fd1a4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = fp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = (char *)R1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = (char *)R2;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = (char *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = (char *)D1;
  DAT_081fd104 = DAT_0805406c;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&push + *(int *)(sp + -0x200068));
  puVar2 = (undefined4 *)(&sel_data)[on];
  *(char **)puVar2 = stack_temp;
  puVar2[1] = DAT_081fd104;
  *(undefined **)(&sel_data)[on] = sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  stack_temp = s_primes__1_100000__08054026;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = (char *)(*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_2992_0806ade0] & 0xffff |
                       *(int *)((&alu_add16)[*(int *)(PTR_alu_add16_34821_08089f34 + 0x20000)] +
                               (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_2992_0806ade0] >> 0x10)
                               * 4) << 0x10);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  R0 = *(uint *)(&fault)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 *)(&sel_data)[on] = 1;
  iVar3 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x4d]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xc] * 4
                                                  )] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar3;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_085fd19c;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_085fd1a4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R3 = *(undefined **)(&sel_data)[on];
  stack_temp = R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = (char *)0x88050fb5;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88048764;
  iVar3 = on;
  puVar6 = (uint *)(&sel_data)[on];
  *puVar6 = R0;
  puVar6[1] = R1;
  puVar6[2] = R2;
  *(undefined **)(puVar6 + 3) = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = D0;
  puVar2[1] = DAT_08054064;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805406c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar3 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xb5]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xf] * 4
                                                  )] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar3;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_085fd19c;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_085fd1a4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  R3 = (undefined *)R0;
  R2 = 0;
  uVar4 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[R0 & 0xffff] + (uint)_alu_inv16 * 4)] + 4);
  sf = sf & 0xffffff00;
  zf = zf & 0xffffff00 |
       (uint)(byte)(&alu_false)
                   [(byte)(&alu_true)
                          [(uint)(byte)(&alu_true)
                                       [(uint)(byte)(&alu_true)
                                                    [(uint)(byte)(&alu_true)[uVar4 & 0xff] +
                                                     (uVar4 >> 8 & 0xff)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[R0 >> 0x10] +
                                                            (uint)_alu_inv16 * 4)] +
                                                  (uVar4 >> 0x10) * 4) & 0xff)] +
                           (*(uint *)((&alu_add16)
                                      [*(int *)((&alu_add16)[R0 >> 0x10] + (uint)_alu_inv16 * 4)] +
                                     (uVar4 >> 0x10) * 4) >> 8 & 0xff)]];
  of = of & 0xffffff00;
  b0 = *(int *)((&and)[zf] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x88051654;
  iVar3 = b0;
  puVar6 = (uint *)(&sel_data)[b0];
  *puVar6 = R0;
  puVar6[1] = R1;
  puVar6[2] = R2;
  *(undefined **)(puVar6 + 3) = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = D0;
  puVar2[1] = DAT_08054064;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805406c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  stack_temp = *(char **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = &DAT_08054022;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = (char *)(*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_5600_0806d6a0] & 0xffff |
                       *(int *)((&alu_add16)[*(int *)(PTR_alu_add16_34821_08089f34 + 0x20000)] +
                               (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_5600_0806d6a0] >> 0x10)
                               * 4) << 0x10);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  R0 = *(uint *)(&fault)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&pop + *(int *)(sp + -0x200060));
  iVar3 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x54]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x16] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar3;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_085fd19c;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_085fd1a4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  iVar3 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x2e]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x18] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar3;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_085fd19c;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_085fd1a4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(uint *)(&sel_data)[on] =
       *(uint *)(&alu_add16)[*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 4)] & 0xffff
       | *(int *)((&alu_add16)[*(int *)(&alu_add16)[*(uint *)(&sel_data)[on] >> 0x10]] +
                 (*(uint *)(&alu_add16)
                           [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 4)] >> 0x10)
                 * 4) << 0x10;
  R3 = *(undefined **)(&sel_data)[on];
  R2 = 10000;
  alu_t = 10000;
  uVar4 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)R3 & 0xffff] + (uint)uRam0816ce60 * 4)]
                   + 4);
  uVar5 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)R3 >> 0x10] + (uint)_alu_inv16 * 4)] +
                   (uVar4 >> 0x10) * 4);
  _DAT_081fcfee = (undefined2)uVar5;
  cf = (&alu_false)[uVar5 >> 0x10 & 0xff];
  alu_s._3_1_ = (byte)(uVar5 >> 8);
  sf = sf & 0xffffff00 | *(uint *)(&alu_b7 + (uint)alu_s._3_1_ * 4) & 0xff;
  zf = zf & 0xffffff00 |
       (uint)(byte)(&alu_false)
                   [(byte)(&alu_true)
                          [(uint)(byte)(&alu_true)
                                       [(uint)(byte)(&alu_true)
                                                    [(uint)(byte)(&alu_true)[uVar4 & 0xff] +
                                                     (uVar4 >> 8 & 0xff)] + (uVar5 & 0xff)] +
                           (uint)alu_s._3_1_]];
  of = of & 0xffffff00 |
       **(uint **)(*(int *)((&alu_cmp_of)[*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4)] +
                           *(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4) & 0xffffff00) * 4)
                           * 4) +
                  *(int *)(&alu_b7 +
                          (*(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4) & 0xffffff00) * 4)
                           & 0xffffff00 | (uint)alu_s._3_1_) * 4) * 4) & 0xff;
  b0 = *(int *)((&and)[*(int *)((&xor)[sf] + of * 4)] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x88050c4d;
  iVar3 = b0;
  puVar2 = (undefined4 *)(&sel_data)[b0];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  *(undefined **)(puVar2 + 3) = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = D0;
  puVar2[1] = DAT_08054064;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805406c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  R3 = &DAT_08054020;
  stack_temp = &DAT_08054020;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  iVar3 = *(int *)((&alu_add16)[*(int *)(PTR_alu_add16_34821_08089f34 + 0x20000)] +
                  (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_7909_0806fab4] >> 0x10) * 4);
  alu_s = *(uint *)(&alu_add16)[*(int *)PTR_alu_add16_7909_0806fab4] & 0xffff | iVar3 << 0x10;
  alu_c = (undefined)iVar3;
  uRam081fcff1 = (undefined)((uint)iVar3 >> 8);
  DAT_081fcff2 = (undefined2)((uint)iVar3 >> 0x10);
  stack_temp = (char *)alu_s;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  _external = printf;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  R0 = 0;
  _alu_x = target;
  _alu_y = 0x88051f5d;
  b1 = (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x1f];
  b2 = (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5];
  b3 = (uint)(byte)(&alu_eq)[target >> 0x18][0x88];
  iVar3 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x5d]] +
                                                  b1 * 4)] + b2 * 4)] + b3 * 4);
  b0 = iVar3;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_085fd19c;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_085fd1a4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined **)(&sel_data)[on] = fp;
  stack_temp = *(char **)sp;
  DAT_081fd104 = *(undefined4 *)(sp + 4);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&pop + *(int *)(sp + -0x200060));
  puVar2 = (undefined4 *)(&sel_data)[on];
  *(char **)puVar2 = stack_temp;
  puVar2[1] = DAT_081fd104;
  stack_temp = *(char **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = *(char **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = *(char **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = *(char **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = *(char **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = *(char **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  branch_temp = stack_temp;
  *(char **)(&sel_target)[on] = stack_temp;
  iVar3 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  *(undefined **)(puVar2 + 3) = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = F0;
  puVar2[1] = F1;
  data_p = &jmp_d0;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = D0;
  puVar2[1] = DAT_08054064;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805406c;
  *(undefined4 *)(&sel_on)[on] = 0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _start0(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint3 uVar6;
  
  *(undefined4 *)(&sel_on)[toggle_execution] = 1;
  toggle_execution = 0;
  stack_temp = (char *)(*(uint *)(&alu_add16)[*(int *)((&alu_add16)[(uint)sesp & 0xffff] + 0x10)] &
                        0xffff | *(int *)((&alu_add16)[*(int *)(&alu_add16)[(uint)sesp >> 0x10]] +
                                         (*(uint *)(&alu_add16)
                                                   [*(int *)((&alu_add16)[(uint)sesp & 0xffff] +
                                                            0x10)] >> 0x10) * 4) << 0x10);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = (char *)*sesp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = (char *)0x8804851e;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88050641;
  iVar2 = on;
  puVar1 = (undefined4 *)(&sel_data)[on];
  *puVar1 = R0;
  puVar1[1] = R1;
  puVar1[2] = R2;
  *(undefined **)(puVar1 + 3) = R3;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = F0;
  puVar1[1] = F1;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = D0;
  puVar1[1] = DAT_08054064;
  puVar1[2] = D1;
  puVar1[3] = DAT_0805406c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar2 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x1e]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x85] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][4] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar2;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_f1;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d0;
  puVar1[1] = DAT_085fd19c;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d1;
  puVar1[1] = DAT_085fd1a4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = (char *)0x0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  iVar2 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][100]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x87] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][4] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar2;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_f1;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d0;
  puVar1[1] = DAT_085fd19c;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d1;
  puVar1[1] = DAT_085fd1a4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = fp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = (char *)R1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = (char *)R2;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = (char *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = (char *)D1;
  DAT_081fd104 = DAT_0805406c;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&push + *(int *)(sp + -0x200068));
  puVar1 = (undefined4 *)(&sel_data)[on];
  *(char **)puVar1 = stack_temp;
  puVar1[1] = DAT_081fd104;
  *(undefined **)(&sel_data)[on] = sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  R3 = *(undefined **)(&sel_data)[on];
  R2 = 1;
  uVar3 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)R3 & 0xffff] + (uint)uRam08168042 * 4)]
                   + 4);
  sf = sf & 0xffffff00;
  zf = zf & 0xffffff00 |
       (uint)(byte)(&alu_false)
                   [(byte)(&alu_true)
                          [(uint)(byte)(&alu_true)
                                       [(uint)(byte)(&alu_true)
                                                    [(uint)(byte)(&alu_true)[uVar3 & 0xff] +
                                                     (uVar3 >> 8 & 0xff)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[(uint)R3 >> 0x10] +
                                                            (uint)_alu_inv16 * 4)] +
                                                  (uVar3 >> 0x10) * 4) & 0xff)] +
                           (*(uint *)((&alu_add16)
                                      [*(int *)((&alu_add16)[(uint)R3 >> 0x10] +
                                               (uint)_alu_inv16 * 4)] + (uVar3 >> 0x10) * 4) >> 8 &
                           0xff)]];
  of = of & 0xffffff00;
  b0 = *(int *)((&and)[*(int *)(&alu_false + zf * 4)] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x88048eec;
  iVar2 = b0;
  puVar1 = (undefined4 *)(&sel_data)[b0];
  *puVar1 = R0;
  puVar1[1] = R1;
  puVar1[2] = R2;
  *(undefined **)(puVar1 + 3) = R3;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = F0;
  puVar1[1] = F1;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = D0;
  puVar1[1] = DAT_08054064;
  puVar1[2] = D1;
  puVar1[3] = DAT_0805406c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  R0 = 0;
  *(undefined4 *)(&sel_target)[on] = 0x88050155;
  iVar2 = on;
  puVar1 = (undefined4 *)(&sel_data)[on];
  *puVar1 = R0;
  puVar1[1] = R1;
  puVar1[2] = R2;
  *(undefined **)(puVar1 + 3) = R3;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = F0;
  puVar1[1] = F1;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = D0;
  puVar1[1] = DAT_08054064;
  puVar1[2] = D1;
  puVar1[3] = DAT_0805406c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar2 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xec]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x8e] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][4] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar2;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_f1;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d0;
  puVar1[1] = DAT_085fd19c;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d1;
  puVar1[1] = DAT_085fd1a4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R3 = *(undefined **)(&sel_data)[on];
  R2 = 2;
  uVar3 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)R3 & 0xffff] + (uint)uRam08168044 * 4)]
                   + 4);
  sf = sf & 0xffffff00;
  zf = zf & 0xffffff00 |
       (uint)(byte)(&alu_false)
                   [(byte)(&alu_true)
                          [(uint)(byte)(&alu_true)
                                       [(uint)(byte)(&alu_true)
                                                    [(uint)(byte)(&alu_true)[uVar3 & 0xff] +
                                                     (uVar3 >> 8 & 0xff)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[(uint)R3 >> 0x10] +
                                                            (uint)_alu_inv16 * 4)] +
                                                  (uVar3 >> 0x10) * 4) & 0xff)] +
                           (*(uint *)((&alu_add16)
                                      [*(int *)((&alu_add16)[(uint)R3 >> 0x10] +
                                               (uint)_alu_inv16 * 4)] + (uVar3 >> 0x10) * 4) >> 8 &
                           0xff)]];
  of = of & 0xffffff00;
  b0 = *(int *)((&and)[*(int *)(&alu_false + zf * 4)] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x88049439;
  iVar2 = b0;
  puVar1 = (undefined4 *)(&sel_data)[b0];
  *puVar1 = R0;
  puVar1[1] = R1;
  puVar1[2] = R2;
  *(undefined **)(puVar1 + 3) = R3;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = F0;
  puVar1[1] = F1;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = D0;
  puVar1[1] = DAT_08054064;
  puVar1[2] = D1;
  puVar1[3] = DAT_0805406c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  R0 = 1;
  *(undefined4 *)(&sel_target)[on] = 0x88050155;
  iVar2 = on;
  puVar1 = (undefined4 *)(&sel_data)[on];
  *puVar1 = R0;
  puVar1[1] = R1;
  puVar1[2] = R2;
  *(undefined **)(puVar1 + 3) = R3;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = F0;
  puVar1[1] = F1;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = D0;
  puVar1[1] = DAT_08054064;
  puVar1[2] = D1;
  puVar1[3] = DAT_0805406c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar2 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x39]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x94] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][4] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar2;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_f1;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d0;
  puVar1[1] = DAT_085fd19c;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d1;
  puVar1[1] = DAT_085fd1a4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R3 = (undefined *)0x2;
  *(undefined4 *)(&sel_data)[on] = 2;
  *(undefined4 *)(&sel_target)[on] = 0x8804f66f;
  iVar2 = on;
  puVar1 = (undefined4 *)(&sel_data)[on];
  *puVar1 = R0;
  puVar1[1] = R1;
  puVar1[2] = R2;
  *(undefined **)(puVar1 + 3) = R3;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = F0;
  puVar1[1] = F1;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = D0;
  puVar1[1] = DAT_08054064;
  puVar1[2] = D1;
  puVar1[3] = DAT_0805406c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar2 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][2]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x97] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][4] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar2;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_f1;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d0;
  puVar1[1] = DAT_085fd19c;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d1;
  puVar1[1] = DAT_085fd1a4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  _alu_n = *(uint *)(&sel_data)[on];
  _alu_d = *(uint *)(&sel_data)[on];
  alu_ns = *(int *)(&alu_b7 + (_alu_n >> 0x18) * 4);
  alu_ds = *(int *)(&alu_b7 + (_alu_d >> 0x18) * 4);
  alu_rs = alu_ns;
  *(uint *)(&sel_data)[alu_ns] =
       *(uint *)((&alu_add16)
                 [*(int *)(alu_add16 + (uint)*(ushort *)(&alu_inv16 + (_alu_n & 0xffff) * 2) * 4)] +
                4) & 0xffff |
       *(int *)((&alu_add16)
                [*(int *)(alu_add16 + (uint)*(ushort *)(&alu_inv16 + (_alu_n >> 0x10) * 2) * 4)] +
               (*(uint *)((&alu_add16)
                          [*(int *)(alu_add16 +
                                   (uint)*(ushort *)(&alu_inv16 + (_alu_n & 0xffff) * 2) * 4)] + 4)
               >> 0x10) * 4) << 0x10;
  *(uint *)(&sel_data)[alu_ds] =
       *(uint *)((&alu_add16)
                 [*(int *)(alu_add16 + (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                4) & 0xffff |
       *(int *)((&alu_add16)
                [*(int *)(alu_add16 + (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
               (*(uint *)((&alu_add16)
                          [*(int *)(alu_add16 +
                                   (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4)
               >> 0x10) * 4) << 0x10;
  _alu_q = 0;
  uVar4 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b7 +
                                                                      (_alu_n >> 0x18) * 4) & 0xff)
                                                            * 4 + _alu_div_shl3_8_d) >> 8 & 0xff) *
                                                  4 + _alu_div_shl3_8_d) >> 8 & 0xff) * 4 +
                                        _alu_div_shl3_8_d),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b7 + (_alu_n >> 0x18) * 4
                                                                     ) & 0xff) * 4 +
                                                           _alu_div_shl3_8_d) >> 8 & 0xff) * 4 +
                                                 _alu_div_shl3_8_d),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b7 + (_alu_n >> 0x18) * 4) & 0xff)
                                                 * 4 + _alu_div_shl3_8_d)));
  _alu_r = uVar4 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b7 + (_alu_n >> 0x18) * 4)
                                                         & 0xff) * 4 + _alu_div_shl3_8_d) >> 8 &
                                               0xff) * 4 + _alu_div_shl3_8_d) >> 8 & 0xff) * 4 +
                                     _alu_div_shl3_8_d) >> 8 & 0xff) * 4 + _alu_div_shl3_8_d) <<
                   0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar3 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar3 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  _alu_sq = *alu_psel_q & 0xffffff | (uint)(byte)(&alu_b_s_7)[*alu_psel_q >> 0x18] << 0x18;
  *alu_psel_q = _alu_sq;
  uVar4 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b6 +
                                                                      (_alu_n >> 0x18) * 4) & 0xff)
                                                            * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                          (_alu_r & 0xff) * 4)) >> 8
                                                  & 0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b6 + (_alu_n >> 0x18) * 4
                                                                     ) & 0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b6 + (_alu_n >> 0x18) * 4) & 0xff)
                                                 * 4 + *(int *)(&alu_div_shl3_8_d +
                                                               (_alu_r & 0xff) * 4))));
  _alu_r = uVar4 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b6 + (_alu_n >> 0x18) * 4)
                                                         & 0xff) * 4 +
                                                         *(int *)(&alu_div_shl3_8_d +
                                                                 (_alu_r & 0xff) * 4)) >> 8 & 0xff)
                                               * 4 + *(int *)(&alu_div_shl3_8_d +
                                                             ((_alu_r & 0xff00) >> 8) * 4)) >> 8 &
                                     0xff) * 4 +
                                     *(int *)(&alu_div_shl3_8_d + ((_alu_r & 0xff0000) >> 0x10) * 4)
                                     ) >> 8 & 0xff) * 4 +
                           *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar3 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar3 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  _alu_sq = *alu_psel_q & 0xffffff | (uint)(byte)(&alu_b_s_6)[*alu_psel_q >> 0x18] << 0x18;
  *alu_psel_q = _alu_sq;
  uVar4 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b5 +
                                                                      (_alu_n >> 0x18) * 4) & 0xff)
                                                            * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                          (_alu_r & 0xff) * 4)) >> 8
                                                  & 0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b5 + (_alu_n >> 0x18) * 4
                                                                     ) & 0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b5 + (_alu_n >> 0x18) * 4) & 0xff)
                                                 * 4 + *(int *)(&alu_div_shl3_8_d +
                                                               (_alu_r & 0xff) * 4))));
  _alu_r = uVar4 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b5 + (_alu_n >> 0x18) * 4)
                                                         & 0xff) * 4 +
                                                         *(int *)(&alu_div_shl3_8_d +
                                                                 (_alu_r & 0xff) * 4)) >> 8 & 0xff)
                                               * 4 + *(int *)(&alu_div_shl3_8_d +
                                                             ((_alu_r & 0xff00) >> 8) * 4)) >> 8 &
                                     0xff) * 4 +
                                     *(int *)(&alu_div_shl3_8_d + ((_alu_r & 0xff0000) >> 0x10) * 4)
                                     ) >> 8 & 0xff) * 4 +
                           *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar3 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar3 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  _alu_sq = *alu_psel_q & 0xffffff | (uint)(byte)(&alu_b_s_5)[*alu_psel_q >> 0x18] << 0x18;
  *alu_psel_q = _alu_sq;
  uVar4 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b4 +
                                                                      (_alu_n >> 0x18) * 4) & 0xff)
                                                            * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                          (_alu_r & 0xff) * 4)) >> 8
                                                  & 0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b4 + (_alu_n >> 0x18) * 4
                                                                     ) & 0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b4 + (_alu_n >> 0x18) * 4) & 0xff)
                                                 * 4 + *(int *)(&alu_div_shl3_8_d +
                                                               (_alu_r & 0xff) * 4))));
  _alu_r = uVar4 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b4 + (_alu_n >> 0x18) * 4)
                                                         & 0xff) * 4 +
                                                         *(int *)(&alu_div_shl3_8_d +
                                                                 (_alu_r & 0xff) * 4)) >> 8 & 0xff)
                                               * 4 + *(int *)(&alu_div_shl3_8_d +
                                                             ((_alu_r & 0xff00) >> 8) * 4)) >> 8 &
                                     0xff) * 4 +
                                     *(int *)(&alu_div_shl3_8_d + ((_alu_r & 0xff0000) >> 0x10) * 4)
                                     ) >> 8 & 0xff) * 4 +
                           *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar3 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar3 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  _alu_sq = *alu_psel_q & 0xffffff | (uint)(byte)(&alu_b_s_4)[*alu_psel_q >> 0x18] << 0x18;
  *alu_psel_q = _alu_sq;
  uVar4 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b3 +
                                                                      (_alu_n >> 0x18) * 4) & 0xff)
                                                            * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                          (_alu_r & 0xff) * 4)) >> 8
                                                  & 0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b3 + (_alu_n >> 0x18) * 4
                                                                     ) & 0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b3 + (_alu_n >> 0x18) * 4) & 0xff)
                                                 * 4 + *(int *)(&alu_div_shl3_8_d +
                                                               (_alu_r & 0xff) * 4))));
  _alu_r = uVar4 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b3 + (_alu_n >> 0x18) * 4)
                                                         & 0xff) * 4 +
                                                         *(int *)(&alu_div_shl3_8_d +
                                                                 (_alu_r & 0xff) * 4)) >> 8 & 0xff)
                                               * 4 + *(int *)(&alu_div_shl3_8_d +
                                                             ((_alu_r & 0xff00) >> 8) * 4)) >> 8 &
                                     0xff) * 4 +
                                     *(int *)(&alu_div_shl3_8_d + ((_alu_r & 0xff0000) >> 0x10) * 4)
                                     ) >> 8 & 0xff) * 4 +
                           *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar3 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar3 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  _alu_sq = *alu_psel_q & 0xffffff | (uint)(byte)(&alu_b_s_3)[*alu_psel_q >> 0x18] << 0x18;
  *alu_psel_q = _alu_sq;
  uVar4 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b2 +
                                                                      (_alu_n >> 0x18) * 4) & 0xff)
                                                            * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                          (_alu_r & 0xff) * 4)) >> 8
                                                  & 0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b2 + (_alu_n >> 0x18) * 4
                                                                     ) & 0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b2 + (_alu_n >> 0x18) * 4) & 0xff)
                                                 * 4 + *(int *)(&alu_div_shl3_8_d +
                                                               (_alu_r & 0xff) * 4))));
  _alu_r = uVar4 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b2 + (_alu_n >> 0x18) * 4)
                                                         & 0xff) * 4 +
                                                         *(int *)(&alu_div_shl3_8_d +
                                                                 (_alu_r & 0xff) * 4)) >> 8 & 0xff)
                                               * 4 + *(int *)(&alu_div_shl3_8_d +
                                                             ((_alu_r & 0xff00) >> 8) * 4)) >> 8 &
                                     0xff) * 4 +
                                     *(int *)(&alu_div_shl3_8_d + ((_alu_r & 0xff0000) >> 0x10) * 4)
                                     ) >> 8 & 0xff) * 4 +
                           *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar3 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar3 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  _alu_sq = *alu_psel_q & 0xffffff | (uint)(byte)(&alu_b_s_2)[*alu_psel_q >> 0x18] << 0x18;
  *alu_psel_q = _alu_sq;
  uVar4 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b1 +
                                                                      (_alu_n >> 0x18) * 4) & 0xff)
                                                            * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                          (_alu_r & 0xff) * 4)) >> 8
                                                  & 0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b1 + (_alu_n >> 0x18) * 4
                                                                     ) & 0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b1 + (_alu_n >> 0x18) * 4) & 0xff)
                                                 * 4 + *(int *)(&alu_div_shl3_8_d +
                                                               (_alu_r & 0xff) * 4))));
  _alu_r = uVar4 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b1 + (_alu_n >> 0x18) * 4)
                                                         & 0xff) * 4 +
                                                         *(int *)(&alu_div_shl3_8_d +
                                                                 (_alu_r & 0xff) * 4)) >> 8 & 0xff)
                                               * 4 + *(int *)(&alu_div_shl3_8_d +
                                                             ((_alu_r & 0xff00) >> 8) * 4)) >> 8 &
                                     0xff) * 4 +
                                     *(int *)(&alu_div_shl3_8_d + ((_alu_r & 0xff0000) >> 0x10) * 4)
                                     ) >> 8 & 0xff) * 4 +
                           *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar3 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar3 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  _alu_sq = *alu_psel_q & 0xffffff | (uint)(byte)(&alu_b_s_1)[*alu_psel_q >> 0x18] << 0x18;
  *alu_psel_q = _alu_sq;
  uVar4 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b0 +
                                                                      (_alu_n >> 0x18) * 4) & 0xff)
                                                            * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                          (_alu_r & 0xff) * 4)) >> 8
                                                  & 0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b0 + (_alu_n >> 0x18) * 4
                                                                     ) & 0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b0 + (_alu_n >> 0x18) * 4) & 0xff)
                                                 * 4 + *(int *)(&alu_div_shl3_8_d +
                                                               (_alu_r & 0xff) * 4))));
  _alu_r = uVar4 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b0 + (_alu_n >> 0x18) * 4)
                                                         & 0xff) * 4 +
                                                         *(int *)(&alu_div_shl3_8_d +
                                                                 (_alu_r & 0xff) * 4)) >> 8 & 0xff)
                                               * 4 + *(int *)(&alu_div_shl3_8_d +
                                                             ((_alu_r & 0xff00) >> 8) * 4)) >> 8 &
                                     0xff) * 4 +
                                     *(int *)(&alu_div_shl3_8_d + ((_alu_r & 0xff0000) >> 0x10) * 4)
                                     ) >> 8 & 0xff) * 4 +
                           *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar3 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar3 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  _alu_sq = *alu_psel_q & 0xffffff | (uint)(byte)(&alu_b_s_0)[*alu_psel_q >> 0x18] << 0x18;
  *alu_psel_q = _alu_sq;
  uVar4 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b7 +
                                                                      (_alu_n >> 0x10 & 0xff) * 4) &
                                                            0xff) * 4 +
                                                            *(int *)(&alu_div_shl3_8_d +
                                                                    (_alu_r & 0xff) * 4)) >> 8 &
                                                  0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b7 +
                                                                     (_alu_n >> 0x10 & 0xff) * 4) &
                                                           0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b7 + (_alu_n >> 0x10 & 0xff) * 4) &
                                                 0xff) * 4 +
                                                 *(int *)(&alu_div_shl3_8_d + (_alu_r & 0xff) * 4)))
                        );
  _alu_r = uVar4 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b7 +
                                                                   (_alu_n >> 0x10 & 0xff) * 4) &
                                                         0xff) * 4 +
                                                         *(int *)(&alu_div_shl3_8_d +
                                                                 (_alu_r & 0xff) * 4)) >> 8 & 0xff)
                                               * 4 + *(int *)(&alu_div_shl3_8_d +
                                                             ((_alu_r & 0xff00) >> 8) * 4)) >> 8 &
                                     0xff) * 4 +
                                     *(int *)(&alu_div_shl3_8_d + ((_alu_r & 0xff0000) >> 0x10) * 4)
                                     ) >> 8 & 0xff) * 4 +
                           *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar3 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar3 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  uVar3 = *alu_psel_q;
  _alu_sq = (ushort)uVar3;
  _alu_sq = CONCAT12((&alu_b_s_7)[uVar3 >> 0x10 & 0xff],_alu_sq);
  _alu_sq = uVar3 & 0xff000000 | (uint)_alu_sq;
  *alu_psel_q = _alu_sq;
  uVar4 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b6 +
                                                                      (_alu_n >> 0x10 & 0xff) * 4) &
                                                            0xff) * 4 +
                                                            *(int *)(&alu_div_shl3_8_d +
                                                                    (_alu_r & 0xff) * 4)) >> 8 &
                                                  0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b6 +
                                                                     (_alu_n >> 0x10 & 0xff) * 4) &
                                                           0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b6 + (_alu_n >> 0x10 & 0xff) * 4) &
                                                 0xff) * 4 +
                                                 *(int *)(&alu_div_shl3_8_d + (_alu_r & 0xff) * 4)))
                        );
  _alu_r = uVar4 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b6 +
                                                                   (_alu_n >> 0x10 & 0xff) * 4) &
                                                         0xff) * 4 +
                                                         *(int *)(&alu_div_shl3_8_d +
                                                                 (_alu_r & 0xff) * 4)) >> 8 & 0xff)
                                               * 4 + *(int *)(&alu_div_shl3_8_d +
                                                             ((_alu_r & 0xff00) >> 8) * 4)) >> 8 &
                                     0xff) * 4 +
                                     *(int *)(&alu_div_shl3_8_d + ((_alu_r & 0xff0000) >> 0x10) * 4)
                                     ) >> 8 & 0xff) * 4 +
                           *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar3 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar3 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  uVar3 = *alu_psel_q;
  _alu_sq = (ushort)uVar3;
  _alu_sq = CONCAT12((&alu_b_s_6)[uVar3 >> 0x10 & 0xff],_alu_sq);
  _alu_sq = uVar3 & 0xff000000 | (uint)_alu_sq;
  *alu_psel_q = _alu_sq;
  uVar4 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b5 +
                                                                      (_alu_n >> 0x10 & 0xff) * 4) &
                                                            0xff) * 4 +
                                                            *(int *)(&alu_div_shl3_8_d +
                                                                    (_alu_r & 0xff) * 4)) >> 8 &
                                                  0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b5 +
                                                                     (_alu_n >> 0x10 & 0xff) * 4) &
                                                           0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b5 + (_alu_n >> 0x10 & 0xff) * 4) &
                                                 0xff) * 4 +
                                                 *(int *)(&alu_div_shl3_8_d + (_alu_r & 0xff) * 4)))
                        );
  _alu_r = uVar4 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b5 +
                                                                   (_alu_n >> 0x10 & 0xff) * 4) &
                                                         0xff) * 4 +
                                                         *(int *)(&alu_div_shl3_8_d +
                                                                 (_alu_r & 0xff) * 4)) >> 8 & 0xff)
                                               * 4 + *(int *)(&alu_div_shl3_8_d +
                                                             ((_alu_r & 0xff00) >> 8) * 4)) >> 8 &
                                     0xff) * 4 +
                                     *(int *)(&alu_div_shl3_8_d + ((_alu_r & 0xff0000) >> 0x10) * 4)
                                     ) >> 8 & 0xff) * 4 +
                           *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar3 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar3 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  uVar3 = *alu_psel_q;
  _alu_sq = (ushort)uVar3;
  _alu_sq = CONCAT12((&alu_b_s_5)[uVar3 >> 0x10 & 0xff],_alu_sq);
  _alu_sq = uVar3 & 0xff000000 | (uint)_alu_sq;
  *alu_psel_q = _alu_sq;
  uVar4 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b4 +
                                                                      (_alu_n >> 0x10 & 0xff) * 4) &
                                                            0xff) * 4 +
                                                            *(int *)(&alu_div_shl3_8_d +
                                                                    (_alu_r & 0xff) * 4)) >> 8 &
                                                  0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b4 +
                                                                     (_alu_n >> 0x10 & 0xff) * 4) &
                                                           0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b4 + (_alu_n >> 0x10 & 0xff) * 4) &
                                                 0xff) * 4 +
                                                 *(int *)(&alu_div_shl3_8_d + (_alu_r & 0xff) * 4)))
                        );
  _alu_r = uVar4 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b4 +
                                                                   (_alu_n >> 0x10 & 0xff) * 4) &
                                                         0xff) * 4 +
                                                         *(int *)(&alu_div_shl3_8_d +
                                                                 (_alu_r & 0xff) * 4)) >> 8 & 0xff)
                                               * 4 + *(int *)(&alu_div_shl3_8_d +
                                                             ((_alu_r & 0xff00) >> 8) * 4)) >> 8 &
                                     0xff) * 4 +
                                     *(int *)(&alu_div_shl3_8_d + ((_alu_r & 0xff0000) >> 0x10) * 4)
                                     ) >> 8 & 0xff) * 4 +
                           *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar3 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar3 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  uVar3 = *alu_psel_q;
  _alu_sq = (ushort)uVar3;
  _alu_sq = CONCAT12((&alu_b_s_4)[uVar3 >> 0x10 & 0xff],_alu_sq);
  _alu_sq = uVar3 & 0xff000000 | (uint)_alu_sq;
  *alu_psel_q = _alu_sq;
  uVar4 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b3 +
                                                                      (_alu_n >> 0x10 & 0xff) * 4) &
                                                            0xff) * 4 +
                                                            *(int *)(&alu_div_shl3_8_d +
                                                                    (_alu_r & 0xff) * 4)) >> 8 &
                                                  0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b3 +
                                                                     (_alu_n >> 0x10 & 0xff) * 4) &
                                                           0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b3 + (_alu_n >> 0x10 & 0xff) * 4) &
                                                 0xff) * 4 +
                                                 *(int *)(&alu_div_shl3_8_d + (_alu_r & 0xff) * 4)))
                        );
  _alu_r = uVar4 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b3 +
                                                                   (_alu_n >> 0x10 & 0xff) * 4) &
                                                         0xff) * 4 +
                                                         *(int *)(&alu_div_shl3_8_d +
                                                                 (_alu_r & 0xff) * 4)) >> 8 & 0xff)
                                               * 4 + *(int *)(&alu_div_shl3_8_d +
                                                             ((_alu_r & 0xff00) >> 8) * 4)) >> 8 &
                                     0xff) * 4 +
                                     *(int *)(&alu_div_shl3_8_d + ((_alu_r & 0xff0000) >> 0x10) * 4)
                                     ) >> 8 & 0xff) * 4 +
                           *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar3 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar3 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  uVar3 = *alu_psel_q;
  _alu_sq = (ushort)uVar3;
  _alu_sq = CONCAT12((&alu_b_s_3)[uVar3 >> 0x10 & 0xff],_alu_sq);
  _alu_sq = uVar3 & 0xff000000 | (uint)_alu_sq;
  *alu_psel_q = _alu_sq;
  uVar4 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b2 +
                                                                      (_alu_n >> 0x10 & 0xff) * 4) &
                                                            0xff) * 4 +
                                                            *(int *)(&alu_div_shl3_8_d +
                                                                    (_alu_r & 0xff) * 4)) >> 8 &
                                                  0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b2 +
                                                                     (_alu_n >> 0x10 & 0xff) * 4) &
                                                           0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b2 + (_alu_n >> 0x10 & 0xff) * 4) &
                                                 0xff) * 4 +
                                                 *(int *)(&alu_div_shl3_8_d + (_alu_r & 0xff) * 4)))
                        );
  _alu_r = uVar4 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b2 +
                                                                   (_alu_n >> 0x10 & 0xff) * 4) &
                                                         0xff) * 4 +
                                                         *(int *)(&alu_div_shl3_8_d +
                                                                 (_alu_r & 0xff) * 4)) >> 8 & 0xff)
                                               * 4 + *(int *)(&alu_div_shl3_8_d +
                                                             ((_alu_r & 0xff00) >> 8) * 4)) >> 8 &
                                     0xff) * 4 +
                                     *(int *)(&alu_div_shl3_8_d + ((_alu_r & 0xff0000) >> 0x10) * 4)
                                     ) >> 8 & 0xff) * 4 +
                           *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar3 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar3 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  uVar3 = *alu_psel_q;
  _alu_sq = (ushort)uVar3;
  _alu_sq = CONCAT12((&alu_b_s_2)[uVar3 >> 0x10 & 0xff],_alu_sq);
  _alu_sq = uVar3 & 0xff000000 | (uint)_alu_sq;
  *alu_psel_q = _alu_sq;
  uVar4 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b1 +
                                                                      (_alu_n >> 0x10 & 0xff) * 4) &
                                                            0xff) * 4 +
                                                            *(int *)(&alu_div_shl3_8_d +
                                                                    (_alu_r & 0xff) * 4)) >> 8 &
                                                  0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b1 +
                                                                     (_alu_n >> 0x10 & 0xff) * 4) &
                                                           0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b1 + (_alu_n >> 0x10 & 0xff) * 4) &
                                                 0xff) * 4 +
                                                 *(int *)(&alu_div_shl3_8_d + (_alu_r & 0xff) * 4)))
                        );
  _alu_r = uVar4 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b1 +
                                                                   (_alu_n >> 0x10 & 0xff) * 4) &
                                                         0xff) * 4 +
                                                         *(int *)(&alu_div_shl3_8_d +
                                                                 (_alu_r & 0xff) * 4)) >> 8 & 0xff)
                                               * 4 + *(int *)(&alu_div_shl3_8_d +
                                                             ((_alu_r & 0xff00) >> 8) * 4)) >> 8 &
                                     0xff) * 4 +
                                     *(int *)(&alu_div_shl3_8_d + ((_alu_r & 0xff0000) >> 0x10) * 4)
                                     ) >> 8 & 0xff) * 4 +
                           *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar3 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar3 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  uVar3 = *alu_psel_q;
  _alu_sq = (ushort)uVar3;
  _alu_sq = CONCAT12((&alu_b_s_1)[uVar3 >> 0x10 & 0xff],_alu_sq);
  _alu_sq = uVar3 & 0xff000000 | (uint)_alu_sq;
  *alu_psel_q = _alu_sq;
  uVar4 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b0 +
                                                                      (_alu_n >> 0x10 & 0xff) * 4) &
                                                            0xff) * 4 +
                                                            *(int *)(&alu_div_shl3_8_d +
                                                                    (_alu_r & 0xff) * 4)) >> 8 &
                                                  0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b0 +
                                                                     (_alu_n >> 0x10 & 0xff) * 4) &
                                                           0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b0 + (_alu_n >> 0x10 & 0xff) * 4) &
                                                 0xff) * 4 +
                                                 *(int *)(&alu_div_shl3_8_d + (_alu_r & 0xff) * 4)))
                        );
  _alu_r = uVar4 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b0 +
                                                                   (_alu_n >> 0x10 & 0xff) * 4) &
                                                         0xff) * 4 +
                                                         *(int *)(&alu_div_shl3_8_d +
                                                                 (_alu_r & 0xff) * 4)) >> 8 & 0xff)
                                               * 4 + *(int *)(&alu_div_shl3_8_d +
                                                             ((_alu_r & 0xff00) >> 8) * 4)) >> 8 &
                                     0xff) * 4 +
                                     *(int *)(&alu_div_shl3_8_d + ((_alu_r & 0xff0000) >> 0x10) * 4)
                                     ) >> 8 & 0xff) * 4 +
                           *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar3 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar3 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  uVar3 = *alu_psel_q;
  _alu_sq = (ushort)uVar3;
  _alu_sq = CONCAT12((&alu_b_s_0)[uVar3 >> 0x10 & 0xff],_alu_sq);
  _alu_sq = uVar3 & 0xff000000 | (uint)_alu_sq;
  *alu_psel_q = _alu_sq;
  uVar4 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b7 +
                                                                      (_alu_n >> 8 & 0xff) * 4) &
                                                            0xff) * 4 +
                                                            *(int *)(&alu_div_shl3_8_d +
                                                                    (_alu_r & 0xff) * 4)) >> 8 &
                                                  0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b7 +
                                                                     (_alu_n >> 8 & 0xff) * 4) &
                                                           0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b7 + (_alu_n >> 8 & 0xff) * 4) &
                                                 0xff) * 4 +
                                                 *(int *)(&alu_div_shl3_8_d + (_alu_r & 0xff) * 4)))
                        );
  _alu_r = uVar4 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b7 +
                                                                   (_alu_n >> 8 & 0xff) * 4) & 0xff)
                                                         * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                       (_alu_r & 0xff) * 4)) >> 8 &
                                               0xff) * 4 +
                                               *(int *)(&alu_div_shl3_8_d +
                                                       ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff) *
                                     4 + *(int *)(&alu_div_shl3_8_d +
                                                 ((_alu_r & 0xff0000) >> 0x10) * 4)) >> 8 & 0xff) *
                           4 + *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar3 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar3 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  uVar3 = *alu_psel_q;
  alu_sq = (undefined)uVar3;
  _alu_sq = CONCAT11((&alu_b_s_7)[uVar3 >> 8 & 0xff],alu_sq);
  _alu_sq = uVar3 & 0xffff0000 | (uint)_alu_sq;
  *alu_psel_q = _alu_sq;
  uVar4 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b6 +
                                                                      (_alu_n >> 8 & 0xff) * 4) &
                                                            0xff) * 4 +
                                                            *(int *)(&alu_div_shl3_8_d +
                                                                    (_alu_r & 0xff) * 4)) >> 8 &
                                                  0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b6 +
                                                                     (_alu_n >> 8 & 0xff) * 4) &
                                                           0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b6 + (_alu_n >> 8 & 0xff) * 4) &
                                                 0xff) * 4 +
                                                 *(int *)(&alu_div_shl3_8_d + (_alu_r & 0xff) * 4)))
                        );
  _alu_r = uVar4 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b6 +
                                                                   (_alu_n >> 8 & 0xff) * 4) & 0xff)
                                                         * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                       (_alu_r & 0xff) * 4)) >> 8 &
                                               0xff) * 4 +
                                               *(int *)(&alu_div_shl3_8_d +
                                                       ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff) *
                                     4 + *(int *)(&alu_div_shl3_8_d +
                                                 ((_alu_r & 0xff0000) >> 0x10) * 4)) >> 8 & 0xff) *
                           4 + *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar3 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar3 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  uVar3 = *alu_psel_q;
  alu_sq = (undefined)uVar3;
  _alu_sq = CONCAT11((&alu_b_s_6)[uVar3 >> 8 & 0xff],alu_sq);
  _alu_sq = uVar3 & 0xffff0000 | (uint)_alu_sq;
  *alu_psel_q = _alu_sq;
  uVar4 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b5 +
                                                                      (_alu_n >> 8 & 0xff) * 4) &
                                                            0xff) * 4 +
                                                            *(int *)(&alu_div_shl3_8_d +
                                                                    (_alu_r & 0xff) * 4)) >> 8 &
                                                  0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b5 +
                                                                     (_alu_n >> 8 & 0xff) * 4) &
                                                           0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b5 + (_alu_n >> 8 & 0xff) * 4) &
                                                 0xff) * 4 +
                                                 *(int *)(&alu_div_shl3_8_d + (_alu_r & 0xff) * 4)))
                        );
  _alu_r = uVar4 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b5 +
                                                                   (_alu_n >> 8 & 0xff) * 4) & 0xff)
                                                         * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                       (_alu_r & 0xff) * 4)) >> 8 &
                                               0xff) * 4 +
                                               *(int *)(&alu_div_shl3_8_d +
                                                       ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff) *
                                     4 + *(int *)(&alu_div_shl3_8_d +
                                                 ((_alu_r & 0xff0000) >> 0x10) * 4)) >> 8 & 0xff) *
                           4 + *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar3 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar3 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  uVar3 = *alu_psel_q;
  alu_sq = (undefined)uVar3;
  _alu_sq = CONCAT11((&alu_b_s_5)[uVar3 >> 8 & 0xff],alu_sq);
  _alu_sq = uVar3 & 0xffff0000 | (uint)_alu_sq;
  *alu_psel_q = _alu_sq;
  uVar4 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b4 +
                                                                      (_alu_n >> 8 & 0xff) * 4) &
                                                            0xff) * 4 +
                                                            *(int *)(&alu_div_shl3_8_d +
                                                                    (_alu_r & 0xff) * 4)) >> 8 &
                                                  0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b4 +
                                                                     (_alu_n >> 8 & 0xff) * 4) &
                                                           0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b4 + (_alu_n >> 8 & 0xff) * 4) &
                                                 0xff) * 4 +
                                                 *(int *)(&alu_div_shl3_8_d + (_alu_r & 0xff) * 4)))
                        );
  _alu_r = uVar4 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b4 +
                                                                   (_alu_n >> 8 & 0xff) * 4) & 0xff)
                                                         * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                       (_alu_r & 0xff) * 4)) >> 8 &
                                               0xff) * 4 +
                                               *(int *)(&alu_div_shl3_8_d +
                                                       ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff) *
                                     4 + *(int *)(&alu_div_shl3_8_d +
                                                 ((_alu_r & 0xff0000) >> 0x10) * 4)) >> 8 & 0xff) *
                           4 + *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar3 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar3 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  uVar3 = *alu_psel_q;
  alu_sq = (undefined)uVar3;
  _alu_sq = CONCAT11((&alu_b_s_4)[uVar3 >> 8 & 0xff],alu_sq);
  _alu_sq = uVar3 & 0xffff0000 | (uint)_alu_sq;
  *alu_psel_q = _alu_sq;
  uVar4 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b3 +
                                                                      (_alu_n >> 8 & 0xff) * 4) &
                                                            0xff) * 4 +
                                                            *(int *)(&alu_div_shl3_8_d +
                                                                    (_alu_r & 0xff) * 4)) >> 8 &
                                                  0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b3 +
                                                                     (_alu_n >> 8 & 0xff) * 4) &
                                                           0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b3 + (_alu_n >> 8 & 0xff) * 4) &
                                                 0xff) * 4 +
                                                 *(int *)(&alu_div_shl3_8_d + (_alu_r & 0xff) * 4)))
                        );
  _alu_r = uVar4 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b3 +
                                                                   (_alu_n >> 8 & 0xff) * 4) & 0xff)
                                                         * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                       (_alu_r & 0xff) * 4)) >> 8 &
                                               0xff) * 4 +
                                               *(int *)(&alu_div_shl3_8_d +
                                                       ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff) *
                                     4 + *(int *)(&alu_div_shl3_8_d +
                                                 ((_alu_r & 0xff0000) >> 0x10) * 4)) >> 8 & 0xff) *
                           4 + *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar3 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar3 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  uVar3 = *alu_psel_q;
  alu_sq = (undefined)uVar3;
  _alu_sq = CONCAT11((&alu_b_s_3)[uVar3 >> 8 & 0xff],alu_sq);
  _alu_sq = uVar3 & 0xffff0000 | (uint)_alu_sq;
  *alu_psel_q = _alu_sq;
  uVar4 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b2 +
                                                                      (_alu_n >> 8 & 0xff) * 4) &
                                                            0xff) * 4 +
                                                            *(int *)(&alu_div_shl3_8_d +
                                                                    (_alu_r & 0xff) * 4)) >> 8 &
                                                  0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b2 +
                                                                     (_alu_n >> 8 & 0xff) * 4) &
                                                           0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b2 + (_alu_n >> 8 & 0xff) * 4) &
                                                 0xff) * 4 +
                                                 *(int *)(&alu_div_shl3_8_d + (_alu_r & 0xff) * 4)))
                        );
  _alu_r = uVar4 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b2 +
                                                                   (_alu_n >> 8 & 0xff) * 4) & 0xff)
                                                         * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                       (_alu_r & 0xff) * 4)) >> 8 &
                                               0xff) * 4 +
                                               *(int *)(&alu_div_shl3_8_d +
                                                       ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff) *
                                     4 + *(int *)(&alu_div_shl3_8_d +
                                                 ((_alu_r & 0xff0000) >> 0x10) * 4)) >> 8 & 0xff) *
                           4 + *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar3 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar3 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  uVar3 = *alu_psel_q;
  alu_sq = (undefined)uVar3;
  _alu_sq = CONCAT11((&alu_b_s_2)[uVar3 >> 8 & 0xff],alu_sq);
  _alu_sq = uVar3 & 0xffff0000 | (uint)_alu_sq;
  *alu_psel_q = _alu_sq;
  uVar4 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b1 +
                                                                      (_alu_n >> 8 & 0xff) * 4) &
                                                            0xff) * 4 +
                                                            *(int *)(&alu_div_shl3_8_d +
                                                                    (_alu_r & 0xff) * 4)) >> 8 &
                                                  0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b1 +
                                                                     (_alu_n >> 8 & 0xff) * 4) &
                                                           0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b1 + (_alu_n >> 8 & 0xff) * 4) &
                                                 0xff) * 4 +
                                                 *(int *)(&alu_div_shl3_8_d + (_alu_r & 0xff) * 4)))
                        );
  _alu_r = uVar4 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b1 +
                                                                   (_alu_n >> 8 & 0xff) * 4) & 0xff)
                                                         * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                       (_alu_r & 0xff) * 4)) >> 8 &
                                               0xff) * 4 +
                                               *(int *)(&alu_div_shl3_8_d +
                                                       ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff) *
                                     4 + *(int *)(&alu_div_shl3_8_d +
                                                 ((_alu_r & 0xff0000) >> 0x10) * 4)) >> 8 & 0xff) *
                           4 + *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar3 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar3 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  uVar3 = *alu_psel_q;
  alu_sq = (undefined)uVar3;
  _alu_sq = CONCAT11((&alu_b_s_1)[uVar3 >> 8 & 0xff],alu_sq);
  _alu_sq = uVar3 & 0xffff0000 | (uint)_alu_sq;
  *alu_psel_q = _alu_sq;
  uVar4 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b0 +
                                                                      (_alu_n >> 8 & 0xff) * 4) &
                                                            0xff) * 4 +
                                                            *(int *)(&alu_div_shl3_8_d +
                                                                    (_alu_r & 0xff) * 4)) >> 8 &
                                                  0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b0 +
                                                                     (_alu_n >> 8 & 0xff) * 4) &
                                                           0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b0 + (_alu_n >> 8 & 0xff) * 4) &
                                                 0xff) * 4 +
                                                 *(int *)(&alu_div_shl3_8_d + (_alu_r & 0xff) * 4)))
                        );
  _alu_r = uVar4 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b0 +
                                                                   (_alu_n >> 8 & 0xff) * 4) & 0xff)
                                                         * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                       (_alu_r & 0xff) * 4)) >> 8 &
                                               0xff) * 4 +
                                               *(int *)(&alu_div_shl3_8_d +
                                                       ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff) *
                                     4 + *(int *)(&alu_div_shl3_8_d +
                                                 ((_alu_r & 0xff0000) >> 0x10) * 4)) >> 8 & 0xff) *
                           4 + *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar3 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar3 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  uVar3 = *alu_psel_q;
  alu_sq = (undefined)uVar3;
  _alu_sq = CONCAT11((&alu_b_s_0)[uVar3 >> 8 & 0xff],alu_sq);
  _alu_sq = uVar3 & 0xffff0000 | (uint)_alu_sq;
  *alu_psel_q = _alu_sq;
  uVar4 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b7 + (_alu_n & 0xff) * 4
                                                                      ) & 0xff) * 4 +
                                                            *(int *)(&alu_div_shl3_8_d +
                                                                    (_alu_r & 0xff) * 4)) >> 8 &
                                                  0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b7 + (_alu_n & 0xff) * 4)
                                                           & 0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b7 + (_alu_n & 0xff) * 4) & 0xff) *
                                                 4 + *(int *)(&alu_div_shl3_8_d +
                                                             (_alu_r & 0xff) * 4))));
  _alu_r = uVar4 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b7 + (_alu_n & 0xff) * 4) &
                                                         0xff) * 4 +
                                                         *(int *)(&alu_div_shl3_8_d +
                                                                 (_alu_r & 0xff) * 4)) >> 8 & 0xff)
                                               * 4 + *(int *)(&alu_div_shl3_8_d +
                                                             ((_alu_r & 0xff00) >> 8) * 4)) >> 8 &
                                     0xff) * 4 +
                                     *(int *)(&alu_div_shl3_8_d + ((_alu_r & 0xff0000) >> 0x10) * 4)
                                     ) >> 8 & 0xff) * 4 +
                           *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar3 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar3 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  _alu_sq = *alu_psel_q & 0xffffff00 | (uint)(byte)(&alu_b_s_7)[*alu_psel_q & 0xff];
  *alu_psel_q = _alu_sq;
  uVar4 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b6 + (_alu_n & 0xff) * 4
                                                                      ) & 0xff) * 4 +
                                                            *(int *)(&alu_div_shl3_8_d +
                                                                    (_alu_r & 0xff) * 4)) >> 8 &
                                                  0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b6 + (_alu_n & 0xff) * 4)
                                                           & 0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b6 + (_alu_n & 0xff) * 4) & 0xff) *
                                                 4 + *(int *)(&alu_div_shl3_8_d +
                                                             (_alu_r & 0xff) * 4))));
  _alu_r = uVar4 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b6 + (_alu_n & 0xff) * 4) &
                                                         0xff) * 4 +
                                                         *(int *)(&alu_div_shl3_8_d +
                                                                 (_alu_r & 0xff) * 4)) >> 8 & 0xff)
                                               * 4 + *(int *)(&alu_div_shl3_8_d +
                                                             ((_alu_r & 0xff00) >> 8) * 4)) >> 8 &
                                     0xff) * 4 +
                                     *(int *)(&alu_div_shl3_8_d + ((_alu_r & 0xff0000) >> 0x10) * 4)
                                     ) >> 8 & 0xff) * 4 +
                           *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar3 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar3 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  _alu_sq = *alu_psel_q & 0xffffff00 | (uint)(byte)(&alu_b_s_6)[*alu_psel_q & 0xff];
  *alu_psel_q = _alu_sq;
  uVar4 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b5 + (_alu_n & 0xff) * 4
                                                                      ) & 0xff) * 4 +
                                                            *(int *)(&alu_div_shl3_8_d +
                                                                    (_alu_r & 0xff) * 4)) >> 8 &
                                                  0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b5 + (_alu_n & 0xff) * 4)
                                                           & 0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b5 + (_alu_n & 0xff) * 4) & 0xff) *
                                                 4 + *(int *)(&alu_div_shl3_8_d +
                                                             (_alu_r & 0xff) * 4))));
  _alu_r = uVar4 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b5 + (_alu_n & 0xff) * 4) &
                                                         0xff) * 4 +
                                                         *(int *)(&alu_div_shl3_8_d +
                                                                 (_alu_r & 0xff) * 4)) >> 8 & 0xff)
                                               * 4 + *(int *)(&alu_div_shl3_8_d +
                                                             ((_alu_r & 0xff00) >> 8) * 4)) >> 8 &
                                     0xff) * 4 +
                                     *(int *)(&alu_div_shl3_8_d + ((_alu_r & 0xff0000) >> 0x10) * 4)
                                     ) >> 8 & 0xff) * 4 +
                           *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar3 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar3 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  _alu_sq = *alu_psel_q & 0xffffff00 | (uint)(byte)(&alu_b_s_5)[*alu_psel_q & 0xff];
  *alu_psel_q = _alu_sq;
  uVar4 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b4 + (_alu_n & 0xff) * 4
                                                                      ) & 0xff) * 4 +
                                                            *(int *)(&alu_div_shl3_8_d +
                                                                    (_alu_r & 0xff) * 4)) >> 8 &
                                                  0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b4 + (_alu_n & 0xff) * 4)
                                                           & 0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b4 + (_alu_n & 0xff) * 4) & 0xff) *
                                                 4 + *(int *)(&alu_div_shl3_8_d +
                                                             (_alu_r & 0xff) * 4))));
  _alu_r = uVar4 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b4 + (_alu_n & 0xff) * 4) &
                                                         0xff) * 4 +
                                                         *(int *)(&alu_div_shl3_8_d +
                                                                 (_alu_r & 0xff) * 4)) >> 8 & 0xff)
                                               * 4 + *(int *)(&alu_div_shl3_8_d +
                                                             ((_alu_r & 0xff00) >> 8) * 4)) >> 8 &
                                     0xff) * 4 +
                                     *(int *)(&alu_div_shl3_8_d + ((_alu_r & 0xff0000) >> 0x10) * 4)
                                     ) >> 8 & 0xff) * 4 +
                           *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar3 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar3 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  _alu_sq = *alu_psel_q & 0xffffff00 | (uint)(byte)(&alu_b_s_4)[*alu_psel_q & 0xff];
  *alu_psel_q = _alu_sq;
  uVar4 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b3 + (_alu_n & 0xff) * 4
                                                                      ) & 0xff) * 4 +
                                                            *(int *)(&alu_div_shl3_8_d +
                                                                    (_alu_r & 0xff) * 4)) >> 8 &
                                                  0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b3 + (_alu_n & 0xff) * 4)
                                                           & 0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b3 + (_alu_n & 0xff) * 4) & 0xff) *
                                                 4 + *(int *)(&alu_div_shl3_8_d +
                                                             (_alu_r & 0xff) * 4))));
  _alu_r = uVar4 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b3 + (_alu_n & 0xff) * 4) &
                                                         0xff) * 4 +
                                                         *(int *)(&alu_div_shl3_8_d +
                                                                 (_alu_r & 0xff) * 4)) >> 8 & 0xff)
                                               * 4 + *(int *)(&alu_div_shl3_8_d +
                                                             ((_alu_r & 0xff00) >> 8) * 4)) >> 8 &
                                     0xff) * 4 +
                                     *(int *)(&alu_div_shl3_8_d + ((_alu_r & 0xff0000) >> 0x10) * 4)
                                     ) >> 8 & 0xff) * 4 +
                           *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar3 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar3 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  _alu_sq = *alu_psel_q & 0xffffff00 | (uint)(byte)(&alu_b_s_3)[*alu_psel_q & 0xff];
  *alu_psel_q = _alu_sq;
  uVar4 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b2 + (_alu_n & 0xff) * 4
                                                                      ) & 0xff) * 4 +
                                                            *(int *)(&alu_div_shl3_8_d +
                                                                    (_alu_r & 0xff) * 4)) >> 8 &
                                                  0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b2 + (_alu_n & 0xff) * 4)
                                                           & 0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b2 + (_alu_n & 0xff) * 4) & 0xff) *
                                                 4 + *(int *)(&alu_div_shl3_8_d +
                                                             (_alu_r & 0xff) * 4))));
  _alu_r = uVar4 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b2 + (_alu_n & 0xff) * 4) &
                                                         0xff) * 4 +
                                                         *(int *)(&alu_div_shl3_8_d +
                                                                 (_alu_r & 0xff) * 4)) >> 8 & 0xff)
                                               * 4 + *(int *)(&alu_div_shl3_8_d +
                                                             ((_alu_r & 0xff00) >> 8) * 4)) >> 8 &
                                     0xff) * 4 +
                                     *(int *)(&alu_div_shl3_8_d + ((_alu_r & 0xff0000) >> 0x10) * 4)
                                     ) >> 8 & 0xff) * 4 +
                           *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar3 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar3 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  _alu_sq = *alu_psel_q & 0xffffff00 | (uint)(byte)(&alu_b_s_2)[*alu_psel_q & 0xff];
  *alu_psel_q = _alu_sq;
  uVar4 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b1 + (_alu_n & 0xff) * 4
                                                                      ) & 0xff) * 4 +
                                                            *(int *)(&alu_div_shl3_8_d +
                                                                    (_alu_r & 0xff) * 4)) >> 8 &
                                                  0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b1 + (_alu_n & 0xff) * 4)
                                                           & 0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b1 + (_alu_n & 0xff) * 4) & 0xff) *
                                                 4 + *(int *)(&alu_div_shl3_8_d +
                                                             (_alu_r & 0xff) * 4))));
  _alu_r = uVar4 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b1 + (_alu_n & 0xff) * 4) &
                                                         0xff) * 4 +
                                                         *(int *)(&alu_div_shl3_8_d +
                                                                 (_alu_r & 0xff) * 4)) >> 8 & 0xff)
                                               * 4 + *(int *)(&alu_div_shl3_8_d +
                                                             ((_alu_r & 0xff00) >> 8) * 4)) >> 8 &
                                     0xff) * 4 +
                                     *(int *)(&alu_div_shl3_8_d + ((_alu_r & 0xff0000) >> 0x10) * 4)
                                     ) >> 8 & 0xff) * 4 +
                           *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar3 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar3 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  _alu_sq = *alu_psel_q & 0xffffff00 | (uint)(byte)(&alu_b_s_1)[*alu_psel_q & 0xff];
  *alu_psel_q = _alu_sq;
  uVar3 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b0 + (_alu_n & 0xff) * 4
                                                                      ) & 0xff) * 4 +
                                                            *(int *)(&alu_div_shl3_8_d +
                                                                    (_alu_r & 0xff) * 4)) >> 8 &
                                                  0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b0 + (_alu_n & 0xff) * 4)
                                                           & 0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b0 + (_alu_n & 0xff) * 4) & 0xff) *
                                                 4 + *(int *)(&alu_div_shl3_8_d +
                                                             (_alu_r & 0xff) * 4))));
  _alu_r = uVar3 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b0 + (_alu_n & 0xff) * 4) &
                                                         0xff) * 4 +
                                                         *(int *)(&alu_div_shl3_8_d +
                                                                 (_alu_r & 0xff) * 4)) >> 8 & 0xff)
                                               * 4 + *(int *)(&alu_div_shl3_8_d +
                                                             ((_alu_r & 0xff00) >> 8) * 4)) >> 8 &
                                     0xff) * 4 +
                                     *(int *)(&alu_div_shl3_8_d + ((_alu_r & 0xff0000) >> 0x10) * 4)
                                     ) >> 8 & 0xff) * 4 +
                           *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_r = (uint *)(&alu_sel_r)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  alu_sr = *(uint *)((&alu_add16)
                     [*(int *)((&alu_add16)[*alu_psel_r & 0xffff] +
                              (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) &
           0xffff | *(int *)((&alu_add16)
                             [*(int *)((&alu_add16)[*alu_psel_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[*alu_psel_r & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) << 0x10;
  *alu_psel_r = alu_sr;
  _alu_sq = *alu_psel_q & 0xffffff00 | (uint)(byte)(&alu_b_s_0)[*alu_psel_q & 0xff];
  *alu_psel_q = _alu_sq;
  *(uint *)(&sel_data)[alu_rs] =
       *(uint *)((&alu_add16)
                 [*(int *)(alu_add16 + (uint)*(ushort *)(&alu_inv16 + (_alu_r & 0xffff) * 2) * 4)] +
                4) & 0xffff |
       *(int *)((&alu_add16)
                [*(int *)(alu_add16 + (uint)*(ushort *)(&alu_inv16 + (_alu_r >> 0x10) * 2) * 4)] +
               (*(uint *)((&alu_add16)
                          [*(int *)(alu_add16 +
                                   (uint)*(ushort *)(&alu_inv16 + (_alu_r & 0xffff) * 2) * 4)] + 4)
               >> 0x10) * 4) << 0x10;
  R3 = (undefined *)_alu_r;
  R2 = 0;
  uVar3 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[_alu_r & 0xffff] + (uint)_alu_inv16 * 4)] + 4
                   );
  sf = sf & 0xffffff00;
  zf = zf & 0xffffff00 |
       (uint)(byte)(&alu_false)
                   [(byte)(&alu_true)
                          [(uint)(byte)(&alu_true)
                                       [(uint)(byte)(&alu_true)
                                                    [(uint)(byte)(&alu_true)[uVar3 & 0xff] +
                                                     (uVar3 >> 8 & 0xff)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                            (uint)_alu_inv16 * 4)] +
                                                  (uVar3 >> 0x10) * 4) & 0xff)] +
                           (*(uint *)((&alu_add16)
                                      [*(int *)((&alu_add16)[_alu_r >> 0x10] + (uint)_alu_inv16 * 4)
                                      ] + (uVar3 >> 0x10) * 4) >> 8 & 0xff)]];
  of = of & 0xffffff00;
  b0 = *(int *)((&and)[*(int *)(&alu_false + zf * 4)] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x8804f1c0;
  iVar2 = b0;
  puVar1 = (undefined4 *)(&sel_data)[b0];
  *puVar1 = R0;
  puVar1[1] = R1;
  puVar1[2] = R2;
  *(undefined **)(puVar1 + 3) = R3;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = F0;
  puVar1[1] = F1;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = D0;
  puVar1[1] = DAT_08054064;
  puVar1[2] = D1;
  puVar1[3] = DAT_0805406c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  R0 = 0;
  *(undefined4 *)(&sel_target)[on] = 0x88050155;
  iVar2 = on;
  puVar1 = (undefined4 *)(&sel_data)[on];
  *puVar1 = R0;
  puVar1[1] = R1;
  puVar1[2] = R2;
  *(undefined **)(puVar1 + 3) = R3;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = F0;
  puVar1[1] = F1;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = D0;
  puVar1[1] = DAT_08054064;
  puVar1[2] = D1;
  puVar1[3] = DAT_0805406c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar2 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xc0]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xf1] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][4] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar2;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_f1;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d0;
  puVar1[1] = DAT_085fd19c;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d1;
  puVar1[1] = DAT_085fd1a4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  iVar2 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x9a]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xf3] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][4] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar2;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_f1;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d0;
  puVar1[1] = DAT_085fd19c;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d1;
  puVar1[1] = DAT_085fd1a4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(uint *)(&sel_data)[on] =
       *(uint *)(&alu_add16)[*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 4)] & 0xffff
       | *(int *)((&alu_add16)[*(int *)(&alu_add16)[*(uint *)(&sel_data)[on] >> 0x10]] +
                 (*(uint *)(&alu_add16)
                           [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 4)] >> 0x10)
                 * 4) << 0x10;
  iVar2 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x6f]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xf6] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][4] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar2;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_f1;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d0;
  puVar1[1] = DAT_085fd19c;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d1;
  puVar1[1] = DAT_085fd1a4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  uVar3 = *(uint *)(&sel_data)[on];
  alu_x._1_1_ = (byte)(uVar3 >> 8);
  DAT_081fcfe2._0_1_ = (byte)(uVar3 >> 0x10);
  _alu_z0 = CONCAT12((&alu_mul_sum8l)
                     [(uint)(byte)(&alu_mul_sum8l)
                                  [(uint)(byte)(&alu_mul_mul8h)[alu_x._1_1_][uVar3 & 0xff] +
                                   (uint)(byte)(&alu_mul_sum8h)
                                               [(uint)(byte)(&alu_mul_sum8l)
                                                            [(uint)(byte)(&alu_mul_mul8h)
                                                                         [uVar3 & 0xff]
                                                                         [uVar3 & 0xff] +
                                                             (uint)(byte)(&alu_mul_sum8h)
                                                                         [(byte)(&alu_mul_mul8l)
                                                                                [uVar3 & 0xff]
                                                                                [uVar3 & 0xff]]] +
                                                (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                            [uVar3 & 0xff]]] +
                      (uint)(byte)(&alu_mul_mul8l)[(byte)DAT_081fcfe2][uVar3 & 0xff]],
                     CONCAT11((&alu_mul_sum8l)
                              [(uint)(byte)(&alu_mul_sum8l)
                                           [(uint)(byte)(&alu_mul_mul8h)[uVar3 & 0xff][uVar3 & 0xff]
                                            + (uint)(byte)(&alu_mul_sum8h)
                                                          [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                 [uVar3 & 0xff]]] +
                               (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_][uVar3 & 0xff]],
                              (&alu_mul_sum8l)[(byte)(&alu_mul_mul8l)[uVar3 & 0xff][uVar3 & 0xff]]))
  ;
  DAT_081fcfe2._1_1_ = (byte)(uVar3 >> 0x18);
  _alu_z0 = CONCAT13((&alu_mul_sum8l)
                     [(uint)(byte)(&alu_mul_sum8l)
                                  [(uint)(byte)(&alu_mul_mul8h)[(byte)DAT_081fcfe2][uVar3 & 0xff] +
                                   (uint)(byte)(&alu_mul_sum8h)
                                               [(uint)(byte)(&alu_mul_sum8l)
                                                            [(uint)(byte)(&alu_mul_mul8h)
                                                                         [alu_x._1_1_][uVar3 & 0xff]
                                                             + (uint)(byte)(&alu_mul_sum8h)
                                                                           [(uint)(byte)(&
                                                  alu_mul_sum8l)
                                                  [(uint)(byte)(&alu_mul_mul8h)[uVar3 & 0xff]
                                                               [uVar3 & 0xff] +
                                                   (uint)(byte)(&alu_mul_sum8h)
                                                               [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                      [uVar3 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [uVar3 & 0xff]]] +
                                                (uint)(byte)(&alu_mul_mul8l)[(byte)DAT_081fcfe2]
                                                            [uVar3 & 0xff]]] +
                      (uint)(byte)(&alu_mul_mul8l)[DAT_081fcfe2._1_1_][uVar3 & 0xff]],_alu_z0);
  _alu_z1 = (uint)CONCAT12((&alu_mul_sum8l)
                           [(uint)(byte)(&alu_mul_sum8l)
                                        [(uint)(byte)(&alu_mul_mul8h)[alu_x._1_1_][alu_x._1_1_] +
                                         (uint)(byte)(&alu_mul_sum8h)
                                                     [(uint)(byte)(&alu_mul_sum8l)
                                                                  [(uint)(byte)(&alu_mul_mul8h)
                                                                               [uVar3 & 0xff]
                                                                               [alu_x._1_1_] +
                                                                   (uint)(byte)(&alu_mul_sum8h)
                                                                               [(byte)(&
                                                  alu_mul_mul8l)[uVar3 & 0xff][alu_x._1_1_]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [alu_x._1_1_]]] +
                            (uint)(byte)(&alu_mul_mul8l)[(byte)DAT_081fcfe2][alu_x._1_1_]],
                           CONCAT11((&alu_mul_sum8l)
                                    [(uint)(byte)(&alu_mul_sum8l)
                                                 [(uint)(byte)(&alu_mul_mul8h)[uVar3 & 0xff]
                                                              [alu_x._1_1_] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [alu_x._1_1_]]] +
                                     (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_][alu_x._1_1_]],
                                    (&alu_mul_sum8l)
                                    [(byte)(&alu_mul_mul8l)[uVar3 & 0xff][alu_x._1_1_]])) << 8;
  _alu_z2 = (uint)CONCAT11((&alu_mul_sum8l)
                           [(uint)(byte)(&alu_mul_sum8l)
                                        [(uint)(byte)(&alu_mul_mul8h)[uVar3 & 0xff]
                                                     [(byte)DAT_081fcfe2] +
                                         (uint)(byte)(&alu_mul_sum8h)
                                                     [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                            [(byte)DAT_081fcfe2]]] +
                            (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_][(byte)DAT_081fcfe2]],
                           (&alu_mul_sum8l)
                           [(byte)(&alu_mul_mul8l)[uVar3 & 0xff][(byte)DAT_081fcfe2]]) << 0x10;
  _alu_z3 = (uint)(byte)(&alu_mul_sum8l)[(byte)(&alu_mul_mul8l)[uVar3 & 0xff][DAT_081fcfe2._1_1_]]
            << 0x18;
  uVar6 = CONCAT12((char)*(uint *)(&alu_mul_sums +
                                  *(int *)(&alu_mul_shl2 +
                                          *(int *)(&alu_mul_sums +
                                                  *(int *)(&alu_mul_shl2 +
                                                          *(int *)(&alu_mul_sums +
                                                                  *(int *)(&alu_mul_shl2 +
                                                                          (uint)(byte)(&
                                                  alu_mul_sum8l)
                                                  [(uint)(byte)(&alu_mul_sum8l)
                                                               [(uint)(byte)(&alu_mul_mul8h)
                                                                            [uVar3 & 0xff]
                                                                            [alu_x._1_1_] +
                                                                (uint)(byte)(&alu_mul_sum8h)
                                                                            [(byte)(&alu_mul_mul8l)
                                                                                   [uVar3 & 0xff]
                                                                                   [alu_x._1_1_]]] +
                                                   (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                               [alu_x._1_1_]] * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[alu_x._1_1_][uVar3 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(uint)(byte)(&alu_mul_sum8l)
                                                                           [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar3 & 0xff][uVar3 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [uVar3 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [uVar3 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[(byte)DAT_081fcfe2]
                                                              [uVar3 & 0xff]] * 4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(byte)(&alu_mul_mul8l)
                                                                             [uVar3 & 0xff]
                                                                             [(byte)DAT_081fcfe2]] *
                                                          4)) * 4) +
                                  *(int *)(&alu_mul_shl2 +
                                          (*(uint *)(&alu_mul_sums +
                                                    *(int *)(&alu_mul_shl2 +
                                                            *(int *)(&alu_mul_sums +
                                                                    *(int *)(&alu_mul_shl2 +
                                                                            (uint)(byte)(&
                                                  alu_mul_sum8l)
                                                  [(byte)(&alu_mul_mul8l)[uVar3 & 0xff][alu_x._1_1_]
                                                  ] * 4) + *(int *)(&alu_mul_shl2 +
                                                                   (uint)(byte)(&alu_mul_sum8l)
                                                                               [(uint)(byte)(&
                                                  alu_mul_sum8l)
                                                  [(uint)(byte)(&alu_mul_mul8h)[uVar3 & 0xff]
                                                               [uVar3 & 0xff] +
                                                   (uint)(byte)(&alu_mul_sum8h)
                                                               [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                      [uVar3 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [uVar3 & 0xff]] * 4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (*(uint *)(&alu_mul_sums +
                                                                    _alu_mul_shl2 +
                                                                    *(int *)(&alu_mul_shl2 +
                                                                            ((uint)_alu_z0 & 0xff) *
                                                                            4)) >> 8 & 0xff) * 4))
                                           >> 8 & 0xff) * 4)),
                   CONCAT11((char)*(uint *)(&alu_mul_sums +
                                           *(int *)(&alu_mul_shl2 +
                                                   *(int *)(&alu_mul_sums +
                                                           *(int *)(&alu_mul_shl2 +
                                                                   (uint)(byte)(&alu_mul_sum8l)
                                                                               [(byte)(&
                                                  alu_mul_mul8l)[uVar3 & 0xff][alu_x._1_1_]] * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar3 & 0xff][uVar3 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [uVar3 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [uVar3 & 0xff]] * 4)) * 4) +
                                           *(int *)(&alu_mul_shl2 +
                                                   (*(uint *)(&alu_mul_sums +
                                                             _alu_mul_shl2 +
                                                             *(int *)(&alu_mul_shl2 +
                                                                     ((uint)_alu_z0 & 0xff) * 4)) >>
                                                    8 & 0xff) * 4)),
                            (char)*(uint *)(&alu_mul_sums +
                                           _alu_mul_shl2 +
                                           *(int *)(&alu_mul_shl2 + ((uint)_alu_z0 & 0xff) * 4))));
  R3 = (undefined *)
       CONCAT13((char)*(uint *)(&alu_mul_sums +
                               *(int *)(&alu_mul_shl2 +
                                       *(int *)(&alu_mul_sums +
                                               *(int *)(&alu_mul_shl2 +
                                                       *(int *)(&alu_mul_sums +
                                                               *(int *)(&alu_mul_shl2 +
                                                                       *(int *)(&alu_mul_sums +
                                                                               *(int *)(&
                                                  alu_mul_shl2 +
                                                  (uint)(byte)(&alu_mul_sum8l)
                                                              [(uint)(byte)(&alu_mul_sum8l)
                                                                           [(uint)(byte)(&
                                                  alu_mul_mul8h)[alu_x._1_1_][alu_x._1_1_] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(uint)(byte)(&alu_mul_sum8l)
                                                                           [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar3 & 0xff][alu_x._1_1_] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [alu_x._1_1_]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [alu_x._1_1_]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[(byte)DAT_081fcfe2]
                                                              [alu_x._1_1_]] * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[(byte)DAT_081fcfe2][uVar3 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(uint)(byte)(&alu_mul_sum8l)
                                                                           [(uint)(byte)(&
                                                  alu_mul_mul8h)[alu_x._1_1_][uVar3 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(uint)(byte)(&alu_mul_sum8l)
                                                                           [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar3 & 0xff][uVar3 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [uVar3 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [uVar3 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[(byte)DAT_081fcfe2]
                                                              [uVar3 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[DAT_081fcfe2._1_1_]
                                                              [uVar3 & 0xff]] * 4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar3 & 0xff][(byte)DAT_081fcfe2] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [(byte)DAT_081fcfe2]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [(byte)DAT_081fcfe2]] * 4)) * 4) +
                                               *(int *)(&alu_mul_shl2 +
                                                       (uint)(byte)(&alu_mul_sum8l)
                                                                   [(byte)(&alu_mul_mul8l)
                                                                          [uVar3 & 0xff]
                                                                          [DAT_081fcfe2._1_1_]] * 4)
                                               ) * 4) +
                               *(int *)(&alu_mul_shl2 +
                                       (*(uint *)(&alu_mul_sums +
                                                 *(int *)(&alu_mul_shl2 +
                                                         *(int *)(&alu_mul_sums +
                                                                 *(int *)(&alu_mul_shl2 +
                                                                         *(int *)(&alu_mul_sums +
                                                                                 *(int *)(&
                                                  alu_mul_shl2 +
                                                  (uint)(byte)(&alu_mul_sum8l)
                                                              [(uint)(byte)(&alu_mul_sum8l)
                                                                           [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar3 & 0xff][alu_x._1_1_] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [alu_x._1_1_]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [alu_x._1_1_]] * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[alu_x._1_1_][uVar3 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(uint)(byte)(&alu_mul_sum8l)
                                                                           [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar3 & 0xff][uVar3 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [uVar3 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [uVar3 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[(byte)DAT_081fcfe2]
                                                              [uVar3 & 0xff]] * 4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(byte)(&alu_mul_mul8l)
                                                                             [uVar3 & 0xff]
                                                                             [(byte)DAT_081fcfe2]] *
                                                          4)) * 4) +
                                                 *(int *)(&alu_mul_shl2 +
                                                         (*(uint *)(&alu_mul_sums +
                                                                   *(int *)(&alu_mul_shl2 +
                                                                           *(int *)(&alu_mul_sums +
                                                                                   *(int *)(&
                                                  alu_mul_shl2 +
                                                  (uint)(byte)(&alu_mul_sum8l)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [alu_x._1_1_]] * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar3 & 0xff][uVar3 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [uVar3 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [uVar3 & 0xff]] * 4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (*(uint *)(&alu_mul_sums +
                                                                    _alu_mul_shl2 +
                                                                    *(int *)(&alu_mul_shl2 +
                                                                            ((uint)_alu_z0 & 0xff) *
                                                                            4)) >> 8 & 0xff) * 4))
                                                  >> 8 & 0xff) * 4)) >> 8 & 0xff) * 4)),uVar6);
  R2 = *(uint *)(&sel_data)[on];
  uVar4 = *(uint *)((&alu_add16)
                    [*(int *)((&alu_add16)[(uint)uVar6 & 0xffff] +
                             (uint)*(ushort *)(&alu_inv16 + (R2 & 0xffff) * 2) * 4)] + 4);
  alu_s._3_1_ = (byte)(*(uint *)((&alu_add16)
                                 [*(int *)((&alu_add16)[(uint)R3 >> 0x10] +
                                          (uint)*(ushort *)(&alu_inv16 + (R2 >> 0x10) * 2) * 4)] +
                                (uVar4 >> 0x10) * 4) >> 8);
  sf = sf & 0xffffff00 | *(uint *)(&alu_b7 + (uint)alu_s._3_1_ * 4) & 0xff;
  zf = zf & 0xffffff00 |
       (uint)(byte)(&alu_false)
                   [(byte)(&alu_true)
                          [(uint)(byte)(&alu_true)
                                       [(uint)(byte)(&alu_true)
                                                    [(uint)(byte)(&alu_true)[uVar4 & 0xff] +
                                                     (uVar4 >> 8 & 0xff)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[(uint)R3 >> 0x10] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 + (R2 >> 0x10) * 2) *
                                                            4)] + (uVar4 >> 0x10) * 4) & 0xff)] +
                           (uint)alu_s._3_1_]];
  of = of & 0xffffff00 |
       **(uint **)(*(int *)((&alu_cmp_of)
                            [*(uint *)(&alu_b7 +
                                      (*(uint *)(&alu_mul_sums +
                                                *(int *)(&alu_mul_shl2 +
                                                        *(int *)(&alu_mul_sums +
                                                                *(int *)(&alu_mul_shl2 +
                                                                        *(int *)(&alu_mul_sums +
                                                                                *(int *)(&
                                                  alu_mul_shl2 +
                                                  *(int *)(&alu_mul_sums +
                                                          *(int *)(&alu_mul_shl2 +
                                                                  (uint)(byte)(&alu_mul_sum8l)
                                                                              [(uint)(byte)(&
                                                  alu_mul_sum8l)
                                                  [(uint)(byte)(&alu_mul_mul8h)[alu_x._1_1_]
                                                               [alu_x._1_1_] +
                                                   (uint)(byte)(&alu_mul_sum8h)
                                                               [(uint)(byte)(&alu_mul_sum8l)
                                                                            [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar3 & 0xff][alu_x._1_1_] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [alu_x._1_1_]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [alu_x._1_1_]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[(byte)DAT_081fcfe2]
                                                              [alu_x._1_1_]] * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[(byte)DAT_081fcfe2][uVar3 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(uint)(byte)(&alu_mul_sum8l)
                                                                           [(uint)(byte)(&
                                                  alu_mul_mul8h)[alu_x._1_1_][uVar3 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(uint)(byte)(&alu_mul_sum8l)
                                                                           [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar3 & 0xff][uVar3 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [uVar3 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [uVar3 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[(byte)DAT_081fcfe2]
                                                              [uVar3 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[DAT_081fcfe2._1_1_]
                                                              [uVar3 & 0xff]] * 4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar3 & 0xff][(byte)DAT_081fcfe2] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [(byte)DAT_081fcfe2]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [(byte)DAT_081fcfe2]] * 4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(byte)(&alu_mul_mul8l)
                                                                             [uVar3 & 0xff]
                                                                             [DAT_081fcfe2._1_1_]] *
                                                          4)) * 4) +
                                                *(int *)(&alu_mul_shl2 +
                                                        (*(uint *)(&alu_mul_sums +
                                                                  *(int *)(&alu_mul_shl2 +
                                                                          *(int *)(&alu_mul_sums +
                                                                                  *(int *)(&
                                                  alu_mul_shl2 +
                                                  *(int *)(&alu_mul_sums +
                                                          *(int *)(&alu_mul_shl2 +
                                                                  (uint)(byte)(&alu_mul_sum8l)
                                                                              [(uint)(byte)(&
                                                  alu_mul_sum8l)
                                                  [(uint)(byte)(&alu_mul_mul8h)[uVar3 & 0xff]
                                                               [alu_x._1_1_] +
                                                   (uint)(byte)(&alu_mul_sum8h)
                                                               [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                      [alu_x._1_1_]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [alu_x._1_1_]] * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[alu_x._1_1_][uVar3 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(uint)(byte)(&alu_mul_sum8l)
                                                                           [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar3 & 0xff][uVar3 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [uVar3 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [uVar3 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[(byte)DAT_081fcfe2]
                                                              [uVar3 & 0xff]] * 4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(byte)(&alu_mul_mul8l)
                                                                             [uVar3 & 0xff]
                                                                             [(byte)DAT_081fcfe2]] *
                                                          4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (*(uint *)(&alu_mul_sums +
                                                                    *(int *)(&alu_mul_shl2 +
                                                                            *(int *)(&alu_mul_sums +
                                                                                    *(int *)(&
                                                  alu_mul_shl2 +
                                                  (uint)(byte)(&alu_mul_sum8l)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [alu_x._1_1_]] * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar3 & 0xff][uVar3 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [uVar3 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [uVar3 & 0xff]] * 4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (*(uint *)(&alu_mul_sums +
                                                                    _alu_mul_shl2 +
                                                                    *(int *)(&alu_mul_shl2 +
                                                                            ((uint)_alu_z0 & 0xff) *
                                                                            4)) >> 8 & 0xff) * 4))
                                                  >> 8 & 0xff) * 4)) >> 8 & 0xff) * 4)) & 0xff) * 4)
                            ] + *(uint *)(&alu_b7 +
                                         (*(uint *)(&alu_b7 +
                                                   (*(uint *)(&alu_mul_sums +
                                                             *(int *)(&alu_mul_shl2 +
                                                                     *(int *)(&alu_mul_sums +
                                                                             *(int *)(&alu_mul_shl2
                                                                                     + *(int *)(&
                                                  alu_mul_sums +
                                                  *(int *)(&alu_mul_shl2 +
                                                          *(int *)(&alu_mul_sums +
                                                                  *(int *)(&alu_mul_shl2 +
                                                                          (uint)(byte)(&
                                                  alu_mul_sum8l)
                                                  [(uint)(byte)(&alu_mul_sum8l)
                                                               [(uint)(byte)(&alu_mul_mul8h)
                                                                            [alu_x._1_1_]
                                                                            [alu_x._1_1_] +
                                                                (uint)(byte)(&alu_mul_sum8h)
                                                                            [(uint)(byte)(&
                                                  alu_mul_sum8l)
                                                  [(uint)(byte)(&alu_mul_mul8h)[uVar3 & 0xff]
                                                               [alu_x._1_1_] +
                                                   (uint)(byte)(&alu_mul_sum8h)
                                                               [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                      [alu_x._1_1_]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [alu_x._1_1_]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[(byte)DAT_081fcfe2]
                                                              [alu_x._1_1_]] * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[(byte)DAT_081fcfe2][uVar3 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(uint)(byte)(&alu_mul_sum8l)
                                                                           [(uint)(byte)(&
                                                  alu_mul_mul8h)[alu_x._1_1_][uVar3 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(uint)(byte)(&alu_mul_sum8l)
                                                                           [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar3 & 0xff][uVar3 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [uVar3 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [uVar3 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[(byte)DAT_081fcfe2]
                                                              [uVar3 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[DAT_081fcfe2._1_1_]
                                                              [uVar3 & 0xff]] * 4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar3 & 0xff][(byte)DAT_081fcfe2] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [(byte)DAT_081fcfe2]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [(byte)DAT_081fcfe2]] * 4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(byte)(&alu_mul_mul8l)
                                                                             [uVar3 & 0xff]
                                                                             [DAT_081fcfe2._1_1_]] *
                                                          4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (*(uint *)(&alu_mul_sums +
                                                                    *(int *)(&alu_mul_shl2 +
                                                                            *(int *)(&alu_mul_sums +
                                                                                    *(int *)(&
                                                  alu_mul_shl2 +
                                                  *(int *)(&alu_mul_sums +
                                                          *(int *)(&alu_mul_shl2 +
                                                                  (uint)(byte)(&alu_mul_sum8l)
                                                                              [(uint)(byte)(&
                                                  alu_mul_sum8l)
                                                  [(uint)(byte)(&alu_mul_mul8h)[uVar3 & 0xff]
                                                               [alu_x._1_1_] +
                                                   (uint)(byte)(&alu_mul_sum8h)
                                                               [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                      [alu_x._1_1_]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [alu_x._1_1_]] * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[alu_x._1_1_][uVar3 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(uint)(byte)(&alu_mul_sum8l)
                                                                           [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar3 & 0xff][uVar3 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [uVar3 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [uVar3 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[(byte)DAT_081fcfe2]
                                                              [uVar3 & 0xff]] * 4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(byte)(&alu_mul_mul8l)
                                                                             [uVar3 & 0xff]
                                                                             [(byte)DAT_081fcfe2]] *
                                                          4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (*(uint *)(&alu_mul_sums +
                                                                    *(int *)(&alu_mul_shl2 +
                                                                            *(int *)(&alu_mul_sums +
                                                                                    *(int *)(&
                                                  alu_mul_shl2 +
                                                  (uint)(byte)(&alu_mul_sum8l)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [alu_x._1_1_]] * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar3 & 0xff][uVar3 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [uVar3 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [uVar3 & 0xff]] * 4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (*(uint *)(&alu_mul_sums +
                                                                    _alu_mul_shl2 +
                                                                    *(int *)(&alu_mul_shl2 +
                                                                            ((uint)_alu_z0 & 0xff) *
                                                                            4)) >> 8 & 0xff) * 4))
                                                  >> 8 & 0xff) * 4)) >> 8 & 0xff) * 4)) & 0xff) * 4)
                                          & 0xffffff00 | R2 >> 0x18) * 4) * 4) +
                  *(int *)(&alu_b7 +
                          (*(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 +
                                              (*(uint *)(&alu_mul_sums +
                                                        *(int *)(&alu_mul_shl2 +
                                                                *(int *)(&alu_mul_sums +
                                                                        *(int *)(&alu_mul_shl2 +
                                                                                *(int *)(&
                                                  alu_mul_sums +
                                                  *(int *)(&alu_mul_shl2 +
                                                          *(int *)(&alu_mul_sums +
                                                                  *(int *)(&alu_mul_shl2 +
                                                                          (uint)(byte)(&
                                                  alu_mul_sum8l)
                                                  [(uint)(byte)(&alu_mul_sum8l)
                                                               [(uint)(byte)(&alu_mul_mul8h)
                                                                            [alu_x._1_1_]
                                                                            [alu_x._1_1_] +
                                                                (uint)(byte)(&alu_mul_sum8h)
                                                                            [(uint)(byte)(&
                                                  alu_mul_sum8l)
                                                  [(uint)(byte)(&alu_mul_mul8h)[uVar3 & 0xff]
                                                               [alu_x._1_1_] +
                                                   (uint)(byte)(&alu_mul_sum8h)
                                                               [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                      [alu_x._1_1_]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [alu_x._1_1_]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[(byte)DAT_081fcfe2]
                                                              [alu_x._1_1_]] * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[(byte)DAT_081fcfe2][uVar3 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(uint)(byte)(&alu_mul_sum8l)
                                                                           [(uint)(byte)(&
                                                  alu_mul_mul8h)[alu_x._1_1_][uVar3 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(uint)(byte)(&alu_mul_sum8l)
                                                                           [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar3 & 0xff][uVar3 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [uVar3 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [uVar3 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[(byte)DAT_081fcfe2]
                                                              [uVar3 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[DAT_081fcfe2._1_1_]
                                                              [uVar3 & 0xff]] * 4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar3 & 0xff][(byte)DAT_081fcfe2] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [(byte)DAT_081fcfe2]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [(byte)DAT_081fcfe2]] * 4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(byte)(&alu_mul_mul8l)
                                                                             [uVar3 & 0xff]
                                                                             [DAT_081fcfe2._1_1_]] *
                                                          4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (*(uint *)(&alu_mul_sums +
                                                                    *(int *)(&alu_mul_shl2 +
                                                                            *(int *)(&alu_mul_sums +
                                                                                    *(int *)(&
                                                  alu_mul_shl2 +
                                                  *(int *)(&alu_mul_sums +
                                                          *(int *)(&alu_mul_shl2 +
                                                                  (uint)(byte)(&alu_mul_sum8l)
                                                                              [(uint)(byte)(&
                                                  alu_mul_sum8l)
                                                  [(uint)(byte)(&alu_mul_mul8h)[uVar3 & 0xff]
                                                               [alu_x._1_1_] +
                                                   (uint)(byte)(&alu_mul_sum8h)
                                                               [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                      [alu_x._1_1_]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [alu_x._1_1_]] * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[alu_x._1_1_][uVar3 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(uint)(byte)(&alu_mul_sum8l)
                                                                           [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar3 & 0xff][uVar3 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [uVar3 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [uVar3 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[(byte)DAT_081fcfe2]
                                                              [uVar3 & 0xff]] * 4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(byte)(&alu_mul_mul8l)
                                                                             [uVar3 & 0xff]
                                                                             [(byte)DAT_081fcfe2]] *
                                                          4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (*(uint *)(&alu_mul_sums +
                                                                    *(int *)(&alu_mul_shl2 +
                                                                            *(int *)(&alu_mul_sums +
                                                                                    *(int *)(&
                                                  alu_mul_shl2 +
                                                  (uint)(byte)(&alu_mul_sum8l)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [alu_x._1_1_]] * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar3 & 0xff][uVar3 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [uVar3 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [uVar3 & 0xff]] * 4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (*(uint *)(&alu_mul_sums +
                                                                    _alu_mul_shl2 +
                                                                    *(int *)(&alu_mul_shl2 +
                                                                            ((uint)_alu_z0 & 0xff) *
                                                                            4)) >> 8 & 0xff) * 4))
                                                  >> 8 & 0xff) * 4)) >> 8 & 0xff) * 4)) & 0xff) * 4)
                                     & 0xffffff00 | R2 >> 0x18) * 4) & 0xffffff00 |
                          (uint)alu_s._3_1_) * 4) * 4) & 0xff;
  b0 = *(int *)((&and)[*(int *)((&or)[*(int *)((&xor)[sf] + of * 4)] + zf * 4)] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x88049702;
  iVar2 = b0;
  puVar1 = (undefined4 *)(&sel_data)[b0];
  *puVar1 = R0;
  puVar1[1] = R1;
  puVar1[2] = R2;
  *(undefined **)(puVar1 + 3) = R3;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = F0;
  puVar1[1] = F1;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = D0;
  puVar1[1] = DAT_08054064;
  puVar1[2] = D1;
  puVar1[3] = DAT_0805406c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  R0 = 1;
  iVar2 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x55]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][1] * 4)]
                                  + (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar2;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_f1;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d0;
  puVar1[1] = DAT_085fd19c;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d1;
  puVar1[1] = DAT_085fd1a4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined **)(&sel_data)[on] = fp;
  stack_temp = *(char **)sp;
  DAT_081fd104 = *(undefined4 *)(sp + 4);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&pop + *(int *)(sp + -0x200060));
  puVar1 = (undefined4 *)(&sel_data)[on];
  *(char **)puVar1 = stack_temp;
  puVar1[1] = DAT_081fd104;
  stack_temp = *(char **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = *(char **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = *(char **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = *(char **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = *(char **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = *(char **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(char **)(&sel_target)[on] = stack_temp;
  iVar2 = on;
  puVar1 = (undefined4 *)(&sel_data)[on];
  *puVar1 = R0;
  puVar1[1] = R1;
  puVar1[2] = R2;
  *(undefined **)(puVar1 + 3) = R3;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = F0;
  puVar1[1] = F1;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = D0;
  puVar1[1] = DAT_08054064;
  puVar1[2] = D1;
  puVar1[3] = DAT_0805406c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar2 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x41]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][6] * 4)]
                                  + (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar2;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_f1;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d0;
  puVar1[1] = DAT_085fd19c;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d1;
  puVar1[1] = DAT_085fd1a4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = fp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = (char *)R1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = (char *)R2;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = (char *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = (char *)D1;
  DAT_081fd104 = DAT_0805406c;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&push + *(int *)(sp + -0x200068));
  puVar1 = (undefined4 *)(&sel_data)[on];
  *(char **)puVar1 = stack_temp;
  puVar1[1] = DAT_081fd104;
  *(undefined **)(&sel_data)[on] = sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  stack_temp = s_primes__1_100000__08054026;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = (char *)(*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_2992_0806ade0] & 0xffff |
                       *(int *)((&alu_add16)[*(int *)(PTR_alu_add16_34821_08089f34 + 0x20000)] +
                               (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_2992_0806ade0] >> 0x10)
                               * 4) << 0x10);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  R0 = *(uint *)(&fault)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 *)(&sel_data)[on] = 1;
  iVar2 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x4d]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xc] * 4
                                                  )] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar2;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_f1;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d0;
  puVar1[1] = DAT_085fd19c;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d1;
  puVar1[1] = DAT_085fd1a4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R3 = *(undefined **)(&sel_data)[on];
  stack_temp = R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = (char *)0x88050fb5;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88048764;
  iVar2 = on;
  puVar5 = (uint *)(&sel_data)[on];
  *puVar5 = R0;
  puVar5[1] = R1;
  puVar5[2] = R2;
  *(undefined **)(puVar5 + 3) = R3;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = F0;
  puVar1[1] = F1;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = D0;
  puVar1[1] = DAT_08054064;
  puVar1[2] = D1;
  puVar1[3] = DAT_0805406c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar2 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xb5]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xf] * 4
                                                  )] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar2;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_f1;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d0;
  puVar1[1] = DAT_085fd19c;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d1;
  puVar1[1] = DAT_085fd1a4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  R3 = (undefined *)R0;
  R2 = 0;
  uVar3 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[R0 & 0xffff] + (uint)_alu_inv16 * 4)] + 4);
  sf = sf & 0xffffff00;
  zf = zf & 0xffffff00 |
       (uint)(byte)(&alu_false)
                   [(byte)(&alu_true)
                          [(uint)(byte)(&alu_true)
                                       [(uint)(byte)(&alu_true)
                                                    [(uint)(byte)(&alu_true)[uVar3 & 0xff] +
                                                     (uVar3 >> 8 & 0xff)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[R0 >> 0x10] +
                                                            (uint)_alu_inv16 * 4)] +
                                                  (uVar3 >> 0x10) * 4) & 0xff)] +
                           (*(uint *)((&alu_add16)
                                      [*(int *)((&alu_add16)[R0 >> 0x10] + (uint)_alu_inv16 * 4)] +
                                     (uVar3 >> 0x10) * 4) >> 8 & 0xff)]];
  of = of & 0xffffff00;
  b0 = *(int *)((&and)[zf] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x88051654;
  iVar2 = b0;
  puVar5 = (uint *)(&sel_data)[b0];
  *puVar5 = R0;
  puVar5[1] = R1;
  puVar5[2] = R2;
  *(undefined **)(puVar5 + 3) = R3;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = F0;
  puVar1[1] = F1;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = D0;
  puVar1[1] = DAT_08054064;
  puVar1[2] = D1;
  puVar1[3] = DAT_0805406c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  stack_temp = *(char **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = &DAT_08054022;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = (char *)(*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_5600_0806d6a0] & 0xffff |
                       *(int *)((&alu_add16)[*(int *)(PTR_alu_add16_34821_08089f34 + 0x20000)] +
                               (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_5600_0806d6a0] >> 0x10)
                               * 4) << 0x10);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  R0 = *(uint *)(&fault)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&pop + *(int *)(sp + -0x200060));
  iVar2 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x54]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x16] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar2;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_f1;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d0;
  puVar1[1] = DAT_085fd19c;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d1;
  puVar1[1] = DAT_085fd1a4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  iVar2 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x2e]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x18] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar2;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_f1;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d0;
  puVar1[1] = DAT_085fd19c;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d1;
  puVar1[1] = DAT_085fd1a4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(uint *)(&sel_data)[on] =
       *(uint *)(&alu_add16)[*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 4)] & 0xffff
       | *(int *)((&alu_add16)[*(int *)(&alu_add16)[*(uint *)(&sel_data)[on] >> 0x10]] +
                 (*(uint *)(&alu_add16)
                           [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 4)] >> 0x10)
                 * 4) << 0x10;
  R3 = *(undefined **)(&sel_data)[on];
  R2 = 10000;
  alu_t = 10000;
  uVar3 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)R3 & 0xffff] + (uint)uRam0816ce60 * 4)]
                   + 4);
  uVar4 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)R3 >> 0x10] + (uint)_alu_inv16 * 4)] +
                   (uVar3 >> 0x10) * 4);
  _DAT_081fcfee = (undefined2)uVar4;
  cf = (&alu_false)[uVar4 >> 0x10 & 0xff];
  alu_s._3_1_ = (byte)(uVar4 >> 8);
  sf = sf & 0xffffff00 | *(uint *)(&alu_b7 + (uint)alu_s._3_1_ * 4) & 0xff;
  zf = zf & 0xffffff00 |
       (uint)(byte)(&alu_false)
                   [(byte)(&alu_true)
                          [(uint)(byte)(&alu_true)
                                       [(uint)(byte)(&alu_true)
                                                    [(uint)(byte)(&alu_true)[uVar3 & 0xff] +
                                                     (uVar3 >> 8 & 0xff)] + (uVar4 & 0xff)] +
                           (uint)alu_s._3_1_]];
  of = of & 0xffffff00 |
       **(uint **)(*(int *)((&alu_cmp_of)[*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4)] +
                           *(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4) & 0xffffff00) * 4)
                           * 4) +
                  *(int *)(&alu_b7 +
                          (*(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4) & 0xffffff00) * 4)
                           & 0xffffff00 | (uint)alu_s._3_1_) * 4) * 4) & 0xff;
  b0 = *(int *)((&and)[*(int *)((&xor)[sf] + of * 4)] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x88050c4d;
  iVar2 = b0;
  puVar1 = (undefined4 *)(&sel_data)[b0];
  *puVar1 = R0;
  puVar1[1] = R1;
  puVar1[2] = R2;
  *(undefined **)(puVar1 + 3) = R3;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = F0;
  puVar1[1] = F1;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = D0;
  puVar1[1] = DAT_08054064;
  puVar1[2] = D1;
  puVar1[3] = DAT_0805406c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  R3 = &DAT_08054020;
  stack_temp = &DAT_08054020;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  iVar2 = *(int *)((&alu_add16)[*(int *)(PTR_alu_add16_34821_08089f34 + 0x20000)] +
                  (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_7909_0806fab4] >> 0x10) * 4);
  alu_s = *(uint *)(&alu_add16)[*(int *)PTR_alu_add16_7909_0806fab4] & 0xffff | iVar2 << 0x10;
  alu_c = (undefined)iVar2;
  uRam081fcff1 = (undefined)((uint)iVar2 >> 8);
  DAT_081fcff2 = (undefined2)((uint)iVar2 >> 0x10);
  stack_temp = (char *)alu_s;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  _external = printf;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  R0 = 0;
  _alu_x = target;
  _alu_y = 0x88051f5d;
  b1 = (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x1f];
  b2 = (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5];
  b3 = (uint)(byte)(&alu_eq)[target >> 0x18][0x88];
  iVar2 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x5d]] +
                                                  b1 * 4)] + b2 * 4)] + b3 * 4);
  b0 = iVar2;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_f1;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d0;
  puVar1[1] = DAT_085fd19c;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d1;
  puVar1[1] = DAT_085fd1a4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined **)(&sel_data)[on] = fp;
  stack_temp = *(char **)sp;
  DAT_081fd104 = *(undefined4 *)(sp + 4);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&pop + *(int *)(sp + -0x200060));
  puVar1 = (undefined4 *)(&sel_data)[on];
  *(char **)puVar1 = stack_temp;
  puVar1[1] = DAT_081fd104;
  stack_temp = *(char **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = *(char **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = *(char **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = *(char **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = *(char **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = *(char **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  branch_temp = stack_temp;
  *(char **)(&sel_target)[on] = stack_temp;
  iVar2 = on;
  puVar1 = (undefined4 *)(&sel_data)[on];
  *puVar1 = R0;
  puVar1[1] = R1;
  puVar1[2] = R2;
  *(undefined **)(puVar1 + 3) = R3;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = F0;
  puVar1[1] = F1;
  data_p = &jmp_d0;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = D0;
  puVar1[1] = DAT_08054064;
  puVar1[2] = D1;
  puVar1[3] = DAT_0805406c;
  *(undefined4 *)(&sel_on)[on] = 0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void is_prime(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint3 uVar6;
  
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][100]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x87] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][4] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_085fd19c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_085fd1a4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = fp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = (char *)R1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = (char *)R2;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = (char *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = (char *)D1;
  DAT_081fd104 = DAT_0805406c;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&push + *(int *)(sp + -0x200068));
  puVar2 = (undefined4 *)(&sel_data)[on];
  *(char **)puVar2 = stack_temp;
  puVar2[1] = DAT_081fd104;
  *(undefined **)(&sel_data)[on] = sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  R3 = *(undefined **)(&sel_data)[on];
  R2 = 1;
  uVar3 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)R3 & 0xffff] + (uint)uRam08168042 * 4)]
                   + 4);
  sf = sf & 0xffffff00;
  zf = zf & 0xffffff00 |
       (uint)(byte)(&alu_false)
                   [(byte)(&alu_true)
                          [(uint)(byte)(&alu_true)
                                       [(uint)(byte)(&alu_true)
                                                    [(uint)(byte)(&alu_true)[uVar3 & 0xff] +
                                                     (uVar3 >> 8 & 0xff)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[(uint)R3 >> 0x10] +
                                                            (uint)_alu_inv16 * 4)] +
                                                  (uVar3 >> 0x10) * 4) & 0xff)] +
                           (*(uint *)((&alu_add16)
                                      [*(int *)((&alu_add16)[(uint)R3 >> 0x10] +
                                               (uint)_alu_inv16 * 4)] + (uVar3 >> 0x10) * 4) >> 8 &
                           0xff)]];
  of = of & 0xffffff00;
  b0 = *(int *)((&and)[*(int *)(&alu_false + zf * 4)] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x88048eec;
  iVar1 = b0;
  puVar2 = (undefined4 *)(&sel_data)[b0];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  *(undefined **)(puVar2 + 3) = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_08054064;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805406c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  R0 = 0;
  *(undefined4 *)(&sel_target)[on] = 0x88050155;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  *(undefined **)(puVar2 + 3) = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_08054064;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805406c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xec]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x8e] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][4] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_085fd19c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_085fd1a4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R3 = *(undefined **)(&sel_data)[on];
  R2 = 2;
  uVar3 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)R3 & 0xffff] + (uint)uRam08168044 * 4)]
                   + 4);
  sf = sf & 0xffffff00;
  zf = zf & 0xffffff00 |
       (uint)(byte)(&alu_false)
                   [(byte)(&alu_true)
                          [(uint)(byte)(&alu_true)
                                       [(uint)(byte)(&alu_true)
                                                    [(uint)(byte)(&alu_true)[uVar3 & 0xff] +
                                                     (uVar3 >> 8 & 0xff)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[(uint)R3 >> 0x10] +
                                                            (uint)_alu_inv16 * 4)] +
                                                  (uVar3 >> 0x10) * 4) & 0xff)] +
                           (*(uint *)((&alu_add16)
                                      [*(int *)((&alu_add16)[(uint)R3 >> 0x10] +
                                               (uint)_alu_inv16 * 4)] + (uVar3 >> 0x10) * 4) >> 8 &
                           0xff)]];
  of = of & 0xffffff00;
  b0 = *(int *)((&and)[*(int *)(&alu_false + zf * 4)] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x88049439;
  iVar1 = b0;
  puVar2 = (undefined4 *)(&sel_data)[b0];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  *(undefined **)(puVar2 + 3) = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_08054064;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805406c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  R0 = 1;
  *(undefined4 *)(&sel_target)[on] = 0x88050155;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  *(undefined **)(puVar2 + 3) = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_08054064;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805406c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x39]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x94] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][4] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_085fd19c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_085fd1a4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R3 = (undefined *)0x2;
  *(undefined4 *)(&sel_data)[on] = 2;
  *(undefined4 *)(&sel_target)[on] = 0x8804f66f;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  *(undefined **)(puVar2 + 3) = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_08054064;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805406c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][2]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x97] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][4] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_085fd19c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_085fd1a4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  _alu_n = *(uint *)(&sel_data)[on];
  _alu_d = *(uint *)(&sel_data)[on];
  alu_ns = *(int *)(&alu_b7 + (_alu_n >> 0x18) * 4);
  alu_ds = *(int *)(&alu_b7 + (_alu_d >> 0x18) * 4);
  alu_rs = alu_ns;
  *(uint *)(&sel_data)[alu_ns] =
       *(uint *)((&alu_add16)
                 [*(int *)(alu_add16 + (uint)*(ushort *)(&alu_inv16 + (_alu_n & 0xffff) * 2) * 4)] +
                4) & 0xffff |
       *(int *)((&alu_add16)
                [*(int *)(alu_add16 + (uint)*(ushort *)(&alu_inv16 + (_alu_n >> 0x10) * 2) * 4)] +
               (*(uint *)((&alu_add16)
                          [*(int *)(alu_add16 +
                                   (uint)*(ushort *)(&alu_inv16 + (_alu_n & 0xffff) * 2) * 4)] + 4)
               >> 0x10) * 4) << 0x10;
  *(uint *)(&sel_data)[alu_ds] =
       *(uint *)((&alu_add16)
                 [*(int *)(alu_add16 + (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                4) & 0xffff |
       *(int *)((&alu_add16)
                [*(int *)(alu_add16 + (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
               (*(uint *)((&alu_add16)
                          [*(int *)(alu_add16 +
                                   (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4)
               >> 0x10) * 4) << 0x10;
  _alu_q = 0;
  uVar4 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b7 +
                                                                      (_alu_n >> 0x18) * 4) & 0xff)
                                                            * 4 + _alu_div_shl3_8_d) >> 8 & 0xff) *
                                                  4 + _alu_div_shl3_8_d) >> 8 & 0xff) * 4 +
                                        _alu_div_shl3_8_d),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b7 + (_alu_n >> 0x18) * 4
                                                                     ) & 0xff) * 4 +
                                                           _alu_div_shl3_8_d) >> 8 & 0xff) * 4 +
                                                 _alu_div_shl3_8_d),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b7 + (_alu_n >> 0x18) * 4) & 0xff)
                                                 * 4 + _alu_div_shl3_8_d)));
  _alu_r = uVar4 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b7 + (_alu_n >> 0x18) * 4)
                                                         & 0xff) * 4 + _alu_div_shl3_8_d) >> 8 &
                                               0xff) * 4 + _alu_div_shl3_8_d) >> 8 & 0xff) * 4 +
                                     _alu_div_shl3_8_d) >> 8 & 0xff) * 4 + _alu_div_shl3_8_d) <<
                   0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar3 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar3 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  _alu_sq = *alu_psel_q & 0xffffff | (uint)(byte)(&alu_b_s_7)[*alu_psel_q >> 0x18] << 0x18;
  *alu_psel_q = _alu_sq;
  uVar4 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b6 +
                                                                      (_alu_n >> 0x18) * 4) & 0xff)
                                                            * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                          (_alu_r & 0xff) * 4)) >> 8
                                                  & 0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b6 + (_alu_n >> 0x18) * 4
                                                                     ) & 0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b6 + (_alu_n >> 0x18) * 4) & 0xff)
                                                 * 4 + *(int *)(&alu_div_shl3_8_d +
                                                               (_alu_r & 0xff) * 4))));
  _alu_r = uVar4 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b6 + (_alu_n >> 0x18) * 4)
                                                         & 0xff) * 4 +
                                                         *(int *)(&alu_div_shl3_8_d +
                                                                 (_alu_r & 0xff) * 4)) >> 8 & 0xff)
                                               * 4 + *(int *)(&alu_div_shl3_8_d +
                                                             ((_alu_r & 0xff00) >> 8) * 4)) >> 8 &
                                     0xff) * 4 +
                                     *(int *)(&alu_div_shl3_8_d + ((_alu_r & 0xff0000) >> 0x10) * 4)
                                     ) >> 8 & 0xff) * 4 +
                           *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar3 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar3 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  _alu_sq = *alu_psel_q & 0xffffff | (uint)(byte)(&alu_b_s_6)[*alu_psel_q >> 0x18] << 0x18;
  *alu_psel_q = _alu_sq;
  uVar4 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b5 +
                                                                      (_alu_n >> 0x18) * 4) & 0xff)
                                                            * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                          (_alu_r & 0xff) * 4)) >> 8
                                                  & 0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b5 + (_alu_n >> 0x18) * 4
                                                                     ) & 0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b5 + (_alu_n >> 0x18) * 4) & 0xff)
                                                 * 4 + *(int *)(&alu_div_shl3_8_d +
                                                               (_alu_r & 0xff) * 4))));
  _alu_r = uVar4 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b5 + (_alu_n >> 0x18) * 4)
                                                         & 0xff) * 4 +
                                                         *(int *)(&alu_div_shl3_8_d +
                                                                 (_alu_r & 0xff) * 4)) >> 8 & 0xff)
                                               * 4 + *(int *)(&alu_div_shl3_8_d +
                                                             ((_alu_r & 0xff00) >> 8) * 4)) >> 8 &
                                     0xff) * 4 +
                                     *(int *)(&alu_div_shl3_8_d + ((_alu_r & 0xff0000) >> 0x10) * 4)
                                     ) >> 8 & 0xff) * 4 +
                           *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar3 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar3 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  _alu_sq = *alu_psel_q & 0xffffff | (uint)(byte)(&alu_b_s_5)[*alu_psel_q >> 0x18] << 0x18;
  *alu_psel_q = _alu_sq;
  uVar4 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b4 +
                                                                      (_alu_n >> 0x18) * 4) & 0xff)
                                                            * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                          (_alu_r & 0xff) * 4)) >> 8
                                                  & 0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b4 + (_alu_n >> 0x18) * 4
                                                                     ) & 0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b4 + (_alu_n >> 0x18) * 4) & 0xff)
                                                 * 4 + *(int *)(&alu_div_shl3_8_d +
                                                               (_alu_r & 0xff) * 4))));
  _alu_r = uVar4 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b4 + (_alu_n >> 0x18) * 4)
                                                         & 0xff) * 4 +
                                                         *(int *)(&alu_div_shl3_8_d +
                                                                 (_alu_r & 0xff) * 4)) >> 8 & 0xff)
                                               * 4 + *(int *)(&alu_div_shl3_8_d +
                                                             ((_alu_r & 0xff00) >> 8) * 4)) >> 8 &
                                     0xff) * 4 +
                                     *(int *)(&alu_div_shl3_8_d + ((_alu_r & 0xff0000) >> 0x10) * 4)
                                     ) >> 8 & 0xff) * 4 +
                           *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar3 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar3 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  _alu_sq = *alu_psel_q & 0xffffff | (uint)(byte)(&alu_b_s_4)[*alu_psel_q >> 0x18] << 0x18;
  *alu_psel_q = _alu_sq;
  uVar4 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b3 +
                                                                      (_alu_n >> 0x18) * 4) & 0xff)
                                                            * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                          (_alu_r & 0xff) * 4)) >> 8
                                                  & 0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b3 + (_alu_n >> 0x18) * 4
                                                                     ) & 0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b3 + (_alu_n >> 0x18) * 4) & 0xff)
                                                 * 4 + *(int *)(&alu_div_shl3_8_d +
                                                               (_alu_r & 0xff) * 4))));
  _alu_r = uVar4 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b3 + (_alu_n >> 0x18) * 4)
                                                         & 0xff) * 4 +
                                                         *(int *)(&alu_div_shl3_8_d +
                                                                 (_alu_r & 0xff) * 4)) >> 8 & 0xff)
                                               * 4 + *(int *)(&alu_div_shl3_8_d +
                                                             ((_alu_r & 0xff00) >> 8) * 4)) >> 8 &
                                     0xff) * 4 +
                                     *(int *)(&alu_div_shl3_8_d + ((_alu_r & 0xff0000) >> 0x10) * 4)
                                     ) >> 8 & 0xff) * 4 +
                           *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar3 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar3 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  _alu_sq = *alu_psel_q & 0xffffff | (uint)(byte)(&alu_b_s_3)[*alu_psel_q >> 0x18] << 0x18;
  *alu_psel_q = _alu_sq;
  uVar4 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b2 +
                                                                      (_alu_n >> 0x18) * 4) & 0xff)
                                                            * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                          (_alu_r & 0xff) * 4)) >> 8
                                                  & 0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b2 + (_alu_n >> 0x18) * 4
                                                                     ) & 0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b2 + (_alu_n >> 0x18) * 4) & 0xff)
                                                 * 4 + *(int *)(&alu_div_shl3_8_d +
                                                               (_alu_r & 0xff) * 4))));
  _alu_r = uVar4 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b2 + (_alu_n >> 0x18) * 4)
                                                         & 0xff) * 4 +
                                                         *(int *)(&alu_div_shl3_8_d +
                                                                 (_alu_r & 0xff) * 4)) >> 8 & 0xff)
                                               * 4 + *(int *)(&alu_div_shl3_8_d +
                                                             ((_alu_r & 0xff00) >> 8) * 4)) >> 8 &
                                     0xff) * 4 +
                                     *(int *)(&alu_div_shl3_8_d + ((_alu_r & 0xff0000) >> 0x10) * 4)
                                     ) >> 8 & 0xff) * 4 +
                           *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar3 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar3 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  _alu_sq = *alu_psel_q & 0xffffff | (uint)(byte)(&alu_b_s_2)[*alu_psel_q >> 0x18] << 0x18;
  *alu_psel_q = _alu_sq;
  uVar4 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b1 +
                                                                      (_alu_n >> 0x18) * 4) & 0xff)
                                                            * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                          (_alu_r & 0xff) * 4)) >> 8
                                                  & 0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b1 + (_alu_n >> 0x18) * 4
                                                                     ) & 0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b1 + (_alu_n >> 0x18) * 4) & 0xff)
                                                 * 4 + *(int *)(&alu_div_shl3_8_d +
                                                               (_alu_r & 0xff) * 4))));
  _alu_r = uVar4 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b1 + (_alu_n >> 0x18) * 4)
                                                         & 0xff) * 4 +
                                                         *(int *)(&alu_div_shl3_8_d +
                                                                 (_alu_r & 0xff) * 4)) >> 8 & 0xff)
                                               * 4 + *(int *)(&alu_div_shl3_8_d +
                                                             ((_alu_r & 0xff00) >> 8) * 4)) >> 8 &
                                     0xff) * 4 +
                                     *(int *)(&alu_div_shl3_8_d + ((_alu_r & 0xff0000) >> 0x10) * 4)
                                     ) >> 8 & 0xff) * 4 +
                           *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar3 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar3 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  _alu_sq = *alu_psel_q & 0xffffff | (uint)(byte)(&alu_b_s_1)[*alu_psel_q >> 0x18] << 0x18;
  *alu_psel_q = _alu_sq;
  uVar4 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b0 +
                                                                      (_alu_n >> 0x18) * 4) & 0xff)
                                                            * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                          (_alu_r & 0xff) * 4)) >> 8
                                                  & 0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b0 + (_alu_n >> 0x18) * 4
                                                                     ) & 0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b0 + (_alu_n >> 0x18) * 4) & 0xff)
                                                 * 4 + *(int *)(&alu_div_shl3_8_d +
                                                               (_alu_r & 0xff) * 4))));
  _alu_r = uVar4 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b0 + (_alu_n >> 0x18) * 4)
                                                         & 0xff) * 4 +
                                                         *(int *)(&alu_div_shl3_8_d +
                                                                 (_alu_r & 0xff) * 4)) >> 8 & 0xff)
                                               * 4 + *(int *)(&alu_div_shl3_8_d +
                                                             ((_alu_r & 0xff00) >> 8) * 4)) >> 8 &
                                     0xff) * 4 +
                                     *(int *)(&alu_div_shl3_8_d + ((_alu_r & 0xff0000) >> 0x10) * 4)
                                     ) >> 8 & 0xff) * 4 +
                           *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar3 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar3 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  _alu_sq = *alu_psel_q & 0xffffff | (uint)(byte)(&alu_b_s_0)[*alu_psel_q >> 0x18] << 0x18;
  *alu_psel_q = _alu_sq;
  uVar4 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b7 +
                                                                      (_alu_n >> 0x10 & 0xff) * 4) &
                                                            0xff) * 4 +
                                                            *(int *)(&alu_div_shl3_8_d +
                                                                    (_alu_r & 0xff) * 4)) >> 8 &
                                                  0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b7 +
                                                                     (_alu_n >> 0x10 & 0xff) * 4) &
                                                           0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b7 + (_alu_n >> 0x10 & 0xff) * 4) &
                                                 0xff) * 4 +
                                                 *(int *)(&alu_div_shl3_8_d + (_alu_r & 0xff) * 4)))
                        );
  _alu_r = uVar4 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b7 +
                                                                   (_alu_n >> 0x10 & 0xff) * 4) &
                                                         0xff) * 4 +
                                                         *(int *)(&alu_div_shl3_8_d +
                                                                 (_alu_r & 0xff) * 4)) >> 8 & 0xff)
                                               * 4 + *(int *)(&alu_div_shl3_8_d +
                                                             ((_alu_r & 0xff00) >> 8) * 4)) >> 8 &
                                     0xff) * 4 +
                                     *(int *)(&alu_div_shl3_8_d + ((_alu_r & 0xff0000) >> 0x10) * 4)
                                     ) >> 8 & 0xff) * 4 +
                           *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar3 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar3 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  uVar3 = *alu_psel_q;
  _alu_sq = (ushort)uVar3;
  _alu_sq = CONCAT12((&alu_b_s_7)[uVar3 >> 0x10 & 0xff],_alu_sq);
  _alu_sq = uVar3 & 0xff000000 | (uint)_alu_sq;
  *alu_psel_q = _alu_sq;
  uVar4 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b6 +
                                                                      (_alu_n >> 0x10 & 0xff) * 4) &
                                                            0xff) * 4 +
                                                            *(int *)(&alu_div_shl3_8_d +
                                                                    (_alu_r & 0xff) * 4)) >> 8 &
                                                  0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b6 +
                                                                     (_alu_n >> 0x10 & 0xff) * 4) &
                                                           0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b6 + (_alu_n >> 0x10 & 0xff) * 4) &
                                                 0xff) * 4 +
                                                 *(int *)(&alu_div_shl3_8_d + (_alu_r & 0xff) * 4)))
                        );
  _alu_r = uVar4 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b6 +
                                                                   (_alu_n >> 0x10 & 0xff) * 4) &
                                                         0xff) * 4 +
                                                         *(int *)(&alu_div_shl3_8_d +
                                                                 (_alu_r & 0xff) * 4)) >> 8 & 0xff)
                                               * 4 + *(int *)(&alu_div_shl3_8_d +
                                                             ((_alu_r & 0xff00) >> 8) * 4)) >> 8 &
                                     0xff) * 4 +
                                     *(int *)(&alu_div_shl3_8_d + ((_alu_r & 0xff0000) >> 0x10) * 4)
                                     ) >> 8 & 0xff) * 4 +
                           *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar3 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar3 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  uVar3 = *alu_psel_q;
  _alu_sq = (ushort)uVar3;
  _alu_sq = CONCAT12((&alu_b_s_6)[uVar3 >> 0x10 & 0xff],_alu_sq);
  _alu_sq = uVar3 & 0xff000000 | (uint)_alu_sq;
  *alu_psel_q = _alu_sq;
  uVar4 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b5 +
                                                                      (_alu_n >> 0x10 & 0xff) * 4) &
                                                            0xff) * 4 +
                                                            *(int *)(&alu_div_shl3_8_d +
                                                                    (_alu_r & 0xff) * 4)) >> 8 &
                                                  0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b5 +
                                                                     (_alu_n >> 0x10 & 0xff) * 4) &
                                                           0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b5 + (_alu_n >> 0x10 & 0xff) * 4) &
                                                 0xff) * 4 +
                                                 *(int *)(&alu_div_shl3_8_d + (_alu_r & 0xff) * 4)))
                        );
  _alu_r = uVar4 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b5 +
                                                                   (_alu_n >> 0x10 & 0xff) * 4) &
                                                         0xff) * 4 +
                                                         *(int *)(&alu_div_shl3_8_d +
                                                                 (_alu_r & 0xff) * 4)) >> 8 & 0xff)
                                               * 4 + *(int *)(&alu_div_shl3_8_d +
                                                             ((_alu_r & 0xff00) >> 8) * 4)) >> 8 &
                                     0xff) * 4 +
                                     *(int *)(&alu_div_shl3_8_d + ((_alu_r & 0xff0000) >> 0x10) * 4)
                                     ) >> 8 & 0xff) * 4 +
                           *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar3 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar3 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  uVar3 = *alu_psel_q;
  _alu_sq = (ushort)uVar3;
  _alu_sq = CONCAT12((&alu_b_s_5)[uVar3 >> 0x10 & 0xff],_alu_sq);
  _alu_sq = uVar3 & 0xff000000 | (uint)_alu_sq;
  *alu_psel_q = _alu_sq;
  uVar4 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b4 +
                                                                      (_alu_n >> 0x10 & 0xff) * 4) &
                                                            0xff) * 4 +
                                                            *(int *)(&alu_div_shl3_8_d +
                                                                    (_alu_r & 0xff) * 4)) >> 8 &
                                                  0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b4 +
                                                                     (_alu_n >> 0x10 & 0xff) * 4) &
                                                           0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b4 + (_alu_n >> 0x10 & 0xff) * 4) &
                                                 0xff) * 4 +
                                                 *(int *)(&alu_div_shl3_8_d + (_alu_r & 0xff) * 4)))
                        );
  _alu_r = uVar4 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b4 +
                                                                   (_alu_n >> 0x10 & 0xff) * 4) &
                                                         0xff) * 4 +
                                                         *(int *)(&alu_div_shl3_8_d +
                                                                 (_alu_r & 0xff) * 4)) >> 8 & 0xff)
                                               * 4 + *(int *)(&alu_div_shl3_8_d +
                                                             ((_alu_r & 0xff00) >> 8) * 4)) >> 8 &
                                     0xff) * 4 +
                                     *(int *)(&alu_div_shl3_8_d + ((_alu_r & 0xff0000) >> 0x10) * 4)
                                     ) >> 8 & 0xff) * 4 +
                           *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar3 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar3 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  uVar3 = *alu_psel_q;
  _alu_sq = (ushort)uVar3;
  _alu_sq = CONCAT12((&alu_b_s_4)[uVar3 >> 0x10 & 0xff],_alu_sq);
  _alu_sq = uVar3 & 0xff000000 | (uint)_alu_sq;
  *alu_psel_q = _alu_sq;
  uVar4 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b3 +
                                                                      (_alu_n >> 0x10 & 0xff) * 4) &
                                                            0xff) * 4 +
                                                            *(int *)(&alu_div_shl3_8_d +
                                                                    (_alu_r & 0xff) * 4)) >> 8 &
                                                  0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b3 +
                                                                     (_alu_n >> 0x10 & 0xff) * 4) &
                                                           0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b3 + (_alu_n >> 0x10 & 0xff) * 4) &
                                                 0xff) * 4 +
                                                 *(int *)(&alu_div_shl3_8_d + (_alu_r & 0xff) * 4)))
                        );
  _alu_r = uVar4 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b3 +
                                                                   (_alu_n >> 0x10 & 0xff) * 4) &
                                                         0xff) * 4 +
                                                         *(int *)(&alu_div_shl3_8_d +
                                                                 (_alu_r & 0xff) * 4)) >> 8 & 0xff)
                                               * 4 + *(int *)(&alu_div_shl3_8_d +
                                                             ((_alu_r & 0xff00) >> 8) * 4)) >> 8 &
                                     0xff) * 4 +
                                     *(int *)(&alu_div_shl3_8_d + ((_alu_r & 0xff0000) >> 0x10) * 4)
                                     ) >> 8 & 0xff) * 4 +
                           *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar3 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar3 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  uVar3 = *alu_psel_q;
  _alu_sq = (ushort)uVar3;
  _alu_sq = CONCAT12((&alu_b_s_3)[uVar3 >> 0x10 & 0xff],_alu_sq);
  _alu_sq = uVar3 & 0xff000000 | (uint)_alu_sq;
  *alu_psel_q = _alu_sq;
  uVar4 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b2 +
                                                                      (_alu_n >> 0x10 & 0xff) * 4) &
                                                            0xff) * 4 +
                                                            *(int *)(&alu_div_shl3_8_d +
                                                                    (_alu_r & 0xff) * 4)) >> 8 &
                                                  0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b2 +
                                                                     (_alu_n >> 0x10 & 0xff) * 4) &
                                                           0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b2 + (_alu_n >> 0x10 & 0xff) * 4) &
                                                 0xff) * 4 +
                                                 *(int *)(&alu_div_shl3_8_d + (_alu_r & 0xff) * 4)))
                        );
  _alu_r = uVar4 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b2 +
                                                                   (_alu_n >> 0x10 & 0xff) * 4) &
                                                         0xff) * 4 +
                                                         *(int *)(&alu_div_shl3_8_d +
                                                                 (_alu_r & 0xff) * 4)) >> 8 & 0xff)
                                               * 4 + *(int *)(&alu_div_shl3_8_d +
                                                             ((_alu_r & 0xff00) >> 8) * 4)) >> 8 &
                                     0xff) * 4 +
                                     *(int *)(&alu_div_shl3_8_d + ((_alu_r & 0xff0000) >> 0x10) * 4)
                                     ) >> 8 & 0xff) * 4 +
                           *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar3 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar3 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  uVar3 = *alu_psel_q;
  _alu_sq = (ushort)uVar3;
  _alu_sq = CONCAT12((&alu_b_s_2)[uVar3 >> 0x10 & 0xff],_alu_sq);
  _alu_sq = uVar3 & 0xff000000 | (uint)_alu_sq;
  *alu_psel_q = _alu_sq;
  uVar4 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b1 +
                                                                      (_alu_n >> 0x10 & 0xff) * 4) &
                                                            0xff) * 4 +
                                                            *(int *)(&alu_div_shl3_8_d +
                                                                    (_alu_r & 0xff) * 4)) >> 8 &
                                                  0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b1 +
                                                                     (_alu_n >> 0x10 & 0xff) * 4) &
                                                           0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b1 + (_alu_n >> 0x10 & 0xff) * 4) &
                                                 0xff) * 4 +
                                                 *(int *)(&alu_div_shl3_8_d + (_alu_r & 0xff) * 4)))
                        );
  _alu_r = uVar4 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b1 +
                                                                   (_alu_n >> 0x10 & 0xff) * 4) &
                                                         0xff) * 4 +
                                                         *(int *)(&alu_div_shl3_8_d +
                                                                 (_alu_r & 0xff) * 4)) >> 8 & 0xff)
                                               * 4 + *(int *)(&alu_div_shl3_8_d +
                                                             ((_alu_r & 0xff00) >> 8) * 4)) >> 8 &
                                     0xff) * 4 +
                                     *(int *)(&alu_div_shl3_8_d + ((_alu_r & 0xff0000) >> 0x10) * 4)
                                     ) >> 8 & 0xff) * 4 +
                           *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar3 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar3 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  uVar3 = *alu_psel_q;
  _alu_sq = (ushort)uVar3;
  _alu_sq = CONCAT12((&alu_b_s_1)[uVar3 >> 0x10 & 0xff],_alu_sq);
  _alu_sq = uVar3 & 0xff000000 | (uint)_alu_sq;
  *alu_psel_q = _alu_sq;
  uVar4 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b0 +
                                                                      (_alu_n >> 0x10 & 0xff) * 4) &
                                                            0xff) * 4 +
                                                            *(int *)(&alu_div_shl3_8_d +
                                                                    (_alu_r & 0xff) * 4)) >> 8 &
                                                  0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b0 +
                                                                     (_alu_n >> 0x10 & 0xff) * 4) &
                                                           0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b0 + (_alu_n >> 0x10 & 0xff) * 4) &
                                                 0xff) * 4 +
                                                 *(int *)(&alu_div_shl3_8_d + (_alu_r & 0xff) * 4)))
                        );
  _alu_r = uVar4 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b0 +
                                                                   (_alu_n >> 0x10 & 0xff) * 4) &
                                                         0xff) * 4 +
                                                         *(int *)(&alu_div_shl3_8_d +
                                                                 (_alu_r & 0xff) * 4)) >> 8 & 0xff)
                                               * 4 + *(int *)(&alu_div_shl3_8_d +
                                                             ((_alu_r & 0xff00) >> 8) * 4)) >> 8 &
                                     0xff) * 4 +
                                     *(int *)(&alu_div_shl3_8_d + ((_alu_r & 0xff0000) >> 0x10) * 4)
                                     ) >> 8 & 0xff) * 4 +
                           *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar3 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar3 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  uVar3 = *alu_psel_q;
  _alu_sq = (ushort)uVar3;
  _alu_sq = CONCAT12((&alu_b_s_0)[uVar3 >> 0x10 & 0xff],_alu_sq);
  _alu_sq = uVar3 & 0xff000000 | (uint)_alu_sq;
  *alu_psel_q = _alu_sq;
  uVar4 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b7 +
                                                                      (_alu_n >> 8 & 0xff) * 4) &
                                                            0xff) * 4 +
                                                            *(int *)(&alu_div_shl3_8_d +
                                                                    (_alu_r & 0xff) * 4)) >> 8 &
                                                  0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b7 +
                                                                     (_alu_n >> 8 & 0xff) * 4) &
                                                           0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b7 + (_alu_n >> 8 & 0xff) * 4) &
                                                 0xff) * 4 +
                                                 *(int *)(&alu_div_shl3_8_d + (_alu_r & 0xff) * 4)))
                        );
  _alu_r = uVar4 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b7 +
                                                                   (_alu_n >> 8 & 0xff) * 4) & 0xff)
                                                         * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                       (_alu_r & 0xff) * 4)) >> 8 &
                                               0xff) * 4 +
                                               *(int *)(&alu_div_shl3_8_d +
                                                       ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff) *
                                     4 + *(int *)(&alu_div_shl3_8_d +
                                                 ((_alu_r & 0xff0000) >> 0x10) * 4)) >> 8 & 0xff) *
                           4 + *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar3 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar3 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  uVar3 = *alu_psel_q;
  alu_sq = (undefined)uVar3;
  _alu_sq = CONCAT11((&alu_b_s_7)[uVar3 >> 8 & 0xff],alu_sq);
  _alu_sq = uVar3 & 0xffff0000 | (uint)_alu_sq;
  *alu_psel_q = _alu_sq;
  uVar4 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b6 +
                                                                      (_alu_n >> 8 & 0xff) * 4) &
                                                            0xff) * 4 +
                                                            *(int *)(&alu_div_shl3_8_d +
                                                                    (_alu_r & 0xff) * 4)) >> 8 &
                                                  0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b6 +
                                                                     (_alu_n >> 8 & 0xff) * 4) &
                                                           0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b6 + (_alu_n >> 8 & 0xff) * 4) &
                                                 0xff) * 4 +
                                                 *(int *)(&alu_div_shl3_8_d + (_alu_r & 0xff) * 4)))
                        );
  _alu_r = uVar4 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b6 +
                                                                   (_alu_n >> 8 & 0xff) * 4) & 0xff)
                                                         * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                       (_alu_r & 0xff) * 4)) >> 8 &
                                               0xff) * 4 +
                                               *(int *)(&alu_div_shl3_8_d +
                                                       ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff) *
                                     4 + *(int *)(&alu_div_shl3_8_d +
                                                 ((_alu_r & 0xff0000) >> 0x10) * 4)) >> 8 & 0xff) *
                           4 + *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar3 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar3 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  uVar3 = *alu_psel_q;
  alu_sq = (undefined)uVar3;
  _alu_sq = CONCAT11((&alu_b_s_6)[uVar3 >> 8 & 0xff],alu_sq);
  _alu_sq = uVar3 & 0xffff0000 | (uint)_alu_sq;
  *alu_psel_q = _alu_sq;
  uVar4 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b5 +
                                                                      (_alu_n >> 8 & 0xff) * 4) &
                                                            0xff) * 4 +
                                                            *(int *)(&alu_div_shl3_8_d +
                                                                    (_alu_r & 0xff) * 4)) >> 8 &
                                                  0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b5 +
                                                                     (_alu_n >> 8 & 0xff) * 4) &
                                                           0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b5 + (_alu_n >> 8 & 0xff) * 4) &
                                                 0xff) * 4 +
                                                 *(int *)(&alu_div_shl3_8_d + (_alu_r & 0xff) * 4)))
                        );
  _alu_r = uVar4 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b5 +
                                                                   (_alu_n >> 8 & 0xff) * 4) & 0xff)
                                                         * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                       (_alu_r & 0xff) * 4)) >> 8 &
                                               0xff) * 4 +
                                               *(int *)(&alu_div_shl3_8_d +
                                                       ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff) *
                                     4 + *(int *)(&alu_div_shl3_8_d +
                                                 ((_alu_r & 0xff0000) >> 0x10) * 4)) >> 8 & 0xff) *
                           4 + *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar3 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar3 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  uVar3 = *alu_psel_q;
  alu_sq = (undefined)uVar3;
  _alu_sq = CONCAT11((&alu_b_s_5)[uVar3 >> 8 & 0xff],alu_sq);
  _alu_sq = uVar3 & 0xffff0000 | (uint)_alu_sq;
  *alu_psel_q = _alu_sq;
  uVar4 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b4 +
                                                                      (_alu_n >> 8 & 0xff) * 4) &
                                                            0xff) * 4 +
                                                            *(int *)(&alu_div_shl3_8_d +
                                                                    (_alu_r & 0xff) * 4)) >> 8 &
                                                  0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b4 +
                                                                     (_alu_n >> 8 & 0xff) * 4) &
                                                           0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b4 + (_alu_n >> 8 & 0xff) * 4) &
                                                 0xff) * 4 +
                                                 *(int *)(&alu_div_shl3_8_d + (_alu_r & 0xff) * 4)))
                        );
  _alu_r = uVar4 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b4 +
                                                                   (_alu_n >> 8 & 0xff) * 4) & 0xff)
                                                         * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                       (_alu_r & 0xff) * 4)) >> 8 &
                                               0xff) * 4 +
                                               *(int *)(&alu_div_shl3_8_d +
                                                       ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff) *
                                     4 + *(int *)(&alu_div_shl3_8_d +
                                                 ((_alu_r & 0xff0000) >> 0x10) * 4)) >> 8 & 0xff) *
                           4 + *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar3 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar3 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  uVar3 = *alu_psel_q;
  alu_sq = (undefined)uVar3;
  _alu_sq = CONCAT11((&alu_b_s_4)[uVar3 >> 8 & 0xff],alu_sq);
  _alu_sq = uVar3 & 0xffff0000 | (uint)_alu_sq;
  *alu_psel_q = _alu_sq;
  uVar4 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b3 +
                                                                      (_alu_n >> 8 & 0xff) * 4) &
                                                            0xff) * 4 +
                                                            *(int *)(&alu_div_shl3_8_d +
                                                                    (_alu_r & 0xff) * 4)) >> 8 &
                                                  0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b3 +
                                                                     (_alu_n >> 8 & 0xff) * 4) &
                                                           0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b3 + (_alu_n >> 8 & 0xff) * 4) &
                                                 0xff) * 4 +
                                                 *(int *)(&alu_div_shl3_8_d + (_alu_r & 0xff) * 4)))
                        );
  _alu_r = uVar4 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b3 +
                                                                   (_alu_n >> 8 & 0xff) * 4) & 0xff)
                                                         * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                       (_alu_r & 0xff) * 4)) >> 8 &
                                               0xff) * 4 +
                                               *(int *)(&alu_div_shl3_8_d +
                                                       ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff) *
                                     4 + *(int *)(&alu_div_shl3_8_d +
                                                 ((_alu_r & 0xff0000) >> 0x10) * 4)) >> 8 & 0xff) *
                           4 + *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar3 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar3 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  uVar3 = *alu_psel_q;
  alu_sq = (undefined)uVar3;
  _alu_sq = CONCAT11((&alu_b_s_3)[uVar3 >> 8 & 0xff],alu_sq);
  _alu_sq = uVar3 & 0xffff0000 | (uint)_alu_sq;
  *alu_psel_q = _alu_sq;
  uVar4 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b2 +
                                                                      (_alu_n >> 8 & 0xff) * 4) &
                                                            0xff) * 4 +
                                                            *(int *)(&alu_div_shl3_8_d +
                                                                    (_alu_r & 0xff) * 4)) >> 8 &
                                                  0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b2 +
                                                                     (_alu_n >> 8 & 0xff) * 4) &
                                                           0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b2 + (_alu_n >> 8 & 0xff) * 4) &
                                                 0xff) * 4 +
                                                 *(int *)(&alu_div_shl3_8_d + (_alu_r & 0xff) * 4)))
                        );
  _alu_r = uVar4 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b2 +
                                                                   (_alu_n >> 8 & 0xff) * 4) & 0xff)
                                                         * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                       (_alu_r & 0xff) * 4)) >> 8 &
                                               0xff) * 4 +
                                               *(int *)(&alu_div_shl3_8_d +
                                                       ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff) *
                                     4 + *(int *)(&alu_div_shl3_8_d +
                                                 ((_alu_r & 0xff0000) >> 0x10) * 4)) >> 8 & 0xff) *
                           4 + *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar3 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar3 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  uVar3 = *alu_psel_q;
  alu_sq = (undefined)uVar3;
  _alu_sq = CONCAT11((&alu_b_s_2)[uVar3 >> 8 & 0xff],alu_sq);
  _alu_sq = uVar3 & 0xffff0000 | (uint)_alu_sq;
  *alu_psel_q = _alu_sq;
  uVar4 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b1 +
                                                                      (_alu_n >> 8 & 0xff) * 4) &
                                                            0xff) * 4 +
                                                            *(int *)(&alu_div_shl3_8_d +
                                                                    (_alu_r & 0xff) * 4)) >> 8 &
                                                  0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b1 +
                                                                     (_alu_n >> 8 & 0xff) * 4) &
                                                           0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b1 + (_alu_n >> 8 & 0xff) * 4) &
                                                 0xff) * 4 +
                                                 *(int *)(&alu_div_shl3_8_d + (_alu_r & 0xff) * 4)))
                        );
  _alu_r = uVar4 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b1 +
                                                                   (_alu_n >> 8 & 0xff) * 4) & 0xff)
                                                         * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                       (_alu_r & 0xff) * 4)) >> 8 &
                                               0xff) * 4 +
                                               *(int *)(&alu_div_shl3_8_d +
                                                       ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff) *
                                     4 + *(int *)(&alu_div_shl3_8_d +
                                                 ((_alu_r & 0xff0000) >> 0x10) * 4)) >> 8 & 0xff) *
                           4 + *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar3 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar3 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  uVar3 = *alu_psel_q;
  alu_sq = (undefined)uVar3;
  _alu_sq = CONCAT11((&alu_b_s_1)[uVar3 >> 8 & 0xff],alu_sq);
  _alu_sq = uVar3 & 0xffff0000 | (uint)_alu_sq;
  *alu_psel_q = _alu_sq;
  uVar4 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b0 +
                                                                      (_alu_n >> 8 & 0xff) * 4) &
                                                            0xff) * 4 +
                                                            *(int *)(&alu_div_shl3_8_d +
                                                                    (_alu_r & 0xff) * 4)) >> 8 &
                                                  0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b0 +
                                                                     (_alu_n >> 8 & 0xff) * 4) &
                                                           0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b0 + (_alu_n >> 8 & 0xff) * 4) &
                                                 0xff) * 4 +
                                                 *(int *)(&alu_div_shl3_8_d + (_alu_r & 0xff) * 4)))
                        );
  _alu_r = uVar4 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b0 +
                                                                   (_alu_n >> 8 & 0xff) * 4) & 0xff)
                                                         * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                       (_alu_r & 0xff) * 4)) >> 8 &
                                               0xff) * 4 +
                                               *(int *)(&alu_div_shl3_8_d +
                                                       ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff) *
                                     4 + *(int *)(&alu_div_shl3_8_d +
                                                 ((_alu_r & 0xff0000) >> 0x10) * 4)) >> 8 & 0xff) *
                           4 + *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar3 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar3 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  uVar3 = *alu_psel_q;
  alu_sq = (undefined)uVar3;
  _alu_sq = CONCAT11((&alu_b_s_0)[uVar3 >> 8 & 0xff],alu_sq);
  _alu_sq = uVar3 & 0xffff0000 | (uint)_alu_sq;
  *alu_psel_q = _alu_sq;
  uVar4 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b7 + (_alu_n & 0xff) * 4
                                                                      ) & 0xff) * 4 +
                                                            *(int *)(&alu_div_shl3_8_d +
                                                                    (_alu_r & 0xff) * 4)) >> 8 &
                                                  0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b7 + (_alu_n & 0xff) * 4)
                                                           & 0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b7 + (_alu_n & 0xff) * 4) & 0xff) *
                                                 4 + *(int *)(&alu_div_shl3_8_d +
                                                             (_alu_r & 0xff) * 4))));
  _alu_r = uVar4 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b7 + (_alu_n & 0xff) * 4) &
                                                         0xff) * 4 +
                                                         *(int *)(&alu_div_shl3_8_d +
                                                                 (_alu_r & 0xff) * 4)) >> 8 & 0xff)
                                               * 4 + *(int *)(&alu_div_shl3_8_d +
                                                             ((_alu_r & 0xff00) >> 8) * 4)) >> 8 &
                                     0xff) * 4 +
                                     *(int *)(&alu_div_shl3_8_d + ((_alu_r & 0xff0000) >> 0x10) * 4)
                                     ) >> 8 & 0xff) * 4 +
                           *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar3 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar3 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  _alu_sq = *alu_psel_q & 0xffffff00 | (uint)(byte)(&alu_b_s_7)[*alu_psel_q & 0xff];
  *alu_psel_q = _alu_sq;
  uVar4 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b6 + (_alu_n & 0xff) * 4
                                                                      ) & 0xff) * 4 +
                                                            *(int *)(&alu_div_shl3_8_d +
                                                                    (_alu_r & 0xff) * 4)) >> 8 &
                                                  0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b6 + (_alu_n & 0xff) * 4)
                                                           & 0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b6 + (_alu_n & 0xff) * 4) & 0xff) *
                                                 4 + *(int *)(&alu_div_shl3_8_d +
                                                             (_alu_r & 0xff) * 4))));
  _alu_r = uVar4 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b6 + (_alu_n & 0xff) * 4) &
                                                         0xff) * 4 +
                                                         *(int *)(&alu_div_shl3_8_d +
                                                                 (_alu_r & 0xff) * 4)) >> 8 & 0xff)
                                               * 4 + *(int *)(&alu_div_shl3_8_d +
                                                             ((_alu_r & 0xff00) >> 8) * 4)) >> 8 &
                                     0xff) * 4 +
                                     *(int *)(&alu_div_shl3_8_d + ((_alu_r & 0xff0000) >> 0x10) * 4)
                                     ) >> 8 & 0xff) * 4 +
                           *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar3 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar3 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  _alu_sq = *alu_psel_q & 0xffffff00 | (uint)(byte)(&alu_b_s_6)[*alu_psel_q & 0xff];
  *alu_psel_q = _alu_sq;
  uVar4 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b5 + (_alu_n & 0xff) * 4
                                                                      ) & 0xff) * 4 +
                                                            *(int *)(&alu_div_shl3_8_d +
                                                                    (_alu_r & 0xff) * 4)) >> 8 &
                                                  0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b5 + (_alu_n & 0xff) * 4)
                                                           & 0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b5 + (_alu_n & 0xff) * 4) & 0xff) *
                                                 4 + *(int *)(&alu_div_shl3_8_d +
                                                             (_alu_r & 0xff) * 4))));
  _alu_r = uVar4 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b5 + (_alu_n & 0xff) * 4) &
                                                         0xff) * 4 +
                                                         *(int *)(&alu_div_shl3_8_d +
                                                                 (_alu_r & 0xff) * 4)) >> 8 & 0xff)
                                               * 4 + *(int *)(&alu_div_shl3_8_d +
                                                             ((_alu_r & 0xff00) >> 8) * 4)) >> 8 &
                                     0xff) * 4 +
                                     *(int *)(&alu_div_shl3_8_d + ((_alu_r & 0xff0000) >> 0x10) * 4)
                                     ) >> 8 & 0xff) * 4 +
                           *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar3 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar3 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  _alu_sq = *alu_psel_q & 0xffffff00 | (uint)(byte)(&alu_b_s_5)[*alu_psel_q & 0xff];
  *alu_psel_q = _alu_sq;
  uVar4 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b4 + (_alu_n & 0xff) * 4
                                                                      ) & 0xff) * 4 +
                                                            *(int *)(&alu_div_shl3_8_d +
                                                                    (_alu_r & 0xff) * 4)) >> 8 &
                                                  0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b4 + (_alu_n & 0xff) * 4)
                                                           & 0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b4 + (_alu_n & 0xff) * 4) & 0xff) *
                                                 4 + *(int *)(&alu_div_shl3_8_d +
                                                             (_alu_r & 0xff) * 4))));
  _alu_r = uVar4 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b4 + (_alu_n & 0xff) * 4) &
                                                         0xff) * 4 +
                                                         *(int *)(&alu_div_shl3_8_d +
                                                                 (_alu_r & 0xff) * 4)) >> 8 & 0xff)
                                               * 4 + *(int *)(&alu_div_shl3_8_d +
                                                             ((_alu_r & 0xff00) >> 8) * 4)) >> 8 &
                                     0xff) * 4 +
                                     *(int *)(&alu_div_shl3_8_d + ((_alu_r & 0xff0000) >> 0x10) * 4)
                                     ) >> 8 & 0xff) * 4 +
                           *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar3 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar3 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  _alu_sq = *alu_psel_q & 0xffffff00 | (uint)(byte)(&alu_b_s_4)[*alu_psel_q & 0xff];
  *alu_psel_q = _alu_sq;
  uVar4 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b3 + (_alu_n & 0xff) * 4
                                                                      ) & 0xff) * 4 +
                                                            *(int *)(&alu_div_shl3_8_d +
                                                                    (_alu_r & 0xff) * 4)) >> 8 &
                                                  0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b3 + (_alu_n & 0xff) * 4)
                                                           & 0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b3 + (_alu_n & 0xff) * 4) & 0xff) *
                                                 4 + *(int *)(&alu_div_shl3_8_d +
                                                             (_alu_r & 0xff) * 4))));
  _alu_r = uVar4 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b3 + (_alu_n & 0xff) * 4) &
                                                         0xff) * 4 +
                                                         *(int *)(&alu_div_shl3_8_d +
                                                                 (_alu_r & 0xff) * 4)) >> 8 & 0xff)
                                               * 4 + *(int *)(&alu_div_shl3_8_d +
                                                             ((_alu_r & 0xff00) >> 8) * 4)) >> 8 &
                                     0xff) * 4 +
                                     *(int *)(&alu_div_shl3_8_d + ((_alu_r & 0xff0000) >> 0x10) * 4)
                                     ) >> 8 & 0xff) * 4 +
                           *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar3 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar3 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  _alu_sq = *alu_psel_q & 0xffffff00 | (uint)(byte)(&alu_b_s_3)[*alu_psel_q & 0xff];
  *alu_psel_q = _alu_sq;
  uVar4 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b2 + (_alu_n & 0xff) * 4
                                                                      ) & 0xff) * 4 +
                                                            *(int *)(&alu_div_shl3_8_d +
                                                                    (_alu_r & 0xff) * 4)) >> 8 &
                                                  0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b2 + (_alu_n & 0xff) * 4)
                                                           & 0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b2 + (_alu_n & 0xff) * 4) & 0xff) *
                                                 4 + *(int *)(&alu_div_shl3_8_d +
                                                             (_alu_r & 0xff) * 4))));
  _alu_r = uVar4 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b2 + (_alu_n & 0xff) * 4) &
                                                         0xff) * 4 +
                                                         *(int *)(&alu_div_shl3_8_d +
                                                                 (_alu_r & 0xff) * 4)) >> 8 & 0xff)
                                               * 4 + *(int *)(&alu_div_shl3_8_d +
                                                             ((_alu_r & 0xff00) >> 8) * 4)) >> 8 &
                                     0xff) * 4 +
                                     *(int *)(&alu_div_shl3_8_d + ((_alu_r & 0xff0000) >> 0x10) * 4)
                                     ) >> 8 & 0xff) * 4 +
                           *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar3 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar3 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  _alu_sq = *alu_psel_q & 0xffffff00 | (uint)(byte)(&alu_b_s_2)[*alu_psel_q & 0xff];
  *alu_psel_q = _alu_sq;
  uVar4 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b1 + (_alu_n & 0xff) * 4
                                                                      ) & 0xff) * 4 +
                                                            *(int *)(&alu_div_shl3_8_d +
                                                                    (_alu_r & 0xff) * 4)) >> 8 &
                                                  0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b1 + (_alu_n & 0xff) * 4)
                                                           & 0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b1 + (_alu_n & 0xff) * 4) & 0xff) *
                                                 4 + *(int *)(&alu_div_shl3_8_d +
                                                             (_alu_r & 0xff) * 4))));
  _alu_r = uVar4 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b1 + (_alu_n & 0xff) * 4) &
                                                         0xff) * 4 +
                                                         *(int *)(&alu_div_shl3_8_d +
                                                                 (_alu_r & 0xff) * 4)) >> 8 & 0xff)
                                               * 4 + *(int *)(&alu_div_shl3_8_d +
                                                             ((_alu_r & 0xff00) >> 8) * 4)) >> 8 &
                                     0xff) * 4 +
                                     *(int *)(&alu_div_shl3_8_d + ((_alu_r & 0xff0000) >> 0x10) * 4)
                                     ) >> 8 & 0xff) * 4 +
                           *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  uVar3 = *(uint *)(&alu_sel_r)
                   [(byte)(&alu_true)
                          [*(uint *)((&alu_add16)
                                     [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                              (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) *
                                              4)] +
                                    (*(uint *)((&alu_add16)
                                               [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                        (uint)*(ushort *)
                                                               (&alu_inv16 + (_alu_d & 0xffff) * 2)
                                                        * 4)] + 4) >> 0x10) * 4) >> 0x10 & 0xff]];
  *(uint *)(&alu_sel_r)
           [(byte)(&alu_true)
                  [*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[uVar4 & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) >> 0x10 & 0xff]] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                          (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) & 0xffff
       | *(int *)((&alu_add16)
                  [*(int *)((&alu_add16)[uVar3 >> 0x10] +
                           (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                 (*(uint *)((&alu_add16)
                            [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                                     (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4
                           ) >> 0x10) * 4) << 0x10;
  _alu_sq = *alu_psel_q & 0xffffff00 | (uint)(byte)(&alu_b_s_1)[*alu_psel_q & 0xff];
  *alu_psel_q = _alu_sq;
  uVar3 = (uint)CONCAT12((char)*(uint *)(&alu_div_shl1_8_c_d +
                                        (*(uint *)(&alu_div_shl1_8_c_d +
                                                  (*(uint *)(&alu_div_shl1_8_c_d +
                                                            (*(uint *)(&alu_b0 + (_alu_n & 0xff) * 4
                                                                      ) & 0xff) * 4 +
                                                            *(int *)(&alu_div_shl3_8_d +
                                                                    (_alu_r & 0xff) * 4)) >> 8 &
                                                  0xff) * 4 +
                                                  *(int *)(&alu_div_shl3_8_d +
                                                          ((_alu_r & 0xff00) >> 8) * 4)) >> 8 & 0xff
                                        ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                        ((_alu_r & 0xff0000) >> 0x10) * 4)),
                         CONCAT11((char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_div_shl1_8_c_d +
                                                           (*(uint *)(&alu_b0 + (_alu_n & 0xff) * 4)
                                                           & 0xff) * 4 +
                                                           *(int *)(&alu_div_shl3_8_d +
                                                                   (_alu_r & 0xff) * 4)) >> 8 & 0xff
                                                 ) * 4 + *(int *)(&alu_div_shl3_8_d +
                                                                 ((_alu_r & 0xff00) >> 8) * 4)),
                                  (char)*(uint *)(&alu_div_shl1_8_c_d +
                                                 (*(uint *)(&alu_b0 + (_alu_n & 0xff) * 4) & 0xff) *
                                                 4 + *(int *)(&alu_div_shl3_8_d +
                                                             (_alu_r & 0xff) * 4))));
  _alu_r = uVar3 | *(int *)(&alu_div_shl1_8_c_d +
                           (*(uint *)(&alu_div_shl1_8_c_d +
                                     (*(uint *)(&alu_div_shl1_8_c_d +
                                               (*(uint *)(&alu_div_shl1_8_c_d +
                                                         (*(uint *)(&alu_b0 + (_alu_n & 0xff) * 4) &
                                                         0xff) * 4 +
                                                         *(int *)(&alu_div_shl3_8_d +
                                                                 (_alu_r & 0xff) * 4)) >> 8 & 0xff)
                                               * 4 + *(int *)(&alu_div_shl3_8_d +
                                                             ((_alu_r & 0xff00) >> 8) * 4)) >> 8 &
                                     0xff) * 4 +
                                     *(int *)(&alu_div_shl3_8_d + ((_alu_r & 0xff0000) >> 0x10) * 4)
                                     ) >> 8 & 0xff) * 4 +
                           *(int *)(&alu_div_shl3_8_d + (_alu_r >> 0x18) * 4)) << 0x18;
  alu_psel_r = (uint *)(&alu_sel_r)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  alu_psel_q = (uint *)(&alu_sel_q)
                       [(byte)(&alu_true)
                              [*(uint *)((&alu_add16)
                                         [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                  (uint)*(ushort *)
                                                         (&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[uVar3 & 0xffff] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 +
                                                                   (_alu_d & 0xffff) * 2) * 4)] + 4)
                                        >> 0x10) * 4) >> 0x10 & 0xff]];
  alu_sr = *(uint *)((&alu_add16)
                     [*(int *)((&alu_add16)[*alu_psel_r & 0xffff] +
                              (uint)*(ushort *)(&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] + 4) &
           0xffff | *(int *)((&alu_add16)
                             [*(int *)((&alu_add16)[*alu_psel_r >> 0x10] +
                                      (uint)*(ushort *)(&alu_inv16 + (_alu_d >> 0x10) * 2) * 4)] +
                            (*(uint *)((&alu_add16)
                                       [*(int *)((&alu_add16)[*alu_psel_r & 0xffff] +
                                                (uint)*(ushort *)
                                                       (&alu_inv16 + (_alu_d & 0xffff) * 2) * 4)] +
                                      4) >> 0x10) * 4) << 0x10;
  *alu_psel_r = alu_sr;
  _alu_sq = *alu_psel_q & 0xffffff00 | (uint)(byte)(&alu_b_s_0)[*alu_psel_q & 0xff];
  *alu_psel_q = _alu_sq;
  *(uint *)(&sel_data)[alu_rs] =
       *(uint *)((&alu_add16)
                 [*(int *)(alu_add16 + (uint)*(ushort *)(&alu_inv16 + (_alu_r & 0xffff) * 2) * 4)] +
                4) & 0xffff |
       *(int *)((&alu_add16)
                [*(int *)(alu_add16 + (uint)*(ushort *)(&alu_inv16 + (_alu_r >> 0x10) * 2) * 4)] +
               (*(uint *)((&alu_add16)
                          [*(int *)(alu_add16 +
                                   (uint)*(ushort *)(&alu_inv16 + (_alu_r & 0xffff) * 2) * 4)] + 4)
               >> 0x10) * 4) << 0x10;
  R3 = (undefined *)_alu_r;
  R2 = 0;
  uVar3 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[_alu_r & 0xffff] + (uint)_alu_inv16 * 4)] + 4
                   );
  sf = sf & 0xffffff00;
  zf = zf & 0xffffff00 |
       (uint)(byte)(&alu_false)
                   [(byte)(&alu_true)
                          [(uint)(byte)(&alu_true)
                                       [(uint)(byte)(&alu_true)
                                                    [(uint)(byte)(&alu_true)[uVar3 & 0xff] +
                                                     (uVar3 >> 8 & 0xff)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[_alu_r >> 0x10] +
                                                            (uint)_alu_inv16 * 4)] +
                                                  (uVar3 >> 0x10) * 4) & 0xff)] +
                           (*(uint *)((&alu_add16)
                                      [*(int *)((&alu_add16)[_alu_r >> 0x10] + (uint)_alu_inv16 * 4)
                                      ] + (uVar3 >> 0x10) * 4) >> 8 & 0xff)]];
  of = of & 0xffffff00;
  b0 = *(int *)((&and)[*(int *)(&alu_false + zf * 4)] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x8804f1c0;
  iVar1 = b0;
  puVar2 = (undefined4 *)(&sel_data)[b0];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  *(undefined **)(puVar2 + 3) = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_08054064;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805406c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  R0 = 0;
  *(undefined4 *)(&sel_target)[on] = 0x88050155;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  *(undefined **)(puVar2 + 3) = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_08054064;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805406c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xc0]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xf1] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][4] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_085fd19c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_085fd1a4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x9a]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xf3] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][4] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_085fd19c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_085fd1a4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(uint *)(&sel_data)[on] =
       *(uint *)(&alu_add16)[*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 4)] & 0xffff
       | *(int *)((&alu_add16)[*(int *)(&alu_add16)[*(uint *)(&sel_data)[on] >> 0x10]] +
                 (*(uint *)(&alu_add16)
                           [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 4)] >> 0x10)
                 * 4) << 0x10;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x6f]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xf6] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][4] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_085fd19c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_085fd1a4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  uVar3 = *(uint *)(&sel_data)[on];
  alu_x._1_1_ = (byte)(uVar3 >> 8);
  DAT_081fcfe2._0_1_ = (byte)(uVar3 >> 0x10);
  _alu_z0 = CONCAT12((&alu_mul_sum8l)
                     [(uint)(byte)(&alu_mul_sum8l)
                                  [(uint)(byte)(&alu_mul_mul8h)[alu_x._1_1_][uVar3 & 0xff] +
                                   (uint)(byte)(&alu_mul_sum8h)
                                               [(uint)(byte)(&alu_mul_sum8l)
                                                            [(uint)(byte)(&alu_mul_mul8h)
                                                                         [uVar3 & 0xff]
                                                                         [uVar3 & 0xff] +
                                                             (uint)(byte)(&alu_mul_sum8h)
                                                                         [(byte)(&alu_mul_mul8l)
                                                                                [uVar3 & 0xff]
                                                                                [uVar3 & 0xff]]] +
                                                (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                            [uVar3 & 0xff]]] +
                      (uint)(byte)(&alu_mul_mul8l)[(byte)DAT_081fcfe2][uVar3 & 0xff]],
                     CONCAT11((&alu_mul_sum8l)
                              [(uint)(byte)(&alu_mul_sum8l)
                                           [(uint)(byte)(&alu_mul_mul8h)[uVar3 & 0xff][uVar3 & 0xff]
                                            + (uint)(byte)(&alu_mul_sum8h)
                                                          [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                 [uVar3 & 0xff]]] +
                               (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_][uVar3 & 0xff]],
                              (&alu_mul_sum8l)[(byte)(&alu_mul_mul8l)[uVar3 & 0xff][uVar3 & 0xff]]))
  ;
  DAT_081fcfe2._1_1_ = (byte)(uVar3 >> 0x18);
  _alu_z0 = CONCAT13((&alu_mul_sum8l)
                     [(uint)(byte)(&alu_mul_sum8l)
                                  [(uint)(byte)(&alu_mul_mul8h)[(byte)DAT_081fcfe2][uVar3 & 0xff] +
                                   (uint)(byte)(&alu_mul_sum8h)
                                               [(uint)(byte)(&alu_mul_sum8l)
                                                            [(uint)(byte)(&alu_mul_mul8h)
                                                                         [alu_x._1_1_][uVar3 & 0xff]
                                                             + (uint)(byte)(&alu_mul_sum8h)
                                                                           [(uint)(byte)(&
                                                  alu_mul_sum8l)
                                                  [(uint)(byte)(&alu_mul_mul8h)[uVar3 & 0xff]
                                                               [uVar3 & 0xff] +
                                                   (uint)(byte)(&alu_mul_sum8h)
                                                               [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                      [uVar3 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [uVar3 & 0xff]]] +
                                                (uint)(byte)(&alu_mul_mul8l)[(byte)DAT_081fcfe2]
                                                            [uVar3 & 0xff]]] +
                      (uint)(byte)(&alu_mul_mul8l)[DAT_081fcfe2._1_1_][uVar3 & 0xff]],_alu_z0);
  _alu_z1 = (uint)CONCAT12((&alu_mul_sum8l)
                           [(uint)(byte)(&alu_mul_sum8l)
                                        [(uint)(byte)(&alu_mul_mul8h)[alu_x._1_1_][alu_x._1_1_] +
                                         (uint)(byte)(&alu_mul_sum8h)
                                                     [(uint)(byte)(&alu_mul_sum8l)
                                                                  [(uint)(byte)(&alu_mul_mul8h)
                                                                               [uVar3 & 0xff]
                                                                               [alu_x._1_1_] +
                                                                   (uint)(byte)(&alu_mul_sum8h)
                                                                               [(byte)(&
                                                  alu_mul_mul8l)[uVar3 & 0xff][alu_x._1_1_]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [alu_x._1_1_]]] +
                            (uint)(byte)(&alu_mul_mul8l)[(byte)DAT_081fcfe2][alu_x._1_1_]],
                           CONCAT11((&alu_mul_sum8l)
                                    [(uint)(byte)(&alu_mul_sum8l)
                                                 [(uint)(byte)(&alu_mul_mul8h)[uVar3 & 0xff]
                                                              [alu_x._1_1_] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [alu_x._1_1_]]] +
                                     (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_][alu_x._1_1_]],
                                    (&alu_mul_sum8l)
                                    [(byte)(&alu_mul_mul8l)[uVar3 & 0xff][alu_x._1_1_]])) << 8;
  _alu_z2 = (uint)CONCAT11((&alu_mul_sum8l)
                           [(uint)(byte)(&alu_mul_sum8l)
                                        [(uint)(byte)(&alu_mul_mul8h)[uVar3 & 0xff]
                                                     [(byte)DAT_081fcfe2] +
                                         (uint)(byte)(&alu_mul_sum8h)
                                                     [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                            [(byte)DAT_081fcfe2]]] +
                            (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_][(byte)DAT_081fcfe2]],
                           (&alu_mul_sum8l)
                           [(byte)(&alu_mul_mul8l)[uVar3 & 0xff][(byte)DAT_081fcfe2]]) << 0x10;
  _alu_z3 = (uint)(byte)(&alu_mul_sum8l)[(byte)(&alu_mul_mul8l)[uVar3 & 0xff][DAT_081fcfe2._1_1_]]
            << 0x18;
  uVar6 = CONCAT12((char)*(uint *)(&alu_mul_sums +
                                  *(int *)(&alu_mul_shl2 +
                                          *(int *)(&alu_mul_sums +
                                                  *(int *)(&alu_mul_shl2 +
                                                          *(int *)(&alu_mul_sums +
                                                                  *(int *)(&alu_mul_shl2 +
                                                                          (uint)(byte)(&
                                                  alu_mul_sum8l)
                                                  [(uint)(byte)(&alu_mul_sum8l)
                                                               [(uint)(byte)(&alu_mul_mul8h)
                                                                            [uVar3 & 0xff]
                                                                            [alu_x._1_1_] +
                                                                (uint)(byte)(&alu_mul_sum8h)
                                                                            [(byte)(&alu_mul_mul8l)
                                                                                   [uVar3 & 0xff]
                                                                                   [alu_x._1_1_]]] +
                                                   (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                               [alu_x._1_1_]] * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[alu_x._1_1_][uVar3 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(uint)(byte)(&alu_mul_sum8l)
                                                                           [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar3 & 0xff][uVar3 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [uVar3 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [uVar3 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[(byte)DAT_081fcfe2]
                                                              [uVar3 & 0xff]] * 4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(byte)(&alu_mul_mul8l)
                                                                             [uVar3 & 0xff]
                                                                             [(byte)DAT_081fcfe2]] *
                                                          4)) * 4) +
                                  *(int *)(&alu_mul_shl2 +
                                          (*(uint *)(&alu_mul_sums +
                                                    *(int *)(&alu_mul_shl2 +
                                                            *(int *)(&alu_mul_sums +
                                                                    *(int *)(&alu_mul_shl2 +
                                                                            (uint)(byte)(&
                                                  alu_mul_sum8l)
                                                  [(byte)(&alu_mul_mul8l)[uVar3 & 0xff][alu_x._1_1_]
                                                  ] * 4) + *(int *)(&alu_mul_shl2 +
                                                                   (uint)(byte)(&alu_mul_sum8l)
                                                                               [(uint)(byte)(&
                                                  alu_mul_sum8l)
                                                  [(uint)(byte)(&alu_mul_mul8h)[uVar3 & 0xff]
                                                               [uVar3 & 0xff] +
                                                   (uint)(byte)(&alu_mul_sum8h)
                                                               [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                      [uVar3 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [uVar3 & 0xff]] * 4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (*(uint *)(&alu_mul_sums +
                                                                    _alu_mul_shl2 +
                                                                    *(int *)(&alu_mul_shl2 +
                                                                            ((uint)_alu_z0 & 0xff) *
                                                                            4)) >> 8 & 0xff) * 4))
                                           >> 8 & 0xff) * 4)),
                   CONCAT11((char)*(uint *)(&alu_mul_sums +
                                           *(int *)(&alu_mul_shl2 +
                                                   *(int *)(&alu_mul_sums +
                                                           *(int *)(&alu_mul_shl2 +
                                                                   (uint)(byte)(&alu_mul_sum8l)
                                                                               [(byte)(&
                                                  alu_mul_mul8l)[uVar3 & 0xff][alu_x._1_1_]] * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar3 & 0xff][uVar3 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [uVar3 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [uVar3 & 0xff]] * 4)) * 4) +
                                           *(int *)(&alu_mul_shl2 +
                                                   (*(uint *)(&alu_mul_sums +
                                                             _alu_mul_shl2 +
                                                             *(int *)(&alu_mul_shl2 +
                                                                     ((uint)_alu_z0 & 0xff) * 4)) >>
                                                    8 & 0xff) * 4)),
                            (char)*(uint *)(&alu_mul_sums +
                                           _alu_mul_shl2 +
                                           *(int *)(&alu_mul_shl2 + ((uint)_alu_z0 & 0xff) * 4))));
  R3 = (undefined *)
       CONCAT13((char)*(uint *)(&alu_mul_sums +
                               *(int *)(&alu_mul_shl2 +
                                       *(int *)(&alu_mul_sums +
                                               *(int *)(&alu_mul_shl2 +
                                                       *(int *)(&alu_mul_sums +
                                                               *(int *)(&alu_mul_shl2 +
                                                                       *(int *)(&alu_mul_sums +
                                                                               *(int *)(&
                                                  alu_mul_shl2 +
                                                  (uint)(byte)(&alu_mul_sum8l)
                                                              [(uint)(byte)(&alu_mul_sum8l)
                                                                           [(uint)(byte)(&
                                                  alu_mul_mul8h)[alu_x._1_1_][alu_x._1_1_] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(uint)(byte)(&alu_mul_sum8l)
                                                                           [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar3 & 0xff][alu_x._1_1_] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [alu_x._1_1_]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [alu_x._1_1_]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[(byte)DAT_081fcfe2]
                                                              [alu_x._1_1_]] * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[(byte)DAT_081fcfe2][uVar3 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(uint)(byte)(&alu_mul_sum8l)
                                                                           [(uint)(byte)(&
                                                  alu_mul_mul8h)[alu_x._1_1_][uVar3 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(uint)(byte)(&alu_mul_sum8l)
                                                                           [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar3 & 0xff][uVar3 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [uVar3 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [uVar3 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[(byte)DAT_081fcfe2]
                                                              [uVar3 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[DAT_081fcfe2._1_1_]
                                                              [uVar3 & 0xff]] * 4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar3 & 0xff][(byte)DAT_081fcfe2] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [(byte)DAT_081fcfe2]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [(byte)DAT_081fcfe2]] * 4)) * 4) +
                                               *(int *)(&alu_mul_shl2 +
                                                       (uint)(byte)(&alu_mul_sum8l)
                                                                   [(byte)(&alu_mul_mul8l)
                                                                          [uVar3 & 0xff]
                                                                          [DAT_081fcfe2._1_1_]] * 4)
                                               ) * 4) +
                               *(int *)(&alu_mul_shl2 +
                                       (*(uint *)(&alu_mul_sums +
                                                 *(int *)(&alu_mul_shl2 +
                                                         *(int *)(&alu_mul_sums +
                                                                 *(int *)(&alu_mul_shl2 +
                                                                         *(int *)(&alu_mul_sums +
                                                                                 *(int *)(&
                                                  alu_mul_shl2 +
                                                  (uint)(byte)(&alu_mul_sum8l)
                                                              [(uint)(byte)(&alu_mul_sum8l)
                                                                           [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar3 & 0xff][alu_x._1_1_] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [alu_x._1_1_]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [alu_x._1_1_]] * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[alu_x._1_1_][uVar3 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(uint)(byte)(&alu_mul_sum8l)
                                                                           [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar3 & 0xff][uVar3 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [uVar3 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [uVar3 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[(byte)DAT_081fcfe2]
                                                              [uVar3 & 0xff]] * 4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(byte)(&alu_mul_mul8l)
                                                                             [uVar3 & 0xff]
                                                                             [(byte)DAT_081fcfe2]] *
                                                          4)) * 4) +
                                                 *(int *)(&alu_mul_shl2 +
                                                         (*(uint *)(&alu_mul_sums +
                                                                   *(int *)(&alu_mul_shl2 +
                                                                           *(int *)(&alu_mul_sums +
                                                                                   *(int *)(&
                                                  alu_mul_shl2 +
                                                  (uint)(byte)(&alu_mul_sum8l)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [alu_x._1_1_]] * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar3 & 0xff][uVar3 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [uVar3 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [uVar3 & 0xff]] * 4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (*(uint *)(&alu_mul_sums +
                                                                    _alu_mul_shl2 +
                                                                    *(int *)(&alu_mul_shl2 +
                                                                            ((uint)_alu_z0 & 0xff) *
                                                                            4)) >> 8 & 0xff) * 4))
                                                  >> 8 & 0xff) * 4)) >> 8 & 0xff) * 4)),uVar6);
  R2 = *(uint *)(&sel_data)[on];
  uVar4 = *(uint *)((&alu_add16)
                    [*(int *)((&alu_add16)[(uint)uVar6 & 0xffff] +
                             (uint)*(ushort *)(&alu_inv16 + (R2 & 0xffff) * 2) * 4)] + 4);
  alu_s._3_1_ = (byte)(*(uint *)((&alu_add16)
                                 [*(int *)((&alu_add16)[(uint)R3 >> 0x10] +
                                          (uint)*(ushort *)(&alu_inv16 + (R2 >> 0x10) * 2) * 4)] +
                                (uVar4 >> 0x10) * 4) >> 8);
  sf = sf & 0xffffff00 | *(uint *)(&alu_b7 + (uint)alu_s._3_1_ * 4) & 0xff;
  zf = zf & 0xffffff00 |
       (uint)(byte)(&alu_false)
                   [(byte)(&alu_true)
                          [(uint)(byte)(&alu_true)
                                       [(uint)(byte)(&alu_true)
                                                    [(uint)(byte)(&alu_true)[uVar4 & 0xff] +
                                                     (uVar4 >> 8 & 0xff)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[(uint)R3 >> 0x10] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 + (R2 >> 0x10) * 2) *
                                                            4)] + (uVar4 >> 0x10) * 4) & 0xff)] +
                           (uint)alu_s._3_1_]];
  of = of & 0xffffff00 |
       **(uint **)(*(int *)((&alu_cmp_of)
                            [*(uint *)(&alu_b7 +
                                      (*(uint *)(&alu_mul_sums +
                                                *(int *)(&alu_mul_shl2 +
                                                        *(int *)(&alu_mul_sums +
                                                                *(int *)(&alu_mul_shl2 +
                                                                        *(int *)(&alu_mul_sums +
                                                                                *(int *)(&
                                                  alu_mul_shl2 +
                                                  *(int *)(&alu_mul_sums +
                                                          *(int *)(&alu_mul_shl2 +
                                                                  (uint)(byte)(&alu_mul_sum8l)
                                                                              [(uint)(byte)(&
                                                  alu_mul_sum8l)
                                                  [(uint)(byte)(&alu_mul_mul8h)[alu_x._1_1_]
                                                               [alu_x._1_1_] +
                                                   (uint)(byte)(&alu_mul_sum8h)
                                                               [(uint)(byte)(&alu_mul_sum8l)
                                                                            [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar3 & 0xff][alu_x._1_1_] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [alu_x._1_1_]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [alu_x._1_1_]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[(byte)DAT_081fcfe2]
                                                              [alu_x._1_1_]] * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[(byte)DAT_081fcfe2][uVar3 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(uint)(byte)(&alu_mul_sum8l)
                                                                           [(uint)(byte)(&
                                                  alu_mul_mul8h)[alu_x._1_1_][uVar3 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(uint)(byte)(&alu_mul_sum8l)
                                                                           [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar3 & 0xff][uVar3 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [uVar3 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [uVar3 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[(byte)DAT_081fcfe2]
                                                              [uVar3 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[DAT_081fcfe2._1_1_]
                                                              [uVar3 & 0xff]] * 4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar3 & 0xff][(byte)DAT_081fcfe2] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [(byte)DAT_081fcfe2]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [(byte)DAT_081fcfe2]] * 4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(byte)(&alu_mul_mul8l)
                                                                             [uVar3 & 0xff]
                                                                             [DAT_081fcfe2._1_1_]] *
                                                          4)) * 4) +
                                                *(int *)(&alu_mul_shl2 +
                                                        (*(uint *)(&alu_mul_sums +
                                                                  *(int *)(&alu_mul_shl2 +
                                                                          *(int *)(&alu_mul_sums +
                                                                                  *(int *)(&
                                                  alu_mul_shl2 +
                                                  *(int *)(&alu_mul_sums +
                                                          *(int *)(&alu_mul_shl2 +
                                                                  (uint)(byte)(&alu_mul_sum8l)
                                                                              [(uint)(byte)(&
                                                  alu_mul_sum8l)
                                                  [(uint)(byte)(&alu_mul_mul8h)[uVar3 & 0xff]
                                                               [alu_x._1_1_] +
                                                   (uint)(byte)(&alu_mul_sum8h)
                                                               [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                      [alu_x._1_1_]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [alu_x._1_1_]] * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[alu_x._1_1_][uVar3 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(uint)(byte)(&alu_mul_sum8l)
                                                                           [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar3 & 0xff][uVar3 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [uVar3 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [uVar3 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[(byte)DAT_081fcfe2]
                                                              [uVar3 & 0xff]] * 4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(byte)(&alu_mul_mul8l)
                                                                             [uVar3 & 0xff]
                                                                             [(byte)DAT_081fcfe2]] *
                                                          4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (*(uint *)(&alu_mul_sums +
                                                                    *(int *)(&alu_mul_shl2 +
                                                                            *(int *)(&alu_mul_sums +
                                                                                    *(int *)(&
                                                  alu_mul_shl2 +
                                                  (uint)(byte)(&alu_mul_sum8l)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [alu_x._1_1_]] * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar3 & 0xff][uVar3 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [uVar3 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [uVar3 & 0xff]] * 4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (*(uint *)(&alu_mul_sums +
                                                                    _alu_mul_shl2 +
                                                                    *(int *)(&alu_mul_shl2 +
                                                                            ((uint)_alu_z0 & 0xff) *
                                                                            4)) >> 8 & 0xff) * 4))
                                                  >> 8 & 0xff) * 4)) >> 8 & 0xff) * 4)) & 0xff) * 4)
                            ] + *(uint *)(&alu_b7 +
                                         (*(uint *)(&alu_b7 +
                                                   (*(uint *)(&alu_mul_sums +
                                                             *(int *)(&alu_mul_shl2 +
                                                                     *(int *)(&alu_mul_sums +
                                                                             *(int *)(&alu_mul_shl2
                                                                                     + *(int *)(&
                                                  alu_mul_sums +
                                                  *(int *)(&alu_mul_shl2 +
                                                          *(int *)(&alu_mul_sums +
                                                                  *(int *)(&alu_mul_shl2 +
                                                                          (uint)(byte)(&
                                                  alu_mul_sum8l)
                                                  [(uint)(byte)(&alu_mul_sum8l)
                                                               [(uint)(byte)(&alu_mul_mul8h)
                                                                            [alu_x._1_1_]
                                                                            [alu_x._1_1_] +
                                                                (uint)(byte)(&alu_mul_sum8h)
                                                                            [(uint)(byte)(&
                                                  alu_mul_sum8l)
                                                  [(uint)(byte)(&alu_mul_mul8h)[uVar3 & 0xff]
                                                               [alu_x._1_1_] +
                                                   (uint)(byte)(&alu_mul_sum8h)
                                                               [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                      [alu_x._1_1_]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [alu_x._1_1_]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[(byte)DAT_081fcfe2]
                                                              [alu_x._1_1_]] * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[(byte)DAT_081fcfe2][uVar3 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(uint)(byte)(&alu_mul_sum8l)
                                                                           [(uint)(byte)(&
                                                  alu_mul_mul8h)[alu_x._1_1_][uVar3 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(uint)(byte)(&alu_mul_sum8l)
                                                                           [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar3 & 0xff][uVar3 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [uVar3 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [uVar3 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[(byte)DAT_081fcfe2]
                                                              [uVar3 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[DAT_081fcfe2._1_1_]
                                                              [uVar3 & 0xff]] * 4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar3 & 0xff][(byte)DAT_081fcfe2] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [(byte)DAT_081fcfe2]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [(byte)DAT_081fcfe2]] * 4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(byte)(&alu_mul_mul8l)
                                                                             [uVar3 & 0xff]
                                                                             [DAT_081fcfe2._1_1_]] *
                                                          4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (*(uint *)(&alu_mul_sums +
                                                                    *(int *)(&alu_mul_shl2 +
                                                                            *(int *)(&alu_mul_sums +
                                                                                    *(int *)(&
                                                  alu_mul_shl2 +
                                                  *(int *)(&alu_mul_sums +
                                                          *(int *)(&alu_mul_shl2 +
                                                                  (uint)(byte)(&alu_mul_sum8l)
                                                                              [(uint)(byte)(&
                                                  alu_mul_sum8l)
                                                  [(uint)(byte)(&alu_mul_mul8h)[uVar3 & 0xff]
                                                               [alu_x._1_1_] +
                                                   (uint)(byte)(&alu_mul_sum8h)
                                                               [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                      [alu_x._1_1_]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [alu_x._1_1_]] * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[alu_x._1_1_][uVar3 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(uint)(byte)(&alu_mul_sum8l)
                                                                           [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar3 & 0xff][uVar3 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [uVar3 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [uVar3 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[(byte)DAT_081fcfe2]
                                                              [uVar3 & 0xff]] * 4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(byte)(&alu_mul_mul8l)
                                                                             [uVar3 & 0xff]
                                                                             [(byte)DAT_081fcfe2]] *
                                                          4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (*(uint *)(&alu_mul_sums +
                                                                    *(int *)(&alu_mul_shl2 +
                                                                            *(int *)(&alu_mul_sums +
                                                                                    *(int *)(&
                                                  alu_mul_shl2 +
                                                  (uint)(byte)(&alu_mul_sum8l)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [alu_x._1_1_]] * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar3 & 0xff][uVar3 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [uVar3 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [uVar3 & 0xff]] * 4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (*(uint *)(&alu_mul_sums +
                                                                    _alu_mul_shl2 +
                                                                    *(int *)(&alu_mul_shl2 +
                                                                            ((uint)_alu_z0 & 0xff) *
                                                                            4)) >> 8 & 0xff) * 4))
                                                  >> 8 & 0xff) * 4)) >> 8 & 0xff) * 4)) & 0xff) * 4)
                                          & 0xffffff00 | R2 >> 0x18) * 4) * 4) +
                  *(int *)(&alu_b7 +
                          (*(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 +
                                              (*(uint *)(&alu_mul_sums +
                                                        *(int *)(&alu_mul_shl2 +
                                                                *(int *)(&alu_mul_sums +
                                                                        *(int *)(&alu_mul_shl2 +
                                                                                *(int *)(&
                                                  alu_mul_sums +
                                                  *(int *)(&alu_mul_shl2 +
                                                          *(int *)(&alu_mul_sums +
                                                                  *(int *)(&alu_mul_shl2 +
                                                                          (uint)(byte)(&
                                                  alu_mul_sum8l)
                                                  [(uint)(byte)(&alu_mul_sum8l)
                                                               [(uint)(byte)(&alu_mul_mul8h)
                                                                            [alu_x._1_1_]
                                                                            [alu_x._1_1_] +
                                                                (uint)(byte)(&alu_mul_sum8h)
                                                                            [(uint)(byte)(&
                                                  alu_mul_sum8l)
                                                  [(uint)(byte)(&alu_mul_mul8h)[uVar3 & 0xff]
                                                               [alu_x._1_1_] +
                                                   (uint)(byte)(&alu_mul_sum8h)
                                                               [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                      [alu_x._1_1_]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [alu_x._1_1_]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[(byte)DAT_081fcfe2]
                                                              [alu_x._1_1_]] * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[(byte)DAT_081fcfe2][uVar3 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(uint)(byte)(&alu_mul_sum8l)
                                                                           [(uint)(byte)(&
                                                  alu_mul_mul8h)[alu_x._1_1_][uVar3 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(uint)(byte)(&alu_mul_sum8l)
                                                                           [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar3 & 0xff][uVar3 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [uVar3 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [uVar3 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[(byte)DAT_081fcfe2]
                                                              [uVar3 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[DAT_081fcfe2._1_1_]
                                                              [uVar3 & 0xff]] * 4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar3 & 0xff][(byte)DAT_081fcfe2] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [(byte)DAT_081fcfe2]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [(byte)DAT_081fcfe2]] * 4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(byte)(&alu_mul_mul8l)
                                                                             [uVar3 & 0xff]
                                                                             [DAT_081fcfe2._1_1_]] *
                                                          4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (*(uint *)(&alu_mul_sums +
                                                                    *(int *)(&alu_mul_shl2 +
                                                                            *(int *)(&alu_mul_sums +
                                                                                    *(int *)(&
                                                  alu_mul_shl2 +
                                                  *(int *)(&alu_mul_sums +
                                                          *(int *)(&alu_mul_shl2 +
                                                                  (uint)(byte)(&alu_mul_sum8l)
                                                                              [(uint)(byte)(&
                                                  alu_mul_sum8l)
                                                  [(uint)(byte)(&alu_mul_mul8h)[uVar3 & 0xff]
                                                               [alu_x._1_1_] +
                                                   (uint)(byte)(&alu_mul_sum8h)
                                                               [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                      [alu_x._1_1_]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [alu_x._1_1_]] * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[alu_x._1_1_][uVar3 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(uint)(byte)(&alu_mul_sum8l)
                                                                           [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar3 & 0xff][uVar3 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [uVar3 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [uVar3 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[(byte)DAT_081fcfe2]
                                                              [uVar3 & 0xff]] * 4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(byte)(&alu_mul_mul8l)
                                                                             [uVar3 & 0xff]
                                                                             [(byte)DAT_081fcfe2]] *
                                                          4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (*(uint *)(&alu_mul_sums +
                                                                    *(int *)(&alu_mul_shl2 +
                                                                            *(int *)(&alu_mul_sums +
                                                                                    *(int *)(&
                                                  alu_mul_shl2 +
                                                  (uint)(byte)(&alu_mul_sum8l)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [alu_x._1_1_]] * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar3 & 0xff][uVar3 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [uVar3 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[alu_x._1_1_]
                                                              [uVar3 & 0xff]] * 4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (*(uint *)(&alu_mul_sums +
                                                                    _alu_mul_shl2 +
                                                                    *(int *)(&alu_mul_shl2 +
                                                                            ((uint)_alu_z0 & 0xff) *
                                                                            4)) >> 8 & 0xff) * 4))
                                                  >> 8 & 0xff) * 4)) >> 8 & 0xff) * 4)) & 0xff) * 4)
                                     & 0xffffff00 | R2 >> 0x18) * 4) & 0xffffff00 |
                          (uint)alu_s._3_1_) * 4) * 4) & 0xff;
  b0 = *(int *)((&and)[*(int *)((&or)[*(int *)((&xor)[sf] + of * 4)] + zf * 4)] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x88049702;
  iVar1 = b0;
  puVar2 = (undefined4 *)(&sel_data)[b0];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  *(undefined **)(puVar2 + 3) = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_08054064;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805406c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  R0 = 1;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x55]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][1] * 4)]
                                  + (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_085fd19c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_085fd1a4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined **)(&sel_data)[on] = fp;
  stack_temp = *(char **)sp;
  DAT_081fd104 = *(undefined4 *)(sp + 4);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&pop + *(int *)(sp + -0x200060));
  puVar2 = (undefined4 *)(&sel_data)[on];
  *(char **)puVar2 = stack_temp;
  puVar2[1] = DAT_081fd104;
  stack_temp = *(char **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = *(char **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = *(char **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = *(char **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = *(char **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = *(char **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(char **)(&sel_target)[on] = stack_temp;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  *(undefined **)(puVar2 + 3) = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_08054064;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805406c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x41]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][6] * 4)]
                                  + (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_085fd19c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_085fd1a4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = fp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = (char *)R1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = (char *)R2;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = (char *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = (char *)D1;
  DAT_081fd104 = DAT_0805406c;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&push + *(int *)(sp + -0x200068));
  puVar2 = (undefined4 *)(&sel_data)[on];
  *(char **)puVar2 = stack_temp;
  puVar2[1] = DAT_081fd104;
  *(undefined **)(&sel_data)[on] = sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  stack_temp = s_primes__1_100000__08054026;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = (char *)(*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_2992_0806ade0] & 0xffff |
                       *(int *)((&alu_add16)[*(int *)(PTR_alu_add16_34821_08089f34 + 0x20000)] +
                               (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_2992_0806ade0] >> 0x10)
                               * 4) << 0x10);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  R0 = *(uint *)(&fault)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 *)(&sel_data)[on] = 1;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x4d]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xc] * 4
                                                  )] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_085fd19c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_085fd1a4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R3 = *(undefined **)(&sel_data)[on];
  stack_temp = R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = (char *)0x88050fb5;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88048764;
  iVar1 = on;
  puVar5 = (uint *)(&sel_data)[on];
  *puVar5 = R0;
  puVar5[1] = R1;
  puVar5[2] = R2;
  *(undefined **)(puVar5 + 3) = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_08054064;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805406c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xb5]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xf] * 4
                                                  )] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_085fd19c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_085fd1a4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  R3 = (undefined *)R0;
  R2 = 0;
  uVar3 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[R0 & 0xffff] + (uint)_alu_inv16 * 4)] + 4);
  sf = sf & 0xffffff00;
  zf = zf & 0xffffff00 |
       (uint)(byte)(&alu_false)
                   [(byte)(&alu_true)
                          [(uint)(byte)(&alu_true)
                                       [(uint)(byte)(&alu_true)
                                                    [(uint)(byte)(&alu_true)[uVar3 & 0xff] +
                                                     (uVar3 >> 8 & 0xff)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[R0 >> 0x10] +
                                                            (uint)_alu_inv16 * 4)] +
                                                  (uVar3 >> 0x10) * 4) & 0xff)] +
                           (*(uint *)((&alu_add16)
                                      [*(int *)((&alu_add16)[R0 >> 0x10] + (uint)_alu_inv16 * 4)] +
                                     (uVar3 >> 0x10) * 4) >> 8 & 0xff)]];
  of = of & 0xffffff00;
  b0 = *(int *)((&and)[zf] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x88051654;
  iVar1 = b0;
  puVar5 = (uint *)(&sel_data)[b0];
  *puVar5 = R0;
  puVar5[1] = R1;
  puVar5[2] = R2;
  *(undefined **)(puVar5 + 3) = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_08054064;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805406c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  stack_temp = *(char **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = &DAT_08054022;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = (char *)(*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_5600_0806d6a0] & 0xffff |
                       *(int *)((&alu_add16)[*(int *)(PTR_alu_add16_34821_08089f34 + 0x20000)] +
                               (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_5600_0806d6a0] >> 0x10)
                               * 4) << 0x10);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  R0 = *(uint *)(&fault)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&pop + *(int *)(sp + -0x200060));
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x54]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x16] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_085fd19c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_085fd1a4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x2e]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x18] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_085fd19c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_085fd1a4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(uint *)(&sel_data)[on] =
       *(uint *)(&alu_add16)[*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 4)] & 0xffff
       | *(int *)((&alu_add16)[*(int *)(&alu_add16)[*(uint *)(&sel_data)[on] >> 0x10]] +
                 (*(uint *)(&alu_add16)
                           [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 4)] >> 0x10)
                 * 4) << 0x10;
  R3 = *(undefined **)(&sel_data)[on];
  R2 = 10000;
  alu_t = 10000;
  uVar3 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)R3 & 0xffff] + (uint)uRam0816ce60 * 4)]
                   + 4);
  uVar4 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)R3 >> 0x10] + (uint)_alu_inv16 * 4)] +
                   (uVar3 >> 0x10) * 4);
  _DAT_081fcfee = (undefined2)uVar4;
  cf = (&alu_false)[uVar4 >> 0x10 & 0xff];
  alu_s._3_1_ = (byte)(uVar4 >> 8);
  sf = sf & 0xffffff00 | *(uint *)(&alu_b7 + (uint)alu_s._3_1_ * 4) & 0xff;
  zf = zf & 0xffffff00 |
       (uint)(byte)(&alu_false)
                   [(byte)(&alu_true)
                          [(uint)(byte)(&alu_true)
                                       [(uint)(byte)(&alu_true)
                                                    [(uint)(byte)(&alu_true)[uVar3 & 0xff] +
                                                     (uVar3 >> 8 & 0xff)] + (uVar4 & 0xff)] +
                           (uint)alu_s._3_1_]];
  of = of & 0xffffff00 |
       **(uint **)(*(int *)((&alu_cmp_of)[*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4)] +
                           *(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4) & 0xffffff00) * 4)
                           * 4) +
                  *(int *)(&alu_b7 +
                          (*(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4) & 0xffffff00) * 4)
                           & 0xffffff00 | (uint)alu_s._3_1_) * 4) * 4) & 0xff;
  b0 = *(int *)((&and)[*(int *)((&xor)[sf] + of * 4)] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x88050c4d;
  iVar1 = b0;
  puVar2 = (undefined4 *)(&sel_data)[b0];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  *(undefined **)(puVar2 + 3) = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_08054064;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805406c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  R3 = &DAT_08054020;
  stack_temp = &DAT_08054020;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  iVar1 = *(int *)((&alu_add16)[*(int *)(PTR_alu_add16_34821_08089f34 + 0x20000)] +
                  (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_7909_0806fab4] >> 0x10) * 4);
  alu_s = *(uint *)(&alu_add16)[*(int *)PTR_alu_add16_7909_0806fab4] & 0xffff | iVar1 << 0x10;
  alu_c = (undefined)iVar1;
  uRam081fcff1 = (undefined)((uint)iVar1 >> 8);
  DAT_081fcff2 = (undefined2)((uint)iVar1 >> 0x10);
  stack_temp = (char *)alu_s;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  _external = printf;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  R0 = 0;
  _alu_x = target;
  _alu_y = 0x88051f5d;
  b1 = (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x1f];
  b2 = (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5];
  b3 = (uint)(byte)(&alu_eq)[target >> 0x18][0x88];
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x5d]] +
                                                  b1 * 4)] + b2 * 4)] + b3 * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_085fd19c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_085fd1a4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined **)(&sel_data)[on] = fp;
  stack_temp = *(char **)sp;
  DAT_081fd104 = *(undefined4 *)(sp + 4);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&pop + *(int *)(sp + -0x200060));
  puVar2 = (undefined4 *)(&sel_data)[on];
  *(char **)puVar2 = stack_temp;
  puVar2[1] = DAT_081fd104;
  stack_temp = *(char **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = *(char **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = *(char **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = *(char **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = *(char **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = *(char **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  branch_temp = stack_temp;
  *(char **)(&sel_target)[on] = stack_temp;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  *(undefined **)(puVar2 + 3) = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  data_p = &jmp_d0;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_08054064;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805406c;
  *(undefined4 *)(&sel_on)[on] = 0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void main(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x41]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][6] * 4)]
                                  + (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_085fd19c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_085fd1a4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = fp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = (char *)R1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = (char *)R2;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = (char *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = (char *)D1;
  DAT_081fd104 = DAT_0805406c;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&push + *(int *)(sp + -0x200068));
  puVar2 = (undefined4 *)(&sel_data)[on];
  *(char **)puVar2 = stack_temp;
  puVar2[1] = DAT_081fd104;
  *(undefined **)(&sel_data)[on] = sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  stack_temp = s_primes__1_100000__08054026;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = (char *)(*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_2992_0806ade0] & 0xffff |
                       *(int *)((&alu_add16)[*(int *)(PTR_alu_add16_34821_08089f34 + 0x20000)] +
                               (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_2992_0806ade0] >> 0x10)
                               * 4) << 0x10);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  R0 = *(uint *)(&fault)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 *)(&sel_data)[on] = 1;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x4d]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xc] * 4
                                                  )] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_085fd19c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_085fd1a4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R3 = *(undefined **)(&sel_data)[on];
  stack_temp = R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = (char *)0x88050fb5;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88048764;
  iVar1 = on;
  puVar3 = (uint *)(&sel_data)[on];
  *puVar3 = R0;
  puVar3[1] = R1;
  puVar3[2] = R2;
  *(undefined **)(puVar3 + 3) = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_08054064;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805406c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xb5]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xf] * 4
                                                  )] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_085fd19c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_085fd1a4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  R3 = (undefined *)R0;
  R2 = 0;
  uVar4 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[R0 & 0xffff] + (uint)_alu_inv16 * 4)] + 4);
  sf = sf & 0xffffff00;
  zf = zf & 0xffffff00 |
       (uint)(byte)(&alu_false)
                   [(byte)(&alu_true)
                          [(uint)(byte)(&alu_true)
                                       [(uint)(byte)(&alu_true)
                                                    [(uint)(byte)(&alu_true)[uVar4 & 0xff] +
                                                     (uVar4 >> 8 & 0xff)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[R0 >> 0x10] +
                                                            (uint)_alu_inv16 * 4)] +
                                                  (uVar4 >> 0x10) * 4) & 0xff)] +
                           (*(uint *)((&alu_add16)
                                      [*(int *)((&alu_add16)[R0 >> 0x10] + (uint)_alu_inv16 * 4)] +
                                     (uVar4 >> 0x10) * 4) >> 8 & 0xff)]];
  of = of & 0xffffff00;
  b0 = *(int *)((&and)[zf] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x88051654;
  iVar1 = b0;
  puVar3 = (uint *)(&sel_data)[b0];
  *puVar3 = R0;
  puVar3[1] = R1;
  puVar3[2] = R2;
  *(undefined **)(puVar3 + 3) = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_08054064;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805406c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  stack_temp = *(char **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = &DAT_08054022;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = (char *)(*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_5600_0806d6a0] & 0xffff |
                       *(int *)((&alu_add16)[*(int *)(PTR_alu_add16_34821_08089f34 + 0x20000)] +
                               (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_5600_0806d6a0] >> 0x10)
                               * 4) << 0x10);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  R0 = *(uint *)(&fault)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&pop + *(int *)(sp + -0x200060));
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x54]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x16] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_085fd19c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_085fd1a4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x2e]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x18] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_085fd19c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_085fd1a4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(uint *)(&sel_data)[on] =
       *(uint *)(&alu_add16)[*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 4)] & 0xffff
       | *(int *)((&alu_add16)[*(int *)(&alu_add16)[*(uint *)(&sel_data)[on] >> 0x10]] +
                 (*(uint *)(&alu_add16)
                           [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 4)] >> 0x10)
                 * 4) << 0x10;
  R3 = *(undefined **)(&sel_data)[on];
  R2 = 10000;
  alu_t = 10000;
  uVar4 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)R3 & 0xffff] + (uint)uRam0816ce60 * 4)]
                   + 4);
  uVar5 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)R3 >> 0x10] + (uint)_alu_inv16 * 4)] +
                   (uVar4 >> 0x10) * 4);
  _DAT_081fcfee = (undefined2)uVar5;
  cf = (&alu_false)[uVar5 >> 0x10 & 0xff];
  alu_s._3_1_ = (byte)(uVar5 >> 8);
  sf = sf & 0xffffff00 | *(uint *)(&alu_b7 + (uint)alu_s._3_1_ * 4) & 0xff;
  zf = zf & 0xffffff00 |
       (uint)(byte)(&alu_false)
                   [(byte)(&alu_true)
                          [(uint)(byte)(&alu_true)
                                       [(uint)(byte)(&alu_true)
                                                    [(uint)(byte)(&alu_true)[uVar4 & 0xff] +
                                                     (uVar4 >> 8 & 0xff)] + (uVar5 & 0xff)] +
                           (uint)alu_s._3_1_]];
  of = of & 0xffffff00 |
       **(uint **)(*(int *)((&alu_cmp_of)[*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4)] +
                           *(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4) & 0xffffff00) * 4)
                           * 4) +
                  *(int *)(&alu_b7 +
                          (*(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4) & 0xffffff00) * 4)
                           & 0xffffff00 | (uint)alu_s._3_1_) * 4) * 4) & 0xff;
  b0 = *(int *)((&and)[*(int *)((&xor)[sf] + of * 4)] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x88050c4d;
  iVar1 = b0;
  puVar2 = (undefined4 *)(&sel_data)[b0];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  *(undefined **)(puVar2 + 3) = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_08054064;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805406c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  R3 = &DAT_08054020;
  stack_temp = &DAT_08054020;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  iVar1 = *(int *)((&alu_add16)[*(int *)(PTR_alu_add16_34821_08089f34 + 0x20000)] +
                  (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_7909_0806fab4] >> 0x10) * 4);
  alu_s = *(uint *)(&alu_add16)[*(int *)PTR_alu_add16_7909_0806fab4] & 0xffff | iVar1 << 0x10;
  alu_c = (undefined)iVar1;
  uRam081fcff1 = (undefined)((uint)iVar1 >> 8);
  DAT_081fcff2 = (undefined2)((uint)iVar1 >> 0x10);
  stack_temp = (char *)alu_s;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  _external = printf;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  R0 = 0;
  _alu_x = target;
  _alu_y = 0x88051f5d;
  b1 = (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x1f];
  b2 = (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5];
  b3 = (uint)(byte)(&alu_eq)[target >> 0x18][0x88];
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x5d]] +
                                                  b1 * 4)] + b2 * 4)] + b3 * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_085fd19c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_085fd1a4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined **)(&sel_data)[on] = fp;
  stack_temp = *(char **)sp;
  DAT_081fd104 = *(undefined4 *)(sp + 4);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&pop + *(int *)(sp + -0x200060));
  puVar2 = (undefined4 *)(&sel_data)[on];
  *(char **)puVar2 = stack_temp;
  puVar2[1] = DAT_081fd104;
  stack_temp = *(char **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = *(char **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = *(char **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = *(char **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = *(char **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = *(char **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  branch_temp = stack_temp;
  *(char **)(&sel_target)[on] = stack_temp;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  *(undefined **)(puVar2 + 3) = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  data_p = &jmp_d0;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_08054064;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805406c;
  *(undefined4 *)(&sel_on)[on] = 0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}


