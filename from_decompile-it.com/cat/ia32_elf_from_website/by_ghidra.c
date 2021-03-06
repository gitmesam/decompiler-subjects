typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long double    longdouble;
typedef long long    longlong;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef int    wchar_t;
typedef unsigned short    word;
typedef void _IO_lock_t;

typedef struct _IO_marker _IO_marker, *P_IO_marker;

typedef struct _IO_FILE _IO_FILE, *P_IO_FILE;

typedef long __off_t;

typedef longlong __quad_t;

typedef __quad_t __off64_t;

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

typedef uint wint_t;

typedef struct stat64 stat64, *Pstat64;

typedef ulonglong __u_quad_t;

typedef __u_quad_t __dev_t;

typedef ulong __ino_t;

typedef uint __mode_t;

typedef uint __nlink_t;

typedef uint __uid_t;

typedef uint __gid_t;

typedef long __blksize_t;

typedef __quad_t __blkcnt64_t;

typedef struct timespec timespec, *Ptimespec;

typedef __u_quad_t __ino64_t;

typedef long __time_t;

struct timespec {
    __time_t tv_sec;
    long tv_nsec;
};

struct stat64 {
    __dev_t st_dev;
    uint __pad1;
    __ino_t __st_ino;
    __mode_t st_mode;
    __nlink_t st_nlink;
    __uid_t st_uid;
    __gid_t st_gid;
    __dev_t st_rdev;
    uint __pad2;
    __off64_t st_size;
    __blksize_t st_blksize;
    __blkcnt64_t st_blocks;
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
    __ino64_t st_ino;
};

typedef bool _Bool;

typedef union memory_double memory_double, *Pmemory_double;

union memory_double {
    longdouble value;
    uint word[3];
};


// WARNING! conflicting data type names: /DWARF/libio.h/_IO_marker - /libio.h/_IO_marker

typedef struct slotvec slotvec, *Pslotvec;


// WARNING! conflicting data type names: /DWARF/stddef.h/size_t - /stddef.h/size_t

struct slotvec {
    size_t size;
    char * val;
};

typedef struct stat stat, *Pstat;


// WARNING! conflicting data type names: /DWARF/time.h/timespec - /time.h/timespec

struct stat {
    __dev_t st_dev;
    ushort __pad1;
    undefined field_0xa;
    undefined field_0xb;
    __ino_t __st_ino;
    __mode_t st_mode;
    __nlink_t st_nlink;
    __uid_t st_uid;
    __gid_t st_gid;
    __dev_t st_rdev;
    ushort __pad2;
    undefined field_0x2a;
    undefined field_0x2b;
    __off64_t st_size;
    __blksize_t st_blksize;
    __blkcnt64_t st_blocks;
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
    __ino64_t st_ino;
};


// WARNING! conflicting data type names: /DWARF/stdio.h/FILE - /stdio.h/FILE


// WARNING! conflicting data type names: /DWARF/stdio.h/_IO_FILE - /stdio.h/_IO_FILE

typedef int __ssize_t;

typedef __ssize_t ssize_t;

typedef __ino64_t ino_t;

typedef __dev_t dev_t;

typedef enum quoting_style {
    c_quoting_style=3,
    clocale_quoting_style=6,
    escape_quoting_style=4,
    literal_quoting_style=0,
    locale_quoting_style=5,
    shell_always_quoting_style=2,
    shell_quoting_style=1
} quoting_style;

typedef struct quoting_options quoting_options, *Pquoting_options;

struct quoting_options {
    enum quoting_style style;
    uint quote_these_too[8];
};

typedef struct __mbstate_t __mbstate_t, *P__mbstate_t;

typedef union anon_union_for___value anon_union_for___value, *Panon_union_for___value;

union anon_union_for___value {
    uint __wch;
    char __wchb[4];
};

struct __mbstate_t {
    int __count;
    union anon_union_for___value __value;
};

typedef union anon_union anon_union, *Panon_union;

union anon_union {
    uint __wch;
    char __wchb[4];
};

typedef struct __mbstate_t mbstate_t;

typedef enum anon_enum_32 {
    COPYRIGHT_YEAR=2008,
    GETOPT_HELP_CHAR=-130,
    GETOPT_VERSION_CHAR=-131,
    HAVE_GNU_CALLOC=1,
    _ISalnum=8,
    _ISalpha=1024,
    _ISblank=1,
    _IScntrl=2,
    _ISdigit=2048,
    _ISgraph=32768,
    _ISlower=512,
    _ISprint=16384,
    _ISpunct=4,
    _ISspace=8192,
    _ISupper=256,
    _ISxdigit=4096,
    __LC_ADDRESS=9,
    __LC_ALL=6,
    __LC_COLLATE=3,
    __LC_CTYPE=0,
    __LC_IDENTIFICATION=12,
    __LC_MEASUREMENT=11,
    __LC_MESSAGES=5,
    __LC_MONETARY=4,
    __LC_NAME=8,
    __LC_NUMERIC=1,
    __LC_PAPER=7,
    __LC_TELEPHONE=10,
    __LC_TIME=2
} anon_enum_32;

typedef ushort fpucw_t;

typedef struct char_directive char_directive, *Pchar_directive;

struct char_directive {
    char * dir_start;
    char * dir_end;
    int flags;
    char * width_start;
    char * width_end;
    size_t width_arg_index;
    char * precision_start;
    char * precision_end;
    size_t precision_arg_index;
    char conversion;
    undefined field_0x25;
    undefined field_0x26;
    undefined field_0x27;
    size_t arg_index;
};

typedef struct char_directives char_directives, *Pchar_directives;

struct char_directives {
    size_t count;
    struct char_directive * dir;
    size_t max_width_length;
    size_t max_precision_length;
};

typedef struct option option, *Poption;

struct option {
    char * name;
    int has_arg;
    int * flag;
    int val;
};

typedef char * __gnuc_va_list;

typedef __gnuc_va_list va_list;

typedef struct argument argument, *Pargument;

typedef enum arg_type {
    TYPE_CHAR=13,
    TYPE_COUNT_INT_POINTER=20,
    TYPE_COUNT_LONGINT_POINTER=21,
    TYPE_COUNT_LONGLONGINT_POINTER=22,
    TYPE_COUNT_SCHAR_POINTER=18,
    TYPE_COUNT_SHORT_POINTER=19,
    TYPE_DOUBLE=11,
    TYPE_INT=5,
    TYPE_LONGDOUBLE=12,
    TYPE_LONGINT=7,
    TYPE_LONGLONGINT=9,
    TYPE_NONE=0,
    TYPE_POINTER=17,
    TYPE_SCHAR=1,
    TYPE_SHORT=3,
    TYPE_STRING=15,
    TYPE_UCHAR=2,
    TYPE_UINT=6,
    TYPE_ULONGINT=8,
    TYPE_ULONGLONGINT=10,
    TYPE_USHORT=4,
    TYPE_WIDE_CHAR=14,
    TYPE_WIDE_STRING=16
} arg_type;

typedef union anon_union_for_a anon_union_for_a, *Panon_union_for_a;


// WARNING! conflicting data type names: /DWARF/stddef.h/wchar_t - /wchar_t

union anon_union_for_a {
    char a_schar;
    uchar a_uchar;
    short a_short;
    ushort a_ushort;
    int a_int;
    uint a_uint;
    long a_longint;
    ulong a_ulongint;
    longlong a_longlongint;
    ulonglong a_ulonglongint;
    float a_float;
    double a_double;
    longdouble a_longdouble;
    int a_char;
    wint_t a_wide_char;
    char * a_string;
    wchar_t * a_wide_string;
    void * a_pointer;
    char * a_count_schar_pointer;
    short * a_count_short_pointer;
    int * a_count_int_pointer;
    long * a_count_longint_pointer;
    longlong * a_count_longlongint_pointer;
};

struct argument {
    enum arg_type type;
    union anon_union_for_a a;
};

typedef union anon_union.conflict anon_union.conflict, *Panon_union.conflict;

union anon_union.conflict {
    char a_schar;
    uchar a_uchar;
    short a_short;
    ushort a_ushort;
    int a_int;
    uint a_uint;
    long a_longint;
    ulong a_ulongint;
    longlong a_longlongint;
    ulonglong a_ulonglongint;
    float a_float;
    double a_double;
    longdouble a_longdouble;
    int a_char;
    wint_t a_wide_char;
    char * a_string;
    wchar_t * a_wide_string;
    void * a_pointer;
    char * a_count_schar_pointer;
    short * a_count_short_pointer;
    int * a_count_int_pointer;
    long * a_count_longint_pointer;
    longlong * a_count_longlongint_pointer;
};

typedef struct arguments arguments, *Parguments;

struct arguments {
    size_t count;
    struct argument * arg;
};

typedef struct evp_pkey_ctx_st evp_pkey_ctx_st, *Pevp_pkey_ctx_st;

struct evp_pkey_ctx_st {
};

typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;


// WARNING! conflicting data type names: /wchar.h/__mbstate_t - /DWARF/wchar.h/__mbstate_t


// WARNING! conflicting data type names: /wchar.h/mbstate_t - /DWARF/wchar.h/mbstate_t

typedef union _union_27 _union_27, *P_union_27;

union _union_27 {
    uint __wch;
    char __wchb[4];
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




int _init(EVP_PKEY_CTX *ctx)

{
  int iStack12;
  
  __gmon_start__();
  frame_dummy();
  __do_global_ctors_aux();
  return iStack12;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int getpagesize(void)

{
  int iVar1;
  
  iVar1 = getpagesize();
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void abort(void)

{
                    // WARNING: Subroutine does not return
  abort();
}



// WARNING: Unknown calling convention yet parameter storage is locked

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  return piVar1;
}



void __cxa_atexit(void)

{
  __cxa_atexit();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = memcmp(__s1,__s2,__n);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int open64(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = open64(__file,__oflag);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int fputs_unlocked(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = fputs_unlocked(__s,__stream);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

size_t __ctype_get_mb_cur_max(void)

{
  size_t sVar1;
  
  sVar1 = __ctype_get_mb_cur_max();
  return sVar1;
}



void __gmon_start__(void)

{
  __gmon_start__();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = realloc(__ptr,__size);
  return pvVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = calloc(__nmemb,__size);
  return pvVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

ssize_t write(int __fd,void *__buf,size_t __n)

{
  ssize_t sVar1;
  
  sVar1 = write(__fd,__buf,__n);
  return sVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memset(__s,__c,__n);
  return pvVar1;
}



void __libc_start_main(void)

{
  __libc_start_main();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * stpcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = stpcpy(__dest,__src);
  return pcVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int ferror_unlocked(FILE *__stream)

{
  int iVar1;
  
  iVar1 = ferror_unlocked(__stream);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void _exit(int __status)

{
                    // WARNING: Subroutine does not return
  _exit(__status);
}



void bindtextdomain(void)

{
  bindtextdomain();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

size_t mbrtowc(wchar_t *__pwc,char *__s,size_t __n,mbstate_t *__p)

{
  size_t sVar1;
  
  sVar1 = mbrtowc(__pwc,__s,__n,__p);
  return sVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = read(__fd,__buf,__nbytes);
  return sVar1;
}



void gettext(void)

{
  gettext();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void free(void *__ptr)

{
  free(__ptr);
  return;
}



void getopt_long(void)

{
  getopt_long();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = ioctl(__fd,__request);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

ushort ** __ctype_b_loc(void)

{
  ushort **ppuVar1;
  
  ppuVar1 = __ctype_b_loc();
  return ppuVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = fclose(__stream);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int mbsinit(mbstate_t *__ps)

{
  int iVar1;
  
  iVar1 = mbsinit(__ps);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memcpy(__dest,__src,__n);
  return pvVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = strlen(__s);
  return sVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * setlocale(int __category,char *__locale)

{
  char *pcVar1;
  
  pcVar1 = setlocale(__category,__locale);
  return pcVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = printf(__format);
  return iVar1;
}



void __signbitl(void)

{
  __signbitl();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int close(int __fd)

{
  int iVar1;
  
  iVar1 = close(__fd);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = fwrite(__ptr,__size,__n,__s);
  return sVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = fprintf(__stream,__format);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = malloc(__size);
  return pvVar1;
}



void __stack_chk_fail(void)

{
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void __fpending(void)

{
  __fpending();
  return;
}



void error(void)

{
  error();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memmove(__dest,__src,__n);
  return pvVar1;
}



void textdomain(void)

{
  textdomain();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int __fxstat64(int __ver,int __fildes,stat64 *__stat_buf)

{
  int iVar1;
  
  iVar1 = __fxstat64(__ver,__fildes,__stat_buf);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = snprintf(__s,__maxlen,__format);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int iswprint(wint_t __wc)

{
  int iVar1;
  
  iVar1 = iswprint(__wc);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = strcmp(__s1,__s2);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void exit(int __status)

{
                    // WARNING: Subroutine does not return
  exit(__status);
}



void _start(void)

{
  __libc_start_main(main);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x08048e1a)
// WARNING: Removing unreachable block (ram,0x08048e20)

void __do_global_dtors_aux(void)

{
  if (completed_6635 == '\0') {
    completed_6635 = '\x01';
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x08048e68)

void frame_dummy(void)

{
  return;
}



void usage(int status)

{
  FILE *__stream;
  char *__format;
  char *__s;
  
  __s = program_name;
  if (status == 0) {
    __format = (char *)gettext("Usage: %s [OPTION] [FILE]...\n");
    printf(__format,__s);
    __stream = stdout;
    __s = (char *)gettext(
                         "Concatenate FILE(s), or standard input, to standard output.\n\n  -A, --show-all           equivalent to -vET\n  -b, --number-nonblank    number nonempty output lines\n  -e                       equivalent to -vE\n  -E, --show-ends          display $ at end of each line\n  -n, --number             number all output lines\n  -s, --squeeze-blank      suppress repeated empty output lines\n"
                         );
    fputs_unlocked(__s,__stream);
    __stream = stdout;
    __s = (char *)gettext(
                         "  -t                       equivalent to -vT\n  -T, --show-tabs          display TAB characters as ^I\n  -u                       (ignored)\n  -v, --show-nonprinting   use ^ and M- notation, except for LFD and TAB\n"
                         );
    fputs_unlocked(__s,__stream);
    __stream = stdout;
    __s = (char *)gettext("      --help     display this help and exit\n");
    fputs_unlocked(__s,__stream);
    __stream = stdout;
    __s = (char *)gettext("      --version  output version information and exit\n");
    fputs_unlocked(__s,__stream);
    __stream = stdout;
    __s = (char *)gettext("\nWith no FILE, or when FILE is -, read standard input.\n");
    fputs_unlocked(__s,__stream);
    __s = program_name;
    __format = (char *)gettext(
                              "\nExamples:\n  %s f - g  Output f\'s contents, then standard input, then g\'s contents.\n  %s        Copy standard input to standard output.\n"
                              );
    printf(__format,__s,__s);
    emit_bug_reporting_address();
  }
  else {
    __format = (char *)gettext("Try `%s --help\' for more information.\n");
    fprintf(stderr,__format,__s);
  }
                    // WARNING: Subroutine does not return
  exit(status);
}



void emit_bug_reporting_address(void)

{
  char *__format;
  
  __format = (char *)gettext("\nReport bugs to <%s>.\n");
  printf(__format,"bug-coreutils@gnu.org");
  return;
}



void next_line_num(void)

{
  char cVar1;
  char *endp;
  
  endp = line_num_end;
  do {
    cVar1 = *endp;
    *endp = cVar1 + '\x01';
    if (cVar1 < '9') {
      return;
    }
    *endp = '0';
    endp = endp + -1;
  } while (line_num_start <= endp);
  if (line_num_start < line_buf + 1) {
    line_buf[0] = '>';
  }
  else {
    line_num_start = line_num_start + -1;
    *line_num_start = '1';
  }
  if (line_num_start < line_num_print) {
    line_num_print = line_num_print + -1;
  }
  return;
}



_Bool simple_cat(char *buf,size_t bufsize)

{
  char *pcVar1;
  size_t count;
  int *piVar2;
  size_t sVar3;
  undefined4 uVar4;
  size_t n;
  size_t n_read;
  
  while( true ) {
    count = safe_read(input_desc,buf,bufsize);
    pcVar1 = infile;
    if (count == 0xffffffff) {
      piVar2 = __errno_location();
      error(0,*piVar2,&DAT_08050132,pcVar1);
      return false;
    }
    if (count == 0) break;
    sVar3 = full_write(1,buf,count);
    if (sVar3 != count) {
      uVar4 = gettext("write error");
      piVar2 = __errno_location();
      error(1,*piVar2,uVar4);
    }
  }
  return true;
}



_Bool cat(char *inbuf,size_t insize,char *outbuf,size_t outsize,_Bool show_nonprinting,
         _Bool show_tabs,_Bool number,_Bool number_nonblank,_Bool show_ends,_Bool squeeze_blank)

{
  bool bVar1;
  size_t sVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  char *__n;
  int n_to_read;
  size_t remaining_bytes;
  char *wp;
  int newlines;
  size_t n_read;
  char *bpout;
  char *eob;
  char *bpin;
  _Bool input_pending;
  _Bool use_fionread;
  uchar ch;
  
  newlines = newlines2;
  bVar1 = true;
  eob = inbuf;
  bpin = inbuf + 1;
  bpout = outbuf;
LAB_0804915a:
  do {
    if (outbuf + outsize <= bpout) {
      wp = outbuf;
      do {
        sVar2 = full_write(1,wp,outsize);
        if (sVar2 != outsize) {
          uVar3 = gettext("write error");
          piVar4 = __errno_location();
          error(1,*piVar4,uVar3);
        }
        wp = wp + outsize;
        __n = bpout + -(int)wp;
      } while (outsize <= __n);
      memmove(outbuf,wp,(size_t)__n);
      bpout = outbuf + (int)__n;
    }
    if (eob < bpin) {
      n_to_read = 0;
      if ((bVar1) && (iVar5 = ioctl(input_desc,0x541b,&n_to_read), iVar5 < 0)) {
        piVar4 = __errno_location();
        if ((*piVar4 != 0x5f) &&
           ((((piVar4 = __errno_location(), *piVar4 != 0x19 &&
              (piVar4 = __errno_location(), *piVar4 != 0x16)) &&
             (piVar4 = __errno_location(), *piVar4 != 0x13)) &&
            (piVar4 = __errno_location(), *piVar4 != 0x26)))) {
          __n = quote(infile);
          uVar3 = gettext("cannot do ioctl on %s");
          piVar4 = __errno_location();
          error(0,*piVar4,uVar3,__n);
          newlines2 = newlines;
          return false;
        }
        bVar1 = false;
      }
      if (n_to_read != 0) {
        write_pending(outbuf,&bpout);
      }
      sVar2 = safe_read(input_desc,inbuf,insize);
      __n = infile;
      if (sVar2 == 0xffffffff) {
        piVar4 = __errno_location();
        error(0,*piVar4,&DAT_08050132,__n);
        write_pending(outbuf,&bpout);
        newlines2 = newlines;
        return false;
      }
      if (sVar2 == 0) {
        write_pending(outbuf,&bpout);
        newlines2 = newlines;
        return true;
      }
      bpin = inbuf;
      eob = inbuf + sVar2;
      *eob = '\n';
LAB_08049423:
      ch = *bpin;
    }
    else {
      newlines = newlines + 1;
      if (newlines < 1) {
LAB_08049405:
        if (show_ends != false) {
          *bpout = '$';
          bpout = bpout + 1;
        }
        *bpout = '\n';
        bpout = bpout + 1;
        goto LAB_08049423;
      }
      if ((newlines < 2) || (newlines = 2, squeeze_blank == false)) {
        if (((number_nonblank ^ 1U) & number) != 0) {
          next_line_num();
          bpout = stpcpy(bpout,line_num_print);
        }
        goto LAB_08049405;
      }
      ch = *bpin;
    }
    bpin = bpin + 1;
    if (ch != '\n') {
      if ((-1 < newlines) && (number != false)) {
        next_line_num();
        bpout = stpcpy(bpout,line_num_print);
      }
      if (show_nonprinting == false) {
        do {
          if ((ch == '\t') && (show_tabs == true)) {
            *bpout = '^';
            bpout[1] = 'I';
            bpout = bpout + 2;
          }
          else {
            if (ch == '\n') goto LAB_080495d4;
            *bpout = ch;
            bpout = bpout + 1;
          }
          ch = *bpin;
          bpin = bpin + 1;
        } while( true );
      }
      do {
        if (ch < 0x20) {
          if ((ch == '\t') && (show_tabs == false)) {
            *bpout = '\t';
            bpout = bpout + 1;
          }
          else {
            if (ch == '\n') goto code_r0x08049550;
            *bpout = '^';
            bpout[1] = ch + '@';
            bpout = bpout + 2;
          }
        }
        else {
          if (ch < 0x7f) {
            *bpout = ch;
            bpout = bpout + 1;
          }
          else {
            if (ch == '\x7f') {
              *bpout = '^';
              bpout[1] = '?';
              bpout = bpout + 2;
            }
            else {
              *bpout = 'M';
              bpout[1] = '-';
              __n = bpout + 2;
              if (ch < 0xa0) {
                *__n = '^';
                bpout[3] = ch + -0x40;
                bpout = bpout + 4;
              }
              else {
                if (ch == -1) {
                  *__n = '^';
                  bpout[3] = '?';
                  bpout = bpout + 4;
                }
                else {
                  *__n = ch + -0x80;
                  bpout = bpout + 3;
                }
              }
            }
          }
        }
        ch = *bpin;
        bpin = bpin + 1;
      } while( true );
    }
  } while( true );
LAB_080495d4:
  newlines = -1;
  goto LAB_0804915a;
code_r0x08049550:
  newlines = -1;
  goto LAB_0804915a;
}



void write_pending(char *outbuf,char **bpout)

{
  char *pcVar1;
  undefined4 uVar2;
  int *piVar3;
  char *count;
  size_t n_write;
  
  count = *bpout + -(int)outbuf;
  if (count != (char *)0x0) {
    pcVar1 = (char *)full_write(1,outbuf,(size_t)count);
    if (pcVar1 != count) {
      uVar2 = gettext("write error");
      piVar3 = __errno_location();
      error(1,*piVar3,uVar2);
    }
    *bpout = outbuf;
  }
  return;
}



// WARNING: Could not reconcile some variable overlaps

int main(void)

{
  bool bVar1;
  option long_options [10];
  _Bool _Var2;
  size_t alignment;
  int iVar3;
  int *piVar4;
  void *ptr;
  char *inbuf_00;
  undefined4 uVar5;
  bool bVar6;
  int in_stack_00000004;
  char **in_stack_00000008;
  char *local_108;
  option *local_104;
  option *poVar7;
  option *local_e4;
  option *local_d8;
  option *local_d4;
  uint local_bc;
  uint local_b8;
  stat stat_buf;
  ino_t out_ino;
  dev_t out_dev;
  int file_open_mode;
  int argind;
  int c;
  char *outbuf;
  char *inbuf;
  size_t page_size;
  size_t insize;
  size_t outsize;
  _Bool local_20;
  _Bool local_1f;
  _Bool local_1e;
  _Bool show_tabs;
  _Bool show_nonprinting;
  _Bool show_ends;
  _Bool squeeze_blank;
  _Bool number_nonblank;
  _Bool number;
  _Bool have_read_stdin;
  _Bool check_redirection;
  _Bool ok;
  
  alignment = getpagesize();
  number_nonblank = true;
  bVar1 = false;
  show_nonprinting = false;
  show_tabs = false;
  local_1e = false;
  local_1f = false;
  local_20 = false;
  outsize._3_1_ = false;
  program_name = *in_stack_00000008;
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit(close_stdout);
LAB_08049898:
  do {
    local_104 = (option *)&ram0x080501c0;
    local_108 = "benstuvAET";
    iVar3 = getopt_long(in_stack_00000004,in_stack_00000008,"benstuvAET",0x80501c0,0);
    if (iVar3 == -1) break;
    if (iVar3 != 0x62) {
      if (iVar3 < 99) {
        if (iVar3 == 0x41) {
          local_20 = true;
          local_1f = true;
          outsize._3_1_ = true;
          goto LAB_08049898;
        }
        if (iVar3 < 0x42) {
          if (iVar3 == -0x83) {
            version_etc(stdout,"cat","GNU coreutils","6.10","Torbjorn Granlund",
                        "Richard M. Stallman",0);
                    // WARNING: Subroutine does not return
            exit(0);
          }
          if (iVar3 == -0x82) {
            usage(0);
            goto LAB_08049898;
          }
        }
        else {
          if (iVar3 == 0x45) {
            local_1f = true;
            goto LAB_08049898;
          }
          if (iVar3 == 0x54) {
            outsize._3_1_ = true;
            goto LAB_08049898;
          }
        }
      }
      else {
        if (iVar3 == 0x73) {
          local_1e = true;
          goto LAB_08049898;
        }
        if (iVar3 < 0x74) {
          if (iVar3 == 0x65) {
            local_1f = true;
            local_20 = true;
            goto LAB_08049898;
          }
          if (iVar3 == 0x6e) {
            show_nonprinting = true;
            goto LAB_08049898;
          }
        }
        else {
          if (iVar3 == 0x75) goto LAB_08049898;
          if (iVar3 < 0x75) {
            outsize._3_1_ = true;
            local_20 = true;
            goto LAB_08049898;
          }
          if (iVar3 == 0x76) {
            local_20 = true;
            goto LAB_08049898;
          }
        }
      }
      usage(1);
      goto LAB_08049898;
    }
    show_nonprinting = true;
    show_tabs = true;
  } while( true );
  iVar3 = fstat64(1,(stat64 *)&local_b8);
  if (iVar3 < 0) {
    local_108 = (char *)gettext("standard output");
    piVar4 = __errno_location();
    error(1,*piVar4,local_108);
  }
  if (((int)stat_buf.st_size._4_4_ < 1) || ((option *)0x20000000 < stat_buf.st_size._4_4_)) {
    local_d8 = (option *)0x200;
  }
  else {
    local_d8 = stat_buf.st_size._4_4_;
  }
  bVar6 = (stat_buf.__st_ino & 0xf000) != 0x8000;
  if (!bVar6) {
    out_ino._4_4_ = local_b8;
    out_dev._0_4_ = (uint)stat_buf.st_dev;
    stat_buf.st_ino._4_4_ = stat_buf.st_ctim.tv_nsec;
    out_ino._0_4_ = (uint)stat_buf.st_ino;
  }
  infile = "-";
  file_open_mode = optind;
  do {
    if (file_open_mode < in_stack_00000004) {
      infile = in_stack_00000008[file_open_mode];
    }
    iVar3 = strcmp(infile,"-");
    if (iVar3 == 0) {
      bVar1 = true;
      input_desc = 0;
LAB_08049a47:
      iVar3 = fstat64(input_desc,(stat64 *)&local_b8);
      poVar7 = (option *)infile;
      if (iVar3 < 0) {
        piVar4 = __errno_location();
        local_108 = "%s";
        error(0,*piVar4);
        number_nonblank = false;
      }
      else {
        if (((int)stat_buf.st_size._4_4_ < 1) || ((option *)0x20000000 < stat_buf.st_size._4_4_)) {
          local_d4 = (option *)0x200;
        }
        else {
          local_d4 = stat_buf.st_size._4_4_;
        }
        if ((((bVar6) || ((local_b8 ^ out_ino._4_4_ | (uint)stat_buf.st_dev ^ (uint)out_dev) != 0))
            || ((stat_buf.st_ctim.tv_nsec ^ stat_buf.st_ino._4_4_ |
                (uint)stat_buf.st_ino ^ (uint)out_ino) != 0)) || (input_desc == 0)) {
          if ((byte)(local_1e | show_nonprinting | local_1f | local_20 | outsize._3_1_) == 0) {
            local_e4 = local_d8;
            if (local_d8 < local_d4) {
              local_e4 = local_d4;
            }
            outbuf = (char *)xmalloc((int)&local_e4[-1].val + alignment + 3);
            inbuf_00 = (char *)ptr_align(outbuf,alignment);
            _Var2 = simple_cat(inbuf_00,(size_t)local_e4);
            poVar7 = local_104;
          }
          else {
            outbuf = (char *)xmalloc((int)&local_d4->name + alignment);
            ptr = xmalloc((int)&local_d8[1].name + alignment + (int)local_d4 * 4 + 2);
            local_108 = (char *)ptr_align(ptr,alignment);
            inbuf_00 = (char *)ptr_align(outbuf,alignment);
            poVar7 = local_d8;
            _Var2 = cat(inbuf_00,(size_t)local_d4,local_108,(size_t)local_d8,local_20,outsize._3_1_,
                        show_nonprinting,show_tabs,local_1f,local_1e);
            free(ptr);
          }
          number_nonblank = (_Bool)((_Var2 & number_nonblank) != 0);
          free(outbuf);
        }
        else {
          local_108 = (char *)gettext("%s: input file is output file");
          error(0,0);
          number_nonblank = false;
        }
      }
      iVar3 = strcmp(infile,"-");
      if ((iVar3 != 0) && (iVar3 = close(input_desc), local_104 = (option *)infile, iVar3 < 0)) {
        piVar4 = __errno_location();
        local_108 = "%s";
        error(0,*piVar4);
        number_nonblank = false;
        poVar7 = local_104;
      }
    }
    else {
      input_desc = open64(infile,0,local_108,local_104);
      poVar7 = (option *)infile;
      if (-1 < input_desc) goto LAB_08049a47;
      piVar4 = __errno_location();
      local_108 = "%s";
      error(0,*piVar4);
      number_nonblank = false;
    }
    file_open_mode = file_open_mode + 1;
    local_104 = poVar7;
    if (in_stack_00000004 <= file_open_mode) {
      if ((bVar1) && (iVar3 = close(0), iVar3 < 0)) {
        uVar5 = gettext("closing standard input");
        piVar4 = __errno_location();
        error(1,*piVar4,uVar5);
      }
      local_bc = (uint)(number_nonblank == false);
                    // WARNING: Subroutine does not return
      exit(local_bc);
    }
  } while( true );
}



void * ptr_align(void *ptr,size_t alignment)

{
  uint uVar1;
  char *p1;
  char *p0;
  
  uVar1 = (alignment - 1) + (int)ptr;
  return (void *)(uVar1 - uVar1 % alignment);
}



size_t full_write(int fd,void *buf,size_t count)

{
  size_t sVar1;
  int *piVar2;
  size_t n_rw;
  char *ptr;
  size_t total;
  
  total = 0;
  ptr = (char *)buf;
  while( true ) {
    if (count == 0) {
      return total;
    }
    sVar1 = safe_write(fd,ptr,count);
    if (sVar1 == 0xffffffff) break;
    if (sVar1 == 0) {
      piVar2 = __errno_location();
      *piVar2 = 0x1c;
      return total;
    }
    total = total + sVar1;
    ptr = ptr + sVar1;
    count = count - sVar1;
  }
  return total;
}



void version_etc_va(FILE *stream,char *command_name,char *package,char *version,va_list authors)

{
  undefined4 uVar1;
  char *__s;
  va_list tmp_authors;
  size_t n_authors;
  
  tmp_authors = authors;
  n_authors = 0;
  while (*(int *)tmp_authors != 0) {
    n_authors = n_authors + 1;
    tmp_authors = tmp_authors + 4;
  }
  if (command_name == (char *)0x0) {
    fprintf((FILE *)stream,"%s %s\n",package,version);
  }
  else {
    fprintf((FILE *)stream,"%s (%s) %s\n",command_name,package,version);
  }
  uVar1 = gettext(&DAT_08050327);
  fprintf((FILE *)stream,"Copyright %s %d Free Software Foundation, Inc.",uVar1,0x7d8);
  __s = (char *)gettext(
                       "\nLicense GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n"
                       );
  fputs_unlocked(__s,(FILE *)stream);
  switch(n_authors) {
  case 0:
                    // WARNING: Subroutine does not return
    abort();
  case 1:
    __s = (char *)gettext("Written by %s.\n");
    rpl_vfprintf(stream,__s,authors);
    break;
  case 2:
    __s = (char *)gettext("Written by %s and %s.\n");
    rpl_vfprintf(stream,__s,authors);
    break;
  case 3:
    __s = (char *)gettext("Written by %s, %s, and %s.\n");
    rpl_vfprintf(stream,__s,authors);
    break;
  case 4:
    __s = (char *)gettext("Written by %s, %s, %s,\nand %s.\n");
    rpl_vfprintf(stream,__s,authors);
    break;
  case 5:
    __s = (char *)gettext("Written by %s, %s, %s,\n%s, and %s.\n");
    rpl_vfprintf(stream,__s,authors);
    break;
  case 6:
    __s = (char *)gettext("Written by %s, %s, %s,\n%s, %s, and %s.\n");
    rpl_vfprintf(stream,__s,authors);
    break;
  case 7:
    __s = (char *)gettext("Written by %s, %s, %s,\n%s, %s, %s, and %s.\n");
    rpl_vfprintf(stream,__s,authors);
    break;
  case 8:
    __s = (char *)gettext("Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n");
    rpl_vfprintf(stream,__s,authors);
    break;
  case 9:
    __s = (char *)gettext("Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n");
    rpl_vfprintf(stream,__s,authors);
    break;
  default:
    __s = (char *)gettext("Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n");
    rpl_vfprintf(stream,__s,authors);
  }
  return;
}



void version_etc(FILE *stream,char *command_name,char *package,char *version,...)

{
  va_list authors;
  
  version_etc_va(stream,command_name,package,version,&stack0x00000014);
  return;
}



void close_stdout_set_file_name(char *file)

{
  file_name = file;
  return;
}



void close_stdout(void)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
  char *write_error;
  
  iVar1 = close_stream(stdout);
  if (iVar1 != 0) {
    uVar2 = gettext("write error");
    if (file_name == (char *)0x0) {
      piVar4 = __errno_location();
      error(0,*piVar4,&DAT_080505e2,uVar2);
    }
    else {
      pcVar3 = quotearg_colon(file_name);
      piVar4 = __errno_location();
      error(0,*piVar4,"%s: %s",pcVar3,uVar2);
    }
                    // WARNING: Subroutine does not return
    _exit(exit_failure);
  }
  iVar1 = close_stream(stderr);
  if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
    _exit(exit_failure);
  }
  return;
}



char * quote_n(int n,char *name)

{
  char *pcVar1;
  
  pcVar1 = quotearg_n_style(n,locale_quoting_style,name);
  return pcVar1;
}



char * quote(char *name)

{
  char *pcVar1;
  
  pcVar1 = quote_n(0,name);
  return pcVar1;
}



quoting_options * clone_quoting_options(quoting_options *o)

{
  int iVar1;
  int *piVar2;
  quoting_options *pqVar3;
  quoting_options *local_18;
  quoting_options *p;
  int e;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  if (o == (quoting_options *)0x0) {
    local_18 = &default_quoting_options;
  }
  else {
    local_18 = o;
  }
  pqVar3 = (quoting_options *)xmemdup(local_18,0x24);
  piVar2 = __errno_location();
  *piVar2 = iVar1;
  return pqVar3;
}



quoting_style get_quoting_style(quoting_options *o)

{
  quoting_options *local_8;
  
  if (o == (quoting_options *)0x0) {
    local_8 = &default_quoting_options;
  }
  else {
    local_8 = o;
  }
  return local_8->style;
}



void set_quoting_style(quoting_options *o,quoting_style s)

{
  quoting_options *local_8;
  
  if (o == (quoting_options *)0x0) {
    local_8 = &default_quoting_options;
  }
  else {
    local_8 = o;
  }
  local_8->style = s;
  return;
}



int set_char_quoting(quoting_options *o,char c,int i)

{
  uint *puVar1;
  uint uVar2;
  quoting_options *local_1c;
  int r;
  int shift;
  uint *p;
  uchar uc;
  
  if (o == (quoting_options *)0x0) {
    local_1c = &default_quoting_options;
  }
  else {
    local_1c = o;
  }
  puVar1 = local_1c->quote_these_too + ((byte)c >> 5);
  uVar2 = *puVar1 >> (c & 0x1fU) & 1;
  *puVar1 = *puVar1 ^ (i & 1U ^ uVar2) << (c & 0x1fU);
  return uVar2;
}



char * gettext_quote(char *msgid,quoting_style s)

{
  char *translation;
  
  translation = (char *)gettext(msgid);
  if ((translation == msgid) && (s == clocale_quoting_style)) {
    translation = "\"";
  }
  return translation;
}



size_t quotearg_buffer_restyled
                 (char *buffer,size_t buffersize,char *arg,size_t argsize,
                 quoting_style quoting_style,quoting_options *o)

{
  uint uVar1;
  bool bVar2;
  size_t sVar3;
  char *__s;
  int iVar4;
  ushort **ppuVar5;
  size_t sVar6;
  size_t sVar7;
  bool bVar8;
  byte local_58;
  mbstate_t mbstate;
  size_t ilim;
  size_t j;
  size_t bytes;
  wchar_t w;
  size_t m;
  char *right;
  char *left;
  size_t quote_string_len;
  char *quote_string;
  size_t len;
  size_t i;
  _Bool printable;
  uchar esc;
  uchar c;
  _Bool unibyte_locale;
  _Bool backslash_escapes;
  
  len = 0;
  quote_string = (char *)0x0;
  quote_string_len = 0;
  bVar2 = false;
  sVar3 = __ctype_get_mb_cur_max();
  switch(quoting_style) {
  case shell_always_quoting_style:
    if (buffersize != 0) {
      *buffer = '\'';
    }
    len = 1;
    quote_string = "\'";
    quote_string_len = 1;
    break;
  case c_quoting_style:
    if (buffersize != 0) {
      *buffer = '\"';
    }
    len = 1;
    bVar2 = true;
    quote_string = "\"";
    quote_string_len = 1;
    break;
  case escape_quoting_style:
    bVar2 = true;
    break;
  case locale_quoting_style:
  case clocale_quoting_style:
    quote_string = gettext_quote("`",quoting_style);
    __s = gettext_quote("\'",quoting_style);
    while (*quote_string != '\0') {
      if (len < buffersize) {
        buffer[len] = *quote_string;
      }
      len = len + 1;
      quote_string = quote_string + 1;
    }
    bVar2 = true;
    quote_string_len = strlen(__s);
    quote_string = __s;
  }
  i = 0;
  while( true ) {
    if (argsize == 0xffffffff) {
      bVar8 = arg[i] != '\0';
    }
    else {
      bVar8 = i != argsize;
    }
    if (!bVar8) break;
    if ((((bVar2) && (quote_string_len != 0)) && (i + quote_string_len <= argsize)) &&
       (iVar4 = memcmp(arg + i,quote_string,quote_string_len), iVar4 == 0)) {
      if (len < buffersize) {
        buffer[len] = '\\';
      }
      len = len + 1;
    }
    c = arg[i];
    switch(c) {
    case '\0':
      if (bVar2) {
        if (len < buffersize) {
          buffer[len] = '\\';
        }
        if (len + 1 < buffersize) {
          buffer[len + 1] = '0';
        }
        if (len + 2 < buffersize) {
          buffer[len + 2] = '0';
        }
        len = len + 3;
        c = '0';
      }
      break;
    default:
      if (sVar3 != 1) {
        memset(&mbstate,0,8);
        m = 0;
        bVar8 = true;
        if (argsize == 0xffffffff) {
          argsize = strlen(arg);
        }
LAB_0804a773:
        sVar6 = mbrtowc(&w,arg + i + m,argsize - (i + m),(mbstate_t *)&mbstate);
        if (sVar6 != 0) {
          if (sVar6 == 0xffffffff) {
            bVar8 = false;
          }
          else {
            if (sVar6 != 0xfffffffe) goto LAB_0804a7fc;
            bVar8 = false;
            while ((i + m < argsize && (arg[i + m] != '\0'))) {
              m = m + 1;
            }
          }
        }
        goto LAB_0804a86f;
      }
      m = 1;
      ppuVar5 = __ctype_b_loc();
      bVar8 = ((*ppuVar5)[c] & 0x4000) != 0;
LAB_0804a86f:
      if ((m < 2) && ((!bVar2 || (bVar8)))) break;
      uVar1 = i + m;
      while( true ) {
        if ((bVar2) && (!bVar8)) {
          if (len < buffersize) {
            buffer[len] = '\\';
          }
          if (len + 1 < buffersize) {
            buffer[len + 1] = (c >> 6) + 0x30;
          }
          if (len + 2 < buffersize) {
            buffer[len + 2] = (c >> 3 & 7) + 0x30;
          }
          len = len + 3;
          c = (c & 7) + 0x30;
        }
        if (uVar1 <= i + 1) break;
        if (len < buffersize) {
          buffer[len] = c;
        }
        len = len + 1;
        i = i + 1;
        c = arg[i];
      }
      goto store_c;
    case '\a':
      esc = 'a';
      goto c_escape;
    case '\b':
      esc = 'b';
      goto c_escape;
    case '\t':
      esc = 't';
      goto c_and_shell_escape;
    case '\n':
      esc = 'n';
      goto c_and_shell_escape;
    case '\v':
      esc = 'v';
      goto c_escape;
    case '\f':
      esc = 'f';
      goto c_escape;
    case '\r':
      esc = 'r';
      goto c_and_shell_escape;
    case ' ':
    case '!':
    case '\"':
    case '$':
    case '&':
    case '(':
    case ')':
    case '*':
    case ';':
    case '<':
    case '=':
    case '>':
    case '[':
    case '^':
    case '`':
    case '|':
switchD_0804a4d9_caseD_20:
      if (quoting_style == shell_quoting_style) goto use_shell_always_quoting_style;
      break;
    case '#':
    case '~':
switchD_0804a4d9_caseD_23:
      if (i == 0) goto switchD_0804a4d9_caseD_20;
      break;
    case '%':
    case '+':
    case ',':
    case '-':
    case '.':
    case '/':
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
    case ':':
    case 'A':
    case 'B':
    case 'C':
    case 'D':
    case 'E':
    case 'F':
    case 'G':
    case 'H':
    case 'I':
    case 'J':
    case 'K':
    case 'L':
    case 'M':
    case 'N':
    case 'O':
    case 'P':
    case 'Q':
    case 'R':
    case 'S':
    case 'T':
    case 'U':
    case 'V':
    case 'W':
    case 'X':
    case 'Y':
    case 'Z':
    case ']':
    case '_':
    case 'a':
    case 'b':
    case 'c':
    case 'd':
    case 'e':
    case 'f':
    case 'g':
    case 'h':
    case 'i':
    case 'j':
    case 'k':
    case 'l':
    case 'm':
    case 'n':
    case 'o':
    case 'p':
    case 'q':
    case 'r':
    case 's':
    case 't':
    case 'u':
    case 'v':
    case 'w':
    case 'x':
    case 'y':
    case 'z':
      break;
    case '\'':
      if (quoting_style == shell_quoting_style) goto use_shell_always_quoting_style;
      if (quoting_style == shell_always_quoting_style) {
        if (len < buffersize) {
          buffer[len] = '\'';
        }
        if (len + 1 < buffersize) {
          buffer[len + 1] = '\\';
        }
        if (len + 2 < buffersize) {
          buffer[len + 2] = '\'';
        }
        len = len + 3;
      }
      break;
    case '?':
      if (quoting_style == shell_quoting_style) goto use_shell_always_quoting_style;
      if (((quoting_style == c_quoting_style) && (i + 2 < argsize)) &&
         ((arg[i + 1] == '?' &&
          (((int)arg[i + 2] - 0x21U < 0x1e &&
           (local_58 = (byte)((int)arg[i + 2] - 0x21U), (1 << (local_58 & 0x1f) & 0x380051c1U) != 0)
           ))))) {
        c = arg[i + 2];
        i = i + 2;
        if (len < buffersize) {
          buffer[len] = '?';
        }
        if (len + 1 < buffersize) {
          buffer[len + 1] = '\\';
        }
        if (len + 2 < buffersize) {
          buffer[len + 2] = '?';
        }
        len = len + 3;
      }
      break;
    case '\\':
      esc = c;
c_and_shell_escape:
      if (quoting_style != shell_quoting_style) {
c_escape:
        if (!bVar2) break;
        c = esc;
        goto store_escape;
      }
      goto use_shell_always_quoting_style;
    case '{':
    case '}':
      if (argsize == 0xffffffff) {
        bVar8 = arg[1] != '\0';
      }
      else {
        bVar8 = argsize != 1;
      }
      if (!bVar8) goto switchD_0804a4d9_caseD_23;
    }
    if ((bVar2) && ((1 << (c & 0x1f) & o->quote_these_too[c >> 5]) != 0)) {
store_escape:
      if (len < buffersize) {
        buffer[len] = '\\';
      }
      len = len + 1;
    }
store_c:
    if (len < buffersize) {
      buffer[len] = c;
    }
    len = len + 1;
    i = i + 1;
  }
  if ((i != 0) || (quoting_style != shell_quoting_style)) {
    if (quote_string != (char *)0x0) {
      while (*quote_string != '\0') {
        if (len < buffersize) {
          buffer[len] = *quote_string;
        }
        len = len + 1;
        quote_string = quote_string + 1;
      }
    }
    if (len < buffersize) {
      buffer[len] = '\0';
    }
    return len;
  }
use_shell_always_quoting_style:
  sVar7 = quotearg_buffer_restyled(buffer,buffersize,arg,argsize,shell_always_quoting_style,o);
  return sVar7;
LAB_0804a7fc:
  if (quoting_style == shell_quoting_style) {
    j = 1;
    while (j < sVar6) {
      switch(arg[i + m + j]) {
      case '[':
      case '\\':
      case '^':
      case '`':
      case '|':
        goto use_shell_always_quoting_style;
      default:
        j = j + 1;
      }
    }
  }
  iVar4 = iswprint(w);
  if (iVar4 == 0) {
    bVar8 = false;
  }
  m = m + sVar6;
  iVar4 = mbsinit((mbstate_t *)&mbstate);
  if (iVar4 != 0) goto LAB_0804a86f;
  goto LAB_0804a773;
}



size_t quotearg_buffer(char *buffer,size_t buffersize,char *arg,size_t argsize,quoting_options *o)

{
  int iVar1;
  int *piVar2;
  size_t sVar3;
  quoting_options *local_18;
  size_t r;
  int e;
  quoting_options *p;
  
  if (o == (quoting_options *)0x0) {
    local_18 = &default_quoting_options;
  }
  else {
    local_18 = o;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  sVar3 = quotearg_buffer_restyled(buffer,buffersize,arg,argsize,local_18->style,local_18);
  piVar2 = __errno_location();
  *piVar2 = iVar1;
  return sVar3;
}



char * quotearg_alloc(char *arg,size_t argsize,quoting_options *o)

{
  int iVar1;
  int *piVar2;
  size_t sVar3;
  char *buffer;
  char *buf;
  size_t bufsize;
  int e;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  sVar3 = quotearg_buffer((char *)0x0,0,arg,argsize,o);
  buffer = xcharalloc(sVar3 + 1);
  quotearg_buffer(buffer,sVar3 + 1,arg,argsize,o);
  piVar2 = __errno_location();
  *piVar2 = iVar1;
  return buffer;
}



void quotearg_free(void)

{
  slotvec *__ptr;
  uint i;
  slotvec *sv;
  
  __ptr = slotvec;
  i = 1;
  while (i < nslots) {
    free(__ptr[i].val);
    i = i + 1;
  }
  if (__ptr->val != slot0) {
    free(__ptr->val);
    slotvec0.size = 0x100;
    slotvec0.val = slot0;
  }
  if (__ptr != &slotvec0) {
    free(__ptr);
    slotvec = &slotvec0;
  }
  nslots = 1;
  return;
}



char * quotearg_n_options(int n,char *arg,size_t argsize,quoting_options *options)

{
  int iVar1;
  size_t buffersize;
  char *pcVar2;
  int *piVar3;
  uint uVar4;
  size_t n_00;
  bool bVar5;
  slotvec *local_2c;
  size_t qsize;
  char *val;
  size_t size;
  size_t n1;
  slotvec *sv;
  uint n0;
  int e;
  _Bool preallocated;
  
  piVar3 = __errno_location();
  local_2c = slotvec;
  iVar1 = *piVar3;
  sv = slotvec;
  if (n < 0) {
                    // WARNING: Subroutine does not return
    abort();
  }
  if (nslots <= (uint)n) {
    uVar4 = n + 1;
    bVar5 = slotvec == &slotvec0;
    if (0x1fffffff < uVar4) {
      xalloc_die();
    }
    if (bVar5) {
      local_2c = (slotvec *)0x0;
    }
    else {
    }
    sv = (slotvec *)xrealloc(local_2c,uVar4 * 8);
    pcVar2 = slotvec0.val;
    slotvec = sv;
    if (bVar5) {
      sv->size = slotvec0.size;
      sv->val = pcVar2;
    }
    memset(sv + nslots,0,(uVar4 - nslots) * 8);
    nslots = uVar4;
  }
  buffersize = sv[n].size;
  val = sv[n].val;
  n_00 = quotearg_buffer(val,buffersize,arg,argsize,options);
  if (buffersize <= n_00) {
    n_00 = n_00 + 1;
    sv[n].size = n_00;
    if (val != slot0) {
      free(val);
    }
    val = xcharalloc(n_00);
    sv[n].val = val;
    quotearg_buffer(val,n_00,arg,argsize,options);
  }
  piVar3 = __errno_location();
  *piVar3 = iVar1;
  return val;
}



char * quotearg_n(int n,char *arg)

{
  char *pcVar1;
  
  pcVar1 = quotearg_n_options(n,arg,0xffffffff,&default_quoting_options);
  return pcVar1;
}



char * quotearg(char *arg)

{
  char *pcVar1;
  
  pcVar1 = quotearg_n(0,arg);
  return pcVar1;
}



quoting_options *
quoting_options_from_style(quoting_options *__return_storage_ptr__,quoting_style style)

{
  quoting_options o;
  
  o.style = style;
  memset(o.quote_these_too,0,0x20);
  __return_storage_ptr__->style = o.style;
  __return_storage_ptr__->quote_these_too[0] = o.quote_these_too[0];
  __return_storage_ptr__->quote_these_too[1] = o.quote_these_too[1];
  __return_storage_ptr__->quote_these_too[2] = o.quote_these_too[2];
  __return_storage_ptr__->quote_these_too[3] = o.quote_these_too[3];
  __return_storage_ptr__->quote_these_too[4] = o.quote_these_too[4];
  __return_storage_ptr__->quote_these_too[5] = o.quote_these_too[5];
  __return_storage_ptr__->quote_these_too[6] = o.quote_these_too[6];
  __return_storage_ptr__->quote_these_too[7] = o.quote_these_too[7];
  return __return_storage_ptr__;
}



char * quotearg_n_style(int n,quoting_style s,char *arg)

{
  char *pcVar1;
  quoting_options o;
  
  quoting_options_from_style(&o,s);
  pcVar1 = quotearg_n_options(n,arg,0xffffffff,&o);
  return pcVar1;
}



char * quotearg_n_style_mem(int n,quoting_style s,char *arg,size_t argsize)

{
  char *pcVar1;
  quoting_options o;
  
  quoting_options_from_style(&o,s);
  pcVar1 = quotearg_n_options(n,arg,argsize,&o);
  return pcVar1;
}



char * quotearg_style(quoting_style s,char *arg)

{
  char *pcVar1;
  
  pcVar1 = quotearg_n_style(0,s,arg);
  return pcVar1;
}



char * quotearg_char(char *arg,char ch)

{
  char *pcVar1;
  quoting_options options;
  
  options.style = default_quoting_options.style;
  options.quote_these_too[0] = default_quoting_options.quote_these_too[0];
  options.quote_these_too[1] = default_quoting_options.quote_these_too[1];
  options.quote_these_too[2] = default_quoting_options.quote_these_too[2];
  options.quote_these_too[3] = default_quoting_options.quote_these_too[3];
  options.quote_these_too[4] = default_quoting_options.quote_these_too[4];
  options.quote_these_too[5] = default_quoting_options.quote_these_too[5];
  options.quote_these_too[6] = default_quoting_options.quote_these_too[6];
  options.quote_these_too[7] = default_quoting_options.quote_these_too[7];
  set_char_quoting(&options,ch,1);
  pcVar1 = quotearg_n_options(0,arg,0xffffffff,&options);
  return pcVar1;
}



char * quotearg_colon(char *arg)

{
  char *pcVar1;
  
  pcVar1 = quotearg_char(arg,':');
  return pcVar1;
}



size_t safe_read(int fd,void *buf,size_t count)

{
  size_t sVar1;
  int *piVar2;
  ssize_t result;
  
  while( true ) {
    do {
      sVar1 = read(fd,buf,count);
      if (-1 < (int)sVar1) {
        return sVar1;
      }
      piVar2 = __errno_location();
    } while (*piVar2 == 4);
    piVar2 = __errno_location();
    if (*piVar2 != 0x16) break;
    if (count < 0x7fffe001) {
      return sVar1;
    }
    count = 0x7fffe000;
  }
  return sVar1;
}



size_t safe_write(int fd,void *buf,size_t count)

{
  size_t sVar1;
  int *piVar2;
  ssize_t result;
  
  while( true ) {
    do {
      sVar1 = write(fd,buf,count);
      if (-1 < (int)sVar1) {
        return sVar1;
      }
      piVar2 = __errno_location();
    } while (*piVar2 == 4);
    piVar2 = __errno_location();
    if (*piVar2 != 0x16) break;
    if (count < 0x7fffe001) {
      return sVar1;
    }
    count = 0x7fffe000;
  }
  return sVar1;
}



int rpl_vfprintf(FILE *fp,char *format,va_list args)

{
  int iVar1;
  int iVar2;
  char *__ptr;
  size_t sVar3;
  int *piVar4;
  int in_GS_OFFSET;
  size_t local_804;
  int saved_errno;
  size_t lenbuf;
  size_t len;
  char *output;
  char buf [2000];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  lenbuf = 2000;
  __ptr = vasnprintf(buf,&lenbuf,format,args);
  local_804 = lenbuf;
  if (__ptr == (char *)0x0) {
    fseterr(fp);
    local_804 = 0xffffffff;
  }
  else {
    sVar3 = fwrite(__ptr,1,lenbuf,(FILE *)fp);
    if (sVar3 < local_804) {
      if (__ptr != buf) {
        piVar4 = __errno_location();
        iVar2 = *piVar4;
        free(__ptr);
        piVar4 = __errno_location();
        *piVar4 = iVar2;
      }
      local_804 = 0xffffffff;
    }
    else {
      if ((int)local_804 < 0) {
        piVar4 = __errno_location();
        *piVar4 = 0x4b;
        fseterr(fp);
        local_804 = 0xffffffff;
      }
      else {
      }
    }
  }
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return local_804;
}



void * xnmalloc(size_t n,size_t s)

{
  void *pvVar1;
  
  if ((uint)(0xffffffff / (ulonglong)s) < n) {
    xalloc_die();
  }
  pvVar1 = xmalloc(n * s);
  return pvVar1;
}



void * xnrealloc(void *p,size_t n,size_t s)

{
  void *pvVar1;
  
  if ((uint)(0xffffffff / (ulonglong)s) < n) {
    xalloc_die();
  }
  pvVar1 = xrealloc(p,n * s);
  return pvVar1;
}



void * x2nrealloc(void *p,size_t *pn,size_t s)

{
  int iVar1;
  void *pvVar2;
  size_t n;
  
  n = *pn;
  if (p == (void *)0x0) {
    if (n == 0) {
      iVar1 = (int)(0x40 / (ulonglong)s);
      n = iVar1 + (uint)(iVar1 == 0);
    }
  }
  else {
    if ((uint)(0xaaaaaaaa / (ulonglong)s) <= n) {
      xalloc_die();
    }
    n = n + (n + 1 >> 1);
  }
  *pn = n;
  pvVar2 = xrealloc(p,n * s);
  return pvVar2;
}



char * xcharalloc(size_t n)

{
  char *pcVar1;
  
  pcVar1 = (char *)xmalloc(n);
  return pcVar1;
}



void * xmalloc(size_t n)

{
  void *pvVar1;
  void *p;
  
  pvVar1 = malloc(n);
  if ((pvVar1 == (void *)0x0) && (n != 0)) {
    xalloc_die();
  }
  return pvVar1;
}



void * xrealloc(void *p,size_t n)

{
  void *pvVar1;
  
  pvVar1 = realloc(p,n);
  if ((pvVar1 == (void *)0x0) && (n != 0)) {
    xalloc_die();
  }
  return pvVar1;
}



void * x2realloc(void *p,size_t *pn)

{
  void *pvVar1;
  
  pvVar1 = x2nrealloc(p,pn,1);
  return pvVar1;
}



void * xzalloc(size_t s)

{
  void *__s;
  
  __s = xmalloc(s);
  __s = memset(__s,0,s);
  return __s;
}



void * xcalloc(size_t n,size_t s)

{
  void *pvVar1;
  void *p;
  
  pvVar1 = calloc(n,s);
  if (pvVar1 == (void *)0x0) {
    xalloc_die();
  }
  return pvVar1;
}



void * xmemdup(void *p,size_t s)

{
  void *__dest;
  
  __dest = xmalloc(s);
  __dest = memcpy(__dest,p,s);
  return __dest;
}



char * xstrdup(char *string)

{
  size_t sVar1;
  char *pcVar2;
  
  sVar1 = strlen(string);
  pcVar2 = (char *)xmemdup(string,sVar1 + 1);
  return pcVar2;
}



void fseterr(FILE *fp)

{
  fp->_flags = fp->_flags | 0x20;
  return;
}



void xalloc_die(void)

{
  undefined4 uVar1;
  
  uVar1 = gettext("memory exhausted");
  error(exit_failure,0,&DAT_08050935,uVar1);
                    // WARNING: Subroutine does not return
  abort();
}



int close_stream(FILE *stream)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  _Bool fclose_fail;
  _Bool prev_fail;
  _Bool some_pending;
  
  iVar1 = __fpending(stream);
  iVar2 = ferror_unlocked((FILE *)stream);
  iVar3 = fclose((FILE *)stream);
  if ((iVar2 == 0) &&
     ((iVar3 == 0 || ((iVar1 == 0 && (piVar4 = __errno_location(), *piVar4 == 9)))))) {
    return 0;
  }
  if (iVar3 == 0) {
    piVar4 = __errno_location();
    *piVar4 = 0;
  }
  return -1;
}



int is_infinitel(longdouble x)

{
  float10 fVar1;
  int iVar2;
  int local_8;
  
  iVar2 = rpl_isnanl(x);
  if ((iVar2 == 0) &&
     ((fVar1 = SUB1210((undefined  [12])x,0), fVar1 != fVar1 + fVar1 || (fVar1 == (float10)0)))) {
    local_8 = 0;
  }
  else {
    local_8 = 1;
  }
  return local_8;
}



// WARNING: Could not reconcile some variable overlaps

char * vasnprintf(char *resultbuf,size_t *lengthp,char *format,va_list args)

{
  argument *paVar1;
  char cVar2;
  size_t *psVar3;
  char_directive *pcVar4;
  char_directive *pcVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  char_directive **ppcVar9;
  int iVar10;
  int *piVar11;
  size_t __size;
  char *pcVar12;
  char_directive **ppcVar13;
  int in_GS_OFFSET;
  float10 fVar14;
  ushort in_FPUControlWord;
  char acStack1328 [12];
  char *local_524;
  char *local_520;
  char *local_51c;
  char *local_518;
  char *local_514;
  char *local_510;
  char *local_50c;
  char *local_508;
  char *local_504;
  char *local_500;
  char *local_4fc;
  char *local_4f8;
  char *local_4f4;
  char *local_4f0;
  char *local_4ec;
  char *local_4e8;
  char *local_4e4;
  uint local_4e0;
  int local_4d8;
  char *local_4d4;
  char *local_4d0;
  uint local_4cc;
  uint local_4c8;
  uint local_4c4;
  uint local_4c0;
  char_directive *local_4bc;
  int local_4b8;
  char_directive *local_4b4;
  int local_4b0;
  uint local_4ac;
  uint local_4a8;
  size_t local_4a4;
  size_t local_4a0;
  int local_49c;
  uint local_498;
  uint local_494;
  char_directive *local_490;
  uint local_48c;
  uint local_488;
  size_t local_484;
  size_t local_480;
  va_list local_47c;
  char *local_478;
  size_t *local_474;
  char *local_470;
  char_directives d;
  longdouble arg_14;
  longdouble arg_2;
  double arg_13;
  ulonglong arg_12;
  longlong arg_11;
  int prefixes [2];
  arguments a;
  char *memory_7;
  char *memory_6;
  size_t memory_size_6;
  char *memory_5;
  size_t memory_size_5;
  size_t n_4;
  char *memory_4;
  size_t memory_size_4;
  size_t bigger_need;
  void *arg_19;
  wchar_t *arg_18;
  char *arg_17;
  wint_t arg_16;
  int arg_15;
  ulong arg_10;
  long arg_9;
  uint arg_8;
  int arg_7;
  uint arg_6;
  int arg_5;
  uint arg_4;
  int arg_3;
  size_t maxlen;
  int retcount;
  fpucw_t _cw;
  char *memory_3;
  size_t memory_size_3;
  size_t n_3;
  size_t n_2;
  uint prefix_count;
  char *fbp;
  int flags_1;
  arg_type type;
  char *memory_2;
  size_t memory_size_2;
  size_t n_1;
  size_t count;
  char *q_1;
  char *q;
  char *end;
  size_t pad;
  int sign;
  size_t tmp_memsize;
  char *digitp_1;
  int arg_1;
  char *digitp;
  int arg;
  char *p;
  char *pad_ptr;
  char *tmp;
  size_t tmp_length;
  size_t precision;
  int has_precision;
  size_t width;
  int has_width;
  int flags;
  char *memory_1;
  size_t memory_size_1;
  size_t augmented_length_1;
  char *memory;
  size_t memory_size;
  size_t augmented_length;
  size_t n;
  size_t buf_memsize;
  size_t length;
  size_t allocated;
  char *result;
  char_directive *dp;
  size_t i;
  char *cp;
  char *buf_malloced;
  char *buf;
  size_t buf_neededlength;
  fpucw_t oldcw;
  char tmpbuf [700];
  int local_20;
  
  ppcVar13 = (char_directive **)&stack0xfffffaa4;
  local_470 = resultbuf;
  local_474 = lengthp;
  local_478 = format;
  local_47c = args;
  local_20 = *(int *)(in_GS_OFFSET + 0x14);
  iVar10 = printf_parse(format,&d,&a);
  if (iVar10 < 0) {
    local_4d4 = (char *)0x0;
    ppcVar13 = (char_directive **)&stack0xfffffaa4;
  }
  else {
    iVar10 = printf_fetchargs(local_47c,&a);
    if (-1 < iVar10) {
      __size = xsum4(7,d.max_width_length,d.max_precision_length,6);
      if (__size < 4000) {
        iVar10 = -(__size + 0x1e & 0xfffffff0);
        buf = acStack1328 + iVar10;
        local_4d0 = buf;
        buf_malloced = (char *)0x0;
        ppcVar9 = (char_directive **)(&stack0xfffffaa4 + iVar10);
        oldcw = in_FPUControlWord;
      }
      else {
        ppcVar13 = (char_directive **)&stack0xfffffaa4;
        if ((__size == 0xffffffff) ||
           (buf_malloced = (char *)malloc(__size), ppcVar13 = (char_directive **)&stack0xfffffaa4,
           ppcVar9 = (char_directive **)&stack0xfffffaa4, oldcw = in_FPUControlWord,
           buf = buf_malloced, buf_malloced == (char *)0x0)) {
out_of_memory_1:
          *ppcVar13 = d.dir;
          ppcVar13[-1] = 0x804e949;
          free(*ppcVar13);
          if (a.arg != (argument *)0x0) {
            *(argument **)ppcVar13 = a.arg;
            ppcVar13[-1] = 0x804e961;
            free(*ppcVar13);
          }
          ppcVar13[-1] = 0x804e966;
          piVar11 = __errno_location(*(undefined *)(ppcVar13 + -1));
          *piVar11 = 0xc;
          local_4d4 = (char *)0x0;
          goto LAB_0804e976;
        }
      }
      ppcVar13 = ppcVar9;
      if (local_470 == (char *)0x0) {
        result = (char *)0x0;
        allocated = 0;
      }
      else {
        result = local_470;
        allocated = *local_474;
      }
      length = 0;
      cp = local_478;
      i = 0;
      dp = d.dir;
      do {
        if (dp->dir_start != cp) {
          n = (size_t)(dp->dir_start + -(int)cp);
          *(size_t *)(ppcVar13 + 1) = n;
          *(size_t *)ppcVar13 = length;
          ppcVar13[-1] = 0x804b79e;
          augmented_length = xsum((size_t)*ppcVar13,(size_t)ppcVar13[1]);
          if (augmented_length <= allocated) {
LAB_0804b8d7:
            pcVar12 = result + length;
            *(size_t *)(ppcVar13 + 2) = n;
            *(char **)(ppcVar13 + 1) = cp;
            *(char **)ppcVar13 = pcVar12;
            ppcVar13[-1] = 0x804b902;
            memcpy(*ppcVar13,ppcVar13[1],(size_t)ppcVar13[2]);
            length = augmented_length;
            goto LAB_0804b90e;
          }
          if (allocated == 0) {
            local_4cc = 0xc;
          }
          else {
            if ((int)allocated < 0) {
              local_4c8 = 0xffffffff;
            }
            else {
              local_4c8 = allocated * 2;
            }
            local_4cc = local_4c8;
          }
          allocated = local_4cc;
          if (local_4cc < augmented_length) {
            allocated = augmented_length;
          }
          if (allocated != 0xffffffff) {
            if ((result == local_470) || (result == (char *)0x0)) {
              *(size_t *)ppcVar13 = allocated;
              ppcVar13[-1] = 0x804b85f;
              memory = (char *)malloc((size_t)*ppcVar13);
            }
            else {
              *(size_t *)(ppcVar13 + 1) = allocated;
              *(char **)ppcVar13 = result;
              ppcVar13[-1] = 0x804b87f;
              memory = (char *)realloc(*ppcVar13,(size_t)ppcVar13[1]);
            }
            if (memory != (char *)0x0) {
              if ((result == local_470) && (length != 0)) {
                *(size_t *)(ppcVar13 + 2) = length;
                *(char **)(ppcVar13 + 1) = result;
                *(char **)ppcVar13 = memory;
                ppcVar13[-1] = 0x804b8cb;
                memcpy(*ppcVar13,ppcVar13[1],(size_t)ppcVar13[2]);
              }
              result = memory;
              goto LAB_0804b8d7;
            }
          }
          goto out_of_memory;
        }
LAB_0804b90e:
        if (d.count == i) {
          ppcVar13[1] = (char_directive *)0x1;
          *(size_t *)ppcVar13 = length;
          ppcVar13[-1] = 0x804e677;
          __size = xsum((size_t)*ppcVar13,(size_t)ppcVar13[1]);
          if (allocated < __size) {
            if (allocated == 0) {
              local_484 = 0xc;
            }
            else {
              if ((int)allocated < 0) {
                local_480 = 0xffffffff;
              }
              else {
                local_480 = allocated * 2;
              }
              local_484 = local_480;
            }
            allocated = local_484;
            ppcVar13[1] = (char_directive *)0x1;
            *(size_t *)ppcVar13 = length;
            ppcVar13[-1] = 0x804e6ea;
            __size = xsum((size_t)*ppcVar13,(size_t)ppcVar13[1]);
            if (allocated < __size) {
              ppcVar13[1] = (char_directive *)0x1;
              *(size_t *)ppcVar13 = length;
              ppcVar13[-1] = 0x804e708;
              allocated = xsum((size_t)*ppcVar13,(size_t)ppcVar13[1]);
            }
            if (allocated != 0xffffffff) {
              if ((result == local_470) || (result == (char *)0x0)) {
                *(size_t *)ppcVar13 = allocated;
                ppcVar13[-1] = 0x804e74c;
                memory_6 = (char *)malloc((size_t)*ppcVar13);
              }
              else {
                *(size_t *)(ppcVar13 + 1) = allocated;
                *(char **)ppcVar13 = result;
                ppcVar13[-1] = 0x804e76c;
                memory_6 = (char *)realloc(*ppcVar13,(size_t)ppcVar13[1]);
              }
              if (memory_6 != (char *)0x0) {
                if ((result == local_470) && (length != 0)) {
                  *(size_t *)(ppcVar13 + 2) = length;
                  *(char **)(ppcVar13 + 1) = result;
                  *(char **)ppcVar13 = memory_6;
                  ppcVar13[-1] = 0x804e7b8;
                  memcpy(*ppcVar13,ppcVar13[1],(size_t)ppcVar13[2]);
                }
                result = memory_6;
                goto LAB_0804e7c4;
              }
            }
out_of_memory:
            if ((result != local_470) && (result != (char *)0x0)) {
              *(char **)ppcVar13 = result;
              ppcVar13[-1] = 0x804e924;
              free(*ppcVar13);
            }
            if (buf_malloced != (char *)0x0) {
              *(char **)ppcVar13 = buf_malloced;
              ppcVar13[-1] = 0x804e93b;
              free(*ppcVar13);
            }
            goto out_of_memory_1;
          }
LAB_0804e7c4:
          result[length] = '\0';
          if ((result != local_470) && (length + 1 < allocated)) {
            ppcVar13[1] = (char_directive *)(length + 1);
            *(char **)ppcVar13 = result;
            ppcVar13[-1] = 0x804e80f;
            pcVar12 = (char *)realloc(*ppcVar13,(size_t)ppcVar13[1]);
            if (pcVar12 != (char *)0x0) {
              result = pcVar12;
            }
          }
          if (buf_malloced != (char *)0x0) {
            *(char **)ppcVar13 = buf_malloced;
            ppcVar13[-1] = 0x804e841;
            free(*ppcVar13);
          }
          *ppcVar13 = d.dir;
          ppcVar13[-1] = 0x804e84f;
          free(*ppcVar13);
          if (a.arg != (argument *)0x0) {
            *(argument **)ppcVar13 = a.arg;
            ppcVar13[-1] = 0x804e867;
            free(*ppcVar13);
          }
          *local_474 = length;
          local_4d4 = result;
          goto LAB_0804e976;
        }
        if (dp->conversion == '%') {
          if (dp->arg_index != 0xffffffff) {
                    // WARNING: Subroutine does not return
            ppcVar13[-1] = 0x804b945;
            abort(*(undefined *)(ppcVar13 + -1));
          }
          ppcVar13[1] = (char_directive *)0x1;
          *(size_t *)ppcVar13 = length;
          ppcVar13[-1] = 0x804b95b;
          augmented_length_1 = xsum((size_t)*ppcVar13,(size_t)ppcVar13[1]);
          if (allocated < augmented_length_1) {
            if (allocated == 0) {
              local_4c4 = 0xc;
            }
            else {
              if ((int)allocated < 0) {
                local_4c0 = 0xffffffff;
              }
              else {
                local_4c0 = allocated * 2;
              }
              local_4c4 = local_4c0;
            }
            allocated = local_4c4;
            if (local_4c4 < augmented_length_1) {
              allocated = augmented_length_1;
            }
            if (allocated != 0xffffffff) {
              if ((result == local_470) || (result == (char *)0x0)) {
                *(size_t *)ppcVar13 = allocated;
                ppcVar13[-1] = 0x804ba1c;
                memory_1 = (char *)malloc((size_t)*ppcVar13);
              }
              else {
                *(size_t *)(ppcVar13 + 1) = allocated;
                *(char **)ppcVar13 = result;
                ppcVar13[-1] = 0x804ba3c;
                memory_1 = (char *)realloc(*ppcVar13,(size_t)ppcVar13[1]);
              }
              if (memory_1 != (char *)0x0) {
                if ((result == local_470) && (length != 0)) {
                  *(size_t *)(ppcVar13 + 2) = length;
                  *(char **)(ppcVar13 + 1) = result;
                  *(char **)ppcVar13 = memory_1;
                  ppcVar13[-1] = 0x804ba88;
                  memcpy(*ppcVar13,ppcVar13[1],(size_t)ppcVar13[2]);
                }
                result = memory_1;
                goto LAB_0804ba94;
              }
            }
            goto out_of_memory;
          }
LAB_0804ba94:
          result[length] = '%';
          length = augmented_length_1;
        }
        else {
          if (dp->arg_index == 0xffffffff) {
                    // WARNING: Subroutine does not return
            ppcVar13[-1] = 0x804bac9;
            abort(*(undefined *)(ppcVar13 + -1));
          }
          if (dp->conversion == 'n') {
            local_4d8 = a.arg[dp->arg_index].type + ~TYPE_POINTER;
            switch(a.arg[dp->arg_index].type) {
            case TYPE_COUNT_SCHAR_POINTER:
              **(undefined **)&a.arg[dp->arg_index].a = (char)length;
              break;
            case TYPE_COUNT_SHORT_POINTER:
              **(undefined2 **)&a.arg[dp->arg_index].a = (short)length;
              break;
            case TYPE_COUNT_INT_POINTER:
              **(size_t **)&a.arg[dp->arg_index].a = length;
              break;
            case TYPE_COUNT_LONGINT_POINTER:
              **(size_t **)&a.arg[dp->arg_index].a = length;
              break;
            case TYPE_COUNT_LONGLONGINT_POINTER:
              psVar3 = *(size_t **)&a.arg[dp->arg_index].a;
              *psVar3 = length;
              psVar3[1] = 0;
              break;
            default:
                    // WARNING: Subroutine does not return
              ppcVar13[-1] = 0x804bbde;
              abort(*(undefined *)(ppcVar13 + -1));
            }
          }
          else {
            if ((((((dp->conversion == 'f') || (dp->conversion == 'F')) || (dp->conversion == 'e'))
                 || ((dp->conversion == 'E' || (dp->conversion == 'g')))) ||
                ((dp->conversion == 'G' || ((dp->conversion == 'a' || (dp->conversion == 'A'))))))
               && (a.arg[dp->arg_index].type == TYPE_LONGDOUBLE)) {
              paVar1 = a.arg + dp->arg_index;
              pcVar4 = *(char_directive **)((int)&paVar1->a + 8);
              pcVar5 = *(char_directive **)((int)&paVar1->a + 4);
              *ppcVar13 = *(undefined4 *)&paVar1->a;
              ppcVar13[1] = pcVar5;
              ppcVar13[2] = pcVar4;
                    // WARNING: Load size is inaccurate
              ppcVar13[-1] = 0x804bca0;
              iVar10 = is_infinitel((longdouble)*(undefined *)ppcVar13);
              if (iVar10 != 0) {
                flags = dp->flags;
                has_width = 0;
                width = 0;
                if (dp->width_start != dp->width_end) {
                  if (dp->width_arg_index == 0xffffffff) {
                    digitp = dp->width_start;
                    do {
                      cVar2 = *digitp;
                      local_4bc = (char_directive *)((int)cVar2 - 0x30U);
                      digitp = digitp + 1;
                      if (width < 0x1999999a) {
                        local_4b8 = width * 10;
                      }
                      else {
                        local_4b8 = -1;
                      }
                      ppcVar13[1] = (char_directive *)((int)cVar2 - 0x30U);
                      *(int *)ppcVar13 = local_4b8;
                      ppcVar13[-1] = 0x804bdd7;
                      width = xsum((size_t)*ppcVar13,(size_t)ppcVar13[1]);
                    } while (dp->width_end != digitp);
                  }
                  else {
                    if (a.arg[dp->width_arg_index].type != TYPE_INT) {
                    // WARNING: Subroutine does not return
                      ppcVar13[-1] = 0x804bd14;
                      abort(*(undefined *)(ppcVar13 + -1));
                    }
                    width = *(size_t *)&a.arg[dp->width_arg_index].a;
                    if ((int)width < 0) {
                      flags = flags | 2;
                      width = -width;
                    }
                  }
                  has_width = 1;
                }
                bVar7 = false;
                precision = 0;
                if (dp->precision_start != dp->precision_end) {
                  if (dp->precision_arg_index == 0xffffffff) {
                    digitp_1 = dp->precision_start + 1;
                    precision = 0;
                    while (dp->precision_end != digitp_1) {
                      cVar2 = *digitp_1;
                      local_4b4 = (char_directive *)((int)cVar2 - 0x30U);
                      digitp_1 = digitp_1 + 1;
                      if (precision < 0x1999999a) {
                        local_4b0 = precision * 10;
                      }
                      else {
                        local_4b0 = -1;
                      }
                      ppcVar13[1] = (char_directive *)((int)cVar2 - 0x30U);
                      *(int *)ppcVar13 = local_4b0;
                      ppcVar13[-1] = 0x804bf1b;
                      precision = xsum((size_t)*ppcVar13,(size_t)ppcVar13[1]);
                    }
                    bVar7 = true;
                  }
                  else {
                    if (a.arg[dp->precision_arg_index].type != TYPE_INT) {
                    // WARNING: Subroutine does not return
                      ppcVar13[-1] = 0x804be55;
                      abort(*(undefined *)(ppcVar13 + -1));
                    }
                    if (-1 < (int)*(size_t *)&a.arg[dp->precision_arg_index].a) {
                      bVar7 = true;
                      precision = *(size_t *)&a.arg[dp->precision_arg_index].a;
                    }
                  }
                }
                if (!bVar7) {
                  precision = 6;
                }
                tmp_length = 0;
                if (precision != 0) {
                  tmp_length = precision;
                }
                ppcVar13[1] = (char_directive *)0xc;
                *(size_t *)ppcVar13 = tmp_length;
                ppcVar13[-1] = 0x804bf89;
                tmp_length = xsum((size_t)*ppcVar13,(size_t)ppcVar13[1]);
                if (tmp_length < width) {
                  tmp_length = width;
                }
                ppcVar13[1] = (char_directive *)0x1;
                *(size_t *)ppcVar13 = tmp_length;
                ppcVar13[-1] = 0x804bfbf;
                tmp_length = xsum((size_t)*ppcVar13,(size_t)ppcVar13[1]);
                if (700 < tmp_length) {
                  if (tmp_length != 0xffffffff) {
                    *(size_t *)ppcVar13 = tmp_length;
                    ppcVar13[-1] = 0x804c006;
                    tmp = (char *)malloc((size_t)*ppcVar13);
                    if (tmp != (char *)0x0) goto LAB_0804c019;
                  }
                  goto out_of_memory;
                }
                tmp = tmpbuf;
LAB_0804c019:
                pad_ptr = (char *)0x0;
                p = tmp;
                paVar1 = a.arg + dp->arg_index;
                pcVar4 = *(char_directive **)((int)&paVar1->a + 8);
                pcVar5 = *(char_directive **)((int)&paVar1->a + 4);
                arg_2._0_4_ = *(undefined4 *)&paVar1->a;
                arg_2._8_2_ = SUB42(pcVar4,0);
                arg_2._10_2_ = (undefined2)((uint)pcVar4 >> 0x10);
                arg_2._4_4_ = pcVar5;
                *ppcVar13 = arg_2._0_4_;
                ppcVar13[1] = pcVar5;
                ppcVar13[2] = pcVar4;
                    // WARNING: Load size is inaccurate
                ppcVar13[-1] = 0x804c081;
                pcVar4 = arg_2._4_4_;
                iVar10 = rpl_isnanl((longdouble)*(undefined *)ppcVar13);
                if (iVar10 == 0) {
                  sign = 0;
                  __cw = (char *)((uint)__cw & 0xffff0000 |
                                  (uint)(ushort)(oldcw & 0xff |
                                                (ushort)(byte)((uint)oldcw >> 8) << 8) | 0x300);
                  pcVar5 = (char_directive *)CONCAT22(arg_2._10_2_,arg_2._8_2_);
                  *ppcVar13 = arg_2._0_4_;
                  ppcVar13[1] = pcVar4;
                  ppcVar13[2] = pcVar5;
                  ppcVar13[-1] = 0x804c166;
                  iVar10 = __signbitl();
                  if (iVar10 != 0) {
                    sign = -1;
                    fVar14 = -(float10)CONCAT28(arg_2._8_2_,CONCAT44(arg_2._4_4_,arg_2._0_4_));
                    arg_2._0_4_ = SUB104(fVar14,0);
                    arg_2._4_4_ = (char_directive *)((unkuint10)fVar14 >> 0x20);
                    arg_2._8_2_ = (undefined2)((unkuint10)fVar14 >> 0x40);
                  }
                  if (sign < 0) {
                    *p = '-';
                    p = p + 1;
                  }
                  else {
                    if ((flags & 4U) == 0) {
                      if ((flags & 8U) != 0) {
                        *p = ' ';
                        p = p + 1;
                      }
                    }
                    else {
                      *p = '+';
                      p = p + 1;
                    }
                  }
                  if (((float10)CONCAT28(arg_2._8_2_,CONCAT44(arg_2._4_4_,arg_2._0_4_)) <=
                       (float10)0) ||
                     (fVar14 = (float10)CONCAT28(arg_2._8_2_,CONCAT44(arg_2._4_4_,arg_2._0_4_)),
                     (float10)CONCAT28(arg_2._8_2_,CONCAT44(arg_2._4_4_,arg_2._0_4_)) !=
                     fVar14 + fVar14)) {
                    // WARNING: Subroutine does not return
                    ppcVar13[-1] = 0x804c2b7;
                    abort(*(undefined *)(ppcVar13 + -1));
                  }
                  if ((dp->conversion < 'A') || ('Z' < dp->conversion)) {
                    *p = 'i';
                    p[1] = 'n';
                    p[2] = 'f';
                  }
                  else {
                    *p = 'I';
                    p[1] = 'N';
                    p[2] = 'F';
                  }
                  p = p + 3;
                  __cw = (char *)((uint)__cw & 0xffff0000 | (uint)oldcw);
                }
                else {
                  if ((dp->conversion < 'A') || ('Z' < dp->conversion)) {
                    *p = 'n';
                    p[1] = 'a';
                    p[2] = 'n';
                    p = p + 3;
                  }
                  else {
                    *p = 'N';
                    p[1] = 'A';
                    p[2] = 'N';
                    p = p + 3;
                  }
                }
                pcVar12 = p;
                if ((has_width != 0) && (p + -(int)tmp < width)) {
                  pad = (size_t)(tmp + (width - (int)p));
                  pcVar12 = p + pad;
                  if ((flags & 2U) == 0) {
                    q_1 = pcVar12;
                    if (((flags & 0x20U) == 0) || (q = pcVar12, pad_ptr == (char *)0x0)) {
                      while (tmp < p) {
                        p = p + -1;
                        q_1[-1] = *p;
                        q_1 = q_1 + -1;
                      }
                      while (pad != 0) {
                        *p = ' ';
                        p = p + 1;
                        pad = pad - 1;
                      }
                    }
                    else {
                      while (pad_ptr < p) {
                        p = p + -1;
                        q[-1] = *p;
                        q = q + -1;
                      }
                      while (pad != 0) {
                        *p = '0';
                        p = p + 1;
                        pad = pad - 1;
                      }
                    }
                  }
                  else {
                    while (pad != 0) {
                      *p = ' ';
                      p = p + 1;
                      pad = pad - 1;
                    }
                  }
                }
                p = pcVar12;
                count = (size_t)(p + -(int)tmp);
                if (tmp_length <= count) {
                    // WARNING: Subroutine does not return
                  ppcVar13[-1] = 0x804c451;
                  abort(*(undefined *)(ppcVar13 + -1));
                }
                if ((char_directive *)(allocated - length) <= count) {
                  *(size_t *)(ppcVar13 + 1) = count;
                  *(size_t *)ppcVar13 = length;
                  ppcVar13[-1] = 0x804c487;
                  __size = xsum((size_t)*ppcVar13,(size_t)ppcVar13[1]);
                  if (allocated < __size) {
                    if (allocated == 0) {
                      local_4ac = 0xc;
                    }
                    else {
                      if ((int)allocated < 0) {
                        local_4a8 = 0xffffffff;
                      }
                      else {
                        local_4a8 = allocated * 2;
                      }
                      local_4ac = local_4a8;
                    }
                    allocated = local_4ac;
                    if (local_4ac < __size) {
                      allocated = __size;
                    }
                    if (allocated != 0xffffffff) {
                      if ((result == local_470) || (result == (char *)0x0)) {
                        *(size_t *)ppcVar13 = allocated;
                        ppcVar13[-1] = 0x804c548;
                        memory_2 = (char *)malloc((size_t)*ppcVar13);
                      }
                      else {
                        *(size_t *)(ppcVar13 + 1) = allocated;
                        *(char **)ppcVar13 = result;
                        ppcVar13[-1] = 0x804c568;
                        memory_2 = (char *)realloc(*ppcVar13,(size_t)ppcVar13[1]);
                      }
                      if (memory_2 != (char *)0x0) {
                        if ((result == local_470) && (length != 0)) {
                          *(size_t *)(ppcVar13 + 2) = length;
                          *(char **)(ppcVar13 + 1) = result;
                          *(char **)ppcVar13 = memory_2;
                          ppcVar13[-1] = 0x804c5b4;
                          memcpy(*ppcVar13,ppcVar13[1],(size_t)ppcVar13[2]);
                        }
                        result = memory_2;
                        goto LAB_0804c5c0;
                      }
                    }
                    goto out_of_memory;
                  }
                }
LAB_0804c5c0:
                pcVar12 = result + length;
                *(size_t *)(ppcVar13 + 2) = count;
                *(char **)(ppcVar13 + 1) = tmp;
                *(char **)ppcVar13 = pcVar12;
                ppcVar13[-1] = 0x804c5eb;
                memcpy(*ppcVar13,ppcVar13[1],(size_t)ppcVar13[2]);
                if (tmp != tmpbuf) {
                  *(char **)ppcVar13 = tmp;
                  ppcVar13[-1] = 0x804c607;
                  free(*ppcVar13);
                }
                length = length + count;
                goto LAB_0804e63f;
              }
            }
            type = a.arg[dp->arg_index].type;
            uVar6 = dp->flags;
            *buf = '%';
            fbp = buf + 1;
            if ((uVar6 & 1) != 0) {
              *fbp = '\'';
              fbp = buf + 2;
            }
            if ((uVar6 & 2) != 0) {
              *fbp = '-';
              fbp = fbp + 1;
            }
            if ((uVar6 & 4) != 0) {
              *fbp = '+';
              fbp = fbp + 1;
            }
            if ((uVar6 & 8) != 0) {
              *fbp = ' ';
              fbp = fbp + 1;
            }
            if ((uVar6 & 0x10) != 0) {
              *fbp = '#';
              fbp = fbp + 1;
            }
            if ((uVar6 & 0x20) != 0) {
              *fbp = '0';
              fbp = fbp + 1;
            }
            if (dp->width_start != dp->width_end) {
              n_2 = (size_t)(dp->width_end + -(int)dp->width_start);
              pcVar4 = (char_directive *)dp->width_start;
              *(size_t *)(ppcVar13 + 2) = n_2;
              ppcVar13[1] = pcVar4;
              *(char **)ppcVar13 = fbp;
              ppcVar13[-1] = 0x804c769;
              memcpy(*ppcVar13,ppcVar13[1],(size_t)ppcVar13[2]);
              fbp = fbp + n_2;
            }
            if (dp->precision_start != dp->precision_end) {
              n_3 = (size_t)(dp->precision_end + -(int)dp->precision_start);
              pcVar4 = (char_directive *)dp->precision_start;
              *(size_t *)(ppcVar13 + 2) = n_3;
              ppcVar13[1] = pcVar4;
              *(char **)ppcVar13 = fbp;
              ppcVar13[-1] = 0x804c7d0;
              memcpy(*ppcVar13,ppcVar13[1],(size_t)ppcVar13[2]);
              fbp = fbp + n_3;
            }
            if (type < TYPE_POINTER) {
              local_4e0 = 1 << ((byte)type & 0x1f);
              if ((local_4e0 & 0x14180) == 0) {
                if ((local_4e0 & 0x1000) == 0) {
                  if ((local_4e0 & 0x600) != 0) {
                    *fbp = 'l';
                    fbp = fbp + 1;
                    goto LAB_0804c837;
                  }
                }
                else {
                  *fbp = 'L';
                  fbp = fbp + 1;
                }
              }
              else {
LAB_0804c837:
                *fbp = 'l';
                fbp = fbp + 1;
              }
            }
            *fbp = dp->conversion;
            fbp[1] = '\0';
            prefix_count = 0;
            if (dp->width_arg_index != 0xffffffff) {
              if (a.arg[dp->width_arg_index].type != TYPE_INT) {
                    // WARNING: Subroutine does not return
                ppcVar13[-1] = 0x804c8b0;
                abort(*(undefined *)(ppcVar13 + -1));
              }
              prefixes[0] = *(int *)&a.arg[dp->width_arg_index].a;
              prefix_count = 1;
            }
            if (dp->precision_arg_index != 0xffffffff) {
              if (a.arg[dp->precision_arg_index].type != TYPE_INT) {
                    // WARNING: Subroutine does not return
                ppcVar13[-1] = 0x804c90b;
                abort(*(undefined *)(ppcVar13 + -1));
              }
              prefixes[prefix_count] = *(int *)&a.arg[dp->precision_arg_index].a;
              prefix_count = prefix_count + 1;
            }
            ppcVar13[1] = (char_directive *)0x2;
            *(size_t *)ppcVar13 = length;
            ppcVar13[-1] = 0x804c94d;
            __size = xsum((size_t)*ppcVar13,(size_t)ppcVar13[1]);
            if (allocated < __size) {
              if (allocated == 0) {
                local_4a4 = 0xc;
              }
              else {
                if ((int)allocated < 0) {
                  local_4a0 = 0xffffffff;
                }
                else {
                  local_4a0 = allocated * 2;
                }
                local_4a4 = local_4a0;
              }
              allocated = local_4a4;
              ppcVar13[1] = (char_directive *)0x2;
              *(size_t *)ppcVar13 = length;
              ppcVar13[-1] = 0x804c9c0;
              __size = xsum((size_t)*ppcVar13,(size_t)ppcVar13[1]);
              if (allocated < __size) {
                ppcVar13[1] = (char_directive *)0x2;
                *(size_t *)ppcVar13 = length;
                ppcVar13[-1] = 0x804c9de;
                allocated = xsum((size_t)*ppcVar13,(size_t)ppcVar13[1]);
              }
              if (allocated != 0xffffffff) {
                if ((result == local_470) || (result == (char *)0x0)) {
                  *(size_t *)ppcVar13 = allocated;
                  ppcVar13[-1] = 0x804ca22;
                  memory_3 = (char *)malloc((size_t)*ppcVar13);
                }
                else {
                  *(size_t *)(ppcVar13 + 1) = allocated;
                  *(char **)ppcVar13 = result;
                  ppcVar13[-1] = 0x804ca42;
                  memory_3 = (char *)realloc(*ppcVar13,(size_t)ppcVar13[1]);
                }
                if (memory_3 != (char *)0x0) {
                  if ((result == local_470) && (length != 0)) {
                    *(size_t *)(ppcVar13 + 2) = length;
                    *(char **)(ppcVar13 + 1) = result;
                    *(char **)ppcVar13 = memory_3;
                    ppcVar13[-1] = 0x804ca8e;
                    memcpy(*ppcVar13,ppcVar13[1],(size_t)ppcVar13[2]);
                  }
                  result = memory_3;
                  goto LAB_0804ca9a;
                }
              }
              goto out_of_memory;
            }
LAB_0804ca9a:
            result[length] = '\0';
LAB_0804caac:
            iVar8 = prefixes[1];
            iVar10 = prefixes[0];
            __cw = (char *)0xffffffff;
            maxlen = allocated - length;
            if ((int)maxlen < 0) {
              maxlen = 0x7fffffff;
            }
            switch(type) {
            default:
                    // WARNING: Subroutine does not return
              ppcVar13[-1] = 0x804e1ee;
              abort(*(undefined *)(ppcVar13 + -1));
            case TYPE_SCHAR:
              arg_3 = (int)*(char *)&a.arg[dp->arg_index].a;
              local_4e4 = (char *)prefix_count;
              if ((char *)prefix_count == (char *)0x1) {
                pcVar12 = result + length;
                ppcVar13[5] = (char_directive *)&_cw;
                *(int *)(ppcVar13 + 4) = arg_3;
                *(int *)(ppcVar13 + 3) = iVar10;
                *(char **)(ppcVar13 + 2) = buf;
                *(size_t *)(ppcVar13 + 1) = maxlen;
                *(char **)ppcVar13 = pcVar12;
                ppcVar13[-1] = 0x804cbeb;
                retcount = snprintf((char *)*ppcVar13,(size_t)ppcVar13[1],(char *)ppcVar13[2]);
              }
              else {
                if ((char *)prefix_count == (char *)0x0) {
                  pcVar12 = result + length;
                  ppcVar13[4] = (char_directive *)&_cw;
                  *(int *)(ppcVar13 + 3) = arg_3;
                  *(char **)(ppcVar13 + 2) = buf;
                  *(size_t *)(ppcVar13 + 1) = maxlen;
                  *(char **)ppcVar13 = pcVar12;
                  ppcVar13[-1] = 0x804cb97;
                  retcount = snprintf((char *)*ppcVar13,(size_t)ppcVar13[1],(char *)ppcVar13[2]);
                }
                else {
                  if ((char *)prefix_count != (char *)0x2) {
                    // WARNING: Subroutine does not return
                    ppcVar13[-1] = 0x804cc59;
                    abort(*(undefined *)(ppcVar13 + -1));
                  }
                  pcVar12 = result + length;
                  ppcVar13[6] = (char_directive *)&_cw;
                  *(int *)(ppcVar13 + 5) = arg_3;
                  *(int *)(ppcVar13 + 4) = iVar8;
                  *(int *)(ppcVar13 + 3) = iVar10;
                  *(char **)(ppcVar13 + 2) = buf;
                  *(size_t *)(ppcVar13 + 1) = maxlen;
                  *(char **)ppcVar13 = pcVar12;
                  ppcVar13[-1] = 0x804cc49;
                  retcount = snprintf((char *)*ppcVar13,(size_t)ppcVar13[1],(char *)ppcVar13[2]);
                }
              }
              break;
            case TYPE_UCHAR:
              arg_4 = (uint)*(byte *)&a.arg[dp->arg_index].a;
              local_4e8 = (char *)prefix_count;
              if ((char *)prefix_count == (char *)0x1) {
                pcVar12 = result + length;
                ppcVar13[5] = (char_directive *)&_cw;
                *(uint *)(ppcVar13 + 4) = arg_4;
                *(int *)(ppcVar13 + 3) = iVar10;
                *(char **)(ppcVar13 + 2) = buf;
                *(size_t *)(ppcVar13 + 1) = maxlen;
                *(char **)ppcVar13 = pcVar12;
                ppcVar13[-1] = 0x804cd3e;
                retcount = snprintf((char *)*ppcVar13,(size_t)ppcVar13[1],(char *)ppcVar13[2]);
              }
              else {
                if ((char *)prefix_count == (char *)0x0) {
                  pcVar12 = result + length;
                  ppcVar13[4] = (char_directive *)&_cw;
                  *(uint *)(ppcVar13 + 3) = arg_4;
                  *(char **)(ppcVar13 + 2) = buf;
                  *(size_t *)(ppcVar13 + 1) = maxlen;
                  *(char **)ppcVar13 = pcVar12;
                  ppcVar13[-1] = 0x804ccea;
                  retcount = snprintf((char *)*ppcVar13,(size_t)ppcVar13[1],(char *)ppcVar13[2]);
                }
                else {
                  if ((char *)prefix_count != (char *)0x2) {
                    // WARNING: Subroutine does not return
                    ppcVar13[-1] = 0x804cdac;
                    abort(*(undefined *)(ppcVar13 + -1));
                  }
                  pcVar12 = result + length;
                  ppcVar13[6] = (char_directive *)&_cw;
                  *(uint *)(ppcVar13 + 5) = arg_4;
                  *(int *)(ppcVar13 + 4) = iVar8;
                  *(int *)(ppcVar13 + 3) = iVar10;
                  *(char **)(ppcVar13 + 2) = buf;
                  *(size_t *)(ppcVar13 + 1) = maxlen;
                  *(char **)ppcVar13 = pcVar12;
                  ppcVar13[-1] = 0x804cd9c;
                  retcount = snprintf((char *)*ppcVar13,(size_t)ppcVar13[1],(char *)ppcVar13[2]);
                }
              }
              break;
            case TYPE_SHORT:
              arg_5 = (int)*(short *)&a.arg[dp->arg_index].a;
              local_4ec = (char *)prefix_count;
              if ((char *)prefix_count == (char *)0x1) {
                pcVar12 = result + length;
                ppcVar13[5] = (char_directive *)&_cw;
                *(int *)(ppcVar13 + 4) = arg_5;
                *(int *)(ppcVar13 + 3) = iVar10;
                *(char **)(ppcVar13 + 2) = buf;
                *(size_t *)(ppcVar13 + 1) = maxlen;
                *(char **)ppcVar13 = pcVar12;
                ppcVar13[-1] = 0x804ce8f;
                retcount = snprintf((char *)*ppcVar13,(size_t)ppcVar13[1],(char *)ppcVar13[2]);
              }
              else {
                if ((char *)prefix_count == (char *)0x0) {
                  pcVar12 = result + length;
                  ppcVar13[4] = (char_directive *)&_cw;
                  *(int *)(ppcVar13 + 3) = arg_5;
                  *(char **)(ppcVar13 + 2) = buf;
                  *(size_t *)(ppcVar13 + 1) = maxlen;
                  *(char **)ppcVar13 = pcVar12;
                  ppcVar13[-1] = 0x804ce3b;
                  retcount = snprintf((char *)*ppcVar13,(size_t)ppcVar13[1],(char *)ppcVar13[2]);
                }
                else {
                  if ((char *)prefix_count != (char *)0x2) {
                    // WARNING: Subroutine does not return
                    ppcVar13[-1] = 0x804cefd;
                    abort(*(undefined *)(ppcVar13 + -1));
                  }
                  pcVar12 = result + length;
                  ppcVar13[6] = (char_directive *)&_cw;
                  *(int *)(ppcVar13 + 5) = arg_5;
                  *(int *)(ppcVar13 + 4) = iVar8;
                  *(int *)(ppcVar13 + 3) = iVar10;
                  *(char **)(ppcVar13 + 2) = buf;
                  *(size_t *)(ppcVar13 + 1) = maxlen;
                  *(char **)ppcVar13 = pcVar12;
                  ppcVar13[-1] = 0x804ceed;
                  retcount = snprintf((char *)*ppcVar13,(size_t)ppcVar13[1],(char *)ppcVar13[2]);
                }
              }
              break;
            case TYPE_USHORT:
              arg_6 = (uint)*(ushort *)&a.arg[dp->arg_index].a;
              local_4f0 = (char *)prefix_count;
              if ((char *)prefix_count == (char *)0x1) {
                pcVar12 = result + length;
                ppcVar13[5] = (char_directive *)&_cw;
                *(uint *)(ppcVar13 + 4) = arg_6;
                *(int *)(ppcVar13 + 3) = iVar10;
                *(char **)(ppcVar13 + 2) = buf;
                *(size_t *)(ppcVar13 + 1) = maxlen;
                *(char **)ppcVar13 = pcVar12;
                ppcVar13[-1] = 0x804cfe2;
                retcount = snprintf((char *)*ppcVar13,(size_t)ppcVar13[1],(char *)ppcVar13[2]);
              }
              else {
                if ((char *)prefix_count == (char *)0x0) {
                  pcVar12 = result + length;
                  ppcVar13[4] = (char_directive *)&_cw;
                  *(uint *)(ppcVar13 + 3) = arg_6;
                  *(char **)(ppcVar13 + 2) = buf;
                  *(size_t *)(ppcVar13 + 1) = maxlen;
                  *(char **)ppcVar13 = pcVar12;
                  ppcVar13[-1] = 0x804cf8e;
                  retcount = snprintf((char *)*ppcVar13,(size_t)ppcVar13[1],(char *)ppcVar13[2]);
                }
                else {
                  if ((char *)prefix_count != (char *)0x2) {
                    // WARNING: Subroutine does not return
                    ppcVar13[-1] = 0x804d050;
                    abort(*(undefined *)(ppcVar13 + -1));
                  }
                  pcVar12 = result + length;
                  ppcVar13[6] = (char_directive *)&_cw;
                  *(uint *)(ppcVar13 + 5) = arg_6;
                  *(int *)(ppcVar13 + 4) = iVar8;
                  *(int *)(ppcVar13 + 3) = iVar10;
                  *(char **)(ppcVar13 + 2) = buf;
                  *(size_t *)(ppcVar13 + 1) = maxlen;
                  *(char **)ppcVar13 = pcVar12;
                  ppcVar13[-1] = 0x804d040;
                  retcount = snprintf((char *)*ppcVar13,(size_t)ppcVar13[1],(char *)ppcVar13[2]);
                }
              }
              break;
            case TYPE_INT:
              arg_7 = *(int *)&a.arg[dp->arg_index].a;
              local_4f4 = (char *)prefix_count;
              if ((char *)prefix_count == (char *)0x1) {
                pcVar12 = result + length;
                ppcVar13[5] = (char_directive *)&_cw;
                *(int *)(ppcVar13 + 4) = arg_7;
                *(int *)(ppcVar13 + 3) = iVar10;
                *(char **)(ppcVar13 + 2) = buf;
                *(size_t *)(ppcVar13 + 1) = maxlen;
                *(char **)ppcVar13 = pcVar12;
                ppcVar13[-1] = 0x804d131;
                retcount = snprintf((char *)*ppcVar13,(size_t)ppcVar13[1],(char *)ppcVar13[2]);
              }
              else {
                if ((char *)prefix_count == (char *)0x0) {
                  pcVar12 = result + length;
                  ppcVar13[4] = (char_directive *)&_cw;
                  *(int *)(ppcVar13 + 3) = arg_7;
                  *(char **)(ppcVar13 + 2) = buf;
                  *(size_t *)(ppcVar13 + 1) = maxlen;
                  *(char **)ppcVar13 = pcVar12;
                  ppcVar13[-1] = 0x804d0dd;
                  retcount = snprintf((char *)*ppcVar13,(size_t)ppcVar13[1],(char *)ppcVar13[2]);
                }
                else {
                  if ((char *)prefix_count != (char *)0x2) {
                    // WARNING: Subroutine does not return
                    ppcVar13[-1] = 0x804d19f;
                    abort(*(undefined *)(ppcVar13 + -1));
                  }
                  pcVar12 = result + length;
                  ppcVar13[6] = (char_directive *)&_cw;
                  *(int *)(ppcVar13 + 5) = arg_7;
                  *(int *)(ppcVar13 + 4) = iVar8;
                  *(int *)(ppcVar13 + 3) = iVar10;
                  *(char **)(ppcVar13 + 2) = buf;
                  *(size_t *)(ppcVar13 + 1) = maxlen;
                  *(char **)ppcVar13 = pcVar12;
                  ppcVar13[-1] = 0x804d18f;
                  retcount = snprintf((char *)*ppcVar13,(size_t)ppcVar13[1],(char *)ppcVar13[2]);
                }
              }
              break;
            case TYPE_UINT:
              arg_8 = *(uint *)&a.arg[dp->arg_index].a;
              local_4f8 = (char *)prefix_count;
              if ((char *)prefix_count == (char *)0x1) {
                pcVar12 = result + length;
                ppcVar13[5] = (char_directive *)&_cw;
                *(uint *)(ppcVar13 + 4) = arg_8;
                *(int *)(ppcVar13 + 3) = iVar10;
                *(char **)(ppcVar13 + 2) = buf;
                *(size_t *)(ppcVar13 + 1) = maxlen;
                *(char **)ppcVar13 = pcVar12;
                ppcVar13[-1] = 0x804d280;
                retcount = snprintf((char *)*ppcVar13,(size_t)ppcVar13[1],(char *)ppcVar13[2]);
              }
              else {
                if ((char *)prefix_count == (char *)0x0) {
                  pcVar12 = result + length;
                  ppcVar13[4] = (char_directive *)&_cw;
                  *(uint *)(ppcVar13 + 3) = arg_8;
                  *(char **)(ppcVar13 + 2) = buf;
                  *(size_t *)(ppcVar13 + 1) = maxlen;
                  *(char **)ppcVar13 = pcVar12;
                  ppcVar13[-1] = 0x804d22c;
                  retcount = snprintf((char *)*ppcVar13,(size_t)ppcVar13[1],(char *)ppcVar13[2]);
                }
                else {
                  if ((char *)prefix_count != (char *)0x2) {
                    // WARNING: Subroutine does not return
                    ppcVar13[-1] = 0x804d2ee;
                    abort(*(undefined *)(ppcVar13 + -1));
                  }
                  pcVar12 = result + length;
                  ppcVar13[6] = (char_directive *)&_cw;
                  *(uint *)(ppcVar13 + 5) = arg_8;
                  *(int *)(ppcVar13 + 4) = iVar8;
                  *(int *)(ppcVar13 + 3) = iVar10;
                  *(char **)(ppcVar13 + 2) = buf;
                  *(size_t *)(ppcVar13 + 1) = maxlen;
                  *(char **)ppcVar13 = pcVar12;
                  ppcVar13[-1] = 0x804d2de;
                  retcount = snprintf((char *)*ppcVar13,(size_t)ppcVar13[1],(char *)ppcVar13[2]);
                }
              }
              break;
            case TYPE_LONGINT:
              arg_9 = *(long *)&a.arg[dp->arg_index].a;
              local_4fc = (char *)prefix_count;
              if ((char *)prefix_count == (char *)0x1) {
                pcVar12 = result + length;
                ppcVar13[5] = (char_directive *)&_cw;
                *(long *)(ppcVar13 + 4) = arg_9;
                *(int *)(ppcVar13 + 3) = iVar10;
                *(char **)(ppcVar13 + 2) = buf;
                *(size_t *)(ppcVar13 + 1) = maxlen;
                *(char **)ppcVar13 = pcVar12;
                ppcVar13[-1] = 0x804d3cf;
                retcount = snprintf((char *)*ppcVar13,(size_t)ppcVar13[1],(char *)ppcVar13[2]);
              }
              else {
                if ((char *)prefix_count == (char *)0x0) {
                  pcVar12 = result + length;
                  ppcVar13[4] = (char_directive *)&_cw;
                  *(long *)(ppcVar13 + 3) = arg_9;
                  *(char **)(ppcVar13 + 2) = buf;
                  *(size_t *)(ppcVar13 + 1) = maxlen;
                  *(char **)ppcVar13 = pcVar12;
                  ppcVar13[-1] = 0x804d37b;
                  retcount = snprintf((char *)*ppcVar13,(size_t)ppcVar13[1],(char *)ppcVar13[2]);
                }
                else {
                  if ((char *)prefix_count != (char *)0x2) {
                    // WARNING: Subroutine does not return
                    ppcVar13[-1] = 0x804d43d;
                    abort(*(undefined *)(ppcVar13 + -1));
                  }
                  pcVar12 = result + length;
                  ppcVar13[6] = (char_directive *)&_cw;
                  *(long *)(ppcVar13 + 5) = arg_9;
                  *(int *)(ppcVar13 + 4) = iVar8;
                  *(int *)(ppcVar13 + 3) = iVar10;
                  *(char **)(ppcVar13 + 2) = buf;
                  *(size_t *)(ppcVar13 + 1) = maxlen;
                  *(char **)ppcVar13 = pcVar12;
                  ppcVar13[-1] = 0x804d42d;
                  retcount = snprintf((char *)*ppcVar13,(size_t)ppcVar13[1],(char *)ppcVar13[2]);
                }
              }
              break;
            case TYPE_ULONGINT:
              arg_10 = *(ulong *)&a.arg[dp->arg_index].a;
              local_500 = (char *)prefix_count;
              if ((char *)prefix_count == (char *)0x1) {
                pcVar12 = result + length;
                ppcVar13[5] = (char_directive *)&_cw;
                *(ulong *)(ppcVar13 + 4) = arg_10;
                *(int *)(ppcVar13 + 3) = iVar10;
                *(char **)(ppcVar13 + 2) = buf;
                *(size_t *)(ppcVar13 + 1) = maxlen;
                *(char **)ppcVar13 = pcVar12;
                ppcVar13[-1] = 0x804d51e;
                retcount = snprintf((char *)*ppcVar13,(size_t)ppcVar13[1],(char *)ppcVar13[2]);
              }
              else {
                if ((char *)prefix_count == (char *)0x0) {
                  pcVar12 = result + length;
                  ppcVar13[4] = (char_directive *)&_cw;
                  *(ulong *)(ppcVar13 + 3) = arg_10;
                  *(char **)(ppcVar13 + 2) = buf;
                  *(size_t *)(ppcVar13 + 1) = maxlen;
                  *(char **)ppcVar13 = pcVar12;
                  ppcVar13[-1] = 0x804d4ca;
                  retcount = snprintf((char *)*ppcVar13,(size_t)ppcVar13[1],(char *)ppcVar13[2]);
                }
                else {
                  if ((char *)prefix_count != (char *)0x2) {
                    // WARNING: Subroutine does not return
                    ppcVar13[-1] = 0x804d58c;
                    abort(*(undefined *)(ppcVar13 + -1));
                  }
                  pcVar12 = result + length;
                  ppcVar13[6] = (char_directive *)&_cw;
                  *(ulong *)(ppcVar13 + 5) = arg_10;
                  *(int *)(ppcVar13 + 4) = iVar8;
                  *(int *)(ppcVar13 + 3) = iVar10;
                  *(char **)(ppcVar13 + 2) = buf;
                  *(size_t *)(ppcVar13 + 1) = maxlen;
                  *(char **)ppcVar13 = pcVar12;
                  ppcVar13[-1] = 0x804d57c;
                  retcount = snprintf((char *)*ppcVar13,(size_t)ppcVar13[1],(char *)ppcVar13[2]);
                }
              }
              break;
            case TYPE_LONGLONGINT:
              arg_11._4_4_ = *(char_directive **)((int)&a.arg[dp->arg_index].a + 4);
              arg_11._0_4_ = *(char_directive **)&a.arg[dp->arg_index].a;
              local_504 = (char *)prefix_count;
              if ((char *)prefix_count == (char *)0x1) {
                pcVar12 = result + length;
                ppcVar13[6] = (char_directive *)&_cw;
                ppcVar13[4] = (char_directive *)arg_11;
                ppcVar13[5] = arg_11._4_4_;
                *(int *)(ppcVar13 + 3) = iVar10;
                *(char **)(ppcVar13 + 2) = buf;
                *(size_t *)(ppcVar13 + 1) = maxlen;
                *(char **)ppcVar13 = pcVar12;
                ppcVar13[-1] = 0x804d68a;
                retcount = snprintf((char *)*ppcVar13,(size_t)ppcVar13[1],(char *)ppcVar13[2]);
              }
              else {
                if ((char *)prefix_count == (char *)0x0) {
                  pcVar12 = result + length;
                  ppcVar13[5] = (char_directive *)&_cw;
                  ppcVar13[3] = (char_directive *)arg_11;
                  ppcVar13[4] = arg_11._4_4_;
                  *(char **)(ppcVar13 + 2) = buf;
                  *(size_t *)(ppcVar13 + 1) = maxlen;
                  *(char **)ppcVar13 = pcVar12;
                  ppcVar13[-1] = 0x804d62c;
                  retcount = snprintf((char *)*ppcVar13,(size_t)ppcVar13[1],(char *)ppcVar13[2]);
                }
                else {
                  if ((char *)prefix_count != (char *)0x2) {
                    // WARNING: Subroutine does not return
                    ppcVar13[-1] = 0x804d702;
                    abort(*(undefined *)(ppcVar13 + -1));
                  }
                  pcVar12 = result + length;
                  ppcVar13[7] = (char_directive *)&_cw;
                  ppcVar13[5] = (char_directive *)arg_11;
                  ppcVar13[6] = arg_11._4_4_;
                  *(int *)(ppcVar13 + 4) = iVar8;
                  *(int *)(ppcVar13 + 3) = iVar10;
                  *(char **)(ppcVar13 + 2) = buf;
                  *(size_t *)(ppcVar13 + 1) = maxlen;
                  *(char **)ppcVar13 = pcVar12;
                  ppcVar13[-1] = 0x804d6f2;
                  retcount = snprintf((char *)*ppcVar13,(size_t)ppcVar13[1],(char *)ppcVar13[2]);
                }
              }
              break;
            case TYPE_ULONGLONGINT:
              arg_12._4_4_ = *(char_directive **)((int)&a.arg[dp->arg_index].a + 4);
              arg_12._0_4_ = *(char_directive **)&a.arg[dp->arg_index].a;
              local_508 = (char *)prefix_count;
              if ((char *)prefix_count == (char *)0x1) {
                pcVar12 = result + length;
                ppcVar13[6] = (char_directive *)&_cw;
                ppcVar13[4] = (char_directive *)arg_12;
                ppcVar13[5] = arg_12._4_4_;
                *(int *)(ppcVar13 + 3) = iVar10;
                *(char **)(ppcVar13 + 2) = buf;
                *(size_t *)(ppcVar13 + 1) = maxlen;
                *(char **)ppcVar13 = pcVar12;
                ppcVar13[-1] = 0x804d800;
                retcount = snprintf((char *)*ppcVar13,(size_t)ppcVar13[1],(char *)ppcVar13[2]);
              }
              else {
                if ((char *)prefix_count == (char *)0x0) {
                  pcVar12 = result + length;
                  ppcVar13[5] = (char_directive *)&_cw;
                  ppcVar13[3] = (char_directive *)arg_12;
                  ppcVar13[4] = arg_12._4_4_;
                  *(char **)(ppcVar13 + 2) = buf;
                  *(size_t *)(ppcVar13 + 1) = maxlen;
                  *(char **)ppcVar13 = pcVar12;
                  ppcVar13[-1] = 0x804d7a2;
                  retcount = snprintf((char *)*ppcVar13,(size_t)ppcVar13[1],(char *)ppcVar13[2]);
                }
                else {
                  if ((char *)prefix_count != (char *)0x2) {
                    // WARNING: Subroutine does not return
                    ppcVar13[-1] = 0x804d878;
                    abort(*(undefined *)(ppcVar13 + -1));
                  }
                  pcVar12 = result + length;
                  ppcVar13[7] = (char_directive *)&_cw;
                  ppcVar13[5] = (char_directive *)arg_12;
                  ppcVar13[6] = arg_12._4_4_;
                  *(int *)(ppcVar13 + 4) = iVar8;
                  *(int *)(ppcVar13 + 3) = iVar10;
                  *(char **)(ppcVar13 + 2) = buf;
                  *(size_t *)(ppcVar13 + 1) = maxlen;
                  *(char **)ppcVar13 = pcVar12;
                  ppcVar13[-1] = 0x804d868;
                  retcount = snprintf((char *)*ppcVar13,(size_t)ppcVar13[1],(char *)ppcVar13[2]);
                }
              }
              break;
            case TYPE_DOUBLE:
              arg_13 = *(double *)&a.arg[dp->arg_index].a;
              local_50c = (char *)prefix_count;
              if ((char *)prefix_count == (char *)0x1) {
                pcVar12 = result + length;
                ppcVar13[6] = (char_directive *)&_cw;
                *(double *)(ppcVar13 + 4) = arg_13;
                *(int *)(ppcVar13 + 3) = iVar10;
                *(char **)(ppcVar13 + 2) = buf;
                *(size_t *)(ppcVar13 + 1) = maxlen;
                *(char **)ppcVar13 = pcVar12;
                ppcVar13[-1] = 0x804d959;
                retcount = snprintf((char *)*ppcVar13,(size_t)ppcVar13[1],(char *)ppcVar13[2]);
              }
              else {
                if ((char *)prefix_count == (char *)0x0) {
                  pcVar12 = result + length;
                  ppcVar13[5] = (char_directive *)&_cw;
                  *(double *)(ppcVar13 + 3) = arg_13;
                  *(char **)(ppcVar13 + 2) = buf;
                  *(size_t *)(ppcVar13 + 1) = maxlen;
                  *(char **)ppcVar13 = pcVar12;
                  ppcVar13[-1] = 0x804d905;
                  retcount = snprintf((char *)*ppcVar13,(size_t)ppcVar13[1],(char *)ppcVar13[2]);
                }
                else {
                  if ((char *)prefix_count != (char *)0x2) {
                    // WARNING: Subroutine does not return
                    ppcVar13[-1] = 0x804d9c7;
                    abort(*(undefined *)(ppcVar13 + -1));
                  }
                  pcVar12 = result + length;
                  ppcVar13[7] = (char_directive *)&_cw;
                  *(double *)(ppcVar13 + 5) = arg_13;
                  *(int *)(ppcVar13 + 4) = iVar8;
                  *(int *)(ppcVar13 + 3) = iVar10;
                  *(char **)(ppcVar13 + 2) = buf;
                  *(size_t *)(ppcVar13 + 1) = maxlen;
                  *(char **)ppcVar13 = pcVar12;
                  ppcVar13[-1] = 0x804d9b7;
                  retcount = snprintf((char *)*ppcVar13,(size_t)ppcVar13[1],(char *)ppcVar13[2]);
                }
              }
              break;
            case TYPE_LONGDOUBLE:
              paVar1 = a.arg + dp->arg_index;
              arg_14._8_4_ = *(char_directive **)((int)&paVar1->a + 8);
              arg_14._4_4_ = *(char_directive **)((int)&paVar1->a + 4);
              arg_14._0_4_ = *(char_directive **)&paVar1->a;
              local_510 = (char *)prefix_count;
              if ((char *)prefix_count == (char *)0x1) {
                pcVar12 = result + length;
                ppcVar13[7] = (char_directive *)&_cw;
                ppcVar13[4] = arg_14._0_4_;
                ppcVar13[5] = arg_14._4_4_;
                ppcVar13[6] = arg_14._8_4_;
                *(int *)(ppcVar13 + 3) = iVar10;
                *(char **)(ppcVar13 + 2) = buf;
                *(size_t *)(ppcVar13 + 1) = maxlen;
                *(char **)ppcVar13 = pcVar12;
                ppcVar13[-1] = 0x804dae2;
                retcount = snprintf((char *)*ppcVar13,(size_t)ppcVar13[1],(char *)ppcVar13[2]);
              }
              else {
                if ((char *)prefix_count == (char *)0x0) {
                  pcVar12 = result + length;
                  ppcVar13[6] = (char_directive *)&_cw;
                  ppcVar13[3] = arg_14._0_4_;
                  ppcVar13[4] = arg_14._4_4_;
                  ppcVar13[5] = arg_14._8_4_;
                  *(char **)(ppcVar13 + 2) = buf;
                  *(size_t *)(ppcVar13 + 1) = maxlen;
                  *(char **)ppcVar13 = pcVar12;
                  ppcVar13[-1] = 0x804da7a;
                  retcount = snprintf((char *)*ppcVar13,(size_t)ppcVar13[1],(char *)ppcVar13[2]);
                }
                else {
                  if ((char *)prefix_count != (char *)0x2) {
                    // WARNING: Subroutine does not return
                    ppcVar13[-1] = 0x804db64;
                    abort(*(undefined *)(ppcVar13 + -1));
                  }
                  pcVar12 = result + length;
                  ppcVar13[8] = (char_directive *)&_cw;
                  ppcVar13[5] = arg_14._0_4_;
                  ppcVar13[6] = arg_14._4_4_;
                  ppcVar13[7] = arg_14._8_4_;
                  *(int *)(ppcVar13 + 4) = iVar8;
                  *(int *)(ppcVar13 + 3) = iVar10;
                  *(char **)(ppcVar13 + 2) = buf;
                  *(size_t *)(ppcVar13 + 1) = maxlen;
                  *(char **)ppcVar13 = pcVar12;
                  ppcVar13[-1] = 0x804db54;
                  retcount = snprintf((char *)*ppcVar13,(size_t)ppcVar13[1],(char *)ppcVar13[2]);
                }
              }
              break;
            case TYPE_CHAR:
              arg_15 = *(int *)&a.arg[dp->arg_index].a;
              local_514 = (char *)prefix_count;
              if ((char *)prefix_count == (char *)0x1) {
                pcVar12 = result + length;
                ppcVar13[5] = (char_directive *)&_cw;
                *(int *)(ppcVar13 + 4) = arg_15;
                *(int *)(ppcVar13 + 3) = iVar10;
                *(char **)(ppcVar13 + 2) = buf;
                *(size_t *)(ppcVar13 + 1) = maxlen;
                *(char **)ppcVar13 = pcVar12;
                ppcVar13[-1] = 0x804dc45;
                retcount = snprintf((char *)*ppcVar13,(size_t)ppcVar13[1],(char *)ppcVar13[2]);
              }
              else {
                if ((char *)prefix_count == (char *)0x0) {
                  pcVar12 = result + length;
                  ppcVar13[4] = (char_directive *)&_cw;
                  *(int *)(ppcVar13 + 3) = arg_15;
                  *(char **)(ppcVar13 + 2) = buf;
                  *(size_t *)(ppcVar13 + 1) = maxlen;
                  *(char **)ppcVar13 = pcVar12;
                  ppcVar13[-1] = 0x804dbf1;
                  retcount = snprintf((char *)*ppcVar13,(size_t)ppcVar13[1],(char *)ppcVar13[2]);
                }
                else {
                  if ((char *)prefix_count != (char *)0x2) {
                    // WARNING: Subroutine does not return
                    ppcVar13[-1] = 0x804dcb3;
                    abort(*(undefined *)(ppcVar13 + -1));
                  }
                  pcVar12 = result + length;
                  ppcVar13[6] = (char_directive *)&_cw;
                  *(int *)(ppcVar13 + 5) = arg_15;
                  *(int *)(ppcVar13 + 4) = iVar8;
                  *(int *)(ppcVar13 + 3) = iVar10;
                  *(char **)(ppcVar13 + 2) = buf;
                  *(size_t *)(ppcVar13 + 1) = maxlen;
                  *(char **)ppcVar13 = pcVar12;
                  ppcVar13[-1] = 0x804dca3;
                  retcount = snprintf((char *)*ppcVar13,(size_t)ppcVar13[1],(char *)ppcVar13[2]);
                }
              }
              break;
            case TYPE_WIDE_CHAR:
              arg_16 = *(wint_t *)&a.arg[dp->arg_index].a;
              local_518 = (char *)prefix_count;
              if ((char *)prefix_count == (char *)0x1) {
                pcVar12 = result + length;
                ppcVar13[5] = (char_directive *)&_cw;
                *(wint_t *)(ppcVar13 + 4) = arg_16;
                *(int *)(ppcVar13 + 3) = iVar10;
                *(char **)(ppcVar13 + 2) = buf;
                *(size_t *)(ppcVar13 + 1) = maxlen;
                *(char **)ppcVar13 = pcVar12;
                ppcVar13[-1] = 0x804dd94;
                retcount = snprintf((char *)*ppcVar13,(size_t)ppcVar13[1],(char *)ppcVar13[2]);
              }
              else {
                if ((char *)prefix_count == (char *)0x0) {
                  pcVar12 = result + length;
                  ppcVar13[4] = (char_directive *)&_cw;
                  *(wint_t *)(ppcVar13 + 3) = arg_16;
                  *(char **)(ppcVar13 + 2) = buf;
                  *(size_t *)(ppcVar13 + 1) = maxlen;
                  *(char **)ppcVar13 = pcVar12;
                  ppcVar13[-1] = 0x804dd40;
                  retcount = snprintf((char *)*ppcVar13,(size_t)ppcVar13[1],(char *)ppcVar13[2]);
                }
                else {
                  if ((char *)prefix_count != (char *)0x2) {
                    // WARNING: Subroutine does not return
                    ppcVar13[-1] = 0x804de02;
                    abort(*(undefined *)(ppcVar13 + -1));
                  }
                  pcVar12 = result + length;
                  ppcVar13[6] = (char_directive *)&_cw;
                  *(wint_t *)(ppcVar13 + 5) = arg_16;
                  *(int *)(ppcVar13 + 4) = iVar8;
                  *(int *)(ppcVar13 + 3) = iVar10;
                  *(char **)(ppcVar13 + 2) = buf;
                  *(size_t *)(ppcVar13 + 1) = maxlen;
                  *(char **)ppcVar13 = pcVar12;
                  ppcVar13[-1] = 0x804ddf2;
                  retcount = snprintf((char *)*ppcVar13,(size_t)ppcVar13[1],(char *)ppcVar13[2]);
                }
              }
              break;
            case TYPE_STRING:
              arg_17 = *(char **)&a.arg[dp->arg_index].a;
              local_51c = (char *)prefix_count;
              if ((char *)prefix_count == (char *)0x1) {
                pcVar12 = result + length;
                ppcVar13[5] = (char_directive *)&_cw;
                *(char **)(ppcVar13 + 4) = arg_17;
                *(int *)(ppcVar13 + 3) = iVar10;
                *(char **)(ppcVar13 + 2) = buf;
                *(size_t *)(ppcVar13 + 1) = maxlen;
                *(char **)ppcVar13 = pcVar12;
                ppcVar13[-1] = 0x804dee3;
                retcount = snprintf((char *)*ppcVar13,(size_t)ppcVar13[1],(char *)ppcVar13[2]);
              }
              else {
                if ((char *)prefix_count == (char *)0x0) {
                  pcVar12 = result + length;
                  ppcVar13[4] = (char_directive *)&_cw;
                  *(char **)(ppcVar13 + 3) = arg_17;
                  *(char **)(ppcVar13 + 2) = buf;
                  *(size_t *)(ppcVar13 + 1) = maxlen;
                  *(char **)ppcVar13 = pcVar12;
                  ppcVar13[-1] = 0x804de8f;
                  retcount = snprintf((char *)*ppcVar13,(size_t)ppcVar13[1],(char *)ppcVar13[2]);
                }
                else {
                  if ((char *)prefix_count != (char *)0x2) {
                    // WARNING: Subroutine does not return
                    ppcVar13[-1] = 0x804df51;
                    abort(*(undefined *)(ppcVar13 + -1));
                  }
                  pcVar12 = result + length;
                  ppcVar13[6] = (char_directive *)&_cw;
                  *(char **)(ppcVar13 + 5) = arg_17;
                  *(int *)(ppcVar13 + 4) = iVar8;
                  *(int *)(ppcVar13 + 3) = iVar10;
                  *(char **)(ppcVar13 + 2) = buf;
                  *(size_t *)(ppcVar13 + 1) = maxlen;
                  *(char **)ppcVar13 = pcVar12;
                  ppcVar13[-1] = 0x804df41;
                  retcount = snprintf((char *)*ppcVar13,(size_t)ppcVar13[1],(char *)ppcVar13[2]);
                }
              }
              break;
            case TYPE_WIDE_STRING:
              arg_18 = *(wchar_t **)&a.arg[dp->arg_index].a;
              local_520 = (char *)prefix_count;
              if ((char *)prefix_count == (char *)0x1) {
                pcVar12 = result + length;
                ppcVar13[5] = (char_directive *)&_cw;
                *(wchar_t **)(ppcVar13 + 4) = arg_18;
                *(int *)(ppcVar13 + 3) = iVar10;
                *(char **)(ppcVar13 + 2) = buf;
                *(size_t *)(ppcVar13 + 1) = maxlen;
                *(char **)ppcVar13 = pcVar12;
                ppcVar13[-1] = 0x804e032;
                retcount = snprintf((char *)*ppcVar13,(size_t)ppcVar13[1],(char *)ppcVar13[2]);
              }
              else {
                if ((char *)prefix_count == (char *)0x0) {
                  pcVar12 = result + length;
                  ppcVar13[4] = (char_directive *)&_cw;
                  *(wchar_t **)(ppcVar13 + 3) = arg_18;
                  *(char **)(ppcVar13 + 2) = buf;
                  *(size_t *)(ppcVar13 + 1) = maxlen;
                  *(char **)ppcVar13 = pcVar12;
                  ppcVar13[-1] = 0x804dfde;
                  retcount = snprintf((char *)*ppcVar13,(size_t)ppcVar13[1],(char *)ppcVar13[2]);
                }
                else {
                  if ((char *)prefix_count != (char *)0x2) {
                    // WARNING: Subroutine does not return
                    ppcVar13[-1] = 0x804e0a0;
                    abort(*(undefined *)(ppcVar13 + -1));
                  }
                  pcVar12 = result + length;
                  ppcVar13[6] = (char_directive *)&_cw;
                  *(wchar_t **)(ppcVar13 + 5) = arg_18;
                  *(int *)(ppcVar13 + 4) = iVar8;
                  *(int *)(ppcVar13 + 3) = iVar10;
                  *(char **)(ppcVar13 + 2) = buf;
                  *(size_t *)(ppcVar13 + 1) = maxlen;
                  *(char **)ppcVar13 = pcVar12;
                  ppcVar13[-1] = 0x804e090;
                  retcount = snprintf((char *)*ppcVar13,(size_t)ppcVar13[1],(char *)ppcVar13[2]);
                }
              }
              break;
            case TYPE_POINTER:
              arg_19 = *(void **)&a.arg[dp->arg_index].a;
              local_524 = (char *)prefix_count;
              if ((char *)prefix_count == (char *)0x1) {
                pcVar12 = result + length;
                ppcVar13[5] = (char_directive *)&_cw;
                ppcVar13[4] = arg_19;
                *(int *)(ppcVar13 + 3) = iVar10;
                *(char **)(ppcVar13 + 2) = buf;
                *(size_t *)(ppcVar13 + 1) = maxlen;
                *(char **)ppcVar13 = pcVar12;
                ppcVar13[-1] = 0x804e181;
                retcount = snprintf((char *)*ppcVar13,(size_t)ppcVar13[1],(char *)ppcVar13[2]);
              }
              else {
                if ((char *)prefix_count == (char *)0x0) {
                  pcVar12 = result + length;
                  ppcVar13[4] = (char_directive *)&_cw;
                  ppcVar13[3] = arg_19;
                  *(char **)(ppcVar13 + 2) = buf;
                  *(size_t *)(ppcVar13 + 1) = maxlen;
                  *(char **)ppcVar13 = pcVar12;
                  ppcVar13[-1] = 0x804e12d;
                  retcount = snprintf((char *)*ppcVar13,(size_t)ppcVar13[1],(char *)ppcVar13[2]);
                }
                else {
                  if ((char *)prefix_count != (char *)0x2) {
                    // WARNING: Subroutine does not return
                    ppcVar13[-1] = 0x804e1e9;
                    abort(*(undefined *)(ppcVar13 + -1));
                  }
                  pcVar12 = result + length;
                  ppcVar13[6] = (char_directive *)&_cw;
                  ppcVar13[5] = arg_19;
                  *(int *)(ppcVar13 + 4) = iVar8;
                  *(int *)(ppcVar13 + 3) = iVar10;
                  *(char **)(ppcVar13 + 2) = buf;
                  *(size_t *)(ppcVar13 + 1) = maxlen;
                  *(char **)ppcVar13 = pcVar12;
                  ppcVar13[-1] = 0x804e1dc;
                  retcount = snprintf((char *)*ppcVar13,(size_t)ppcVar13[1],(char *)ppcVar13[2]);
                }
              }
            }
            if ((int)__cw < 0) {
              if (fbp[1] != '\0') {
                fbp[1] = '\0';
                goto LAB_0804caac;
              }
              if (retcount < 0) {
                if ((int)allocated < 0) {
                  local_49c = -1;
                }
                else {
                  local_49c = allocated * 2;
                }
                ppcVar13[1] = (char_directive *)0xc;
                *(int *)ppcVar13 = local_49c;
                ppcVar13[-1] = 0x804e2af;
                __size = xsum((size_t)*ppcVar13,(size_t)ppcVar13[1]);
                if (allocated < __size) {
                  if (allocated == 0) {
                    local_498 = 0xc;
                  }
                  else {
                    if ((int)allocated < 0) {
                      local_494 = 0xffffffff;
                    }
                    else {
                      local_494 = allocated * 2;
                    }
                    local_498 = local_494;
                  }
                  allocated = local_498;
                  if (local_498 < __size) {
                    allocated = __size;
                  }
                  if (allocated == 0xffffffff) goto out_of_memory;
                  if ((result == local_470) || (result == (char *)0x0)) {
                    *(size_t *)ppcVar13 = allocated;
                    ppcVar13[-1] = 0x804e370;
                    memory_4 = (char *)malloc((size_t)*ppcVar13);
                  }
                  else {
                    *(size_t *)(ppcVar13 + 1) = allocated;
                    *(char **)ppcVar13 = result;
                    ppcVar13[-1] = 0x804e390;
                    memory_4 = (char *)realloc(*ppcVar13,(size_t)ppcVar13[1]);
                  }
                  if (memory_4 == (char *)0x0) goto out_of_memory;
                  if ((result == local_470) && (length != 0)) {
                    *(size_t *)(ppcVar13 + 2) = length;
                    *(char **)(ppcVar13 + 1) = result;
                    *(char **)ppcVar13 = memory_4;
                    ppcVar13[-1] = 0x804e3dc;
                    memcpy(*ppcVar13,ppcVar13[1],(size_t)ppcVar13[2]);
                  }
                  result = memory_4;
                }
                goto LAB_0804caac;
              }
              __cw = (char *)retcount;
            }
            else {
              if ((__cw < maxlen) && (result[(int)(__cw + length)] != '\0')) {
                    // WARNING: Subroutine does not return
                ppcVar13[-1] = 0x804e224;
                abort(*(undefined *)(ppcVar13 + -1));
              }
              if ((int)__cw < retcount) {
                __cw = (char *)retcount;
              }
            }
            if ((int)__cw < 0) {
              if ((result != local_470) && (result != (char *)0x0)) {
                *(char **)ppcVar13 = result;
                ppcVar13[-1] = 0x804e428;
                free(*ppcVar13);
              }
              if (buf_malloced != (char *)0x0) {
                *(char **)ppcVar13 = buf_malloced;
                ppcVar13[-1] = 0x804e43f;
                free(*ppcVar13);
              }
              *ppcVar13 = d.dir;
              ppcVar13[-1] = 0x804e44d;
              free(*ppcVar13);
              if (a.arg != (argument *)0x0) {
                *(argument **)ppcVar13 = a.arg;
                ppcVar13[-1] = 0x804e465;
                free(*ppcVar13);
              }
              ppcVar13[-1] = 0x804e46a;
              piVar11 = __errno_location(*(undefined *)(ppcVar13 + -1));
              *piVar11 = 0x16;
              local_4d4 = (char *)0x0;
              goto LAB_0804e976;
            }
            if (maxlen <= __cw + 1) {
              if (maxlen == 0x7fffffff) {
                if ((result != local_470) && (result != (char *)0x0)) {
                  *(char **)ppcVar13 = result;
                  ppcVar13[-1] = 0x804e8ab;
                  free(*ppcVar13);
                }
                if (buf_malloced != (char *)0x0) {
                  *(char **)ppcVar13 = buf_malloced;
                  ppcVar13[-1] = 0x804e8c2;
                  free(*ppcVar13);
                }
                *ppcVar13 = d.dir;
                ppcVar13[-1] = 0x804e8d0;
                free(*ppcVar13);
                if (a.arg != (argument *)0x0) {
                  *(argument **)ppcVar13 = a.arg;
                  ppcVar13[-1] = 0x804e8e8;
                  free(*ppcVar13);
                }
                ppcVar13[-1] = 0x804e8ed;
                piVar11 = __errno_location(*(undefined *)(ppcVar13 + -1));
                *piVar11 = 0x4b;
                local_4d4 = (char *)0x0;
                goto LAB_0804e976;
              }
              if ((int)allocated < 0) {
                local_490 = (char_directive *)0xffffffff;
              }
              else {
                local_490 = (char_directive *)(allocated * 2);
              }
              ppcVar13[1] = (char_directive *)(__cw + 2);
              *(size_t *)ppcVar13 = length;
              ppcVar13[-1] = 0x804e4e3;
              __size = xsum((size_t)*ppcVar13,(size_t)ppcVar13[1]);
              ppcVar13[1] = local_490;
              *(size_t *)ppcVar13 = __size;
              ppcVar13[-1] = 0x804e4f5;
              __size = xmax((size_t)*ppcVar13,(size_t)ppcVar13[1]);
              if (allocated < __size) {
                if (allocated == 0) {
                  local_48c = 0xc;
                }
                else {
                  if ((int)allocated < 0) {
                    local_488 = 0xffffffff;
                  }
                  else {
                    local_488 = allocated * 2;
                  }
                  local_48c = local_488;
                }
                allocated = local_48c;
                if (local_48c < __size) {
                  allocated = __size;
                }
                if (allocated == 0xffffffff) goto out_of_memory;
                if ((result == local_470) || (result == (char *)0x0)) {
                  *(size_t *)ppcVar13 = allocated;
                  ppcVar13[-1] = 0x804e5b6;
                  memory_5 = (char *)malloc((size_t)*ppcVar13);
                }
                else {
                  *(size_t *)(ppcVar13 + 1) = allocated;
                  *(char **)ppcVar13 = result;
                  ppcVar13[-1] = 0x804e5d6;
                  memory_5 = (char *)realloc(*ppcVar13,(size_t)ppcVar13[1]);
                }
                if (memory_5 == (char *)0x0) goto out_of_memory;
                if ((result == local_470) && (length != 0)) {
                  *(size_t *)(ppcVar13 + 2) = length;
                  *(char **)(ppcVar13 + 1) = result;
                  *(char **)ppcVar13 = memory_5;
                  ppcVar13[-1] = 0x804e622;
                  memcpy(*ppcVar13,ppcVar13[1],(size_t)ppcVar13[2]);
                }
                result = memory_5;
              }
              goto LAB_0804caac;
            }
            length = (size_t)(__cw + length);
          }
        }
LAB_0804e63f:
        cp = dp->dir_end;
        i = i + 1;
        dp = dp + 1;
      } while( true );
    }
    free(d.dir);
    if (a.arg != (argument *)0x0) {
      free(a.arg);
    }
    piVar11 = __errno_location();
    *piVar11 = 0x16;
    local_4d4 = (char *)0x0;
  }
LAB_0804e976:
  if (local_20 == *(int *)(in_GS_OFFSET + 0x14)) {
    return local_4d4;
  }
                    // WARNING: Subroutine does not return
  *(undefined4 *)((undefined *)ppcVar13 + -4) = 0x804e98d;
  __stack_chk_fail();
}



size_t xsum4(size_t size1,size_t size2,size_t size3,size_t size4)

{
  size_t size1_00;
  
  size1_00 = xsum(size1,size2);
  size1_00 = xsum(size1_00,size3);
  size1_00 = xsum(size1_00,size4);
  return size1_00;
}



size_t xmax(size_t size1,size_t size2)

{
  size_t local_8;
  
  local_8 = size1;
  if (size1 < size2) {
    local_8 = size2;
  }
  return local_8;
}



size_t xsum(size_t size1,size_t size2)

{
  uint local_18;
  size_t sum;
  
  local_18 = size1 + size2;
  if (local_18 < size1) {
    local_18 = 0xffffffff;
  }
  return local_18;
}



int rpl_isnanl(longdouble x)

{
  uint local_20;
  memory_double m;
  uint exponent;
  
  if (((undefined  [12])x & (undefined  [12])0x7fff) == (undefined  [12])0x0) {
    local_20 = x._4_4_ >> 0x1f;
  }
  else {
    if ((x._8_4_ & 0x7fff) == 0x7fff) {
      local_20 = (uint)((x._0_4_ | x._4_4_ ^ 0x80000000) != 0);
    }
    else {
      local_20 = x._4_4_ >> 0x1f ^ 1;
    }
  }
  return local_20;
}



int printf_fetchargs(va_list args,arguments *a)

{
  va_list pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  argument *ap;
  size_t i;
  
  i = 0;
  ap = a->arg;
  while (i < a->count) {
    switch(ap->type) {
    default:
      return -1;
    case TYPE_SCHAR:
      *(char *)&ap->a = (char)*(undefined4 *)args;
      args = args + 4;
      break;
    case TYPE_UCHAR:
      *(char *)&ap->a = (char)*(undefined4 *)args;
      args = args + 4;
      break;
    case TYPE_SHORT:
      *(short *)&ap->a = (short)*(undefined4 *)args;
      args = args + 4;
      break;
    case TYPE_USHORT:
      *(short *)&ap->a = (short)*(undefined4 *)args;
      args = args + 4;
      break;
    case TYPE_INT:
      *(undefined4 *)&ap->a = *(undefined4 *)args;
      args = args + 4;
      break;
    case TYPE_UINT:
      *(undefined4 *)&ap->a = *(undefined4 *)args;
      args = args + 4;
      break;
    case TYPE_LONGINT:
      *(undefined4 *)&ap->a = *(undefined4 *)args;
      args = args + 4;
      break;
    case TYPE_ULONGINT:
      *(undefined4 *)&ap->a = *(undefined4 *)args;
      args = args + 4;
      break;
    case TYPE_LONGLONGINT:
      uVar2 = *(undefined4 *)(args + 4);
      *(undefined4 *)&ap->a = *(undefined4 *)args;
      *(undefined4 *)((int)&ap->a + 4) = uVar2;
      args = args + 8;
      break;
    case TYPE_ULONGLONGINT:
      uVar2 = *(undefined4 *)(args + 4);
      *(undefined4 *)&ap->a = *(undefined4 *)args;
      *(undefined4 *)((int)&ap->a + 4) = uVar2;
      args = args + 8;
      break;
    case TYPE_DOUBLE:
      *(undefined8 *)&ap->a = *(undefined8 *)args;
      args = args + 8;
      break;
    case TYPE_LONGDOUBLE:
      uVar2 = *(undefined4 *)(args + 8);
      uVar3 = *(undefined4 *)(args + 4);
      *(undefined4 *)&ap->a = *(undefined4 *)args;
      *(undefined4 *)((int)&ap->a + 4) = uVar3;
      *(undefined4 *)((int)&ap->a + 8) = uVar2;
      args = args + 0xc;
      break;
    case TYPE_CHAR:
      *(undefined4 *)&ap->a = *(undefined4 *)args;
      args = args + 4;
      break;
    case TYPE_WIDE_CHAR:
      *(undefined4 *)&ap->a = *(undefined4 *)args;
      args = args + 4;
      break;
    case TYPE_STRING:
      pcVar1 = args + 4;
      *(undefined4 *)&ap->a = *(undefined4 *)args;
      args = pcVar1;
      if (*(int *)&ap->a == 0) {
        *(undefined4 *)&ap->a = 0x80509b0;
      }
      break;
    case TYPE_WIDE_STRING:
      pcVar1 = args + 4;
      *(undefined4 *)&ap->a = *(undefined4 *)args;
      args = pcVar1;
      if (*(int *)&ap->a == 0) {
        *(undefined4 *)&ap->a = 0x8050994;
      }
      break;
    case TYPE_POINTER:
      *(undefined4 *)&ap->a = *(undefined4 *)args;
      args = args + 4;
      break;
    case TYPE_COUNT_SCHAR_POINTER:
      *(undefined4 *)&ap->a = *(undefined4 *)args;
      args = args + 4;
      break;
    case TYPE_COUNT_SHORT_POINTER:
      *(undefined4 *)&ap->a = *(undefined4 *)args;
      args = args + 4;
      break;
    case TYPE_COUNT_INT_POINTER:
      *(undefined4 *)&ap->a = *(undefined4 *)args;
      args = args + 4;
      break;
    case TYPE_COUNT_LONGINT_POINTER:
      *(undefined4 *)&ap->a = *(undefined4 *)args;
      args = args + 4;
      break;
    case TYPE_COUNT_LONGLONGINT_POINTER:
      *(undefined4 *)&ap->a = *(undefined4 *)args;
      args = args + 4;
    }
    i = i + 1;
    ap = ap + 1;
  }
  return 0;
}



int printf_parse(char *format,char_directives *d,arguments *a)

{
  uint size1;
  size_t sVar1;
  char *pcVar2;
  char_directive *pcVar3;
  int *piVar4;
  size_t local_c8;
  size_t local_c0;
  uint local_bc;
  size_t local_b8;
  argument *local_b4;
  size_t local_ac;
  uint local_a8;
  size_t local_a4;
  argument *local_a0;
  uint local_9c;
  size_t local_98;
  argument *local_94;
  uint local_90;
  size_t local_8c;
  char_directive *memory_3;
  size_t memory_size_3;
  argument *memory_2;
  size_t memory_size_2;
  size_t n_5;
  int flags;
  arg_type type;
  size_t precision_length;
  argument *memory_1;
  size_t memory_size_1;
  size_t n_4;
  size_t n_3;
  char *np_2;
  size_t width_length;
  argument *memory;
  size_t memory_size;
  size_t n_2;
  size_t n_1;
  char *np_1;
  size_t n;
  char *np;
  char_directive *dp;
  size_t arg_index;
  size_t max_precision_length;
  size_t max_width_length;
  size_t a_allocated;
  size_t d_allocated;
  size_t arg_posn;
  char *cp;
  char c;
  
  cp = format;
  arg_posn = 0;
  max_width_length = 0;
  max_precision_length = 0;
  d->count = 0;
  d_allocated = 1;
  pcVar3 = (char_directive *)malloc(0x2c);
  d->dir = pcVar3;
  if (d->dir == (char_directive *)0x0) {
out_of_memory_1:
    piVar4 = __errno_location();
    *piVar4 = 0xc;
    return -1;
  }
  a->count = 0;
  a_allocated = 0;
  a->arg = (argument *)0x0;
  pcVar2 = cp;
LAB_0804fad5:
  do {
    cp = pcVar2;
    if (*cp == '\0') {
      d->dir[d->count].dir_start = cp;
      d->max_width_length = max_width_length;
      d->max_precision_length = max_precision_length;
      return 0;
    }
    pcVar2 = cp + 1;
  } while (*cp != '%');
  arg_index = 0xffffffff;
  pcVar3 = d->dir + d->count;
  pcVar3->dir_start = cp;
  pcVar3->flags = 0;
  pcVar3->width_start = (char *)0x0;
  pcVar3->width_end = (char *)0x0;
  pcVar3->width_arg_index = 0xffffffff;
  pcVar3->precision_start = (char *)0x0;
  pcVar3->precision_end = (char *)0x0;
  pcVar3->precision_arg_index = 0xffffffff;
  pcVar3->arg_index = 0xffffffff;
  cp = pcVar2;
  if (('/' < *pcVar2) && (np = pcVar2, *pcVar2 < ':')) {
    while (('/' < *np && (*np < ':'))) {
      np = np + 1;
    }
    if (*np == '$') {
      n = 0;
      np = pcVar2;
      while (('/' < *np && (*np < ':'))) {
        if (n < 0x1999999a) {
          local_c8 = n * 10;
        }
        else {
          local_c8 = 0xffffffff;
        }
        n = xsum(local_c8,(int)*np - 0x30);
        np = np + 1;
      }
      if ((n == 0) || (n == 0xffffffff)) goto error;
      arg_index = n - 1;
      cp = np + 1;
    }
  }
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while (*cp == '\'') {
              pcVar3->flags = pcVar3->flags | 1;
              cp = cp + 1;
            }
            if (*cp != '-') break;
            pcVar3->flags = pcVar3->flags | 2;
            cp = cp + 1;
          }
          if (*cp != '+') break;
          pcVar3->flags = pcVar3->flags | 4;
          cp = cp + 1;
        }
        if (*cp != ' ') break;
        pcVar3->flags = pcVar3->flags | 8;
        cp = cp + 1;
      }
      if (*cp != '#') break;
      pcVar3->flags = pcVar3->flags | 0x10;
      cp = cp + 1;
    }
    if (*cp != '0') break;
    pcVar3->flags = pcVar3->flags | 0x20;
    cp = cp + 1;
  }
  if (*cp == '*') {
    pcVar3->width_start = cp;
    cp = cp + 1;
    pcVar3->width_end = cp;
    if (max_width_length == 0) {
      max_width_length = 1;
    }
    if (('/' < *cp) && (np_1 = cp, *cp < ':')) {
      while (('/' < *np_1 && (*np_1 < ':'))) {
        np_1 = np_1 + 1;
      }
      if (*np_1 == '$') {
        n_1 = 0;
        np_1 = cp;
        while (('/' < *np_1 && (*np_1 < ':'))) {
          if (n_1 < 0x1999999a) {
            local_c0 = n_1 * 10;
          }
          else {
            local_c0 = 0xffffffff;
          }
          n_1 = xsum(local_c0,(int)*np_1 - 0x30);
          np_1 = np_1 + 1;
        }
        if ((n_1 == 0) || (n_1 == 0xffffffff)) goto error;
        pcVar3->width_arg_index = n_1 - 1;
        cp = np_1 + 1;
      }
    }
    if (pcVar3->width_arg_index == 0xffffffff) {
      pcVar3->width_arg_index = arg_posn;
      arg_posn = arg_posn + 1;
      if (pcVar3->width_arg_index == 0xffffffff) goto error;
    }
    size1 = pcVar3->width_arg_index;
    if (size1 < a_allocated) {
LAB_0804f259:
      while (a->count <= size1) {
        sVar1 = a->count;
        a->arg[sVar1].type = TYPE_NONE;
        a->count = sVar1 + 1;
      }
      if (a->arg[size1].type == TYPE_NONE) {
        a->arg[size1].type = TYPE_INT;
      }
      else {
        if (a->arg[size1].type != TYPE_INT) goto error;
      }
      goto LAB_0804f313;
    }
    if ((int)a_allocated < 0) {
      local_bc = 0xffffffff;
    }
    else {
      local_bc = a_allocated * 2;
    }
    a_allocated = local_bc;
    if (local_bc <= size1) {
      a_allocated = xsum(size1,1);
    }
    if (a_allocated < 0x10000000) {
      local_b8 = a_allocated << 4;
    }
    else {
      local_b8 = 0xffffffff;
    }
    if (local_b8 != 0xffffffff) {
      if (a->arg == (argument *)0x0) {
        local_b4 = (argument *)malloc(local_b8);
      }
      else {
        local_b4 = (argument *)realloc(a->arg,local_b8);
      }
      if (local_b4 != (argument *)0x0) {
        a->arg = local_b4;
        goto LAB_0804f259;
      }
    }
    goto out_of_memory;
  }
  if (('/' < *cp) && (*cp < ':')) {
    pcVar3->width_start = cp;
    while (('/' < *cp && (*cp < ':'))) {
      cp = cp + 1;
    }
    pcVar3->width_end = cp;
    if (max_width_length < pcVar3->width_end + -(int)pcVar3->width_start) {
      max_width_length = (size_t)(pcVar3->width_end + -(int)pcVar3->width_start);
    }
  }
LAB_0804f313:
  if (*cp == '.') {
    if (cp[1] != '*') {
      pcVar3->precision_start = cp;
      cp = cp + 1;
      while (('/' < *cp && (*cp < ':'))) {
        cp = cp + 1;
      }
      pcVar3->precision_end = cp;
      if (max_precision_length < pcVar3->precision_end + -(int)pcVar3->precision_start) {
        max_precision_length = (size_t)(pcVar3->precision_end + -(int)pcVar3->precision_start);
      }
      goto LAB_0804f61c;
    }
    pcVar3->precision_start = cp;
    cp = cp + 2;
    pcVar3->precision_end = cp;
    if (max_precision_length < 2) {
      max_precision_length = 2;
    }
    if (('/' < *cp) && (np_2 = cp, *cp < ':')) {
      while (('/' < *np_2 && (*np_2 < ':'))) {
        np_2 = np_2 + 1;
      }
      if (*np_2 == '$') {
        n_3 = 0;
        np_2 = cp;
        while (('/' < *np_2 && (*np_2 < ':'))) {
          if (n_3 < 0x1999999a) {
            local_ac = n_3 * 10;
          }
          else {
            local_ac = 0xffffffff;
          }
          n_3 = xsum(local_ac,(int)*np_2 - 0x30);
          np_2 = np_2 + 1;
        }
        if ((n_3 == 0) || (n_3 == 0xffffffff)) goto error;
        pcVar3->precision_arg_index = n_3 - 1;
        cp = np_2 + 1;
      }
    }
    if (pcVar3->precision_arg_index == 0xffffffff) {
      pcVar3->precision_arg_index = arg_posn;
      arg_posn = arg_posn + 1;
      if (pcVar3->precision_arg_index == 0xffffffff) goto error;
    }
    size1 = pcVar3->precision_arg_index;
    if (size1 < a_allocated) {
LAB_0804f576:
      while (a->count <= size1) {
        sVar1 = a->count;
        a->arg[sVar1].type = TYPE_NONE;
        a->count = sVar1 + 1;
      }
      if (a->arg[size1].type == TYPE_NONE) {
        a->arg[size1].type = TYPE_INT;
      }
      else {
        if (a->arg[size1].type != TYPE_INT) goto error;
      }
      goto LAB_0804f61c;
    }
    if ((int)a_allocated < 0) {
      local_a8 = 0xffffffff;
    }
    else {
      local_a8 = a_allocated * 2;
    }
    a_allocated = local_a8;
    if (local_a8 <= size1) {
      a_allocated = xsum(size1,1);
    }
    if (a_allocated < 0x10000000) {
      local_a4 = a_allocated << 4;
    }
    else {
      local_a4 = 0xffffffff;
    }
    if (local_a4 != 0xffffffff) {
      if (a->arg == (argument *)0x0) {
        local_a0 = (argument *)malloc(local_a4);
      }
      else {
        local_a0 = (argument *)realloc(a->arg,local_a4);
      }
      if (local_a0 != (argument *)0x0) {
        a->arg = local_a0;
        goto LAB_0804f576;
      }
    }
    goto out_of_memory;
  }
LAB_0804f61c:
  flags = 0;
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while (*cp == 'h') {
              flags = flags | 1 << ((byte)flags & 1);
              cp = cp + 1;
            }
            if (*cp != 'L') break;
            flags = flags | 4;
            cp = cp + 1;
          }
          if (*cp != 'l') break;
          flags = flags + 8;
          cp = cp + 1;
        }
        if (*cp != 'j') break;
        flags = flags + 0x10;
        cp = cp + 1;
      }
      if ((*cp != 'z') && (*cp != 'Z')) break;
      cp = cp + 1;
    }
    if (*cp != 't') break;
    cp = cp + 1;
  }
  c = *cp;
  pcVar2 = cp + 1;
  switch(c) {
  case '%':
    type = TYPE_NONE;
    break;
  default:
    goto error;
  case 'A':
  case 'E':
  case 'F':
  case 'G':
  case 'a':
  case 'e':
  case 'f':
  case 'g':
    if ((flags < 0x10) && ((flags & 4U) == 0)) {
      type = TYPE_DOUBLE;
    }
    else {
      type = TYPE_LONGDOUBLE;
    }
    break;
  case 'C':
    type = TYPE_WIDE_CHAR;
    c = 'c';
    break;
  case 'S':
    type = TYPE_WIDE_STRING;
    c = 's';
    break;
  case 'X':
  case 'o':
  case 'u':
  case 'x':
    if ((flags < 0x10) && ((flags & 4U) == 0)) {
      if (flags < 8) {
        if ((flags & 2U) == 0) {
          if ((flags & 1U) == 0) {
            type = TYPE_UINT;
          }
          else {
            type = TYPE_USHORT;
          }
        }
        else {
          type = TYPE_UCHAR;
        }
      }
      else {
        type = TYPE_ULONGINT;
      }
    }
    else {
      type = TYPE_ULONGLONGINT;
    }
    break;
  case 'c':
    if (flags < 8) {
      type = TYPE_CHAR;
    }
    else {
      type = TYPE_WIDE_CHAR;
    }
    break;
  case 'd':
  case 'i':
    if ((flags < 0x10) && ((flags & 4U) == 0)) {
      if (flags < 8) {
        if ((flags & 2U) == 0) {
          if ((flags & 1U) == 0) {
            type = TYPE_INT;
          }
          else {
            type = TYPE_SHORT;
          }
        }
        else {
          type = TYPE_SCHAR;
        }
      }
      else {
        type = TYPE_LONGINT;
      }
    }
    else {
      type = TYPE_LONGLONGINT;
    }
    break;
  case 'n':
    if ((flags < 0x10) && ((flags & 4U) == 0)) {
      if (flags < 8) {
        if ((flags & 2U) == 0) {
          if ((flags & 1U) == 0) {
            type = TYPE_COUNT_INT_POINTER;
          }
          else {
            type = TYPE_COUNT_SHORT_POINTER;
          }
        }
        else {
          type = TYPE_COUNT_SCHAR_POINTER;
        }
      }
      else {
        type = TYPE_COUNT_LONGINT_POINTER;
      }
    }
    else {
      type = TYPE_COUNT_LONGLONGINT_POINTER;
    }
    break;
  case 'p':
    type = TYPE_POINTER;
    break;
  case 's':
    if (flags < 8) {
      type = TYPE_STRING;
    }
    else {
      type = TYPE_WIDE_STRING;
    }
  }
  if (type == TYPE_NONE) goto LAB_0804fa21;
  pcVar3->arg_index = arg_index;
  if (pcVar3->arg_index == 0xffffffff) {
    pcVar3->arg_index = arg_posn;
    arg_posn = arg_posn + 1;
    if (pcVar3->arg_index == 0xffffffff) goto error;
  }
  size1 = pcVar3->arg_index;
  if (size1 < a_allocated) {
LAB_0804f9d3:
    while (a->count <= size1) {
      sVar1 = a->count;
      a->arg[sVar1].type = TYPE_NONE;
      a->count = sVar1 + 1;
    }
    if (a->arg[size1].type == TYPE_NONE) {
      a->arg[size1].type = type;
    }
    else {
      if (a->arg[size1].type != type) {
error:
        if (a->arg != (argument *)0x0) {
          free(a->arg);
        }
        if (d->dir != (char_directive *)0x0) {
          free(d->dir);
        }
        piVar4 = __errno_location();
        *piVar4 = 0x16;
        return -1;
      }
    }
    goto LAB_0804fa21;
  }
  if ((int)a_allocated < 0) {
    local_9c = 0xffffffff;
  }
  else {
    local_9c = a_allocated * 2;
  }
  a_allocated = local_9c;
  if (local_9c <= size1) {
    a_allocated = xsum(size1,1);
  }
  if (a_allocated < 0x10000000) {
    local_98 = a_allocated << 4;
  }
  else {
    local_98 = 0xffffffff;
  }
  if (local_98 != 0xffffffff) {
    if (a->arg == (argument *)0x0) {
      local_94 = (argument *)malloc(local_98);
    }
    else {
      local_94 = (argument *)realloc(a->arg,local_98);
    }
    if (local_94 != (argument *)0x0) {
      a->arg = local_94;
      goto LAB_0804f9d3;
    }
  }
  goto out_of_memory;
LAB_0804fa21:
  pcVar3->conversion = c;
  pcVar3->dir_end = pcVar2;
  d->count = d->count + 1;
  if (d_allocated <= d->count) {
    if ((int)d_allocated < 0) {
      local_90 = 0xffffffff;
    }
    else {
      local_90 = d_allocated * 2;
    }
    d_allocated = local_90;
    if (local_90 < 0x5d1745e) {
      local_8c = local_90 * 0x2c;
    }
    else {
      local_8c = 0xffffffff;
    }
    if ((local_8c == 0xffffffff) ||
       (pcVar3 = (char_directive *)realloc(d->dir,local_8c), pcVar3 == (char_directive *)0x0)) {
out_of_memory:
      if (a->arg != (argument *)0x0) {
        free(a->arg);
      }
      if (d->dir != (char_directive *)0x0) {
        free(d->dir);
      }
      goto out_of_memory_1;
    }
    d->dir = pcVar3;
  }
  goto LAB_0804fad5;
}



size_t xsum(size_t size1,size_t size2)

{
  uint local_18;
  size_t sum;
  
  local_18 = size1 + size2;
  if (local_18 < size1) {
    local_18 = 0xffffffff;
  }
  return local_18;
}



void __libc_csu_fini(void)

{
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx
// WARNING: Removing unreachable block (ram,0x0804fc1e)
// WARNING: Removing unreachable block (ram,0x0804fc20)

void __libc_csu_init(void)

{
  EVP_PKEY_CTX *local_1c;
  
  _init(local_1c);
  return;
}



// WARNING: This is an inlined function

void __i686_get_pc_thunk_bx(void)

{
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

int atexit(__func *__func)

{
  int iVar1;
  
  iVar1 = __cxa_atexit(__func,0,__dso_handle);
  return iVar1;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

int fstat64(int __fd,stat64 *__buf)

{
  int iVar1;
  
  iVar1 = __fxstat64(3,__fd,__buf);
  return iVar1;
}



void __do_global_ctors_aux(void)

{
  code *pcVar1;
  code **ppcVar2;
  
  if (__CTOR_LIST__ != (code *)0xffffffff) {
    ppcVar2 = (code **)&__CTOR_LIST__;
    pcVar1 = __CTOR_LIST__;
    do {
      ppcVar2 = ppcVar2 + -1;
      (*pcVar1)();
      pcVar1 = *ppcVar2;
    } while (pcVar1 != (code *)0xffffffff);
  }
  return;
}



void _fini(void)

{
  __do_global_dtors_aux();
  return;
}


