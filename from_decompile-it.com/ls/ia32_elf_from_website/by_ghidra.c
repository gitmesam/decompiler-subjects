typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef long double    longdouble;
typedef long long    longlong;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined5;
typedef unsigned long long    undefined7;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef int    wchar_t;
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

typedef struct winsize winsize, *Pwinsize;

struct winsize {
    ushort ws_row;
    ushort ws_col;
    ushort ws_xpixel;
    ushort ws_ypixel;
};

typedef struct hash_table hash_table, *Phash_table;


// WARNING! conflicting data type names: /DWARF/stddef.h/size_t - /stddef.h/size_t

typedef struct hash_entry hash_entry, *Phash_entry;

typedef struct hash_tuning hash_tuning, *Phash_tuning;

typedef struct hash_tuning Hash_tuning;

struct hash_table {
    struct hash_entry * bucket;
    struct hash_entry * bucket_limit;
    size_t n_buckets;
    size_t n_buckets_used;
    size_t n_entries;
    Hash_tuning * tuning;
    size_t (* hasher)(void *, size_t);
    _Bool (* comparator)(void *, void *);
    void (* data_freer)(void *);
    struct hash_entry * free_entry_list;
};

struct hash_entry {
    void * data;
    struct hash_entry * next;
};

struct hash_tuning {
    float shrink_threshold;
    float shrink_factor;
    float growth_threshold;
    float growth_factor;
    _Bool is_n_buckets;
    undefined field_0x11;
    undefined field_0x12;
    undefined field_0x13;
};

typedef struct hash_table Hash_table;

typedef struct _obstack_chunk _obstack_chunk, *P_obstack_chunk;

struct _obstack_chunk {
    char * limit;
    struct _obstack_chunk * prev;
    char contents[4];
};

typedef union anon_union.conflict2 anon_union.conflict2, *Panon_union.conflict2;

union anon_union.conflict2 {
    int tempint;
    void * tempptr;
};

typedef enum time_style {
    full_iso_time_style=0,
    iso_time_style=2,
    locale_time_style=3,
    long_iso_time_style=1
} time_style;

typedef struct fileinfo fileinfo, *Pfileinfo;

typedef enum filetype {
    arg_directory=9,
    blockdev=4,
    chardev=2,
    directory=3,
    fifo=1,
    normal=5,
    sock=7,
    symbolic_link=6,
    unknown=0,
    whiteout=8
} filetype;

typedef __mode_t mode_t;

struct fileinfo {
    char * name;
    char * linkname;
    struct stat stat;
    enum filetype filetype;
    mode_t linkmode;
    char * scontext;
    _Bool stat_ok;
    _Bool linkok;
    _Bool have_acl;
    undefined field_0x77;
};

typedef struct color_ext_type color_ext_type, *Pcolor_ext_type;

typedef struct bin_str bin_str, *Pbin_str;

struct bin_str {
    size_t len;
    char * string;
};

struct color_ext_type {
    struct bin_str ext;
    struct bin_str seq;
    struct color_ext_type * next;
};

typedef enum sort_type {
    sort_extension=1,
    sort_name=0,
    sort_none=-1,
    sort_numtypes=5,
    sort_size=2,
    sort_time=4,
    sort_version=3
} sort_type;

typedef enum indicator_style {
    classify=3,
    file_type=2,
    none=0,
    slash=1
} indicator_style;

typedef enum indicator_no {
    C_BLK=9,
    C_CHR=10,
    C_DIR=5,
    C_DOOR=14,
    C_END=2,
    C_EXEC=13,
    C_FIFO=7,
    C_FILE=4,
    C_LEFT=0,
    C_LINK=6,
    C_MISSING=11,
    C_NORM=3,
    C_ORPHAN=12,
    C_OTHER_WRITABLE=18,
    C_RIGHT=1,
    C_SETGID=16,
    C_SETUID=15,
    C_SOCK=8,
    C_STICKY=17,
    C_STICKY_OTHER_WRITABLE=19
} indicator_no;

typedef enum time_type {
    time_atime=2,
    time_ctime=1,
    time_mtime=0,
    time_numtypes=3
} time_type;

typedef struct column_info column_info, *Pcolumn_info;

struct column_info {
    _Bool valid_len;
    undefined field_0x1;
    undefined field_0x2;
    undefined field_0x3;
    size_t line_len;
    size_t * col_arr;
};

typedef enum color_type {
    color_always=1,
    color_if_tty=2,
    color_never=0
} color_type;

typedef void * V;

typedef struct ignore_pattern ignore_pattern, *Pignore_pattern;

struct ignore_pattern {
    char * pattern;
    struct ignore_pattern * next;
};

typedef enum Dereference_symlink {
    DEREF_ALWAYS=5,
    DEREF_COMMAND_LINE_ARGUMENTS=3,
    DEREF_COMMAND_LINE_SYMLINK_TO_DIR=4,
    DEREF_NEVER=2,
    DEREF_UNDEFINED=1
} Dereference_symlink;

typedef enum format {
    horizontal=3,
    long_format=0,
    many_per_line=2,
    one_per_line=1,
    with_commas=4
} format;

typedef struct pending pending, *Ppending;

struct pending {
    char * name;
    char * realname;
    _Bool command_line_arg;
    undefined field_0x9;
    undefined field_0xa;
    undefined field_0xb;
    struct pending * next;
};

typedef enum anon_enum_32 {
    ST_BACKSLASH=1,
    ST_CARET=4,
    ST_END=5,
    ST_ERROR=6,
    ST_GND=0,
    ST_HEX=3,
    ST_OCTAL=2
} anon_enum_32;

typedef int __ssize_t;

typedef __ssize_t ssize_t;

typedef int __pid_t;

typedef __uid_t uid_t;

typedef __ino64_t ino_t;

typedef __off64_t off_t;

typedef __gid_t gid_t;

typedef long __suseconds_t;

typedef long __clock_t;

typedef __dev_t dev_t;

typedef struct passwd passwd, *Ppasswd;

struct passwd {
    char * pw_name;
    char * pw_passwd;
    __uid_t pw_uid;
    __gid_t pw_gid;
    char * pw_gecos;
    char * pw_dir;
    char * pw_shell;
};


// WARNING! conflicting data type names: /DWARF/dirent.h/anon_enum_32 - /DWARF/ls.c/get_funky_string/anon_enum_32

typedef struct __dirstream __dirstream, *P__dirstream;

typedef struct __dirstream DIR;

struct __dirstream {
};

typedef struct dirent dirent, *Pdirent;

struct dirent {
    __ino64_t d_ino;
    __off64_t d_off;
    ushort d_reclen;
    uchar d_type;
    char d_name[256];
    undefined field_0x113;
};

typedef union sigval sigval, *Psigval;

typedef union sigval sigval_t;

union sigval {
    int sival_int;
    void * sival_ptr;
};

typedef struct anon_struct anon_struct, *Panon_struct;

struct anon_struct {
    __pid_t si_pid;
    __uid_t si_uid;
};

typedef struct siginfo siginfo, *Psiginfo;

typedef union anon_union_for__sifields anon_union_for__sifields, *Panon_union_for__sifields;

typedef struct anon_struct.conflict anon_struct.conflict, *Panon_struct.conflict;

typedef struct anon_struct.conflict1 anon_struct.conflict1, *Panon_struct.conflict1;

typedef struct anon_struct.conflict2 anon_struct.conflict2, *Panon_struct.conflict2;

typedef struct anon_struct.conflict3 anon_struct.conflict3, *Panon_struct.conflict3;

typedef struct anon_struct.conflict4 anon_struct.conflict4, *Panon_struct.conflict4;

struct anon_struct.conflict4 {
    long si_band;
    int si_fd;
};

struct anon_struct.conflict3 {
    void * si_addr;
};

struct anon_struct.conflict2 {
    __pid_t si_pid;
    __uid_t si_uid;
    int si_status;
    __clock_t si_utime;
    __clock_t si_stime;
};

struct anon_struct.conflict1 {
    __pid_t si_pid;
    __uid_t si_uid;
    sigval_t si_sigval;
};

struct anon_struct.conflict {
    int si_tid;
    int si_overrun;
    sigval_t si_sigval;
};

union anon_union_for__sifields {
    int _pad[29];
    struct anon_struct _kill;
    struct anon_struct.conflict _timer;
    struct anon_struct.conflict1 _rt;
    struct anon_struct.conflict2 _sigchld;
    struct anon_struct.conflict3 _sigfault;
    struct anon_struct.conflict4 _sigpoll;
};

struct siginfo {
    int si_signo;
    int si_errno;
    int si_code;
    union anon_union_for__sifields _sifields;
};

typedef struct siginfo siginfo_t;

typedef union anon_union.conflict anon_union.conflict, *Panon_union.conflict;

union anon_union.conflict {
    int _pad[29];
    struct anon_struct _kill;
    struct anon_struct.conflict _timer;
    struct anon_struct.conflict1 _rt;
    struct anon_struct.conflict2 _sigchld;
    struct anon_struct.conflict3 _sigfault;
    struct anon_struct.conflict4 _sigpoll;
};

typedef struct lconv lconv, *Plconv;

struct lconv {
    char * decimal_point;
    char * thousands_sep;
    char * grouping;
    char * int_curr_symbol;
    char * currency_symbol;
    char * mon_decimal_point;
    char * mon_thousands_sep;
    char * mon_grouping;
    char * positive_sign;
    char * negative_sign;
    char int_frac_digits;
    char frac_digits;
    char p_cs_precedes;
    char p_sep_by_space;
    char n_cs_precedes;
    char n_sep_by_space;
    char p_sign_posn;
    char n_sign_posn;
    char int_p_cs_precedes;
    char int_p_sep_by_space;
    char int_n_cs_precedes;
    char int_n_sep_by_space;
    char int_p_sign_posn;
    char int_n_sign_posn;
    undefined field_0x36;
    undefined field_0x37;
};

typedef ushort fpucw_t;

typedef struct char_directives char_directives, *Pchar_directives;

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

struct char_directives {
    size_t count;
    struct char_directive * dir;
    size_t max_width_length;
    size_t max_precision_length;
};

typedef char * __gnuc_va_list;

typedef __gnuc_va_list va_list;

typedef struct sigaction sigaction, *Psigaction;

typedef union anon_union_for___sigaction_handler anon_union_for___sigaction_handler, *Panon_union_for___sigaction_handler;

typedef struct __sigset_t __sigset_t, *P__sigset_t;

struct __sigset_t {
    ulong __val[32];
};

union anon_union_for___sigaction_handler {
    void (* sa_handler)(int);
    void (* sa_sigaction)(int, siginfo_t *, void *);
};

struct sigaction {
    union anon_union_for___sigaction_handler __sigaction_handler;
    struct __sigset_t sa_mask;
    int sa_flags;
    void (* sa_restorer)(void);
};

typedef union anon_union.conflict1 anon_union.conflict1, *Panon_union.conflict1;

union anon_union.conflict1 {
    void (* sa_handler)(int);
    void (* sa_sigaction)(int, siginfo_t *, void *);
};

typedef uint wint_t;

typedef int ptrdiff_t;


// WARNING! conflicting data type names: /DWARF/stddef.h/wchar_t - /wchar_t

typedef int __sig_atomic_t;

typedef __sig_atomic_t sig_atomic_t;


// WARNING! conflicting data type names: /DWARF/libio.h/_IO_marker - /libio.h/_IO_marker

typedef struct slotvec slotvec, *Pslotvec;

struct slotvec {
    size_t size;
    char * val;
};

typedef struct userid userid, *Puserid;

typedef union anon_union_for_id anon_union_for_id, *Panon_union_for_id;

union anon_union_for_id {
    uid_t u;
    gid_t g;
};

struct userid {
    union anon_union_for_id id;
    struct userid * next;
    char[0] name;
};

typedef union anon_union.conflict3 anon_union.conflict3, *Panon_union.conflict3;

union anon_union.conflict3 {
    uid_t u;
    gid_t g;
};


// WARNING! conflicting data type names: /DWARF/stdio.h/_IO_FILE - /stdio.h/_IO_FILE

typedef struct _IO_FILE FILE;

typedef struct obstack obstack, *Pobstack;

typedef union anon_union_for_temp anon_union_for_temp, *Panon_union_for_temp;

union anon_union_for_temp {
    int tempint;
    void * tempptr;
};

struct obstack {
    long chunk_size;
    struct _obstack_chunk * chunk;
    char * object_base;
    char * next_free;
    char * chunk_limit;
    union anon_union_for_temp temp;
    int alignment_mask;
    _obstack_chunk * (* chunkfun)(void *, long);
    void (* freefun)(void *, struct _obstack_chunk *);
    void * extra_arg;
    uint use_extra_arg:1;
    uint maybe_empty_object:1;
    uint alloc_failed:1;
    undefined field_0x29;
    undefined field_0x2a;
    undefined field_0x2b;
};

typedef int __jmp_buf[6];

typedef struct __jmp_buf_tag __jmp_buf_tag, *P__jmp_buf_tag;

struct __jmp_buf_tag {
    __jmp_buf __jmpbuf;
    int __mask_was_saved;
    struct __sigset_t __saved_mask;
};

typedef struct __jmp_buf_tag jmp_buf[1];

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

typedef struct dev_ino dev_ino, *Pdev_ino;

struct dev_ino {
    ino_t st_ino;
    dev_t st_dev;
};

typedef union anon_union anon_union, *Panon_union;

union anon_union {
    uint __wch;
    char __wchb[4];
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

typedef struct tm tm, *Ptm;

struct tm {
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
    long tm_gmtoff;
    char * tm_zone;
};

typedef struct __mbstate_t mbstate_t;

typedef enum strtol_error {
    LONGINT_INVALID=4,
    LONGINT_INVALID_SUFFIX_CHAR=2,
    LONGINT_INVALID_SUFFIX_CHAR_WITH_OVERFLOW=3,
    LONGINT_OK=0,
    LONGINT_OVERFLOW=1
} strtol_error;

typedef struct option option, *Poption;

struct option {
    char * name;
    int has_arg;
    int * flag;
    int val;
};

typedef struct timeval timeval, *Ptimeval;

struct timeval {
    __time_t tv_sec;
    __suseconds_t tv_usec;
};

typedef __time_t time_t;

typedef union anon_union.conflict4 anon_union.conflict4, *Panon_union.conflict4;

union anon_union.conflict4 {
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

typedef struct arguments arguments, *Parguments;

struct arguments {
    size_t count;
    struct argument * arg;
};

typedef struct __sigset_t sigset_t;

typedef ulonglong uintmax_t;

typedef longlong intmax_t;

typedef struct group group, *Pgroup;

struct group {
    char * gr_name;
    char * gr_passwd;
    __gid_t gr_gid;
    char * * gr_mem;
};

typedef struct timezone timezone, *Ptimezone;

struct timezone {
    int tz_minuteswest;
    int tz_dsttime;
};

typedef int __clockid_t;

typedef __clockid_t clockid_t;


// WARNING! conflicting data type names: /time.h/timeval - /DWARF/time.h/timeval

typedef struct timezone * __timezone_ptr_t;


// WARNING! conflicting data type names: /time.h/tm - /DWARF/wchar.h/tm


// WARNING! conflicting data type names: /sigaction.h/sigaction - /DWARF/sigaction.h/sigaction

typedef union _union_1048 _union_1048, *P_union_1048;


// WARNING! conflicting data type names: /siginfo.h/siginfo_t - /DWARF/siginfo.h/siginfo_t

typedef void (* __sighandler_t)(int);

union _union_1048 {
    __sighandler_t sa_handler;
    void (* sa_sigaction)(int, siginfo_t *, void *);
};


// WARNING! conflicting data type names: /stdio.h/FILE - /DWARF/stdio.h/FILE


// WARNING! conflicting data type names: /pthread.h/__jmp_buf_tag - /DWARF/setjmp.h/__jmp_buf_tag


// WARNING! conflicting data type names: /select.h/sigset_t - /DWARF/select.h/sigset_t


// WARNING! conflicting data type names: /pwd.h/passwd - /DWARF/pwd.h/passwd

typedef struct evp_pkey_ctx_st evp_pkey_ctx_st, *Pevp_pkey_ctx_st;

struct evp_pkey_ctx_st {
};

typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;


// WARNING! conflicting data type names: /sigset.h/__sigset_t - /DWARF/sigset.h/__sigset_t

typedef struct dirent64 dirent64, *Pdirent64;

struct dirent64 {
    __ino64_t d_ino;
    __off64_t d_off;
    ushort d_reclen;
    uchar d_type;
    char d_name[256];
};


// WARNING! conflicting data type names: /dirent.h/__dirstream - /DWARF/_UNCATEGORIZED_/__dirstream


// WARNING! conflicting data type names: /dirent.h/DIR - /DWARF/dirent.h/DIR


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


// WARNING! conflicting data type names: /locale.h/lconv - /DWARF/locale.h/lconv


// WARNING! conflicting data type names: /grp.h/group - /DWARF/grp.h/group


// WARNING! conflicting data type names: /siginfo.h/sigval_t - /DWARF/siginfo.h/sigval_t


// WARNING! conflicting data type names: /siginfo.h/sigval - /DWARF/siginfo.h/sigval


// WARNING! conflicting data type names: /siginfo.h/siginfo - /DWARF/siginfo.h/siginfo

typedef struct _struct_1029 _struct_1029, *P_struct_1029;

struct _struct_1029 {
    __pid_t si_pid;
    __uid_t si_uid;
};

typedef struct _struct_1034 _struct_1034, *P_struct_1034;

struct _struct_1034 {
    long si_band;
    int si_fd;
};

typedef struct _struct_1033 _struct_1033, *P_struct_1033;

struct _struct_1033 {
    void * si_addr;
};

typedef struct _struct_1032 _struct_1032, *P_struct_1032;

struct _struct_1032 {
    __pid_t si_pid;
    __uid_t si_uid;
    int si_status;
    __clock_t si_utime;
    __clock_t si_stime;
};

typedef struct _struct_1031 _struct_1031, *P_struct_1031;

struct _struct_1031 {
    __pid_t si_pid;
    __uid_t si_uid;
    sigval_t si_sigval;
};

typedef struct _struct_1030 _struct_1030, *P_struct_1030;

struct _struct_1030 {
    int si_tid;
    int si_overrun;
    sigval_t si_sigval;
};

typedef union _union_1028 _union_1028, *P_union_1028;

union _union_1028 {
    int _pad[125];
    struct _struct_1029 _kill;
    struct _struct_1030 _timer;
    struct _struct_1031 _rt;
    struct _struct_1032 _sigchld;
    struct _struct_1033 _sigfault;
    struct _struct_1034 _sigpoll;
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



// WARNING: Unknown calling convention yet parameter storage is locked

int putc_unlocked(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = putc_unlocked(__c,__stream);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int sigemptyset(sigset_t *__set)

{
  int iVar1;
  
  iVar1 = sigemptyset(__set);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = sprintf(__s,__format);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

lconv * localeconv(void)

{
  lconv *plVar1;
  
  plVar1 = localeconv();
  return plVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int dirfd(DIR *__dirp)

{
  int iVar1;
  
  iVar1 = dirfd(__dirp);
  return iVar1;
}



void __cxa_atexit(void)

{
  __cxa_atexit();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int strcoll(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = strcoll(__s1,__s2);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = memcmp(__s1,__s2,__n);
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



// WARNING: Unknown calling convention yet parameter storage is locked

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
  __sighandler_t p_Var1;
  
  p_Var1 = signal(__sig,__handler);
  return p_Var1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int sigismember(sigset_t *__set,int __signo)

{
  int iVar1;
  
  iVar1 = sigismember(__set,__signo);
  return iVar1;
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

int __xstat64(int __ver,char *__filename,stat64 *__stat_buf)

{
  int iVar1;
  
  iVar1 = __xstat64(__ver,__filename,__stat_buf);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

tm * localtime(time_t *__timer)

{
  tm *ptVar1;
  
  ptVar1 = localtime(__timer);
  return ptVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

group * getgrnam(char *__name)

{
  group *pgVar1;
  
  pgVar1 = getgrnam(__name);
  return pgVar1;
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

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = strncpy(__dest,__src,__n);
  return pcVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

uint gnu_dev_minor(ulonglong __dev)

{
  uint uVar1;
  
  uVar1 = gnu_dev_minor(__dev);
  return uVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int toupper(int __c)

{
  int iVar1;
  
  iVar1 = toupper(__c);
  return iVar1;
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

void * mempcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = mempcpy(__dest,__src,__n);
  return pvVar1;
}



void _obstack_begin(void)

{
  _obstack_begin();
  return;
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



// WARNING: Unknown calling convention yet parameter storage is locked

char * strrchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = strrchr(__s,__c);
  return pcVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void __assert_fail(char *__assertion,char *__file,uint __line,char *__function)

{
                    // WARNING: Subroutine does not return
  __assert_fail(__assertion,__file,__line,__function);
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



void gettext(void)

{
  gettext();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
  int iVar1;
  
  iVar1 = gettimeofday(__tv,__tz);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void free(void *__ptr)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention yet parameter storage is locked

int __lxstat64(int __ver,char *__filename,stat64 *__stat_buf)

{
  int iVar1;
  
  iVar1 = __lxstat64(__ver,__filename,__stat_buf);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

uintmax_t strtoumax(char *__nptr,char **__endptr,int __base)

{
  undefined4 extraout_EAX;
  undefined4 extraout_EDX;
  
  strtoumax(__nptr,__endptr,__base);
  return CONCAT44(extraout_EDX,extraout_EAX);
}



void _obstack_newchunk(void)

{
  _obstack_newchunk();
  return;
}



void dcgettext(void)

{
  dcgettext();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int sigaction(int __sig,sigaction *__act,sigaction *__oact)

{
  int iVar1;
  
  iVar1 = sigaction(__sig,__act,__oact);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int strverscmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = strverscmp(__s1,__s2);
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

int iswcntrl(wint_t __wc)

{
  int iVar1;
  
  iVar1 = iswcntrl(__wc);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int isatty(int __fd)

{
  int iVar1;
  
  iVar1 = isatty(__fd);
  return iVar1;
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

int _setjmp(__jmp_buf_tag *__env)

{
  int iVar1;
  
  iVar1 = _setjmp(__env);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

__pid_t tcgetpgrp(int __fd)

{
  __pid_t _Var1;
  
  _Var1 = tcgetpgrp(__fd);
  return _Var1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

time_t mktime(tm *__tp)

{
  time_t tVar1;
  
  tVar1 = mktime(__tp);
  return tVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

dirent64 * readdir64(DIR *__dirp)

{
  dirent64 *pdVar1;
  
  pdVar1 = readdir64(__dirp);
  return pdVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memcpy(__dest,__src,__n);
  return pvVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
  ulong uVar1;
  
  uVar1 = strtoul(__nptr,__endptr,__base);
  return uVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = strlen(__s);
  return sVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

passwd * getpwuid(__uid_t __uid)

{
  passwd *ppVar1;
  
  ppVar1 = getpwuid(__uid);
  return ppVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * setlocale(int __category,char *__locale)

{
  char *pcVar1;
  
  pcVar1 = setlocale(__category,__locale);
  return pcVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = strcpy(__dest,__src);
  return pcVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void longjmp(__jmp_buf_tag *__env,int __val)

{
                    // WARNING: Subroutine does not return
  longjmp(__env,__val);
}



// WARNING: Unknown calling convention yet parameter storage is locked

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = printf(__format);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = raise(__sig);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

size_t mbrlen(char *__s,size_t __n,mbstate_t *__ps)

{
  size_t sVar1;
  
  sVar1 = mbrlen(__s,__n,__ps);
  return sVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

size_t fwrite_unlocked(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  
  sVar1 = fwrite_unlocked(__ptr,__size,__n,__stream);
  return sVar1;
}



void __signbitl(void)

{
  __signbitl();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
  int iVar1;
  
  iVar1 = clock_gettime(__clock_id,__tp);
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
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention yet parameter storage is locked

int sigprocmask(int __how,sigset_t *__set,sigset_t *__oset)

{
  int iVar1;
  
  iVar1 = sigprocmask(__how,__set,__oset);
  return iVar1;
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

group * getgrgid(__gid_t __gid)

{
  group *pgVar1;
  
  pgVar1 = getgrgid(__gid);
  return pgVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int sigaddset(sigset_t *__set,int __signo)

{
  int iVar1;
  
  iVar1 = sigaddset(__set,__signo);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

ssize_t readlink(char *__path,char *__buf,size_t __len)

{
  ssize_t sVar1;
  
  sVar1 = readlink(__path,__buf,__len);
  return sVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memmove(__dest,__src,__n);
  return pvVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * strndup(char *__string,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = strndup(__string,__n);
  return pcVar1;
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

uint gnu_dev_major(ulonglong __dev)

{
  uint uVar1;
  
  uVar1 = gnu_dev_major(__dev);
  return uVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int fnmatch(char *__pattern,char *__name,int __flags)

{
  int iVar1;
  
  iVar1 = fnmatch(__pattern,__name,__flags);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = strncmp(__s1,__s2,__n);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int fflush_unlocked(FILE *__stream)

{
  int iVar1;
  
  iVar1 = fflush_unlocked(__stream);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

size_t strftime(char *__s,size_t __maxsize,char *__format,tm *__tp)

{
  size_t sVar1;
  
  sVar1 = strftime(__s,__maxsize,__format,__tp);
  return sVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = snprintf(__s,__maxlen,__format);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int wcwidth(wchar_t __c)

{
  int iVar1;
  
  iVar1 = wcwidth(__c);
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

passwd * getpwnam(char *__name)

{
  passwd *ppVar1;
  
  ppVar1 = getpwnam(__name);
  return ppVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int tolower(int __c)

{
  int iVar1;
  
  iVar1 = tolower(__c);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int strcmp(char *__s1,char *__s2)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention yet parameter storage is locked

void exit(int __status)

{
                    // WARNING: Subroutine does not return
  exit(__status);
}



// WARNING: Unknown calling convention yet parameter storage is locked

int putchar_unlocked(int __c)

{
  int iVar1;
  
  iVar1 = putchar_unlocked(__c);
  return iVar1;
}



void _start(void)

{
  __libc_start_main(main);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x08049b2a)
// WARNING: Removing unreachable block (ram,0x08049b30)

void __do_global_dtors_aux(void)

{
  if (completed_6635 == '\0') {
    completed_6635 = '\x01';
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x08049b78)

void frame_dummy(void)

{
  return;
}



dev_ino * dev_ino_pop(dev_ino *__return_storage_ptr__)

{
  char "dev_ino_pop" [12];
  obstack *__o;
  obstack *__o_1;
  int __len;
  
  if (dev_ino_obstack.next_free + -(int)dev_ino_obstack.object_base < (char *)0x10) {
                    // WARNING: Subroutine does not return
    __assert_fail(
                  "sizeof (struct dev_ino) <= __extension__ ({ struct obstack const *__o = (&dev_ino_obstack); (unsigned) (__o->next_free - __o->object_base); })"
                  ,"ls.c",0x396,"dev_ino_pop");
  }
  if ((int)(dev_ino_obstack.chunk_limit + -(int)dev_ino_obstack.next_free) < -0x10) {
    _obstack_newchunk(&dev_ino_obstack,0xfffffff0);
  }
  dev_ino_obstack.next_free = dev_ino_obstack.next_free + -0x10;
  memmove(__return_storage_ptr__,dev_ino_obstack.next_free,0x10);
  return __return_storage_ptr__;
}



void dired_dump_obstack(char *prefix,obstack *os)

{
  char *pcVar1;
  uint uVar2;
  size_t n_pos;
  obstack *__o;
  size_t i;
  size_t *pos;
  obstack *__o1;
  void *__value;
  
  uVar2 = (uint)(os->next_free + -(int)os->object_base) >> 2;
  if (uVar2 != 0) {
    pcVar1 = os->object_base;
    if (os->next_free == pcVar1) {
      *(byte *)&os->field_0x28 = *(byte *)&os->field_0x28 | 2;
    }
    os->next_free = (char *)(~os->alignment_mask & (uint)(os->next_free + os->alignment_mask));
    if ((int)(os->chunk_limit + -(int)os->chunk) < (int)(os->next_free + -(int)os->chunk)) {
      os->next_free = os->chunk_limit;
    }
    os->object_base = os->next_free;
    fputs_unlocked(prefix,stdout);
    i = 0;
    while (i < uVar2) {
      printf(" %lu",*(undefined4 *)(pcVar1 + i * 4));
      i = i + 1;
    }
    putchar_unlocked(10);
  }
  return;
}



size_t dev_ino_hash(void *x,size_t table_size)

{
  size_t sVar1;
  dev_ino *p;
  
  sVar1 = __umoddi3(*(undefined4 *)x,*(undefined4 *)((int)x + 4),table_size,0);
  return sVar1;
}



_Bool dev_ino_compare(void *x,void *y)

{
  undefined local_20;
  dev_ino *a;
  dev_ino *b;
  
  if (((*(uint *)y ^ *(uint *)x | *(uint *)((int)x + 4) ^ *(uint *)((int)y + 4)) == 0) &&
     ((*(uint *)((int)y + 8) ^ *(uint *)((int)x + 8) |
      *(uint *)((int)x + 0xc) ^ *(uint *)((int)y + 0xc)) == 0)) {
    local_20 = 1;
  }
  else {
    local_20 = 0;
  }
  return (_Bool)local_20;
}



void dev_ino_free(void *x)

{
  free(x);
  return;
}



_Bool visit_dir(dev_t dev,ino_t ino)

{
  undefined4 *entry;
  undefined4 *puVar1;
  dev_ino *ent;
  dev_ino *ent_from_table;
  _Bool found_match;
  
  entry = (undefined4 *)xmalloc(0x10);
  *entry = (undefined4)ino;
  entry[1] = ino._4_4_;
  entry[2] = (undefined4)dev;
  entry[3] = dev._4_4_;
  puVar1 = (undefined4 *)hash_insert(active_dir_set,entry);
  if (puVar1 == (undefined4 *)0x0) {
    xalloc_die();
  }
  if (puVar1 != entry) {
    free(entry);
  }
  return (_Bool)(puVar1 != entry);
}



void free_pending_ent(pending *p)

{
  free(p->name);
  free(p->realname);
  free(p);
  return;
}



_Bool is_colored(indicator_no type)

{
  size_t sVar1;
  int iVar2;
  undefined local_18;
  size_t len;
  char *s;
  
  sVar1 = color_indicator[type].len;
  if ((sVar1 == 0) || ((sVar1 == 1 && (*color_indicator[type].string == '0')))) {
LAB_08049f31:
    local_18 = 0;
  }
  else {
    if (sVar1 == 2) {
      iVar2 = strncmp(color_indicator[type].string,"00",2);
      if (iVar2 == 0) goto LAB_08049f31;
    }
    local_18 = 1;
  }
  return (_Bool)local_18;
}



void restore_default_color(void)

{
  put_indicator(color_indicator);
  put_indicator(color_indicator + 1);
  return;
}



void sighandler(int sig)

{
  if (interrupt_signal == 0) {
    interrupt_signal = sig;
  }
  return;
}



void stophandler(int sig)

{
  if (interrupt_signal == 0) {
    stop_signal_count = stop_signal_count + 1;
  }
  return;
}



void process_signals(void)

{
  sigset_t oldset;
  int sig;
  int stops;
  
  while ((interrupt_signal | stop_signal_count) != 0) {
    restore_default_color();
    fflush_unlocked(stdout);
    sigprocmask(0,(sigset_t *)&caught_signals,(sigset_t *)&oldset);
    sig = interrupt_signal;
    if (stop_signal_count == 0) {
      signal(interrupt_signal,(__sighandler_t)0x0);
    }
    else {
      stop_signal_count = stop_signal_count + -1;
      sig = 0x13;
    }
    raise(sig);
    sigprocmask(2,(sigset_t *)&oldset,(sigset_t *)0x0);
  }
  return;
}



// WARNING: Could not reconcile some variable overlaps

int main(void)

{
  _Bool *p_Var1;
  char **ppcVar2;
  pending *p;
  char "main" [5];
  int sig [12];
  _Bool _Var3;
  __pid_t _Var4;
  char **ppcVar5;
  void *x;
  quoting_style qVar6;
  size_t sVar7;
  int iVar8;
  sigset_t *psVar9;
  sigaction *psVar10;
  byte bVar11;
  int in_stack_00000004;
  char **in_stack_00000008;
  code *local_e4;
  Dereference_symlink local_e0;
  char local_dc;
  undefined local_d8;
  code *local_c8;
  sigaction act;
  dev_ino di;
  int i;
  pending *thispend;
  int n_files;
  int j;
  dev_ino *found;
  int j_1;
  
  bVar11 = 0;
  program_name = *in_stack_00000008;
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  initialize_exit_failure(2);
  atexit(close_stdout);
  exit_status = 0;
  print_dir_name = true;
  pending_dirs = (pending *)0x0;
  di.st_dev._4_4_ = decode_switches(in_stack_00000004,in_stack_00000008);
  if (print_with_color != false) {
    parse_ls_color();
  }
  if (print_with_color == false) goto LAB_0804a2af;
  _Var3 = is_colored(C_ORPHAN);
  if (_Var3 == false) {
    _Var3 = is_colored(C_EXEC);
    if ((_Var3 == true) && (color_symlink_as_referent != false)) goto LAB_0804a166;
    _Var3 = is_colored(C_MISSING);
    if ((_Var3 == true) && (format == long_format)) goto LAB_0804a166;
  }
  else {
LAB_0804a166:
    check_symlink_color = true;
  }
  _Var4 = tcgetpgrp(1);
  if (-1 < _Var4) {
    sigemptyset((sigset_t *)&caught_signals);
    n_files = 0;
    while (n_files < 0xc) {
      sigaction(*(int *)(n_files * 4 + 0x805ed40),(sigaction *)0x0,(sigaction *)&local_c8);
      if (local_c8 != (code *)0x1) {
        sigaddset((sigset_t *)&caught_signals,*(int *)(n_files * 4 + 0x805ed40));
      }
      n_files = n_files + 1;
    }
    iVar8 = 0x20;
    psVar9 = &caught_signals;
    psVar10 = &act;
    while (iVar8 != 0) {
      iVar8 = iVar8 + -1;
      psVar10->__sigaction_handler = psVar9->__val[0];
      psVar9 = (sigset_t *)(psVar9->__val + (uint)bVar11 * 0x3ffffffe + 1);
      psVar10 = (sigaction *)((int)psVar10 + (uint)bVar11 * -8 + 4);
    }
    act.sa_mask.__val[31] = 0x10000000;
    n_files = 0;
    while (n_files < 0xc) {
      iVar8 = sigismember((sigset_t *)&caught_signals,*(int *)(n_files * 4 + 0x805ed40));
      if (iVar8 != 0) {
        if (*(int *)(n_files * 4 + 0x805ed40) == 0x14) {
          local_e4 = stophandler;
        }
        else {
          local_e4 = sighandler;
        }
        local_c8 = local_e4;
        sigaction(*(int *)(n_files * 4 + 0x805ed40),(sigaction *)&local_c8,(sigaction *)0x0);
      }
      n_files = n_files + 1;
    }
  }
  prep_non_filename_text();
LAB_0804a2af:
  if (dereference == DEREF_UNDEFINED) {
    if (((immediate_dirs == false) && (indicator_style != classify)) && (format != long_format)) {
      local_e0 = DEREF_COMMAND_LINE_SYMLINK_TO_DIR;
    }
    else {
      local_e0 = DEREF_NEVER;
    }
    dereference = local_e0;
  }
  if (recursive != false) {
    active_dir_set =
         hash_initialize(0x1e,(Hash_tuning *)0x0,dev_ino_hash,dev_ino_compare,dev_ino_free);
    if (active_dir_set == (Hash_table *)0x0) {
      xalloc_die();
    }
    _obstack_begin(&dev_ino_obstack,0,0,malloc,free);
  }
  if (((sort_type == sort_time) || (sort_type == sort_size)) ||
     ((format == long_format || ((print_scontext != false || (print_block_size != false)))))) {
    local_dc = '\x01';
  }
  else {
    local_dc = '\0';
  }
  format_needs_stat = (_Bool)local_dc;
  if ((local_dc == '\0') &&
     ((((recursive != false || (print_with_color != false)) || (indicator_style != none)) ||
      (directories_first != false)))) {
    local_d8 = 1;
  }
  else {
    local_d8 = 0;
  }
  format_needs_type = (_Bool)local_d8;
  if (dired != false) {
    _obstack_begin(&dired_obstack,0,0,malloc,free);
    _obstack_begin(&subdired_obstack,0,0,malloc,free);
  }
  cwd_n_alloc = 100;
  cwd_file = (fileinfo *)xnmalloc(100,0x78);
  cwd_n_used = 0;
  clear_files();
  iVar8 = in_stack_00000004 - di.st_dev._4_4_;
  if (iVar8 < 1) {
    if (immediate_dirs == false) {
      queue_directory(".",(char *)0x0,true);
    }
    else {
      gobble_file(".",directory,0,true,"");
    }
  }
  else {
    do {
      ppcVar5 = in_stack_00000008 + di.st_dev._4_4_;
      di.st_dev._4_4_ = di.st_dev._4_4_ + 1;
      gobble_file(*ppcVar5,unknown,0,true,"");
    } while ((int)di.st_dev._4_4_ < in_stack_00000004);
  }
  if (cwd_n_used != 0) {
    sort_files();
    if (immediate_dirs != true) {
      extract_dirs_from_files((char *)0x0,true);
    }
  }
  if (cwd_n_used == 0) {
    if (((iVar8 < 2) && (pending_dirs != (pending *)0x0)) && (pending_dirs->next == (pending *)0x0))
    {
      print_dir_name = false;
    }
  }
  else {
    print_current_files();
    if (pending_dirs != (pending *)0x0) {
      putchar_unlocked(10);
      dired_pos = dired_pos + 1;
    }
  }
  while (p = pending_dirs, pending_dirs != (pending *)0x0) {
    if ((active_dir_set == (Hash_table *)0x0) || (pending_dirs->name != (char *)0x0)) {
      p_Var1 = &pending_dirs->command_line_arg;
      ppcVar5 = &pending_dirs->realname;
      ppcVar2 = &pending_dirs->name;
      pending_dirs = pending_dirs->next;
      print_dir(*ppcVar2,*ppcVar5,*p_Var1);
      free_pending_ent(p);
      print_dir_name = true;
    }
    else {
      pending_dirs = pending_dirs->next;
      dev_ino_pop((dev_ino *)&act.sa_restorer);
      x = hash_delete(active_dir_set,&act.sa_restorer);
      if (x == (void *)0x0) {
                    // WARNING: Subroutine does not return
        __assert_fail("found","ls.c",0x51e,"main");
      }
      dev_ino_free(x);
      free_pending_ent(p);
    }
  }
  if (print_with_color != false) {
    restore_default_color();
    fflush_unlocked(stdout);
    found = (dev_ino *)0x0;
    while ((int)found < 0xc) {
      iVar8 = sigismember((sigset_t *)&caught_signals,((int *)&ram0x0805ed40)[(int)found]);
      if (iVar8 != 0) {
        signal(*(int *)((int)found * 4 + 0x805ed40),(__sighandler_t)0x0);
      }
      found = (dev_ino *)((int)&found->st_ino + 1);
    }
    found = (dev_ino *)stop_signal_count;
    while (found != (dev_ino *)0x0) {
      raise(0x13);
      found = (dev_ino *)((int)&found[-1].st_dev + 7);
    }
    if (interrupt_signal != 0) {
      raise(interrupt_signal);
    }
  }
  if (dired != false) {
    dired_dump_obstack("//DIRED//",&dired_obstack);
    dired_dump_obstack("//SUBDIRED//",&subdired_obstack);
    qVar6 = get_quoting_style(filename_quoting_options);
    printf("//DIRED-OPTIONS// --quoting-style=%s\n",quoting_style_args[qVar6]);
  }
  if (active_dir_set != (Hash_table *)0x0) {
    sVar7 = hash_get_n_entries(active_dir_set);
    if (sVar7 != 0) {
                    // WARNING: Subroutine does not return
      __assert_fail("hash_get_n_entries (active_dir_set) == 0","ls.c",0x554,"main");
    }
    hash_free(active_dir_set);
  }
                    // WARNING: Subroutine does not return
  exit(exit_status);
}



void initialize_exit_failure(int status)

{
  if (status != 1) {
    exit_failure = status;
  }
  return;
}



int decode_switches(int argc,char **argv)

{
  time_style tVar1;
  bool bVar2;
  char "posix-" [7];
  _Bool _Var3;
  int iVar4;
  char *arg;
  ptrdiff_t pVar5;
  strtol_error err;
  ignore_pattern *piVar6;
  quoting_style qVar7;
  char *pcVar8;
  undefined4 uVar9;
  format local_84;
  char local_80;
  char *local_7c;
  char *local_78;
  uint local_74;
  ulong tmp_ulong_3;
  ulong tmp_ulong_2;
  int oi;
  ulong tmp_ulong_1;
  winsize ws;
  ulong tmp_ulong;
  char *time_style_option;
  _Bool sort_type_specified;
  char *q_style;
  int i;
  char *ls_block_size;
  char *p;
  char *p_1;
  int c;
  ignore_pattern *hide;
  int i_1;
  strtol_error e;
  char *p_2;
  char *style;
  char *p0;
  char *p1;
  int i_2;
  char *locale_format;
  
  time_style_option = (char *)0x0;
  bVar2 = false;
  qmark_funny_chars = false;
  if (ls_mode == 2) {
    format = many_per_line;
    set_quoting_style((quoting_options *)0x0,escape_quoting_style);
  }
  else {
    if (ls_mode == 3) {
      format = long_format;
      set_quoting_style((quoting_options *)0x0,escape_quoting_style);
    }
    else {
      if (ls_mode != 1) {
                    // WARNING: Subroutine does not return
        abort();
      }
      iVar4 = isatty(1);
      if (iVar4 == 0) {
        format = one_per_line;
        qmark_funny_chars = false;
      }
      else {
        format = many_per_line;
        qmark_funny_chars = true;
      }
    }
  }
  time_type = time_mtime;
  sort_type = sort_name;
  sort_reverse = false;
  numeric_ids = false;
  print_block_size = false;
  indicator_style = none;
  print_inode = false;
  dereference = DEREF_UNDEFINED;
  recursive = false;
  immediate_dirs = false;
  ignore_mode = DT_UNKNOWN;
  ignore_patterns = (ignore_pattern *)0x0;
  hide_patterns = (ignore_pattern *)0x0;
  print_scontext = false;
  arg = getenv("QUOTING_STYLE");
  if (arg != (char *)0x0) {
    pVar5 = argmatch(arg,quoting_style_args,(char *)quoting_style_vals,4);
    if (pVar5 < 0) {
      arg = quotearg(arg);
      uVar9 = gettext("ignoring invalid value of environment variable QUOTING_STYLE: %s");
      error(0,0,uVar9,arg);
    }
    else {
      set_quoting_style((quoting_options *)0x0,quoting_style_vals[pVar5]);
    }
  }
  arg = getenv("LS_BLOCK_SIZE");
  human_options(arg,&human_output_opts,&output_block_size);
  if ((arg != (char *)0x0) || (arg = getenv("BLOCK_SIZE"), arg != (char *)0x0)) {
    file_output_block_size._0_4_ = (undefined4)output_block_size;
    file_output_block_size._4_4_ = output_block_size._4_4_;
  }
  line_length = 0x50;
  arg = getenv("COLUMNS");
  if ((arg != (char *)0x0) && (*arg != '\0')) {
    err = xstrtoul(arg,(char **)0x0,0,&tmp_ulong,(char *)0x0);
    if ((err == LONGINT_OK) && (tmp_ulong != 0)) {
      line_length = tmp_ulong;
    }
    else {
      arg = quotearg(arg);
      uVar9 = gettext("ignoring invalid width in environment variable COLUMNS: %s");
      error(0,0,uVar9,arg);
    }
  }
  iVar4 = ioctl(1,0x5413,&ws);
  if ((iVar4 != -1) && (ws.ws_col != 0)) {
    line_length = (size_t)ws.ws_col;
  }
  arg = getenv("TABSIZE");
  tabsize = 8;
  if (arg != (char *)0x0) {
    err = xstrtoul(arg,(char **)0x0,0,&tmp_ulong_1,(char *)0x0);
    if (err == LONGINT_OK) {
      tabsize = tmp_ulong_1;
    }
    else {
      arg = quotearg(arg);
      uVar9 = gettext("ignoring invalid tab size in environment variable TABSIZE: %s");
      error(0,0,uVar9,arg);
    }
  }
  while( true ) {
    oi = -1;
    iVar4 = getopt_long(argc,argv,"abcdfghiklmnopqrstuvw:xABCDFGHI:LNQRST:UXZ1",long_options,&oi);
    if (iVar4 == -1) break;
    switch(iVar4) {
    case 0x31:
      if (format != long_format) {
        format = one_per_line;
      }
      break;
    case 0x41:
      if (ignore_mode == DT_UNKNOWN) {
        ignore_mode = DT_FIFO;
      }
      break;
    case 0x42:
      add_ignore_pattern("*~");
      add_ignore_pattern(".*~");
      break;
    case 0x43:
      format = many_per_line;
      break;
    case 0x44:
      dired = true;
      break;
    case 0x46:
      indicator_style = classify;
      break;
    case 0x47:
      print_group = false;
      break;
    case 0x48:
      dereference = DEREF_COMMAND_LINE_ARGUMENTS;
      break;
    case 0x49:
      add_ignore_pattern(optarg);
      break;
    case 0x4c:
      dereference = DEREF_ALWAYS;
      break;
    case 0x4e:
      set_quoting_style((quoting_options *)0x0,literal_quoting_style);
      break;
    case 0x51:
      set_quoting_style((quoting_options *)0x0,c_quoting_style);
      break;
    case 0x52:
      recursive = true;
      break;
    case 0x53:
      sort_type = sort_size;
      bVar2 = true;
      break;
    case 0x54:
      err = xstrtoul(optarg,(char **)0x0,0,&tmp_ulong_3,(char *)0x0);
      if (err != LONGINT_OK) {
        arg = quotearg(optarg);
        uVar9 = gettext("invalid tab size: %s");
        error(2,0,uVar9,arg);
      }
      tabsize = tmp_ulong_3;
      break;
    case 0x55:
      sort_type = sort_none;
      bVar2 = true;
      break;
    case 0x58:
      sort_type = sort_extension;
      bVar2 = true;
      break;
    case 0x5a:
      print_scontext = true;
      break;
    case 0x61:
      ignore_mode = DT_CHR;
      break;
    case 0x62:
      set_quoting_style((quoting_options *)0x0,escape_quoting_style);
      break;
    case 99:
      time_type = time_ctime;
      break;
    case 100:
      immediate_dirs = true;
      break;
    case 0x66:
      ignore_mode = DT_CHR;
      sort_type = sort_none;
      bVar2 = true;
      if (format == long_format) {
        iVar4 = isatty(1);
        if (iVar4 == 0) {
          local_84 = one_per_line;
        }
        else {
          local_84 = many_per_line;
        }
        format = local_84;
      }
      print_block_size = false;
      print_with_color = false;
      break;
    case 0x67:
      format = long_format;
      print_owner = false;
      break;
    case 0x68:
      human_output_opts = 0xb0;
      output_block_size._0_4_ = 1;
      output_block_size._4_4_ = 0;
      file_output_block_size._0_4_ = 1;
      file_output_block_size._4_4_ = 0;
      break;
    case 0x69:
      print_inode = true;
      break;
    case 0x6b:
      human_output_opts = 0;
      output_block_size._0_4_ = 0x400;
      output_block_size._4_4_ = 0;
      file_output_block_size._0_4_ = 0x400;
      file_output_block_size._4_4_ = 0;
      break;
    case 0x6c:
      format = long_format;
      break;
    case 0x6d:
      format = with_commas;
      break;
    case 0x6e:
      numeric_ids = true;
      format = long_format;
      break;
    case 0x6f:
      format = long_format;
      print_group = false;
      break;
    case 0x70:
      indicator_style = slash;
      break;
    case 0x71:
      qmark_funny_chars = true;
      break;
    case 0x72:
      sort_reverse = true;
      break;
    case 0x73:
      print_block_size = true;
      break;
    case 0x74:
      sort_type = sort_time;
      bVar2 = true;
      break;
    case 0x75:
      time_type = time_atime;
      break;
    case 0x76:
      sort_type = sort_version;
      bVar2 = true;
      break;
    case 0x77:
      err = xstrtoul(optarg,(char **)0x0,0,&tmp_ulong_2,(char *)0x0);
      if ((err != LONGINT_OK) || (tmp_ulong_2 == 0)) {
        arg = quotearg(optarg);
        uVar9 = gettext("invalid line width: %s");
        error(2,0,uVar9,arg);
      }
      line_length = tmp_ulong_2;
      break;
    case 0x78:
      format = horizontal;
      break;
    case 0x80:
      print_author = true;
      break;
    case 0x81:
      err = human_options(optarg,&human_output_opts,&output_block_size);
      if (err != LONGINT_OK) {
        xstrtol_fatal(err,oi,'\0',long_options,optarg);
      }
      file_output_block_size._0_4_ = (undefined4)output_block_size;
      file_output_block_size._4_4_ = output_block_size._4_4_;
      break;
    case 0x82:
      if (optarg == (char *)0x0) {
        i_1 = 1;
      }
      else {
        pVar5 = __xargmatch_internal("--color",optarg,color_args,(char *)color_types,4,argmatch_die)
        ;
        i_1 = color_types[pVar5];
      }
      if ((i_1 == 1) || ((i_1 == 2 && (iVar4 = isatty(1), iVar4 != 0)))) {
        local_80 = '\x01';
      }
      else {
        local_80 = '\0';
      }
      print_with_color = (_Bool)local_80;
      if (local_80 != '\0') {
        tabsize = 0;
      }
      break;
    case 0x83:
      dereference = DEREF_COMMAND_LINE_SYMLINK_TO_DIR;
      break;
    case 0x84:
      indicator_style = file_type;
      break;
    case 0x85:
      pVar5 = __xargmatch_internal
                        ("--format",optarg,format_args,(char *)format_types,4,argmatch_die);
      format = format_types[pVar5];
      break;
    case 0x86:
      format = long_format;
      time_style_option = "full-iso";
      break;
    case 0x87:
      directories_first = true;
      break;
    case 0x88:
      piVar6 = (ignore_pattern *)xmalloc(8);
      piVar6->pattern = optarg;
      piVar6->next = hide_patterns;
      hide_patterns = piVar6;
      break;
    case 0x89:
      pVar5 = __xargmatch_internal
                        ("--indicator-style",optarg,indicator_style_args,
                         (char *)indicator_style_types,4,argmatch_die);
      indicator_style = indicator_style_types[pVar5];
      break;
    case 0x8a:
      pVar5 = __xargmatch_internal
                        ("--quoting-style",optarg,quoting_style_args,(char *)quoting_style_vals,4,
                         argmatch_die);
      set_quoting_style((quoting_options *)0x0,quoting_style_vals[pVar5]);
      break;
    case 0x8b:
      qmark_funny_chars = false;
      break;
    case 0x8c:
      human_output_opts = 0x90;
      output_block_size._0_4_ = 1;
      output_block_size._4_4_ = 0;
      file_output_block_size._0_4_ = 1;
      file_output_block_size._4_4_ = 0;
      break;
    case 0x8d:
      pVar5 = __xargmatch_internal("--sort",optarg,sort_args,(char *)sort_types,4,argmatch_die);
      sort_type = sort_types[pVar5];
      bVar2 = true;
      break;
    case 0x8e:
      pVar5 = __xargmatch_internal("--time",optarg,time_args,(char *)time_types,4,argmatch_die);
      time_type = time_types[pVar5];
      break;
    case 0x8f:
      time_style_option = optarg;
      break;
    case -0x83:
      if (ls_mode == 1) {
        local_7c = "ls";
      }
      else {
        if (ls_mode == 2) {
          local_78 = "dir";
        }
        else {
          local_78 = "vdir";
        }
        local_7c = local_78;
      }
      version_etc(stdout,local_7c,"GNU coreutils","6.10","Richard Stallman","David MacKenzie",0);
                    // WARNING: Subroutine does not return
      exit(0);
    case -0x82:
      usage(0);
      break;
    default:
      usage(2);
    }
  }
  if (line_length < 3) {
    local_74 = 1;
  }
  else {
    local_74 = line_length / 3;
  }
  max_idx = local_74;
  filename_quoting_options = clone_quoting_options((quoting_options *)0x0);
  qVar7 = get_quoting_style(filename_quoting_options);
  if (qVar7 == escape_quoting_style) {
    set_char_quoting(filename_quoting_options,' ',1);
  }
  if (slash < indicator_style) {
    p_2 = "GNU coreutils" + indicator_style + 0xc;
    while (*p_2 != '\0') {
      set_char_quoting(filename_quoting_options,*p_2,1);
      p_2 = p_2 + 1;
    }
  }
  dirname_quoting_options = clone_quoting_options((quoting_options *)0x0);
  set_char_quoting(dirname_quoting_options,':',1);
  if ((dired != false) && (format != long_format)) {
    dired = false;
  }
  if ((((time_type == time_ctime) || (time_type == time_atime)) && (!bVar2)) &&
     (format != long_format)) {
    sort_type = sort_time;
  }
  if (format == long_format) {
    style = time_style_option;
    if ((time_style_option == (char *)0x0) && (style = getenv("TIME_STYLE"), style == (char *)0x0))
    {
      style = "locale";
    }
    while (iVar4 = strncmp(style,"posix-",6), iVar4 == 0) {
      _Var3 = hard_locale(2);
      if (_Var3 != true) {
        return optind;
      }
      style = style + 6;
    }
    if (*style == '+') {
      style = style + 1;
      arg = strchr(style,10);
      p1 = style;
      if (arg != (char *)0x0) {
        pcVar8 = strchr(arg + 1,10);
        if (pcVar8 != (char *)0x0) {
          pcVar8 = quote(style);
          uVar9 = gettext("invalid time style format %s");
          error(2,0,uVar9,pcVar8);
        }
        *arg = '\0';
        p1 = arg + 1;
      }
      long_time_format[1] = p1;
      long_time_format[0] = style;
    }
    else {
      pVar5 = __xargmatch_internal
                        ("time style",style,time_style_args,(char *)time_style_types,4,argmatch_die)
      ;
      tVar1 = time_style_types[pVar5];
      if (tVar1 == long_iso_time_style) {
case_long_iso_time_style:
        long_time_format[1] = "%Y-%m-%d %H:%M";
        long_time_format[0] = "%Y-%m-%d %H:%M";
      }
      else {
        if (tVar1 == full_iso_time_style) {
          long_time_format[1] = "%Y-%m-%d %H:%M:%S.%N %z";
          long_time_format[0] = "%Y-%m-%d %H:%M:%S.%N %z";
        }
        else {
          if (tVar1 == iso_time_style) {
            long_time_format[0] = "%Y-%m-%d ";
            long_time_format[1] = "%m-%d %H:%M";
          }
          else {
            if ((tVar1 == locale_time_style) && (_Var3 = hard_locale(2), _Var3 != false)) {
              i_2 = 0;
              while (i_2 < 2) {
                arg = (char *)dcgettext(0,long_time_format[i_2],2);
                if (long_time_format[i_2] == arg) goto case_long_iso_time_style;
                long_time_format[i_2] = arg;
                i_2 = i_2 + 1;
              }
            }
          }
        }
      }
    }
  }
  return optind;
}



_Bool get_funky_string(char **dest,char **src,_Bool equals_end,size_t *output_count)

{
  char cVar1;
  char num;
  size_t count;
  anon_enum_32 state;
  char *p;
  char *q;
  
  p = *src;
  q = *dest;
  count = 0;
  num = '\0';
  state = ST_GND;
  do {
    switch(state) {
    case ST_GND:
      cVar1 = *p;
      if (cVar1 == '=') {
        if (equals_end != false) {
          state = ST_END;
          break;
        }
      }
      else {
        if (cVar1 < '>') {
          if ((cVar1 == '\0') || (cVar1 == ':')) {
            state = ST_END;
            break;
          }
        }
        else {
          if (cVar1 == '\\') {
            state = ST_BACKSLASH;
            p = p + 1;
            break;
          }
          if (cVar1 == '^') {
            state = ST_CARET;
            p = p + 1;
            break;
          }
        }
      }
      *q = *p;
      q = q + 1;
      p = p + 1;
      count = count + 1;
      break;
    case ST_BACKSLASH:
      switch(*p) {
      case '\0':
        state = ST_ERROR;
        break;
      default:
        num = *p;
        break;
      case '0':
      case '1':
      case '2':
      case '3':
      case '4':
      case '5':
      case '6':
      case '7':
        state = ST_OCTAL;
        num = *p + -0x30;
        break;
      case '?':
        num = '\x7f';
        break;
      case 'X':
      case 'x':
        state = ST_HEX;
        num = '\0';
        break;
      case '_':
        num = ' ';
        break;
      case 'a':
        num = '\a';
        break;
      case 'b':
        num = '\b';
        break;
      case 'e':
        num = '\x1b';
        break;
      case 'f':
        num = '\f';
        break;
      case 'n':
        num = '\n';
        break;
      case 'r':
        num = '\r';
        break;
      case 't':
        num = '\t';
        break;
      case 'v':
        num = '\v';
      }
      if (state == ST_BACKSLASH) {
        *q = num;
        q = q + 1;
        count = count + 1;
        state = ST_GND;
      }
      p = p + 1;
      break;
    case ST_OCTAL:
      if ((*p < '0') || ('7' < *p)) {
        *q = num;
        q = q + 1;
        count = count + 1;
        state = ST_GND;
      }
      else {
        num = num * '\b' + *p + -0x30;
        p = p + 1;
      }
      break;
    case ST_HEX:
      switch(*p) {
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
        num = num * '\x10' + *p + -0x30;
        p = p + 1;
        break;
      default:
        *q = num;
        q = q + 1;
        count = count + 1;
        state = ST_GND;
        break;
      case 'A':
      case 'B':
      case 'C':
      case 'D':
      case 'E':
      case 'F':
        num = num * '\x10' + *p + -0x37;
        p = p + 1;
        break;
      case 'a':
      case 'b':
      case 'c':
      case 'd':
      case 'e':
      case 'f':
        num = num * '\x10' + *p + -0x57;
        p = p + 1;
      }
      break;
    case ST_CARET:
      state = ST_GND;
      if ((*p < '@') || (*p == '\x7f')) {
        if (*p == '?') {
          *q = '\x7f';
          q = q + 1;
          count = count + 1;
        }
        else {
          state = ST_ERROR;
        }
      }
      else {
        *q = *p & 0x1f;
        q = q + 1;
        p = p + 1;
        count = count + 1;
      }
      break;
    case 0xbad1abe1:
                    // WARNING: Subroutine does not return
      abort();
    default:
      *dest = q;
      *src = p;
      *output_count = count;
      return (_Bool)(state != ST_ERROR);
    }
  } while( true );
}



void parse_ls_color(void)

{
  char cVar1;
  color_ext_type *pcVar2;
  _Bool _Var3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  int local_34;
  int local_30;
  int local_2c;
  char label [3];
  char *buf;
  char *p;
  int state;
  int ind_no;
  color_ext_type *ext;
  color_ext_type *e;
  color_ext_type *e2;
  
  p = getenv("LS_COLORS");
  if ((p != (char *)0x0) && (*p != '\0')) {
    ext = (color_ext_type *)0x0;
    memcpy(label,&DAT_0805f786,3);
    color_buf = xstrdup(p);
    state = 1;
    buf = color_buf;
    while (0 < state) {
      if (state == 2) {
        if (*p == '\0') {
          state = -1;
        }
        else {
          label[1] = *p;
          p = p + 1;
          state = 3;
        }
      }
      else {
        if (state < 3) {
          if (state == 1) {
            cVar1 = *p;
            if (cVar1 == '*') {
              ext = (color_ext_type *)xmalloc(0x14);
              ext->next = color_ext_list;
              p = p + 1;
              color_ext_list = ext;
              (ext->ext).string = buf;
              _Var3 = get_funky_string(&buf,&p,true,(size_t *)ext);
              if (_Var3 == false) {
                local_34 = -1;
              }
              else {
                local_34 = 4;
              }
              state = local_34;
            }
            else {
              if (cVar1 == ':') {
                p = p + 1;
              }
              else {
                if (cVar1 == '\0') {
                  state = 0;
                }
                else {
                  label[0] = *p;
                  p = p + 1;
                  state = 2;
                }
              }
            }
          }
        }
        else {
          if (state == 3) {
            state = -1;
            cVar1 = *p;
            p = p + 1;
            if (cVar1 == '=') {
              ind_no = 0;
              while (indicator_name[ind_no] != (char *)0x0) {
                iVar6 = strcmp(label,indicator_name[ind_no]);
                if (iVar6 == 0) {
                  color_indicator[ind_no].string = buf;
                  _Var3 = get_funky_string(&buf,&p,false,(size_t *)(color_indicator + ind_no));
                  if (_Var3 == false) {
                    local_30 = -1;
                  }
                  else {
                    local_30 = 1;
                  }
                  state = local_30;
                  break;
                }
                ind_no = ind_no + 1;
              }
              if (state == -1) {
                pcVar4 = quotearg(label);
                uVar5 = gettext("unrecognized prefix: %s");
                error(0,0,uVar5,pcVar4);
              }
            }
          }
          else {
            if (state == 4) {
              cVar1 = *p;
              p = p + 1;
              if (cVar1 == '=') {
                (ext->seq).string = buf;
                _Var3 = get_funky_string(&buf,&p,false,(size_t *)&ext->seq);
                if (_Var3 == false) {
                  local_2c = -1;
                }
                else {
                  local_2c = 1;
                }
                state = local_2c;
              }
              else {
                state = -1;
              }
            }
          }
        }
      }
    }
    if (state < 0) {
      uVar5 = gettext("unparsable value for LS_COLORS environment variable");
      error(0,0,uVar5);
      free(color_buf);
      e = color_ext_list;
      while (e != (color_ext_type *)0x0) {
        pcVar2 = e->next;
        free(e);
        e = pcVar2;
      }
      print_with_color = false;
    }
    if ((color_indicator[6].len == 6) &&
       (iVar6 = strncmp(color_indicator[6].string,"target",6), iVar6 == 0)) {
      color_symlink_as_referent = true;
    }
  }
  return;
}



void set_exit_status(_Bool serious)

{
  if (serious == false) {
    if (exit_status == 0) {
      exit_status = 1;
    }
  }
  else {
    exit_status = 2;
  }
  return;
}



void file_failure(_Bool serious,char *message,char *file)

{
  char *pcVar1;
  int *piVar2;
  
  pcVar1 = quotearg_colon(file);
  piVar2 = __errno_location();
  error(0,*piVar2,message,pcVar1);
  set_exit_status(serious);
  return;
}



void queue_directory(char *name,char *realname,_Bool command_line_arg)

{
  pending *ppVar1;
  char *local_20;
  char *local_1c;
  pending *new;
  
  ppVar1 = (pending *)xmalloc(0x10);
  if (realname == (char *)0x0) {
    local_20 = (char *)0x0;
  }
  else {
    local_20 = xstrdup(realname);
  }
  ppVar1->realname = local_20;
  if (name == (char *)0x0) {
    local_1c = (char *)0x0;
  }
  else {
    local_1c = xstrdup(name);
  }
  ppVar1->name = local_1c;
  ppVar1->command_line_arg = command_line_arg;
  ppVar1->next = pending_dirs;
  pending_dirs = ppVar1;
  return;
}



// WARNING (jumptable): Heritage AFTER dead removal. Example location: r0x0806462c : 0x0804c131
// WARNING: Could not reconcile some variable overlaps
// WARNING: Restarted to delay deadcode elimination for space: ram

void print_dir(char *name,char *realname,_Bool command_line_arg)

{
  undefined4 *puVar1;
  char cVar2;
  uintmax_t n;
  _Bool first;
  _Bool _Var3;
  int *piVar4;
  DIR *__dirp;
  int __fd;
  char *message;
  undefined4 uVar5;
  dirent64 *pdVar6;
  size_t sVar7;
  size_t sVar8;
  uintmax_t uVar9;
  char *local_2e4;
  stat dir_stat;
  DIR *dirp;
  dirent *next;
  uintmax_t total_blocks;
  int fd;
  dev_ino *di;
  obstack *__o;
  int __len;
  filetype type;
  obstack *__o_1;
  int __len_1;
  obstack *__o_2;
  int __len_2;
  char *p;
  
  n = 0;
  piVar4 = __errno_location();
  *piVar4 = 0;
  __dirp = opendir(name);
  if (__dirp == (DIR *)0x0) {
    message = (char *)gettext("cannot open directory %s");
    file_failure(command_line_arg,message,name);
    return;
  }
  if (active_dir_set != (Hash_table *)0x0) {
    __fd = dirfd(__dirp);
    if (__fd < 0) {
      __fd = stat64(name,(stat64 *)&dir_stat);
      cVar2 = (char)((uint)__fd >> 0x18);
    }
    else {
      __fd = fstat64(__fd,(stat64 *)&dir_stat);
      cVar2 = (char)((uint)__fd >> 0x18);
    }
    if (cVar2 < '\0') {
      message = (char *)gettext("cannot determine device and inode of %s");
      file_failure(command_line_arg,message,name);
      closedir(__dirp);
      return;
    }
    _Var3 = visit_dir(CONCAT44(dir_stat.st_dev._4_4_,(undefined4)dir_stat.st_dev),
                      CONCAT44(dir_stat.st_ino._4_4_,(undefined4)dir_stat.st_ino));
    if (_Var3 != false) {
      message = quotearg_colon(name);
      uVar5 = gettext("%s: not listing already-listed directory");
      error(0,0,uVar5,message);
      closedir(__dirp);
      return;
    }
    if ((int)(dev_ino_obstack.chunk_limit + -(int)dev_ino_obstack.next_free) < 0x10) {
      _obstack_newchunk(&dev_ino_obstack,0x10);
    }
    message = dev_ino_obstack.next_free;
    puVar1 = (undefined4 *)(dev_ino_obstack.next_free + 8);
    dev_ino_obstack.next_free = dev_ino_obstack.next_free + 0x10;
    *puVar1 = (undefined4)dir_stat.st_dev;
    *(undefined4 *)(message + 0xc) = dir_stat.st_dev._4_4_;
    *(undefined4 *)message = (undefined4)dir_stat.st_ino;
    *(undefined4 *)(message + 4) = dir_stat.st_ino._4_4_;
  }
  clear_files();
  do {
    while( true ) {
      piVar4 = __errno_location();
      *piVar4 = 0;
      pdVar6 = readdir64(__dirp);
      if (pdVar6 == (dirent64 *)0x0) break;
      _Var3 = file_ignored(pdVar6->d_name);
      if (_Var3 != true) {
        type = unknown;
        switch(pdVar6->d_type) {
        case '\x01':
          type = fifo;
          break;
        case '\x02':
          type = chardev;
          break;
        case '\x04':
          type = directory;
          break;
        case '\x06':
          type = blockdev;
          break;
        case '\b':
          type = normal;
          break;
        case '\n':
          type = symbolic_link;
          break;
        case '\f':
          type = sock;
          break;
        case '\x0e':
          type = whiteout;
        }
        uVar9 = gobble_file(pdVar6->d_name,type,pdVar6->d_ino,false,name);
        n = uVar9 + n;
      }
    }
    piVar4 = __errno_location();
    if (*piVar4 == 0) break;
    message = (char *)gettext("reading directory %s");
    file_failure(command_line_arg,message,name);
    piVar4 = __errno_location();
  } while (*piVar4 == 0x4b);
  __fd = closedir(__dirp);
  if (__fd != 0) {
    message = (char *)gettext("closing directory %s");
    file_failure(command_line_arg,message,name);
  }
  sort_files();
  if (recursive != false) {
    extract_dirs_from_files(name,command_line_arg);
  }
  if ((print_dir_name | recursive) != 0) {
    if (first != true) {
      putchar_unlocked(10);
      dired_pos = dired_pos + 1;
    }
    first = false;
    if (dired != false) {
      fwrite_unlocked(&DAT_0805f873,1,2,(FILE *)stdout);
      dired_pos = dired_pos + 2;
    }
    if (dired != false) {
      if (subdired_obstack.chunk_limit < subdired_obstack.next_free + 4) {
        _obstack_newchunk(&subdired_obstack,4);
      }
      memcpy(subdired_obstack.next_free,&dired_pos,4);
      subdired_obstack.next_free = subdired_obstack.next_free + 4;
    }
    if (realname == (char *)0x0) {
      local_2e4 = name;
    }
    else {
      local_2e4 = realname;
    }
    sVar7 = quote_name(stdout,local_2e4,dirname_quoting_options,(size_t *)0x0);
    dired_pos = sVar7 + dired_pos;
    if (dired != false) {
      if (subdired_obstack.chunk_limit < subdired_obstack.next_free + 4) {
        _obstack_newchunk(&subdired_obstack,4);
      }
      memcpy(subdired_obstack.next_free,&dired_pos,4);
      subdired_obstack.next_free = subdired_obstack.next_free + 4;
    }
    fwrite_unlocked(&DAT_0805f876,1,2,(FILE *)stdout);
    dired_pos = dired_pos + 2;
  }
  if ((format == long_format) || (print_block_size != false)) {
    if (dired != false) {
      fwrite_unlocked(&DAT_0805f873,1,2,(FILE *)stdout);
      dired_pos = dired_pos + 2;
    }
    message = (char *)gettext("total");
    fputs_unlocked(message,(FILE *)stdout);
    sVar8 = strlen(message);
    dired_pos = sVar8 + dired_pos;
    putchar_unlocked(0x20);
    dired_pos = dired_pos + 1;
    message = human_readable(n,(char *)&dir_stat,human_output_opts,0x200,
                             CONCAT44(output_block_size._4_4_,(undefined4)output_block_size));
    fputs_unlocked(message,(FILE *)stdout);
    sVar8 = strlen(message);
    dired_pos = sVar8 + dired_pos;
    putchar_unlocked(10);
    dired_pos = dired_pos + 1;
  }
  if (cwd_n_used != 0) {
    print_current_files();
  }
  return;
}



void add_ignore_pattern(char *pattern)

{
  ignore_pattern *piVar1;
  ignore_pattern *ignore;
  
  piVar1 = (ignore_pattern *)xmalloc(8);
  piVar1->pattern = pattern;
  piVar1->next = ignore_patterns;
  ignore_patterns = piVar1;
  return;
}



_Bool patterns_match(ignore_pattern *patterns,char *file)

{
  int iVar1;
  ignore_pattern *p;
  
  p = patterns;
  while( true ) {
    if (p == (ignore_pattern *)0x0) {
      return false;
    }
    iVar1 = fnmatch(p->pattern,file,4);
    if (iVar1 == 0) break;
    p = p->next;
  }
  return true;
}



_Bool file_ignored(char *name)

{
  _Bool _Var1;
  int local_8;
  
  if ((ignore_mode != DT_CHR) && (*name == '.')) {
    if (ignore_mode == DT_UNKNOWN) {
      return true;
    }
    if (name[1] == '.') {
      local_8 = 2;
    }
    else {
      local_8 = 1;
    }
    if (name[local_8] == '\0') {
      return true;
    }
  }
  if (((ignore_mode != DT_UNKNOWN) || (_Var1 = patterns_match(hide_patterns,name), _Var1 == false))
     && (_Var1 = patterns_match(ignore_patterns,name), _Var1 == false)) {
    return false;
  }
  return true;
}



uintmax_t unsigned_file_size(off_t size)

{
  return (uintmax_t)size;
}



void clear_files(void)

{
  void **ppvVar1;
  size_t i;
  fileinfo *f;
  
  i = 0;
  while (i < cwd_n_used) {
    ppvVar1 = (void **)sorted_file[i];
    free(*ppvVar1);
    free(ppvVar1[1]);
    if ((char *)ppvVar1[0x1c] != UNKNOWN_SECURITY_CONTEXT) {
      freecon((char *)ppvVar1[0x1c]);
    }
    i = i + 1;
  }
  cwd_n_used = 0;
  any_has_acl = false;
  inode_number_width = 0;
  block_size_width = 0;
  nlink_width = 0;
  scontext_width = 0;
  owner_width = 0;
  group_width = 0;
  author_width = 0;
  major_device_number_width = 0;
  minor_device_number_width = 0;
  file_size_width = 0;
  return;
}



void freecon(char *con)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x0804ca00)
// WARNING: Could not reconcile some variable overlaps

uintmax_t gobble_file(char *name,filetype type,ino_t inode,_Bool command_line_arg,char *dirname)

{
  __nlink_t _Var1;
  undefined4 uVar2;
  undefined4 uVar3;
  char "gobble_file" [12];
  _Bool _Var4;
  size_t sVar5;
  char *pcVar6;
  int iVar7;
  int *piVar8;
  char *pcVar9;
  char **ppcVar10;
  size_t sVar11;
  uint uVar12;
  uintmax_t *puVar13;
  undefined4 ****local_360;
  Dereference_symlink local_35c;
  char local_355;
  undefined4 local_354;
  char *local_350;
  int local_34c;
  byte local_348;
  undefined8 local_344;
  stat linkstats;
  char buf_1 [21];
  char buf [21];
  char b [21];
  uintmax_t blocks;
  fileinfo *f;
  char *absolute_name;
  _Bool do_deref;
  int err;
  _Bool need_lstat;
  _Bool have_acl;
  int attr_len;
  int n;
  char *linkname;
  int len;
  int len_1;
  int len_2;
  int len_3;
  int len_4;
  int b_len;
  int len_5;
  uintmax_t size;
  int len_6;
  int len_7;
  
  local_348 = command_line_arg;
  blocks._0_4_ = 0;
  blocks._4_4_ = (char *)0x0;
  local_344 = inode;
  if ((command_line_arg != false) && (inode != 0)) {
                    // WARNING: Subroutine does not return
    __assert_fail("! command_line_arg || inode == NOT_AN_INODE_NUMBER","ls.c",0x9f7,"gobble_file");
  }
  if (cwd_n_used == cwd_n_alloc) {
    cwd_file = (fileinfo *)xnrealloc(cwd_file,cwd_n_alloc,0xf0);
    cwd_n_alloc = cwd_n_alloc * 2;
    inode = local_344;
  }
  f = cwd_file + cwd_n_used;
  local_344 = inode;
  memset(f,0,0x78);
  *(undefined4 *)&(f->stat).st_ino = (undefined4)local_344;
  *(undefined4 *)((int)&(f->stat).st_ino + 4) = local_344._4_4_;
  f->filetype = type;
  if (((((local_348 == 0) && (format_needs_stat == false)) &&
       ((type != directory || (print_with_color == false)))) &&
      ((((print_inode == false && (format_needs_type == false)) ||
        ((type != symbolic_link && (type != unknown)))) ||
       (((dereference != DEREF_ALWAYS && (color_symlink_as_referent == false)) &&
        (check_symlink_color == false)))))) && ((print_inode != true || (local_344 != 0)))) {
    puVar13 = (uintmax_t *)&stack0xfffffc74;
    if (format_needs_type == true) {
      if (type == unknown) goto LAB_0804caa3;
      puVar13 = (uintmax_t *)&stack0xfffffc74;
      if (type == normal) {
        if (indicator_style == classify) goto LAB_0804caa3;
        puVar13 = (uintmax_t *)&stack0xfffffc74;
        if (print_with_color == true) {
          _Var4 = is_colored(C_EXEC);
          puVar13 = (uintmax_t *)&stack0xfffffc74;
          if (_Var4 != false) goto LAB_0804caa3;
        }
      }
    }
  }
  else {
LAB_0804caa3:
    if ((*name == '/') || (*dirname == '\0')) {
      absolute_name = name;
      puVar13 = (uintmax_t *)&stack0xfffffc74;
    }
    else {
      sVar11 = strlen(name);
      sVar5 = strlen(dirname);
      iVar7 = -(sVar11 + sVar5 + 0x20 & 0xfffffff0);
      puVar13 = (uintmax_t *)(&stack0xfffffc74 + iVar7);
      absolute_name = (char *)((int)&local_360 + iVar7);
      local_360 = (undefined4 ****)absolute_name;
      *(char **)(&stack0xfffffc7c + iVar7) = name;
      *(char **)(&stack0xfffffc78 + iVar7) = dirname;
      *(char **)(&stack0xfffffc74 + iVar7) = absolute_name;
      *(undefined4 *)(&stack0xfffffc70 + iVar7) = 0x804cb2c;
      attach(*(char **)(&stack0xfffffc74 + iVar7),*(char **)(&stack0xfffffc78 + iVar7),
             *(char **)(&stack0xfffffc7c + iVar7));
    }
    local_35c = dereference;
    if (dereference < DEREF_COMMAND_LINE_ARGUMENTS) {
LAB_0804cbef:
      *(stat **)((int)puVar13 + 4) = &f->stat;
      *(char **)puVar13 = absolute_name;
      *(char **)((int)puVar13 + -4) = 0x804cc04;
      err = lstat64(*(char **)puVar13,*(stat64 **)((int)puVar13 + 4));
      do_deref = false;
    }
    else {
      if (DEREF_COMMAND_LINE_SYMLINK_TO_DIR < dereference) {
        if (dereference == DEREF_ALWAYS) {
          *(stat **)((int)puVar13 + 4) = &f->stat;
          *(char **)puVar13 = absolute_name;
          *(char **)((int)puVar13 + -4) = 0x804cb6f;
          err = stat64(*(char **)puVar13,*(stat64 **)((int)puVar13 + 4));
          do_deref = true;
          goto LAB_0804cc0b;
        }
        goto LAB_0804cbef;
      }
      if (local_348 == 0) goto LAB_0804cbef;
      *(stat **)((int)puVar13 + 4) = &f->stat;
      *(char **)puVar13 = absolute_name;
      *(char **)((int)puVar13 + -4) = 0x804cb99;
      err = stat64(*(char **)puVar13,*(stat64 **)((int)puVar13 + 4));
      do_deref = true;
      if (dereference != DEREF_COMMAND_LINE_ARGUMENTS) {
        if (err < 0) {
          *(char **)((int)puVar13 + -4) = 0x804cbb5;
          piVar8 = __errno_location(*(undefined *)((int)puVar13 + -4));
          local_355 = *piVar8 == 2;
        }
        else {
          local_355 = ((f->stat).st_mode & 0xf000) != 0x4000;
        }
        if (local_355 == '\x01') goto LAB_0804cbef;
      }
    }
LAB_0804cc0b:
    if (err != 0) {
      *(undefined4 *)puVar13 = 0x805f8fb;
      *(char **)((int)puVar13 + -4) = 0x804cc21;
      pcVar6 = (char *)gettext();
      uVar12 = (uint)local_348;
      *(char **)(puVar13 + 1) = absolute_name;
      *(char **)((int)puVar13 + 4) = pcVar6;
      *(uint *)puVar13 = uVar12;
      *(char **)((int)puVar13 + -4) = 0x804cc3b;
      file_failure(*(_Bool *)puVar13,*(char **)((int)puVar13 + 4),*(char **)(puVar13 + 1));
      if (local_348 == 0) {
        *(char **)puVar13 = name;
        *(char **)((int)puVar13 + -4) = 0x804cc68;
        pcVar6 = xstrdup(*(char **)puVar13);
        f->name = pcVar6;
        cwd_n_used = cwd_n_used + 1;
        local_354 = 0;
        local_350 = (char *)0x0;
      }
      else {
        local_354 = 0;
        local_350 = (char *)0x0;
      }
      goto LAB_0804d2fc;
    }
    f->stat_ok = true;
    if ((format == long_format) || (print_scontext != false)) {
      have_acl = false;
      if (do_deref == false) {
        *(char ***)((int)puVar13 + 4) = &f->scontext;
        *(char **)puVar13 = absolute_name;
        *(char **)((int)puVar13 + -4) = 0x804ccf0;
        local_34c = lgetfilecon(*(char **)puVar13,*(char ***)((int)puVar13 + 4));
      }
      else {
        *(char ***)((int)puVar13 + 4) = &f->scontext;
        *(char **)puVar13 = absolute_name;
        *(char **)((int)puVar13 + -4) = 0x804ccd3;
        local_34c = getfilecon(*(char **)puVar13,*(char ***)((int)puVar13 + 4));
      }
      err = -(local_34c >> 0x1f);
      if (err == 0) {
        *(char **)((int)puVar13 + 4) = f->scontext;
        *(undefined4 *)puVar13 = 0x805f90c;
        *(char **)((int)puVar13 + -4) = 0x804cd24;
        iVar7 = strcmp(*(char **)puVar13,*(char **)((int)puVar13 + 4));
        have_acl = (_Bool)(iVar7 != 0);
      }
      else {
        f->scontext = UNKNOWN_SECURITY_CONTEXT;
        *(char **)((int)puVar13 + -4) = 0x804cd3d;
        piVar8 = __errno_location(*(undefined *)((int)puVar13 + -4));
        if (*piVar8 != 0x5f) {
          *(char **)((int)puVar13 + -4) = 0x804cd49;
          piVar8 = __errno_location(*(undefined *)((int)puVar13 + -4));
          if (*piVar8 != 0x3d) goto LAB_0804cd57;
        }
        err = 0;
      }
LAB_0804cd57:
      if (((err == 0) && (have_acl != true)) && (format == long_format)) {
        *(stat **)((int)puVar13 + 4) = &f->stat;
        *(char **)puVar13 = absolute_name;
        *(char **)((int)puVar13 + -4) = 0x804cd86;
        uVar12 = file_has_acl(*(char **)puVar13,*(stat **)((int)puVar13 + 4));
        err = uVar12 >> 0x1f;
        have_acl = (_Bool)(0 < (int)uVar12);
      }
      f->have_acl = have_acl;
      any_has_acl = (_Bool)((have_acl | any_has_acl) != 0);
      if (err != 0) {
        *(char **)puVar13 = absolute_name;
        *(char **)((int)puVar13 + -4) = 0x804cdd1;
        pcVar9 = quotearg_colon(*(char **)puVar13);
        *(char **)((int)puVar13 + -4) = 0x804cdd8;
        ppcVar10 = (char **)__errno_location(*(undefined *)((int)puVar13 + -4));
        pcVar6 = *ppcVar10;
        *(char **)((int)puVar13 + 0xc) = pcVar9;
        *(char **)(puVar13 + 1) = "%s";
        *(char **)((int)puVar13 + 4) = pcVar6;
        *(undefined4 *)puVar13 = 0;
        *(char **)((int)puVar13 + -4) = 0x804cdf6;
        error();
      }
    }
    if ((((f->stat).st_mode & 0xf000) == 0xa000) &&
       ((format == long_format || (check_symlink_color != false)))) {
      *(char **)(puVar13 + 1) = (char *)(uint)local_348;
      *(fileinfo **)((int)puVar13 + 4) = f;
      *(char **)puVar13 = absolute_name;
      *(char **)((int)puVar13 + -4) = 0x804ce41;
      get_link_name(*(char **)puVar13,*(fileinfo **)((int)puVar13 + 4),*(_Bool *)(puVar13 + 1));
      *(char **)((int)puVar13 + 4) = f->linkname;
      *(char **)puVar13 = absolute_name;
      *(char **)((int)puVar13 + -4) = 0x804ce56;
      linkname = make_link_name(*(char **)puVar13,*(char **)((int)puVar13 + 4));
      if ((linkname != (char *)0x0) && ((slash < indicator_style || (check_symlink_color != false)))
         ) {
        *(stat **)((int)puVar13 + 4) = &linkstats;
        *(char **)puVar13 = linkname;
        *(char **)((int)puVar13 + -4) = 0x804ce89;
        iVar7 = stat64(*(char **)puVar13,*(stat64 **)((int)puVar13 + 4));
        if ((iVar7 == 0) &&
           (((f->linkok = true, local_348 != 1 || (format == long_format)) ||
            ((linkstats.st_mode & 0xf000) != 0x4000)))) {
          f->linkmode = linkstats.st_mode;
        }
      }
      *(char **)puVar13 = linkname;
      *(char **)((int)puVar13 + -4) = 0x804ced4;
      free(*(void **)puVar13);
    }
    if ((((f->stat).st_mode & 0xf000) == 0xa000) && (check_symlink_color != true)) {
      f->linkok = true;
    }
    if (((f->stat).st_mode & 0xf000) == 0xa000) {
      f->filetype = symbolic_link;
    }
    else {
      if (((f->stat).st_mode & 0xf000) == 0x4000) {
        if (((immediate_dirs ^ 1U) & local_348) == 0) {
          f->filetype = directory;
        }
        else {
          f->filetype = arg_directory;
        }
      }
      else {
        f->filetype = normal;
      }
    }
    blocks._4_4_ = *(char **)((int)&(f->stat).st_blocks + 4);
    blocks._0_4_ = *(undefined4 *)&(f->stat).st_blocks;
    if ((format == long_format) || (print_block_size != false)) {
      *(char **)(puVar13 + 3) = (char *)output_block_size;
      *(char **)((int)puVar13 + 0x1c) = output_block_size._4_4_;
      *(char **)(puVar13 + 2) = (char *)0x200;
      *(char **)((int)puVar13 + 0x14) = (char *)0x0;
      *(int *)((int)puVar13 + 0xc) = human_output_opts;
      *(stat **)(puVar13 + 1) = &linkstats;
      pcVar6 = blocks._4_4_;
      *(undefined4 *)puVar13 = (undefined4)blocks;
      *(char **)((int)puVar13 + 4) = pcVar6;
      *(char **)((int)puVar13 + -4) = 0x804cfd3;
      pcVar6 = human_readable(*puVar13,*(char **)(puVar13 + 1),(int)*(char **)((int)puVar13 + 0xc),
                              puVar13[2],puVar13[3]);
      *(char **)((int)puVar13 + 4) = (char *)0x0;
      *(char **)puVar13 = pcVar6;
      *(char **)((int)puVar13 + -4) = 0x804cfe3;
      iVar7 = gnu_mbswidth(*(char **)puVar13,(int)*(char **)((int)puVar13 + 4));
      if (block_size_width < iVar7) {
        block_size_width = iVar7;
      }
    }
    if (format == long_format) {
      if (print_owner != false) {
        *(__uid_t *)puVar13 = (f->stat).st_uid;
        *(char **)((int)puVar13 + -4) = 0x804d01e;
        iVar7 = format_user_width(*(uid_t *)puVar13);
        if (owner_width < iVar7) {
          owner_width = iVar7;
        }
      }
      if (print_group != false) {
        *(__gid_t *)puVar13 = (f->stat).st_gid;
        *(char **)((int)puVar13 + -4) = 0x804d04c;
        iVar7 = format_group_width(*(gid_t *)puVar13);
        if (group_width < iVar7) {
          group_width = iVar7;
        }
      }
      if (print_author != false) {
        *(__uid_t *)puVar13 = (f->stat).st_uid;
        *(char **)((int)puVar13 + -4) = 0x804d07a;
        iVar7 = format_user_width(*(uid_t *)puVar13);
        if (author_width < iVar7) {
          author_width = iVar7;
        }
      }
    }
    if (print_scontext != false) {
      *(char **)puVar13 = f->scontext;
      *(char **)((int)puVar13 + -4) = 0x804d0a8;
      sVar11 = strlen(*(char **)puVar13);
      if (scontext_width < (int)sVar11) {
        scontext_width = sVar11;
      }
    }
    if (format == long_format) {
      _Var1 = (f->stat).st_nlink;
      *(char **)(puVar13 + 1) = b;
      *(__nlink_t *)puVar13 = _Var1;
      *(char **)((int)puVar13 + 4) = (char *)0x0;
      *(char **)((int)puVar13 + -4) = 0x804d0ea;
      pcVar6 = umaxtostr(*puVar13,*(char **)(puVar13 + 1));
      *(char **)puVar13 = pcVar6;
      *(char **)((int)puVar13 + -4) = 0x804d0f2;
      sVar11 = strlen(*(char **)puVar13);
      if (nlink_width < (int)sVar11) {
        nlink_width = sVar11;
      }
      if ((((f->stat).st_mode & 0xf000) == 0x2000) || (((f->stat).st_mode & 0xf000) == 0x6000)) {
        pcVar6 = *(char **)((int)&(f->stat).st_rdev + 4);
        *(undefined4 *)puVar13 = *(undefined4 *)&(f->stat).st_rdev;
        *(char **)((int)puVar13 + 4) = pcVar6;
        *(char **)((int)puVar13 + -4) = 0x804d144;
        uVar12 = gnu_dev_major(*puVar13);
        *(char **)(puVar13 + 1) = buf;
        *(uint *)puVar13 = uVar12;
        *(char **)((int)puVar13 + 4) = (char *)0x0;
        *(char **)((int)puVar13 + -4) = 0x804d161;
        pcVar6 = umaxtostr(*puVar13,*(char **)(puVar13 + 1));
        *(char **)puVar13 = pcVar6;
        *(char **)((int)puVar13 + -4) = 0x804d169;
        sVar11 = strlen(*(char **)puVar13);
        if (major_device_number_width < (int)sVar11) {
          major_device_number_width = sVar11;
        }
        pcVar6 = *(char **)((int)&(f->stat).st_rdev + 4);
        *(undefined4 *)puVar13 = *(undefined4 *)&(f->stat).st_rdev;
        *(char **)((int)puVar13 + 4) = pcVar6;
        *(char **)((int)puVar13 + -4) = 0x804d193;
        uVar12 = gnu_dev_minor(*puVar13);
        *(char **)(puVar13 + 1) = buf;
        *(uint *)puVar13 = uVar12;
        *(char **)((int)puVar13 + 4) = (char *)0x0;
        *(char **)((int)puVar13 + -4) = 0x804d1b0;
        pcVar6 = umaxtostr(*puVar13,*(char **)(puVar13 + 1));
        *(char **)puVar13 = pcVar6;
        *(char **)((int)puVar13 + -4) = 0x804d1b8;
        sVar11 = strlen(*(char **)puVar13);
        if (minor_device_number_width < (int)sVar11) {
          minor_device_number_width = sVar11;
        }
        iVar7 = major_device_number_width + 2 + minor_device_number_width;
        if (file_size_width < iVar7) {
          file_size_width = iVar7;
        }
      }
      else {
        pcVar6 = *(char **)((int)&(f->stat).st_size + 4);
        *(undefined4 *)puVar13 = *(undefined4 *)&(f->stat).st_size;
        *(char **)((int)puVar13 + 4) = pcVar6;
        *(char **)((int)puVar13 + -4) = 0x804d210;
        size = unsigned_file_size(*puVar13);
        *(char **)(puVar13 + 3) = (char *)file_output_block_size;
        *(char **)((int)puVar13 + 0x1c) = file_output_block_size._4_4_;
        *(char **)(puVar13 + 2) = (char *)0x1;
        *(char **)((int)puVar13 + 0x14) = (char *)0x0;
        *(int *)((int)puVar13 + 0xc) = human_output_opts;
        *(stat **)(puVar13 + 1) = &linkstats;
        *(undefined4 *)puVar13 = (undefined4)size;
        *(char **)((int)puVar13 + 4) = size._4_4_;
        *(char **)((int)puVar13 + -4) = 0x804d25f;
        pcVar6 = human_readable(*puVar13,*(char **)(puVar13 + 1),(int)*(char **)((int)puVar13 + 0xc)
                                ,puVar13[2],puVar13[3]);
        *(char **)((int)puVar13 + 4) = (char *)0x0;
        *(char **)puVar13 = pcVar6;
        *(char **)((int)puVar13 + -4) = 0x804d26f;
        iVar7 = gnu_mbswidth(*(char **)puVar13,(int)*(char **)((int)puVar13 + 4));
        if (file_size_width < iVar7) {
          file_size_width = iVar7;
        }
      }
    }
  }
  if (print_inode != false) {
    uVar2 = *(undefined4 *)&(f->stat).st_ino;
    uVar3 = *(undefined4 *)((int)&(f->stat).st_ino + 4);
    *(char **)(puVar13 + 1) = buf_1;
    *(undefined4 *)puVar13 = uVar2;
    *(undefined4 *)((int)puVar13 + 4) = uVar3;
    *(undefined4 *)((int)puVar13 + -4) = 0x804d2ae;
    pcVar6 = umaxtostr(*puVar13,*(char **)(puVar13 + 1));
    *(char **)puVar13 = pcVar6;
    *(undefined4 *)((int)puVar13 + -4) = 0x804d2b6;
    sVar11 = strlen(*(char **)puVar13);
    if (inode_number_width < (int)sVar11) {
      inode_number_width = sVar11;
    }
  }
  *(char **)puVar13 = name;
  *(undefined4 *)((int)puVar13 + -4) = 0x804d2d6;
  pcVar6 = xstrdup(*(char **)puVar13);
  f->name = pcVar6;
  cwd_n_used = cwd_n_used + 1;
  local_354 = (undefined4)blocks;
  local_350 = blocks._4_4_;
LAB_0804d2fc:
  return CONCAT44(local_350,local_354);
}



int getfilecon(char *s,char **con)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  *piVar1 = 0x5f;
  return -1;
}



int lgetfilecon(char *s,char **con)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  *piVar1 = 0x5f;
  return -1;
}



_Bool is_directory(fileinfo *f)

{
  undefined local_8;
  
  if ((f->filetype == directory) || (f->filetype == arg_directory)) {
    local_8 = 1;
  }
  else {
    local_8 = 0;
  }
  return (_Bool)local_8;
}



void get_link_name(char *filename,fileinfo *f,_Bool command_line_arg)

{
  char *message;
  
  message = areadlink_with_size(filename,*(size_t *)&(f->stat).st_size);
  f->linkname = message;
  if (f->linkname == (char *)0x0) {
    message = (char *)gettext("cannot read symbolic link %s");
    file_failure(command_line_arg,message,filename);
  }
  return;
}



char * make_link_name(char *name,char *linkname)

{
  char *__n;
  size_t sVar1;
  char *local_18;
  char *linkbuf;
  size_t bufsiz;
  
  if (linkname == (char *)0x0) {
    local_18 = (char *)0x0;
  }
  else {
    if (*linkname == '/') {
      local_18 = xstrdup(linkname);
    }
    else {
      __n = strrchr(name,0x2f);
      if (__n == (char *)0x0) {
        local_18 = xstrdup(linkname);
      }
      else {
        __n = __n + (1 - (int)name);
        sVar1 = strlen(linkname);
        local_18 = (char *)xmalloc((size_t)(__n + sVar1 + 1));
        strncpy(local_18,name,(size_t)__n);
        strcpy(local_18 + (int)__n,linkname);
      }
    }
  }
  return local_18;
}



_Bool basename_is_dot_or_dotdot(char *name)

{
  _Bool _Var1;
  char *file_name;
  char *base;
  
  file_name = last_component(name);
  _Var1 = dot_or_dotdot(file_name);
  return _Var1;
}



_Bool dot_or_dotdot(char *file_name)

{
  int local_20;
  undefined local_19;
  undefined local_18;
  char sep;
  
  if (*file_name == '.') {
    if (file_name[1] == '.') {
      local_20 = 2;
    }
    else {
      local_20 = 1;
    }
    if ((file_name[local_20] == '\0') || (file_name[local_20] == '/')) {
      local_18 = 1;
    }
    else {
      local_18 = 0;
    }
    local_19 = local_18;
  }
  else {
    local_19 = 0;
  }
  return (_Bool)local_19;
}



void extract_dirs_from_files(char *dirname,_Bool command_line_arg)

{
  fileinfo *f_00;
  void *pvVar1;
  _Bool _Var2;
  char *name_00;
  bool bVar3;
  size_t i;
  size_t j;
  _Bool ignore_dot_and_dot_dot;
  fileinfo *f;
  char *name;
  fileinfo *f_1;
  
  if ((dirname != (char *)0x0) && (active_dir_set != (Hash_table *)0x0)) {
    queue_directory((char *)0x0,dirname,false);
  }
  i = cwd_n_used;
LAB_0804d647:
  do {
    bVar3 = i == 0;
    i = i - 1;
    if (bVar3) {
      i = 0;
      j = 0;
      while (i < cwd_n_used) {
        pvVar1 = sorted_file[i];
        sorted_file[j] = pvVar1;
        j = j + (*(int *)((int)pvVar1 + 0x68) != 9);
        i = i + 1;
      }
      cwd_n_used = j;
      return;
    }
    f_00 = (fileinfo *)sorted_file[i];
    _Var2 = is_directory(f_00);
  } while (_Var2 == false);
  if (dirname != (char *)0x0) goto code_r0x0804d59d;
  goto LAB_0804d5b5;
code_r0x0804d59d:
  _Var2 = basename_is_dot_or_dotdot(f_00->name);
  if (_Var2 != true) {
LAB_0804d5b5:
    if ((dirname == (char *)0x0) || (*f_00->name == '/')) {
      queue_directory(f_00->name,f_00->linkname,command_line_arg);
    }
    else {
      name_00 = file_name_concat(dirname,f_00->name,(char **)0x0);
      queue_directory(name_00,f_00->linkname,command_line_arg);
      free(name_00);
    }
    if (f_00->filetype == arg_directory) {
      free(f_00->name);
    }
  }
  goto LAB_0804d647;
}



int xstrcoll(char *a,char *b)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined4 uVar5;
  int diff;
  
  piVar1 = __errno_location();
  *piVar1 = 0;
  iVar2 = strcoll(a,b);
  piVar1 = __errno_location();
  if (*piVar1 != 0) {
    pcVar3 = quote_n(1,b);
    pcVar4 = quote_n(0,a);
    uVar5 = gettext("cannot compare file names %s and %s");
    piVar1 = __errno_location();
    error(0,*piVar1,uVar5,pcVar4,pcVar3);
    set_exit_status(false);
                    // WARNING: Subroutine does not return
    longjmp((__jmp_buf_tag *)failed_strcoll,1);
  }
  return iVar2;
}



int xstrcoll_ctime(V a,V b)

{
  int iVar1;
  
  iVar1 = cmp_ctime((fileinfo *)a,(fileinfo *)b,xstrcoll);
  return iVar1;
}



int cmp_ctime(fileinfo *a,fileinfo *b,anon_subr_int_char_ptr_char_ptr *cmp)

{
  __mode_t local_28;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  __ino_t local_c;
  int diff;
  
  get_stat_ctime((stat *)&local_18);
  get_stat_ctime((stat *)&local_10);
  local_28 = timespec_cmp((timespec)CONCAT44(local_c,local_10),(timespec)CONCAT44(local_14,local_18)
                         );
  if (local_28 == 0) {
    diff = local_28;
    local_28 = (*cmp)(a->name,b->name);
  }
  return local_28;
}



timespec get_stat_ctime(stat *st)

{
  undefined4 uVar1;
  int in_stack_00000008;
  
  uVar1 = *(undefined4 *)(in_stack_00000008 + 0x54);
  *(undefined4 *)&st->st_dev = *(undefined4 *)(in_stack_00000008 + 0x50);
  *(undefined4 *)((int)&st->st_dev + 4) = uVar1;
  return (timespec)CONCAT44(uVar1,st);
}



int timespec_cmp(timespec a,timespec b)

{
  int local_c;
  int local_8;
  
  if (a.tv_sec < b.tv_sec) {
    local_c = -1;
  }
  else {
    if (b.tv_sec < a.tv_sec) {
      local_8 = 1;
    }
    else {
      local_8 = a.tv_nsec - b.tv_nsec;
    }
    local_c = local_8;
  }
  return local_c;
}



int strcmp_ctime(V a,V b)

{
  int iVar1;
  
  iVar1 = cmp_ctime((fileinfo *)a,(fileinfo *)b,strcmp);
  return iVar1;
}



int rev_xstrcoll_ctime(V a,V b)

{
  int iVar1;
  
  iVar1 = cmp_ctime((fileinfo *)b,(fileinfo *)a,xstrcoll);
  return iVar1;
}



int rev_strcmp_ctime(V a,V b)

{
  int iVar1;
  
  iVar1 = cmp_ctime((fileinfo *)b,(fileinfo *)a,strcmp);
  return iVar1;
}



int xstrcoll_df_ctime(V a,V b)

{
  _Bool _Var1;
  _Bool _Var2;
  int local_18;
  _Bool a_is_dir;
  _Bool b_is_dir;
  
  _Var1 = is_directory((fileinfo *)a);
  _Var2 = is_directory((fileinfo *)b);
  if ((_Var1 == false) || (_Var2 == true)) {
    if ((_Var1 == true) || (_Var2 == false)) {
      local_18 = cmp_ctime((fileinfo *)a,(fileinfo *)b,xstrcoll);
    }
    else {
      local_18 = 1;
    }
  }
  else {
    local_18 = -1;
  }
  return local_18;
}



int strcmp_df_ctime(V a,V b)

{
  _Bool _Var1;
  _Bool _Var2;
  int local_18;
  _Bool a_is_dir;
  _Bool b_is_dir;
  
  _Var1 = is_directory((fileinfo *)a);
  _Var2 = is_directory((fileinfo *)b);
  if ((_Var1 == false) || (_Var2 == true)) {
    if ((_Var1 == true) || (_Var2 == false)) {
      local_18 = cmp_ctime((fileinfo *)a,(fileinfo *)b,strcmp);
    }
    else {
      local_18 = 1;
    }
  }
  else {
    local_18 = -1;
  }
  return local_18;
}



int rev_xstrcoll_df_ctime(V a,V b)

{
  _Bool _Var1;
  _Bool _Var2;
  int local_18;
  _Bool a_is_dir;
  _Bool b_is_dir;
  
  _Var1 = is_directory((fileinfo *)a);
  _Var2 = is_directory((fileinfo *)b);
  if ((_Var1 == false) || (_Var2 == true)) {
    if ((_Var1 == true) || (_Var2 == false)) {
      local_18 = cmp_ctime((fileinfo *)b,(fileinfo *)a,xstrcoll);
    }
    else {
      local_18 = 1;
    }
  }
  else {
    local_18 = -1;
  }
  return local_18;
}



int rev_strcmp_df_ctime(V a,V b)

{
  _Bool _Var1;
  _Bool _Var2;
  int local_18;
  _Bool a_is_dir;
  _Bool b_is_dir;
  
  _Var1 = is_directory((fileinfo *)a);
  _Var2 = is_directory((fileinfo *)b);
  if ((_Var1 == false) || (_Var2 == true)) {
    if ((_Var1 == true) || (_Var2 == false)) {
      local_18 = cmp_ctime((fileinfo *)b,(fileinfo *)a,strcmp);
    }
    else {
      local_18 = 1;
    }
  }
  else {
    local_18 = -1;
  }
  return local_18;
}



int xstrcoll_mtime(V a,V b)

{
  int iVar1;
  
  iVar1 = cmp_mtime((fileinfo *)a,(fileinfo *)b,xstrcoll);
  return iVar1;
}



int cmp_mtime(fileinfo *a,fileinfo *b,anon_subr_int_char_ptr_char_ptr *cmp)

{
  __mode_t local_28;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  __ino_t local_c;
  int diff;
  
  get_stat_mtime((stat *)&local_18);
  get_stat_mtime((stat *)&local_10);
  local_28 = timespec_cmp((timespec)CONCAT44(local_c,local_10),(timespec)CONCAT44(local_14,local_18)
                         );
  if (local_28 == 0) {
    diff = local_28;
    local_28 = (*cmp)(a->name,b->name);
  }
  return local_28;
}



timespec get_stat_mtime(stat *st)

{
  undefined4 uVar1;
  int in_stack_00000008;
  
  uVar1 = *(undefined4 *)(in_stack_00000008 + 0x4c);
  *(undefined4 *)&st->st_dev = *(undefined4 *)(in_stack_00000008 + 0x48);
  *(undefined4 *)((int)&st->st_dev + 4) = uVar1;
  return (timespec)CONCAT44(uVar1,st);
}



int strcmp_mtime(V a,V b)

{
  int iVar1;
  
  iVar1 = cmp_mtime((fileinfo *)a,(fileinfo *)b,strcmp);
  return iVar1;
}



int rev_xstrcoll_mtime(V a,V b)

{
  int iVar1;
  
  iVar1 = cmp_mtime((fileinfo *)b,(fileinfo *)a,xstrcoll);
  return iVar1;
}



int rev_strcmp_mtime(V a,V b)

{
  int iVar1;
  
  iVar1 = cmp_mtime((fileinfo *)b,(fileinfo *)a,strcmp);
  return iVar1;
}



int xstrcoll_df_mtime(V a,V b)

{
  _Bool _Var1;
  _Bool _Var2;
  int local_18;
  _Bool a_is_dir;
  _Bool b_is_dir;
  
  _Var1 = is_directory((fileinfo *)a);
  _Var2 = is_directory((fileinfo *)b);
  if ((_Var1 == false) || (_Var2 == true)) {
    if ((_Var1 == true) || (_Var2 == false)) {
      local_18 = cmp_mtime((fileinfo *)a,(fileinfo *)b,xstrcoll);
    }
    else {
      local_18 = 1;
    }
  }
  else {
    local_18 = -1;
  }
  return local_18;
}



int strcmp_df_mtime(V a,V b)

{
  _Bool _Var1;
  _Bool _Var2;
  int local_18;
  _Bool a_is_dir;
  _Bool b_is_dir;
  
  _Var1 = is_directory((fileinfo *)a);
  _Var2 = is_directory((fileinfo *)b);
  if ((_Var1 == false) || (_Var2 == true)) {
    if ((_Var1 == true) || (_Var2 == false)) {
      local_18 = cmp_mtime((fileinfo *)a,(fileinfo *)b,strcmp);
    }
    else {
      local_18 = 1;
    }
  }
  else {
    local_18 = -1;
  }
  return local_18;
}



int rev_xstrcoll_df_mtime(V a,V b)

{
  _Bool _Var1;
  _Bool _Var2;
  int local_18;
  _Bool a_is_dir;
  _Bool b_is_dir;
  
  _Var1 = is_directory((fileinfo *)a);
  _Var2 = is_directory((fileinfo *)b);
  if ((_Var1 == false) || (_Var2 == true)) {
    if ((_Var1 == true) || (_Var2 == false)) {
      local_18 = cmp_mtime((fileinfo *)b,(fileinfo *)a,xstrcoll);
    }
    else {
      local_18 = 1;
    }
  }
  else {
    local_18 = -1;
  }
  return local_18;
}



int rev_strcmp_df_mtime(V a,V b)

{
  _Bool _Var1;
  _Bool _Var2;
  int local_18;
  _Bool a_is_dir;
  _Bool b_is_dir;
  
  _Var1 = is_directory((fileinfo *)a);
  _Var2 = is_directory((fileinfo *)b);
  if ((_Var1 == false) || (_Var2 == true)) {
    if ((_Var1 == true) || (_Var2 == false)) {
      local_18 = cmp_mtime((fileinfo *)b,(fileinfo *)a,strcmp);
    }
    else {
      local_18 = 1;
    }
  }
  else {
    local_18 = -1;
  }
  return local_18;
}



int xstrcoll_atime(V a,V b)

{
  int iVar1;
  
  iVar1 = cmp_atime((fileinfo *)a,(fileinfo *)b,xstrcoll);
  return iVar1;
}



int cmp_atime(fileinfo *a,fileinfo *b,anon_subr_int_char_ptr_char_ptr *cmp)

{
  __mode_t local_28;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  __ino_t local_c;
  int diff;
  
  get_stat_atime((stat *)&local_18);
  get_stat_atime((stat *)&local_10);
  local_28 = timespec_cmp((timespec)CONCAT44(local_c,local_10),(timespec)CONCAT44(local_14,local_18)
                         );
  if (local_28 == 0) {
    diff = local_28;
    local_28 = (*cmp)(a->name,b->name);
  }
  return local_28;
}



timespec get_stat_atime(stat *st)

{
  undefined4 uVar1;
  int in_stack_00000008;
  
  uVar1 = *(undefined4 *)(in_stack_00000008 + 0x44);
  *(undefined4 *)&st->st_dev = *(undefined4 *)(in_stack_00000008 + 0x40);
  *(undefined4 *)((int)&st->st_dev + 4) = uVar1;
  return (timespec)CONCAT44(uVar1,st);
}



int strcmp_atime(V a,V b)

{
  int iVar1;
  
  iVar1 = cmp_atime((fileinfo *)a,(fileinfo *)b,strcmp);
  return iVar1;
}



int rev_xstrcoll_atime(V a,V b)

{
  int iVar1;
  
  iVar1 = cmp_atime((fileinfo *)b,(fileinfo *)a,xstrcoll);
  return iVar1;
}



int rev_strcmp_atime(V a,V b)

{
  int iVar1;
  
  iVar1 = cmp_atime((fileinfo *)b,(fileinfo *)a,strcmp);
  return iVar1;
}



int xstrcoll_df_atime(V a,V b)

{
  _Bool _Var1;
  _Bool _Var2;
  int local_18;
  _Bool a_is_dir;
  _Bool b_is_dir;
  
  _Var1 = is_directory((fileinfo *)a);
  _Var2 = is_directory((fileinfo *)b);
  if ((_Var1 == false) || (_Var2 == true)) {
    if ((_Var1 == true) || (_Var2 == false)) {
      local_18 = cmp_atime((fileinfo *)a,(fileinfo *)b,xstrcoll);
    }
    else {
      local_18 = 1;
    }
  }
  else {
    local_18 = -1;
  }
  return local_18;
}



int strcmp_df_atime(V a,V b)

{
  _Bool _Var1;
  _Bool _Var2;
  int local_18;
  _Bool a_is_dir;
  _Bool b_is_dir;
  
  _Var1 = is_directory((fileinfo *)a);
  _Var2 = is_directory((fileinfo *)b);
  if ((_Var1 == false) || (_Var2 == true)) {
    if ((_Var1 == true) || (_Var2 == false)) {
      local_18 = cmp_atime((fileinfo *)a,(fileinfo *)b,strcmp);
    }
    else {
      local_18 = 1;
    }
  }
  else {
    local_18 = -1;
  }
  return local_18;
}



int rev_xstrcoll_df_atime(V a,V b)

{
  _Bool _Var1;
  _Bool _Var2;
  int local_18;
  _Bool a_is_dir;
  _Bool b_is_dir;
  
  _Var1 = is_directory((fileinfo *)a);
  _Var2 = is_directory((fileinfo *)b);
  if ((_Var1 == false) || (_Var2 == true)) {
    if ((_Var1 == true) || (_Var2 == false)) {
      local_18 = cmp_atime((fileinfo *)b,(fileinfo *)a,xstrcoll);
    }
    else {
      local_18 = 1;
    }
  }
  else {
    local_18 = -1;
  }
  return local_18;
}



int rev_strcmp_df_atime(V a,V b)

{
  _Bool _Var1;
  _Bool _Var2;
  int local_18;
  _Bool a_is_dir;
  _Bool b_is_dir;
  
  _Var1 = is_directory((fileinfo *)a);
  _Var2 = is_directory((fileinfo *)b);
  if ((_Var1 == false) || (_Var2 == true)) {
    if ((_Var1 == true) || (_Var2 == false)) {
      local_18 = cmp_atime((fileinfo *)b,(fileinfo *)a,strcmp);
    }
    else {
      local_18 = 1;
    }
  }
  else {
    local_18 = -1;
  }
  return local_18;
}



int xstrcoll_size(V a,V b)

{
  int iVar1;
  
  iVar1 = cmp_size((fileinfo *)a,(fileinfo *)b,xstrcoll);
  return iVar1;
}



int cmp_size(fileinfo *a,fileinfo *b,anon_subr_int_char_ptr_char_ptr *cmp)

{
  int iVar1;
  int iVar2;
  int local_40;
  int local_18;
  int diff;
  
  iVar1 = *(int *)((int)&(b->stat).st_size + 4);
  iVar2 = *(int *)((int)&(a->stat).st_size + 4);
  if ((iVar1 < iVar2) ||
     ((iVar1 <= iVar2 && (*(uint *)&(b->stat).st_size < *(uint *)&(a->stat).st_size)))) {
    local_40 = -1;
  }
  else {
    iVar1 = *(int *)((int)&(b->stat).st_size + 4);
    iVar2 = *(int *)((int)&(a->stat).st_size + 4);
    local_40 = 1;
    if ((iVar1 <= iVar2) &&
       ((iVar1 < iVar2 || (*(uint *)&(b->stat).st_size <= *(uint *)&(a->stat).st_size)))) {
      local_40 = 0;
    }
  }
  if (local_40 == 0) {
    local_18 = (*cmp)(a->name,b->name);
  }
  else {
    local_18 = local_40;
  }
  return local_18;
}



int strcmp_size(V a,V b)

{
  int iVar1;
  
  iVar1 = cmp_size((fileinfo *)a,(fileinfo *)b,strcmp);
  return iVar1;
}



int rev_xstrcoll_size(V a,V b)

{
  int iVar1;
  
  iVar1 = cmp_size((fileinfo *)b,(fileinfo *)a,xstrcoll);
  return iVar1;
}



int rev_strcmp_size(V a,V b)

{
  int iVar1;
  
  iVar1 = cmp_size((fileinfo *)b,(fileinfo *)a,strcmp);
  return iVar1;
}



int xstrcoll_df_size(V a,V b)

{
  _Bool _Var1;
  _Bool _Var2;
  int local_18;
  _Bool a_is_dir;
  _Bool b_is_dir;
  
  _Var1 = is_directory((fileinfo *)a);
  _Var2 = is_directory((fileinfo *)b);
  if ((_Var1 == false) || (_Var2 == true)) {
    if ((_Var1 == true) || (_Var2 == false)) {
      local_18 = cmp_size((fileinfo *)a,(fileinfo *)b,xstrcoll);
    }
    else {
      local_18 = 1;
    }
  }
  else {
    local_18 = -1;
  }
  return local_18;
}



int strcmp_df_size(V a,V b)

{
  _Bool _Var1;
  _Bool _Var2;
  int local_18;
  _Bool a_is_dir;
  _Bool b_is_dir;
  
  _Var1 = is_directory((fileinfo *)a);
  _Var2 = is_directory((fileinfo *)b);
  if ((_Var1 == false) || (_Var2 == true)) {
    if ((_Var1 == true) || (_Var2 == false)) {
      local_18 = cmp_size((fileinfo *)a,(fileinfo *)b,strcmp);
    }
    else {
      local_18 = 1;
    }
  }
  else {
    local_18 = -1;
  }
  return local_18;
}



int rev_xstrcoll_df_size(V a,V b)

{
  _Bool _Var1;
  _Bool _Var2;
  int local_18;
  _Bool a_is_dir;
  _Bool b_is_dir;
  
  _Var1 = is_directory((fileinfo *)a);
  _Var2 = is_directory((fileinfo *)b);
  if ((_Var1 == false) || (_Var2 == true)) {
    if ((_Var1 == true) || (_Var2 == false)) {
      local_18 = cmp_size((fileinfo *)b,(fileinfo *)a,xstrcoll);
    }
    else {
      local_18 = 1;
    }
  }
  else {
    local_18 = -1;
  }
  return local_18;
}



int rev_strcmp_df_size(V a,V b)

{
  _Bool _Var1;
  _Bool _Var2;
  int local_18;
  _Bool a_is_dir;
  _Bool b_is_dir;
  
  _Var1 = is_directory((fileinfo *)a);
  _Var2 = is_directory((fileinfo *)b);
  if ((_Var1 == false) || (_Var2 == true)) {
    if ((_Var1 == true) || (_Var2 == false)) {
      local_18 = cmp_size((fileinfo *)b,(fileinfo *)a,strcmp);
    }
    else {
      local_18 = 1;
    }
  }
  else {
    local_18 = -1;
  }
  return local_18;
}



int xstrcoll_name(V a,V b)

{
  int iVar1;
  
  iVar1 = cmp_name((fileinfo *)a,(fileinfo *)b,xstrcoll);
  return iVar1;
}



int cmp_name(fileinfo *a,fileinfo *b,anon_subr_int_char_ptr_char_ptr *cmp)

{
  int iVar1;
  
  iVar1 = (*cmp)(a->name,b->name);
  return iVar1;
}



int strcmp_name(V a,V b)

{
  int iVar1;
  
  iVar1 = cmp_name((fileinfo *)a,(fileinfo *)b,strcmp);
  return iVar1;
}



int rev_xstrcoll_name(V a,V b)

{
  int iVar1;
  
  iVar1 = cmp_name((fileinfo *)b,(fileinfo *)a,xstrcoll);
  return iVar1;
}



int rev_strcmp_name(V a,V b)

{
  int iVar1;
  
  iVar1 = cmp_name((fileinfo *)b,(fileinfo *)a,strcmp);
  return iVar1;
}



int xstrcoll_df_name(V a,V b)

{
  _Bool _Var1;
  _Bool _Var2;
  int local_18;
  _Bool a_is_dir;
  _Bool b_is_dir;
  
  _Var1 = is_directory((fileinfo *)a);
  _Var2 = is_directory((fileinfo *)b);
  if ((_Var1 == false) || (_Var2 == true)) {
    if ((_Var1 == true) || (_Var2 == false)) {
      local_18 = cmp_name((fileinfo *)a,(fileinfo *)b,xstrcoll);
    }
    else {
      local_18 = 1;
    }
  }
  else {
    local_18 = -1;
  }
  return local_18;
}



int strcmp_df_name(V a,V b)

{
  _Bool _Var1;
  _Bool _Var2;
  int local_18;
  _Bool a_is_dir;
  _Bool b_is_dir;
  
  _Var1 = is_directory((fileinfo *)a);
  _Var2 = is_directory((fileinfo *)b);
  if ((_Var1 == false) || (_Var2 == true)) {
    if ((_Var1 == true) || (_Var2 == false)) {
      local_18 = cmp_name((fileinfo *)a,(fileinfo *)b,strcmp);
    }
    else {
      local_18 = 1;
    }
  }
  else {
    local_18 = -1;
  }
  return local_18;
}



int rev_xstrcoll_df_name(V a,V b)

{
  _Bool _Var1;
  _Bool _Var2;
  int local_18;
  _Bool a_is_dir;
  _Bool b_is_dir;
  
  _Var1 = is_directory((fileinfo *)a);
  _Var2 = is_directory((fileinfo *)b);
  if ((_Var1 == false) || (_Var2 == true)) {
    if ((_Var1 == true) || (_Var2 == false)) {
      local_18 = cmp_name((fileinfo *)b,(fileinfo *)a,xstrcoll);
    }
    else {
      local_18 = 1;
    }
  }
  else {
    local_18 = -1;
  }
  return local_18;
}



int rev_strcmp_df_name(V a,V b)

{
  _Bool _Var1;
  _Bool _Var2;
  int local_18;
  _Bool a_is_dir;
  _Bool b_is_dir;
  
  _Var1 = is_directory((fileinfo *)a);
  _Var2 = is_directory((fileinfo *)b);
  if ((_Var1 == false) || (_Var2 == true)) {
    if ((_Var1 == true) || (_Var2 == false)) {
      local_18 = cmp_name((fileinfo *)b,(fileinfo *)a,strcmp);
    }
    else {
      local_18 = 1;
    }
  }
  else {
    local_18 = -1;
  }
  return local_18;
}



int xstrcoll_extension(V a,V b)

{
  int iVar1;
  
  iVar1 = cmp_extension((fileinfo *)a,(fileinfo *)b,xstrcoll);
  return iVar1;
}



int cmp_extension(fileinfo *a,fileinfo *b,anon_subr_int_char_ptr_char_ptr *cmp)

{
  char *local_20;
  char *local_1c;
  int local_18;
  char *base1;
  char *base2;
  int diff;
  
  local_1c = strrchr(a->name,0x2e);
  local_20 = strrchr(b->name,0x2e);
  if (local_20 == (char *)0x0) {
    local_20 = "";
  }
  if (local_1c == (char *)0x0) {
    local_1c = "";
  }
  local_18 = (*cmp)(local_1c,local_20);
  if (local_18 == 0) {
    local_18 = (*cmp)(a->name,b->name);
  }
  return local_18;
}



int strcmp_extension(V a,V b)

{
  int iVar1;
  
  iVar1 = cmp_extension((fileinfo *)a,(fileinfo *)b,strcmp);
  return iVar1;
}



int rev_xstrcoll_extension(V a,V b)

{
  int iVar1;
  
  iVar1 = cmp_extension((fileinfo *)b,(fileinfo *)a,xstrcoll);
  return iVar1;
}



int rev_strcmp_extension(V a,V b)

{
  int iVar1;
  
  iVar1 = cmp_extension((fileinfo *)b,(fileinfo *)a,strcmp);
  return iVar1;
}



int xstrcoll_df_extension(V a,V b)

{
  _Bool _Var1;
  _Bool _Var2;
  int local_18;
  _Bool a_is_dir;
  _Bool b_is_dir;
  
  _Var1 = is_directory((fileinfo *)a);
  _Var2 = is_directory((fileinfo *)b);
  if ((_Var1 == false) || (_Var2 == true)) {
    if ((_Var1 == true) || (_Var2 == false)) {
      local_18 = cmp_extension((fileinfo *)a,(fileinfo *)b,xstrcoll);
    }
    else {
      local_18 = 1;
    }
  }
  else {
    local_18 = -1;
  }
  return local_18;
}



int strcmp_df_extension(V a,V b)

{
  _Bool _Var1;
  _Bool _Var2;
  int local_18;
  _Bool a_is_dir;
  _Bool b_is_dir;
  
  _Var1 = is_directory((fileinfo *)a);
  _Var2 = is_directory((fileinfo *)b);
  if ((_Var1 == false) || (_Var2 == true)) {
    if ((_Var1 == true) || (_Var2 == false)) {
      local_18 = cmp_extension((fileinfo *)a,(fileinfo *)b,strcmp);
    }
    else {
      local_18 = 1;
    }
  }
  else {
    local_18 = -1;
  }
  return local_18;
}



int rev_xstrcoll_df_extension(V a,V b)

{
  _Bool _Var1;
  _Bool _Var2;
  int local_18;
  _Bool a_is_dir;
  _Bool b_is_dir;
  
  _Var1 = is_directory((fileinfo *)a);
  _Var2 = is_directory((fileinfo *)b);
  if ((_Var1 == false) || (_Var2 == true)) {
    if ((_Var1 == true) || (_Var2 == false)) {
      local_18 = cmp_extension((fileinfo *)b,(fileinfo *)a,xstrcoll);
    }
    else {
      local_18 = 1;
    }
  }
  else {
    local_18 = -1;
  }
  return local_18;
}



int rev_strcmp_df_extension(V a,V b)

{
  _Bool _Var1;
  _Bool _Var2;
  int local_18;
  _Bool a_is_dir;
  _Bool b_is_dir;
  
  _Var1 = is_directory((fileinfo *)a);
  _Var2 = is_directory((fileinfo *)b);
  if ((_Var1 == false) || (_Var2 == true)) {
    if ((_Var1 == true) || (_Var2 == false)) {
      local_18 = cmp_extension((fileinfo *)b,(fileinfo *)a,strcmp);
    }
    else {
      local_18 = 1;
    }
  }
  else {
    local_18 = -1;
  }
  return local_18;
}



int xstrcoll_version(V a,V b)

{
  int iVar1;
  
  iVar1 = cmp_version((fileinfo *)a,(fileinfo *)b);
  return iVar1;
}



int cmp_version(fileinfo *a,fileinfo *b)

{
  int iVar1;
  
  iVar1 = strverscmp(a->name,b->name);
  return iVar1;
}



int rev_xstrcoll_version(V a,V b)

{
  int iVar1;
  
  iVar1 = cmp_version((fileinfo *)b,(fileinfo *)a);
  return iVar1;
}



int xstrcoll_df_version(V a,V b)

{
  _Bool _Var1;
  _Bool _Var2;
  int local_18;
  _Bool a_is_dir;
  _Bool b_is_dir;
  
  _Var1 = is_directory((fileinfo *)a);
  _Var2 = is_directory((fileinfo *)b);
  if ((_Var1 == false) || (_Var2 == true)) {
    if ((_Var1 == true) || (_Var2 == false)) {
      local_18 = cmp_version((fileinfo *)a,(fileinfo *)b);
    }
    else {
      local_18 = 1;
    }
  }
  else {
    local_18 = -1;
  }
  return local_18;
}



int rev_xstrcoll_df_version(V a,V b)

{
  _Bool _Var1;
  _Bool _Var2;
  int local_18;
  _Bool a_is_dir;
  _Bool b_is_dir;
  
  _Var1 = is_directory((fileinfo *)a);
  _Var2 = is_directory((fileinfo *)b);
  if ((_Var1 == false) || (_Var2 == true)) {
    if ((_Var1 == true) || (_Var2 == false)) {
      local_18 = cmp_version((fileinfo *)b,(fileinfo *)a);
    }
    else {
      local_18 = 1;
    }
  }
  else {
    local_18 = -1;
  }
  return local_18;
}



void initialize_ordering_vector(void)

{
  size_t i;
  
  i = 0;
  while (i < cwd_n_used) {
    *(fileinfo **)(sorted_file + i) = cwd_file + i;
    i = i + 1;
  }
  return;
}



void sort_files(void)

{
  char "sort_files" [11];
  int iVar1;
  time_type local_20;
  _Bool use_strcmp;
  
  if (sorted_file_alloc < (cwd_n_used >> 1) + cwd_n_used) {
    free(sorted_file);
    sorted_file = (void **)xnmalloc(cwd_n_used,0xc);
    sorted_file_alloc = cwd_n_used * 3;
  }
  initialize_ordering_vector();
  if (sort_type != sort_none) {
    iVar1 = _setjmp((__jmp_buf_tag *)failed_strcoll);
    if (iVar1 == 0) {
      use_strcmp = false;
    }
    else {
      use_strcmp = true;
      if (sort_type == sort_version) {
                    // WARNING: Subroutine does not return
        __assert_fail("sort_type != sort_version","ls.c",0xc8c,"sort_files");
      }
      initialize_ordering_vector();
    }
    if (sort_type == sort_time) {
      local_20 = time_type;
    }
    else {
      local_20 = time_mtime;
    }
    mpsort(sorted_file,cwd_n_used,
           (comparison_function *)
           sort_functions
           [(((local_20 + sort_type) * 2 + (uint)use_strcmp) * 2 + (uint)sort_reverse) * 2 +
            (uint)directories_first]);
  }
  return;
}



void print_current_files(void)

{
  size_t i;
  
  switch(format) {
  case long_format:
    i = 0;
    while (i < cwd_n_used) {
      print_long_format((fileinfo *)sorted_file[i]);
      putchar_unlocked(10);
      dired_pos = dired_pos + 1;
      i = i + 1;
    }
    break;
  case one_per_line:
    i = 0;
    while (i < cwd_n_used) {
      print_file_name_and_frills((fileinfo *)sorted_file[i]);
      putchar_unlocked(10);
      i = i + 1;
    }
    break;
  case many_per_line:
    print_many_per_line();
    break;
  case horizontal:
    print_horizontal();
    break;
  case with_commas:
    print_with_commas();
  }
  return;
}



int long_time_expected_width(void)

{
  int width;
  tm *tp;
  size_t nbytes;
  char buf [1001];
  time_t epoch;
  tm *tm;
  size_t len;
  
  if (width < 0) {
    epoch = 0;
    tp = localtime(&epoch);
    if (tp != (tm *)0x0) {
      nbytes = nstrftime(buf,0x3e9,long_time_format[0],(tm *)tp,0,0);
      if (nbytes != 0) {
        width = mbsnwidth(buf,nbytes,0);
      }
    }
    if (width < 0) {
      width = 0;
    }
  }
  return width;
}



void get_current_time(void)

{
  int iVar1;
  timeval timeval;
  timespec timespec;
  
  iVar1 = clock_gettime(0,(timespec *)&timespec);
  if (iVar1 == 0) {
    current_time = timespec.tv_sec;
    current_time_ns = timespec.tv_nsec;
  }
  else {
    gettimeofday((timeval *)&timeval,(__timezone_ptr_t)0x0);
    current_time = timeval.tv_sec;
    current_time_ns = timeval.tv_usec * 1000 + 999;
  }
  return;
}



void format_user_or_group(char *name,ulong id,int width)

{
  int iVar1;
  size_t sVar2;
  bool bVar3;
  size_t len;
  int width_gap;
  int pad;
  
  if (name == (char *)0x0) {
    printf("%*lu ",width,id);
    len = width;
  }
  else {
    iVar1 = gnu_mbswidth(name,0);
    pad = ~(width - iVar1 >> 0x1f) & width - iVar1;
    fputs_unlocked(name,stdout);
    sVar2 = strlen(name);
    len = sVar2 + pad;
    do {
      putchar_unlocked(0x20);
      bVar3 = pad != 0;
      pad = pad + -1;
    } while (bVar3);
  }
  dired_pos = dired_pos + len + 1;
  return;
}



void format_user(uid_t u,int width,_Bool stat_ok)

{
  char *local_10;
  char *local_c;
  
  if (stat_ok == false) {
    local_10 = "?";
  }
  else {
    if (numeric_ids == false) {
      local_c = getuser(u);
    }
    else {
      local_c = (char *)0x0;
    }
    local_10 = local_c;
  }
  format_user_or_group(local_10,u,width);
  return;
}



void format_group(gid_t g,int width,_Bool stat_ok)

{
  char *local_10;
  char *local_c;
  
  if (stat_ok == false) {
    local_10 = "?";
  }
  else {
    if (numeric_ids == false) {
      local_c = getgroup(g);
    }
    else {
      local_c = (char *)0x0;
    }
    local_10 = local_c;
  }
  format_user_or_group(local_10,g,width);
  return;
}



int format_user_or_group_width(char *name,ulong id)

{
  uint uVar1;
  size_t local_18;
  char buf [11];
  int len;
  
  if (name == (char *)0x0) {
    sprintf(buf,"%lu",id);
    local_18 = strlen(buf);
  }
  else {
    uVar1 = gnu_mbswidth(name,0);
    local_18 = uVar1 & ~((int)uVar1 >> 0x1f);
  }
  return local_18;
}



int format_user_width(uid_t u)

{
  int iVar1;
  char *local_8;
  
  if (numeric_ids == false) {
    local_8 = getuser(u);
  }
  else {
    local_8 = (char *)0x0;
  }
  iVar1 = format_user_or_group_width(local_8,u);
  return iVar1;
}



int format_group_width(gid_t g)

{
  int iVar1;
  char *local_8;
  
  if (numeric_ids == false) {
    local_8 = getgroup(g);
  }
  else {
    local_8 = (char *)0x0;
  }
  iVar1 = format_user_or_group_width(local_8,g);
  return iVar1;
}



void print_long_format(fileinfo *f)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  size_t sVar4;
  int opts;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  uintmax_t n;
  char *local_11c8;
  char *local_11c4;
  char *local_11bc;
  char *local_11b8;
  int local_11b4;
  char *local_11b0;
  mode_t local_11a0;
  __time_t local_119c;
  long local_1198;
  char hbuf_1 [652];
  char hbuf_3 [21];
  char minorbuf [21];
  char majorbuf [21];
  char hbuf_2 [21];
  char hbuf [21];
  timespec when_timespec;
  char buf [3643];
  char modebuf [12];
  size_t s;
  char *p;
  time_t when;
  int when_ns;
  tm *when_local;
  char *blocks;
  int pad;
  int blanks_width;
  char *size;
  int pad_1;
  time_t six_months_ago;
  _Bool recent;
  char *fmt;
  
  if (f->stat_ok == false) {
    modebuf[0] = "?pcdb-lswd"[f->filetype];
    memset(modebuf + 1,0x3f,10);
    modebuf[11] = '\0';
  }
  else {
    filemodestring(&f->stat,modebuf);
  }
  if (any_has_acl == true) {
    if (f->have_acl != false) {
      modebuf[10] = '+';
    }
  }
  else {
    modebuf[10] = '\0';
  }
  if (time_type == time_ctime) {
    get_stat_ctime((stat *)&local_119c);
    when_timespec.tv_sec = local_119c;
    when_timespec.tv_nsec = local_1198;
  }
  else {
    if (time_type == time_mtime) {
      get_stat_mtime((stat *)&local_119c);
      when_timespec.tv_sec = local_119c;
      when_timespec.tv_nsec = local_1198;
    }
    else {
      if (time_type != time_atime) {
                    // WARNING: Subroutine does not return
        abort();
      }
      get_stat_atime((stat *)&local_119c);
      when_timespec.tv_sec = local_119c;
      when_timespec.tv_nsec = local_1198;
    }
  }
  when = when_timespec.tv_sec;
  when_ns = when_timespec.tv_nsec;
  p = buf;
  if (print_inode != false) {
    if ((*(uint *)&(f->stat).st_ino | *(uint *)((int)&(f->stat).st_ino + 4)) == 0) {
      local_11c8 = "?";
    }
    else {
      local_11c8 = umaxtostr((f->stat).st_ino,hbuf);
    }
    sprintf(p,"%*s ",inode_number_width,local_11c8);
    sVar4 = strlen(p);
    p = p + sVar4;
  }
  if (print_block_size != false) {
    if (f->stat_ok == false) {
      local_11c4 = "?";
    }
    else {
      local_11c4 = human_readable((f->stat).st_blocks,hbuf_1,human_output_opts,0x200,
                                  CONCAT44(output_block_size._4_4_,(undefined4)output_block_size));
    }
    pad = block_size_width;
    blocks = local_11c4;
    opts = gnu_mbswidth(local_11c4,0);
    pad = pad - opts;
    while (pcVar6 = p, 0 < pad) {
      *p = ' ';
      p = p + 1;
      pad = pad + -1;
    }
    do {
      p = pcVar6;
      *p = *blocks;
      blocks = blocks + 1;
      pcVar6 = p + 1;
    } while (*p != '\0');
    *p = ' ';
    p = p + 1;
  }
  if (f->stat_ok == false) {
    local_11bc = "?";
  }
  else {
    local_11bc = umaxtostr((ulonglong)(f->stat).st_nlink,hbuf_2);
  }
  sprintf(p,"%s %*s ",modebuf,nlink_width,local_11bc);
  sVar4 = strlen(p);
  p = p + sVar4;
  if (dired != false) {
    fwrite_unlocked(&DAT_0805f873,1,2,stdout);
    dired_pos = dired_pos + 2;
  }
  if ((byte)(print_scontext | print_owner | print_group | print_author) != 0) {
    fputs_unlocked(buf,stdout);
    dired_pos = (size_t)(p + (dired_pos - (int)buf));
    if (print_owner != false) {
      format_user((f->stat).st_uid,owner_width,f->stat_ok);
    }
    if (print_group != false) {
      format_group((f->stat).st_gid,group_width,f->stat_ok);
    }
    if (print_author != false) {
      format_user((f->stat).st_uid,author_width,f->stat_ok);
    }
    if (print_scontext != false) {
      format_user_or_group(f->scontext,0,scontext_width);
    }
    p = buf;
  }
  opts = human_output_opts;
  uVar3 = file_output_block_size._4_4_;
  uVar2 = (undefined4)file_output_block_size;
  if ((f->stat_ok == true) &&
     ((((f->stat).st_mode & 0xf000) == 0x2000 || (((f->stat).st_mode & 0xf000) == 0x6000)))) {
    uVar1 = ((-2 - major_device_number_width) - minor_device_number_width) + file_size_width;
    uVar5 = gnu_dev_minor((f->stat).st_rdev);
    pcVar6 = umaxtostr((ulonglong)uVar5,minorbuf);
    opts = minor_device_number_width;
    uVar5 = gnu_dev_major((f->stat).st_rdev);
    pcVar7 = umaxtostr((ulonglong)uVar5,majorbuf);
    sprintf(p,"%*s, %*s ",(~((int)uVar1 >> 0x1f) & uVar1) + major_device_number_width,pcVar7,opts,
            pcVar6);
    p = p + file_size_width + 1;
  }
  else {
    if (f->stat_ok == false) {
      local_11b8 = "?";
    }
    else {
      n = unsigned_file_size((f->stat).st_size);
      local_11b8 = human_readable(n,hbuf_1,opts,1,CONCAT44(uVar3,uVar2));
    }
    pad_1 = file_size_width;
    size = local_11b8;
    opts = gnu_mbswidth(local_11b8,0);
    pad_1 = pad_1 - opts;
    while (pcVar6 = p, 0 < pad_1) {
      *p = ' ';
      p = p + 1;
      pad_1 = pad_1 + -1;
    }
    do {
      p = pcVar6;
      *p = *size;
      size = size + 1;
      pcVar6 = p + 1;
    } while (*p != '\0');
    *p = ' ';
    p = p + 1;
  }
  when_local = (tm *)localtime((time_t *)&when_timespec);
  s = 0;
  *p = '\x01';
  if ((f->stat_ok != false) && (when_local != (tm *)0x0)) {
    if ((current_time < when) || ((current_time == when && (current_time_ns < when_ns)))) {
      get_current_time();
    }
    if ((when < current_time + -0xf0c2ac) ||
       ((current_time <= when && ((when != current_time || (current_time_ns < when_ns)))))) {
      local_11b4 = 0;
    }
    else {
      local_11b4 = 1;
    }
    s = nstrftime(p,0x3e9,long_time_format[local_11b4],when_local,0,when_ns);
  }
  if ((s == 0) && (*p != '\0')) {
    if (f->stat_ok == false) {
      local_11b0 = "?";
    }
    else {
      local_11b0 = imaxtostr((longlong)when,hbuf_3);
    }
    opts = long_time_expected_width();
    sprintf(p,"%*s ",opts,local_11b0);
    sVar4 = strlen(p);
    p = p + sVar4;
  }
  else {
    p = p + s;
    *p = ' ';
    p = p + 1;
    *p = '\0';
  }
  fputs_unlocked(buf,stdout);
  dired_pos = (size_t)(p + (dired_pos - (int)buf));
  if ((f->linkok & color_symlink_as_referent) == 0) {
    local_11a0 = (f->stat).st_mode;
  }
  else {
    local_11a0 = f->linkmode;
  }
  print_name_with_quoting(f->name,local_11a0,(uint)f->linkok,f->stat_ok,f->filetype,&dired_obstack);
  if (f->filetype == symbolic_link) {
    if (f->linkname != (char *)0x0) {
      fwrite_unlocked(&DAT_0805f9bb,1,4,stdout);
      dired_pos = dired_pos + 4;
      print_name_with_quoting
                (f->linkname,f->linkmode,(uint)f->linkok - 1,f->stat_ok,f->filetype,(obstack *)0x0);
      if (indicator_style != none) {
        print_type_indicator(true,f->linkmode,unknown);
      }
    }
  }
  else {
    if (indicator_style != none) {
      print_type_indicator(f->stat_ok,(f->stat).st_mode,f->filetype);
    }
  }
  return;
}



size_t quote_name(FILE *out,char *name,quoting_options *options,size_t *width)

{
  ushort *puVar1;
  byte bVar2;
  size_t sVar3;
  char *pcVar4;
  int iVar5;
  ushort **ppuVar6;
  mbstate_t **ppmVar7;
  undefined4 ***local_2050;
  int local_204c;
  wchar_t wc;
  mbstate_t mbstate;
  char smallbuf [8192];
  size_t len;
  char *buf;
  size_t displayed_width;
  char *p;
  char *plimit;
  char *q;
  size_t bytes;
  int w;
  char *p_1;
  char *plimit_1;
  char *p_2;
  char *plimit_2;
  
  ppmVar7 = (mbstate_t **)&stack0xffffdf94;
  len = quotearg_buffer(smallbuf,0x2000,name,0xffffffff,options);
  if (len < (mbstate_t *)0x2000) {
    buf = smallbuf;
  }
  else {
    iVar5 = -((int)&((mbstate_t *)len)[3].__value + 3U & 0xfffffff0);
    ppmVar7 = (mbstate_t **)(&stack0xffffdf94 + iVar5);
    buf = (char *)((int)&local_2050 + iVar5);
    local_2050 = (undefined4 ***)buf;
    *(quoting_options **)(&stack0xffffdfa4 + iVar5) = options;
    *(undefined4 *)(&stack0xffffdfa0 + iVar5) = 0xffffffff;
    *(char **)(&stack0xffffdf9c + iVar5) = name;
    *(int *)(&stack0xffffdf98 + iVar5) = (int)&((mbstate_t *)len)->__count + 1;
    *(char **)(&stack0xffffdf94 + iVar5) = buf;
    *(undefined4 *)(&stack0xffffdf90 + iVar5) = 0x804fb08;
    quotearg_buffer(*(char **)(&stack0xffffdf94 + iVar5),*(size_t *)(&stack0xffffdf98 + iVar5),
                    *(char **)(&stack0xffffdf9c + iVar5),*(size_t *)(&stack0xffffdfa0 + iVar5),
                    *(quoting_options **)(&stack0xffffdfa4 + iVar5));
  }
  if (qmark_funny_chars == false) {
    if (width != (size_t *)0x0) {
      ppmVar7[-1] = 0x804fd35;
      sVar3 = __ctype_get_mb_cur_max(*(undefined *)(ppmVar7 + -1));
      if (sVar3 < 2) {
        p_2 = buf;
        displayed_width = 0;
        while (p_2 < buf + len) {
          ppmVar7[-1] = 0x804fd78;
          ppuVar6 = __ctype_b_loc(*(undefined *)(ppmVar7 + -1));
          puVar1 = *ppuVar6;
          *(int *)ppmVar7 = (int)*p_2;
          ppmVar7[-1] = 0x804fd8b;
          bVar2 = to_uchar(*(char *)ppmVar7);
          if ((puVar1[bVar2] & 0x4000) != 0) {
            displayed_width = displayed_width + 1;
          }
          p_2 = p_2 + 1;
        }
      }
      else {
        ppmVar7[2] = (mbstate_t *)0x0;
        *(size_t *)(ppmVar7 + 1) = len;
        *(char **)ppmVar7 = buf;
        ppmVar7[-1] = 0x804fd54;
        displayed_width = mbsnwidth((char *)*ppmVar7,(size_t)ppmVar7[1],(int)ppmVar7[2]);
      }
    }
  }
  else {
    ppmVar7[-1] = 0x804fb1c;
    sVar3 = __ctype_get_mb_cur_max(*(undefined *)(ppmVar7 + -1));
    if (sVar3 < 2) {
      p_1 = buf;
      while (displayed_width = len, p_1 < buf + len) {
        ppmVar7[-1] = 0x804fcdf;
        ppuVar6 = __ctype_b_loc(*(undefined *)(ppmVar7 + -1));
        puVar1 = *ppuVar6;
        *(int *)ppmVar7 = (int)*p_1;
        ppmVar7[-1] = 0x804fcf2;
        bVar2 = to_uchar(*(char *)ppmVar7);
        if ((puVar1[bVar2] & 0x4000) == 0) {
          *p_1 = '?';
        }
        p_1 = p_1 + 1;
      }
    }
    else {
      p = buf;
      pcVar4 = buf + len;
      q = buf;
      displayed_width = 0;
LAB_0804fcab:
      if (p < pcVar4) {
        local_204c = (int)*p;
        if (local_204c < 0x60) {
          if ((local_204c < 0x41) &&
             ((local_204c < 0x20 || ((0x23 < local_204c && (0x1a < local_204c - 0x25U))))))
          goto LAB_0804fbb5;
LAB_0804fb99:
          *q = *p;
          q = q + 1;
          displayed_width = displayed_width + 1;
          p = p + 1;
        }
        else {
          if (local_204c - 0x61U < 0x1e) goto LAB_0804fb99;
LAB_0804fbb5:
          mbstate.__count = 0;
          mbstate.__value = 0;
          do {
            ppmVar7[3] = (mbstate_t *)&mbstate;
            ppmVar7[2] = (mbstate_t *)(pcVar4 + -(int)p);
            *(char **)(ppmVar7 + 1) = p;
            *(wchar_t **)ppmVar7 = &wc;
            ppmVar7[-1] = 0x804fbfa;
            bytes = mbrtowc((wchar_t *)*ppmVar7,(char *)ppmVar7[1],(size_t)ppmVar7[2],ppmVar7[3]);
            if (bytes == 0xffffffff) {
              *q = '?';
              q = q + 1;
              displayed_width = displayed_width + 1;
              p = p + 1;
              break;
            }
            if (bytes == 0xfffffffe) {
              *q = '?';
              q = q + 1;
              displayed_width = displayed_width + 1;
              p = pcVar4;
              break;
            }
            if (bytes == 0) {
              bytes = 1;
            }
            *(wchar_t *)ppmVar7 = wc;
            ppmVar7[-1] = 0x804fc51;
            iVar5 = wcwidth((wchar_t)*ppmVar7);
            if (iVar5 < 0) {
              p = p + bytes;
              *q = '?';
              q = q + 1;
              displayed_width = displayed_width + 1;
            }
            else {
              while (bytes != 0) {
                *q = *p;
                q = q + 1;
                p = p + 1;
                bytes = bytes - 1;
              }
              displayed_width = displayed_width + iVar5;
            }
            *(mbstate_t **)ppmVar7 = &mbstate;
            ppmVar7[-1] = 0x804fca3;
            iVar5 = mbsinit(*ppmVar7);
          } while (iVar5 == 0);
        }
        goto LAB_0804fcab;
      }
      len = (size_t)(q + -(int)buf);
    }
  }
  if (out != (FILE *)0x0) {
    *(FILE **)(ppmVar7 + 3) = out;
    *(size_t *)(ppmVar7 + 2) = len;
    ppmVar7[1] = (mbstate_t *)0x1;
    *(char **)ppmVar7 = buf;
    ppmVar7[-1] = 0x804fdd9;
    fwrite_unlocked(*ppmVar7,(size_t)ppmVar7[1],(size_t)ppmVar7[2],(FILE *)ppmVar7[3]);
  }
  if (width != (size_t *)0x0) {
    *width = displayed_width;
  }
  return len;
}



uchar to_uchar(char ch)

{
  return (uchar)ch;
}



void print_name_with_quoting
               (char *p,mode_t mode,int linkok,_Bool stat_ok,filetype type,obstack *stack)

{
  size_t sVar1;
  obstack *__o;
  int __len;
  obstack *__o_1;
  int __len_1;
  
  if (print_with_color != false) {
    print_color_indicator(p,mode,linkok,stat_ok,type);
  }
  if ((stack != (obstack *)0x0) && (dired != false)) {
    if (stack->chunk_limit < stack->next_free + 4) {
      _obstack_newchunk(stack,4);
    }
    memcpy(stack->next_free,&dired_pos,4);
    stack->next_free = stack->next_free + 4;
  }
  sVar1 = quote_name(stdout,p,filename_quoting_options,(size_t *)0x0);
  dired_pos = sVar1 + dired_pos;
  if ((stack != (obstack *)0x0) && (dired != false)) {
    if (stack->chunk_limit < stack->next_free + 4) {
      _obstack_newchunk(stack,4);
    }
    memcpy(stack->next_free,&dired_pos,4);
    stack->next_free = stack->next_free + 4;
  }
  if (print_with_color != false) {
    process_signals();
    prep_non_filename_text();
  }
  return;
}



void prep_non_filename_text(void)

{
  if (color_indicator[2].string == (char *)0x0) {
    put_indicator(color_indicator);
    put_indicator(color_indicator + 3);
    put_indicator(color_indicator + 1);
  }
  else {
    put_indicator(color_indicator + 2);
  }
  return;
}



void print_file_name_and_frills(fileinfo *f)

{
  char *pcVar1;
  int local_2c8;
  int local_2bc;
  int local_2b4;
  mode_t local_2a4;
  char buf [652];
  
  if (print_inode != false) {
    pcVar1 = umaxtostr((f->stat).st_ino,buf);
    if (format == with_commas) {
      local_2c8 = 0;
    }
    else {
      local_2c8 = inode_number_width;
    }
    printf("%*s ",local_2c8,pcVar1);
  }
  if (print_block_size != false) {
    pcVar1 = human_readable((f->stat).st_blocks,buf,human_output_opts,0x200,
                            CONCAT44(output_block_size._4_4_,(undefined4)output_block_size));
    if (format == with_commas) {
      local_2bc = 0;
    }
    else {
      local_2bc = block_size_width;
    }
    printf("%*s ",local_2bc,pcVar1);
  }
  if (print_scontext != false) {
    if (format == with_commas) {
      local_2b4 = 0;
    }
    else {
      local_2b4 = scontext_width;
    }
    printf("%*s ",local_2b4,f->scontext);
  }
  if ((f->linkok & color_symlink_as_referent) == 0) {
    local_2a4 = (f->stat).st_mode;
  }
  else {
    local_2a4 = f->linkmode;
  }
  print_name_with_quoting(f->name,local_2a4,(uint)f->linkok,f->stat_ok,f->filetype,(obstack *)0x0);
  if (indicator_style != none) {
    print_type_indicator(f->stat_ok,(f->stat).st_mode,f->filetype);
  }
  return;
}



char get_type_indicator(_Bool stat_ok,mode_t mode,filetype type)

{
  bool bVar1;
  char c;
  
  if (stat_ok == false) {
    bVar1 = type == normal;
  }
  else {
    bVar1 = (mode & 0xf000) == 0x8000;
  }
  if (bVar1) {
    if (((stat_ok == true) && (indicator_style == classify)) && ((mode & 0x49) != 0)) {
      c = '*';
    }
    else {
      c = '\0';
    }
  }
  else {
    if (stat_ok == false) {
      if ((type == directory) || (type == arg_directory)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
    }
    else {
      bVar1 = (mode & 0xf000) == 0x4000;
    }
    if (bVar1) {
      c = '/';
    }
    else {
      if (indicator_style == slash) {
        c = '\0';
      }
      else {
        if (stat_ok == false) {
          bVar1 = type == symbolic_link;
        }
        else {
          bVar1 = (mode & 0xf000) == 0xa000;
        }
        if (bVar1) {
          c = '@';
        }
        else {
          if (stat_ok == false) {
            bVar1 = type == fifo;
          }
          else {
            bVar1 = (mode & 0xf000) == 0x1000;
          }
          if (bVar1) {
            c = '|';
          }
          else {
            if (stat_ok == false) {
              bVar1 = type == sock;
            }
            else {
              bVar1 = (mode & 0xf000) == 0xc000;
            }
            if (bVar1) {
              c = '=';
            }
            else {
              c = '\0';
            }
          }
        }
      }
    }
  }
  return c;
}



void print_type_indicator(_Bool stat_ok,mode_t mode,filetype type)

{
  char cVar1;
  char c;
  
  cVar1 = get_type_indicator(stat_ok,mode,type);
  if (cVar1 != '\0') {
    putchar_unlocked((int)cVar1);
    dired_pos = dired_pos + 1;
  }
  return;
}



void print_color_indicator(char *name,mode_t mode,int linkok,_Bool stat_ok,filetype filetype)

{
  indicator_no filetype_indicator [10];
  size_t sVar1;
  int iVar2;
  int local_20;
  bin_str *local_1c;
  int type;
  color_ext_type *ext;
  size_t len;
  
  if ((linkok == -1) && (color_indicator[11].string != (char *)0x0)) {
    type = 0xb;
  }
  else {
    if (stat_ok == true) {
      if ((mode & 0xf000) == 0x8000) {
        type = 4;
        if ((mode & 0x800) == 0) {
          if ((mode & 0x400) == 0) {
            if ((mode & 0x49) != 0) {
              type = 0xd;
            }
          }
          else {
            type = 0x10;
          }
        }
        else {
          type = 0xf;
        }
      }
      else {
        if ((mode & 0xf000) == 0x4000) {
          if (((mode & 0x200) == 0) || ((mode & 2) == 0)) {
            if ((mode & 2) == 0) {
              if ((mode & 0x200) == 0) {
                type = 5;
              }
              else {
                type = 0x11;
              }
            }
            else {
              type = 0x12;
            }
          }
          else {
            type = 0x13;
          }
        }
        else {
          if ((mode & 0xf000) == 0xa000) {
            if ((linkok == 0) && (color_indicator[12].string != (char *)0x0)) {
              local_20 = 0xc;
            }
            else {
              local_20 = 6;
            }
            type = local_20;
          }
          else {
            if ((mode & 0xf000) == 0x1000) {
              type = 7;
            }
            else {
              if ((mode & 0xf000) == 0xc000) {
                type = 8;
              }
              else {
                if ((mode & 0xf000) == 0x6000) {
                  type = 9;
                }
                else {
                  if ((mode & 0xf000) == 0x2000) {
                    type = 10;
                  }
                  else {
                    type = 0xc;
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      type = ((indicator_no *)&ram0x080643a0)[filetype];
    }
  }
  ext = (color_ext_type *)0x0;
  if (type == 4) {
    sVar1 = strlen(name);
    ext = color_ext_list;
    while (ext != (color_ext_type *)0x0) {
      if ((ext->ext).len <= sVar1) {
        iVar2 = strncmp(name + (sVar1 - (ext->ext).len),(ext->ext).string,(ext->ext).len);
        if (iVar2 == 0) break;
      }
      ext = ext->next;
    }
  }
  put_indicator(color_indicator);
  if (ext == (color_ext_type *)0x0) {
    local_1c = color_indicator + type;
  }
  else {
    local_1c = &ext->seq;
  }
  put_indicator(local_1c);
  put_indicator(color_indicator + 1);
  return;
}



void put_indicator(bin_str *ind)

{
  char cVar1;
  size_t i;
  char *p;
  
  p = ind->string;
  i = ind->len;
  while (i != 0) {
    cVar1 = *p;
    p = p + 1;
    putchar_unlocked((int)cVar1);
    i = i - 1;
  }
  return;
}



size_t length_of_file_name_and_frills(fileinfo *f)

{
  char cVar1;
  char *__s;
  size_t sVar2;
  size_t local_2c0;
  int local_2bc;
  int local_2b4;
  char buf [652];
  size_t name_width;
  size_t len;
  char c;
  
  len = 0;
  if (print_inode != false) {
    if (format == with_commas) {
      __s = umaxtostr((f->stat).st_ino,buf);
      sVar2 = strlen(__s);
      local_2c0 = sVar2 + 1;
    }
    else {
      local_2c0 = inode_number_width + 1;
    }
    len = local_2c0;
  }
  if (print_block_size != false) {
    sVar2 = block_size_width;
    if (format == with_commas) {
      __s = human_readable((f->stat).st_blocks,buf,human_output_opts,0x200,
                           CONCAT44(output_block_size._4_4_,(undefined4)output_block_size));
      sVar2 = strlen(__s);
    }
    local_2bc = sVar2 + 1;
    len = len + local_2bc;
  }
  if (print_scontext != false) {
    sVar2 = scontext_width;
    if (format == with_commas) {
      sVar2 = strlen(f->scontext);
    }
    local_2b4 = sVar2 + 1;
    len = len + local_2b4;
  }
  quote_name((FILE *)0x0,f->name,filename_quoting_options,&name_width);
  len = len + name_width;
  if (indicator_style != none) {
    cVar1 = get_type_indicator(f->stat_ok,(f->stat).st_mode,f->filetype);
    len = len + (cVar1 != '\0');
  }
  return len;
}



void print_many_per_line(void)

{
  uint uVar1;
  fileinfo *f_00;
  size_t sVar2;
  column_info *pcVar3;
  size_t sVar4;
  size_t sVar5;
  size_t row;
  size_t cols;
  column_info *line_fmt;
  size_t rows;
  size_t col;
  size_t filesno;
  size_t pos;
  fileinfo *f;
  size_t name_length;
  size_t max_name_length;
  
  sVar4 = calculate_columns(true);
  pcVar3 = column_info;
  uVar1 = cwd_n_used / sVar4 + (uint)(cwd_n_used % sVar4 != 0);
  row = 0;
  while (row < uVar1) {
    col = 0;
    filesno = row;
    pos = 0;
    while( true ) {
      f_00 = (fileinfo *)sorted_file[filesno];
      sVar5 = length_of_file_name_and_frills(f_00);
      sVar2 = pcVar3[sVar4 - 1].col_arr[col];
      col = col + 1;
      print_file_name_and_frills(f_00);
      filesno = filesno + uVar1;
      if (cwd_n_used <= filesno) break;
      indent(pos + sVar5,pos + sVar2);
      pos = pos + sVar2;
    }
    putchar_unlocked(10);
    row = row + 1;
  }
  return;
}



void print_horizontal(void)

{
  column_info *pcVar1;
  fileinfo *f_00;
  size_t sVar2;
  size_t filesno;
  size_t pos;
  size_t cols;
  column_info *line_fmt;
  fileinfo *f;
  size_t name_length;
  size_t max_name_length;
  size_t col;
  
  pos = 0;
  sVar2 = calculate_columns(false);
  pcVar1 = column_info + (sVar2 - 1);
  f_00 = (fileinfo *)*sorted_file;
  name_length = length_of_file_name_and_frills(f_00);
  max_name_length = *pcVar1->col_arr;
  print_file_name_and_frills(f_00);
  filesno = 1;
  while (filesno < cwd_n_used) {
    if (filesno % sVar2 == 0) {
      putchar_unlocked(10);
      pos = 0;
    }
    else {
      indent(pos + name_length,pos + max_name_length);
      pos = pos + max_name_length;
    }
    f_00 = (fileinfo *)sorted_file[filesno];
    print_file_name_and_frills(f_00);
    name_length = length_of_file_name_and_frills(f_00);
    max_name_length = pcVar1->col_arr[filesno % sVar2];
    filesno = filesno + 1;
  }
  putchar_unlocked(10);
  return;
}



void print_with_commas(void)

{
  fileinfo *f_00;
  size_t sVar1;
  size_t filesno;
  size_t pos;
  fileinfo *f;
  size_t len;
  char separator;
  
  pos = 0;
  filesno = 0;
  while (filesno < cwd_n_used) {
    f_00 = (fileinfo *)sorted_file[filesno];
    sVar1 = length_of_file_name_and_frills(f_00);
    if (filesno != 0) {
      if (pos + sVar1 + 2 < line_length) {
        pos = pos + 2;
        separator = ' ';
      }
      else {
        pos = 0;
        separator = '\n';
      }
      putchar_unlocked(0x2c);
      putchar_unlocked((int)separator);
    }
    print_file_name_and_frills(f_00);
    pos = pos + sVar1;
    filesno = filesno + 1;
  }
  putchar_unlocked(10);
  return;
}



void indent(size_t from,size_t to)

{
LAB_08050b9d:
  do {
    if (to <= from) {
      return;
    }
    if (tabsize != 0) {
      if ((from + 1) / tabsize < to / tabsize) {
        putchar_unlocked(9);
        from = from + (tabsize - from % tabsize);
        goto LAB_08050b9d;
      }
    }
    putchar_unlocked(0x20);
    from = from + 1;
  } while( true );
}



void attach(char *dest,char *dirname,char *name)

{
  char *dirnamep;
  
  dirnamep = dirname;
  if ((*dirname != '.') || (dirname[1] != '\0')) {
    while (*dirnamep != '\0') {
      *dest = *dirnamep;
      dest = dest + 1;
      dirnamep = dirnamep + 1;
    }
    if ((dirname < dirnamep) && (dirnamep[-1] != '/')) {
      *dest = '/';
      dest = dest + 1;
    }
  }
  while (*name != '\0') {
    *dest = *name;
    dest = dest + 1;
    name = name + 1;
  }
  *dest = '\0';
  return;
}



void init_column_info(void)

{
  size_t column_info_alloc;
  uint uVar1;
  uint uVar2;
  size_t local_2c;
  size_t i;
  size_t max_cols;
  size_t new_column_info_alloc;
  size_t *p;
  size_t column_info_growth;
  size_t s;
  size_t t;
  size_t j;
  
  local_2c = cwd_n_used;
  if (max_idx < cwd_n_used) {
    local_2c = max_idx;
  }
  if (column_info_alloc < local_2c) {
    if (local_2c < max_idx >> 1) {
      column_info = (column_info *)xnrealloc(column_info,local_2c,0x18);
      new_column_info_alloc = local_2c * 2;
    }
    else {
      column_info = (column_info *)xnrealloc(column_info,max_idx,0xc);
      new_column_info_alloc = max_idx;
    }
    uVar1 = column_info_alloc + new_column_info_alloc + 1;
    uVar2 = uVar1 * (new_column_info_alloc - column_info_alloc);
    if ((uVar1 < new_column_info_alloc) ||
       (uVar2 / (new_column_info_alloc - column_info_alloc) != uVar1)) {
      xalloc_die();
    }
    p = (size_t *)xnmalloc(uVar2 >> 1,4);
    i = column_info_alloc;
    while (i < new_column_info_alloc) {
      column_info[i].col_arr = p;
      p = p + i + 1;
      i = i + 1;
    }
  }
  i = 0;
  while (i < local_2c) {
    column_info[i].valid_len = true;
    column_info[i].line_len = (i + 1) * 3;
    j = 0;
    while (j <= i) {
      column_info[i].col_arr[j] = 3;
      j = j + 1;
    }
    i = i + 1;
  }
  return;
}



size_t calculate_columns(_Bool by_columns)

{
  size_t sVar1;
  uint uVar2;
  size_t local_40;
  uint local_38;
  int local_34;
  size_t filesno;
  size_t cols;
  size_t max_cols;
  fileinfo *f;
  size_t name_length;
  size_t i;
  size_t idx;
  size_t real_length;
  
  local_40 = cwd_n_used;
  if (max_idx < cwd_n_used) {
    local_40 = max_idx;
  }
  init_column_info();
  filesno = 0;
  while (filesno < cwd_n_used) {
    sVar1 = length_of_file_name_and_frills((fileinfo *)sorted_file[filesno]);
    i = 0;
    while (i < local_40) {
      if (column_info[i].valid_len != false) {
        if (by_columns == false) {
          local_38 = filesno % (i + 1);
        }
        else {
          local_38 = filesno / ((i + cwd_n_used) / (i + 1));
        }
        if (local_38 == i) {
          local_34 = 0;
        }
        else {
          local_34 = 2;
        }
        uVar2 = local_34 + sVar1;
        if (column_info[i].col_arr[local_38] < uVar2) {
          column_info[i].line_len =
               column_info[i].line_len + (uVar2 - column_info[i].col_arr[local_38]);
          column_info[i].col_arr[local_38] = uVar2;
          *(bool *)&column_info[i].valid_len = column_info[i].line_len < line_length;
        }
      }
      i = i + 1;
    }
    filesno = filesno + 1;
  }
  cols = local_40;
  while ((1 < cols && (column_info[cols - 1].valid_len == false))) {
    cols = cols - 1;
  }
  return cols;
}



void usage(int status)

{
  FILE *__stream;
  char *__format;
  char *__s;
  
  __s = program_name;
  if (status == 0) {
    __format = (char *)gettext("Usage: %s [OPTION]... [FILE]...\n");
    printf(__format,__s);
    __stream = stdout;
    __s = (char *)gettext(
                         "List information about the FILEs (the current directory by default).\nSort entries alphabetically if none of -cftuvSUX nor --sort.\n\n"
                         );
    fputs_unlocked(__s,__stream);
    __stream = stdout;
    __s = (char *)gettext(
                         "Mandatory arguments to long options are mandatory for short options too.\n"
                         );
    fputs_unlocked(__s,__stream);
    __stream = stdout;
    __s = (char *)gettext(
                         "  -a, --all                  do not ignore entries starting with .\n  -A, --almost-all           do not list implied . and ..\n      --author               with -l, print the author of each file\n  -b, --escape               print octal escapes for nongraphic characters\n"
                         );
    fputs_unlocked(__s,__stream);
    __stream = stdout;
    __s = (char *)gettext(
                         "      --block-size=SIZE      use SIZE-byte blocks\n  -B, --ignore-backups       do not list implied entries ending with ~\n  -c                         with -lt: sort by, and show, ctime (time of last\n                               modification of file status information)\n                               with -l: show ctime and sort by name\n                               otherwise: sort by ctime\n"
                         );
    fputs_unlocked(__s,__stream);
    __stream = stdout;
    __s = (char *)gettext(
                         "  -C                         list entries by columns\n      --color[=WHEN]         control whether color is used to distinguish file\n                               types.  WHEN may be `never\', `always\', or `auto\'\n  -d, --directory            list directory entries instead of contents,\n                               and do not dereference symbolic links\n  -D, --dired                generate output designed for Emacs\' dired mode\n"
                         );
    fputs_unlocked(__s,__stream);
    __stream = stdout;
    __s = (char *)gettext(
                         "  -f                         do not sort, enable -aU, disable -ls --color\n  -F, --classify             append indicator (one of */=>@|) to entries\n      --file-type            likewise, except do not append `*\'\n      --format=WORD          across -x, commas -m, horizontal -x, long -l,\n                               single-column -1, verbose -l, vertical -C\n      --full-time            like -l --time-style=full-iso\n"
                         );
    fputs_unlocked(__s,__stream);
    __stream = stdout;
    __s = (char *)gettext("  -g                         like -l, but do not list owner\n");
    fputs_unlocked(__s,__stream);
    __stream = stdout;
    __s = (char *)gettext(
                         "      --group-directories-first\n                             group directories before files\n"
                         );
    fputs_unlocked(__s,__stream);
    __stream = stdout;
    __s = (char *)gettext(
                         "  -G, --no-group             in a long listing, don\'t print group names\n  -h, --human-readable       with -l, print sizes in human readable format\n                               (e.g., 1K 234M 2G)\n      --si                   likewise, but use powers of 1000 not 1024\n"
                         );
    fputs_unlocked(__s,__stream);
    __stream = stdout;
    __s = (char *)gettext(
                         "  -H, --dereference-command-line\n                             follow symbolic links listed on the command line\n      --dereference-command-line-symlink-to-dir\n                             follow each command line symbolic link\n                             that points to a directory\n      --hide=PATTERN         do not list implied entries matching shell PATTERN\n                               (overridden by -a or -A)\n"
                         );
    fputs_unlocked(__s,__stream);
    __stream = stdout;
    __s = (char *)gettext(
                         "      --indicator-style=WORD  append indicator with style WORD to entry names:\n                               none (default), slash (-p),\n                               file-type (--file-type), classify (-F)\n  -i, --inode                print the index number of each file\n  -I, --ignore=PATTERN       do not list implied entries matching shell PATTERN\n  -k                         like --block-size=1K\n"
                         );
    fputs_unlocked(__s,__stream);
    __stream = stdout;
    __s = (char *)gettext(
                         "  -l                         use a long listing format\n  -L, --dereference          when showing file information for a symbolic\n                               link, show information for the file the link\n                               references rather than for the link itself\n  -m                         fill width with a comma separated list of entries\n"
                         );
    fputs_unlocked(__s,__stream);
    __stream = stdout;
    __s = (char *)gettext(
                         "  -n, --numeric-uid-gid      like -l, but list numeric user and group IDs\n  -N, --literal              print raw entry names (don\'t treat e.g. control\n                               characters specially)\n  -o                         like -l, but do not list group information\n  -p, --indicator-style=slash\n                             append / indicator to directories\n"
                         );
    fputs_unlocked(__s,__stream);
    __stream = stdout;
    __s = (char *)gettext(
                         "  -q, --hide-control-chars   print ? instead of non graphic characters\n      --show-control-chars   show non graphic characters as-is (default\n                             unless program is `ls\' and output is a terminal)\n  -Q, --quote-name           enclose entry names in double quotes\n      --quoting-style=WORD   use quoting style WORD for entry names:\n                               literal, locale, shell, shell-always, c, escape\n"
                         );
    fputs_unlocked(__s,__stream);
    __stream = stdout;
    __s = (char *)gettext(
                         "  -r, --reverse              reverse order while sorting\n  -R, --recursive            list subdirectories recursively\n  -s, --size                 print the size of each file, in blocks\n"
                         );
    fputs_unlocked(__s,__stream);
    __stream = stdout;
    __s = (char *)gettext(
                         "  -S                         sort by file size\n      --sort=WORD            sort by WORD instead of name: none -U,\n                             extension -X, size -S, time -t, version -v\n      --time=WORD            with -l, show time as WORD instead of modification\n                             time: atime -u, access -u, use -u, ctime -c,\n                             or status -c; use specified time as sort key\n                             if --sort=time\n"
                         );
    fputs_unlocked(__s,__stream);
    __stream = stdout;
    __s = (char *)gettext(
                         "      --time-style=STYLE     with -l, show times using style STYLE:\n                             full-iso, long-iso, iso, locale, +FORMAT.\n                             FORMAT is interpreted like `date\'; if FORMAT is\n                             FORMAT1<newline>FORMAT2, FORMAT1 applies to\n                             non-recent files and FORMAT2 to recent files;\n                             if STYLE is prefixed with `posix-\', STYLE\n                             takes effect only outside the POSIX locale\n"
                         );
    fputs_unlocked(__s,__stream);
    __stream = stdout;
    __s = (char *)gettext(
                         "  -t                         sort by modification time\n  -T, --tabsize=COLS         assume tab stops at each COLS instead of 8\n"
                         );
    fputs_unlocked(__s,__stream);
    __stream = stdout;
    __s = (char *)gettext(
                         "  -u                         with -lt: sort by, and show, access time\n                               with -l: show access time and sort by name\n                               otherwise: sort by access time\n  -U                         do not sort; list entries in directory order\n  -v                         sort by version\n"
                         );
    fputs_unlocked(__s,__stream);
    __stream = stdout;
    __s = (char *)gettext(
                         "  -w, --width=COLS           assume screen width instead of current value\n  -x                         list entries by lines instead of by columns\n  -X                         sort alphabetically by entry extension\n  -Z, --context              print any SELinux security context of each file\n  -1                         list one file per line\n"
                         );
    fputs_unlocked(__s,__stream);
    __stream = stdout;
    __s = (char *)gettext("      --help     display this help and exit\n");
    fputs_unlocked(__s,__stream);
    __stream = stdout;
    __s = (char *)gettext("      --version  output version information and exit\n");
    fputs_unlocked(__s,__stream);
    __stream = stdout;
    __s = (char *)gettext(
                         "\nSIZE may be (or may be an integer optionally followed by) one of following:\nkB 1000, K 1024, MB 1000*1000, M 1024*1024, and so on for G, T, P, E, Z, Y.\n"
                         );
    fputs_unlocked(__s,__stream);
    __stream = stdout;
    __s = (char *)gettext(
                         "\nBy default, color is not used to distinguish types of files.  That is\nequivalent to using --color=none.  Using the --color option without the\noptional WHEN argument is equivalent to using --color=always.  With\n--color=auto, color codes are output only if standard output is connected\nto a terminal (tty).  The environment variable LS_COLORS can influence the\ncolors, and can be set easily by the dircolors command.\n"
                         );
    fputs_unlocked(__s,__stream);
    __stream = stdout;
    __s = (char *)gettext("\nExit status is 0 if OK, 1 if minor problems, 2 if serious trouble.\n");
    fputs_unlocked(__s,__stream);
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



// WARNING: Removing unreachable block (ram,0x080513ff)

char * areadlink_with_size(char *file,size_t size)

{
  int iVar1;
  char *__buf;
  uint uVar2;
  int *piVar3;
  size_t local_2c;
  int saved_errno;
  char *buffer;
  size_t link_length;
  ssize_t r;
  size_t buf_size;
  size_t initial_limit;
  size_t INITIAL_LIMIT_BOUND;
  size_t symlink_max;
  
  if (size < 0x401) {
    local_2c = size + 1;
  }
  else {
    local_2c = 0x401;
  }
  buf_size = local_2c;
  while( true ) {
    __buf = (char *)malloc(buf_size);
    if (__buf == (char *)0x0) {
      return (char *)0x0;
    }
    uVar2 = readlink(file,__buf,buf_size);
    if (((int)uVar2 < 0) && (piVar3 = __errno_location(), *piVar3 != 0x22)) break;
    if (uVar2 < buf_size) {
      __buf[uVar2] = '\0';
      return __buf;
    }
    free(__buf);
    if (buf_size < 0x40000000) {
      buf_size = buf_size << 1;
    }
    else {
      if (0x7ffffffe < buf_size) {
        piVar3 = __errno_location();
        *piVar3 = 0xc;
        return (char *)0x0;
      }
      buf_size = 0x7fffffff;
    }
  }
  piVar3 = __errno_location();
  iVar1 = *piVar3;
  free(__buf);
  piVar3 = __errno_location();
  *piVar3 = iVar1;
  return (char *)0x0;
}



int gnu_mbswidth(char *string,int flags)

{
  size_t nbytes;
  int iVar1;
  
  nbytes = strlen(string);
  iVar1 = mbsnwidth(string,nbytes,flags);
  return iVar1;
}



int mbsnwidth(char *string,size_t nbytes,int flags)

{
  byte bVar1;
  size_t sVar2;
  int iVar3;
  uint uVar4;
  ushort **ppuVar5;
  int local_38;
  mbstate_t mbstate;
  int w;
  size_t bytes;
  wchar_t wc;
  int width;
  char *plimit;
  char *p;
  uchar c;
  
  p = string;
  string = string + nbytes;
  width = 0;
  sVar2 = __ctype_get_mb_cur_max();
  if (sVar2 < 2) {
    while (p < string) {
      bVar1 = *p;
      p = p + 1;
      ppuVar5 = __ctype_b_loc();
      if (((*ppuVar5)[bVar1] & 0x4000) == 0) {
        if ((flags & 2U) != 0) {
          return -1;
        }
        ppuVar5 = __ctype_b_loc();
        width = width + (uint)(((*ppuVar5)[bVar1] & 2) == 0);
      }
      else {
        width = width + 1;
      }
    }
    local_38 = width;
  }
  else {
LAB_080516bb:
    if (p < string) {
      iVar3 = (int)*p;
      if (iVar3 < 0x60) {
        if ((0x40 < iVar3) || ((0x1f < iVar3 && ((iVar3 < 0x24 || (iVar3 - 0x25U < 0x1b))))))
        goto LAB_080515a4;
LAB_080515b1:
        memset(&mbstate,0,8);
        do {
          bytes = mbrtowc(&wc,p,(size_t)(string + -(int)p),(mbstate_t *)&mbstate);
          if (bytes == 0xffffffff) {
            if ((flags & 1U) != 0) {
              return -1;
            }
            width = width + 1;
            p = p + 1;
            break;
          }
          if (bytes == 0xfffffffe) {
            if ((flags & 1U) != 0) {
              return -1;
            }
            width = width + 1;
            p = string;
            break;
          }
          if (bytes == 0) {
            bytes = 1;
          }
          uVar4 = wcwidth(wc);
          if ((int)uVar4 < 0) {
            if ((flags & 2U) != 0) {
              return -1;
            }
            iVar3 = iswcntrl(wc);
            uVar4 = (uint)(iVar3 == 0);
          }
          width = width + uVar4;
          p = p + bytes;
          iVar3 = mbsinit((mbstate_t *)&mbstate);
        } while (iVar3 == 0);
      }
      else {
        if (0x1d < iVar3 - 0x61U) goto LAB_080515b1;
LAB_080515a4:
        width = width + 1;
        p = p + 1;
      }
      goto LAB_080516bb;
    }
    local_38 = width;
  }
  return local_38;
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
  uVar1 = gettext(&DAT_0806151b);
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



void xalloc_die(void)

{
  undefined4 uVar1;
  
  uVar1 = gettext("memory exhausted");
  error(exit_failure,0,&DAT_080617e0,uVar1);
                    // WARNING: Subroutine does not return
  abort();
}



void __argmatch_die(void)

{
  usage(1);
  return;
}



ptrdiff_t argmatch(char *arg,char **arglist,char *vallist,size_t valsize)

{
  bool bVar1;
  size_t __n;
  int iVar2;
  size_t sVar3;
  ptrdiff_t local_18;
  ptrdiff_t matchind;
  size_t arglen;
  size_t i;
  _Bool ambiguous;
  
  matchind = -1;
  bVar1 = false;
  __n = strlen(arg);
  i = 0;
  do {
    if (arglist[i] == (char *)0x0) {
      if (bVar1) {
        local_18 = -2;
      }
      else {
        local_18 = matchind;
      }
      return local_18;
    }
    iVar2 = strncmp(arglist[i],arg,__n);
    if (iVar2 == 0) {
      sVar3 = strlen(arglist[i]);
      if (sVar3 == __n) {
        return i;
      }
      if (matchind == -1) {
        matchind = i;
      }
      else {
        if ((vallist == (char *)0x0) ||
           (iVar2 = memcmp(vallist + matchind * valsize,vallist + valsize * i,valsize), iVar2 != 0))
        {
          bVar1 = true;
        }
      }
    }
    i = i + 1;
  } while( true );
}



void argmatch_invalid(char *context,char *value,ptrdiff_t problem)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 local_1c;
  char *format;
  
  if (problem == -1) {
    local_1c = gettext("invalid argument %s for %s");
  }
  else {
    local_1c = gettext("ambiguous argument %s for %s");
  }
  pcVar1 = quote_n(1,context);
  pcVar2 = quotearg_n_style(0,locale_quoting_style,value);
  error(0,0,local_1c,pcVar2,pcVar1);
  return;
}



void argmatch_valid(char **arglist,char *vallist,size_t valsize)

{
  char *__format;
  int iVar1;
  char *last_val;
  size_t i;
  
  last_val = (char *)0x0;
  __format = (char *)gettext("Valid arguments are:");
  fprintf(stderr,__format);
  i = 0;
  do {
    if (arglist[i] == (char *)0x0) {
      putc_unlocked(10,stderr);
      return;
    }
    if (i == 0) {
LAB_08051c0b:
      fprintf(stderr,"\n  - `%s\'",arglist[i]);
      last_val = vallist + valsize * i;
    }
    else {
      iVar1 = memcmp(last_val,vallist + valsize * i,valsize);
      if (iVar1 != 0) goto LAB_08051c0b;
      fprintf(stderr,", `%s\'",arglist[i]);
    }
    i = i + 1;
  } while( true );
}



ptrdiff_t __xargmatch_internal
                    (char *context,char *arg,char **arglist,char *vallist,size_t valsize,
                    argmatch_exit_fn *exit_fn)

{
  ptrdiff_t local_18;
  ptrdiff_t res;
  
  local_18 = argmatch(arg,arglist,vallist,valsize);
  if (local_18 < 0) {
    argmatch_invalid(context,arg,local_18);
    argmatch_valid(arglist,vallist,valsize);
    (*exit_fn)();
    local_18 = -1;
  }
  return local_18;
}



char * argmatch_to_argument(char *value,char **arglist,char *vallist,size_t valsize)

{
  int iVar1;
  size_t i;
  
  i = 0;
  while( true ) {
    if (arglist[i] == (char *)0x0) {
      return (char *)0x0;
    }
    iVar1 = memcmp(value,vallist + valsize * i,valsize);
    if (iVar1 == 0) break;
    i = i + 1;
  }
  return arglist[i];
}



char * last_component(char *name)

{
  bool bVar1;
  char *p;
  char *base;
  _Bool saw_slash;
  
  base = name;
  bVar1 = false;
  while (*base == '/') {
    base = base + 1;
  }
  p = base;
  while (*p != '\0') {
    if (*p == '/') {
      bVar1 = true;
    }
    else {
      if (bVar1) {
        base = p;
        bVar1 = false;
      }
    }
    p = p + 1;
  }
  return base;
}



char * base_name(char *name)

{
  char *name_00;
  size_t n;
  char *local_18;
  size_t length;
  char *base;
  
  name_00 = last_component(name);
  if (*name_00 == '\0') {
    n = base_len(name);
    local_18 = xstrndup(name,n);
  }
  else {
    length = base_len(name_00);
    if (name_00[length] == '/') {
      length = length + 1;
    }
    local_18 = xstrndup(name_00,length);
  }
  return local_18;
}



size_t base_len(char *name)

{
  size_t prefix_len;
  size_t len;
  
  len = strlen(name);
  while ((1 < len && (name[len - 1] == '/'))) {
    len = len - 1;
  }
  return len;
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
      error(0,*piVar4,&DAT_08061854,uVar2);
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



int file_has_acl(char *name,stat *sb)

{
  return 0;
}



char ftypelet(mode_t bits)

{
  char local_5;
  
  if ((bits & 0xf000) == 0x8000) {
    local_5 = '-';
  }
  else {
    if ((bits & 0xf000) == 0x4000) {
      local_5 = 'd';
    }
    else {
      if ((bits & 0xf000) == 0x6000) {
        local_5 = 'b';
      }
      else {
        if ((bits & 0xf000) == 0x2000) {
          local_5 = 'c';
        }
        else {
          if ((bits & 0xf000) == 0xa000) {
            local_5 = 'l';
          }
          else {
            if ((bits & 0xf000) == 0x1000) {
              local_5 = 'p';
            }
            else {
              if ((bits & 0xf000) == 0xc000) {
                local_5 = 's';
              }
              else {
                local_5 = '?';
              }
            }
          }
        }
      }
    }
  }
  return local_5;
}



void strmode(mode_t mode,char *str)

{
  char cVar1;
  char local_45;
  char local_3d;
  char local_37;
  char local_36;
  char local_35;
  char local_2d;
  char local_25;
  char local_1f;
  char local_1e;
  char local_1d;
  char local_15;
  char local_d;
  char local_7;
  char local_6;
  char local_5;
  
  cVar1 = ftypelet(mode);
  *str = cVar1;
  if ((mode & 0x100) == 0) {
    local_45 = '-';
  }
  else {
    local_45 = 'r';
  }
  str[1] = local_45;
  if ((mode & 0x80) == 0) {
    local_3d = '-';
  }
  else {
    local_3d = 'w';
  }
  str[2] = local_3d;
  if ((mode & 0x800) == 0) {
    if ((mode & 0x40) == 0) {
      local_35 = '-';
    }
    else {
      local_35 = 'x';
    }
    local_37 = local_35;
  }
  else {
    if ((mode & 0x40) == 0) {
      local_36 = 'S';
    }
    else {
      local_36 = 's';
    }
    local_37 = local_36;
  }
  str[3] = local_37;
  if ((mode & 0x20) == 0) {
    local_2d = '-';
  }
  else {
    local_2d = 'r';
  }
  str[4] = local_2d;
  if ((mode & 0x10) == 0) {
    local_25 = '-';
  }
  else {
    local_25 = 'w';
  }
  str[5] = local_25;
  if ((mode & 0x400) == 0) {
    if ((mode & 8) == 0) {
      local_1d = '-';
    }
    else {
      local_1d = 'x';
    }
    local_1f = local_1d;
  }
  else {
    if ((mode & 8) == 0) {
      local_1e = 'S';
    }
    else {
      local_1e = 's';
    }
    local_1f = local_1e;
  }
  str[6] = local_1f;
  if ((mode & 4) == 0) {
    local_15 = '-';
  }
  else {
    local_15 = 'r';
  }
  str[7] = local_15;
  if ((mode & 2) == 0) {
    local_d = '-';
  }
  else {
    local_d = 'w';
  }
  str[8] = local_d;
  if ((mode & 0x200) == 0) {
    if ((mode & 1) == 0) {
      local_5 = '-';
    }
    else {
      local_5 = 'x';
    }
    local_7 = local_5;
  }
  else {
    if ((mode & 1) == 0) {
      local_6 = 'T';
    }
    else {
      local_6 = 't';
    }
    local_7 = local_6;
  }
  str[9] = local_7;
  str[10] = ' ';
  str[0xb] = '\0';
  return;
}



void filemodestring(stat *statp,char *str)

{
  strmode(statp->st_mode,str);
  return;
}



char * longest_relative_suffix(char *f)

{
  while (*f == '/') {
    f = f + 1;
  }
  return f;
}



char * mfile_name_concat(char *dir,char *abase,char **base_in_result)

{
  char *name;
  size_t sVar1;
  char *__s;
  size_t __n;
  undefined *puVar2;
  int local_2c;
  char *local_28;
  char *p;
  char *p_concat;
  size_t baselen;
  char *base;
  size_t needs_separator;
  size_t dirlen;
  size_t dirbaselen;
  char *dirbase;
  
  name = last_component(dir);
  sVar1 = base_len(name);
  if ((sVar1 == 0) || (name[sVar1 - 1] == '/')) {
    local_2c = 0;
  }
  else {
    local_2c = 1;
  }
  __s = longest_relative_suffix(abase);
  __n = strlen(__s);
  local_28 = (char *)malloc((size_t)(name + (sVar1 - (int)dir) + __n + local_2c + 1));
  if (local_28 == (char *)0x0) {
    local_28 = (char *)0x0;
  }
  else {
    puVar2 = (undefined *)mempcpy(local_28,dir,(size_t)(name + (sVar1 - (int)dir)));
    *puVar2 = 0x2f;
    if (base_in_result != (char **)0x0) {
      *base_in_result = puVar2 + local_2c + -(uint)(*abase == '/');
    }
    puVar2 = (undefined *)mempcpy(puVar2 + local_2c,__s,__n);
    *puVar2 = 0;
  }
  return local_28;
}



char * file_name_concat(char *dir,char *abase,char **base_in_result)

{
  char *pcVar1;
  char *p;
  
  pcVar1 = mfile_name_concat(dir,abase,base_in_result);
  if (pcVar1 == (char *)0x0) {
    xalloc_die();
  }
  return pcVar1;
}



_Bool hard_locale(int category)

{
  char *__s1;
  int iVar1;
  char *p;
  _Bool hard;
  
  hard = true;
  __s1 = setlocale(category,(char *)0x0);
  if (__s1 != (char *)0x0) {
    iVar1 = strcmp(__s1,"C");
    if ((iVar1 != 0) && (iVar1 = strcmp(__s1,"POSIX"), iVar1 != 0)) {
      return true;
    }
    hard = false;
  }
  return hard;
}



size_t hash_get_n_buckets(Hash_table *table)

{
  return table->n_buckets;
}



size_t hash_get_n_buckets_used(Hash_table *table)

{
  return table->n_buckets_used;
}



size_t hash_get_n_entries(Hash_table *table)

{
  return table->n_entries;
}



size_t hash_get_max_bucket_length(Hash_table *table)

{
  size_t bucket_length;
  hash_entry *cursor;
  size_t max_bucket_length;
  hash_entry *bucket;
  
  max_bucket_length = 0;
  bucket = table->bucket;
  while (bucket < table->bucket_limit) {
    if (bucket->data != (void *)0x0) {
      cursor = bucket;
      bucket_length = 1;
      while (cursor = cursor->next, cursor != (hash_entry *)0x0) {
        bucket_length = bucket_length + 1;
      }
      if (max_bucket_length < bucket_length) {
        max_bucket_length = bucket_length;
      }
    }
    bucket = bucket + 1;
  }
  return max_bucket_length;
}



_Bool hash_table_ok(Hash_table *table)

{
  undefined local_15;
  hash_entry *cursor;
  size_t n_entries;
  size_t n_buckets_used;
  hash_entry *bucket;
  
  n_buckets_used = 0;
  n_entries = 0;
  bucket = table->bucket;
  while (bucket < table->bucket_limit) {
    if (bucket->data != (void *)0x0) {
      cursor = bucket;
      n_buckets_used = n_buckets_used + 1;
      do {
        n_entries = n_entries + 1;
        cursor = cursor->next;
      } while (cursor != (hash_entry *)0x0);
    }
    bucket = bucket + 1;
  }
  if ((table->n_buckets_used == n_buckets_used) && (table->n_entries == n_entries)) {
    local_15 = 1;
  }
  else {
    local_15 = 0;
  }
  return (_Bool)local_15;
}



void hash_print_statistics(Hash_table *table,FILE *stream)

{
  size_t sVar1;
  size_t sVar2;
  size_t sVar3;
  size_t sVar4;
  size_t max_bucket_length;
  size_t n_buckets_used;
  size_t n_buckets;
  size_t n_entries;
  
  sVar1 = hash_get_n_entries(table);
  sVar2 = hash_get_n_buckets(table);
  sVar3 = hash_get_n_buckets_used(table);
  sVar4 = hash_get_max_bucket_length(table);
  fprintf((FILE *)stream,"# entries:         %lu\n",sVar1);
  fprintf((FILE *)stream,"# buckets:         %lu\n",sVar2);
  fprintf((FILE *)stream,"# buckets used:    %lu (%.2f%%)\n",sVar3,
          ((double)(ulonglong)sVar3 * 100.00000000) / (double)(ulonglong)sVar2);
  fprintf((FILE *)stream,"max bucket length: %lu\n",sVar4);
  return;
}



void * hash_lookup(Hash_table *table,void *entry)

{
  _Bool _Var1;
  size_t sVar2;
  hash_entry *cursor;
  hash_entry *bucket;
  
  cursor = table->bucket;
  sVar2 = (*table->hasher)(entry,table->n_buckets);
  cursor = cursor + sVar2;
  if (table->bucket_limit <= cursor) {
                    // WARNING: Subroutine does not return
    abort();
  }
  if (cursor->data != (void *)0x0) {
    while (cursor != (hash_entry *)0x0) {
      _Var1 = (*table->comparator)(entry,cursor->data);
      if (_Var1 != false) {
        return cursor->data;
      }
      cursor = cursor->next;
    }
  }
  return (void *)0x0;
}



void * hash_get_first(Hash_table *table)

{
  void *local_18;
  hash_entry *bucket;
  
  if (table->n_entries == 0) {
    local_18 = (void *)0x0;
  }
  else {
    bucket = table->bucket;
    while( true ) {
      if (table->bucket_limit <= bucket) {
                    // WARNING: Subroutine does not return
        abort();
      }
      if (bucket->data != (void *)0x0) break;
      bucket = bucket + 1;
    }
    local_18 = bucket->data;
  }
  return local_18;
}



void * hash_get_next(Hash_table *table,void *entry)

{
  size_t sVar1;
  hash_entry *cursor;
  hash_entry *bucket;
  
  bucket = table->bucket;
  sVar1 = (*table->hasher)(entry,table->n_buckets);
  bucket = bucket + sVar1;
  cursor = bucket;
  if (table->bucket_limit <= bucket) {
                    // WARNING: Subroutine does not return
    abort();
  }
  while( true ) {
    if (cursor == (hash_entry *)0x0) {
      do {
        bucket = bucket + 1;
        if (table->bucket_limit <= bucket) {
          return (void *)0x0;
        }
      } while (bucket->data == (void *)0x0);
      return bucket->data;
    }
    if ((cursor->data == entry) && (cursor->next != (hash_entry *)0x0)) break;
    cursor = cursor->next;
  }
  return cursor->next->data;
}



size_t hash_get_entries(Hash_table *table,void **buffer,size_t buffer_size)

{
  hash_entry *cursor;
  hash_entry *bucket;
  size_t counter;
  
  counter = 0;
  bucket = table->bucket;
  do {
    if (table->bucket_limit <= bucket) {
      return counter;
    }
    if (bucket->data != (void *)0x0) {
      cursor = bucket;
      while (cursor != (hash_entry *)0x0) {
        if (buffer_size <= counter) {
          return counter;
        }
        buffer[counter] = cursor->data;
        counter = counter + 1;
        cursor = cursor->next;
      }
    }
    bucket = bucket + 1;
  } while( true );
}



size_t hash_do_for_each(Hash_table *table,Hash_processor *processor,void *processor_data)

{
  _Bool _Var1;
  hash_entry *cursor;
  hash_entry *bucket;
  size_t counter;
  
  counter = 0;
  bucket = table->bucket;
  do {
    if (table->bucket_limit <= bucket) {
      return counter;
    }
    if (bucket->data != (void *)0x0) {
      cursor = bucket;
      while (cursor != (hash_entry *)0x0) {
        _Var1 = (*processor)(cursor->data,processor_data);
        if (_Var1 != true) {
          return counter;
        }
        counter = counter + 1;
        cursor = cursor->next;
      }
    }
    bucket = bucket + 1;
  } while( true );
}



size_t hash_string(char *string,size_t n_buckets)

{
  size_t value;
  uchar ch;
  
  value = 0;
  while (*string != 0) {
    value = (value * 0x1f + (uint)(byte)*string) % n_buckets;
    string = string + 1;
  }
  return value;
}



_Bool is_prime(size_t candidate)

{
  size_t square;
  size_t divisor;
  
  divisor = 3;
  square = 9;
  while ((square < candidate && (candidate % divisor != 0))) {
    square = square + (divisor + 1) * 4;
    divisor = divisor + 2;
  }
  return (_Bool)(candidate % divisor != 0);
}



size_t next_prime(size_t candidate)

{
  _Bool _Var1;
  
  if (candidate < 10) {
    candidate = 10;
  }
  candidate = candidate | 1;
  while( true ) {
    _Var1 = is_prime(candidate);
    if (_Var1 == true) break;
    candidate = candidate + 2;
  }
  return candidate;
}



void hash_reset_tuning(Hash_tuning *tuning)

{
  tuning->shrink_threshold = 0.00000000;
  tuning->shrink_factor = 1.00000000;
  tuning->growth_threshold = 0.80000001;
  tuning->growth_factor = 1.41400003;
  tuning->is_n_buckets = false;
  return;
}



_Bool check_tuning(Hash_table *table)

{
  Hash_tuning *pHVar1;
  undefined local_15;
  float epsilon;
  Hash_tuning *tuning;
  
  pHVar1 = table->tuning;
  if ((((pHVar1->growth_threshold <= 0.10000000) || (0.89999998 <= pHVar1->growth_threshold)) ||
      (pHVar1->growth_factor <= 1.09999990)) ||
     (((pHVar1->shrink_threshold < 0.00000000 ||
       (pHVar1->shrink_factor <= pHVar1->shrink_threshold + 0.10000000)) ||
      ((1.00000000 < pHVar1->shrink_factor ||
       (pHVar1->growth_threshold <= pHVar1->shrink_threshold + 0.10000000)))))) {
    table->tuning = &default_tuning;
    local_15 = 0;
  }
  else {
    local_15 = 1;
  }
  return (_Bool)local_15;
}



Hash_table *
hash_initialize(size_t candidate,Hash_tuning *tuning,Hash_hasher *hasher,Hash_comparator *comparator
               ,Hash_data_freer *data_freer)

{
  float fVar1;
  _Bool _Var2;
  Hash_table *table_00;
  size_t sVar3;
  hash_entry *phVar4;
  size_t local_24;
  float new_candidate;
  Hash_table *table;
  
  if ((hasher == (Hash_hasher *)0x0) || (comparator == (Hash_comparator *)0x0)) {
    return (Hash_table *)0x0;
  }
  table_00 = (Hash_table *)malloc(0x28);
  if (table_00 == (Hash_table *)0x0) {
    return (Hash_table *)0x0;
  }
  if (tuning == (Hash_tuning *)0x0) {
    tuning = &default_tuning;
  }
  table_00->tuning = tuning;
  _Var2 = check_tuning(table_00);
  if (_Var2 == true) {
    if (tuning->is_n_buckets != true) {
      fVar1 = (float)(ulonglong)candidate / tuning->growth_threshold;
      if (4294967296.00000000 <= fVar1) goto fail;
      local_24 = (size_t)(longlong)ROUND(fVar1);
      candidate = local_24;
    }
    if (candidate < 0x20000000) {
      sVar3 = next_prime(candidate);
      table_00->n_buckets = sVar3;
      if (table_00->n_buckets < 0x20000000) {
        phVar4 = (hash_entry *)calloc(table_00->n_buckets,8);
        table_00->bucket = phVar4;
        if (table_00->bucket != (hash_entry *)0x0) {
          table_00->bucket_limit = table_00->bucket + table_00->n_buckets;
          table_00->n_buckets_used = 0;
          table_00->n_entries = 0;
          table_00->hasher = hasher;
          table_00->comparator = comparator;
          table_00->data_freer = data_freer;
          table_00->free_entry_list = (hash_entry *)0x0;
          return table_00;
        }
      }
    }
  }
fail:
  free(table_00);
  return (Hash_table *)0x0;
}



void hash_clear(Hash_table *table)

{
  hash_entry *phVar1;
  hash_entry *next;
  hash_entry *cursor;
  hash_entry *bucket;
  
  bucket = table->bucket;
  while (bucket < table->bucket_limit) {
    if (bucket->data != (void *)0x0) {
      cursor = bucket->next;
      while (cursor != (hash_entry *)0x0) {
        if (table->data_freer != (Hash_data_freer *)0x0) {
          (*table->data_freer)(cursor->data);
        }
        cursor->data = (void *)0x0;
        phVar1 = cursor->next;
        cursor->next = table->free_entry_list;
        table->free_entry_list = cursor;
        cursor = phVar1;
      }
      if (table->data_freer != (Hash_data_freer *)0x0) {
        (*table->data_freer)(bucket->data);
      }
      bucket->data = (void *)0x0;
      bucket->next = (hash_entry *)0x0;
    }
    bucket = bucket + 1;
  }
  table->n_buckets_used = 0;
  table->n_entries = 0;
  return;
}



void hash_free(Hash_table *table)

{
  hash_entry *phVar1;
  hash_entry *next;
  hash_entry *cursor;
  hash_entry *bucket;
  
  if ((table->data_freer != (Hash_data_freer *)0x0) && (table->n_entries != 0)) {
    bucket = table->bucket;
    while (bucket < table->bucket_limit) {
      if (bucket->data != (void *)0x0) {
        cursor = bucket;
        while (cursor != (hash_entry *)0x0) {
          (*table->data_freer)(cursor->data);
          cursor = cursor->next;
        }
      }
      bucket = bucket + 1;
    }
  }
  bucket = table->bucket;
  while (bucket < table->bucket_limit) {
    cursor = bucket->next;
    while (cursor != (hash_entry *)0x0) {
      phVar1 = cursor->next;
      free(cursor);
      cursor = phVar1;
    }
    bucket = bucket + 1;
  }
  cursor = table->free_entry_list;
  while (cursor != (hash_entry *)0x0) {
    phVar1 = cursor->next;
    free(cursor);
    cursor = phVar1;
  }
  free(table->bucket);
  free(table);
  return;
}



hash_entry * allocate_entry(Hash_table *table)

{
  hash_entry *new;
  
  if (table->free_entry_list == (hash_entry *)0x0) {
    new = (hash_entry *)malloc(8);
  }
  else {
    new = table->free_entry_list;
    table->free_entry_list = new->next;
  }
  return new;
}



void free_entry(Hash_table *table,hash_entry *entry)

{
  entry->data = (void *)0x0;
  entry->next = table->free_entry_list;
  table->free_entry_list = entry;
  return;
}



void * hash_find_entry(Hash_table *table,void *entry,hash_entry **bucket_head,_Bool delete)

{
  hash_entry *entry_00;
  hash_entry *phVar1;
  void *pvVar2;
  _Bool _Var3;
  size_t sVar4;
  void *local_30;
  hash_entry *next_1;
  void *data_1;
  hash_entry *next;
  void *data;
  hash_entry *cursor;
  hash_entry *bucket;
  
  cursor = table->bucket;
  sVar4 = (*table->hasher)(entry,table->n_buckets);
  cursor = cursor + sVar4;
  if (table->bucket_limit <= cursor) {
                    // WARNING: Subroutine does not return
    abort();
  }
  *bucket_head = cursor;
  if (cursor->data == (void *)0x0) {
    local_30 = (void *)0x0;
  }
  else {
    _Var3 = (*table->comparator)(entry,cursor->data);
    if (_Var3 == false) {
      while (cursor->next != (hash_entry *)0x0) {
        _Var3 = (*table->comparator)(entry,cursor->next->data);
        if (_Var3 != false) {
          pvVar2 = cursor->next->data;
          if (delete == false) {
            return pvVar2;
          }
          entry_00 = cursor->next;
          cursor->next = entry_00->next;
          free_entry(table,entry_00);
          return pvVar2;
        }
        cursor = cursor->next;
      }
      local_30 = (void *)0x0;
    }
    else {
      local_30 = cursor->data;
      if (delete != false) {
        if (cursor->next == (hash_entry *)0x0) {
          cursor->data = (void *)0x0;
        }
        else {
          entry_00 = cursor->next;
          phVar1 = entry_00->next;
          cursor->data = entry_00->data;
          cursor->next = phVar1;
          free_entry(table,entry_00);
        }
      }
    }
  }
  return local_30;
}



_Bool hash_rehash(Hash_table *table,size_t candidate)

{
  void *pvVar1;
  hash_entry *phVar2;
  hash_entry *phVar3;
  Hash_table *table_00;
  size_t sVar4;
  hash_entry *phVar5;
  undefined local_29;
  hash_entry *new_entry;
  hash_entry *new_bucket;
  void *data;
  hash_entry *next;
  hash_entry *cursor;
  hash_entry *bucket;
  Hash_table *new_table;
  
  table_00 = hash_initialize(candidate,table->tuning,table->hasher,table->comparator,
                             table->data_freer);
  if (table_00 == (Hash_table *)0x0) {
    local_29 = 0;
  }
  else {
    table_00->free_entry_list = table->free_entry_list;
    bucket = table->bucket;
    while (bucket < table->bucket_limit) {
      if (bucket->data != (void *)0x0) {
        cursor = bucket;
        phVar3 = cursor;
        while (cursor = phVar3, cursor != (hash_entry *)0x0) {
          pvVar1 = cursor->data;
          phVar2 = table_00->bucket;
          sVar4 = (*table_00->hasher)(pvVar1,table_00->n_buckets);
          phVar2 = phVar2 + sVar4;
          if (table_00->bucket_limit <= phVar2) {
                    // WARNING: Subroutine does not return
            abort();
          }
          phVar3 = cursor->next;
          if (phVar2->data == (void *)0x0) {
            phVar2->data = pvVar1;
            table_00->n_buckets_used = table_00->n_buckets_used + 1;
            if (cursor != bucket) {
              free_entry(table_00,cursor);
            }
          }
          else {
            if (cursor == bucket) {
              phVar5 = allocate_entry(table_00);
              if (phVar5 == (hash_entry *)0x0) {
                return false;
              }
              phVar5->data = pvVar1;
              phVar5->next = phVar2->next;
              phVar2->next = phVar5;
            }
            else {
              cursor->next = phVar2->next;
              phVar2->next = cursor;
            }
          }
        }
      }
      bucket = bucket + 1;
    }
    free(table->bucket);
    table->bucket = table_00->bucket;
    table->bucket_limit = table_00->bucket_limit;
    table->n_buckets = table_00->n_buckets;
    table->n_buckets_used = table_00->n_buckets_used;
    table->free_entry_list = table_00->free_entry_list;
    free(table_00);
    local_29 = 1;
  }
  return (_Bool)local_29;
}



void * hash_insert(Hash_table *table,void *entry)

{
  Hash_tuning *pHVar1;
  _Bool _Var2;
  hash_entry *phVar3;
  void *local_3c;
  float local_38;
  size_t local_34;
  float candidate;
  Hash_tuning *tuning;
  hash_entry *new_entry;
  hash_entry *bucket;
  void *data;
  
  if (entry == (void *)0x0) {
                    // WARNING: Subroutine does not return
    abort();
  }
  local_3c = hash_find_entry(table,entry,&bucket,false);
  if (local_3c == (void *)0x0) {
    if (bucket->data == (void *)0x0) {
      bucket->data = entry;
      table->n_entries = table->n_entries + 1;
      table->n_buckets_used = table->n_buckets_used + 1;
      if (((float)(ulonglong)table->n_buckets * table->tuning->growth_threshold <
           (float)(ulonglong)table->n_buckets_used) &&
         (check_tuning(table),
         (float)(ulonglong)table->n_buckets * table->tuning->growth_threshold <
         (float)(ulonglong)table->n_buckets_used)) {
        pHVar1 = table->tuning;
        if (pHVar1->is_n_buckets == false) {
          local_38 = pHVar1->growth_threshold *
                     pHVar1->growth_factor * (float)(ulonglong)table->n_buckets;
        }
        else {
          local_38 = pHVar1->growth_factor * (float)(ulonglong)table->n_buckets;
        }
        if (4294967296.00000000 <= local_38) {
          return (void *)0x0;
        }
        local_34 = (size_t)(longlong)ROUND(local_38);
        _Var2 = hash_rehash(table,local_34);
        if (_Var2 != true) {
          entry = (void *)0x0;
        }
      }
      local_3c = entry;
    }
    else {
      phVar3 = allocate_entry(table);
      if (phVar3 == (hash_entry *)0x0) {
        local_3c = (void *)0x0;
      }
      else {
        phVar3->data = entry;
        phVar3->next = bucket->next;
        bucket->next = phVar3;
        table->n_entries = table->n_entries + 1;
        local_3c = entry;
      }
    }
  }
  return local_3c;
}



void * hash_delete(Hash_table *table,void *entry)

{
  Hash_tuning *pHVar1;
  void *local_2c;
  size_t local_28;
  size_t local_24;
  size_t candidate;
  Hash_tuning *tuning;
  hash_entry *bucket;
  void *data;
  
  local_2c = hash_find_entry(table,entry,&bucket,true);
  if (local_2c == (void *)0x0) {
    local_2c = (void *)0x0;
  }
  else {
    table->n_entries = table->n_entries - 1;
    if (((bucket->data == (void *)0x0) &&
        (table->n_buckets_used = table->n_buckets_used - 1,
        (float)(ulonglong)table->n_buckets_used <
        (float)(ulonglong)table->n_buckets * table->tuning->shrink_threshold)) &&
       (check_tuning(table),
       (float)(ulonglong)table->n_buckets_used <
       (float)(ulonglong)table->n_buckets * table->tuning->shrink_threshold)) {
      pHVar1 = table->tuning;
      if (pHVar1->is_n_buckets == false) {
        local_24 = (size_t)(longlong)
                           ROUND(pHVar1->growth_threshold *
                                 pHVar1->shrink_factor * (float)(ulonglong)table->n_buckets);
        local_28 = local_24;
      }
      else {
        local_24 = (size_t)(longlong)
                           ROUND(pHVar1->shrink_factor * (float)(ulonglong)table->n_buckets);
        local_28 = local_24;
      }
      hash_rehash(table,local_28);
    }
  }
  return local_2c;
}



longdouble * adjust_value(longdouble *__return_storage_ptr__,int inexact_style,longdouble value)

{
  int iVar1;
  float10 fVar2;
  longdouble *local_4c;
  uint local_30;
  float10 local_2c;
  uintmax_t u;
  
  if (__return_storage_ptr__ == (longdouble *)0x1) {
    return (longdouble *)inexact_style;
  }
  if (FLOAT_UNKNOWN <= (float10)CONCAT28(value._4_2_,CONCAT44(value._0_4_,inexact_style))) {
    return (longdouble *)inexact_style;
  }
  if (FLOAT_UNKNOWN <= (float10)CONCAT28(value._4_2_,CONCAT44(value._0_4_,inexact_style))) {
    u = (longlong)
        ROUND((float10)CONCAT28(value._4_2_,CONCAT44(value._0_4_,inexact_style)) - FLOAT_UNKNOWN) ^
        0x8000000000000000;
  }
  else {
    u = (uintmax_t)ROUND((float10)CONCAT28(value._4_2_,CONCAT44(value._0_4_,inexact_style)));
  }
  if (__return_storage_ptr__ == (longdouble *)0x0) {
    local_2c = (float10)u;
    if ((longlong)u < 0) {
      local_2c = local_2c + FLOAT_UNKNOWN;
    }
    if (local_2c != (float10)CONCAT28(value._4_2_,CONCAT44(value._0_4_,inexact_style))) {
      local_30 = 1;
      goto LAB_080535aa;
    }
  }
  local_30 = 0;
LAB_080535aa:
  iVar1 = (int)(u >> 0x20) + (uint)CARRY4(local_30,(uint)u);
  fVar2 = (float10)CONCAT44(iVar1,local_30 + (uint)u);
  local_4c = SUB104(fVar2,0);
  if (iVar1 < 0) {
    local_4c = SUB104(fVar2 + FLOAT_UNKNOWN,0);
  }
  return local_4c;
}



char * group_number(char *number,size_t numberlen,char *grouping,char *thousands_sep)

{
  int iVar1;
  byte bVar2;
  size_t __n;
  int in_GS_OFFSET;
  uint local_58;
  char *local_54;
  byte *local_4c;
  size_t i;
  size_t thousands_seplen;
  size_t grouplen;
  uchar g;
  char buf [41];
  
  local_4c = (byte *)grouping;
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  grouplen = 0xffffffff;
  __n = strlen(thousands_sep);
  i = numberlen;
  memcpy(buf,number,numberlen);
  local_54 = number + numberlen;
  while( true ) {
    bVar2 = *local_4c;
    if (bVar2 != 0) {
      if (bVar2 < 0x7f) {
        local_58 = (uint)bVar2;
      }
      else {
        local_58 = i;
      }
      grouplen = local_58;
      local_4c = local_4c + 1;
    }
    if (i < grouplen) {
      grouplen = i;
    }
    local_54 = local_54 + -grouplen;
    i = i - grouplen;
    memcpy(local_54,buf + i,grouplen);
    if (i == 0) break;
    local_54 = local_54 + -__n;
    memcpy(local_54,thousands_sep,__n);
  }
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return local_54;
}



// WARNING: Removing unreachable block (ram,0x0805384d)
// WARNING: Removing unreachable block (ram,0x080542dc)
// WARNING: Removing unreachable block (ram,0x08053acd)
// WARNING: Removing unreachable block (ram,0x08053b24)
// WARNING: Could not reconcile some variable overlaps

char * human_readable(uintmax_t n,char *buf,int opts,uintmax_t from_block_size,
                     uintmax_t to_block_size)

{
  uint uVar1;
  char *grouping_00;
  bool bVar2;
  uintmax_t uVar3;
  char cVar4;
  longdouble *__return_storage_ptr__;
  lconv *plVar5;
  size_t sVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  unkbyte10 extraout_ST0;
  unkbyte10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 fVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined2 uVar17;
  undefined2 in_stack_fffffe54;
  undefined2 uVar18;
  undefined2 in_stack_fffffe56;
  float10 local_17c;
  uint local_148;
  uint local_144;
  uint local_140;
  float10 local_13c;
  float10 local_12c;
  uint local_10c;
  uint local_108;
  char local_e5;
  longdouble e;
  longdouble damt;
  longdouble dto_block_size;
  uintmax_t power;
  uintmax_t r2;
  uintmax_t r10;
  uintmax_t divisor;
  uintmax_t multiplier;
  uintmax_t amt;
  int digit;
  uint r2_1;
  uint r10_1;
  size_t nonintegerlen;
  size_t buflen;
  size_t pointlen;
  lconv *l;
  char *thousands_sep;
  char *grouping;
  size_t decimal_pointlen;
  char *decimal_point;
  int rounding;
  char *integerlim;
  char *psuffix;
  char *p;
  int exponent_max;
  int exponent;
  int tenths;
  uint base;
  int inexact_style;
  
  __return_storage_ptr__ = (longdouble *)(opts & 3);
  if ((opts & 0x20U) == 0) {
    local_148 = 1000;
  }
  else {
    local_148 = 0x400;
  }
  exponent = -1;
  decimal_point = ".";
  decimal_pointlen = 1;
  thousands_sep = "";
  plVar5 = localeconv();
  sVar6 = strlen(plVar5->decimal_point);
  if ((sVar6 != 0) && (sVar6 < 0x11)) {
    decimal_point = plVar5->decimal_point;
    decimal_pointlen = sVar6;
  }
  grouping_00 = plVar5->grouping;
  sVar6 = strlen(plVar5->thousands_sep);
  if (sVar6 < 0x11) {
    thousands_sep = plVar5->thousands_sep;
  }
  psuffix = buf + 0x288;
  if (from_block_size < to_block_size) {
    if (from_block_size != 0) {
      uVar17 = (undefined2)(from_block_size >> 0x20);
      lVar12 = __umoddi3(to_block_size,(undefined4)from_block_size,uVar17);
      if (lVar12 == 0) {
        uVar13 = __udivdi3(to_block_size,(undefined4)from_block_size,uVar17);
        uVar7 = (undefined4)uVar13;
        uVar17 = (undefined2)(uVar13 >> 0x20);
        lVar12 = __umoddi3(n,uVar7,uVar17);
        uVar14 = __umoddi3(lVar12 * 10,uVar7,uVar17);
        uVar10 = (int)((ulonglong)uVar14 >> 0x20) << 1 | (uint)uVar14 >> 0x1f;
        uVar1 = (uint)uVar14 * 2;
        uVar16 = CONCAT44(uVar10,uVar1);
        uVar15 = __udivdi3(n,uVar7,uVar17);
        tenths = __udivdi3(lVar12 * 10,uVar7,uVar17);
        if (uVar16 < uVar13) {
          local_144 = (uint)((uVar1 | uVar10) != 0);
        }
        else {
          if (uVar13 < uVar16) {
            local_140 = 3;
          }
          else {
            local_140 = 2;
          }
          local_144 = local_140;
        }
        rounding = local_144;
        goto use_integer_arithmetic;
      }
    }
  }
  else {
    uVar17 = (undefined2)(to_block_size >> 0x20);
    lVar12 = __umoddi3(from_block_size,(undefined4)to_block_size,uVar17);
    if (lVar12 == 0) {
      lVar12 = __udivdi3(from_block_size,(undefined4)to_block_size,uVar17);
      uVar15 = n * lVar12;
      uVar3 = __udivdi3(uVar15,(int)lVar12,(short)((ulonglong)lVar12 >> 0x20));
      if (n == uVar3) {
        tenths = 0;
        rounding = 0;
use_integer_arithmetic:
        amt._4_4_ = (int)(uVar15 >> 0x20);
        amt._0_4_ = (uint)uVar15;
        p = psuffix;
        if (((opts & 0x10U) != 0) && ((exponent = 0, amt._4_4_ != 0 || (local_148 <= (uint)amt)))) {
          do {
            iVar8 = __umoddi3(uVar15,local_148,0);
            uVar1 = iVar8 * 10 + tenths;
            uVar10 = (uVar1 % local_148) * 2 + (rounding >> 1);
            uVar15 = __udivdi3(uVar15,local_148,0);
            iVar8 = (int)(uVar15 >> 0x20);
            uVar9 = (uint)uVar15;
            tenths = uVar1 / local_148;
            if (uVar10 < local_148) {
              local_10c = (uint)(rounding + uVar10 != 0);
            }
            else {
              if (local_148 < rounding + uVar10) {
                local_108 = 3;
              }
              else {
                local_108 = 2;
              }
              local_10c = local_108;
            }
            rounding = local_10c;
            exponent = exponent + 1;
          } while (((iVar8 != 0) || (local_148 <= uVar9)) && (exponent < 8));
          if ((iVar8 == 0) && (uVar9 < 10)) {
            if (__return_storage_ptr__ == (longdouble *)0x1) {
              bVar2 = 2 < (tenths & 1U) + local_10c;
            }
            else {
              if ((__return_storage_ptr__ == (longdouble *)0x0) && (local_10c != 0)) {
                bVar2 = true;
              }
              else {
                bVar2 = false;
              }
            }
            if (bVar2) {
              tenths = tenths + 1;
              rounding = 0;
              if (tenths == 10) {
                uVar15 = (ulonglong)CONCAT14(0xfffffffe < uVar9,uVar9 + 1);
                tenths = 0;
              }
            }
            amt._4_4_ = (int)(uVar15 >> 0x20);
            amt._0_4_ = (uint)uVar15;
            if (((amt._4_4_ == 0) && ((uint)amt < 10)) && ((tenths != 0 || ((opts & 8U) == 0)))) {
              buf[0x287] = (char)tenths + '0';
              p = buf + 0x287 + -decimal_pointlen;
              memcpy(p,decimal_point,decimal_pointlen);
              rounding = 0;
              tenths = 0;
            }
          }
        }
        amt._0_4_ = (uint)uVar15;
        if (__return_storage_ptr__ == (longdouble *)0x1) {
          bVar2 = 5 < (int)((uint)((((uint)amt & 1) + rounding |
                                   (uint)CARRY4((uint)amt & 1,rounding)) != 0) + tenths);
        }
        else {
          if ((__return_storage_ptr__ == (longdouble *)0x0) && (0 < tenths + rounding)) {
            bVar2 = true;
          }
          else {
            bVar2 = false;
          }
        }
        uVar16 = uVar15;
        if (bVar2) {
          uVar16 = uVar15 + 1;
          if ((((opts & 0x10U) != 0) &&
              (uVar16 = uVar15 + 1,
              (local_148 ^ (uint)(uVar15 + 1) | (uint)(uVar15 + 1 >> 0x20)) == 0)) &&
             (uVar16 = uVar15 + 1, exponent < 8)) {
            exponent = exponent + 1;
            if ((opts & 8U) == 0) {
              p[-1] = '0';
              p = p + -1 + -decimal_pointlen;
              memcpy(p,decimal_point,decimal_pointlen);
            }
            uVar16 = 1;
          }
        }
        integerlim = p;
        do {
          cVar4 = __umoddi3(uVar16,10,0);
          p = p + -1;
          *p = cVar4 + '0';
          uVar16 = __udivdi3(uVar16,10,0);
        } while (uVar16 != 0);
        goto do_grouping;
      }
    }
  }
  local_17c = (float10)to_block_size;
  if ((longlong)to_block_size < 0) {
    local_17c = local_17c + FLOAT_UNKNOWN;
  }
  local_13c = (float10)n;
  if ((longlong)n < 0) {
    local_13c = local_13c + FLOAT_UNKNOWN;
  }
  local_12c = (float10)from_block_size;
  if ((longlong)from_block_size < 0) {
    local_12c = local_12c + FLOAT_UNKNOWN;
  }
  local_13c = local_13c * (local_12c / local_17c);
  damt._0_4_ = SUB104(local_13c,0);
  if ((opts & 0x10U) == 0) {
    adjust_value(__return_storage_ptr__,damt._0_4_,
                 (longdouble)
                 CONCAT210(in_stack_fffffe56,
                           CONCAT28(in_stack_fffffe54,
                                    CONCAT26(damt._10_2_,(int6)((unkuint10)local_13c >> 0x20)))));
    sprintf(buf,"%.0Lf",(int)extraout_ST0,(short)((unkuint10)extraout_ST0 >> 0x20),
            (short)((unkuint10)extraout_ST0 >> 0x40));
    buflen = strlen(buf);
    nonintegerlen = 0;
  }
  else {
    e._0_4_ = 0;
    e._4_4_ = 0x80000000;
    e._8_2_ = 0x3fff;
    exponent = 0;
    do {
      fVar11 = (float10)CONCAT28(e._8_2_,CONCAT44(e._4_4_,e._0_4_)) * (float10)(ulonglong)local_148;
      e._0_4_ = SUB104(fVar11,0);
      e._4_4_ = (undefined4)((unkuint10)fVar11 >> 0x20);
      e._8_2_ = (undefined2)((unkuint10)fVar11 >> 0x40);
      exponent = exponent + 1;
      if (local_13c < fVar11 * (float10)(ulonglong)local_148) break;
    } while (exponent < 8);
    local_13c = local_13c / fVar11;
    damt._0_4_ = SUB104(local_13c,0);
    adjust_value(__return_storage_ptr__,damt._0_4_,
                 (longdouble)
                 CONCAT210(in_stack_fffffe56,
                           CONCAT28(in_stack_fffffe54,
                                    CONCAT26(damt._10_2_,(int6)((unkuint10)local_13c >> 0x20)))));
    uVar17 = (undefined2)((unkuint10)extraout_ST0_00 >> 0x30);
    uVar18 = (undefined2)((unkuint10)extraout_ST0_00 >> 0x40);
    sprintf(buf,"%.1Lf",(int)extraout_ST0_00,(short)((unkuint10)extraout_ST0_00 >> 0x20));
    buflen = strlen(buf);
    nonintegerlen = decimal_pointlen + 1;
    if ((((opts & 0x20U) == 0) + nonintegerlen + 1 < buflen) ||
       (((opts & 8U) != 0 && (buf[buflen - 1] == '0')))) {
      adjust_value(__return_storage_ptr__,SUB104(local_13c * FLOAT_UNKNOWN,0),
                   (longdouble)
                   CONCAT210(in_stack_fffffe56,
                             CONCAT28(uVar18,CONCAT26(uVar17,(int6)((unkuint10)
                                                                    (local_13c * FLOAT_UNKNOWN) >>
                                                                   0x20)))));
      fVar11 = extraout_ST0_01 / FLOAT_UNKNOWN;
      sprintf(buf,"%.0Lf",SUB104(fVar11,0),(short)((unkuint10)fVar11 >> 0x20),
              (short)((unkuint10)fVar11 >> 0x40));
      buflen = strlen(buf);
      nonintegerlen = 0;
    }
  }
  p = psuffix + -buflen;
  memmove(p,buf,buflen);
  integerlim = p + (buflen - nonintegerlen);
do_grouping:
  if ((opts & 4U) != 0) {
    p = group_number(p,(size_t)(integerlim + -(int)p),grouping_00,thousands_sep);
  }
  if ((opts & 0x80U) != 0) {
    if (exponent < 0) {
      exponent = 0;
      power._0_4_ = 1;
      power._4_4_ = 0;
      while ((CONCAT44(power._4_4_,(uint)power) < to_block_size &&
             (exponent = exponent + 1, exponent != 8))) {
        uVar15 = (ulonglong)(uint)power;
        power._0_4_ = (uint)(local_148 * uVar15);
        power._4_4_ = power._4_4_ * local_148 + (int)(local_148 * uVar15 >> 0x20);
      }
    }
    if (((opts & 0x100U | exponent) != 0) && ((opts & 0x40U) != 0)) {
      *psuffix = ' ';
      psuffix = buf + 0x289;
    }
    if (exponent != 0) {
      if (((opts & 0x20U) == 0) && (exponent == 1)) {
        local_e5 = 'k';
      }
      else {
        local_e5 = ""[exponent];
      }
      *psuffix = local_e5;
      psuffix = psuffix + 1;
    }
    if ((opts & 0x100U) != 0) {
      if (((opts & 0x20U) != 0) && (exponent != 0)) {
        *psuffix = 'i';
        psuffix = psuffix + 1;
      }
      *psuffix = 'B';
      psuffix = psuffix + 1;
    }
  }
  *psuffix = '\0';
  return p;
}



uintmax_t default_block_size(void)

{
  char *pcVar1;
  uint local_c;
  
  pcVar1 = getenv("POSIXLY_CORRECT");
  if (pcVar1 == (char *)0x0) {
    local_c = 0x400;
  }
  else {
    local_c = 0x200;
  }
  return (uintmax_t)(ulonglong)local_c;
}



strtol_error humblock(char *spec,uintmax_t *block_size,int *options)

{
  uint uVar1;
  ptrdiff_t pVar2;
  strtol_error sVar3;
  uintmax_t uVar4;
  strtol_error e;
  char *ptr;
  int opts;
  int i;
  
  opts = 0;
  if (((spec == (char *)0x0) && (spec = getenv("BLOCK_SIZE"), spec == (char *)0x0)) &&
     (spec = getenv("BLOCKSIZE"), spec == (char *)0x0)) {
    uVar4 = default_block_size();
    *(int *)block_size = (int)uVar4;
    *(undefined4 *)((int)block_size + 4) = (int)(uVar4 >> 0x20);
  }
  else {
    if (*spec == '\'') {
      opts = 4;
      spec = spec + 1;
    }
    pVar2 = argmatch(spec,block_size_args,(char *)block_size_opts,4);
    if (pVar2 < 0) {
      sVar3 = xstrtoumax(spec,&ptr,0,block_size,"eEgGkKmMpPtTyYzZ0");
      if (sVar3 != LONGINT_OK) {
        *options = 0;
        return sVar3;
      }
      while( true ) {
        if (('/' < *spec) && (*spec < ':')) goto LAB_0805451e;
        if (spec == ptr) break;
        spec = spec + 1;
      }
      uVar1 = opts | 0x80;
      if (ptr[-1] == 'B') {
        uVar1 = opts | 0x180;
      }
      opts = uVar1;
      if ((ptr[-1] != 'B') || (ptr[-2] == 'i')) {
        opts = opts | 0x20;
      }
    }
    else {
      opts = opts | block_size_opts[pVar2];
      *(undefined4 *)block_size = 1;
      *(undefined4 *)((int)block_size + 4) = 0;
    }
  }
LAB_0805451e:
  *options = opts;
  return LONGINT_OK;
}



strtol_error human_options(char *spec,int *opts,uintmax_t *block_size)

{
  uintmax_t uVar1;
  strtol_error e;
  
  e = humblock(spec,block_size,opts);
  if ((*(uint *)block_size | *(uint *)((int)block_size + 4)) == 0) {
    uVar1 = default_block_size();
    *(int *)block_size = (int)uVar1;
    *(undefined4 *)((int)block_size + 4) = (int)(uVar1 >> 0x20);
    e = LONGINT_INVALID;
  }
  return e;
}



char * getuser(uid_t uid)

{
  passwd *ppVar1;
  size_t sVar2;
  char *local_1c;
  userid *local_18;
  char *name;
  passwd *pwent;
  userid *match;
  userid *tail;
  
  match = (userid *)0x0;
  tail = user_alist;
  do {
    if (tail == (userid *)0x0) {
LAB_080545b4:
      if (match == (userid *)0x0) {
        ppVar1 = getpwuid(uid);
        if (ppVar1 == (passwd *)0x0) {
          local_1c = "";
        }
        else {
          local_1c = ppVar1->pw_name;
        }
        sVar2 = strlen(local_1c);
        match = (userid *)xmalloc(sVar2 + 9);
        match->id = uid;
        strcpy((char *)(match + 1),local_1c);
        match->next = user_alist;
        user_alist = match;
      }
      if (*(char *)&match[1].id == '\0') {
        local_18 = (userid *)0x0;
      }
      else {
        local_18 = match + 1;
      }
      return (char *)local_18;
    }
    if (tail->id == uid) {
      match = tail;
      goto LAB_080545b4;
    }
    tail = tail->next;
  } while( true );
}



uid_t * getuidbyname(char *user)

{
  int iVar1;
  passwd *ppVar2;
  size_t sVar3;
  userid *puVar4;
  userid *local_18;
  passwd *pwent;
  userid *tail;
  
  tail = user_alist;
  while( true ) {
    if (tail == (userid *)0x0) {
      tail = nouser_alist;
      while( true ) {
        if (tail == (userid *)0x0) {
          ppVar2 = getpwnam(user);
          sVar3 = strlen(user);
          puVar4 = (userid *)xmalloc(sVar3 + 9);
          strcpy((char *)(puVar4 + 1),user);
          if (ppVar2 == (passwd *)0x0) {
            puVar4->next = nouser_alist;
            local_18 = (userid *)0x0;
            nouser_alist = puVar4;
          }
          else {
            puVar4->id = ppVar2->pw_uid;
            puVar4->next = user_alist;
            user_alist = puVar4;
            local_18 = puVar4;
          }
          return (uid_t *)local_18;
        }
        if ((*(char *)&tail[1].id == *user) && (iVar1 = strcmp((char *)(tail + 1),user), iVar1 == 0)
           ) break;
        tail = tail->next;
      }
      return (uid_t *)0x0;
    }
    if ((*(char *)&tail[1].id == *user) && (iVar1 = strcmp((char *)(tail + 1),user), iVar1 == 0))
    break;
    tail = tail->next;
  }
  return (uid_t *)tail;
}



char * getgroup(gid_t gid)

{
  group *pgVar1;
  size_t sVar2;
  char *local_1c;
  userid *local_18;
  char *name;
  group *grent;
  userid *match;
  userid *tail;
  
  match = (userid *)0x0;
  tail = group_alist;
  do {
    if (tail == (userid *)0x0) {
LAB_080547b4:
      if (match == (userid *)0x0) {
        pgVar1 = getgrgid(gid);
        if (pgVar1 == (group *)0x0) {
          local_1c = "";
        }
        else {
          local_1c = pgVar1->gr_name;
        }
        sVar2 = strlen(local_1c);
        match = (userid *)xmalloc(sVar2 + 9);
        match->id = gid;
        strcpy((char *)(match + 1),local_1c);
        match->next = group_alist;
        group_alist = match;
      }
      if (*(char *)&match[1].id == '\0') {
        local_18 = (userid *)0x0;
      }
      else {
        local_18 = match + 1;
      }
      return (char *)local_18;
    }
    if (tail->id == gid) {
      match = tail;
      goto LAB_080547b4;
    }
    tail = tail->next;
  } while( true );
}



gid_t * getgidbyname(char *group)

{
  int iVar1;
  group *pgVar2;
  size_t sVar3;
  userid *puVar4;
  userid *local_18;
  group *grent;
  userid *tail;
  
  tail = group_alist;
  while( true ) {
    if (tail == (userid *)0x0) {
      tail = nogroup_alist;
      while( true ) {
        if (tail == (userid *)0x0) {
          pgVar2 = getgrnam(group);
          sVar3 = strlen(group);
          puVar4 = (userid *)xmalloc(sVar3 + 9);
          strcpy((char *)(puVar4 + 1),group);
          if (pgVar2 == (group *)0x0) {
            puVar4->next = nogroup_alist;
            local_18 = (userid *)0x0;
            nogroup_alist = puVar4;
          }
          else {
            puVar4->id = pgVar2->gr_gid;
            puVar4->next = group_alist;
            group_alist = puVar4;
            local_18 = puVar4;
          }
          return (gid_t *)local_18;
        }
        if ((*(char *)&tail[1].id == *group) &&
           (iVar1 = strcmp((char *)(tail + 1),group), iVar1 == 0)) break;
        tail = tail->next;
      }
      return (gid_t *)0x0;
    }
    if ((*(char *)&tail[1].id == *group) && (iVar1 = strcmp((char *)(tail + 1),group), iVar1 == 0))
    break;
    tail = tail->next;
  }
  return (gid_t *)tail;
}



char * imaxtostr(intmax_t i,char *buf)

{
  char *pcVar1;
  char cVar2;
  char *p;
  
  p = buf + 0x14;
  *p = '\0';
  pcVar1 = p;
  if (i < 0) {
    do {
      p = pcVar1;
      cVar2 = __moddi3(i,10,0);
      p[-1] = '0' - cVar2;
      i = __divdi3(i,10,0);
      pcVar1 = p + -1;
    } while (i != 0);
    p = p + -2;
    *p = '-';
  }
  else {
    do {
      p = p + -1;
      cVar2 = __moddi3(i,10,0);
      *p = cVar2 + '0';
      i = __divdi3(i,10,0);
    } while (i != 0);
  }
  return p;
}



void mpsort_into_tmp(void **base,size_t n,void **tmp,comparison_function *cmp)

{
  int iVar1;
  void *bb;
  void *ba;
  size_t blim;
  size_t b;
  size_t alim;
  size_t a;
  size_t n2;
  size_t n1;
  
  alim = n >> 1;
  a = 0;
  mpsort_with_tmp(base + alim,n - alim,tmp,cmp);
  mpsort_with_tmp(base,alim,tmp,cmp);
  ba = *base;
  bb = base[alim];
  b = alim;
  while( true ) {
    while( true ) {
      iVar1 = (*cmp)(ba,bb);
      if (iVar1 < 1) break;
      *tmp = bb;
      b = b + 1;
      if (b == n) goto LAB_08054b8e;
      bb = base[b];
      tmp = tmp + 1;
    }
    *tmp = ba;
    a = a + 1;
    if (a == alim) break;
    ba = base[a];
    tmp = tmp + 1;
  }
  a = b;
  alim = n;
LAB_08054b8e:
  tmp = tmp + 1;
  memcpy(tmp,base + a,(alim - a) * 4);
  return;
}



void mpsort_with_tmp(void **base,size_t n,void **tmp,comparison_function *cmp)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  uint n_00;
  void *tt;
  void *bb;
  size_t blim;
  size_t b;
  size_t tlim;
  size_t t;
  size_t i;
  size_t n2;
  size_t n1;
  void *p1;
  void *p0;
  
  if (n < 3) {
    if (n == 2) {
      pvVar1 = *base;
      pvVar2 = base[1];
      iVar3 = (*cmp)(pvVar1,pvVar2);
      if (0 < iVar3) {
        *base = pvVar2;
        base[1] = pvVar1;
      }
    }
  }
  else {
    n_00 = n >> 1;
    t = 0;
    mpsort_with_tmp(base + n_00,n - n_00,tmp,cmp);
    if (n_00 < 2) {
      *tmp = *base;
    }
    else {
      mpsort_into_tmp(base,n_00,tmp,cmp);
    }
    tt = *tmp;
    bb = base[n_00];
    i = 0;
    b = n_00;
    while( true ) {
      while (iVar3 = (*cmp)(tt,bb), iVar3 < 1) {
        base[i] = tt;
        i = i + 1;
        t = t + 1;
        if (t == n_00) {
          return;
        }
        tt = tmp[t];
      }
      base[i] = bb;
      i = i + 1;
      b = b + 1;
      if (b == n) break;
      bb = base[b];
    }
    memcpy(base + i,tmp + t,(n_00 - t) * 4);
  }
  return;
}



void mpsort(void **base,size_t n,comparison_function *cmp)

{
  mpsort_with_tmp(base,n,base + n,cmp);
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
LAB_0805535b:
        sVar6 = mbrtowc(&w,arg + i + m,argsize - (i + m),(mbstate_t *)&mbstate);
        if (sVar6 != 0) {
          if (sVar6 == 0xffffffff) {
            bVar8 = false;
          }
          else {
            if (sVar6 != 0xfffffffe) goto LAB_080553e4;
            bVar8 = false;
            while ((i + m < argsize && (arg[i + m] != '\0'))) {
              m = m + 1;
            }
          }
        }
        goto LAB_08055457;
      }
      m = 1;
      ppuVar5 = __ctype_b_loc();
      bVar8 = ((*ppuVar5)[c] & 0x4000) != 0;
LAB_08055457:
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
switchD_080550c1_caseD_20:
      if (quoting_style == shell_quoting_style) goto use_shell_always_quoting_style;
      break;
    case '#':
    case '~':
switchD_080550c1_caseD_23:
      if (i == 0) goto switchD_080550c1_caseD_20;
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
      if (!bVar8) goto switchD_080550c1_caseD_23;
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
LAB_080553e4:
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
  if (iVar4 != 0) goto LAB_08055457;
  goto LAB_0805535b;
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



char * memcpy_lowcase(char *dest,char *src,size_t len)

{
  int iVar1;
  bool bVar2;
  
  while (bVar2 = len != 0, len = len - 1, bVar2) {
    iVar1 = tolower((uint)(byte)src[len]);
    dest[len] = (char)iVar1;
  }
  return dest;
}



char * memcpy_uppcase(char *dest,char *src,size_t len)

{
  int iVar1;
  bool bVar2;
  
  while (bVar2 = len != 0, len = len - 1, bVar2) {
    iVar1 = toupper((uint)(byte)src[len]);
    dest[len] = (char)iVar1;
  }
  return dest;
}



// WARNING: Removing unreachable block (ram,0x08057240)
// WARNING: Removing unreachable block (ram,0x08058555)
// WARNING: Removing unreachable block (ram,0x08056e22)
// WARNING: Removing unreachable block (ram,0x08055e23)
// WARNING: Removing unreachable block (ram,0x08055e5a)
// WARNING: Removing unreachable block (ram,0x08055e2c)
// WARNING: Removing unreachable block (ram,0x08056037)
// WARNING: Removing unreachable block (ram,0x08056c1a)
// WARNING: Removing unreachable block (ram,0x0805609a)
// WARNING: Could not reconcile some variable overlaps

size_t strftime_case_(_Bool upcase,char *s,size_t maxsize,char *format,tm *tp,int ut,int ns)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  size_t __n;
  uint __n_00;
  uint uVar5;
  size_t __n_01;
  char *__n_02;
  int *__n_03;
  int iVar6;
  int in_GS_OFFSET;
  size_t local_61c;
  int local_610;
  char local_608;
  char local_602;
  char local_601;
  int local_600;
  char local_5f9;
  int local_5f0;
  int local_5e4;
  int local_5d0;
  int local_5bc;
  int local_5b8;
  int local_5b0;
  mbstate_t mbstate;
  int _incr_13;
  int _delta_13;
  int _n_13;
  int flen;
  int sec_diff;
  int min_diff;
  int hour_diff;
  int diff;
  int _incr_12;
  int _delta_12;
  int _n_12;
  int yy_1;
  int yy;
  int d_1;
  int days;
  int year_adjust;
  int year;
  int _incr_11;
  int _delta_11;
  int _n_11;
  int d;
  time_t t;
  int _incr_10;
  int _delta_10;
  int _n_10;
  int j;
  int _incr_9;
  int _delta_9;
  int _n_9;
  int _incr_8;
  int _delta_8;
  int _n_8;
  int _incr_7;
  int _delta_7;
  int _n_7;
  int _incr_6;
  int _delta_6;
  int _n_6;
  int padding;
  int _incr_5;
  int _delta_5;
  int _n_5;
  int century;
  int _incr_4;
  int _delta_4;
  int _n_4;
  size_t len_2;
  char *u;
  int _incr_3;
  int _delta_3;
  int _n_3;
  size_t len_1;
  int _incr_2;
  int _delta_2;
  int _n_2;
  int _incr_1;
  int _delta_1;
  int _n_1;
  size_t bytes;
  size_t fsize;
  size_t len;
  int _incr;
  int _delta;
  int _n;
  int format_char;
  size_t colons;
  int width;
  char *bufp;
  char *subfmt;
  int tz_colon_mask;
  uint u_number_value;
  int number_value;
  int digits;
  int modifier;
  int pad;
  char *format_end;
  char *f;
  char *p;
  size_t i;
  char *zone;
  int hour12;
  _Bool change_case;
  _Bool to_uppcase;
  _Bool to_lowcase;
  char sign_char;
  _Bool always_output_a_sign;
  _Bool negative_number;
  char ubuf [1024];
  char buf [14];
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  hour12 = tp->tm_hour;
  i = 0;
  p = s;
  format_end = (char *)0x0;
  zone = tp->tm_zone;
  if (hour12 < 0xd) {
    if (hour12 == 0) {
      hour12 = 0xc;
    }
  }
  else {
    hour12 = hour12 + -0xc;
  }
  f = format;
LAB_08058608:
  if (*f == '\0') {
    if ((p != (char *)0x0) && (maxsize != 0)) {
      *p = '\0';
    }
    local_61c = i;
LAB_0805863d:
    if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
      return local_61c;
    }
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  pad = 0;
  digits = 0;
  width = -1;
  bVar3 = false;
  to_uppcase = upcase;
  bVar2 = false;
  iVar4 = (int)*f;
  if (0x3f < iVar4) {
    if ((iVar4 < 0x41) || ((0x5f < iVar4 && (0x1d < iVar4 - 0x61U)))) goto LAB_08055eb4;
LAB_08055da5:
    if (1 < maxsize - i) {
      if (p != (char *)0x0) {
        *p = *f;
        p = p + 1;
      }
      i = i + 1;
      goto LAB_08058601;
    }
    local_61c = 0;
    goto LAB_0805863d;
  }
  if (0x25 < iVar4) goto LAB_08055da5;
  if (iVar4 < 0x24) {
    if ((0x1f < iVar4) || (iVar4 - 8U < 6)) goto LAB_08055da5;
LAB_08055eb4:
    mbstate.__count = mbstate_zero.__count;
    mbstate.__value = mbstate_zero.__value;
    len = 0;
    if (format_end == (char *)0x0) {
      __n = strlen(f);
      format_end = f + __n + 1;
    }
    do {
      __n = mbrlen(f + len,(size_t)(format_end + (-len - (int)f)),(mbstate_t *)&mbstate);
      if (__n == 0) break;
      if (__n == 0xfffffffe) {
        __n = strlen(f + len);
        len = len + __n;
        break;
      }
      if (__n == 0xffffffff) {
        len = len + 1;
        break;
      }
      len = len + __n;
      iVar4 = mbsinit((mbstate_t *)&mbstate);
    } while (iVar4 == 0);
    __n_00 = -len - 1;
    uVar5 = (~((int)__n_00 >> 0x1f) & __n_00) + len;
    if (uVar5 < maxsize - i) {
      if (p != (char *)0x0) {
        if (0 < (int)__n_00) {
          memset(p,0x20,__n_00);
          p = p + __n_00;
        }
        if (upcase == false) {
          memcpy(p,f,len);
        }
        else {
          memcpy_uppcase(p,f,len);
        }
        p = p + len;
      }
      i = i + uVar5;
      f = f + (len - 1);
      goto LAB_08058601;
    }
    local_61c = 0;
    goto LAB_0805863d;
  }
  if (iVar4 != 0x25) goto LAB_08055eb4;
LAB_08056139:
  while( true ) {
    f = f + 1;
    cVar1 = *f;
    if (cVar1 != '0') break;
LAB_0805618a:
    pad = (int)*f;
  }
  if (cVar1 < '1') {
    if (cVar1 != '#') {
      if (cVar1 == '-') goto LAB_0805618a;
      goto LAB_080561b0;
    }
    bVar2 = true;
    goto LAB_08056139;
  }
  if (cVar1 == '^') {
    to_uppcase = true;
    goto LAB_08056139;
  }
  if (cVar1 == '_') goto LAB_0805618a;
LAB_080561b0:
  if ((int)*f - 0x30U < 10) {
    width = 0;
    do {
      if ((width < 0xccccccd) && ((width != 0xccccccc || ((int)*f + -0x30 < 8)))) {
        width = width * 10 + (int)*f + -0x30;
      }
      else {
        width = 0x7fffffff;
      }
      f = f + 1;
    } while ((int)*f - 0x30U < 10);
  }
  if ((*f == 'E') || (*f == 'O')) {
    modifier = (int)*f;
    f = f + 1;
  }
  else {
    modifier = 0;
  }
  format_char._0_1_ = *f;
  switch((char)format_char) {
  case '\0':
    f = f + -1;
    break;
  case '%':
    if (modifier != 0) break;
    __n_00 = width - 1;
    uVar5 = (~((int)__n_00 >> 0x1f) & __n_00) + 1;
    if (uVar5 < maxsize - i) {
      if (p != (char *)0x0) {
        if (0 < (int)__n_00) {
          if (pad == 0x30) {
            memset(p,0x30,__n_00);
            p = p + __n_00;
          }
          else {
            memset(p,0x20,__n_00);
            p = p + __n_00;
          }
        }
        *p = *f;
        p = p + 1;
      }
      i = i + uVar5;
      goto LAB_08058601;
    }
    local_61c = 0;
    goto LAB_0805863d;
  case ':':
    colons = 1;
    while (f[colons] == ':') {
      colons = colons + 1;
    }
    if (f[colons] == 'z') {
      f = f + colons;
      goto do_z_conversion;
    }
    break;
  case 'A':
    if (modifier == 0) {
      if (bVar2) {
        to_uppcase = true;
        bVar3 = false;
      }
      goto underlying_strftime;
    }
    break;
  case 'B':
    if (modifier == 0) {
      if (bVar2) {
        to_uppcase = true;
        bVar3 = false;
      }
      goto underlying_strftime;
    }
    break;
  case 'C':
    if (modifier != 0x4f) {
      if (modifier != 0x45) {
        iVar4 = tp->tm_year / 100 + 0x13;
        if ((tp->tm_year % 100 < 0) && (0 < iVar4)) {
          local_610 = 1;
        }
        else {
          local_610 = 0;
        }
        u_number_value = iVar4 - local_610;
        digits = 2;
        negative_number = (_Bool)(tp->tm_year < -0x76c);
        goto do_signed_number;
      }
      goto underlying_strftime;
    }
    break;
  case 'D':
    if (modifier == 0) {
      subfmt = "%m/%d/%y";
      goto subformat;
    }
    break;
  case 'F':
    if (modifier == 0) {
      subfmt = "%Y-%m-%d";
      goto subformat;
    }
    break;
  case 'G':
  case 'V':
  case 'g':
    if (modifier != 0x45) {
      if (tp->tm_year < 0) {
        local_5f0 = 300;
      }
      else {
        local_5f0 = -100;
      }
      __n_00 = tp->tm_year + local_5f0;
      year_adjust = 0;
      days = iso_week_days(tp->tm_yday,tp->tm_wday);
      if (days < 0) {
        year_adjust = -1;
        if (((__n_00 - 1 & 3) == 0) &&
           (((int)(__n_00 - 1) % 100 != 0 || ((int)(__n_00 - 1) % 400 == 0)))) {
          local_5e4 = 1;
        }
        else {
          local_5e4 = 0;
        }
        days = iso_week_days(local_5e4 + 0x16d + tp->tm_yday,tp->tm_wday);
      }
      else {
        if (((__n_00 & 3) == 0) && (((int)__n_00 % 100 != 0 || ((int)__n_00 % 400 == 0)))) {
          local_5d0 = 1;
        }
        else {
          local_5d0 = 0;
        }
        iVar4 = iso_week_days((-0x16d - local_5d0) + tp->tm_yday,tp->tm_wday);
        if (-1 < iVar4) {
          year_adjust = 1;
          days = iVar4;
        }
      }
      if (*f == 'G') {
        digits = 4;
        negative_number = (_Bool)(tp->tm_year < -0x76c - year_adjust);
        u_number_value = tp->tm_year + year_adjust + 0x76c;
        goto do_signed_number;
      }
      if (*f == 'g') {
        local_5bc = (tp->tm_year % 100 + year_adjust) % 100;
        digits = 2;
        if (local_5bc < 0) {
          if (tp->tm_year < -0x76c - year_adjust) {
            local_5b8 = -local_5bc;
          }
          else {
            local_5b8 = local_5bc + 100;
          }
          local_5bc = local_5b8;
        }
        number_value = local_5bc;
      }
      else {
        digits = 2;
        number_value = days / 7 + 1;
      }
      goto do_number;
    }
    break;
  case 'H':
    if (modifier != 0x45) {
      digits = 2;
      number_value = tp->tm_hour;
      goto do_number;
    }
    break;
  case 'I':
    if (modifier != 0x45) {
      digits = 2;
      number_value = hour12;
      goto do_number;
    }
    break;
  case 'M':
    if (modifier != 0x45) {
      digits = 2;
      number_value = tp->tm_min;
      goto do_number;
    }
    break;
  case 'N':
    if (modifier != 0x45) {
      number_value = ns;
      if (width == -1) {
        width = 9;
      }
      else {
        j = width;
        while (j < 9) {
          number_value = number_value / 10;
          j = j + 1;
        }
      }
      digits = width;
      goto do_number;
    }
    break;
  case 'P':
    bVar3 = true;
    format_char._0_1_ = 'p';
  case 'p':
    if (bVar2) {
      to_uppcase = false;
      bVar3 = true;
    }
    goto underlying_strftime;
  case 'R':
    subfmt = "%H:%M";
    goto subformat;
  case 'S':
    if (modifier != 0x45) {
      digits = 2;
      number_value = tp->tm_sec;
      goto do_number;
    }
    break;
  case 'T':
    subfmt = "%H:%M:%S";
subformat:
    __n_01 = strftime_case_(to_uppcase,(char *)0x0,0xffffffff,subfmt,tp,ut,ns);
    __n_00 = width - __n_01;
    uVar5 = (~((int)__n_00 >> 0x1f) & __n_00) + __n_01;
    if (uVar5 < maxsize - i) {
      if (p != (char *)0x0) {
        if (0 < (int)__n_00) {
          if (pad == 0x30) {
            memset(p,0x30,__n_00);
            p = p + __n_00;
          }
          else {
            memset(p,0x20,__n_00);
            p = p + __n_00;
          }
        }
        strftime_case_(to_uppcase,p,maxsize - i,subfmt,tp,ut,ns);
        p = p + __n_01;
      }
      i = i + uVar5;
      goto LAB_08058601;
    }
    local_61c = 0;
    goto LAB_0805863d;
  case 'U':
    if (modifier != 0x45) {
      digits = 2;
      number_value = ((tp->tm_yday - tp->tm_wday) + 7) / 7;
      goto do_number;
    }
    break;
  case 'W':
    if (modifier != 0x45) {
      digits = 2;
      number_value = ((tp->tm_yday - (tp->tm_wday + 6) % 7) + 7) / 7;
      goto do_number;
    }
    break;
  case 'X':
    goto joined_r0x08056963;
  case 'Y':
    if (modifier == 0x45) goto underlying_strftime;
    if (modifier != 0x4f) {
      digits = 4;
      negative_number = (_Bool)(tp->tm_year < -0x76c);
      u_number_value = tp->tm_year + 0x76c;
      goto do_signed_number;
    }
    break;
  case 'Z':
    if (bVar2) {
      to_uppcase = false;
    }
    if (zone == (char *)0x0) {
      zone = "";
    }
    __n = strlen(zone);
    __n_00 = width - __n;
    uVar5 = (~((int)__n_00 >> 0x1f) & __n_00) + __n;
    if (uVar5 < maxsize - i) {
      if (p != (char *)0x0) {
        if (0 < (int)__n_00) {
          if (pad == 0x30) {
            memset(p,0x30,__n_00);
            p = p + __n_00;
          }
          else {
            memset(p,0x20,__n_00);
            p = p + __n_00;
          }
        }
        if (bVar2) {
          memcpy_lowcase(p,zone,__n);
        }
        else {
          if (to_uppcase == false) {
            memcpy(p,zone,__n);
          }
          else {
            memcpy_uppcase(p,zone,__n);
          }
        }
        p = p + __n;
      }
      i = i + uVar5;
      goto LAB_08058601;
    }
    local_61c = 0;
    goto LAB_0805863d;
  case 'a':
    if (modifier == 0) {
      if (bVar2) {
        to_uppcase = true;
        bVar3 = false;
      }
      goto underlying_strftime;
    }
    break;
  case 'b':
  case 'h':
    if (bVar2) {
      to_uppcase = true;
    }
    bVar3 = false;
    if (modifier == 0) goto underlying_strftime;
    break;
  case 'c':
    goto joined_r0x08056963;
  case 'd':
    if (modifier != 0x45) {
      digits = 2;
      number_value = tp->tm_mday;
      goto do_number;
    }
    break;
  case 'e':
    if (modifier != 0x45) {
      number_value = tp->tm_mday;
do_number_spacepad:
      digits = 2;
      if ((pad != 0x30) && (pad != 0x2d)) {
        pad = 0x5f;
      }
      goto do_number;
    }
    break;
  case 'j':
    if (modifier != 0x45) {
      digits = 3;
      negative_number = (_Bool)(tp->tm_yday < -1);
      u_number_value = tp->tm_yday + 1;
      goto do_signed_number;
    }
    break;
  case 'k':
    if (modifier != 0x45) {
      number_value = tp->tm_hour;
      goto do_number_spacepad;
    }
    break;
  case 'l':
    if (modifier != 0x45) {
      number_value = hour12;
      goto do_number_spacepad;
    }
    break;
  case 'm':
    if (modifier != 0x45) {
      digits = 2;
      negative_number = (_Bool)(tp->tm_mon < -1);
      u_number_value = tp->tm_mon + 1;
      goto do_signed_number;
    }
    break;
  case 'n':
    __n_00 = width - 1;
    uVar5 = (~((int)__n_00 >> 0x1f) & __n_00) + 1;
    if (uVar5 < maxsize - i) {
      if (p != (char *)0x0) {
        if (0 < (int)__n_00) {
          if (pad == 0x30) {
            memset(p,0x30,__n_00);
            p = p + __n_00;
          }
          else {
            memset(p,0x20,__n_00);
            p = p + __n_00;
          }
        }
        *p = '\n';
        p = p + 1;
      }
      i = i + uVar5;
      goto LAB_08058601;
    }
    local_61c = 0;
    goto LAB_0805863d;
  case 'r':
    goto underlying_strftime;
  case 's':
    mbstate.__count = tp->tm_sec;
    mbstate.__value = tp->tm_min;
    t = mktime((tm *)&mbstate);
    bufp = (char *)&local_10;
    negative_number = (_Bool)-(char)(t >> 0x1f);
    do {
      local_5f9 = (char)t + (char)(t / 10) * -10;
      t = t / 10;
      bufp = bufp + -1;
      if (negative_number != false) {
        local_5f9 = -local_5f9;
      }
      local_5f9 = local_5f9 + '0';
      *bufp = local_5f9;
    } while (t != 0);
    digits = 1;
    bVar2 = false;
    goto do_number_sign_and_padding;
  case 't':
    __n_00 = width - 1;
    uVar5 = (~((int)__n_00 >> 0x1f) & __n_00) + 1;
    if (uVar5 < maxsize - i) {
      if (p != (char *)0x0) {
        if (0 < (int)__n_00) {
          if (pad == 0x30) {
            memset(p,0x30,__n_00);
            p = p + __n_00;
          }
          else {
            memset(p,0x20,__n_00);
            p = p + __n_00;
          }
        }
        *p = '\t';
        p = p + 1;
      }
      i = i + uVar5;
      goto LAB_08058601;
    }
    local_61c = 0;
    goto LAB_0805863d;
  case 'u':
    digits = 1;
    number_value = (tp->tm_wday + 6) % 7 + 1;
do_number:
    negative_number = SUB41((uint)number_value >> 0x1f,0);
    u_number_value = number_value;
do_signed_number:
    bVar2 = false;
    tz_colon_mask = 0;
do_number_body:
    if ((modifier == 0x4f) && (negative_number != true)) goto underlying_strftime;
    bufp = (char *)&local_10;
    if (negative_number != false) {
      u_number_value = -u_number_value;
    }
    do {
      if ((tz_colon_mask & 1U) != 0) {
        bufp = bufp + -1;
        *bufp = ':';
      }
      tz_colon_mask = tz_colon_mask >> 1;
      bufp = bufp + -1;
      local_608 = (char)(u_number_value % 10);
      *bufp = local_608 + '0';
      u_number_value = u_number_value / 10;
    } while ((u_number_value != 0) || (tz_colon_mask != 0));
do_number_sign_and_padding:
    if (digits < width) {
      digits = width;
    }
    if (negative_number == false) {
      if (bVar2) {
        local_601 = '+';
      }
      else {
        local_601 = '\0';
      }
      local_602 = local_601;
    }
    else {
      local_602 = '-';
    }
    if (pad == 0x2d) {
      if (local_602 != '\0') {
        __n_00 = width - 1;
        uVar5 = (~((int)__n_00 >> 0x1f) & __n_00) + 1;
        if (maxsize - i <= uVar5) {
          local_61c = 0;
          goto LAB_0805863d;
        }
        if (p != (char *)0x0) {
          if ((digits == 0) && (0 < (int)__n_00)) {
            memset(p,0x20,__n_00);
            p = p + __n_00;
          }
          *p = local_602;
          p = p + 1;
        }
        i = i + uVar5;
      }
    }
    else {
      __n_02 = bufp + ((digits - (int)&local_10) - (uint)(local_602 != '\0'));
      if ((int)__n_02 < 1) {
        if (local_602 != '\0') {
          __n_00 = width - 1;
          uVar5 = (~((int)__n_00 >> 0x1f) & __n_00) + 1;
          if (maxsize - i <= uVar5) {
            local_61c = 0;
            goto LAB_0805863d;
          }
          if (p != (char *)0x0) {
            if ((digits == 0) && (0 < (int)__n_00)) {
              if (pad == 0x30) {
                memset(p,0x30,__n_00);
                p = p + __n_00;
              }
              else {
                memset(p,0x20,__n_00);
                p = p + __n_00;
              }
            }
            *p = local_602;
            p = p + 1;
          }
          i = i + uVar5;
        }
      }
      else {
        if (pad == 0x5f) {
          if ((char *)(maxsize - i) <= __n_02) {
            local_61c = 0;
            goto LAB_0805863d;
          }
          if (p != (char *)0x0) {
            memset(p,0x20,(size_t)__n_02);
            p = p + (int)__n_02;
          }
          i = (size_t)(__n_02 + i);
          if ((int)__n_02 < width) {
            local_600 = width - (int)__n_02;
          }
          else {
            local_600 = 0;
          }
          width = local_600;
          if (local_602 != '\0') {
            __n_00 = local_600 - 1;
            uVar5 = (~((int)__n_00 >> 0x1f) & __n_00) + 1;
            if (maxsize - i <= uVar5) {
              local_61c = 0;
              goto LAB_0805863d;
            }
            if (p != (char *)0x0) {
              if ((digits == 0) && (0 < (int)__n_00)) {
                memset(p,0x20,__n_00);
                p = p + __n_00;
              }
              *p = local_602;
              p = p + 1;
            }
            i = (size_t)((char *)i + uVar5);
          }
        }
        else {
          if (maxsize - i <= (uint)digits) {
            local_61c = 0;
            goto LAB_0805863d;
          }
          if (local_602 != '\0') {
            __n_00 = width - 1;
            uVar5 = (~((int)__n_00 >> 0x1f) & __n_00) + 1;
            if (maxsize - i <= uVar5) {
              local_61c = 0;
              goto LAB_0805863d;
            }
            if (p != (char *)0x0) {
              if ((digits == 0) && (0 < (int)__n_00)) {
                if (pad == 0x30) {
                  memset(p,0x30,__n_00);
                  p = p + __n_00;
                }
                else {
                  memset(p,0x20,__n_00);
                  p = p + __n_00;
                }
              }
              *p = local_602;
              p = p + 1;
            }
            i = i + uVar5;
          }
          if (p != (char *)0x0) {
            memset(p,0x30,(size_t)__n_02);
            p = p + (int)__n_02;
          }
          i = (size_t)(__n_02 + i);
          width = 0;
        }
      }
    }
    __n_03 = (int *)((int)&local_10 - (int)bufp);
    __n_00 = width - (int)__n_03;
    uVar5 = (~((int)__n_00 >> 0x1f) & __n_00) + (int)__n_03;
    if (uVar5 < maxsize - i) {
      if (p != (char *)0x0) {
        if ((digits == 0) && (0 < (int)__n_00)) {
          if (pad == 0x30) {
            memset(p,0x30,__n_00);
            p = p + __n_00;
          }
          else {
            memset(p,0x20,__n_00);
            p = p + __n_00;
          }
        }
        if (to_uppcase == false) {
          memcpy(p,bufp,(size_t)__n_03);
        }
        else {
          memcpy_uppcase(p,bufp,(size_t)__n_03);
        }
        p = p + (int)__n_03;
      }
      i = i + uVar5;
      goto LAB_08058601;
    }
    local_61c = 0;
    goto LAB_0805863d;
  case 'w':
    if (modifier != 0x45) {
      digits = 1;
      number_value = tp->tm_wday;
      goto do_number;
    }
    break;
  case 'x':
joined_r0x08056963:
    if (modifier != 0x4f) goto underlying_strftime;
    break;
  case 'y':
    if (modifier != 0x45) {
      yy_1 = tp->tm_year % 100;
      if (yy_1 < 0) {
        if (tp->tm_year < -0x76c) {
          local_5b0 = -yy_1;
        }
        else {
          local_5b0 = yy_1 + 100;
        }
        yy_1 = local_5b0;
      }
      digits = 2;
      number_value = yy_1;
      goto do_number;
    }
underlying_strftime:
    u = (char *)((int)&mbstate.__count + 2);
    if (modifier != 0) {
      u = (char *)((int)&mbstate.__count + 3);
    }
    *u = (char)format_char;
    u[1] = '\0';
    __n = strftime(ubuf,0x400,(char *)&mbstate,(tm *)tp);
    if (__n == 0) goto LAB_08058601;
    __n_01 = __n - 1;
    __n_00 = width - __n_01;
    uVar5 = (~((int)__n_00 >> 0x1f) & __n_00) + __n_01;
    if (maxsize - i <= uVar5) {
      local_61c = 0;
      goto LAB_0805863d;
    }
    if (p != (char *)0x0) {
      if ((digits == 0) && (0 < (int)__n_00)) {
        if (pad == 0x30) {
          memset(p,0x30,__n_00);
          p = p + __n_00;
        }
        else {
          memset(p,0x20,__n_00);
          p = p + __n_00;
        }
      }
      if (bVar3) {
        memcpy_lowcase(p,ubuf + 1,__n_01);
      }
      else {
        if (to_uppcase == false) {
          memcpy(p,ubuf + 1,__n_01);
        }
        else {
          memcpy_uppcase(p,ubuf + 1,__n_01);
        }
      }
      p = p + __n_01;
    }
    i = i + uVar5;
    goto LAB_08058601;
  case 'z':
    colons = 0;
do_z_conversion:
    if (-1 < tp->tm_isdst) {
      iVar4 = tp->tm_gmtoff;
      u_number_value = iVar4 / 0xe10;
      iVar6 = (iVar4 / 0x3c) % 0x3c;
      if (colons == 1) {
tz_hh_mm:
        digits = 6;
        tz_colon_mask = 4;
        u_number_value = u_number_value * 100 + iVar6;
      }
      else {
        if (colons == 0) {
          digits = 5;
          tz_colon_mask = 0;
          u_number_value = u_number_value * 100 + iVar6;
        }
        else {
          if (colons != 2) {
            if (colons != 3) break;
            if (iVar4 % 0x3c == 0) {
              if (iVar6 != 0) goto tz_hh_mm;
              digits = 3;
              tz_colon_mask = 0;
              goto do_tz_offset;
            }
          }
          digits = 9;
          tz_colon_mask = 0x14;
          u_number_value = u_number_value * 10000 + iVar6 * 100 + iVar4 % 0x3c;
        }
      }
do_tz_offset:
      negative_number = SUB41((uint)iVar4 >> 0x1f,0);
      bVar2 = true;
      goto do_number_body;
    }
    goto LAB_08058601;
  }
  flen = 1;
  while (f[1 - flen] != '%') {
    flen = flen + 1;
  }
  __n_00 = width - flen;
  uVar5 = (~((int)__n_00 >> 0x1f) & __n_00) + flen;
  if (maxsize - i <= uVar5) {
    local_61c = 0;
    goto LAB_0805863d;
  }
  if (p != (char *)0x0) {
    if (0 < (int)__n_00) {
      if (pad == 0x30) {
        memset(p,0x30,__n_00);
        p = p + __n_00;
      }
      else {
        memset(p,0x20,__n_00);
        p = p + __n_00;
      }
    }
    if (to_uppcase == false) {
      memcpy(p,f + (1 - flen),flen);
    }
    else {
      memcpy_uppcase(p,f + (1 - flen),flen);
    }
    p = p + flen;
  }
  i = i + uVar5;
LAB_08058601:
  f = f + 1;
  goto LAB_08058608;
}



int iso_week_days(int yday,int wday)

{
  int big_enough_multiple_of_7;
  
  return (yday - ((yday - wday) + 0x17e) % 7) + 3;
}



size_t nstrftime(char *s,size_t maxsize,char *format,tm *tp,int ut,int ns)

{
  size_t sVar1;
  
  sVar1 = strftime_case_(false,s,maxsize,format,tp,ut,ns);
  return sVar1;
}



char * umaxtostr(uintmax_t i,char *buf)

{
  char cVar1;
  char *p;
  
  p = buf + 0x14;
  *p = '\0';
  do {
    p = p + -1;
    cVar1 = __umoddi3(i,10,0);
    *p = cVar1 + '0';
    i = __udivdi3(i,10,0);
  } while (i != 0);
  return p;
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



void xstrtol_error(strtol_error err,int opt_idx,char c,option *long_options,char *arg,
                  int exit_status)

{
  undefined4 uVar1;
  char *option;
  char *msgid;
  char *hyphens;
  char option_buffer [2];
  
  hyphens = "--";
  if (err < LONGINT_INVALID) {
    if (err < LONGINT_INVALID_SUFFIX_CHAR) {
      if (err != LONGINT_OVERFLOW) goto LAB_08058b3b;
      msgid = "%s%s argument `%s\' too large";
    }
    else {
      msgid = "invalid suffix in %s%s argument `%s\'";
    }
  }
  else {
    if (err != LONGINT_INVALID) {
LAB_08058b3b:
                    // WARNING: Subroutine does not return
      abort();
    }
    msgid = "invalid %s%s argument `%s\'";
  }
  if (opt_idx < 0) {
    hyphens = &DAT_08061ef4 + -opt_idx;
    option_buffer[1] = '\0';
    option = option_buffer;
    option_buffer[0] = c;
  }
  else {
    option = long_options[opt_idx].name;
  }
  uVar1 = gettext(msgid);
  error(exit_failure,0,uVar1,hyphens,option,arg);
  return;
}



void xstrtol_fatal(strtol_error err,int opt_idx,char c,option *long_options,char *arg)

{
  xstrtol_error(err,opt_idx,c,long_options,arg,exit_failure);
                    // WARNING: Subroutine does not return
  abort();
}



strtol_error bkm_scale(ulong *x,int scale_factor)

{
  bool bVar1;
  strtol_error local_8;
  
  bVar1 = *x <= (uint)(0xffffffff / (ulonglong)(uint)scale_factor);
  if (bVar1) {
    *x = *x * scale_factor;
  }
  else {
    *x = 0xffffffff;
  }
  local_8 = (strtol_error)!bVar1;
  return local_8;
}



strtol_error bkm_scale_by_power(ulong *x,int base,int power)

{
  strtol_error sVar1;
  bool bVar2;
  strtol_error err;
  
  err = LONGINT_OK;
  while (bVar2 = power != 0, power = power + -1, bVar2) {
    sVar1 = bkm_scale(x,base);
    err = err | sVar1;
  }
  return err;
}



strtol_error xstrtoul(char *s,char **ptr,int strtol_base,ulong *val,char *valid_suffixes)

{
  char cVar1;
  char "xstrtoul" [9];
  ushort **ppuVar2;
  int *piVar3;
  char *pcVar4;
  char **local_40;
  strtol_error overflow;
  int suffixes;
  int base;
  char *q;
  strtol_error err;
  ulong tmp;
  char **p;
  char *t_ptr;
  uchar ch;
  
  err = LONGINT_OK;
  if ((strtol_base < 0) || (0x24 < strtol_base)) {
                    // WARNING: Subroutine does not return
    __assert_fail("0 <= strtol_base && strtol_base <= 36","xstrtol.c",0x53,"xstrtoul");
  }
  if (ptr == (char **)0x0) {
    local_40 = &t_ptr;
  }
  else {
    local_40 = ptr;
  }
  q = s;
  ch = *s;
  while (ppuVar2 = __ctype_b_loc(), ((*ppuVar2)[ch] & 0x2000) != 0) {
    q = q + 1;
    ch = *q;
  }
  if (ch == '-') {
    return LONGINT_INVALID;
  }
  piVar3 = __errno_location();
  *piVar3 = 0;
  tmp = strtoul(s,local_40,strtol_base);
  if (*local_40 == s) {
    if (((valid_suffixes == (char *)0x0) || (**local_40 == '\0')) ||
       (pcVar4 = strchr(valid_suffixes,(int)**local_40), pcVar4 == (char *)0x0)) {
      return LONGINT_INVALID;
    }
    tmp = 1;
  }
  else {
    piVar3 = __errno_location();
    if (*piVar3 != 0) {
      piVar3 = __errno_location();
      if (*piVar3 != 0x22) {
        return LONGINT_INVALID;
      }
      err = LONGINT_OVERFLOW;
    }
  }
  if (valid_suffixes == (char *)0x0) {
    *val = tmp;
    return err;
  }
  if (**local_40 == '\0') goto LAB_08059063;
  base = 0x400;
  suffixes = 1;
  pcVar4 = strchr(valid_suffixes,(int)**local_40);
  if (pcVar4 == (char *)0x0) {
    *val = tmp;
    return err | LONGINT_INVALID_SUFFIX_CHAR;
  }
  pcVar4 = strchr(valid_suffixes,0x30);
  if (pcVar4 != (char *)0x0) {
    cVar1 = (*local_40)[1];
    if (cVar1 == 'D') {
LAB_08058e96:
      base = 1000;
      suffixes = 2;
    }
    else {
      if (cVar1 == 'i') {
        if ((*local_40)[2] == 'B') {
          suffixes = 3;
        }
      }
      else {
        if (cVar1 == 'B') goto LAB_08058e96;
      }
    }
  }
  switch(**local_40) {
  case 'B':
    overflow = bkm_scale(&tmp,0x400);
    break;
  default:
    *val = tmp;
    return err | LONGINT_INVALID_SUFFIX_CHAR;
  case 'E':
    overflow = bkm_scale_by_power(&tmp,base,6);
    break;
  case 'G':
  case 'g':
    overflow = bkm_scale_by_power(&tmp,base,3);
    break;
  case 'K':
  case 'k':
    overflow = bkm_scale_by_power(&tmp,base,1);
    break;
  case 'M':
  case 'm':
    overflow = bkm_scale_by_power(&tmp,base,2);
    break;
  case 'P':
    overflow = bkm_scale_by_power(&tmp,base,5);
    break;
  case 'T':
  case 't':
    overflow = bkm_scale_by_power(&tmp,base,4);
    break;
  case 'Y':
    overflow = bkm_scale_by_power(&tmp,base,8);
    break;
  case 'Z':
    overflow = bkm_scale_by_power(&tmp,base,7);
    break;
  case 'b':
    overflow = bkm_scale(&tmp,0x200);
    break;
  case 'c':
    overflow = LONGINT_OK;
    break;
  case 'w':
    overflow = bkm_scale(&tmp,2);
  }
  err = err | overflow;
  *local_40 = *local_40 + suffixes;
  if (**local_40 != '\0') {
    err = err | LONGINT_INVALID_SUFFIX_CHAR;
  }
LAB_08059063:
  *val = tmp;
  return err;
}



void fseterr(FILE *fp)

{
  fp->_flags = fp->_flags | 0x20;
  return;
}



char * xstrndup(char *string,size_t n)

{
  char *pcVar1;
  char *s;
  
  pcVar1 = strndup(string,n);
  if (pcVar1 == (char *)0x0) {
    xalloc_die();
  }
  return pcVar1;
}



// WARNING: Removing unreachable block (ram,0x08059109)

strtol_error bkm_scale(uintmax_t *x,int scale_factor)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  strtol_error local_28;
  
  uVar4 = __udivdi3(0xffffffff,0xffffffff,scale_factor,scale_factor >> 0x1f);
  uVar3 = *x;
  if (uVar3 <= uVar4) {
    uVar1 = *(uint *)x;
    lVar2 = (ulonglong)(uint)scale_factor * (ulonglong)uVar1;
    *(int *)x = (int)lVar2;
    *(int *)((int)x + 4) =
         *(int *)((int)x + 4) * scale_factor + (scale_factor >> 0x1f) * uVar1 +
         (int)((ulonglong)lVar2 >> 0x20);
  }
  else {
    *(undefined4 *)x = 0xffffffff;
    *(undefined4 *)((int)x + 4) = 0xffffffff;
  }
  local_28 = (strtol_error)(uVar3 > uVar4);
  return local_28;
}



strtol_error bkm_scale_by_power(uintmax_t *x,int base,int power)

{
  strtol_error sVar1;
  bool bVar2;
  strtol_error err;
  
  err = LONGINT_OK;
  while (bVar2 = power != 0, power = power + -1, bVar2) {
    sVar1 = bkm_scale(x,base);
    err = err | sVar1;
  }
  return err;
}



// WARNING: Could not reconcile some variable overlaps

strtol_error xstrtoumax(char *s,char **ptr,int strtol_base,uintmax_t *val,char *valid_suffixes)

{
  char cVar1;
  char "xstrtoumax" [11];
  ushort **ppuVar2;
  int *piVar3;
  char *pcVar4;
  char **local_40;
  uintmax_t tmp;
  strtol_error overflow;
  int suffixes;
  int base;
  char *q;
  strtol_error err;
  char **p;
  char *t_ptr;
  uchar ch;
  
  err = LONGINT_OK;
  if ((strtol_base < 0) || (0x24 < strtol_base)) {
                    // WARNING: Subroutine does not return
    __assert_fail("0 <= strtol_base && strtol_base <= 36","xstrtol.c",0x53,"xstrtoumax");
  }
  if (ptr == (char **)0x0) {
    local_40 = &t_ptr;
  }
  else {
    local_40 = ptr;
  }
  q = s;
  ch = *s;
  while (ppuVar2 = __ctype_b_loc(), ((*ppuVar2)[ch] & 0x2000) != 0) {
    q = q + 1;
    ch = *q;
  }
  if (ch == '-') {
    return LONGINT_INVALID;
  }
  piVar3 = __errno_location();
  *piVar3 = 0;
  tmp = strtoumax(s,local_40,strtol_base);
  if (*local_40 == s) {
    if ((valid_suffixes == (char *)0x0) || (**local_40 == '\0')) {
      return LONGINT_INVALID;
    }
    pcVar4 = strchr(valid_suffixes,(int)**local_40);
    if (pcVar4 == (char *)0x0) {
      return LONGINT_INVALID;
    }
    tmp = 1;
  }
  else {
    piVar3 = __errno_location();
    if (*piVar3 != 0) {
      piVar3 = __errno_location();
      if (*piVar3 != 0x22) {
        return LONGINT_INVALID;
      }
      err = LONGINT_OVERFLOW;
    }
  }
  tmp._4_4_ = (undefined4)(tmp >> 0x20);
  if (valid_suffixes == (char *)0x0) {
    *(undefined4 *)val = (undefined4)tmp;
    *(undefined4 *)((int)val + 4) = tmp._4_4_;
    return err;
  }
  if (**local_40 == '\0') goto LAB_0805958b;
  base = 0x400;
  suffixes = 1;
  pcVar4 = strchr(valid_suffixes,(int)**local_40);
  if (pcVar4 == (char *)0x0) {
    *(undefined4 *)val = (undefined4)tmp;
    *(undefined4 *)((int)val + 4) = tmp._4_4_;
    return err | LONGINT_INVALID_SUFFIX_CHAR;
  }
  pcVar4 = strchr(valid_suffixes,0x30);
  if (pcVar4 != (char *)0x0) {
    cVar1 = (*local_40)[1];
    if (cVar1 == 'D') {
LAB_080593b8:
      base = 1000;
      suffixes = 2;
    }
    else {
      if (cVar1 == 'i') {
        if ((*local_40)[2] == 'B') {
          suffixes = 3;
        }
      }
      else {
        if (cVar1 == 'B') goto LAB_080593b8;
      }
    }
  }
  switch(**local_40) {
  case 'B':
    overflow = bkm_scale(&tmp,0x400);
    break;
  default:
    *(undefined4 *)val = (undefined4)tmp;
    *(undefined4 *)((int)val + 4) = tmp._4_4_;
    return err | LONGINT_INVALID_SUFFIX_CHAR;
  case 'E':
    overflow = bkm_scale_by_power(&tmp,base,6);
    break;
  case 'G':
  case 'g':
    overflow = bkm_scale_by_power(&tmp,base,3);
    break;
  case 'K':
  case 'k':
    overflow = bkm_scale_by_power(&tmp,base,1);
    break;
  case 'M':
  case 'm':
    overflow = bkm_scale_by_power(&tmp,base,2);
    break;
  case 'P':
    overflow = bkm_scale_by_power(&tmp,base,5);
    break;
  case 'T':
  case 't':
    overflow = bkm_scale_by_power(&tmp,base,4);
    break;
  case 'Y':
    overflow = bkm_scale_by_power(&tmp,base,8);
    break;
  case 'Z':
    overflow = bkm_scale_by_power(&tmp,base,7);
    break;
  case 'b':
    overflow = bkm_scale(&tmp,0x200);
    break;
  case 'c':
    overflow = LONGINT_OK;
    break;
  case 'w':
    overflow = bkm_scale(&tmp,2);
  }
  err = err | overflow;
  *local_40 = *local_40 + suffixes;
  if (**local_40 != '\0') {
    err = err | LONGINT_INVALID_SUFFIX_CHAR;
  }
LAB_0805958b:
  tmp._4_4_ = (undefined4)(tmp >> 0x20);
  *(undefined4 *)val = (undefined4)tmp;
  *(undefined4 *)((int)val + 4) = tmp._4_4_;
  return err;
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
          ppcVar13[-1] = 0x805ca89;
          free(*ppcVar13);
          if (a.arg != (argument *)0x0) {
            *(argument **)ppcVar13 = a.arg;
            ppcVar13[-1] = 0x805caa1;
            free(*ppcVar13);
          }
          ppcVar13[-1] = 0x805caa6;
          piVar11 = __errno_location(*(undefined *)(ppcVar13 + -1));
          *piVar11 = 0xc;
          local_4d4 = (char *)0x0;
          goto LAB_0805cab6;
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
          ppcVar13[-1] = 0x80598de;
          augmented_length = xsum((size_t)*ppcVar13,(size_t)ppcVar13[1]);
          if (augmented_length <= allocated) {
LAB_08059a17:
            pcVar12 = result + length;
            *(size_t *)(ppcVar13 + 2) = n;
            *(char **)(ppcVar13 + 1) = cp;
            *(char **)ppcVar13 = pcVar12;
            ppcVar13[-1] = 0x8059a42;
            memcpy(*ppcVar13,ppcVar13[1],(size_t)ppcVar13[2]);
            length = augmented_length;
            goto LAB_08059a4e;
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
              ppcVar13[-1] = 0x805999f;
              memory = (char *)malloc((size_t)*ppcVar13);
            }
            else {
              *(size_t *)(ppcVar13 + 1) = allocated;
              *(char **)ppcVar13 = result;
              ppcVar13[-1] = 0x80599bf;
              memory = (char *)realloc(*ppcVar13,(size_t)ppcVar13[1]);
            }
            if (memory != (char *)0x0) {
              if ((result == local_470) && (length != 0)) {
                *(size_t *)(ppcVar13 + 2) = length;
                *(char **)(ppcVar13 + 1) = result;
                *(char **)ppcVar13 = memory;
                ppcVar13[-1] = 0x8059a0b;
                memcpy(*ppcVar13,ppcVar13[1],(size_t)ppcVar13[2]);
              }
              result = memory;
              goto LAB_08059a17;
            }
          }
          goto out_of_memory;
        }
LAB_08059a4e:
        if (d.count == i) {
          ppcVar13[1] = (char_directive *)0x1;
          *(size_t *)ppcVar13 = length;
          ppcVar13[-1] = 0x805c7b7;
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
            ppcVar13[-1] = 0x805c82a;
            __size = xsum((size_t)*ppcVar13,(size_t)ppcVar13[1]);
            if (allocated < __size) {
              ppcVar13[1] = (char_directive *)0x1;
              *(size_t *)ppcVar13 = length;
              ppcVar13[-1] = 0x805c848;
              allocated = xsum((size_t)*ppcVar13,(size_t)ppcVar13[1]);
            }
            if (allocated != 0xffffffff) {
              if ((result == local_470) || (result == (char *)0x0)) {
                *(size_t *)ppcVar13 = allocated;
                ppcVar13[-1] = 0x805c88c;
                memory_6 = (char *)malloc((size_t)*ppcVar13);
              }
              else {
                *(size_t *)(ppcVar13 + 1) = allocated;
                *(char **)ppcVar13 = result;
                ppcVar13[-1] = 0x805c8ac;
                memory_6 = (char *)realloc(*ppcVar13,(size_t)ppcVar13[1]);
              }
              if (memory_6 != (char *)0x0) {
                if ((result == local_470) && (length != 0)) {
                  *(size_t *)(ppcVar13 + 2) = length;
                  *(char **)(ppcVar13 + 1) = result;
                  *(char **)ppcVar13 = memory_6;
                  ppcVar13[-1] = 0x805c8f8;
                  memcpy(*ppcVar13,ppcVar13[1],(size_t)ppcVar13[2]);
                }
                result = memory_6;
                goto LAB_0805c904;
              }
            }
out_of_memory:
            if ((result != local_470) && (result != (char *)0x0)) {
              *(char **)ppcVar13 = result;
              ppcVar13[-1] = 0x805ca64;
              free(*ppcVar13);
            }
            if (buf_malloced != (char *)0x0) {
              *(char **)ppcVar13 = buf_malloced;
              ppcVar13[-1] = 0x805ca7b;
              free(*ppcVar13);
            }
            goto out_of_memory_1;
          }
LAB_0805c904:
          result[length] = '\0';
          if ((result != local_470) && (length + 1 < allocated)) {
            ppcVar13[1] = (char_directive *)(length + 1);
            *(char **)ppcVar13 = result;
            ppcVar13[-1] = 0x805c94f;
            pcVar12 = (char *)realloc(*ppcVar13,(size_t)ppcVar13[1]);
            if (pcVar12 != (char *)0x0) {
              result = pcVar12;
            }
          }
          if (buf_malloced != (char *)0x0) {
            *(char **)ppcVar13 = buf_malloced;
            ppcVar13[-1] = 0x805c981;
            free(*ppcVar13);
          }
          *ppcVar13 = d.dir;
          ppcVar13[-1] = 0x805c98f;
          free(*ppcVar13);
          if (a.arg != (argument *)0x0) {
            *(argument **)ppcVar13 = a.arg;
            ppcVar13[-1] = 0x805c9a7;
            free(*ppcVar13);
          }
          *local_474 = length;
          local_4d4 = result;
          goto LAB_0805cab6;
        }
        if (dp->conversion == '%') {
          if (dp->arg_index != 0xffffffff) {
                    // WARNING: Subroutine does not return
            ppcVar13[-1] = 0x8059a85;
            abort(*(undefined *)(ppcVar13 + -1));
          }
          ppcVar13[1] = (char_directive *)0x1;
          *(size_t *)ppcVar13 = length;
          ppcVar13[-1] = 0x8059a9b;
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
                ppcVar13[-1] = 0x8059b5c;
                memory_1 = (char *)malloc((size_t)*ppcVar13);
              }
              else {
                *(size_t *)(ppcVar13 + 1) = allocated;
                *(char **)ppcVar13 = result;
                ppcVar13[-1] = 0x8059b7c;
                memory_1 = (char *)realloc(*ppcVar13,(size_t)ppcVar13[1]);
              }
              if (memory_1 != (char *)0x0) {
                if ((result == local_470) && (length != 0)) {
                  *(size_t *)(ppcVar13 + 2) = length;
                  *(char **)(ppcVar13 + 1) = result;
                  *(char **)ppcVar13 = memory_1;
                  ppcVar13[-1] = 0x8059bc8;
                  memcpy(*ppcVar13,ppcVar13[1],(size_t)ppcVar13[2]);
                }
                result = memory_1;
                goto LAB_08059bd4;
              }
            }
            goto out_of_memory;
          }
LAB_08059bd4:
          result[length] = '%';
          length = augmented_length_1;
        }
        else {
          if (dp->arg_index == 0xffffffff) {
                    // WARNING: Subroutine does not return
            ppcVar13[-1] = 0x8059c09;
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
              ppcVar13[-1] = 0x8059d1e;
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
              ppcVar13[-1] = 0x8059de0;
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
                      ppcVar13[-1] = 0x8059f17;
                      width = xsum((size_t)*ppcVar13,(size_t)ppcVar13[1]);
                    } while (dp->width_end != digitp);
                  }
                  else {
                    if (a.arg[dp->width_arg_index].type != TYPE_INT) {
                    // WARNING: Subroutine does not return
                      ppcVar13[-1] = 0x8059e54;
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
                      ppcVar13[-1] = 0x805a05b;
                      precision = xsum((size_t)*ppcVar13,(size_t)ppcVar13[1]);
                    }
                    bVar7 = true;
                  }
                  else {
                    if (a.arg[dp->precision_arg_index].type != TYPE_INT) {
                    // WARNING: Subroutine does not return
                      ppcVar13[-1] = 0x8059f95;
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
                ppcVar13[1] = (char_directive *)&DAT_0000000c;
                *(size_t *)ppcVar13 = tmp_length;
                ppcVar13[-1] = 0x805a0c9;
                tmp_length = xsum((size_t)*ppcVar13,(size_t)ppcVar13[1]);
                if (tmp_length < width) {
                  tmp_length = width;
                }
                ppcVar13[1] = (char_directive *)0x1;
                *(size_t *)ppcVar13 = tmp_length;
                ppcVar13[-1] = 0x805a0ff;
                tmp_length = xsum((size_t)*ppcVar13,(size_t)ppcVar13[1]);
                if (700 < tmp_length) {
                  if (tmp_length != 0xffffffff) {
                    *(size_t *)ppcVar13 = tmp_length;
                    ppcVar13[-1] = 0x805a146;
                    tmp = (char *)malloc((size_t)*ppcVar13);
                    if (tmp != (char *)0x0) goto LAB_0805a159;
                  }
                  goto out_of_memory;
                }
                tmp = tmpbuf;
LAB_0805a159:
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
                ppcVar13[-1] = 0x805a1c1;
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
                  ppcVar13[-1] = 0x805a2a6;
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
                    ppcVar13[-1] = 0x805a3f7;
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
                  ppcVar13[-1] = 0x805a591;
                  abort(*(undefined *)(ppcVar13 + -1));
                }
                if ((char_directive *)(allocated - length) <= count) {
                  *(size_t *)(ppcVar13 + 1) = count;
                  *(size_t *)ppcVar13 = length;
                  ppcVar13[-1] = 0x805a5c7;
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
                        ppcVar13[-1] = 0x805a688;
                        memory_2 = (char *)malloc((size_t)*ppcVar13);
                      }
                      else {
                        *(size_t *)(ppcVar13 + 1) = allocated;
                        *(char **)ppcVar13 = result;
                        ppcVar13[-1] = 0x805a6a8;
                        memory_2 = (char *)realloc(*ppcVar13,(size_t)ppcVar13[1]);
                      }
                      if (memory_2 != (char *)0x0) {
                        if ((result == local_470) && (length != 0)) {
                          *(size_t *)(ppcVar13 + 2) = length;
                          *(char **)(ppcVar13 + 1) = result;
                          *(char **)ppcVar13 = memory_2;
                          ppcVar13[-1] = 0x805a6f4;
                          memcpy(*ppcVar13,ppcVar13[1],(size_t)ppcVar13[2]);
                        }
                        result = memory_2;
                        goto LAB_0805a700;
                      }
                    }
                    goto out_of_memory;
                  }
                }
LAB_0805a700:
                pcVar12 = result + length;
                *(size_t *)(ppcVar13 + 2) = count;
                *(char **)(ppcVar13 + 1) = tmp;
                *(char **)ppcVar13 = pcVar12;
                ppcVar13[-1] = 0x805a72b;
                memcpy(*ppcVar13,ppcVar13[1],(size_t)ppcVar13[2]);
                if (tmp != tmpbuf) {
                  *(char **)ppcVar13 = tmp;
                  ppcVar13[-1] = 0x805a747;
                  free(*ppcVar13);
                }
                length = length + count;
                goto LAB_0805c77f;
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
              ppcVar13[-1] = 0x805a8a9;
              memcpy(*ppcVar13,ppcVar13[1],(size_t)ppcVar13[2]);
              fbp = fbp + n_2;
            }
            if (dp->precision_start != dp->precision_end) {
              n_3 = (size_t)(dp->precision_end + -(int)dp->precision_start);
              pcVar4 = (char_directive *)dp->precision_start;
              *(size_t *)(ppcVar13 + 2) = n_3;
              ppcVar13[1] = pcVar4;
              *(char **)ppcVar13 = fbp;
              ppcVar13[-1] = 0x805a910;
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
                    goto LAB_0805a977;
                  }
                }
                else {
                  *fbp = 'L';
                  fbp = fbp + 1;
                }
              }
              else {
LAB_0805a977:
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
                ppcVar13[-1] = 0x805a9f0;
                abort(*(undefined *)(ppcVar13 + -1));
              }
              prefixes[0] = *(int *)&a.arg[dp->width_arg_index].a;
              prefix_count = 1;
            }
            if (dp->precision_arg_index != 0xffffffff) {
              if (a.arg[dp->precision_arg_index].type != TYPE_INT) {
                    // WARNING: Subroutine does not return
                ppcVar13[-1] = 0x805aa4b;
                abort(*(undefined *)(ppcVar13 + -1));
              }
              prefixes[prefix_count] = *(int *)&a.arg[dp->precision_arg_index].a;
              prefix_count = prefix_count + 1;
            }
            ppcVar13[1] = (char_directive *)0x2;
            *(size_t *)ppcVar13 = length;
            ppcVar13[-1] = 0x805aa8d;
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
              ppcVar13[-1] = 0x805ab00;
              __size = xsum((size_t)*ppcVar13,(size_t)ppcVar13[1]);
              if (allocated < __size) {
                ppcVar13[1] = (char_directive *)0x2;
                *(size_t *)ppcVar13 = length;
                ppcVar13[-1] = 0x805ab1e;
                allocated = xsum((size_t)*ppcVar13,(size_t)ppcVar13[1]);
              }
              if (allocated != 0xffffffff) {
                if ((result == local_470) || (result == (char *)0x0)) {
                  *(size_t *)ppcVar13 = allocated;
                  ppcVar13[-1] = 0x805ab62;
                  memory_3 = (char *)malloc((size_t)*ppcVar13);
                }
                else {
                  *(size_t *)(ppcVar13 + 1) = allocated;
                  *(char **)ppcVar13 = result;
                  ppcVar13[-1] = 0x805ab82;
                  memory_3 = (char *)realloc(*ppcVar13,(size_t)ppcVar13[1]);
                }
                if (memory_3 != (char *)0x0) {
                  if ((result == local_470) && (length != 0)) {
                    *(size_t *)(ppcVar13 + 2) = length;
                    *(char **)(ppcVar13 + 1) = result;
                    *(char **)ppcVar13 = memory_3;
                    ppcVar13[-1] = 0x805abce;
                    memcpy(*ppcVar13,ppcVar13[1],(size_t)ppcVar13[2]);
                  }
                  result = memory_3;
                  goto LAB_0805abda;
                }
              }
              goto out_of_memory;
            }
LAB_0805abda:
            result[length] = '\0';
LAB_0805abec:
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
              ppcVar13[-1] = 0x805c32e;
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
                ppcVar13[-1] = 0x805ad2b;
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
                  ppcVar13[-1] = 0x805acd7;
                  retcount = snprintf((char *)*ppcVar13,(size_t)ppcVar13[1],(char *)ppcVar13[2]);
                }
                else {
                  if ((char *)prefix_count != (char *)0x2) {
                    // WARNING: Subroutine does not return
                    ppcVar13[-1] = 0x805ad99;
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
                  ppcVar13[-1] = 0x805ad89;
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
                ppcVar13[-1] = 0x805ae7e;
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
                  ppcVar13[-1] = 0x805ae2a;
                  retcount = snprintf((char *)*ppcVar13,(size_t)ppcVar13[1],(char *)ppcVar13[2]);
                }
                else {
                  if ((char *)prefix_count != (char *)0x2) {
                    // WARNING: Subroutine does not return
                    ppcVar13[-1] = 0x805aeec;
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
                  ppcVar13[-1] = 0x805aedc;
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
                ppcVar13[-1] = 0x805afcf;
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
                  ppcVar13[-1] = 0x805af7b;
                  retcount = snprintf((char *)*ppcVar13,(size_t)ppcVar13[1],(char *)ppcVar13[2]);
                }
                else {
                  if ((char *)prefix_count != (char *)0x2) {
                    // WARNING: Subroutine does not return
                    ppcVar13[-1] = 0x805b03d;
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
                  ppcVar13[-1] = 0x805b02d;
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
                ppcVar13[-1] = 0x805b122;
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
                  ppcVar13[-1] = 0x805b0ce;
                  retcount = snprintf((char *)*ppcVar13,(size_t)ppcVar13[1],(char *)ppcVar13[2]);
                }
                else {
                  if ((char *)prefix_count != (char *)0x2) {
                    // WARNING: Subroutine does not return
                    ppcVar13[-1] = 0x805b190;
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
                  ppcVar13[-1] = 0x805b180;
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
                ppcVar13[-1] = 0x805b271;
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
                  ppcVar13[-1] = 0x805b21d;
                  retcount = snprintf((char *)*ppcVar13,(size_t)ppcVar13[1],(char *)ppcVar13[2]);
                }
                else {
                  if ((char *)prefix_count != (char *)0x2) {
                    // WARNING: Subroutine does not return
                    ppcVar13[-1] = 0x805b2df;
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
                  ppcVar13[-1] = 0x805b2cf;
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
                ppcVar13[-1] = 0x805b3c0;
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
                  ppcVar13[-1] = 0x805b36c;
                  retcount = snprintf((char *)*ppcVar13,(size_t)ppcVar13[1],(char *)ppcVar13[2]);
                }
                else {
                  if ((char *)prefix_count != (char *)0x2) {
                    // WARNING: Subroutine does not return
                    ppcVar13[-1] = 0x805b42e;
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
                  ppcVar13[-1] = 0x805b41e;
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
                ppcVar13[-1] = 0x805b50f;
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
                  ppcVar13[-1] = 0x805b4bb;
                  retcount = snprintf((char *)*ppcVar13,(size_t)ppcVar13[1],(char *)ppcVar13[2]);
                }
                else {
                  if ((char *)prefix_count != (char *)0x2) {
                    // WARNING: Subroutine does not return
                    ppcVar13[-1] = 0x805b57d;
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
                  ppcVar13[-1] = 0x805b56d;
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
                ppcVar13[-1] = 0x805b65e;
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
                  ppcVar13[-1] = 0x805b60a;
                  retcount = snprintf((char *)*ppcVar13,(size_t)ppcVar13[1],(char *)ppcVar13[2]);
                }
                else {
                  if ((char *)prefix_count != (char *)0x2) {
                    // WARNING: Subroutine does not return
                    ppcVar13[-1] = 0x805b6cc;
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
                  ppcVar13[-1] = 0x805b6bc;
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
                ppcVar13[-1] = 0x805b7ca;
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
                  ppcVar13[-1] = 0x805b76c;
                  retcount = snprintf((char *)*ppcVar13,(size_t)ppcVar13[1],(char *)ppcVar13[2]);
                }
                else {
                  if ((char *)prefix_count != (char *)0x2) {
                    // WARNING: Subroutine does not return
                    ppcVar13[-1] = 0x805b842;
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
                  ppcVar13[-1] = 0x805b832;
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
                ppcVar13[-1] = 0x805b940;
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
                  ppcVar13[-1] = 0x805b8e2;
                  retcount = snprintf((char *)*ppcVar13,(size_t)ppcVar13[1],(char *)ppcVar13[2]);
                }
                else {
                  if ((char *)prefix_count != (char *)0x2) {
                    // WARNING: Subroutine does not return
                    ppcVar13[-1] = 0x805b9b8;
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
                  ppcVar13[-1] = 0x805b9a8;
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
                ppcVar13[-1] = 0x805ba99;
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
                  ppcVar13[-1] = 0x805ba45;
                  retcount = snprintf((char *)*ppcVar13,(size_t)ppcVar13[1],(char *)ppcVar13[2]);
                }
                else {
                  if ((char *)prefix_count != (char *)0x2) {
                    // WARNING: Subroutine does not return
                    ppcVar13[-1] = 0x805bb07;
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
                  ppcVar13[-1] = 0x805baf7;
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
                ppcVar13[-1] = 0x805bc22;
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
                  ppcVar13[-1] = 0x805bbba;
                  retcount = snprintf((char *)*ppcVar13,(size_t)ppcVar13[1],(char *)ppcVar13[2]);
                }
                else {
                  if ((char *)prefix_count != (char *)0x2) {
                    // WARNING: Subroutine does not return
                    ppcVar13[-1] = 0x805bca4;
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
                  ppcVar13[-1] = 0x805bc94;
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
                ppcVar13[-1] = 0x805bd85;
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
                  ppcVar13[-1] = 0x805bd31;
                  retcount = snprintf((char *)*ppcVar13,(size_t)ppcVar13[1],(char *)ppcVar13[2]);
                }
                else {
                  if ((char *)prefix_count != (char *)0x2) {
                    // WARNING: Subroutine does not return
                    ppcVar13[-1] = 0x805bdf3;
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
                  ppcVar13[-1] = 0x805bde3;
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
                ppcVar13[-1] = 0x805bed4;
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
                  ppcVar13[-1] = 0x805be80;
                  retcount = snprintf((char *)*ppcVar13,(size_t)ppcVar13[1],(char *)ppcVar13[2]);
                }
                else {
                  if ((char *)prefix_count != (char *)0x2) {
                    // WARNING: Subroutine does not return
                    ppcVar13[-1] = 0x805bf42;
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
                  ppcVar13[-1] = 0x805bf32;
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
                ppcVar13[-1] = 0x805c023;
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
                  ppcVar13[-1] = 0x805bfcf;
                  retcount = snprintf((char *)*ppcVar13,(size_t)ppcVar13[1],(char *)ppcVar13[2]);
                }
                else {
                  if ((char *)prefix_count != (char *)0x2) {
                    // WARNING: Subroutine does not return
                    ppcVar13[-1] = 0x805c091;
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
                  ppcVar13[-1] = 0x805c081;
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
                ppcVar13[-1] = 0x805c172;
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
                  ppcVar13[-1] = 0x805c11e;
                  retcount = snprintf((char *)*ppcVar13,(size_t)ppcVar13[1],(char *)ppcVar13[2]);
                }
                else {
                  if ((char *)prefix_count != (char *)0x2) {
                    // WARNING: Subroutine does not return
                    ppcVar13[-1] = 0x805c1e0;
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
                  ppcVar13[-1] = 0x805c1d0;
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
                ppcVar13[-1] = 0x805c2c1;
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
                  ppcVar13[-1] = 0x805c26d;
                  retcount = snprintf((char *)*ppcVar13,(size_t)ppcVar13[1],(char *)ppcVar13[2]);
                }
                else {
                  if ((char *)prefix_count != (char *)0x2) {
                    // WARNING: Subroutine does not return
                    ppcVar13[-1] = 0x805c329;
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
                  ppcVar13[-1] = 0x805c31c;
                  retcount = snprintf((char *)*ppcVar13,(size_t)ppcVar13[1],(char *)ppcVar13[2]);
                }
              }
            }
            if ((int)__cw < 0) {
              if (fbp[1] != '\0') {
                fbp[1] = '\0';
                goto LAB_0805abec;
              }
              if (retcount < 0) {
                if ((int)allocated < 0) {
                  local_49c = -1;
                }
                else {
                  local_49c = allocated * 2;
                }
                ppcVar13[1] = (char_directive *)&DAT_0000000c;
                *(int *)ppcVar13 = local_49c;
                ppcVar13[-1] = 0x805c3ef;
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
                    ppcVar13[-1] = 0x805c4b0;
                    memory_4 = (char *)malloc((size_t)*ppcVar13);
                  }
                  else {
                    *(size_t *)(ppcVar13 + 1) = allocated;
                    *(char **)ppcVar13 = result;
                    ppcVar13[-1] = 0x805c4d0;
                    memory_4 = (char *)realloc(*ppcVar13,(size_t)ppcVar13[1]);
                  }
                  if (memory_4 == (char *)0x0) goto out_of_memory;
                  if ((result == local_470) && (length != 0)) {
                    *(size_t *)(ppcVar13 + 2) = length;
                    *(char **)(ppcVar13 + 1) = result;
                    *(char **)ppcVar13 = memory_4;
                    ppcVar13[-1] = 0x805c51c;
                    memcpy(*ppcVar13,ppcVar13[1],(size_t)ppcVar13[2]);
                  }
                  result = memory_4;
                }
                goto LAB_0805abec;
              }
              __cw = (char *)retcount;
            }
            else {
              if ((__cw < maxlen) && (result[(int)(__cw + length)] != '\0')) {
                    // WARNING: Subroutine does not return
                ppcVar13[-1] = 0x805c364;
                abort(*(undefined *)(ppcVar13 + -1));
              }
              if ((int)__cw < retcount) {
                __cw = (char *)retcount;
              }
            }
            if ((int)__cw < 0) {
              if ((result != local_470) && (result != (char *)0x0)) {
                *(char **)ppcVar13 = result;
                ppcVar13[-1] = 0x805c568;
                free(*ppcVar13);
              }
              if (buf_malloced != (char *)0x0) {
                *(char **)ppcVar13 = buf_malloced;
                ppcVar13[-1] = 0x805c57f;
                free(*ppcVar13);
              }
              *ppcVar13 = d.dir;
              ppcVar13[-1] = 0x805c58d;
              free(*ppcVar13);
              if (a.arg != (argument *)0x0) {
                *(argument **)ppcVar13 = a.arg;
                ppcVar13[-1] = 0x805c5a5;
                free(*ppcVar13);
              }
              ppcVar13[-1] = 0x805c5aa;
              piVar11 = __errno_location(*(undefined *)(ppcVar13 + -1));
              *piVar11 = 0x16;
              local_4d4 = (char *)0x0;
              goto LAB_0805cab6;
            }
            if (maxlen <= __cw + 1) {
              if (maxlen == 0x7fffffff) {
                if ((result != local_470) && (result != (char *)0x0)) {
                  *(char **)ppcVar13 = result;
                  ppcVar13[-1] = 0x805c9eb;
                  free(*ppcVar13);
                }
                if (buf_malloced != (char *)0x0) {
                  *(char **)ppcVar13 = buf_malloced;
                  ppcVar13[-1] = 0x805ca02;
                  free(*ppcVar13);
                }
                *ppcVar13 = d.dir;
                ppcVar13[-1] = 0x805ca10;
                free(*ppcVar13);
                if (a.arg != (argument *)0x0) {
                  *(argument **)ppcVar13 = a.arg;
                  ppcVar13[-1] = 0x805ca28;
                  free(*ppcVar13);
                }
                ppcVar13[-1] = 0x805ca2d;
                piVar11 = __errno_location(*(undefined *)(ppcVar13 + -1));
                *piVar11 = 0x4b;
                local_4d4 = (char *)0x0;
                goto LAB_0805cab6;
              }
              if ((int)allocated < 0) {
                local_490 = (char_directive *)0xffffffff;
              }
              else {
                local_490 = (char_directive *)(allocated * 2);
              }
              ppcVar13[1] = (char_directive *)(__cw + 2);
              *(size_t *)ppcVar13 = length;
              ppcVar13[-1] = 0x805c623;
              __size = xsum((size_t)*ppcVar13,(size_t)ppcVar13[1]);
              ppcVar13[1] = local_490;
              *(size_t *)ppcVar13 = __size;
              ppcVar13[-1] = 0x805c635;
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
                  ppcVar13[-1] = 0x805c6f6;
                  memory_5 = (char *)malloc((size_t)*ppcVar13);
                }
                else {
                  *(size_t *)(ppcVar13 + 1) = allocated;
                  *(char **)ppcVar13 = result;
                  ppcVar13[-1] = 0x805c716;
                  memory_5 = (char *)realloc(*ppcVar13,(size_t)ppcVar13[1]);
                }
                if (memory_5 == (char *)0x0) goto out_of_memory;
                if ((result == local_470) && (length != 0)) {
                  *(size_t *)(ppcVar13 + 2) = length;
                  *(char **)(ppcVar13 + 1) = result;
                  *(char **)ppcVar13 = memory_5;
                  ppcVar13[-1] = 0x805c762;
                  memcpy(*ppcVar13,ppcVar13[1],(size_t)ppcVar13[2]);
                }
                result = memory_5;
              }
              goto LAB_0805abec;
            }
            length = (size_t)(__cw + length);
          }
        }
LAB_0805c77f:
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
LAB_0805cab6:
  if (local_20 == *(int *)(in_GS_OFFSET + 0x14)) {
    return local_4d4;
  }
                    // WARNING: Subroutine does not return
  *(undefined4 *)((undefined *)ppcVar13 + -4) = 0x805cacd;
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
        *(undefined4 *)&ap->a = 0x80621fc;
      }
      break;
    case TYPE_WIDE_STRING:
      pcVar1 = args + 4;
      *(undefined4 *)&ap->a = *(undefined4 *)args;
      args = pcVar1;
      if (*(int *)&ap->a == 0) {
        *(undefined4 *)&ap->a = 0x80621e0;
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
LAB_0805dc15:
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
LAB_0805d399:
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
      goto LAB_0805d453;
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
        goto LAB_0805d399;
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
LAB_0805d453:
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
      goto LAB_0805d75c;
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
LAB_0805d6b6:
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
      goto LAB_0805d75c;
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
        goto LAB_0805d6b6;
      }
    }
    goto out_of_memory;
  }
LAB_0805d75c:
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
  if (type == TYPE_NONE) goto LAB_0805db61;
  pcVar3->arg_index = arg_index;
  if (pcVar3->arg_index == 0xffffffff) {
    pcVar3->arg_index = arg_posn;
    arg_posn = arg_posn + 1;
    if (pcVar3->arg_index == 0xffffffff) goto error;
  }
  size1 = pcVar3->arg_index;
  if (size1 < a_allocated) {
LAB_0805db13:
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
    goto LAB_0805db61;
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
      goto LAB_0805db13;
    }
  }
  goto out_of_memory;
LAB_0805db61:
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
  goto LAB_0805dc15;
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



undefined8 __divdi3(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  uint local_20;
  uint local_18;
  byte local_14;
  
  local_20 = 0;
  if ((int)param_2 < 0) {
    bVar9 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(param_2 + bVar9);
    local_20 = 0xffffffff;
  }
  if ((int)param_4 < 0) {
    local_20 = ~local_20;
    bVar9 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(param_4 + bVar9);
  }
  if (param_4 == 0) {
    if (param_2 < param_3) {
      uVar8 = 0;
      iVar5 = (int)(CONCAT44(param_2,param_1) / (ulonglong)param_3);
    }
    else {
      local_18 = param_3;
      if (param_3 == 0) {
        local_18 = (uint)(1 / 0);
      }
      uVar8 = param_2 / local_18;
      iVar5 = (int)(((ulonglong)param_2 % (ulonglong)local_18 << 0x20 | (ulonglong)param_1) /
                   (ulonglong)local_18);
    }
    goto LAB_0805dd85;
  }
  if (param_4 <= param_2) {
    uVar8 = 0x1f;
    if (param_4 != 0) {
      while (param_4 >> uVar8 == 0) {
        uVar8 = uVar8 - 1;
      }
    }
    if ((uVar8 ^ 0x1f) != 0) {
      local_14 = (byte)(uVar8 ^ 0x1f);
      bVar6 = 0x20 - local_14;
      uVar1 = (ulonglong)(param_3 >> (bVar6 & 0x1f) | param_4 << (local_14 & 0x1f));
      uVar2 = CONCAT44(param_2 >> (bVar6 & 0x1f),
                       param_1 >> (bVar6 & 0x1f) | param_2 << (local_14 & 0x1f));
      uVar3 = uVar2 / uVar1;
      iVar5 = (int)uVar3;
      uVar8 = (uint)(uVar2 % uVar1);
      lVar4 = (ulonglong)(param_3 << (local_14 & 0x1f)) * (uVar3 & 0xffffffff);
      uVar7 = (uint)((ulonglong)lVar4 >> 0x20);
      if ((uVar8 < uVar7) || ((uVar8 == uVar7 && (param_1 << (local_14 & 0x1f) < (uint)lVar4)))) {
        uVar8 = 0;
        iVar5 = iVar5 + -1;
      }
      else {
        uVar8 = 0;
      }
      goto LAB_0805dd85;
    }
    if ((param_4 < param_2) || (param_3 <= param_1)) {
      iVar5 = 1;
      uVar8 = 0;
      goto LAB_0805dd85;
    }
  }
  iVar5 = 0;
  uVar8 = 0;
LAB_0805dd85:
  if (local_20 != 0) {
    bVar9 = iVar5 != 0;
    iVar5 = -iVar5;
    uVar8 = -(uVar8 + bVar9);
  }
  return CONCAT44(uVar8,iVar5);
}



undefined8 __moddi3(int param_1,uint param_2,int param_3,uint param_4)

{
  int iVar1;
  bool bVar2;
  uint local_40;
  int local_34;
  int local_14;
  int local_10;
  
  local_34 = 0;
  local_40 = param_4;
  if ((int)param_2 < 0) {
    param_2 = -(param_2 + (param_1 != 0));
    local_34 = -1;
  }
  if ((int)param_4 < 0) {
    local_40 = -(param_4 + (param_3 != 0));
  }
  if (((local_40 != 0) && (local_40 <= param_2)) && (iVar1 = 0x1f, local_40 != 0)) {
    while (local_40 >> iVar1 == 0) {
      iVar1 = iVar1 + -1;
    }
  }
  if (local_34 != 0) {
    bVar2 = local_14 != 0;
    local_14 = -local_14;
    local_10 = -(local_10 + (uint)bVar2);
  }
  return CONCAT44(local_10,local_14);
}



ulonglong __udivdi3(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  if (param_4 == 0) {
    if (param_2 < param_3) {
      return CONCAT44(param_2,param_1) / (ulonglong)param_3 & 0xffffffff;
    }
    if (param_3 == 0) {
      param_3 = (uint)(1 / 0);
    }
    return ((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
           (ulonglong)param_3 & 0xffffffff | (ulonglong)param_2 / (ulonglong)param_3 << 0x20;
  }
  if (param_4 <= param_2) {
    uVar7 = 0x1f;
    if (param_4 != 0) {
      while (param_4 >> uVar7 == 0) {
        uVar7 = uVar7 - 1;
      }
    }
    if ((uVar7 ^ 0x1f) != 0) {
      bVar5 = (byte)(uVar7 ^ 0x1f);
      bVar6 = 0x20 - bVar5;
      uVar1 = (ulonglong)(param_4 << (bVar5 & 0x1f) | param_3 >> (bVar6 & 0x1f));
      uVar2 = CONCAT44(param_2 >> (bVar6 & 0x1f),
                       param_1 >> (bVar6 & 0x1f) | param_2 << (bVar5 & 0x1f));
      uVar3 = uVar2 / uVar1;
      uVar7 = (uint)uVar3;
      uVar8 = (uint)(uVar2 % uVar1);
      lVar4 = (ulonglong)(param_3 << (bVar5 & 0x1f)) * (uVar3 & 0xffffffff);
      uVar9 = (uint)((ulonglong)lVar4 >> 0x20);
      if ((uVar8 < uVar9) || ((uVar8 == uVar9 && (param_1 << (bVar5 & 0x1f) < (uint)lVar4)))) {
        uVar7 = uVar7 - 1;
      }
      goto LAB_0805e0f1;
    }
    if ((param_4 < param_2) || (param_3 <= param_1)) {
      uVar7 = 1;
      goto LAB_0805e0f1;
    }
  }
  uVar7 = 0;
LAB_0805e0f1:
  return (ulonglong)uVar7;
}



ulonglong __umoddi3(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  byte local_24;
  byte local_20;
  
  if (param_4 != 0) {
    if (param_4 <= param_2) {
      uVar4 = 0x1f;
      if (param_4 != 0) {
        while (param_4 >> uVar4 == 0) {
          uVar4 = uVar4 - 1;
        }
      }
      if ((uVar4 ^ 0x1f) == 0) {
        if ((param_4 < param_2) || (param_3 <= param_1)) {
          bVar7 = param_1 < param_3;
          param_1 = param_1 - param_3;
          param_2 = (param_2 - param_4) - (uint)bVar7;
        }
      }
      else {
        local_20 = (byte)(uVar4 ^ 0x1f);
        local_24 = 0x20 - local_20;
        uVar4 = param_3 >> (local_24 & 0x1f) | param_4 << (local_20 & 0x1f);
        param_3 = param_3 << (local_20 & 0x1f);
        uVar1 = CONCAT44(param_2 >> (local_24 & 0x1f),
                         param_1 >> (local_24 & 0x1f) | param_2 << (local_20 & 0x1f));
        uVar5 = (uint)(uVar1 % (ulonglong)uVar4);
        param_1 = param_1 << (local_20 & 0x1f);
        lVar2 = (uVar1 / (ulonglong)uVar4 & 0xffffffff) * (ulonglong)param_3;
        uVar6 = (uint)((ulonglong)lVar2 >> 0x20);
        uVar3 = (uint)lVar2;
        if ((uVar5 < uVar6) || ((uVar5 == uVar6 && (param_1 < uVar3)))) {
          bVar7 = uVar3 < param_3;
          uVar3 = uVar3 - param_3;
          uVar6 = (uVar6 - uVar4) - (uint)bVar7;
        }
        param_2 = (uVar5 - uVar6) - (uint)(param_1 < uVar3);
        param_1 = param_2 << (local_24 & 0x1f) | param_1 - uVar3 >> (local_20 & 0x1f);
        param_2 = param_2 >> (local_20 & 0x1f);
      }
    }
    return CONCAT44(param_2,param_1);
  }
  if (param_2 < param_3) {
    uVar4 = (uint)(CONCAT44(param_2,param_1) % (ulonglong)param_3);
  }
  else {
    if (param_3 == 0) {
      param_3 = (uint)(1 / 0);
    }
    uVar4 = (uint)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) %
                  (ulonglong)param_3);
  }
  return (ulonglong)uVar4;
}



void __libc_csu_fini(void)

{
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx
// WARNING: Removing unreachable block (ram,0x0805e34e)
// WARNING: Removing unreachable block (ram,0x0805e350)

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

int stat64(char *__file,stat64 *__buf)

{
  int iVar1;
  
  iVar1 = __xstat64(3,__file,__buf);
  return iVar1;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

int fstat64(int __fd,stat64 *__buf)

{
  int iVar1;
  
  iVar1 = __fxstat64(3,__fd,__buf);
  return iVar1;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

int lstat64(char *__file,stat64 *__buf)

{
  int iVar1;
  
  iVar1 = __lxstat64(3,__file,__buf);
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


