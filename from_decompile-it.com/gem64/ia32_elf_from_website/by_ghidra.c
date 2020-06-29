typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
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

typedef struct stat stat, *Pstat;

typedef ulonglong __u_quad_t;

typedef __u_quad_t __dev_t;

typedef ulong __ino_t;

typedef uint __mode_t;

typedef uint __nlink_t;

typedef uint __uid_t;

typedef uint __gid_t;

typedef long __blksize_t;

typedef long __blkcnt_t;

typedef struct timespec timespec, *Ptimespec;

typedef long __time_t;

struct timespec {
    __time_t tv_sec;
    long tv_nsec;
};

struct stat {
    __dev_t st_dev;
    ushort __pad1;
    __ino_t st_ino;
    __mode_t st_mode;
    __nlink_t st_nlink;
    __uid_t st_uid;
    __gid_t st_gid;
    __dev_t st_rdev;
    ushort __pad2;
    __off_t st_size;
    __blksize_t st_blksize;
    __blkcnt_t st_blocks;
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
    ulong __unused4;
    ulong __unused5;
};


// WARNING! conflicting data type names: /DWARF/libio.h/_IO_marker - /libio.h/_IO_marker


// WARNING! conflicting data type names: /DWARF/stat.h/stat - /stat.h/stat

typedef struct option option, *Poption;

struct option {
    char * name;
    int has_arg;
    int * flag;
    int val;
};

typedef char * __gnuc_va_list;

typedef __gnuc_va_list va_list;


// WARNING! conflicting data type names: /DWARF/time.h/timespec - /time.h/timespec


// WARNING! conflicting data type names: /DWARF/stdio.h/_IO_FILE - /stdio.h/_IO_FILE

typedef struct _IO_FILE FILE;


// WARNING! conflicting data type names: /DWARF/stddef.h/size_t - /stddef.h/size_t

typedef struct __dirstream __dirstream, *P__dirstream;

typedef struct __dirstream DIR;

struct __dirstream {
};

typedef struct dirent dirent, *Pdirent;

struct dirent {
    __ino_t d_ino;
    __off_t d_off;
    ushort d_reclen;
    uchar d_type;
    char d_name[256];
    undefined field_0x10b;
};


// WARNING! conflicting data type names: /stdarg.h/__gnuc_va_list - /DWARF/stdarg.h/__gnuc_va_list


// WARNING! conflicting data type names: /stdio.h/FILE - /DWARF/stdio.h/FILE

typedef struct evp_pkey_ctx_st evp_pkey_ctx_st, *Pevp_pkey_ctx_st;

struct evp_pkey_ctx_st {
};

typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;


// WARNING! conflicting data type names: /dirent.h/__dirstream - /DWARF/_UNCATEGORIZED_/__dirstream


// WARNING! conflicting data type names: /dirent.h/DIR - /DWARF/dirent.h/DIR


// WARNING! conflicting data type names: /dirent.h/dirent - /DWARF/dirent.h/dirent

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

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = fputs(__s,__stream);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  return piVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = sprintf(__s,__format);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void srand(uint __seed)

{
  srand(__seed);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int open(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = open(__file,__oflag);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = strerror(__errnum);
  return pcVar1;
}



void __cxa_atexit(void)

{
  __cxa_atexit();
  return;
}



void __isoc99_fscanf(void)

{
  __isoc99_fscanf();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int __xstat(int __ver,char *__filename,stat *__stat_buf)

{
  int iVar1;
  
  iVar1 = __xstat(__ver,__filename,__stat_buf);
  return iVar1;
}



void __gmon_start__(void)

{
  __gmon_start__();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void rewind(FILE *__stream)

{
  rewind(__stream);
  return;
}



void __isoc99_sscanf(void)

{
  __isoc99_sscanf();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int vsprintf(char *__s,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = vsprintf(__s,__format,__arg);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = strchr(__s,__c);
  return pcVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * getenv(char *__name)

{
  char *pcVar1;
  
  pcVar1 = getenv(__name);
  return pcVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = calloc(__nmemb,__size);
  return pvVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int system(char *__command)

{
  int iVar1;
  
  iVar1 = system(__command);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = strncpy(__dest,__src,__n);
  return pcVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * fgets(char *__s,int __n,FILE *__stream)

{
  char *pcVar1;
  
  pcVar1 = fgets(__s,__n,__stream);
  return pcVar1;
}



void __libc_start_main(void)

{
  __libc_start_main();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * strrchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = strrchr(__s,__c);
  return pcVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

dirent * readdir(DIR *__dirp)

{
  dirent *pdVar1;
  
  pdVar1 = readdir(__dirp);
  return pdVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

long strtol(char *__nptr,char **__endptr,int __base)

{
  long lVar1;
  
  lVar1 = strtol(__nptr,__endptr,__base);
  return lVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void free(void *__ptr)

{
  free(__ptr);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = fflush(__stream);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int mkstemp(char *__template)

{
  int iVar1;
  
  iVar1 = mkstemp(__template);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

DIR * opendir(char *__name)

{
  DIR *pDVar1;
  
  pDVar1 = opendir(__name);
  return pDVar1;
}



void getopt_long(void)

{
  getopt_long();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = fclose(__stream);
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

FILE * fopen(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = fopen(__filename,__modes);
  return pFVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = strcpy(__dest,__src);
  return pcVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int chdir(char *__path)

{
  int iVar1;
  
  iVar1 = chdir(__path);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int putenv(char *__string)

{
  int iVar1;
  
  iVar1 = putenv(__string);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int closedir(DIR *__dirp)

{
  int iVar1;
  
  iVar1 = closedir(__dirp);
  return iVar1;
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

char * strstr(char *__haystack,char *__needle)

{
  char *pcVar1;
  
  pcVar1 = strstr(__haystack,__needle);
  return pcVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int setvbuf(FILE *__stream,char *__buf,int __modes,size_t __n)

{
  int iVar1;
  
  iVar1 = setvbuf(__stream,__buf,__modes,__n);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int remove(char *__filename)

{
  int iVar1;
  
  iVar1 = remove(__filename);
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



// WARNING: Unknown calling convention yet parameter storage is locked

int fputc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = fputc(__c,__stream);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * strtok(char *__s,char *__delim)

{
  char *pcVar1;
  
  pcVar1 = strtok(__s,__delim);
  return pcVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * strcat(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = strcat(__dest,__src);
  return pcVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * getcwd(char *__buf,size_t __size)

{
  char *pcVar1;
  
  pcVar1 = getcwd(__buf,__size);
  return pcVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int rand(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * strdup(char *__s)

{
  char *pcVar1;
  
  pcVar1 = strdup(__s);
  return pcVar1;
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



// WARNING: Removing unreachable block (ram,0x08048e2a)
// WARNING: Removing unreachable block (ram,0x08048e30)

void __do_global_dtors_aux(void)

{
  if (completed_7065 == '\0') {
    completed_7065 = '\x01';
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x08048e78)

void frame_dummy(void)

{
  return;
}



void exit_env(void)

{
  return;
}



void exit_tmp(void)

{
  int iVar1;
  DIR *pDVar2;
  int in_GS_OFFSET;
  DIR *dir;
  int error;
  char tmp [2048];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  if (TMPDIR[0] == '\0') {
    TMPCLEAN = 1;
  }
  else {
    if (TMPCLEAN == 0) {
      chdir(CWD);
      sprintf(tmp,"rm -rf %s/*",TMPDIR);
      if (VERBOSE != 0) {
        fwrite("Removing temporary extension files...",1,0x25,stdout);
      }
      system(tmp);
      sprintf(tmp,"rmdir %s",TMPDIR);
      system(tmp);
      pDVar2 = opendir(TMPDIR);
      if (pDVar2 != (DIR *)0x0) {
        print_warning("could not remove temporary directory %s.\nPlease remove manually.\n",TMPDIR);
      }
      if (VERBOSE != 0) {
        print_done();
      }
      TMPCLEAN = 1;
    }
  }
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



void exit_db(void)

{
  int iVar1;
  int iVar2;
  int in_GS_OFFSET;
  int error;
  char tmp [2048];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  if (TMPDBCLEAN == 0) {
    chdir(CWD);
    if (VERBOSE != 0) {
      fwrite("Removing temporary registration files...",1,0x28,stdout);
    }
    if (TMPDB[0] != '\0') {
      sprintf(tmp,"rm -rf %s",TMPDB);
      iVar2 = system(tmp);
      if (iVar2 != 0) {
        print_warning("could not remove temporary file %s.\nPlease remove manually.\n",TMPDB);
      }
    }
    if (TMP_GISMAN[0] != '\0') {
      sprintf(tmp,"rm -f %s",TMP_GISMAN);
      iVar2 = system(tmp);
      if (iVar2 != 0) {
        print_warning("could not remove temporary file %s.\nPlease remove manually.\n",TMP_GISMAN);
      }
    }
    if (TMP_DESCR[0] != '\0') {
      sprintf(tmp,"rm -f %s",TMP_DESCR);
      iVar2 = system(tmp);
      if (iVar2 != 0) {
        print_warning("could not remove temporary file %s.\nPlease remove manually.\n",TMP_DESCR);
      }
    }
    if (TMP_INFO[0] != '\0') {
      sprintf(tmp,"rm -f %s",TMP_INFO);
      iVar2 = system(tmp);
      if (iVar2 != 0) {
        print_warning("could not remove temporary file %s.\nPlease remove manually.\n",TMP_INFO);
      }
    }
    if (TMP_DEPS[0] != '\0') {
      sprintf(tmp,"rm -f %s",TMP_DEPS);
      iVar2 = system(tmp);
      if (iVar2 != 0) {
        print_warning("could not remove temporary file %s.\nPlease remove manually.\n",TMP_INFO);
      }
    }
    if (TMP_BUGS[0] != '\0') {
      sprintf(tmp,"rm -f %s",TMP_BUGS);
      iVar2 = system(tmp);
      if (iVar2 != 0) {
        print_warning("could not remove temporary file %s.\nPlease remove manually.\n",TMP_INFO);
      }
    }
    if (TMP_AUTHORS[0] != '\0') {
      sprintf(tmp,"rm -f %s",TMP_AUTHORS);
      iVar2 = system(tmp);
      if (iVar2 != 0) {
        print_warning("could not remove temporary file %s.\nPlease remove manually.\n",TMP_INFO);
      }
    }
    if (TMP_HTML[0] != '\0') {
      sprintf(tmp,"rm -f %s",TMP_HTML);
      iVar2 = system(tmp);
      if (iVar2 != 0) {
        print_warning("could not remove temporary file %s.\nPlease remove manually.\n",TMP_HTML);
      }
    }
    if ((VERBOSE == 0) && (TMP_NULL[0] != '\0')) {
      sprintf(tmp,"rm -f %s",TMP_NULL);
      iVar2 = system(tmp);
      if (iVar2 != 0) {
        print_warning("could not remove temporary file %s.\nPlease remove manually.\n",TMP_NULL);
      }
    }
    if (VERBOSE != 0) {
      print_done();
    }
    TMPDBCLEAN = 1;
  }
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



void exit_msg(void)

{
  if (ERROR < 0) {
    fprintf(stdout,"Program exited with an error (code %i). Operation aborted.\n",ERROR);
  }
  else {
    if (WARNINGS == 1) {
      fwrite("Job done but there was one warning. Please check.\n",1,0x32,stdout);
    }
    if (1 < WARNINGS) {
      fprintf(stdout,"Job done but there were %i warnings. Please check.\n",WARNINGS);
    }
  }
  return;
}



void print_error(int err_code,char *msg,...)

{
  va_list ap;
  char buffer [2048];
  
  vsprintf(buffer,msg,&stack0x0000000c);
  fprintf(stderr,"\x1b[1;31m\nERROR:\x1b[0m %s",buffer);
  ERROR = err_code;
                    // WARNING: Subroutine does not return
  exit(err_code);
}



void print_warning(char *msg,...)

{
  int iVar1;
  int in_GS_OFFSET;
  va_list ap;
  char buffer [2048];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  vsprintf(buffer,msg,&stack0x00000008);
  fprintf(stderr,"\x1b[0;33m\nWARNING:\x1b[0m %s",buffer);
  WARNINGS = WARNINGS + 1;
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



void print_done(void)

{
  fwrite(&DAT_080549ee,1,0x11,stdout);
  return;
}



char * basename(char *path)

{
  char *__s;
  char *backup;
  char *element;
  char *copy;
  
  __s = strdup(path);
  element = strtok(__s,"/");
  if (element == (char *)0x0) {
    if (__s != (char *)0x0) {
      free(__s);
    }
    backup = (char *)0x0;
  }
  else {
    backup = strdup(element);
    while (element != (char *)0x0) {
      element = strtok((char *)0x0,"/");
      if ((backup != (char *)0x0) && (element != (char *)0x0)) {
        free(backup);
      }
      if ((element != (char *)0x0) && (*element != '\0')) {
        backup = strdup(element);
      }
    }
    if (__s != (char *)0x0) {
      free(__s);
    }
  }
  return backup;
}



void mkdir_s(char *pathname,char *mode)

{
  int iVar1;
  int in_GS_OFFSET;
  char tmp [5000];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  sprintf(tmp,"mkdir %s --mode=%s -p",pathname,mode);
  system(tmp);
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



int chop(char *string)

{
  bool bVar1;
  size_t sVar2;
  int stop;
  int chopped;
  int i;
  
  chopped = 0;
  i = strlen(string);
  do {
    i = i - 1;
    if (i < 0) break;
    bVar1 = true;
    if ((((string[i] == '\n') || (string[i] == '\t')) || (string[i] == ' ')) ||
       ((string[i] == '\f' || (string[i] == '\r')))) {
      chopped = chopped + 1;
      bVar1 = false;
    }
  } while (!bVar1);
  sVar2 = strlen(string);
  string[sVar2 - chopped] = '\0';
  return chopped;
}



int insert_str(char *str,int pos,char **strarr)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  int in_GS_OFFSET;
  int len;
  int j;
  int n;
  char last [2048];
  char insert [2048];
  char save [2048];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  n = 0;
  while (strarr[n] != (char *)0x0) {
    n = n + 1;
  }
  if ((pos < 0) || (n < pos)) {
    print_error(-0x15,"insert: invalid line number %i.\n",pos);
  }
  if (pos == n) {
    sVar2 = strlen(str);
    pcVar3 = (char *)malloc(sVar2 + 1);
    strarr[n] = pcVar3;
    strcpy(strarr[n],str);
    strarr[n + 1] = (char *)0x0;
  }
  else {
    strcpy(last,strarr[n + -1]);
    strcpy(insert,strarr[pos]);
    free(strarr[pos]);
    sVar2 = strlen(str);
    pcVar3 = (char *)malloc(sVar2 + 1);
    strarr[pos] = pcVar3;
    strcpy(strarr[pos],str);
    j = pos;
    while (j < n + -1) {
      strcpy(save,strarr[j + 1]);
      free(strarr[j + 1]);
      sVar2 = strlen(insert);
      pcVar3 = (char *)malloc(sVar2 + 1);
      strarr[j + 1] = pcVar3;
      strcpy(strarr[j + 1],insert);
      strcpy(insert,save);
      j = j + 1;
    }
    sVar2 = strlen(last);
    pcVar3 = (char *)malloc(sVar2 + 1);
    strarr[n] = pcVar3;
    strcpy(strarr[n],last);
    strarr[n + 1] = (char *)0x0;
  }
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return n + 2;
}



int delete_str(int pos,char **strarr)

{
  size_t sVar1;
  char *pcVar2;
  int i;
  
  i = 0;
  while (strarr[i] != (char *)0x0) {
    i = i + 1;
  }
  if ((pos < 0) || (i < pos)) {
    print_error(-0x15,"delete: invalid line number %i.\n",pos);
  }
  i = pos;
  while (strarr[i] != (char *)0x0) {
    free(strarr[i]);
    if (strarr[i + 1] != (char *)0x0) {
      sVar1 = strlen(strarr[i + 1]);
      pcVar2 = (char *)malloc(sVar1 + 1);
      strarr[i] = pcVar2;
      strcpy(strarr[i],strarr[i + 1]);
    }
    i = i + 1;
  }
  strarr[i + -1] = (char *)0x0;
  return i + -1;
}



int find_pos(char *str,char **strarr,int start)

{
  char *pcVar1;
  int j;
  int i;
  
  i = 0;
  while (strarr[i] != (char *)0x0) {
    i = i + 1;
  }
  if ((-1 < start) && (start <= i)) {
    j = start;
    while( true ) {
      if (i <= j) {
        return -1;
      }
      pcVar1 = strstr(strarr[j],str);
      if (pcVar1 != (char *)0x0) break;
      j = j + 1;
    }
    return j;
  }
                    // WARNING: Subroutine does not return
  exit(-0x15);
}



void dump_str(FILE *f,char **strarr)

{
  int i;
  
  i = 0;
  while (strarr[i] != (char *)0x0) {
    fprintf((FILE *)f,"%i: %s",i,strarr[i]);
    i = i + 1;
  }
  return;
}



void get_package_name(char *path,char *name)

{
  int iVar1;
  FILE *stream;
  char *pcVar2;
  int in_GS_OFFSET;
  FILE *f;
  char tmp [2048];
  char file [2048];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  sprintf(file,"%s/%s",path,&DAT_08054a6a);
  stream = (FILE *)fopen(file,"r");
  if (stream == (FILE *)0x0) {
    print_error(-6,"\'name\' file not readable.\n");
  }
  else {
    pcVar2 = nc_fgets_nb(tmp,0x800,stream);
    if (pcVar2 == (char *)0x0) {
      fclose((FILE *)stream);
      print_error(-6,"invalid or missing extension name.\n");
    }
    else {
      chop(tmp);
      strcpy(name,tmp);
    }
  }
  fclose((FILE *)stream);
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



char * nc_fgets(char *s,int size,FILE *stream)

{
  char *__dest;
  char *tmp;
  char *hashmark;
  
  __dest = fgets(s,size,(FILE *)stream);
  if (__dest == (char *)0x0) {
    s = (char *)0x0;
  }
  else {
    __dest = strchr(s,0x23);
    if (__dest != (char *)0x0) {
      if (s == __dest) {
        s = nc_fgets(s,size,stream);
      }
      else {
        __dest = (char *)malloc(0x800);
        strcpy(__dest,s);
        __dest = strtok(__dest,"#");
        sprintf(s,"%s\n",__dest);
        free(__dest);
      }
    }
  }
  return s;
}



char * nc_fgets_html(char *s,int size,FILE *stream)

{
  char *__src;
  size_t sVar1;
  char *__haystack;
  char *pcVar2;
  int space;
  char *insert;
  char *pos;
  char *tag_content;
  char *tag_insert;
  char *tag_2;
  char *tag;
  char *tmp;
  char *hashmark;
  
  __src = fgets(s,size,(FILE *)stream);
  if (__src == (char *)0x0) {
    s = (char *)0x0;
  }
  else {
    sVar1 = strlen(s);
    __src = (char *)malloc(sVar1 + 1);
    sVar1 = strlen(s);
    __haystack = (char *)malloc(sVar1 + 1);
    pos = s;
    insert = __src;
    while (*pos != '\0') {
      if (*pos == '<') {
        tag = pos;
        pos = pos + -1;
        if (s <= pos) {
          if (*pos == ' ') {
            space = 1;
          }
          else {
            space = 0;
          }
        }
        while (*tag != '\0') {
          *__haystack = *tag;
          *__haystack = *__haystack + '\x01';
          if (*tag == '>') {
            *__haystack = '\0';
            if (tag[1] != '\n') {
              pcVar2 = strstr(__haystack,"<br>");
              if ((pcVar2 != (char *)0x0) && (__src < insert)) {
                *insert = '\n';
                *insert = *insert + '\x01';
              }
              pcVar2 = strstr(__haystack,"<BR>");
              if ((pcVar2 != (char *)0x0) && (__src < insert)) {
                *insert = '\n';
                *insert = *insert + '\x01';
              }
              pcVar2 = strstr(__haystack,"<p>");
              if (pcVar2 != (char *)0x0) {
                if (__src < insert) {
                  *insert = '\n';
                  *insert = *insert + '\x01';
                }
                *insert = '\n';
                *insert = *insert + '\x01';
              }
              pcVar2 = strstr(__haystack,"<P>");
              if (pcVar2 != (char *)0x0) {
                if (__src < insert) {
                  *insert = '\n';
                  *insert = *insert + '\x01';
                }
                *insert = '\n';
                *insert = *insert + '\x01';
              }
            }
            pos = tag;
            if ((*tag == ' ') && (space == 1)) {
              pos = tag + 1;
              space = 0;
            }
            break;
          }
          tag = tag + 1;
        }
      }
      if (*pos != '>') {
        *insert = *pos;
        insert = insert + 1;
      }
      pos = pos + 1;
    }
    *insert = '\0';
    strcpy(s,__src);
    free(__src);
    free(__haystack);
    __src = strchr(s,0x23);
    if (__src != (char *)0x0) {
      if (s == __src) {
        s = nc_fgets_html(s,size,stream);
      }
      else {
        __src = (char *)malloc(0x800);
        strcpy(__src,s);
        __src = strtok(__src,"#");
        sprintf(s,"%s\n",__src);
        free(__src);
      }
    }
  }
  return s;
}



int is_text(char *s)

{
  int nonws;
  int i;
  
  i = strlen(s);
  do {
    i = i - 1;
    if (i < 0) {
      return 0;
    }
  } while ((((s[i] == ' ') || (s[i] == '\t')) || (s[i] == '\n')) ||
          ((s[i] == '\f' || (s[i] == '\r'))));
  return 1;
}



char * nc_fgets_nb(char *s,int size,FILE *stream)

{
  char *__dest;
  int iVar1;
  char *tmp;
  char *hashmark;
  
  __dest = fgets(s,size,(FILE *)stream);
  if (__dest == (char *)0x0) {
    s = (char *)0x0;
  }
  else {
    iVar1 = is_text(s);
    if (iVar1 == 0) {
      s = nc_fgets_nb(s,size,stream);
    }
    else {
      __dest = strchr(s,0x23);
      if (__dest != (char *)0x0) {
        if (s == __dest) {
          s = nc_fgets_nb(s,size,stream);
        }
        else {
          __dest = (char *)malloc(0x800);
          strcpy(__dest,s);
          __dest = strtok(__dest,"#");
          sprintf(s,"%s\n",__dest);
          free(__dest);
        }
      }
    }
  }
  return s;
}



void dump_ascii(char *file,char *heading)

{
  int iVar1;
  FILE *stream;
  char *pcVar2;
  int in_GS_OFFSET;
  FILE *f;
  char tmp [2048];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  fprintf(stdout,"%s\n",heading);
  stream = (FILE *)fopen(file,"r");
  if (stream == (FILE *)0x0) {
    fwrite("  No information available.\n",1,0x1c,stdout);
  }
  else {
    while( true ) {
      pcVar2 = nc_fgets_html(tmp,0x800,stream);
      if (pcVar2 == (char *)0x0) break;
      fprintf(stdout,"  %s",tmp);
    }
    fputc(10,stdout);
    fclose((FILE *)stream);
  }
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



void dump_plain(char *file,char *tmpfile)

{
  int iVar1;
  FILE *__stream;
  int *piVar2;
  char *pcVar3;
  FILE *stream;
  int in_GS_OFFSET;
  FILE *f_out;
  FILE *f_in;
  char tmp [2048];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  memcpy(tmpfile,"/tmp/grass.extensions.db.XXXXXX",0x20);
  mkstemp(tmpfile);
  __stream = fopen(tmpfile,"w+");
  if (__stream == (FILE *)0x0) {
    piVar2 = __errno_location();
    pcVar3 = strerror(*piVar2);
    print_error(-0x17,
                "could not create temp file \'%s\': %s\n \t\tMake sure that directory /tmp exists on your system and you have write permission.\n"
                ,tmpfile,pcVar3);
  }
  atexit(exit_db);
  stream = (FILE *)fopen(file,"r");
  while( true ) {
    pcVar3 = nc_fgets(tmp,0x800,stream);
    if (pcVar3 == (char *)0x0) break;
    fprintf(__stream,tmp);
  }
  fclose((FILE *)stream);
  fclose(__stream);
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



void dump_html(char *file,char *tmpfile)

{
  int iVar1;
  FILE *__stream;
  int *piVar2;
  char *pcVar3;
  FILE *stream;
  int iVar4;
  int in_GS_OFFSET;
  int fd;
  FILE *f_out;
  FILE *f_in;
  char line [2048];
  char tmp [2048];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  memcpy(tmpfile,"/tmp/grass.extensions.db.XXXXXX",0x20);
  mkstemp(tmpfile);
  __stream = fopen(tmpfile,"w+");
  if (__stream == (FILE *)0x0) {
    piVar2 = __errno_location();
    pcVar3 = strerror(*piVar2);
    print_error(-0x17,
                "could not create temp file \'%s\': %s\n \t\tMake sure that directory /tmp exists on your system and you have write permission.\n"
                ,tmpfile,pcVar3);
  }
  atexit(exit_db);
  stream = (FILE *)fopen(file,"r");
  while( true ) {
    pcVar3 = nc_fgets(line,0x800,stream);
    if (pcVar3 == (char *)0x0) break;
    chop(line);
    iVar4 = is_text(line);
    if (iVar4 == 0) {
      fwrite(&DAT_08054b8b,1,4,__stream);
    }
    else {
      sprintf(tmp,"%s <br>\n",line);
      fprintf(__stream,tmp);
    }
  }
  fclose((FILE *)stream);
  fclose(__stream);
  close(fd);
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



void list_binaries(char *package)

{
  int iVar1;
  DIR *__dirp;
  int iVar2;
  int in_GS_OFFSET;
  stat buf;
  int n_dirs;
  dirent *dir_entry;
  DIR *dir;
  char tmp [2048];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  n_dirs = 0;
  fwrite("Binary installation files\n",1,0x1a,stdout);
  __dirp = opendir(package);
  if (__dirp == (DIR *)0x0) {
    fwrite("  None.\n\n",1,9,stdout);
  }
  else {
    dir_entry = (dirent *)readdir(__dirp);
    while (dir_entry != (dirent *)0x0) {
      iVar2 = strcmp(dir_entry->d_name,".");
      if (iVar2 != 0) {
        iVar2 = strcmp(dir_entry->d_name,"..");
        if (iVar2 != 0) {
          iVar2 = strcmp(dir_entry->d_name,"src");
          if (iVar2 != 0) {
            sprintf(tmp,"%s/%s",package,dir_entry->d_name);
            stat(tmp,(stat *)&buf);
            if ((buf.st_mode & 0xf000) == 0x4000) {
              if (n_dirs == 0) {
                fprintf(stdout,"  %s",dir_entry->d_name);
              }
              else {
                fprintf(stdout,", %s",dir_entry->d_name);
              }
              n_dirs = n_dirs + 1;
            }
          }
        }
      }
      dir_entry = (dirent *)readdir(__dirp);
    }
    if (n_dirs == 0) {
      fwrite("  None.",1,7,stdout);
    }
    fwrite(&DAT_08054bd4,1,2,stdout);
  }
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



int binaries_exist(char *package,char *binaries)

{
  int iVar1;
  DIR *__dirp;
  int iVar2;
  int in_GS_OFFSET;
  stat buf;
  dirent *dir_entry;
  DIR *dir;
  char tmp [2048];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  __dirp = opendir(package);
  if (__dirp == (DIR *)0x0) {
    iVar2 = 0;
  }
  else {
    dir_entry = (dirent *)readdir(__dirp);
    while (dir_entry != (dirent *)0x0) {
      iVar2 = strcmp(dir_entry->d_name,".");
      if (iVar2 != 0) {
        iVar2 = strcmp(dir_entry->d_name,"..");
        if (iVar2 != 0) {
          iVar2 = strcmp(dir_entry->d_name,"src");
          if (iVar2 != 0) {
            sprintf(tmp,"%s/%s",package,dir_entry->d_name);
            stat(tmp,(stat *)&buf);
            if ((buf.st_mode & 0xf000) == 0x4000) {
              iVar2 = strcmp(dir_entry->d_name,binaries);
              if (iVar2 == 0) {
                iVar2 = 1;
                goto LAB_0804aa95;
              }
            }
          }
        }
      }
      dir_entry = (dirent *)readdir(__dirp);
    }
    iVar2 = 0;
  }
LAB_0804aa95:
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return iVar2;
}



int check_filetype(char *myfile)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = strstr(myfile,".tar.gz");
  if (pcVar1 == (char *)0x0) {
    pcVar1 = strstr(myfile,".tgz");
    if (pcVar1 == (char *)0x0) {
      pcVar1 = strstr(myfile,".tar.bz2");
      if (pcVar1 == (char *)0x0) {
        pcVar1 = strstr(myfile,".tbz");
        if (pcVar1 == (char *)0x0) {
          pcVar1 = strstr(myfile,".zip");
          if (pcVar1 == (char *)0x0) {
            pcVar1 = strstr(myfile,".tar");
            if (pcVar1 == (char *)0x0) {
              iVar2 = 0;
            }
            else {
              iVar2 = 4;
            }
          }
          else {
            iVar2 = 3;
          }
        }
        else {
          iVar2 = 2;
        }
      }
      else {
        iVar2 = 2;
      }
    }
    else {
      iVar2 = 1;
    }
  }
  else {
    iVar2 = 1;
  }
  return iVar2;
}



void wget_extension(char *url)

{
  int iVar1;
  int iVar2;
  int in_GS_OFFSET;
  int error;
  char str [2048];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  fwrite("Downloading...",1,0xe,stdout);
  if (VERBOSE == 0) {
    sprintf(str,"wget -N -q %s",url);
  }
  else {
    sprintf(str,"wget -N %s",url);
  }
  iVar2 = system(str);
  if (iVar2 == -1) {
    print_error(-0x14,"could not run \'wget\' to download extension. Is it installed?\n");
  }
  if (0 < iVar2) {
    print_error(-0x14,"running command \'%s\'.\n",str);
  }
  print_done();
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



void su(char *gisbase,char *cmd)

{
  int iVar1;
  ulong next;
  int iVar2;
  FILE *__stream;
  int *piVar3;
  int in_GS_OFFSET;
  FILE *f;
  int error;
  char tmpfile [2048];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  next = next * 0x41c64e6d + 0xd431 >> 0x10 & 0x7fff;
  srand(next);
  iVar2 = rand();
  sprintf(tmpfile,"%s/gem.test.%i",gisbase,iVar2);
  __stream = fopen(tmpfile,"w+");
  piVar3 = __errno_location();
  if (*piVar3 == 0xd) {
    print_error(-5,
                "You don\'t have write access to your local GRASS installation.\nPlease consult your system administrator.\n"
               );
  }
  else {
    remove(tmpfile);
    fclose(__stream);
    iVar2 = system(cmd);
    if (iVar2 != 0) {
      print_error(-9,"could not run \'%s\'.\n",cmd);
    }
  }
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



int vercmp(int major,int minor,int revision,int major2,int minor2,int revision2)

{
  int iVar1;
  
  if (((major == major2) && (minor == minor2)) && (revision == revision2)) {
    iVar1 = 0;
  }
  else {
    if (major < major2) {
      iVar1 = -1;
    }
    else {
      if (major2 < major) {
        iVar1 = 1;
      }
      else {
        if (minor < minor2) {
          iVar1 = -1;
        }
        else {
          if (minor2 < minor) {
            iVar1 = 1;
          }
          else {
            if (revision < revision2) {
              iVar1 = -1;
            }
            else {
              if (revision2 < revision) {
                iVar1 = 1;
              }
              else {
                iVar1 = 0;
              }
            }
          }
        }
      }
    }
  }
  return iVar1;
}



char * depstr(char *package,char *gisbase)

{
  int iVar1;
  bool bVar2;
  FILE *stream;
  int *piVar3;
  char *__dest;
  int iVar4;
  char *pcVar5;
  int in_GS_OFFSET;
  FILE *f_deps;
  int error;
  int first;
  char *str;
  char short_name [2048];
  char line [2048];
  char file [2048];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  memcpy(file,"../depends",0xb);
  stream = (FILE *)fopen(file,"r");
  if (stream == (FILE *)0x0) {
    piVar3 = __errno_location();
    if (*piVar3 == 2) {
      __dest = "";
      goto LAB_0804b001;
    }
    piVar3 = __errno_location();
    __dest = strerror(*piVar3);
    print_error(-0x11,"checking for file \'%s\': %s\n",file,__dest);
  }
  bVar2 = true;
  __dest = (char *)malloc(0x800);
  while( true ) {
    pcVar5 = nc_fgets_nb(line,0x800,stream);
    if (pcVar5 == (char *)0x0) break;
    if (line[0] != '\0') {
      iVar4 = __isoc99_sscanf(line,&DAT_08054d32,short_name);
      if (0 < iVar4) {
        iVar4 = strcmp("GRASS",short_name);
        if (iVar4 != 0) {
          if (bVar2) {
            strcat(__dest,"\t");
            strcat(__dest,short_name);
            bVar2 = false;
          }
          else {
            strcat(__dest,",");
            strcat(__dest,short_name);
          }
        }
      }
    }
  }
  fclose((FILE *)stream);
LAB_0804b001:
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return __dest;
}



void register_extension(char *gisbase,char *bins,char *pkg_short_name,int pkg_major,int pkg_minor,
                       int pkg_revision)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FILE *stream;
  int *piVar6;
  FILE *__stream;
  char *__src;
  int iVar7;
  int in_GS_OFFSET;
  int revision;
  int minor;
  int major;
  FILE *f_out;
  FILE *f_in;
  int ext_exists;
  int copy_thru;
  int must_register;
  int db_exists;
  int error;
  int n_lines;
  char deps [2048];
  char inst_bins [2048];
  char short_name [2048];
  char str [2048];
  char file [2048];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  bVar2 = true;
  sprintf(file,"%s/etc/extensions.db",gisbase);
  stream = (FILE *)fopen(file,"r");
  if (stream == (FILE *)0x0) {
    piVar6 = __errno_location();
    if (*piVar6 == 2) {
      bVar2 = false;
    }
    else {
      fclose((FILE *)0x0);
      piVar6 = __errno_location();
      __src = strerror(*piVar6);
      print_error(-0xf,"checking for file \'%s\': %s\n",file,__src);
    }
  }
  if (bVar2) {
    memcpy(TMPDB,"/tmp/grass.extensions.db.XXXXXX",0x20);
    mkstemp(TMPDB);
    __stream = fopen(TMPDB,"w+");
    if (__stream == (FILE *)0x0) {
      piVar6 = __errno_location();
      __src = strerror(*piVar6);
      print_error(-0xf,
                  "could not create temp file \'%s\': %s\n \t\t\t\t\t\t\tMake sure that directory /tmp exists on your system and you have write permission.\n"
                  ,TMPDB,__src);
    }
    atexit(exit_db);
    n_lines = 0;
    bVar4 = true;
    bVar5 = false;
    while( true ) {
      __src = nc_fgets_nb(str,0x800,stream);
      if (__src == (char *)0x0) break;
      n_lines = n_lines + 1;
      bVar3 = true;
      __isoc99_sscanf(str,"%s\t%i.%i.%i\t%s\t%s",short_name,&major,&minor,&revision,inst_bins,deps);
      iVar7 = strcmp(short_name,pkg_short_name);
      if (iVar7 == 0) {
        bVar5 = true;
        iVar7 = vercmp(major,minor,revision,pkg_major,pkg_minor,pkg_revision);
        if (FORCE == 0) {
          if (iVar7 < 0) {
            print_error(-0x10,
                        "Extension \'%s\' with lower version (%i.%i.%i) already installed. You can use -f to overwrite this version, if you know what you are doing.\n"
                        ,pkg_short_name,major,minor,revision);
          }
          else {
            print_error(-0x10,
                        "Extension \'%s\' with same or higher version (%i.%i.%i) already installed. You can use -f to overwrite this version, if you know what you are doing.\n"
                        ,pkg_short_name,major,minor,revision);
          }
        }
        if (FORCE != 0) {
          if (iVar7 == 0) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
            bVar3 = false;
          }
        }
      }
      if (bVar3) {
        fprintf(__stream,str);
        fflush(__stream);
      }
    }
    if (bVar4) {
      if (bVar5) {
        __src = depstr(pkg_short_name,gisbase);
        strcpy(deps,__src);
        fprintf(__stream,"%s\t%i.%i.%i\t%s\t%s\n",short_name,pkg_major,pkg_minor,pkg_revision,
                inst_bins,deps);
      }
      else {
        __src = depstr(pkg_short_name,gisbase);
        strcpy(deps,__src);
        fprintf(__stream,"%s\t%i.%i.%i\t%s\t%s\n",pkg_short_name,pkg_major,pkg_minor,pkg_revision,
                bins,deps);
      }
    }
    fclose(__stream);
    fclose((FILE *)stream);
  }
  if ((n_lines == 0) || (!bVar2)) {
    memcpy(TMPDB,"/tmp/grass.extensions.db.XXXXXX",0x20);
    mkstemp(TMPDB);
    __stream = fopen(TMPDB,"w+");
    if (__stream == (FILE *)0x0) {
      piVar6 = __errno_location();
      __src = strerror(*piVar6);
      print_error(-0xf,
                  "could not create temp db \'%s\': %s\n \t\t\t\t\tMake sure that directory /tmp exists on your system and you have write permission.\n"
                  ,file,__src);
    }
    atexit(exit_db);
    __src = depstr(pkg_short_name,gisbase);
    strcpy(deps,__src);
    fprintf(__stream,"%s\t%i.%i.%i\t%s\t%s\n",pkg_short_name,pkg_major,pkg_minor,pkg_revision,bins,
            deps);
    fclose(__stream);
  }
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



void deregister_extension(char *package,char *pkg_short_name,char *gisbase)

{
  int iVar1;
  bool bVar2;
  FILE *stream;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  int in_GS_OFFSET;
  int revision;
  int minor;
  int major;
  int found_ext;
  FILE *f_out;
  FILE *f_in;
  int copy_thru;
  int db_exists;
  int error;
  char deps [2048];
  char inst_bins [2048];
  char short_name [2048];
  char str [2048];
  char file [2048];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  bVar2 = false;
  sprintf(file,"%s/etc/extensions.db",gisbase);
  stream = (FILE *)fopen(file,"r");
  if (stream == (FILE *)0x0) {
    piVar3 = __errno_location();
    if ((*piVar3 == 2) && (FORCE == 0)) {
      fclose((FILE *)0x0);
      print_error(-0x13,"could not deregister: no extensions installed\n");
    }
    else {
      if (FORCE == 0) {
        fclose((FILE *)0x0);
        piVar3 = __errno_location();
        pcVar4 = strerror(*piVar3);
        print_error(-0x13,"checking for file \'%s\': %s\n",file,pcVar4);
      }
    }
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    bVar2 = false;
    memcpy(TMPDB,"/tmp/grass.extensions.db.XXXXXX",0x20);
    mkstemp(TMPDB);
    f_out = (FILE *)fopen(TMPDB,"w+");
    if ((f_out == (FILE *)0x0) && (FORCE == 0)) {
      piVar3 = __errno_location();
      pcVar4 = strerror(*piVar3);
      print_error(-0x13,
                  "could not create temp db \'%s\': %s\n \t\t\t\t\t\t\tMake sure that directory /tmp exists on your system and you have write permission.\n"
                  ,file,pcVar4);
    }
    else {
      bVar2 = true;
      atexit(exit_db);
    }
  }
  if (bVar2) {
    bVar2 = false;
    while (pcVar4 = nc_fgets_nb(str,0x800,stream), pcVar4 != (char *)0x0) {
      iVar5 = __isoc99_sscanf(str,"%s\t%i.%i.%i\t%s\t%s",short_name,&major,&minor,&revision,
                              inst_bins,deps);
      if (0 < iVar5) {
        iVar5 = strcmp(pkg_short_name,short_name);
        if (iVar5 == 0) {
          bVar2 = true;
        }
        else {
          pcVar4 = strstr(deps,pkg_short_name);
          if ((pcVar4 != (char *)0x0) && (FORCE == 0)) {
            print_error(-0x13,"cannot uninstall extension \'%s\' it is needed by \'%s\'.\n",
                        pkg_short_name,short_name);
          }
          fprintf((FILE *)f_out,str);
        }
      }
    }
    if (!bVar2) {
      print_error(-0x13,"no extension \'%s\' registered/installed in \'%s\'.\n",pkg_short_name,
                  gisbase);
    }
    fclose((FILE *)stream);
    fclose((FILE *)f_out);
  }
  if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void check_dependencies(char *package,char *gisbase,char *grass_version)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  FILE *stream;
  int *local_2878;
  char *pcVar4;
  FILE *stream_00;
  int iVar5;
  int in_GS_OFFSET;
  int *local_287c;
  int dep_revision;
  int dep_minor;
  int dep_major;
  int revision;
  int minor;
  int major;
  FILE *f_db;
  FILE *f_deps;
  int satisfied;
  int db_exists;
  int error;
  char dep_short_name [2048];
  char short_name [2048];
  char dbstr [2048];
  char str [2048];
  char file [2048];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  if (FORCE == 0) {
    stream = (FILE *)fopen("../depends","r");
    if (stream == (FILE *)0x0) {
      local_2878 = __errno_location();
      if (*local_2878 == 2) {
        fprintf(stderr,"\n%s/depends ENOENT\n",package);
        goto LAB_0804be67;
      }
      fclose((FILE *)0x0);
      local_2878 = __errno_location();
      pcVar4 = strerror(*local_2878);
      print_error(-0x11,"checking for file \'%s\': %s\n",file,pcVar4);
    }
    bVar2 = true;
    sprintf(file,"%s/etc/extensions.db",gisbase);
    stream_00 = (FILE *)fopen(file,"r");
    if (stream_00 == (FILE *)0x0) {
      local_2878 = __errno_location();
      if (*local_2878 == 2) {
        bVar2 = false;
      }
      else {
        fclose((FILE *)0x0);
        local_2878 = __errno_location();
        pcVar4 = strerror(*local_2878);
        print_error(-0x11,"checking for file \'%s\': %s\n",file,pcVar4);
      }
    }
    while (pcVar4 = nc_fgets_nb(str,0x800,stream), pcVar4 != (char *)0x0) {
      major = 0;
      minor = 0;
      revision = 0;
      dep_major = 0;
      dep_minor = 0;
      dep_revision = 0;
      local_2878 = &dep_revision;
      local_287c = &dep_minor;
      iVar5 = __isoc99_sscanf(str,"%s\t%i.%i.%i",dep_short_name,&dep_major,local_287c,local_2878);
      if (0 < iVar5) {
        iVar5 = strcmp(dep_short_name,"GRASS");
        if (iVar5 == 0) {
          __isoc99_sscanf(grass_version,"%i.%i.%i",&major,&minor,&revision);
          iVar5 = vercmp(major,minor,revision,dep_major,dep_minor,dep_revision);
          if (iVar5 < 0) {
            print_error(-0x12,
                        "installed version (%s) of GRASS is too low. Required version is %i.%i.%i\n"
                        ,grass_version,dep_major,dep_minor,dep_revision);
          }
        }
        else {
          if (bVar2) {
            bVar3 = false;
            rewind((FILE *)stream_00);
            while (pcVar4 = nc_fgets_nb(dbstr,0x800,stream_00), pcVar4 != (char *)0x0) {
              major = 0;
              minor = 0;
              revision = 0;
              local_2878 = &revision;
              local_287c = &minor;
              iVar5 = __isoc99_sscanf(dbstr,"%s\t%i.%i.%i",short_name,&major,local_287c,local_2878);
              if ((0 < iVar5) && (iVar5 = strcmp(short_name,dep_short_name), iVar5 == 0)) {
                local_287c = (int *)dep_minor;
                local_2878 = (int *)dep_revision;
                iVar5 = vercmp(major,minor,revision,dep_major,dep_minor,dep_revision);
                if (iVar5 < 0) {
                  local_2878 = (int *)dep_short_name;
                  local_287c = (int *)revision;
                  print_error(-0x12,
                              "installed version %i.%i.%i of required extension \'%s\' is too low.\n \t\t\t\t\t\t\t\t\t\t\t\t\tRequired version is %i.%i.%i\n"
                              ,major,minor,revision,local_2878,dep_major,dep_minor,dep_revision);
                }
                bVar3 = true;
              }
            }
            if (!bVar3) {
              print_error(-0x12,"required extension \'%s\' not found in \'%s\'.\n",dep_short_name,
                          gisbase,local_287c,local_2878);
            }
          }
        }
      }
    }
    if (bVar2) {
      fclose((FILE *)stream_00);
    }
    fclose((FILE *)stream);
  }
LAB_0804be67:
  if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



int is_submenu(char *item)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar1 = strchr(item,0x5b);
  if (pcVar1 == (char *)0x0) {
    iVar2 = 0;
  }
  else {
    pcVar1 = strrchr(item,0x5d);
    if (pcVar1 == (char *)0x0) {
      iVar2 = 0;
    }
    else {
      pcVar1 = strchr(item,0x5b);
      pcVar3 = strrchr(item,0x5d);
      if (pcVar3 < pcVar1) {
        iVar2 = 0;
      }
      else {
        iVar2 = 1;
      }
    }
  }
  return iVar2;
}



int check_ext_menu(char **tcl_lines)

{
  int pos;
  int idx;
  
  pos = find_pos("\"&Xtns\" all options 1",tcl_lines,0);
  if (pos == -1) {
    pos = find_pos("\"&Help\" all options",tcl_lines,0);
    if (pos == -1) {
      pos = find_pos("}]",tcl_lines,0);
      if (pos == -1) {
        print_error(-0x15,"could not parse \'menu.tcl\'.\n");
      }
      insert_str(" \"&Xtns\" all options 1 {\n",pos,tcl_lines);
      pos = pos + 1;
      insert_str(" }\n",pos,tcl_lines);
    }
    else {
      insert_str(" \"&Xtns\" all options 1 {\n",pos,tcl_lines);
      pos = pos + 1;
      insert_str(" }\n",pos,tcl_lines);
    }
  }
  return pos;
}



int new_submenu(char *pkg_short_name,char *menu,char **tcl_lines)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  int in_GS_OFFSET;
  int terminator;
  int len;
  char *second_quote;
  char *first_quote;
  int last;
  int insert_here;
  int idx2;
  int idx;
  char searchstr [2048];
  char tmp2 [2048];
  char tmp [2048];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  idx = find_pos("\"&Xtns\" all options",tcl_lines,0);
  last = find_pos("\" all options",tcl_lines,idx + 1);
  last = last + -1;
  if (last == -1) {
    last = find_pos("}]",tcl_lines,0);
  }
  iVar2 = is_submenu(menu);
  if (iVar2 == 0) {
    print_warning("first line not a submenu specifier in \'entries-gisman\'.\n");
    insert_here = -1;
  }
  else {
    pcVar3 = strrchr(menu,0x5d);
    pcVar4 = strchr(menu,0x5b);
    pcVar5 = strchr(menu,0x5b);
    strncpy(tmp,pcVar5 + 1,(size_t)(pcVar3 + -(int)pcVar4));
    (pcVar3 + -(int)pcVar4 + -0x811)[(int)(tmp2 + 0x1010)] = '\0';
    sprintf(searchstr,"{cascad \"%s\"",tmp);
    iVar2 = find_pos(searchstr,tcl_lines,idx);
    if ((iVar2 == -1) || (last <= iVar2)) {
      insert_here = idx + 1;
      idx2 = find_pos("{cascad ",tcl_lines,idx);
      while( true ) {
        if ((idx2 == -1) || (last <= idx2)) goto LAB_0804c31e;
        pcVar3 = strchr(tcl_lines[idx2],0x22);
        pcVar4 = strchr(pcVar3 + 1,0x22);
        strncpy(tmp2,pcVar3 + 1,(size_t)(pcVar4 + -(int)pcVar3));
        (pcVar4 + -(int)pcVar3 + -0x1011)[(int)(searchstr + 0x1810)] = '\0';
        iVar2 = strcmp(tmp,tmp2);
        if (iVar2 < 0) break;
        idx = idx + 1;
        idx2 = find_pos("{cascad ",tcl_lines,idx);
      }
      insert_here = idx2;
LAB_0804c31e:
      sprintf(tmp," \t\t\t%s {} \"\" 1 {\n",searchstr);
      insert_str(tmp,insert_here,tcl_lines);
      insert_str(" \t\t\t}}\n",insert_here + 1,tcl_lines);
      iVar2 = find_pos("}]",tcl_lines,0);
      sprintf(tmp,"#(DO_NOT_REMOVE_THIS_COMMENT) <%s> %s {} \"\" 1 {\n",pkg_short_name,searchstr);
      insert_str(tmp,iVar2 + 1,tcl_lines);
      insert_here = insert_here + 1;
    }
    else {
      print_warning("submenu \'%s\' exists in GIS Manager\'s Xtns menu.\n",tmp);
      insert_here = -1;
    }
  }
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return insert_here;
}



int new_item(char *item,char *menu,char **tcl_lines,int line_no)

{
  int iVar1;
  int iVar2;
  int in_GS_OFFSET;
  int num_tokens;
  char *token;
  char tmp [2048];
  char command [2048];
  char entry [2048];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  chop(item);
  token = strtok(item,";");
  if (token == (char *)0x0) {
    print_warning("invalid token in \'entries-gisman\'.\n");
    line_no = -1;
    goto LAB_0804c5dd;
  }
  strcpy(entry,token);
  num_tokens = 0;
  while (token != (char *)0x0) {
    token = strtok((char *)0x0,";");
    if (token != (char *)0x0) {
      strcpy(command,token);
    }
    num_tokens = num_tokens + 1;
  }
  if (2 < num_tokens) {
    print_warning("invalid number of tokens (%i) in \'entries-gisman\'.\n",num_tokens);
    line_no = -1;
    goto LAB_0804c5dd;
  }
  iVar2 = strcmp(entry,"-");
  if (iVar2 == 0) {
    iVar2 = strcmp(entry,"-");
    if (iVar2 != 0) goto LAB_0804c582;
    memcpy(tmp," \t\t\t {separator}\n",0x12);
  }
  else {
LAB_0804c582:
    sprintf(tmp," \t\t\t {command \"%s\" {} \"%s\" {} -command {%s }}\n",entry,command,command);
  }
  insert_str(tmp,line_no,tcl_lines);
  line_no = line_no + 1;
LAB_0804c5dd:
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return line_no;
}



void register_entries_gisman(char *pkg_short_name,char *gisbase)

{
  int iVar1;
  FILE *stream;
  int *piVar2;
  char *pcVar3;
  FILE *__stream;
  FILE *__stream_00;
  char **tcl_lines;
  size_t sVar4;
  char *pcVar5;
  char *pcVar6;
  int in_GS_OFFSET;
  FILE *f_out;
  FILE *f_in;
  FILE *f_gisman;
  int line_no;
  int n_lines_new;
  int n_lines_org;
  int i;
  int n_lines;
  int n_entries;
  char **line;
  int len;
  char menu [2048];
  char str [2048];
  char file [2048];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  memcpy(file,"../entries-gisman",0x12);
  stream = (FILE *)fopen(file,"r");
  if (stream == (FILE *)0x0) {
    piVar2 = __errno_location();
    if (*piVar2 == 2) goto LAB_0804cd52;
    fclose((FILE *)0x0);
    piVar2 = __errno_location();
    pcVar3 = strerror(*piVar2);
    print_error(-0x15,"checking for file \'%s\': %s\n",file,pcVar3);
  }
  sprintf(file,"%s/etc/dm/menu.tcl",gisbase);
  __stream = fopen(file,"r");
  if (__stream == (FILE *)0x0) {
    piVar2 = __errno_location();
    if (*piVar2 == 2) goto LAB_0804cd52;
    fclose((FILE *)0x0);
    piVar2 = __errno_location();
    pcVar3 = strerror(*piVar2);
    print_error(-0x15,"checking for file \'%s\': %s\n",file,pcVar3);
  }
  memcpy(TMP_GISMAN,"/tmp/grass.extensions.db.XXXXXX",0x20);
  mkstemp(TMP_GISMAN);
  __stream_00 = fopen(TMP_GISMAN,"w+");
  if (__stream_00 == (FILE *)0x0) {
    piVar2 = __errno_location();
    pcVar3 = strerror(*piVar2);
    print_error(-0x15,
                "could not create temp file \'%s\': %s\n \t\t\tMake sure that directory /tmp exists on your system and you have write permission.\n"
                ,TMP_GISMAN,pcVar3);
  }
  atexit(exit_db);
  if (VERBOSE == 0) {
    sprintf(str,
            "mkdir %s/etc/dm/gem-entries &> %s ; cp -f ../entries-gisman %s/etc/dm/gem-entries/%s &> %s ; \t\t\t\t\tcp -f %s/etc/dm/menu.tcl %s/etc/dm/menu.tcl.gem.bak &> %s ; \t\t\t\t\tcp -f %s %s/etc/dm/menu.tcl &> %s ; chmod a+r %s/etc/dm/menu.tcl &> %s ;"
            ,gisbase,TMP_NULL,gisbase,pkg_short_name,TMP_NULL,gisbase,gisbase,TMP_NULL,TMP_GISMAN,
            gisbase,TMP_NULL,gisbase,TMP_NULL);
  }
  else {
    sprintf(str,
            "mkdir --verbose %s/etc/dm/gem-entries ; cp -vf ../entries-gisman %s/etc/dm/gem-entries/%s ; \t\t\t\t\tcp -vf %s/etc/dm/menu.tcl %s/etc/dm/menu.tcl.gem.bak ; \t\t\t\t\tcp -vf %s %s/etc/dm/menu.tcl ; chmod -v a+r %s/etc/dm/menu.tcl ;"
            ,gisbase,gisbase,pkg_short_name,gisbase,gisbase,TMP_GISMAN,gisbase,gisbase);
  }
  strcpy(GISMAN_CMD,str);
  n_entries = 0;
  while (pcVar3 = fgets(str,0x800,(FILE *)stream), pcVar3 != (char *)0x0) {
    n_entries = n_entries + 1;
  }
  if (n_entries != 0) {
    rewind((FILE *)stream);
    n_lines = 0;
    while (pcVar3 = fgets(str,0x800,__stream), pcVar3 != (char *)0x0) {
      n_lines = n_lines + 1;
    }
    if (n_lines != 0) {
      rewind(__stream);
      tcl_lines = (char **)calloc(n_entries * 2 + n_lines + 6,4);
      i = 0;
      while (i < n_entries * 2 + n_lines + 6) {
        tcl_lines[i] = (char *)0x0;
        i = i + 1;
      }
      i = 0;
      while (pcVar3 = fgets(str,0x800,__stream), pcVar3 != (char *)0x0) {
        sVar4 = strlen(str);
        pcVar3 = (char *)malloc(sVar4 + 1);
        tcl_lines[i] = pcVar3;
        strcpy(tcl_lines[i],str);
        i = i + 1;
      }
      check_ext_menu(tcl_lines);
      i = 1;
      while (pcVar3 = nc_fgets_nb(str,0x800,stream), pcVar3 != (char *)0x0) {
        if (i == 1) {
          pcVar3 = strrchr(str,0x5d);
          pcVar5 = strchr(str,0x5b);
          len = (int)(pcVar3 + -(int)pcVar5);
          pcVar6 = strchr(str,0x5b);
          strncpy(menu,pcVar6 + 1,(size_t)(pcVar3 + -(int)pcVar5));
          *(undefined *)((int)&len + len + 3) = 0;
          line_no = new_submenu(pkg_short_name,str,tcl_lines);
          if (line_no < 0) {
            print_warning("no GIS Manager menu entries created.\n");
            break;
          }
          i = 2;
        }
        else {
          line_no = new_item(str,menu,tcl_lines,line_no);
          if (line_no < 0) {
            print_warning("error creating GIS Manager menu entries.\n");
            break;
          }
          i = i + 1;
        }
      }
      i = 0;
      while (tcl_lines[i] != (char *)0x0) {
        fprintf(__stream_00,tcl_lines[i]);
        i = i + 1;
      }
      fflush(__stream_00);
      rewind(__stream_00);
      n_lines_new = 0;
      while (pcVar3 = fgets(str,0x800,__stream_00), pcVar3 != (char *)0x0) {
        n_lines_new = n_lines_new + 1;
      }
      if ((n_lines_new == 0) || (n_lines_new < n_lines)) {
        print_warning("file truncation detected. Retaining orginal file \'menu.tcl\'.\n");
        memcpy(GISMAN_CMD,&DAT_08055722,1);
      }
      fclose(__stream);
      fclose((FILE *)stream);
      fclose(__stream_00);
      i = 0;
      while (i < n_entries * 2 + n_lines + 6) {
        free(tcl_lines[i]);
        i = i + 1;
      }
      free(tcl_lines);
    }
  }
LAB_0804cd52:
  if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void register_entries_gisman2(char *pkg_short_name,char *gisbase)

{
  int iVar1;
  FILE *pFVar2;
  int *piVar3;
  char *pcVar4;
  int in_GS_OFFSET;
  FILE *f_gisman2;
  char str [2048];
  char file [2048];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  memcpy(file,"../entries-gisman2",0x13);
  pFVar2 = fopen(file,"r");
  if (pFVar2 == (FILE *)0x0) {
    piVar3 = __errno_location();
    if (*piVar3 == 2) goto LAB_0804ceb4;
    fclose((FILE *)0x0);
    piVar3 = __errno_location();
    pcVar4 = strerror(*piVar3);
    print_error(-0x20,"checking for file \'%s\': %s\n",file,pcVar4);
  }
  if (VERBOSE == 0) {
    sprintf(str,"mkdir -p %s/etc/gm/Xtns ; cp -f ../entries-gisman2 %s/etc/gm/Xtns/%s.gem ; ",
            gisbase,gisbase,pkg_short_name);
  }
  else {
    sprintf(str,
            "mkdir --verbose -p %s/etc/gm/Xtns ; cp -fv ../entries-gisman2 %s/etc/gm/Xtns/%s.gem ; "
            ,gisbase,gisbase,pkg_short_name);
  }
  strcpy(GISMAN2_CMD,str);
LAB_0804ceb4:
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



int deregister_entries_gisman(char *pkg_short_name,char *gisbase)

{
  int iVar1;
  FILE *__stream;
  int *piVar2;
  char *__s;
  FILE *__stream_00;
  char **strarr;
  size_t sVar3;
  int start_00;
  char *pcVar4;
  int iVar5;
  int in_GS_OFFSET;
  int num_removed;
  char *rq;
  char *lq;
  int end_sub;
  int start_sub;
  int end;
  int start;
  int pos;
  FILE *f_out;
  FILE *f_in;
  int n_lines_new;
  int n_lines_org;
  int i;
  int n_lines;
  char **line;
  char tmp [2048];
  char str [2048];
  char file [2048];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  sprintf(file,"%s/etc/dm/menu.tcl",gisbase);
  __stream = fopen(file,"r");
  if (__stream == (FILE *)0x0) {
    piVar2 = __errno_location();
    if (*piVar2 == 2) {
      num_removed = 0;
      goto LAB_0804d729;
    }
    fclose((FILE *)0x0);
    piVar2 = __errno_location();
    __s = strerror(*piVar2);
    print_error(-0x16,"checking for file \'%s\': %s\n",file,__s);
  }
  memcpy(TMP_GISMAN,"/tmp/grass.extensions.db.XXXXXX",0x20);
  mkstemp(TMP_GISMAN);
  __stream_00 = fopen(TMP_GISMAN,"w+");
  if (__stream_00 == (FILE *)0x0) {
    piVar2 = __errno_location();
    __s = strerror(*piVar2);
    print_error(-0x15,
                "could not create temp file \'%s\': %s\n \t\t\tMake sure that directory /tmp exists on your system and you have write permission.\n"
                ,TMP_GISMAN,__s);
  }
  atexit(exit_db);
  if (VERBOSE == 0) {
    sprintf(str,
            "cp -f %s/etc/dm/menu.tcl %s/etc/dm/menu.tcl.gem.bak &> %s ; \t\t\t\t\t\tcp -f %s %s/etc/dm/menu.tcl &> %s ; chmod a+r %s/etc/dm/menu.tcl &> %s ;"
            ,gisbase,gisbase,TMP_NULL,TMP_GISMAN,gisbase,TMP_NULL,gisbase,TMP_NULL);
  }
  else {
    sprintf(str,
            "cp -vf %s/etc/dm/menu.tcl %s/etc/dm/menu.tcl.gem.bak ; \t\t\t\t\t\tcp -vf %s %s/etc/dm/menu.tcl ; chmod -v a+r %s/etc/dm/menu.tcl ;"
            ,gisbase,gisbase,TMP_GISMAN,gisbase,gisbase);
  }
  strcpy(GISMAN_CMD,str);
  n_lines = 0;
  while( true ) {
    __s = fgets(str,0x800,__stream);
    if (__s == (char *)0x0) break;
    n_lines = n_lines + 1;
  }
  if (n_lines == 0) {
    num_removed = -1;
  }
  else {
    rewind(__stream);
    strarr = (char **)calloc(n_lines + 1,4);
    i = 0;
    while (i < n_lines + 1) {
      strarr[i] = (char *)0x0;
      i = i + 1;
    }
    i = 0;
    while( true ) {
      __s = fgets(str,0x800,__stream);
      if (__s == (char *)0x0) break;
      sVar3 = strlen(str);
      __s = (char *)malloc(sVar3 + 1);
      strarr[i] = __s;
      strcpy(strarr[i],str);
      i = i + 1;
    }
    sprintf(str,"#(DO_NOT_REMOVE_THIS_COMMENT) <%s> {cascad",pkg_short_name);
    start_00 = find_pos(str,strarr,0);
    if (start_00 == -1) {
      print_warning("could not find uninstall information in \'menu.tcl\'.\n");
      num_removed = -1;
    }
    else {
      __s = strchr(strarr[start_00],0x22);
      __s = __s + 1;
      pcVar4 = strchr(__s,0x22);
      strcpy(tmp,__s);
      tmp[(int)(pcVar4 + -(int)__s)] = '\0';
      start_00 = find_pos("\"&Xtns\" all options 1",strarr,0);
      end = find_pos("\" all options",strarr,start_00 + 1);
      end = end + -1;
      if (end == -1) {
        end = find_pos("}]",strarr,0);
      }
      if (start_00 == -1) {
        print_warning("menu \'Xtns\' does not exist.\n");
        num_removed = -1;
      }
      else {
        sprintf(str,"{cascad \"%s\"",tmp);
        start_00 = find_pos(str,strarr,start_00);
        if ((start_00 == -1) || (end < start_00)) {
          print_warning("could not find submenu entry \'%s\' in \'menu.tcl\'.\n",tmp);
          num_removed = -1;
        }
        else {
          iVar5 = find_pos(" \t\t\t}}",strarr,start_00);
          if ((iVar5 == -1) || (end < iVar5)) {
            print_warning("could not find end of submenu entry \'%s\' in \'menu.tcl\'.\n",tmp);
            num_removed = -1;
          }
          else {
            num_removed = 0;
            i = 0;
            while (i < (iVar5 - start_00) + 1) {
              delete_str(start_00,strarr);
              num_removed = num_removed + 1;
              i = i + 1;
            }
            sprintf(str,"#(DO_NOT_REMOVE_THIS_COMMENT) <%s> {cascad",pkg_short_name);
            start_00 = find_pos(str,strarr,0);
            delete_str(start_00,strarr);
            num_removed = num_removed + 1;
            start_00 = find_pos("\"&Xtns\" all options 1",strarr,0);
            iVar5 = find_pos("\" all options",strarr,start_00 + 1);
            if ((iVar5 + -1) - start_00 < 3) {
              i = 0;
              while (i < ((iVar5 + -1) - start_00) + 1) {
                delete_str(start_00,strarr);
                num_removed = num_removed + 1;
                i = i + 1;
              }
            }
            i = 0;
            while (strarr[i] != (char *)0x0) {
              fprintf(__stream_00,strarr[i]);
              i = i + 1;
            }
            fflush(__stream_00);
            rewind(__stream_00);
            n_lines_new = 0;
            while( true ) {
              __s = fgets(str,0x800,__stream_00);
              if (__s == (char *)0x0) break;
              n_lines_new = n_lines_new + 1;
            }
            if (n_lines_new == 0) {
              print_warning("file truncation detected. Retaining orginal file \'menu.tcl\'.\n");
              memcpy(GISMAN_CMD,&DAT_08055722,1);
            }
            fclose(__stream);
            fclose(__stream_00);
            i = 0;
            while (i < n_lines + 1) {
              free(strarr[i]);
              i = i + 1;
            }
            free(strarr);
          }
        }
      }
    }
  }
LAB_0804d729:
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return num_removed;
}



void deregister_entries_gisman2(char *pkg_short_name,char *gisbase)

{
  int iVar1;
  FILE *pFVar2;
  int *piVar3;
  char *pcVar4;
  int in_GS_OFFSET;
  FILE *f_gisman2;
  char str [2048];
  char file [2048];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  sprintf(file,"%s/etc/gm/Xtns/%s.gem",gisbase,pkg_short_name);
  pFVar2 = fopen(file,"r");
  if (pFVar2 == (FILE *)0x0) {
    piVar3 = __errno_location();
    if (*piVar3 == 2) goto LAB_0804d883;
    fclose((FILE *)0x0);
    piVar3 = __errno_location();
    pcVar4 = strerror(*piVar3);
    print_error(-0x21,"checking for file \'%s\': %s\n",file,pcVar4);
  }
  if (VERBOSE == 0) {
    sprintf(str,"rm -f %s/etc/gm/Xtns/%s.gem ; ",gisbase,pkg_short_name);
  }
  else {
    sprintf(str,"rm -vf %s/etc/gm/Xtns/%s.gem ; ",gisbase,pkg_short_name);
  }
  strcpy(GISMAN_CMD,str);
LAB_0804d883:
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



int restore_entries_gisman(char *gisbase)

{
  int iVar1;
  FILE *__stream;
  int *piVar2;
  char *local_2880;
  FILE *__stream_00;
  DIR *__dirp;
  FILE *__stream_01;
  dirent *pdVar3;
  char **tcl_lines;
  size_t sVar4;
  int iVar5;
  FILE *stream;
  char *local_2874;
  char *local_2878;
  int in_GS_OFFSET;
  char *local_287c;
  int n_files;
  int num_restored;
  dirent *ep;
  DIR *dirp;
  FILE *f_out;
  FILE *f_in;
  FILE *f_gisman;
  int line_no;
  int i;
  int n_lines;
  int n_entries;
  char **line;
  int len;
  char pkg_short_name [2048];
  char dir [2048];
  char file [2048];
  char menu [2048];
  char str [2048];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  sprintf(file,"%s/etc/dm/menu.tcl",gisbase);
  __stream = fopen(file,"r");
  if (__stream == (FILE *)0x0) {
    piVar2 = __errno_location();
    if (*piVar2 == 2) {
      num_restored = 0;
      goto LAB_0804e0e6;
    }
    fclose((FILE *)0x0);
    piVar2 = __errno_location();
    local_2880 = strerror(*piVar2);
    print_error(-0x15,"checking for file \'%s\': %s\n",file,local_2880);
  }
  memcpy(TMP_GISMAN,"/tmp/grass.extensions.db.XXXXXX",0x20);
  mkstemp(TMP_GISMAN);
  __stream_00 = fopen(TMP_GISMAN,"w+");
  if (__stream_00 == (FILE *)0x0) {
    piVar2 = __errno_location();
    local_2880 = strerror(*piVar2);
    print_error(-0x15,
                "could not create temp file \'%s\': %s\n \t\t\tMake sure that directory /tmp exists on your system and you have write permission.\n"
                ,TMP_GISMAN,local_2880);
  }
  atexit(exit_db);
  local_2880 = gisbase;
  local_2874 = gisbase;
  if (VERBOSE == 0) {
    local_2878 = TMP_GISMAN;
    local_287c = TMP_NULL;
    sprintf(str,
            "cp -f %s/etc/dm/menu.tcl %s/etc/dm/menu.tcl.gem.bak &> %s ; \t\t\t\t\t\tcp -f %s %s/etc/dm/menu.tcl &> %s ; chmod a+r %s/etc/dm/menu.tcl &> %s ;"
            ,gisbase,gisbase,TMP_NULL,TMP_GISMAN,gisbase,TMP_NULL,gisbase,TMP_NULL);
  }
  else {
    local_287c = TMP_GISMAN;
    local_2878 = gisbase;
    sprintf(str,
            "cp -vf %s/etc/dm/menu.tcl %s/etc/dm/menu.tcl.gem.bak ; \t\t\t\t\t\tcp -vf %s %s/etc/dm/menu.tcl ; chmod -v a+r %s/etc/dm/menu.tcl ;"
            ,gisbase,gisbase,TMP_GISMAN,gisbase,gisbase);
  }
  strcpy(GISMAN_CMD,str);
  sprintf(dir,"%s/etc/dm/gem-entries",gisbase,local_2880,local_287c,local_2878,local_2874);
  __dirp = opendir(dir);
  if (__dirp == (DIR *)0x0) {
    num_restored = 0;
  }
  else {
    n_entries = 0;
    n_files = 0;
    while (pdVar3 = readdir(__dirp), pdVar3 != (dirent *)0x0) {
      sprintf(file,"%s/%s",dir,pdVar3->d_name);
      __stream_01 = fopen(file,"r");
      iVar5 = strcmp(pdVar3->d_name,".");
      if ((iVar5 == 0) || (iVar5 = strcmp(pdVar3->d_name,".."), iVar5 == 0)) {
        fclose(__stream_01);
      }
      else {
        if (__stream_01 == (FILE *)0x0) {
          fclose((FILE *)0x0);
        }
        else {
          while (local_2880 = fgets(str,0x800,__stream_01), local_2880 != (char *)0x0) {
            n_entries = n_entries + 1;
          }
          n_files = n_files + 1;
          fclose(__stream_01);
        }
      }
    }
    closedir(__dirp);
    n_lines = 0;
    while (local_2880 = fgets(str,0x800,__stream), local_2880 != (char *)0x0) {
      n_lines = n_lines + 1;
    }
    if (n_lines == 0) {
      num_restored = 0;
    }
    else {
      rewind(__stream);
      tcl_lines = (char **)calloc(n_entries * 2 + n_files * 5 + n_lines + 1,4);
      i = 0;
      while (i < n_entries * 2 + n_files * 5 + n_lines + 1) {
        tcl_lines[i] = (char *)0x0;
        i = i + 1;
      }
      i = 0;
      while (local_2880 = fgets(str,0x800,__stream), local_2880 != (char *)0x0) {
        sVar4 = strlen(str);
        local_2880 = (char *)malloc(sVar4 + 1);
        tcl_lines[i] = local_2880;
        strcpy(tcl_lines[i],str);
        i = i + 1;
      }
      tcl_lines[i] = (char *)0x0;
      check_ext_menu(tcl_lines);
      __dirp = opendir(dir);
      num_restored = 0;
      while (pdVar3 = readdir(__dirp), pdVar3 != (dirent *)0x0) {
        sprintf(file,"%s/%s",dir,pdVar3->d_name);
        iVar5 = strcmp(pdVar3->d_name,".");
        if (((iVar5 != 0) && (iVar5 = strcmp(pdVar3->d_name,".."), iVar5 != 0)) &&
           (stream = (FILE *)fopen(file,"r"), stream != (FILE *)0x0)) {
          i = 1;
          while (local_2880 = nc_fgets_nb(str,0x800,stream), local_2880 != (char *)0x0) {
            if (i == 1) {
              local_2880 = strrchr(str,0x5d);
              local_2874 = strchr(str,0x5b);
              local_2878 = strchr(str,0x5b);
              strncpy(menu,local_2878 + 1,(size_t)(local_2880 + -(int)local_2874));
              (local_2880 + -(int)local_2874 + -0x1011)[(int)(file + 0x1810)] = '\0';
              line_no = new_submenu(pkg_short_name,str,tcl_lines);
              if (line_no < 0) break;
              i = 2;
              num_restored = num_restored + 1;
            }
            else {
              line_no = new_item(str,menu,tcl_lines,line_no);
              if (line_no < 0) break;
              i = i + 1;
              num_restored = num_restored + 1;
            }
          }
          fclose((FILE *)stream);
        }
      }
      closedir(__dirp);
      i = 0;
      while (tcl_lines[i] != (char *)0x0) {
        fprintf(__stream_00,tcl_lines[i]);
        i = i + 1;
      }
      fflush(__stream_00);
      fclose(__stream);
      fclose(__stream_00);
      i = 0;
      while (i < n_entries * 2 + n_files * 5 + n_lines + 1) {
        free(tcl_lines[i]);
        i = i + 1;
      }
      free(tcl_lines);
    }
  }
LAB_0804e0e6:
  if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
    return num_restored;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void new_ext_html(char *ext,char *gisbase,char **html,int major,int minor,int revision)

{
  int iVar1;
  int pos;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int in_GS_OFFSET;
  int len;
  char *last_char;
  char *first_char;
  int insert_here;
  int end;
  int start;
  int pos3;
  int pos2;
  int pos1;
  char item [2048];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  pos1 = find_pos("<b>Drivers sections:</b>",html,0);
  if ((pos1 < 0) &&
     (pos1 = find_pos("<!-- GEM Extensions StartHTML. Do not delete or change this comment! -->",
                      html,0), pos1 < 0)) {
    print_warning("Unknown format of index.html. Unable to register HTML man pages.\n");
  }
  else {
    pos = find_pos("<hr>",html,pos1);
    iVar2 = find_pos("<h3>Installed extensions:</h3>",html,pos1);
    if (iVar2 == -1) {
      insert_str("<h3>Installed extensions:</h3>\n",pos,html);
      insert_str("<ul>\n",pos + 1,html);
      insert_str("</ul>\n",pos + 2,html);
      insert_str("<p>\n",pos + 3,html);
    }
    start = find_pos("<h3>Installed extensions:</h3>",html,pos1);
    pos = find_pos("</ul>",html,start);
    insert_here = start + 2;
    sprintf(item,"\">%s",ext);
    iVar2 = find_pos(item,html,insert_here);
    if (iVar2 == -1) {
      pos3 = find_pos("<li><a href=",html,start);
      while( true ) {
        if ((pos3 == -1) || (pos <= pos3)) goto LAB_0804e4f4;
        pcVar3 = strrchr(html[pos3],0x22);
        pcVar4 = strrchr(html[pos3],0x3c);
        strncpy(item,pcVar3 + 2,(size_t)(pcVar4 + -(int)pcVar3));
        (pcVar4 + -(int)pcVar3 + -0x811)[(int)(&pos1 + 0x205)] = '\0';
        iVar2 = strcmp(ext,item);
        if (iVar2 < 0) break;
        start = start + 1;
        pos3 = find_pos("<li><a href=",html,start);
      }
      insert_here = pos3;
LAB_0804e4f4:
      sprintf(item,"<li><a href=\"../extensions/%s/index.html\">%s (%i.%i.%i)</a>\n",ext,ext,major,
              minor,revision);
      insert_str(item,insert_here,html);
    }
    else {
      print_warning("list item \'%s\' exists in index.html.\n",ext);
      if ((FORCE != 0) && (UPGRADE != 0)) {
        sprintf(item,"<li><a href=\"../extensions/%s/index.html\">%s (%i.%i.%i)</a>\n",ext,ext,major
                ,minor,revision);
        strcpy(html[iVar2],item);
      }
    }
  }
  if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void delete_ext_html(char *ext,char *gisbase,char **html)

{
  int iVar1;
  int start_00;
  int iVar2;
  int pos;
  int in_GS_OFFSET;
  int i;
  int found;
  int end;
  int start;
  int pos3;
  int pos2;
  int pos1;
  char item [2048];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  pos1 = find_pos("<b>Drivers sections:</b>",html,0);
  if (pos1 < 0) {
    pos1 = find_pos("<!-- GEM Extensions StartHTML. Do not delete or change this comment! -->",html,
                    0);
    if (pos1 < 0) {
      print_warning("Unknown format of index.html. Unable to de-register HTML man pages.\n");
      goto LAB_0804e7e0;
    }
  }
  find_pos("<hr>",html,pos1);
  start_00 = find_pos("<h3>Installed extensions:</h3>",html,pos1);
  if (start_00 == -1) {
    print_warning("no extensions section found in index.html.\n");
  }
  else {
    start_00 = find_pos("<h3>Installed extensions:</h3>",html,pos1);
    iVar2 = find_pos("</ul>",html,start_00);
    sprintf(item,"\">%s",ext);
    pos = find_pos(item,html,start_00);
    if (pos == -1) {
      print_warning("extension \'%s\' not listed in index.html.\n",ext);
    }
    else {
      if (pos < iVar2) {
        delete_str(pos,html);
      }
      start_00 = find_pos("<ul>",html,start_00);
      if (((start_00 != -1) && (start_00 < iVar2 + -1)) && ((iVar2 + -1) - start_00 < 2)) {
        i = 0;
        while (i < 4) {
          delete_str(start_00 + -1,html);
          i = i + 1;
        }
      }
    }
  }
LAB_0804e7e0:
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



void register_html(char *pkg_short_name,char *gisbase,int major,int minor,int revision)

{
  int iVar1;
  FILE *__stream;
  int *piVar2;
  char *pcVar3;
  FILE *__stream_00;
  char **html;
  size_t sVar4;
  int in_GS_OFFSET;
  FILE *f_out;
  FILE *f_in;
  int i;
  int n_lines;
  char **line;
  char str [2048];
  char file [2048];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  sprintf(file,"%s/docs/html/index.html",gisbase);
  __stream = fopen(file,"r");
  if (__stream == (FILE *)0x0) {
    piVar2 = __errno_location();
    if (*piVar2 == 2) goto LAB_0804ebfd;
    fclose((FILE *)0x0);
    piVar2 = __errno_location();
    pcVar3 = strerror(*piVar2);
    print_error(-0x18,"checking for file \'%s\': %s\n",file,pcVar3);
  }
  memcpy(TMP_HTML,"/tmp/grass.extensions.db.XXXXXX",0x20);
  mkstemp(TMP_HTML);
  __stream_00 = fopen(TMP_HTML,"w+");
  if (__stream_00 == (FILE *)0x0) {
    piVar2 = __errno_location();
    pcVar3 = strerror(*piVar2);
    print_error(-0x18,
                "could not create temp file \'%s\': %s\n \t\tMake sure that directory /tmp exists on your system and you have write permission.\n"
                ,TMP_HTML,pcVar3);
  }
  atexit(exit_db);
  if (VERBOSE == 0) {
    sprintf(str,"cp -f %s %s/docs/html/index.html &>%s ; chmod a+r %s/docs/html/index.html &>%s ;",
            TMP_HTML,gisbase,TMP_NULL,gisbase,TMP_NULL);
  }
  else {
    sprintf(str,"cp -vf %s %s/docs/html/index.html ; chmod -v a+r %s/docs/html/index.html ;",
            TMP_HTML,gisbase,gisbase);
  }
  strcpy(HTML_CMD,str);
  n_lines = 0;
  while (pcVar3 = fgets(str,0x800,__stream), pcVar3 != (char *)0x0) {
    n_lines = n_lines + 1;
  }
  if (n_lines != 0) {
    rewind(__stream);
    html = (char **)calloc(n_lines + 10,4);
    i = 0;
    while (i < n_lines + 10) {
      html[i] = (char *)0x0;
      i = i + 1;
    }
    i = 0;
    while (pcVar3 = fgets(str,0x800,__stream), pcVar3 != (char *)0x0) {
      sVar4 = strlen(str);
      pcVar3 = (char *)malloc(sVar4 + 1);
      html[i] = pcVar3;
      strcpy(html[i],str);
      i = i + 1;
    }
    new_ext_html(pkg_short_name,gisbase,html,major,minor,revision);
    i = 0;
    while (html[i] != (char *)0x0) {
      fprintf(__stream_00,html[i]);
      i = i + 1;
    }
    fflush(__stream_00);
    fclose(__stream);
    fclose(__stream_00);
    i = 0;
    while (i < n_lines + 10) {
      free(html[i]);
      i = i + 1;
    }
    free(html);
  }
LAB_0804ebfd:
  if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void deregister_html(char *pkg_short_name,char *gisbase)

{
  int iVar1;
  FILE *__stream;
  int *piVar2;
  char *pcVar3;
  FILE *__stream_00;
  char **html;
  size_t sVar4;
  int in_GS_OFFSET;
  FILE *f_out;
  FILE *f_in;
  int i;
  int n_lines;
  char **line;
  char str [2048];
  char file [2048];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  sprintf(file,"%s/docs/html/index.html",gisbase);
  __stream = fopen(file,"r");
  if (__stream == (FILE *)0x0) {
    piVar2 = __errno_location();
    if (*piVar2 == 2) goto LAB_0804f00c;
    fclose((FILE *)0x0);
    piVar2 = __errno_location();
    pcVar3 = strerror(*piVar2);
    print_error(-0x18,"checking for file \'%s\': %s\n",file,pcVar3);
  }
  memcpy(TMP_HTML,"/tmp/grass.extensions.db.XXXXXX",0x20);
  mkstemp(TMP_HTML);
  __stream_00 = fopen(TMP_HTML,"w+");
  if (__stream_00 == (FILE *)0x0) {
    piVar2 = __errno_location();
    pcVar3 = strerror(*piVar2);
    print_error(-0x18,
                "could not create temp file \'%s\': %s\n \t\tMake sure that directory /tmp exists on your system and you have write permission.\n"
                ,TMP_HTML,pcVar3);
  }
  atexit(exit_db);
  if (VERBOSE == 0) {
    sprintf(str,"cp -f %s %s/docs/html/index.html &>%s ; chmod a+r %s/docs/html/index.html &>%s ;",
            TMP_HTML,gisbase,TMP_NULL,gisbase,TMP_NULL);
  }
  else {
    sprintf(str,"cp -vf %s %s/docs/html/index.html ; chmod -v a+r %s/docs/html/index.html ;",
            TMP_HTML,gisbase,gisbase);
  }
  strcpy(HTML_CMD,str);
  n_lines = 0;
  while (pcVar3 = fgets(str,0x800,__stream), pcVar3 != (char *)0x0) {
    n_lines = n_lines + 1;
  }
  if (n_lines != 0) {
    rewind(__stream);
    html = (char **)calloc(n_lines + 1,4);
    i = 0;
    while (i < n_lines + 1) {
      html[i] = (char *)0x0;
      i = i + 1;
    }
    i = 0;
    while (pcVar3 = fgets(str,0x800,__stream), pcVar3 != (char *)0x0) {
      sVar4 = strlen(str);
      pcVar3 = (char *)malloc(sVar4 + 1);
      html[i] = pcVar3;
      strcpy(html[i],str);
      i = i + 1;
    }
    delete_ext_html(pkg_short_name,gisbase,html);
    i = 0;
    while (html[i] != (char *)0x0) {
      fprintf(__stream_00,html[i]);
      i = i + 1;
    }
    fflush(__stream_00);
    fclose(__stream);
    fclose(__stream_00);
    i = 0;
    while (i < n_lines + 1) {
      free(html[i]);
      i = i + 1;
    }
    free(html);
  }
LAB_0804f00c:
  if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



int restore_html(char *gisbase)

{
  int iVar1;
  bool bVar2;
  FILE *__stream;
  int *piVar3;
  char *local_2870;
  FILE *__stream_00;
  DIR *__dirp;
  dirent *pdVar4;
  char **html;
  size_t sVar5;
  int iVar6;
  DIR *__dirp_00;
  FILE *__stream_01;
  int in_GS_OFFSET;
  char *local_286c;
  int revision;
  int minor;
  int major;
  int n_subdirs;
  int num_restored;
  dirent *ep;
  DIR *subdirp;
  DIR *dirp;
  FILE *f_ext;
  FILE *f_out;
  FILE *f_in;
  int i;
  int n_lines;
  int n_entries;
  char **line;
  char subdir [2048];
  char dir [2048];
  char ext_idx [2048];
  char idx [2048];
  char str [2048];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  sprintf(idx,"%s/docs/html/index.html",gisbase);
  __stream = fopen(idx,"r");
  if (__stream == (FILE *)0x0) {
    piVar3 = __errno_location();
    if (*piVar3 == 2) {
      num_restored = 0;
      goto LAB_0804f7cb;
    }
    fclose((FILE *)0x0);
    piVar3 = __errno_location();
    local_2870 = strerror(*piVar3);
    print_error(-0x18,"checking for file \'%s\': %s\n",idx,local_2870);
  }
  memcpy(TMP_HTML,"/tmp/grass.extensions.db.XXXXXX",0x20);
  mkstemp(TMP_HTML);
  __stream_00 = fopen(TMP_HTML,"w+");
  if (__stream_00 == (FILE *)0x0) {
    piVar3 = __errno_location();
    local_2870 = strerror(*piVar3);
    print_error(-0x18,
                "could not create temp file \'%s\': %s\n \t\tMake sure that directory /tmp exists on your system and you have write permission.\n"
                ,TMP_HTML,local_2870);
  }
  local_2870 = gisbase;
  if (VERBOSE == 0) {
    local_286c = TMP_NULL;
    sprintf(str,"cp -f %s %s/docs/html/index.html &>%s ; chmod a+r %s/docs/html/index.html &>%s ;",
            TMP_HTML,gisbase,TMP_NULL,gisbase,TMP_NULL);
  }
  else {
    local_286c = gisbase;
    sprintf(str,"cp -vf %s %s/docs/html/index.html ; chmod -v a+r %s/docs/html/index.html ;",
            TMP_HTML,gisbase,gisbase);
  }
  strcpy(HTML_CMD,str);
  atexit(exit_db);
  sprintf(dir,"%s/docs/extensions",gisbase,local_2870,local_286c);
  __dirp = opendir(dir);
  if (__dirp == (DIR *)0x0) {
    num_restored = 0;
  }
  else {
    n_subdirs = 0;
    while (pdVar4 = readdir(__dirp), pdVar4 != (dirent *)0x0) {
      sprintf(subdir,"%s/%s",dir,pdVar4->d_name);
      iVar6 = strcmp(pdVar4->d_name,".");
      if (((iVar6 != 0) && (iVar6 = strcmp(pdVar4->d_name,".."), iVar6 != 0)) &&
         (__dirp_00 = opendir(subdir), __dirp_00 != (DIR *)0x0)) {
        n_subdirs = n_subdirs + 1;
        closedir(__dirp_00);
      }
    }
    closedir(__dirp);
    n_lines = 0;
    while (local_2870 = fgets(str,0x800,__stream), local_2870 != (char *)0x0) {
      n_lines = n_lines + 1;
    }
    if (n_lines == 0) {
      num_restored = 0;
    }
    else {
      rewind(__stream);
      html = (char **)calloc(n_lines + n_subdirs + 10,4);
      i = 0;
      while (i < n_lines + n_subdirs + 10) {
        html[i] = (char *)0x0;
        i = i + 1;
      }
      i = 0;
      while (local_2870 = fgets(str,0x800,__stream), local_2870 != (char *)0x0) {
        sVar5 = strlen(str);
        local_2870 = (char *)malloc(sVar5 + 1);
        html[i] = local_2870;
        strcpy(html[i],str);
        i = i + 1;
      }
      html[i] = (char *)0x0;
      __dirp = opendir(dir);
      num_restored = 0;
      while (pdVar4 = readdir(__dirp), pdVar4 != (dirent *)0x0) {
        sprintf(subdir,"%s/%s",dir,pdVar4->d_name);
        iVar6 = strcmp(pdVar4->d_name,".");
        if (((iVar6 != 0) && (iVar6 = strcmp(pdVar4->d_name,".."), iVar6 != 0)) &&
           (__dirp_00 = opendir(subdir), __dirp_00 != (DIR *)0x0)) {
          closedir(__dirp_00);
          sprintf(ext_idx,"%s/index.html",subdir);
          __stream_01 = fopen(ext_idx,"r");
          if (__stream_01 != (FILE *)0x0) {
            major = 0;
            minor = 0;
            revision = 0;
            bVar2 = false;
            do {
              local_2870 = fgets(str,0x800,__stream_01);
              if (local_2870 == (char *)0x0) goto LAB_0804f611;
              local_2870 = strstr(str,"<title>");
            } while (local_2870 == (char *)0x0);
            bVar2 = true;
LAB_0804f611:
            if (bVar2) {
              local_2870 = strchr(str,0x28);
              __isoc99_sscanf(local_2870 + 1,"%i.%i.%i",&major,&minor,&revision);
              new_ext_html(pdVar4->d_name,gisbase,html,major,minor,revision);
              num_restored = num_restored + 1;
              fclose(__stream_01);
            }
          }
        }
      }
      closedir(__dirp);
      i = 0;
      while (html[i] != (char *)0x0) {
        fprintf(__stream_00,html[i]);
        i = i + 1;
      }
      fflush(__stream_00);
      fclose(__stream);
      fclose(__stream_00);
      i = 0;
      while (i < n_lines + n_subdirs + 10) {
        free(html[i]);
        i = i + 1;
      }
      free(html);
    }
  }
LAB_0804f7cb:
  if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
    return num_restored;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Could not reconcile some variable overlaps

void check_extension(char *package,char *name,int *major,int *minor,int *revision)

{
  int *piVar1;
  FILE *__stream;
  FILE *stream;
  int iVar2;
  undefined4 *puVar3;
  int in_GS_OFFSET;
  char *local_854;
  FILE *local_850;
  FILE *f;
  int error;
  char tmp [2048];
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  tmp._0_4_ = 0;
  iVar2 = 0x1ff;
  puVar3 = (undefined4 *)(tmp + 4);
  while (iVar2 != 0) {
    iVar2 = iVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_854 = (char *)0x16;
  local_850 = stdout;
  fwrite("Checking extension ...",1,0x16,stdout);
  strcpy(tmp,package);
  iVar2 = chdir(tmp);
  if (iVar2 < 0) {
    piVar1 = __errno_location();
    local_850 = (FILE *)strerror(*piVar1);
    print_error(-2,"extension \'%s\' not accessible: %s\n",package,local_850);
    local_854 = package;
  }
  __stream = fopen("id","r");
  if (__stream == (FILE *)0x0) {
    print_error(-6,"\'id\' file not readable.\n",local_854,local_850);
  }
  else {
    __isoc99_fscanf(__stream,"%[<GRASS extension package>] ",tmp);
    iVar2 = strcmp("<GRASS extension package>",tmp);
    if (iVar2 != 0) {
      fclose(__stream);
      print_error(-6,"unknown file identifier.\n");
    }
  }
  fclose(__stream);
  get_package_name(".",name);
  stream = (FILE *)fopen("version","r");
  if (stream == (FILE *)0x0) {
    print_error(-6,"\'version\' file not readable.\n");
  }
  else {
    nc_fgets_nb(tmp,0x800,stream);
    *minor = 0;
    *revision = 0;
    iVar2 = __isoc99_sscanf(tmp,"%i.%i.%i",major,minor,revision);
    if (iVar2 < 1) {
      fclose((FILE *)stream);
      print_error(-6,"invalid or missing version information.\n");
    }
  }
  print_done();
  chdir("..");
  fclose((FILE *)stream);
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



void unpack_extension(char *package)

{
  int iVar1;
  int __fd;
  int *piVar2;
  char *pcVar3;
  int in_GS_OFFSET;
  int ftype;
  int fd;
  int error;
  char tmp [2048];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  fwrite("Uncompressing files...",1,0x16,stdout);
  memcpy(TMPDIR,"/tmp/grass.extension.XXXXXX",0x1c);
  mkstemp(TMPDIR);
  __fd = open(TMPDIR,0x40,0x1ff);
  if (__fd == -1) {
    piVar2 = __errno_location();
    pcVar3 = strerror(*piVar2);
    print_error(-7,"could not create temp directory name: %s",pcVar3);
                    // WARNING: Subroutine does not return
    exit(-7);
  }
  if (VERBOSE != 0) {
    fprintf(stdout,"\nUncompressing to: %s.\n",TMPDIR);
  }
  close(__fd);
  remove(TMPDIR);
  mkdir_s(TMPDIR,"0700");
  atexit(exit_tmp);
  sprintf(tmp,"cp %s %s",package,TMPDIR);
  __fd = system(tmp);
  if (__fd < 0) {
    print_error(-7,"could not copy extension files to temp dir.\n");
                    // WARNING: Subroutine does not return
    exit(-7);
  }
  ftype = check_filetype(package);
  if (ftype == 0) {
    print_warning(
                 "file name not \'.tar.gz\', \'.tgz\', \'.tar.bz2\', \'.tbz\' or \'.zip\'. Assuming \'.tgz\'.\n"
                 );
    ftype = 1;
  }
  if (ftype == 1) {
    if (VERBOSE == 0) {
      pcVar3 = basename(package);
      sprintf(tmp,"tar -xzf %s/%s -C %s",TMPDIR,pcVar3,TMPDIR);
    }
    else {
      pcVar3 = basename(package);
      sprintf(tmp,"tar -xzvf %s/%s -C %s",TMPDIR,pcVar3,TMPDIR);
    }
  }
  if (ftype == 2) {
    if (VERBOSE == 0) {
      pcVar3 = basename(package);
      sprintf(tmp,"tar -xjvf %s/%s -C %s",TMPDIR,pcVar3,TMPDIR);
    }
    else {
      pcVar3 = basename(package);
      sprintf(tmp,"tar -xjvf %s/%s -C %s",TMPDIR,pcVar3,TMPDIR);
    }
  }
  if (ftype == 3) {
    if (VERBOSE == 0) {
      pcVar3 = basename(package);
      sprintf(tmp,"unzip -qq %s/%s -d %s",TMPDIR,pcVar3,TMPDIR);
    }
    else {
      pcVar3 = basename(package);
      sprintf(tmp,"unzip %s/%s -d %s",TMPDIR,pcVar3,TMPDIR);
    }
  }
  if (ftype == 4) {
    if (VERBOSE == 0) {
      pcVar3 = basename(package);
      sprintf(tmp,"tar -xf %s/%s -C %s",TMPDIR,pcVar3,TMPDIR);
    }
    else {
      pcVar3 = basename(package);
      sprintf(tmp,"tar -xvf %s/%s -C %s",TMPDIR,pcVar3,TMPDIR);
    }
  }
  __fd = system(tmp);
  if (__fd < 0) {
    if (ftype == 1) {
      print_error(-7,
                  "could not extract files using \'tar\' and \'gzip\'. \n \t\t\t\t\tExtract manually using \'tar -xzvf %s\'.\n"
                  ,package);
    }
    if (ftype == 2) {
      print_error(-7,
                  "could not extract files using \'tar\' and \'bunzip2\'.\n \t\t\t\tExtract manually using \'tar -xjvf %s\'.\n"
                  ,package);
    }
    if (ftype == 3) {
      print_error(-7,
                  "could not extract files using \'unzip\'.\n \t\t\t\tExtract manually using \'unzip %s\'.\n"
                  ,package);
    }
                    // WARNING: Subroutine does not return
    exit(-7);
  }
  print_done();
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



void query_extension(char *package,char *name,int major,int minor,int revision,char *short_name,
                    char *invocation,char *org_name)

{
  char *__src;
  int iVar1;
  int *piVar2;
  int error;
  char tmp [2048];
  
  __src = basename(package);
  strcpy(tmp,__src);
  iVar1 = chdir(tmp);
  if (iVar1 < 0) {
    piVar2 = __errno_location();
    __src = strerror(*piVar2);
    print_error(-2,"extension \'%s\' not accessible: %s\n",package,__src);
  }
  fprintf(stdout,"\nExtension \'%s\', version %i.%i.%i\n\n",name,major,minor,revision);
  dump_ascii("description","Description");
  dump_ascii("commands","Commands provided");
  dump_ascii("libs","Libraries provided");
  dump_ascii("headers","Header files provided");
  dump_ascii("depends","Dependencies");
  dump_ascii("bugs","Bugs");
  sprintf(tmp,"../%s",package);
  list_binaries(tmp);
  dump_ascii("authors","Author(s)");
  fprintf(stdout,"Type \'%s -d %s\' to see more detailed information.\n",invocation,org_name);
  fprintf(stdout,"Type \'%s -l %s\' to see copyright information.\n",invocation,org_name);
  system("sh post");
                    // WARNING: Subroutine does not return
  exit(0);
}



void print_cfg(void)

{
  int iVar1;
  FILE *__stream;
  char *pcVar2;
  int in_GS_OFFSET;
  FILE *fp;
  char line [2048];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  __stream = fopen("config.msg","r");
  if (__stream != (FILE *)0x0) {
    fwrite("\nResult of configuration: \n",1,0x1b,stdout);
    while( true ) {
      pcVar2 = fgets(line,0x800,__stream);
      if (pcVar2 == (char *)0x0) break;
      fputs(line,stdout);
    }
    fputc(10,stdout);
  }
  remove("config.msg");
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



void source_install(char *package,char *gisbase,char *pkg_short_name,int pkg_major,int pkg_minor,
                   int pkg_revision,char *grass_version)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char *local_28b8;
  char *local_28bc;
  char *local_28c0;
  char *__nptr;
  long lVar4;
  long lVar5;
  FILE *__stream;
  int in_GS_OFFSET;
  stat buf;
  int revision;
  int minor;
  int major;
  char *grass_revision;
  char *grass_minor;
  char *grass_major;
  char *verstr;
  FILE *f;
  int error;
  char sysstr [2048];
  char post_cmd [2048];
  char install_cmd [2048];
  char dir [2048];
  char tmp [2048];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  iVar2 = stat(gisbase,(stat *)&buf);
  if (iVar2 < 0) {
    piVar3 = __errno_location();
    local_28b8 = strerror(*piVar3);
    print_error(-5,"installation directory invalid: %s\n",local_28b8);
  }
  sprintf(GINSTALL_DST,"GINSTALL_DST=%s",gisbase);
  putenv(GINSTALL_DST);
  sprintf(tmp,"%s/include",gisbase);
  sprintf(GINSTALL_INC,"GINSTALL_INC=%s",tmp);
  putenv(GINSTALL_INC);
  sprintf(tmp,"%s/lib",gisbase);
  sprintf(GINSTALL_LIB,"GINSTALL_LIB=%s",tmp);
  putenv(GINSTALL_LIB);
  sprintf(GEM_GRASS_DIR,"GEM_GRASS_DIR=%s",gisbase);
  putenv(GEM_GRASS_DIR);
  local_28b8 = strdup(grass_version);
  local_28bc = strtok(local_28b8,".");
  local_28c0 = strtok((char *)0x0,".");
  __nptr = strtok((char *)0x0,".");
  lVar4 = strtol(local_28bc,(char **)0x0,10);
  lVar5 = strtol(local_28c0,(char **)0x0,10);
  strtol(__nptr,(char **)0x0,10);
  free(local_28b8);
  atexit(exit_tmp);
  local_28b8 = basename(package);
  sprintf(dir,"%s/src",local_28b8);
  iVar2 = chdir(dir);
  if (iVar2 < 0) {
    piVar3 = __errno_location();
    local_28b8 = strerror(*piVar3);
    print_error(-2,"extension files in \'%s\' not accessible: %s\n",package,local_28b8);
  }
  if (SKIP_CFG == 0) {
    if (VERBOSE == 0) {
      fwrite("Configuring...",1,0xe,stdout);
      sprintf(sysstr,"sh %s %s --quiet &> %s",CONFIG_CMD,CONFIG_OPTS,TMP_NULL);
      error = system(sysstr);
    }
    else {
      fwrite("Running configure script:\n",1,0x1a,stdout);
      sprintf(sysstr,"sh %s %s",CONFIG_CMD,CONFIG_OPTS);
      error = system(sysstr);
    }
    if (error == -1) {
      print_error(-0x1b,"could not run configure script.\n");
    }
    if (0 < error) {
      print_error(-3,"system configuration failed.\n");
    }
    print_done();
    print_cfg();
  }
  sprintf(GEM_EXT_NAME,"GEM_EXT_NAME=%s",pkg_short_name);
  putenv(GEM_EXT_NAME);
  sprintf(tmp,"%i.%i.%i",pkg_major,pkg_minor,pkg_revision);
  sprintf(GEM_EXT_VERSION,"GEM_EXT_VERSION=%s",tmp);
  putenv(GEM_EXT_VERSION);
  dump_html("../description",TMP_DESCR);
  dump_html("../info",TMP_INFO);
  dump_html("../depends",TMP_DEPS);
  dump_html("../bugs",TMP_BUGS);
  dump_html("../authors",TMP_AUTHORS);
  sprintf(GEM_EXT_DESCR,"GEM_EXT_DESCR=%s",TMP_DESCR);
  putenv(GEM_EXT_DESCR);
  sprintf(GEM_EXT_INFO,"GEM_EXT_INFO=%s",TMP_INFO);
  putenv(GEM_EXT_INFO);
  sprintf(GEM_EXT_DEPS,"GEM_EXT_DEPS=%s",TMP_DEPS);
  putenv(GEM_EXT_DEPS);
  sprintf(GEM_EXT_BUGS,"GEM_EXT_BUGS=%s",TMP_BUGS);
  putenv(GEM_EXT_BUGS);
  sprintf(GEM_EXT_AUTHORS,"GEM_EXT_AUTHORS=%s",TMP_AUTHORS);
  putenv(GEM_EXT_AUTHORS);
  atexit(exit_tmp);
  check_dependencies(package,gisbase,grass_version);
  if (VERBOSE == 0) {
    fwrite("Compiling...",1,0xc,stdout);
    local_28b8 = MAKE_CMD;
    sprintf(sysstr,"%s -f Makefile &> %s",MAKE_CMD,TMP_NULL);
    error = system(sysstr);
  }
  else {
    fprintf(stdout,"Running \'%s\':\n",MAKE_CMD);
    local_28b8 = MAKE_CMD;
    sprintf(sysstr,"%s -f Makefile",MAKE_CMD);
    error = system(sysstr);
  }
  if ((error == -1) && (VERBOSE == 0)) {
    local_28b8 = MAKE_CMD;
    print_error(-9,"could not run \'%s\' do you have make tools installed?\n",MAKE_CMD);
  }
  if (0 < error) {
    print_error(-4,
                "source code could not be compiled.\n \t\t\tRun again with option -v to see what is causing trouble.\n"
                ,local_28b8);
  }
  print_done();
  fwrite("Installing...",1,0xd,stdout);
  __stream = fopen("../uninstall","r");
  if (__stream == (FILE *)0x0) {
    piVar3 = __errno_location();
    local_28b8 = strerror(*piVar3);
    print_warning(
                  "error checking for uninstall script: %s\n \t\t\t\tUninstalling this extension may leave orphaned files on your system"
                  ,local_28b8);
  }
  else {
    if (VERBOSE == 0) {
      sprintf(tmp,"cp -f ../uninstall %s/etc/uninstall.%s &> %s ;",gisbase,pkg_short_name,TMP_NULL);
      strcpy(UNINSTALL_CMD,tmp);
    }
    else {
      sprintf(tmp,"cp -vf ../uninstall %s/etc/uninstall.%s ;",gisbase,pkg_short_name);
      strcpy(UNINSTALL_CMD,tmp);
    }
    fclose(__stream);
  }
  register_extension(gisbase,"src",pkg_short_name,pkg_major,pkg_minor,pkg_revision);
  check_dependencies(package,gisbase,grass_version);
  if ((lVar4 == 6) && (lVar5 < 1)) {
    register_entries_gisman(pkg_short_name,gisbase);
  }
  register_entries_gisman2(pkg_short_name,gisbase);
  register_html(pkg_short_name,gisbase,pkg_major,pkg_minor,pkg_revision);
  local_28b8 = gisbase;
  if (VERBOSE == 0) {
    local_28bc = TMPDB;
    local_28c0 = TMP_NULL;
    sprintf(install_cmd,
                        
            "%s -f Makefile -s install &> %s ; \t\t\t\t\tcp -f %s %s/etc/extensions.db &> %s ; chmod a+r %s/etc/extensions.db &> %s ;"
            ,MAKE_CMD,TMP_NULL,TMPDB,gisbase,TMP_NULL,gisbase,TMP_NULL);
  }
  else {
    fprintf(stdout,"Running \'%s install\':\n",MAKE_CMD);
    local_28c0 = TMPDB;
    local_28bc = gisbase;
    sprintf(install_cmd,
                        
            "%s -f Makefile install ; \t\t\t\t\tcp -vf %s %s/etc/extensions.db ; chmod -v a+r %s/etc/extensions.db ;"
            ,MAKE_CMD,TMPDB,gisbase,gisbase);
  }
  if (VERBOSE == 0) {
    sprintf(post_cmd,"sh ../post &> %s",TMP_NULL,local_28c0,local_28bc,local_28b8);
  }
  else {
    memcpy(post_cmd,"sh ../post",0xb);
  }
  sprintf(tmp,"%s %s %s %s %s %s",install_cmd,UNINSTALL_CMD,GISMAN_CMD,GISMAN2_CMD,HTML_CMD,post_cmd
         );
  su(gisbase,tmp);
  print_done();
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



void bin_install(char *package,char *gisbase,char *bins,char *pkg_short_name,int pkg_major,
                int pkg_minor,int pkg_revision,char *grass_version)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char *local_20c8;
  char *local_20cc;
  char *__nptr;
  char *__nptr_00;
  long lVar4;
  long lVar5;
  FILE *__stream;
  int in_GS_OFFSET;
  stat buf;
  int revision;
  int minor;
  int major;
  char *grass_revision;
  char *grass_minor;
  char *grass_major;
  char *verstr;
  FILE *f;
  int error;
  char post_cmd [2048];
  char install_cmd [2048];
  char dir [2048];
  char tmp [2048];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  iVar2 = stat(gisbase,(stat *)&buf);
  if (iVar2 < 0) {
    piVar3 = __errno_location();
    local_20c8 = strerror(*piVar3);
    print_error(-5,"installation directory invalid: %s\n",local_20c8);
  }
  sprintf(GINSTALL_DST,"GINSTALL_DST=%s",gisbase);
  putenv(GINSTALL_DST);
  sprintf(tmp,"%s/include",gisbase);
  sprintf(GINSTALL_INC,"GINSTALL_INC=%s",tmp);
  putenv(GINSTALL_INC);
  sprintf(tmp,"%s/lib",gisbase);
  sprintf(GINSTALL_LIB,"GINSTALL_LIB=%s",tmp);
  putenv(GINSTALL_LIB);
  sprintf(GEM_GRASS_DIR,"GEM_GRASS_DIR=%s",gisbase);
  putenv(GEM_GRASS_DIR);
  local_20c8 = strdup(grass_version);
  local_20cc = strtok(local_20c8,".");
  __nptr = strtok((char *)0x0,".");
  __nptr_00 = strtok((char *)0x0,".");
  lVar4 = strtol(local_20cc,(char **)0x0,10);
  lVar5 = strtol(__nptr,(char **)0x0,10);
  strtol(__nptr_00,(char **)0x0,10);
  free(local_20c8);
  atexit(exit_tmp);
  local_20cc = basename(package);
  local_20c8 = bins;
  sprintf(dir,"%s/%s",local_20cc,bins);
  iVar2 = chdir(dir);
  if (iVar2 < 0) {
    piVar3 = __errno_location();
    local_20c8 = strerror(*piVar3);
    print_error(-2,"extension file binaries in \'%s\' not accessible: %s\n",package,local_20c8);
  }
  sprintf(GEM_EXT_NAME,"GEM_EXT_NAME=%s",pkg_short_name,local_20c8);
  putenv(GEM_EXT_NAME);
  sprintf(tmp,"%i.%i.%i",pkg_major,pkg_minor,pkg_revision);
  sprintf(GEM_EXT_VERSION,"GEM_EXT_VERSION=%s",tmp);
  putenv(GEM_EXT_VERSION);
  dump_html("../description",TMP_DESCR);
  dump_html("../info",TMP_INFO);
  dump_html("../depends",TMP_DEPS);
  dump_html("../bugs",TMP_BUGS);
  dump_html("../authors",TMP_AUTHORS);
  sprintf(GEM_EXT_DESCR,"GEM_EXT_DESCR=%s",TMP_DESCR);
  putenv(GEM_EXT_DESCR);
  sprintf(GEM_EXT_INFO,"GEM_EXT_INFO=%s",TMP_INFO);
  putenv(GEM_EXT_INFO);
  sprintf(GEM_EXT_DEPS,"GEM_EXT_DEPS=%s",TMP_DEPS);
  putenv(GEM_EXT_DEPS);
  sprintf(GEM_EXT_BUGS,"GEM_EXT_BUGS=%s",TMP_BUGS);
  putenv(GEM_EXT_BUGS);
  sprintf(GEM_EXT_AUTHORS,"GEM_EXT_AUTHORS=%s",TMP_AUTHORS);
  putenv(GEM_EXT_AUTHORS);
  atexit(exit_tmp);
  check_dependencies(package,gisbase,grass_version);
  fwrite("Installing...",1,0xd,stdout);
  __stream = fopen("../uninstall","r");
  if (__stream == (FILE *)0x0) {
    piVar3 = __errno_location();
    local_20c8 = strerror(*piVar3);
    print_warning(
                  "error checking for uninstall script: %s\n \t\t\t\tUninstalling this extension may leave orphaned files on your system"
                  ,local_20c8);
  }
  else {
    if (VERBOSE == 0) {
      sprintf(tmp,"cp -f ../uninstall %s/etc/uninstall.%s &> %s ;",gisbase,pkg_short_name,TMP_NULL);
      strcpy(UNINSTALL_CMD,tmp);
    }
    else {
      sprintf(tmp,"cp -vf ../uninstall %s/etc/uninstall.%s ;",gisbase,pkg_short_name);
      strcpy(UNINSTALL_CMD,tmp);
    }
    fclose(__stream);
  }
  register_extension(gisbase,bins,pkg_short_name,pkg_major,pkg_minor,pkg_revision);
  check_dependencies(package,gisbase,grass_version);
  if ((lVar4 == 6) && (lVar5 < 1)) {
    register_entries_gisman(pkg_short_name,gisbase);
  }
  register_entries_gisman2(pkg_short_name,gisbase);
  register_html(pkg_short_name,gisbase,pkg_major,pkg_minor,pkg_revision);
  local_20c8 = gisbase;
  if (VERBOSE == 0) {
    local_20cc = TMPDB;
    __nptr = TMP_NULL;
    sprintf(install_cmd,
                        
            "bin/%s -f Makefile -s install &> %s ; \t\t\t\t\tcp -f %s %s/etc/extensions.db &> %s ; chmod a+r %s/etc/extensions.db &> %s ;"
            ,MAKE_CMD,TMP_NULL,TMPDB,gisbase,TMP_NULL,gisbase,TMP_NULL);
  }
  else {
    fprintf(stdout,"Running \'%s install\':\n",MAKE_CMD);
    __nptr = TMPDB;
    local_20cc = gisbase;
    sprintf(install_cmd,
                        
            "bin/%s -f Makefile install ; \t\t\t\t\tcp -vf %s %s/etc/extensions.db ; chmod -v a+r %s/etc/extensions.db ;"
            ,MAKE_CMD,TMPDB,gisbase,gisbase);
  }
  if (VERBOSE == 0) {
    sprintf(post_cmd,"sh ../post &> %s",TMP_NULL,__nptr,local_20cc,local_20c8);
  }
  else {
    memcpy(post_cmd,"sh ../post",0xb);
  }
  sprintf(tmp,"%s %s %s %s %s %s",install_cmd,UNINSTALL_CMD,GISMAN_CMD,GISMAN2_CMD,HTML_CMD,post_cmd
         );
  su(gisbase,tmp);
  print_done();
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



void test_install(char *package,char *gisbase,char *pkg_short_name,int pkg_major,int pkg_minor,
                 int pkg_revision,char *grass_version)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char *local_18b4;
  char *__nptr;
  char *__nptr_00;
  char *__nptr_01;
  long lVar4;
  long lVar5;
  FILE *__stream;
  int in_GS_OFFSET;
  stat buf;
  int revision;
  int minor;
  int major;
  char *grass_revision;
  char *grass_minor;
  char *grass_major;
  char *verstr;
  FILE *f;
  int error;
  char sysstr [2048];
  char dir [2048];
  char tmp [2048];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  iVar2 = stat(gisbase,(stat *)&buf);
  if (iVar2 < 0) {
    piVar3 = __errno_location();
    local_18b4 = strerror(*piVar3);
    print_error(-5,"installation directory invalid: %s\n",local_18b4);
  }
  sprintf(GINSTALL_DST,"GINSTALL_DST=%s",gisbase);
  putenv(GINSTALL_DST);
  sprintf(tmp,"%s/include",gisbase);
  sprintf(GINSTALL_INC,"GINSTALL_INC=%s",tmp);
  putenv(GINSTALL_INC);
  sprintf(tmp,"%s/lib",gisbase);
  sprintf(GINSTALL_LIB,"GINSTALL_LIB=%s",tmp);
  putenv(GINSTALL_LIB);
  sprintf(GEM_GRASS_DIR,"GEM_GRASS_DIR=%s",gisbase);
  putenv(GEM_GRASS_DIR);
  local_18b4 = strdup(grass_version);
  __nptr = strtok(local_18b4,".");
  __nptr_00 = strtok((char *)0x0,".");
  __nptr_01 = strtok((char *)0x0,".");
  lVar4 = strtol(__nptr,(char **)0x0,10);
  lVar5 = strtol(__nptr_00,(char **)0x0,10);
  strtol(__nptr_01,(char **)0x0,10);
  free(local_18b4);
  atexit(exit_tmp);
  local_18b4 = basename(package);
  sprintf(dir,"%s/src",local_18b4);
  iVar2 = chdir(dir);
  if (iVar2 < 0) {
    piVar3 = __errno_location();
    local_18b4 = strerror(*piVar3);
    print_error(-2,"extension files in \'%s\' not accessible: %s\n",package,local_18b4);
  }
  if (SKIP_CFG == 0) {
    if (VERBOSE == 0) {
      fwrite("Configuring...",1,0xe,stdout);
      sprintf(sysstr,"sh %s %s --quiet &> %s",CONFIG_CMD,CONFIG_OPTS,TMP_NULL);
      error = system(sysstr);
    }
    else {
      fwrite("Running configure script:\n",1,0x1a,stdout);
      sprintf(sysstr,"sh %s %s",CONFIG_CMD,CONFIG_OPTS);
      error = system(sysstr);
    }
    if (error == -1) {
      print_error(-0x1b,"could not run configure script.\n");
    }
    if (0 < error) {
      print_error(-3,"system configuration failed.\n");
    }
    print_done();
    print_cfg();
  }
  sprintf(GEM_EXT_NAME,"GEM_EXT_NAME=%s",pkg_short_name);
  putenv(GEM_EXT_NAME);
  sprintf(tmp,"%i.%i.%i",pkg_major,pkg_minor,pkg_revision);
  sprintf(GEM_EXT_VERSION,"GEM_EXT_VERSION=%s",tmp);
  putenv(GEM_EXT_VERSION);
  dump_plain("../description",TMP_DESCR);
  dump_plain("../info",TMP_INFO);
  dump_plain("../depends",TMP_DEPS);
  dump_plain("../bugs",TMP_BUGS);
  dump_plain("../authors",TMP_AUTHORS);
  sprintf(GEM_EXT_DESCR,"GEM_EXT_DESCR=%s",TMP_DESCR);
  putenv(GEM_EXT_DESCR);
  sprintf(GEM_EXT_INFO,"GEM_EXT_INFO=%s",TMP_INFO);
  putenv(GEM_EXT_INFO);
  sprintf(GEM_EXT_DEPS,"GEM_EXT_DEPS=%s",TMP_DEPS);
  putenv(GEM_EXT_DEPS);
  sprintf(GEM_EXT_BUGS,"GEM_EXT_BUGS=%s",TMP_BUGS);
  putenv(GEM_EXT_BUGS);
  sprintf(GEM_EXT_AUTHORS,"GEM_EXT_AUTHORS=%s",TMP_AUTHORS);
  putenv(GEM_EXT_AUTHORS);
  atexit(exit_tmp);
  check_dependencies(package,gisbase,grass_version);
  if (VERBOSE == 0) {
    fwrite("Compiling...",1,0xc,stdout);
    local_18b4 = MAKE_CMD;
    sprintf(sysstr,"%s -f Makefile &> %s",MAKE_CMD,TMP_NULL);
    error = system(sysstr);
  }
  else {
    fprintf(stdout,"Running \'%s\':\n",MAKE_CMD);
    local_18b4 = MAKE_CMD;
    sprintf(sysstr,"%s -f Makefile",MAKE_CMD);
    error = system(sysstr);
  }
  if ((error == -1) && (VERBOSE == 0)) {
    local_18b4 = MAKE_CMD;
    print_error(-9,"could not run \'%s\' do you have make tools installed?\n",MAKE_CMD);
  }
  if (0 < error) {
    print_error(-4,
                "source code could not be compiled.\n \t\t\tRun again with option -v to see what is causing trouble.\n"
                ,local_18b4);
  }
  print_done();
  fwrite("Installing...",1,0xd,stdout);
  __stream = fopen("../uninstall","r");
  if (__stream == (FILE *)0x0) {
    piVar3 = __errno_location();
    local_18b4 = strerror(*piVar3);
    print_warning(
                  "error checking for uninstall script: %s\n \t\t\t\tUninstalling this extension may leave orphaned files on your system"
                  ,local_18b4);
  }
  else {
    fclose(__stream);
  }
  register_extension(gisbase,"src",pkg_short_name,pkg_major,pkg_minor,pkg_revision);
  check_dependencies(package,gisbase,grass_version);
  if ((lVar4 == 6) && (lVar5 < 1)) {
    register_entries_gisman(pkg_short_name,gisbase);
  }
  register_entries_gisman2(pkg_short_name,gisbase);
  register_html(pkg_short_name,gisbase,pkg_major,pkg_minor,pkg_revision);
  fprintf(stdout,"(skipping \'%s install\')...",MAKE_CMD);
  print_done();
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



void uninstall(char *package,char *pkg_short_name,char *gisbase,char *grass_version)

{
  int iVar1;
  char *__s;
  char *__nptr;
  char *__nptr_00;
  char *__nptr_01;
  long lVar2;
  long lVar3;
  int iVar4;
  int *piVar5;
  int in_GS_OFFSET;
  stat buf;
  int revision;
  int minor;
  int major;
  char *grass_revision;
  char *grass_minor;
  char *grass_major;
  char *verstr;
  int no_script;
  int error;
  char script [2048];
  char tmp [2048];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  fwrite("Un-installing...",1,0x10,stdout);
  sprintf(UNINSTALL_BASE,"UNINSTALL_BASE=%s",gisbase);
  putenv(UNINSTALL_BASE);
  __s = strdup(grass_version);
  __nptr = strtok(__s,".");
  __nptr_00 = strtok((char *)0x0,".");
  __nptr_01 = strtok((char *)0x0,".");
  lVar2 = strtol(__nptr,(char **)0x0,10);
  lVar3 = strtol(__nptr_00,(char **)0x0,10);
  strtol(__nptr_01,(char **)0x0,10);
  free(__s);
  atexit(exit_tmp);
  deregister_extension(package,pkg_short_name,gisbase);
  if ((lVar2 == 6) && (lVar3 < 1)) {
    iVar4 = deregister_entries_gisman(pkg_short_name,gisbase);
    if (iVar4 == -1) {
      print_warning("GIS Manager menu entries could not be removed.\n");
      memcpy(GISMAN_CMD,&DAT_0805698c,1);
    }
    if (iVar4 == 0) {
      print_warning("no entries found to remove from GIS Manager.\n");
      memcpy(GISMAN_CMD,&DAT_0805698c,1);
    }
  }
  deregister_entries_gisman2(pkg_short_name,gisbase);
  deregister_html(pkg_short_name,gisbase);
  sprintf(script,"%s/etc/uninstall.%s",gisbase,pkg_short_name);
  iVar4 = stat(script,(stat *)&buf);
  if (iVar4 < 0) {
    print_warning(
                 "no uninstall script available for this extension.\n \t\t\tUnneeded files may have been left on your system.\n"
                 );
    piVar5 = __errno_location();
    __s = strerror(*piVar5);
    print_warning(
                  "error checking for uninstall script: %s\n \t\t\t\tUninstalling this extension may leave orphaned files on your system"
                  ,__s);
  }
  else {
    if (VERBOSE == 0) {
      sprintf(tmp,
              "sh %s &> %s ; rm -vf %s &> %s ; \t\t\t\t\t \t\trm -vrf %s/docs/extensions/%s &> %s ; rm -vf %s/etc/dm/gem-entries/%s &> %s ; \t\t\t\t\t\t\tcp -vf %s %s/etc/extensions.db &> %s ; chmod -v a+r %s/etc/extensions.db &> %s ;"
              ,script,TMP_NULL,script,TMP_NULL,gisbase,pkg_short_name,TMP_NULL,gisbase,
              pkg_short_name,TMP_NULL,TMPDB,gisbase,TMP_NULL,gisbase,TMP_NULL);
      strcpy(UNINSTALL_CMD,tmp);
    }
    else {
      sprintf(tmp,
              "sh %s ; rm -vf %s ; \t\t\t\t\t \t\trm -vrf %s/docs/extensions/%s ; rm -vf %s/etc/dm/gem-entries/%s ; \t\t\t\t\t\t\tcp -vf %s %s/etc/extensions.db ; chmod -v a+r %s/etc/extensions.db ;"
              ,script,script,gisbase,pkg_short_name,gisbase,pkg_short_name,TMPDB,gisbase,gisbase);
      strcpy(UNINSTALL_CMD,tmp);
    }
  }
  sprintf(tmp,"%s %s %s",UNINSTALL_CMD,GISMAN_CMD,HTML_CMD);
  su(gisbase,tmp);
  print_done();
  if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



int source_clean(char *package)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int in_GS_OFFSET;
  int error;
  char sysstr [2048];
  char dir [2048];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  pcVar2 = basename(package);
  sprintf(dir,"%s/src",pcVar2);
  iVar3 = chdir(dir);
  if (iVar3 < 0) {
    print_error(-2,"extension \'%s\' not accessible: ",package);
  }
  if (VERBOSE == 0) {
    fwrite("Cleaning up...",1,0xe,stdout);
    sprintf(sysstr,"%s -f Makefile -s clean &> %s",MAKE_CMD,TMP_NULL);
    error = system(sysstr);
  }
  else {
    fprintf(stdout,"Running \'%s clean\':\n",MAKE_CMD);
    sprintf(sysstr,"%s -f Makefile clean",MAKE_CMD);
    error = system(sysstr);
  }
  if (error == -1) {
    print_error(-9,"could not run \'%s clean\' do you have make tools installed?\n",MAKE_CMD);
  }
  else {
    print_done();
  }
  system("sh ../post");
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return 0;
}



void restore(char *gisbase,char *grass_version)

{
  int iVar1;
  char *__s;
  char *__nptr;
  char *__nptr_00;
  char *__nptr_01;
  long lVar2;
  long lVar3;
  int iVar4;
  int in_GS_OFFSET;
  int revision;
  int minor;
  int major;
  char *grass_revision;
  char *grass_minor;
  char *grass_major;
  char *verstr;
  int num_restored;
  char tmp [2048];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  __s = strdup(grass_version);
  __nptr = strtok(__s,".");
  __nptr_00 = strtok((char *)0x0,".");
  __nptr_01 = strtok((char *)0x0,".");
  lVar2 = strtol(__nptr,(char **)0x0,10);
  lVar3 = strtol(__nptr_00,(char **)0x0,10);
  strtol(__nptr_01,(char **)0x0,10);
  free(__s);
  fwrite("Restoring...",1,0xc,stdout);
  if ((lVar2 == 6) && (lVar3 < 1)) {
    iVar4 = restore_entries_gisman(gisbase);
    if (VERBOSE != 0) {
      fprintf(stdout,"\nRestored entries for GIS Manager: %i\n",iVar4);
    }
  }
  iVar4 = restore_html(gisbase);
  if (VERBOSE != 0) {
    fprintf(stdout,"\nRestored links in index.hml: %i\n",iVar4);
  }
  if (0 < iVar4) {
    if (VERBOSE == 0) {
      sprintf(tmp,
              "cp -f %s %s/etc/dm/menu.tcl ; chmod a+r %s/etc/dm/menu.tcl &> %s ; \t\t\t\t\t\t\tcp -f %s %s/docs/html/index.html ; chmod a+r %s/docs/html/index.html"
              ,TMP_GISMAN,gisbase,gisbase,TMP_NULL,TMP_HTML,gisbase,gisbase);
    }
    else {
      sprintf(tmp,
              "cp -f %s %s/etc/dm/menu.tcl ; chmod a+r %s/etc/dm/menu.tcl ; \t\t\t\t\t\t\tcp -f %s %s/docs/html/index.html ; chmod a+r %s/docs/html/index.html"
              ,TMP_GISMAN,gisbase,gisbase,TMP_HTML,gisbase,gisbase);
    }
    su(gisbase,tmp);
  }
  if (iVar4 == 0) {
    print_error(-0x1a,"could not find anything to restore.\n");
  }
  else {
    print_done();
  }
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



void list_extensions(char *gisbase)

{
  int iVar1;
  FILE *__stream;
  int *piVar2;
  char *pcVar3;
  int in_GS_OFFSET;
  FILE *f_in;
  char file [2048];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  fprintf(stdout,"\nExtensions in \'%s\' (name, version, type, depends):\n",gisbase);
  sprintf(file,"%s/etc/extensions.db",gisbase);
  __stream = fopen(file,"r");
  if (__stream == (FILE *)0x0) {
    piVar2 = __errno_location();
    if (*piVar2 == 2) {
      fwrite("NONE.\n",1,6,stderr);
      fclose((FILE *)0x0);
                    // WARNING: Subroutine does not return
      exit(0);
    }
    fclose((FILE *)0x0);
    piVar2 = __errno_location();
    pcVar3 = strerror(*piVar2);
    print_error(-0x1d,"checking for file \'%s\': %s\n",file,pcVar3);
  }
  fclose(__stream);
  dump_ascii(file,"");
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



void run_post(char *package,int action,char *bins,char *gisbase)

{
  int iVar1;
  char *local_1030;
  int in_GS_OFFSET;
  char tmp2 [2048];
  char tmp [2048];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  switch(action) {
  case 3:
    memcpy(GEM_ACTION,"GEM_ACTION=INSTALL",0x13);
    break;
  case 4:
    memcpy(GEM_ACTION,"GEM_ACTION=INSTALL",0x13);
    break;
  case 5:
    memcpy(GEM_ACTION,"GEM_ACTION=QUERY",0x11);
    break;
  case 6:
    memcpy(GEM_ACTION,"GEM_ACTION=CLEAN",0x11);
    break;
  case 7:
    memcpy(GEM_ACTION,"GEM_ACTION=LICENSE",0x13);
    break;
  case 9:
    memcpy(GEM_ACTION,"GEM_ACTION=DETAILS",0x13);
  }
  putenv(GEM_ACTION);
  if (gisbase == (char *)0x0) {
    memcpy(INSTALL_BASE,"INSTALL_BASE=UNDEFINED",0x17);
  }
  else {
    sprintf(INSTALL_BASE,"INSTALL_BASE=%s",gisbase);
  }
  putenv(INSTALL_BASE);
  getcwd(tmp,0x800);
  local_1030 = basename(package);
  sprintf(tmp2,"%s/%s/src",tmp,local_1030);
  sprintf(EXT_BASE,"EXT_BASE=%s",tmp2);
  putenv(EXT_BASE);
  if (bins == (char *)0x0) {
    memcpy(INSTALL_TYPE,"INSTALL_TYPE=src",0x11);
  }
  else {
    sprintf(INSTALL_TYPE,"INSTALL_TYPE=%s",bins,local_1030);
  }
  putenv(INSTALL_TYPE);
  sprintf(tmp,"%i",FORCE);
  sprintf(GEM_FORCE,"GEM_FORCE=%s",tmp);
  putenv(GEM_FORCE);
  sprintf(tmp,"%i",VERBOSE);
  sprintf(GEM_VERBOSE,"GEM_VERBOSE=%s",tmp);
  putenv(GEM_VERBOSE);
  memcpy(GEM_GUI,"GEM_GUI=0",10);
  putenv(GEM_GUI);
  atexit(exit_tmp);
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



void show_help(void)

{
  fwrite("Usage: gem64 [OPTION] [ACTION] [FILE|DIR]\n",1,0x2a,stdout);
  fwrite("Install a GRASS extension from FILE or DIR.\n",1,0x2c,stdout);
  fwrite("Manage (installed) GRASS extension(s).\n",1,0x27,stdout);
  fwrite("\nPossible ACTIONs are:\n",1,0x17,stdout);
  fwrite("  -i, --install=EXT\tinstall a GRASS extension\n",1,0x2e,stdout);
  fwrite("  -u, --uninstall=EXT\tremove an extension from GRASS\n",1,0x35,stdout);
  fwrite("  -q, --query=EXT\tdisplay information about extension/list installed\n",1,0x45,stdout);
  fwrite("  -d, --details=EXT\tdisplay additional details about an extension\n",1,0x42,stdout);
  fwrite("  -c, --clean=EXT\tclean extension\'s source code directories\n",1,0x3c,stdout);
  fwrite("  -t, --test=EXT\tconfigure and compile extension, but don\'t install\n",1,0x44,stdout);
  fwrite("  -l, --license=EXT\tshow copyright information for an extension\n",1,0x40,stdout);
  fwrite("  -r, --restore\t\trecreate HTML links and GIS Manager entries\n",1,0x3d,stdout);
  fwrite("  -h, --help\t\tdisplay this help and exit\n",1,0x29,stdout);
  fwrite("  -V, --version\t\toutput version information and exit\n\n",1,0x36,stdout);
  fwrite("\nPossible OPTIONs are:\n",1,0x17,stdout);
  fwrite("  -g, --grass=PATH\tpath to GRASS installation dir\n",1,0x32,stdout);
  fwrite("  -b, --binary=NAME\tno compilation: use binary files for system NAME\n",1,0x45,stdout);
  fwrite("  -f, --force\t\tforce action, regardless of dependencies\n",1,0x38,stdout);
  fwrite("  -v, --verbose\t\tdisplay detailed status information\n",1,0x35,stdout);
  fwrite("  -s, --skip-config\tskip configure script\n",1,0x2a,stdout);
  fwrite("  -x, --config-opts=OPTS\tpass OPTS to configure script\n",1,0x37,stdout);
  fwrite("  -o, --options=OPTS\toptions to pass to the C compiler/linker\n",1,0x3e,stdout);
  fwrite("  -C, --config-cmd=CMD\tDefine custom \'configure\' command (default=configure)\n",1,0x4d,
         stdout);
  fwrite("  -m, --make-cmd=CMD\tDefine custom \'make\' command (default=make)\n",1,0x41,stdout);
  fwrite("\nWhen run from within a GRASS session, locations of libs, header files\n",1,0x47,stdout);
  fwrite("and installation target dir will be assumed to match those of the active\n",1,0x49,stdout)
  ;
  fwrite("GRASS version. ",1,0xf,stdout);
  fwrite("Option -g can be used to override these or install extensions\nfrom outside",1,0x4a,stdout
        );
  fwrite("of a GRASS session.\n",1,0x14,stdout);
  fwrite("Per default, extensions will be compiled from source and then installed.\n",1,0x49,stdout)
  ;
  fwrite("If the exension package contains binaries for the user\'s platform, they can\n",1,0x4c,
         stdout);
  fwrite("be installed instead using the -b option. ",1,0x2a,stdout);
  fwrite("For installation from source code, a C compiler and make tools are needed.\n",1,0x4b,
         stdout);
  fwrite("\nExample:\n",1,10,stdout);
  fwrite("\tgem64 -b macosx --grass=/usr/local/grass-6.4.0 -i myExtension\n",1,0x3f,stdout);
  fwrite("Installs the MacOS X binaries for \'myExtension\' in /usr/local/grass-6.4.0.\n",1,0x4b,
         stdout);
                    // WARNING: Subroutine does not return
  exit(0);
}



void show_details(char *package)

{
  char *__src;
  int iVar1;
  int *piVar2;
  int error;
  char tmp [2048];
  
  __src = basename(package);
  strcpy(tmp,__src);
  iVar1 = chdir(tmp);
  if (iVar1 < 0) {
    piVar2 = __errno_location();
    __src = strerror(*piVar2);
    print_error(-2,"extension \'%s\' not accessible: (%s)\n",package,__src);
  }
  dump_ascii("info","Detailed information");
  system("sh post");
                    // WARNING: Subroutine does not return
  exit(0);
}



void show_license(char *package)

{
  char *__src;
  int iVar1;
  int *piVar2;
  int error;
  char tmp [2048];
  
  __src = basename(package);
  strcpy(tmp,__src);
  iVar1 = chdir(tmp);
  if (iVar1 < 0) {
    piVar2 = __errno_location();
    __src = strerror(*piVar2);
    print_error(-2,"extension \'%s\' not accessible: (%s)\n",package,__src);
  }
  dump_ascii("license","Detailed information");
  system("sh post");
                    // WARNING: Subroutine does not return
  exit(0);
}



void show_version(void)

{
  fprintf(stdout,"gem64 (GRASS extensions manager) %.2f\n");
  fwrite("Written by Benjamin Ducke\n",1,0x1a,stdout);
  fwrite("\nCopyright (C) 2005 Benjamin Ducke\n",1,0x23,stdout);
  fwrite("This is free software; see the source for copying conditions.  There is NO\n",1,0x4b,
         stdout);
  fwrite("warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.\n",1,0x4c,
         stdout);
                    // WARNING: Subroutine does not return
  exit(0);
}



void get_configure_options(char *gisbase)

{
  int iVar1;
  FILE *stream;
  char *pcVar2;
  int in_GS_OFFSET;
  FILE *fp;
  char str [2048];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  if (CONFIG_OPTS[0] == '\0') {
    sprintf(str,"%s/etc/config.system",gisbase);
    stream = (FILE *)fopen(str,"r");
    if (stream == (FILE *)0x0) {
      print_warning("could not open %s for read access. Using default configure options.\n",str);
    }
    else {
      pcVar2 = nc_fgets_nb(str,0x800,stream);
      if (pcVar2 != (char *)0x0) {
        strcpy(CONFIG_OPTS,str);
      }
    }
  }
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



int main(int argc,char **argv)

{
  option long_options [20];
  size_t sVar1;
  int *local_3960;
  int *piVar2;
  int iVar3;
  int in_GS_OFFSET;
  stat buf2;
  stat buf;
  int option_index;
  int dir_found;
  dirent *dir_entry;
  DIR *dir;
  int is_directory;
  int error;
  int valid;
  int action;
  int option;
  int revision;
  int minor;
  int major;
  int fd;
  FILE *f;
  int pkg_revision;
  int pkg_minor;
  int pkg_major;
  char *bins;
  char *filepart;
  char *url;
  char *tmp;
  char *grass_revision;
  char *grass_minor;
  char *grass_major;
  char *grass_version;
  char *gisbase;
  char coptions [2048];
  char invocation [2048];
  char pkg_short_name [2048];
  char pkg_name [2048];
  char orgname [2048];
  char package [2048];
  char version_file [2048];
  char *local_3968;
  option *local_3964;
  stat local_393c;
  stat local_38e4;
  int local_388c;
  int local_3888;
  dirent *local_3884;
  DIR *local_3880;
  undefined4 local_387c;
  int local_3878;
  int local_3874;
  int local_3870;
  int local_386c;
  int *local_3868;
  FILE *local_3864;
  long local_3860;
  int local_385c;
  FILE *local_3858;
  int local_3854;
  int local_3850;
  char *local_384c;
  char *local_3848;
  char *local_3844;
  char *local_3840;
  char *local_383c;
  char *local_3838;
  char *local_3834;
  char *local_3830;
  char *local_382c;
  FILE *local_3828;
  char local_3824 [2048];
  char local_3024 [2048];
  char local_2824 [2048];
  char local_2024 [2048];
  char local_1824 [2048];
  char local_1024 [2048];
  char local_824 [2048];
  undefined4 local_24;
  
  local_24 = *(undefined4 *)(in_GS_OFFSET + 0x14);
  local_387c = 0;
  local_388c = 0;
  VERBOSE = 0;
  TMPCLEAN = 0;
  TMPDBCLEAN = 0;
  FORCE = 0;
  UPGRADE = 0;
  ERROR = 0;
  WARNINGS = 0;
  SKIP_CFG = 0;
  memcpy(GISMAN_CMD,&DAT_08057925,1);
  memcpy(GISMAN2_CMD,&DAT_08057925,1);
  memcpy(QGIS_CMD,&DAT_08057925,1);
  memcpy(UNINSTALL_CMD,&DAT_08057925,1);
  memcpy(HTML_CMD,&DAT_08057925,1);
  memcpy(TMPDIR,&DAT_08057925,1);
  memcpy(TMPDB,&DAT_08057925,1);
  memcpy(TMP_GISMAN,&DAT_08057925,1);
  memcpy(TMP_DESCR,&DAT_08057925,1);
  memcpy(TMP_INFO,&DAT_08057925,1);
  memcpy(TMP_DEPS,&DAT_08057925,1);
  memcpy(TMP_BUGS,&DAT_08057925,1);
  memcpy(TMP_AUTHORS,&DAT_08057925,1);
  memcpy(TMP_HTML,&DAT_08057925,1);
  memcpy(TMP_NULL,&DAT_08057925,1);
  memcpy(CONFIG_OPTS,&DAT_08057925,1);
  memcpy(CONFIG_CMD,"configure",10);
  memcpy(MAKE_CMD,&DAT_08057930,5);
  getcwd(CWD,0x800);
  fwrite(&DAT_08057935,1,4,stdout);
  local_383c = (char *)malloc(0x800);
  strcpy(local_3024,*argv);
  setvbuf(stdout,(char *)0x0,2,0);
  if (argc == 1) {
    show_help();
                    // WARNING: Subroutine does not return
    exit(0);
  }
  atexit(exit_msg);
  local_3874 = 0;
  local_3848 = (char *)0x0;
  local_3828 = (FILE *)0x0;
  opterr = 0;
  local_3960 = &local_388c;
  local_3964 = (option *)&ram0x08059100;
  local_3968 = ":i:u:q:d:c:C:t:l:m:o:x:rhVg:b:fvs";
  local_386c = getopt_long(argc,argv,":i:u:q:d:c:C:t:l:m:o:x:rhVg:b:fvs",0x8059100,local_3960);
  while (local_386c != -1) {
    if (local_386c == 0x3f) {
      print_error(-1,"unknown option or action specified.\n",local_3968,local_3964,local_3960);
    }
    if (local_386c == 0x3a) {
      if (((((optopt == 0x69) || (optopt == 0x75)) || (optopt == 100)) ||
          ((optopt == 99 || (optopt == 0x74)))) || ((optopt == 0x6c || (optopt == 0x72)))) {
        print_error(-1,"missing file or directory name.\n",local_3968,local_3964,local_3960);
      }
      if (optopt == 0x67) {
        print_error(-1,"missing path to GRASS 6.\n",local_3968,local_3964,local_3960);
      }
      if (optopt == 0x62) {
        print_error(-1,"missing name of binary architecture.\n");
      }
      if (optopt == 0x62) {
        print_error(-1,"missing configure options.\n");
      }
      if (optopt == 0x71) {
        local_3870 = 0xc;
        local_3874 = local_3874 + 1;
        break;
      }
    }
    if ((((local_386c == 0x69) || (local_386c == 0x75)) ||
        ((local_386c == 0x71 ||
         (((local_386c == 100 || (local_386c == 99)) || (local_386c == 0x74)))))) ||
       (((local_386c == 0x6c || (local_386c == 0x72)) ||
        ((local_386c == 0x68 || (local_386c == 0x56)))))) {
      local_3874 = local_3874 + 1;
      switch(local_386c) {
      case 0x56:
        local_3870 = 2;
        break;
      case 99:
        local_3870 = 6;
        break;
      case 100:
        local_3870 = 9;
        break;
      case 0x68:
        local_3870 = 1;
        break;
      case 0x69:
        if (local_3870 != 4) {
          local_3870 = 3;
        }
        break;
      case 0x6c:
        local_3870 = 7;
        break;
      case 0x71:
        local_3870 = 5;
        break;
      case 0x72:
        local_3870 = 0xb;
        break;
      case 0x74:
        local_3870 = 8;
        break;
      case 0x75:
        local_3870 = 10;
      }
      if (optarg != (char *)0x0) {
        strcpy(local_1024,optarg);
        strcpy(local_1824,optarg);
      }
    }
    if (local_386c == 0x67) {
      sVar1 = strlen(optarg);
      local_3828 = (FILE *)malloc(sVar1 + 1);
      strcpy((char *)local_3828,optarg);
    }
    if (local_386c == 0x62) {
      sVar1 = strlen(optarg);
      local_3848 = (char *)malloc(sVar1 + 1);
      strcpy(local_3848,optarg);
      local_3870 = 4;
    }
    if (local_386c == 0x78) {
      strcpy(CONFIG_OPTS,optarg);
    }
    if (local_386c == 0x66) {
      FORCE = 1;
    }
    if (local_386c == 0x76) {
      VERBOSE = 1;
    }
    if (local_386c == 0x73) {
      SKIP_CFG = 1;
    }
    if (local_386c == 0x6f) {
      strcat(local_3824,optarg);
    }
    if (local_386c == 0x43) {
      strcpy(CONFIG_CMD,optarg);
    }
    if (local_386c == 0x6d) {
      strcpy(MAKE_CMD,optarg);
    }
    local_3960 = &local_388c;
    local_3964 = (option *)0x8059100;
    local_3968 = ":i:u:q:d:c:t:l:o:x:rhVg:b:fvs";
    local_386c = getopt_long(argc,argv);
  }
  if (local_3874 < 1) {
    print_error(-1,"please specify a valid action.\n",local_3968,local_3964,local_3960);
  }
  if (1 < local_3874) {
    print_error(-1,"please specify only one action.\n",local_3968,local_3964,local_3960);
  }
  sprintf(GEM_C_OPTS,"GEM_C_OPTS=%s",local_3824);
  putenv(GEM_C_OPTS);
  if (local_3870 == 1) {
    show_help();
                    // WARNING: Subroutine does not return
    exit(0);
  }
  if (local_3870 == 2) {
    show_version();
                    // WARNING: Subroutine does not return
    exit(0);
  }
  if (VERBOSE == 0) {
    memcpy(TMP_NULL,"/tmp/grass.extension.log.XXXXXX",0x20);
    mkstemp(TMP_NULL);
    local_385c = open(TMP_NULL,0x40,0x1ff);
    if (local_385c == -1) {
      local_3960 = __errno_location();
      local_3968 = strerror(*local_3960);
      print_error(-0x1e,"could not create temp file: %s",local_3968);
                    // WARNING: Subroutine does not return
      exit(-0x1e);
    }
  }
  if (local_3870 == 0xb) {
    if ((local_3828 == (FILE *)0x0) &&
       (local_3828 = (FILE *)getenv("GISBASE"), local_3828 == (FILE *)0x0)) {
      print_error(-1,"GISBASE environment variable not set and path to GRASS not given.\n");
    }
    if (VERBOSE != 0) {
      fprintf(stdout,"Path to GRASS is %s.\n",local_3828);
    }
    restore((char *)local_3828,local_382c);
                    // WARNING: Subroutine does not return
    exit(0);
  }
  if (local_3870 == 0xc) {
    if ((local_3828 == (FILE *)0x0) &&
       (local_3828 = (FILE *)getenv("GISBASE"), local_3828 == (FILE *)0x0)) {
      print_error(-1,"GISBASE environment variable not set and path to GRASS not given.\n");
    }
    if (VERBOSE != 0) {
      fprintf(stdout,"Path to GRASS is %s.\n",local_3828);
    }
    list_extensions((char *)local_3828);
                    // WARNING: Subroutine does not return
    exit(0);
  }
  local_3968 = strstr(local_1024,"http://");
  if ((local_3968 != (char *)0x0) ||
     (local_3968 = strstr(local_1024,"ftp://"), local_3968 != (char *)0x0)) {
    wget_extension(local_1024);
    local_3840 = (char *)malloc(0x800);
    strcpy(local_3840,local_1024);
    local_3844 = strrchr(local_3840,0x2f);
    local_3844 = local_3844 + 1;
    strcpy(local_1024,local_3844);
    free(local_3840);
  }
  if (VERBOSE != 0) {
    fprintf(stdout,"Extension location is \'%s\'.\n",local_1024);
  }
  if (local_3870 != 10) {
    local_3878 = stat(local_1024,&local_38e4);
    if (local_3878 < 0) {
      piVar2 = __errno_location();
      local_3964 = (option *)strerror(*piVar2);
      print_error(-2,"extension FILE or DIR \'%s\' invalid: %s\n",local_1024,local_3964);
    }
    if ((local_38e4.st_mode & 0xf000) == 0x4000) {
      local_387c = 1;
      if (VERBOSE != 0) {
        local_3964 = (option *)stdout;
        fwrite("Extension files stored in a directory.\n",1,0x27,stdout);
      }
    }
    else {
      if (VERBOSE != 0) {
        local_3964 = (option *)stdout;
        fwrite("Extension files stored in a package file.\n",1,0x2a,stdout);
      }
      unpack_extension(local_1024);
      local_3880 = opendir(TMPDIR);
      local_3884 = readdir(local_3880);
      local_3888 = 0;
      while (local_3884 != (dirent *)0x0) {
        iVar3 = strcmp(local_3884->d_name,".");
        if ((iVar3 != 0) && (iVar3 = strcmp(local_3884->d_name,".."), iVar3 != 0)) {
          local_3964 = (option *)local_3884->d_name;
          sprintf(local_383c,"%s/%s",TMPDIR,local_3964);
          stat(local_383c,&local_393c);
          if ((local_393c.st_mode & 0xf000) == 0x4000) {
            local_3888 = 1;
            break;
          }
        }
        local_3884 = readdir(local_3880);
      }
      strcpy(local_1024,local_383c);
      if (local_3888 == 0) {
        print_error(-7,"no top-level directory found in extension package.\n");
      }
    }
  }
  if (local_3870 == 10) {
    strcpy(local_2824,local_1024);
  }
  else {
    get_package_name(local_1024,local_2824);
  }
  if (0 < local_3874) {
    if (local_3828 == (FILE *)0x0) {
      local_3828 = (FILE *)getenv("GISBASE");
    }
    local_3964 = (option *)local_3828;
    run_post(local_1024,local_3870,local_3848,(char *)local_3828);
  }
  if (VERBOSE != 0) {
    fprintf(stdout,"Extension will be installed from \'%s\'\n",local_1024);
  }
  if (local_3870 != 10) {
    local_3960 = &local_3854;
    local_3964 = (option *)&local_3850;
    check_extension(local_1024,local_2024,(int *)(&local_3850 + 4),(int *)local_3964,local_3960);
  }
  if (local_3870 == 5) {
    query_extension(local_1024,local_2024,(int)local_384c,local_3850,local_3854,local_2824,
                    local_3024,local_1824);
                    // WARNING: Subroutine does not return
    exit(0);
  }
  if (local_3870 == 9) {
    show_details(local_1024);
                    // WARNING: Subroutine does not return
    exit(0);
  }
  if (local_3870 == 7) {
    show_license(local_1024);
                    // WARNING: Subroutine does not return
    exit(0);
  }
  if (local_3870 == 6) {
    source_clean(local_1024);
                    // WARNING: Subroutine does not return
    exit(0);
  }
  if ((local_3828 == (FILE *)0x0) &&
     (local_3828 = (FILE *)getenv("GISBASE"), local_3828 == (FILE *)0x0)) {
    print_error(-1,"GISBASE environment variable not set and path to GRASS not given.\n");
  }
  if (VERBOSE != 0) {
    fprintf(stdout,"Path to GRASS is %s.\n",local_3828);
  }
  local_382c = getenv("GRASS_VERSION");
  if (local_382c == (char *)0x0) {
    sprintf(local_824,"%s/etc/VERSIONNUMBER",local_3828);
    local_3858 = fopen(local_824,"r");
    if (local_3858 == (FILE *)0x0) {
      print_error(-0xb,"Could not read GRASS version. Did you specify the right path?\n");
    }
    else {
      local_382c = (char *)malloc(0x10);
      local_3878 = __isoc99_fscanf(local_3858,&DAT_08057c8b,local_382c);
      fclose(local_3858);
      if (local_3878 < 1) {
        print_error(-0xb,"Could not read GRASS version. Did you specify the right path?\n");
      }
    }
  }
  if (local_382c != (char *)0x0) {
    local_383c = strdup(local_382c);
    local_3830 = strtok(local_383c,".");
    local_3834 = strtok((char *)0x0,".");
    local_3838 = strtok((char *)0x0,".");
    local_3860 = strtol(local_3830,(char **)0x0,10);
    local_3864 = (FILE *)strtol(local_3834,(char **)0x0,10);
    local_3868 = (int *)strtol(local_3838,(char **)0x0,10);
    local_382c = (char *)malloc(0x800);
    local_3964 = (option *)local_3864;
    local_3960 = local_3868;
    sprintf(local_382c,"%i.%i.%i",local_3860,local_3864,local_3868);
    if (VERBOSE != 0) {
      fprintf(stdout,"GRASS version is %s.\n",local_382c);
    }
    if (local_3860 < 6) {
      print_error(-0xb,"extensions only work with GRASS version 6 and above.\n");
    }
  }
  sprintf(local_3824,"-L%s/lib -I/usr/local/grasslib/include/ ",local_3828,local_3964,local_3960);
  if (local_3870 == 3) {
    source_install(local_1024,(char *)local_3828,local_2824,(int)local_384c,local_3850,local_3854,
                   local_382c);
                    // WARNING: Subroutine does not return
    exit(0);
  }
  if (local_3870 == 10) {
    uninstall(local_1024,local_2824,(char *)local_3828,local_382c);
                    // WARNING: Subroutine does not return
    exit(0);
  }
  if (local_3870 == 8) {
    test_install(local_1024,(char *)local_3828,local_2824,(int)local_384c,local_3850,local_3854,
                 local_382c);
                    // WARNING: Subroutine does not return
    exit(0);
  }
  if (local_3870 == 4) {
    iVar3 = binaries_exist(local_1024,local_3848);
    if (iVar3 != 0) {
      bin_install(local_1024,(char *)local_3828,local_3848,local_2824,(int)local_384c,local_3850,
                  local_3854,local_382c);
                    // WARNING: Subroutine does not return
      exit(0);
    }
    print_error(-0xc,"no binaries for system \'%s\'\n",local_3848);
  }
                    // WARNING: Subroutine does not return
  exit(0);
}



void __libc_csu_fini(void)

{
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx
// WARNING: Removing unreachable block (ram,0x0805471e)
// WARNING: Removing unreachable block (ram,0x08054720)

void __libc_csu_init(void)

{
  EVP_PKEY_CTX *local_2c;
  
  _init(local_2c);
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

int stat(char *__file,stat *__buf)

{
  int iVar1;
  
  iVar1 = __xstat(3,__file,__buf);
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


