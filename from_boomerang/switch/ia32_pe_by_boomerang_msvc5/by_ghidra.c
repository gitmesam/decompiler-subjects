typedef unsigned char   undefined;

typedef unsigned int    ImageBaseOffset32;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef short    wchar_t;
typedef unsigned short    word;
typedef unsigned short    wchar16;
typedef struct _cpinfo _cpinfo, *P_cpinfo;

typedef uint UINT;

typedef uchar BYTE;

struct _cpinfo {
    UINT MaxCharSize;
    BYTE DefaultChar[2];
    BYTE LeadByte[12];
};

typedef struct _cpinfo * LPCPINFO;

typedef ushort WORD;

typedef ulong DWORD;

typedef int (* FARPROC)(void);

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

typedef struct HINSTANCE__ * HINSTANCE;

struct HINSTANCE__ {
    int unused;
};

typedef void * LPCVOID;

typedef void * LPVOID;

typedef int BOOL;

typedef HINSTANCE HMODULE;

typedef DWORD * LPDWORD;

typedef BOOL * LPBOOL;

typedef BYTE * LPBYTE;

typedef struct IMAGE_DATA_DIRECTORY IMAGE_DATA_DIRECTORY, *PIMAGE_DATA_DIRECTORY;

struct IMAGE_DATA_DIRECTORY {
    ImageBaseOffset32 VirtualAddress;
    dword Size;
};

typedef struct IMAGE_OPTIONAL_HEADER32 IMAGE_OPTIONAL_HEADER32, *PIMAGE_OPTIONAL_HEADER32;

struct IMAGE_OPTIONAL_HEADER32 {
    word Magic;
    byte MajorLinkerVersion;
    byte MinorLinkerVersion;
    dword SizeOfCode;
    dword SizeOfInitializedData;
    dword SizeOfUninitializedData;
    ImageBaseOffset32 AddressOfEntryPoint;
    ImageBaseOffset32 BaseOfCode;
    ImageBaseOffset32 BaseOfData;
    pointer32 ImageBase;
    dword SectionAlignment;
    dword FileAlignment;
    word MajorOperatingSystemVersion;
    word MinorOperatingSystemVersion;
    word MajorImageVersion;
    word MinorImageVersion;
    word MajorSubsystemVersion;
    word MinorSubsystemVersion;
    dword Win32VersionValue;
    dword SizeOfImage;
    dword SizeOfHeaders;
    dword CheckSum;
    word Subsystem;
    word DllCharacteristics;
    dword SizeOfStackReserve;
    dword SizeOfStackCommit;
    dword SizeOfHeapReserve;
    dword SizeOfHeapCommit;
    dword LoaderFlags;
    dword NumberOfRvaAndSizes;
    struct IMAGE_DATA_DIRECTORY DataDirectory[16];
};

typedef struct IMAGE_SECTION_HEADER IMAGE_SECTION_HEADER, *PIMAGE_SECTION_HEADER;

typedef union Misc Misc, *PMisc;

typedef enum SectionFlags {
    IMAGE_SCN_ALIGN_1024BYTES=11534336,
    IMAGE_SCN_ALIGN_128BYTES=8388608,
    IMAGE_SCN_ALIGN_16BYTES=5242880,
    IMAGE_SCN_ALIGN_1BYTES=1048576,
    IMAGE_SCN_ALIGN_2048BYTES=12582912,
    IMAGE_SCN_ALIGN_256BYTES=9437184,
    IMAGE_SCN_ALIGN_2BYTES=2097152,
    IMAGE_SCN_ALIGN_32BYTES=6291456,
    IMAGE_SCN_ALIGN_4096BYTES=13631488,
    IMAGE_SCN_ALIGN_4BYTES=3145728,
    IMAGE_SCN_ALIGN_512BYTES=10485760,
    IMAGE_SCN_ALIGN_64BYTES=7340032,
    IMAGE_SCN_ALIGN_8192BYTES=14680064,
    IMAGE_SCN_ALIGN_8BYTES=4194304,
    IMAGE_SCN_CNT_CODE=32,
    IMAGE_SCN_CNT_INITIALIZED_DATA=64,
    IMAGE_SCN_CNT_UNINITIALIZED_DATA=128,
    IMAGE_SCN_GPREL=32768,
    IMAGE_SCN_LNK_COMDAT=4096,
    IMAGE_SCN_LNK_INFO=512,
    IMAGE_SCN_LNK_NRELOC_OVFL=16777216,
    IMAGE_SCN_LNK_OTHER=256,
    IMAGE_SCN_LNK_REMOVE=2048,
    IMAGE_SCN_MEM_16BIT=131072,
    IMAGE_SCN_MEM_DISCARDABLE=33554432,
    IMAGE_SCN_MEM_EXECUTE=536870912,
    IMAGE_SCN_MEM_LOCKED=262144,
    IMAGE_SCN_MEM_NOT_CACHED=67108864,
    IMAGE_SCN_MEM_NOT_PAGED=134217728,
    IMAGE_SCN_MEM_PRELOAD=524288,
    IMAGE_SCN_MEM_PURGEABLE=131072,
    IMAGE_SCN_MEM_READ=1073741824,
    IMAGE_SCN_MEM_SHARED=268435456,
    IMAGE_SCN_MEM_WRITE=2147483648,
    IMAGE_SCN_RESERVED_0001=16,
    IMAGE_SCN_RESERVED_0040=1024,
    IMAGE_SCN_TYPE_NO_PAD=8
} SectionFlags;

union Misc {
    dword PhysicalAddress;
    dword VirtualSize;
};

struct IMAGE_SECTION_HEADER {
    char Name[8];
    union Misc Misc;
    ImageBaseOffset32 VirtualAddress;
    dword SizeOfRawData;
    dword PointerToRawData;
    dword PointerToRelocations;
    dword PointerToLinenumbers;
    word NumberOfRelocations;
    word NumberOfLinenumbers;
    enum SectionFlags Characteristics;
};

typedef struct IMAGE_FILE_HEADER IMAGE_FILE_HEADER, *PIMAGE_FILE_HEADER;

struct IMAGE_FILE_HEADER {
    word Machine; // 332
    word NumberOfSections;
    dword TimeDateStamp;
    dword PointerToSymbolTable;
    dword NumberOfSymbols;
    word SizeOfOptionalHeader;
    word Characteristics;
};

typedef struct IMAGE_NT_HEADERS32 IMAGE_NT_HEADERS32, *PIMAGE_NT_HEADERS32;

struct IMAGE_NT_HEADERS32 {
    char Signature[4];
    struct IMAGE_FILE_HEADER FileHeader;
    struct IMAGE_OPTIONAL_HEADER32 OptionalHeader;
};

typedef struct _STARTUPINFOA _STARTUPINFOA, *P_STARTUPINFOA;

typedef char CHAR;

typedef CHAR * LPSTR;

typedef void * HANDLE;

struct _STARTUPINFOA {
    DWORD cb;
    LPSTR lpReserved;
    LPSTR lpDesktop;
    LPSTR lpTitle;
    DWORD dwX;
    DWORD dwY;
    DWORD dwXSize;
    DWORD dwYSize;
    DWORD dwXCountChars;
    DWORD dwYCountChars;
    DWORD dwFillAttribute;
    DWORD dwFlags;
    WORD wShowWindow;
    WORD cbReserved2;
    LPBYTE lpReserved2;
    HANDLE hStdInput;
    HANDLE hStdOutput;
    HANDLE hStdError;
};

typedef struct _STARTUPINFOA * LPSTARTUPINFOA;

typedef union _union_518 _union_518, *P_union_518;

typedef struct _struct_519 _struct_519, *P_struct_519;

typedef void * PVOID;

struct _struct_519 {
    DWORD Offset;
    DWORD OffsetHigh;
};

union _union_518 {
    struct _struct_519 s;
    PVOID Pointer;
};

typedef struct _OVERLAPPED _OVERLAPPED, *P_OVERLAPPED;

typedef ulong ULONG_PTR;

struct _OVERLAPPED {
    ULONG_PTR Internal;
    ULONG_PTR InternalHigh;
    union _union_518 u;
    HANDLE hEvent;
};

typedef struct _OVERLAPPED * LPOVERLAPPED;

typedef struct _CONTEXT _CONTEXT, *P_CONTEXT;

typedef struct _CONTEXT CONTEXT;

typedef struct _FLOATING_SAVE_AREA _FLOATING_SAVE_AREA, *P_FLOATING_SAVE_AREA;

typedef struct _FLOATING_SAVE_AREA FLOATING_SAVE_AREA;

struct _FLOATING_SAVE_AREA {
    DWORD ControlWord;
    DWORD StatusWord;
    DWORD TagWord;
    DWORD ErrorOffset;
    DWORD ErrorSelector;
    DWORD DataOffset;
    DWORD DataSelector;
    BYTE RegisterArea[80];
    DWORD Cr0NpxState;
};

struct _CONTEXT {
    DWORD ContextFlags;
    DWORD Dr0;
    DWORD Dr1;
    DWORD Dr2;
    DWORD Dr3;
    DWORD Dr6;
    DWORD Dr7;
    FLOATING_SAVE_AREA FloatSave;
    DWORD SegGs;
    DWORD SegFs;
    DWORD SegEs;
    DWORD SegDs;
    DWORD Edi;
    DWORD Esi;
    DWORD Ebx;
    DWORD Edx;
    DWORD Ecx;
    DWORD Eax;
    DWORD Ebp;
    DWORD Eip;
    DWORD SegCs;
    DWORD EFlags;
    DWORD Esp;
    DWORD SegSs;
    BYTE ExtendedRegisters[512];
};

typedef struct _EXCEPTION_RECORD _EXCEPTION_RECORD, *P_EXCEPTION_RECORD;

typedef struct _EXCEPTION_RECORD EXCEPTION_RECORD;

typedef EXCEPTION_RECORD * PEXCEPTION_RECORD;

struct _EXCEPTION_RECORD {
    DWORD ExceptionCode;
    DWORD ExceptionFlags;
    struct _EXCEPTION_RECORD * ExceptionRecord;
    PVOID ExceptionAddress;
    DWORD NumberParameters;
    ULONG_PTR ExceptionInformation[15];
};

typedef wchar_t WCHAR;

typedef CHAR * LPCSTR;

typedef long LONG;

typedef LONG * PLONG;

typedef CHAR * LPCH;

typedef WCHAR * LPWCH;

typedef WCHAR * LPCWSTR;

typedef CONTEXT * PCONTEXT;

typedef struct IMAGE_DOS_HEADER IMAGE_DOS_HEADER, *PIMAGE_DOS_HEADER;

struct IMAGE_DOS_HEADER {
    char e_magic[2]; // Magic number
    word e_cblp; // Bytes of last page
    word e_cp; // Pages in file
    word e_crlc; // Relocations
    word e_cparhdr; // Size of header in paragraphs
    word e_minalloc; // Minimum extra paragraphs needed
    word e_maxalloc; // Maximum extra paragraphs needed
    word e_ss; // Initial (relative) SS value
    word e_sp; // Initial SP value
    word e_csum; // Checksum
    word e_ip; // Initial IP value
    word e_cs; // Initial (relative) CS value
    word e_lfarlc; // File address of relocation table
    word e_ovno; // Overlay number
    word e_res[4][4]; // Reserved words
    word e_oemid; // OEM identifier (for e_oeminfo)
    word e_oeminfo; // OEM information; e_oemid specific
    word e_res2[10][10]; // Reserved words
    dword e_lfanew; // File address of new exe header
    byte e_program[64]; // Actual DOS program
};

typedef ULONG_PTR SIZE_T;

typedef struct _EXCEPTION_POINTERS _EXCEPTION_POINTERS, *P_EXCEPTION_POINTERS;

struct _EXCEPTION_POINTERS {
    PEXCEPTION_RECORD ExceptionRecord;
    PCONTEXT ContextRecord;
};

typedef uint size_t;




undefined4 __cdecl FUN_00401000(undefined4 param_1)

{
  switch(param_1) {
  case 2:
    FUN_004010a0((byte *)s_Two__00406060);
    return 0;
  case 3:
    FUN_004010a0((byte *)s_Three__00406058);
    return 0;
  case 4:
    FUN_004010a0((byte *)s_Four__00406050);
    return 0;
  case 5:
    FUN_004010a0((byte *)s_Five__00406048);
    return 0;
  case 6:
    FUN_004010a0((byte *)s_Six__00406040);
    return 0;
  case 7:
    FUN_004010a0((byte *)s_Seven__00406038);
    return 0;
  default:
    FUN_004010a0((byte *)s_Other__00406030);
    return 0;
  }
}



int __cdecl FUN_004010a0(byte *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00401230((undefined4 *)&DAT_00406098);
  iVar2 = FUN_00401330((char **)&DAT_00406098,param_1,(undefined4 *)&stack0x00000008);
  FUN_004012d0(iVar1,(int *)&DAT_00406098);
  return iVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void entry(void)

{
  DWORD DVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  UINT local_20;
  undefined *local_1c;
  undefined4 local_14;
  undefined *puStack16;
  undefined *puStack12;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack12 = &DAT_00405000;
  puStack16 = &LAB_00402cb8;
  local_14 = *in_FS_OFFSET;
  *(undefined4 **)in_FS_OFFSET = &local_14;
  local_1c = &stack0xffffffd0;
  DVar1 = GetVersion();
  _DAT_0040892c = DVar1 >> 8 & 0xff;
  _DAT_00408928 = DVar1 & 0xff;
  _DAT_00408924 = _DAT_00408928 * 0x100 + _DAT_0040892c;
  _DAT_00408920 = DVar1 >> 0x10;
  iVar2 = FUN_00402b80();
  if (iVar2 == 0) {
    __amsg_exit(0x1c);
  }
  local_8 = 0;
  FUN_00402980();
  FUN_00402970();
  DAT_00409d04 = GetCommandLineA();
  DAT_004088f8 = FUN_00402540();
  if ((DAT_004088f8 == (undefined4 *)0x0) || (DAT_00409d04 == (LPSTR)0x0)) {
    FUN_00401f00(0xffffffff);
  }
  FUN_00402290();
  FUN_004021a0();
  FUN_00401ed0();
  _DAT_00408940 = DAT_0040893c;
  local_20 = FUN_00401000(DAT_00408930);
  FUN_00401f00(local_20);
  *in_FS_OFFSET = local_14;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
// Name: __amsg_exit
// Library: Visual Studio 1998 Release

void __cdecl __amsg_exit(int param_1)

{
  if (DAT_00408900 != 2) {
    FUN_00402d90();
  }
  FUN_00402dd0(param_1);
  (*_DAT_00406068)(0xff);
  return;
}



undefined4 __cdecl FUN_00401230(undefined4 *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = FUN_00403060(param_1[4]);
  if (uVar2 != 0) {
    if (param_1 == (undefined4 *)&DAT_00406098) {
      iVar4 = 0;
    }
    else {
      if (param_1 != (undefined4 *)&DAT_004060b8) {
        return 0;
      }
      iVar4 = 1;
    }
    DAT_00408910 = DAT_00408910 + 1;
    if ((param_1[3] & 0x10c) == 0) {
      if ((&DAT_00408908)[iVar4] == 0) {
        iVar3 = FUN_00402fb0(0x1000);
        (&DAT_00408908)[iVar4] = iVar3;
        if (iVar3 == 0) {
          return 0;
        }
      }
      uVar1 = (&DAT_00408908)[iVar4];
      param_1[6] = 0x1000;
      param_1[2] = uVar1;
      *param_1 = uVar1;
      param_1[1] = 0x1000;
      param_1[3] = param_1[3] | 0x1102;
      return 1;
    }
  }
  return 0;
}



void __cdecl FUN_004012d0(int param_1,int *param_2)

{
  if (param_1 == 0) {
    if ((param_2[3] & 0x1000U) != 0) {
      FUN_004030e0(param_2);
    }
  }
  else {
    if ((param_2[3] & 0x1000U) != 0) {
      FUN_004030e0(param_2);
      param_2[6] = 0;
      param_2[3] = param_2[3] & 0xffffeeff;
      *param_2 = 0;
      param_2[2] = 0;
      return;
    }
  }
  return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int __cdecl FUN_00401330(char **param_1,byte *param_2,undefined4 *param_3)

{
  char **ppcVar1;
  uint uVar2;
  short *psVar3;
  int *piVar4;
  undefined4 uVar5;
  ushort *puVar6;
  LPSTR pCVar7;
  byte bVar8;
  char cVar9;
  ushort *puVar10;
  ushort *puVar11;
  char *pcVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  uint local_24c;
  ushort *local_248;
  int local_244;
  int local_240;
  char local_23a;
  char local_239;
  int local_238;
  int local_234;
  int local_230;
  uint local_22c;
  int local_228;
  undefined4 local_224;
  int local_220;
  uint local_21c;
  undefined4 local_218;
  char local_214 [4];
  undefined4 local_210;
  undefined4 local_20c;
  uint local_204;
  char local_200;
  undefined auStack511 [510];
  undefined local_1;
  
  local_220 = 0;
  puVar10 = (ushort *)0x0;
  local_240 = 0;
  bVar8 = *param_2;
  param_2 = param_2 + 1;
  local_21c = local_21c & 0xffffff00 | (uint)bVar8;
  do {
    if ((bVar8 == 0) || (local_240 < 0)) {
      return local_240;
    }
    if (((char)bVar8 < ' ') || ('x' < (char)bVar8)) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uint)*(byte *)((int)(char)bVar8 + 0x404ff0) & 0xf;
    }
    local_220 = (int)(char)(&DAT_00405010)[uVar2 * 8 + local_220] >> 4;
    switch(local_220) {
    case 0:
switchD_004013ad_caseD_0:
      local_230 = 0;
      if ((PTR_DAT_00406540[(local_21c & 0xff) * 2 + 1] & 0x80) != 0) {
        FUN_00401cc0((int)(char)bVar8,param_1,&local_240);
        bVar8 = *param_2;
        param_2 = param_2 + 1;
      }
      FUN_00401cc0((int)(char)bVar8,param_1,&local_240);
      break;
    case 1:
      local_218 = 0;
      local_228 = 0;
      local_234 = 0;
      local_238 = 0;
      local_24c = 0;
      local_244 = -1;
      local_230 = 0;
      break;
    case 2:
      switch(bVar8) {
      case 0x20:
        local_24c = local_24c | 2;
        break;
      case 0x23:
        local_24c = local_24c | 0x80;
        break;
      case 0x2b:
        local_24c = local_24c | 1;
        break;
      case 0x2d:
        local_24c = local_24c | 4;
        break;
      case 0x30:
        local_24c = local_24c | 8;
      }
      break;
    case 3:
      if (bVar8 == 0x2a) {
        local_234 = FUN_00401d90((int *)&param_3);
        if (local_234 < 0) {
          local_24c = local_24c | 4;
          local_234 = -local_234;
        }
      }
      else {
        local_234 = (int)(char)bVar8 + -0x30 + local_234 * 10;
      }
      break;
    case 4:
      local_244 = 0;
      break;
    case 5:
      if (bVar8 == 0x2a) {
        local_244 = FUN_00401d90((int *)&param_3);
        if (local_244 < 0) {
          local_244 = -1;
        }
      }
      else {
        local_244 = (int)(char)bVar8 + -0x30 + local_244 * 10;
      }
      break;
    case 6:
      switch(bVar8) {
      case 0x49:
        if ((*param_2 != 0x36) || (param_2[1] != 0x34)) {
          local_220 = 0;
          goto switchD_004013ad_caseD_0;
        }
        param_2 = param_2 + 2;
        local_24c = local_24c | 0x8000;
        break;
      case 0x68:
        local_24c = local_24c | 0x20;
        break;
      case 0x6c:
        local_24c = local_24c | 0x10;
        break;
      case 0x77:
        local_24c = local_24c | 0x800;
      }
      break;
    case 7:
      switch(bVar8) {
      case 0x43:
        if ((local_24c & 0x830) == 0) {
          local_24c = local_24c | 0x800;
        }
        goto switchD_004015c1_caseD_63;
      case 0x45:
      case 0x47:
        local_218 = 1;
        bVar8 = bVar8 + 0x20;
        goto switchD_004015c1_caseD_65;
      case 0x53:
        if ((local_24c & 0x830) == 0) {
          local_24c = local_24c | 0x800;
        }
        goto switchD_004015c1_caseD_73;
      case 0x5a:
        psVar3 = (short *)FUN_00401d90((int *)&param_3);
        if ((psVar3 == (short *)0x0) ||
           (local_248 = *(ushort **)(psVar3 + 2), local_248 == (ushort *)0x0)) {
          uVar2 = 0xffffffff;
          local_248 = (ushort *)PTR_DAT_00406070;
          pcVar12 = PTR_DAT_00406070;
          do {
            if (uVar2 == 0) break;
            uVar2 = uVar2 - 1;
            cVar9 = *pcVar12;
            pcVar12 = pcVar12 + 1;
          } while (cVar9 != '\0');
          puVar10 = (ushort *)(~uVar2 - 1);
        }
        else {
          if ((local_24c & 0x800) == 0) {
            puVar10 = (ushort *)(int)*psVar3;
            local_230 = 0;
          }
          else {
            local_230 = 1;
            puVar10 = (ushort *)((uint)(int)*psVar3 >> 1);
          }
        }
        break;
      case 99:
switchD_004015c1_caseD_63:
        if ((local_24c & 0x810) == 0) {
          uVar5 = FUN_00401d90((int *)&param_3);
          local_200 = (char)uVar5;
          puVar10 = (ushort *)0x1;
        }
        else {
          uVar2 = FUN_00401dd0((ushort **)&param_3);
          puVar10 = (ushort *)FUN_004031e0(&local_200,(ushort)uVar2);
          if ((int)puVar10 < 0) {
            local_248 = (ushort *)&local_200;
            local_228 = 1;
            break;
          }
        }
        local_248 = (ushort *)&local_200;
        break;
      case 100:
      case 0x69:
        local_22c = 10;
        local_24c = local_24c | 0x40;
        goto LAB_004018f7;
      case 0x65:
      case 0x66:
      case 0x67:
switchD_004015c1_caseD_65:
        local_248 = (ushort *)&local_200;
        if (local_244 < 0) {
          local_244 = 6;
        }
        else {
          if ((local_244 == 0) && (bVar8 == 0x67)) {
            local_244 = 1;
          }
        }
        local_210 = *param_3;
        local_20c = param_3[1];
        param_3 = param_3 + 2;
        (*_DAT_00406528)(&local_210,&local_200,(int)(char)bVar8,local_244,local_218);
        if (((local_24c & 0x80) != 0) && (local_244 == 0)) {
          (*(code *)PTR_FUN_00406534)(&local_200);
        }
        if ((bVar8 == 0x67) && ((local_24c & 0x80) == 0)) {
          (*(code *)PTR_FUN_0040652c)(&local_200);
        }
        uVar2 = local_24c | 0x40;
        if (local_200 == '-') {
          local_248 = (ushort *)(&local_200 + 1);
          uVar2 = local_24c | 0x140;
        }
        local_24c = uVar2;
        uVar2 = 0xffffffff;
        puVar10 = local_248;
        do {
          if (uVar2 == 0) break;
          uVar2 = uVar2 - 1;
          cVar9 = *(char *)puVar10;
          puVar10 = (ushort *)((int)puVar10 + 1);
        } while (cVar9 != '\0');
        puVar10 = (ushort *)(~uVar2 - 1);
        break;
      case 0x6e:
        piVar4 = (int *)FUN_00401d90((int *)&param_3);
        if ((local_24c & 0x20) == 0) {
          local_228 = 1;
          *piVar4 = local_240;
        }
        else {
          local_228 = 1;
          *(undefined2 *)piVar4 = (undefined2)local_240;
        }
        break;
      case 0x6f:
        local_22c = 8;
        if ((local_24c & 0x80) != 0) {
          local_24c = local_24c | 0x200;
        }
        goto LAB_004018f7;
      case 0x70:
        local_244 = 8;
switchD_004015c1_caseD_58:
        local_224 = 7;
LAB_004018b2:
        local_22c = 0x10;
        if ((local_24c & 0x80) != 0) {
          local_23a = '0';
          local_239 = (char)local_224 + 'Q';
          local_238 = 2;
        }
        goto LAB_004018f7;
      case 0x73:
switchD_004015c1_caseD_73:
        iVar14 = 0x7fffffff;
        if (local_244 != -1) {
          iVar14 = local_244;
        }
        local_248 = (ushort *)FUN_00401d90((int *)&param_3);
        if ((local_24c & 0x810) == 0) {
          puVar10 = local_248;
          if (local_248 == (ushort *)0x0) {
            puVar10 = (ushort *)PTR_DAT_00406070;
            local_248 = (ushort *)PTR_DAT_00406070;
          }
          while ((iVar14 != 0 && (iVar14 = iVar14 + -1, *(char *)puVar10 != '\0'))) {
            puVar10 = (ushort *)((int)puVar10 + 1);
          }
          puVar10 = (ushort *)((int)puVar10 - (int)local_248);
        }
        else {
          if (local_248 == (ushort *)0x0) {
            local_248 = (ushort *)PTR_DAT_00406074;
          }
          local_230 = 1;
          puVar10 = local_248;
          while ((iVar14 != 0 && (iVar14 = iVar14 + -1, *puVar10 != 0))) {
            puVar10 = puVar10 + 1;
          }
          puVar10 = (ushort *)((int)((int)puVar10 - (int)local_248) >> 1);
        }
        break;
      case 0x75:
        local_22c = 10;
LAB_004018f7:
        if ((local_24c & 0x8000) == 0) {
          if ((local_24c & 0x20) == 0) {
            if ((local_24c & 0x40) == 0) {
              uVar2 = FUN_00401d90((int *)&param_3);
              uVar15 = (ulonglong)uVar2;
            }
            else {
              iVar14 = FUN_00401d90((int *)&param_3);
              uVar15 = SEXT48(iVar14);
            }
          }
          else {
            if ((local_24c & 0x40) == 0) {
              uVar2 = FUN_00401d90((int *)&param_3);
              uVar15 = (ulonglong)uVar2 & 0xffffffff0000ffff;
            }
            else {
              uVar5 = FUN_00401d90((int *)&param_3);
              uVar15 = SEXT48((int)(short)uVar5);
            }
          }
        }
        else {
          uVar15 = FUN_00401db0((int *)&param_3);
        }
        iVar14 = (int)(uVar15 >> 0x20);
        if ((((local_24c & 0x40) != 0) && (iVar14 == 0 || (longlong)uVar15 < 0)) &&
           ((longlong)uVar15 < 0)) {
          local_24c = local_24c | 0x100;
          uVar15 = CONCAT44(-(iVar14 + (uint)((int)uVar15 != 0)),-(int)uVar15);
        }
        uVar2 = (uint)(uVar15 >> 0x20);
        if ((local_24c & 0x8000) == 0) {
          uVar2 = 0;
        }
        uVar17 = uVar15 & 0xffffffff | (ulonglong)uVar2 << 0x20;
        if (local_244 < 0) {
          local_244 = 1;
        }
        else {
          local_24c = local_24c & 0xfffffff7;
        }
        if (((uint)uVar15 | uVar2) == 0) {
          local_238 = 0;
        }
        puVar6 = (ushort *)(&local_200 + 0x1ff);
        iVar14 = local_244;
        while( true ) {
          uVar2 = local_22c;
          uVar13 = (uint)(uVar17 >> 0x20);
          local_244 = iVar14 + -1;
          if ((iVar14 < 1) && (uVar17 == 0)) break;
          local_204 = (int)local_22c >> 0x1f;
          uVar16 = __aullrem((uint)uVar17,uVar13,local_22c,local_204);
          iVar14 = (int)uVar16 + 0x30;
          cVar9 = (char)iVar14;
          uVar17 = __aulldiv((uint)uVar17,uVar13,uVar2,local_204);
          if (0x39 < iVar14) {
            cVar9 = cVar9 + (char)local_224;
          }
          *(char *)puVar6 = cVar9;
          puVar6 = (ushort *)((int)puVar6 + -1);
          iVar14 = local_244;
        }
        puVar10 = (ushort *)(&local_200 + -(int)puVar6 + 0x1ff);
        local_248 = (ushort *)((int)puVar6 + 1);
        if (((local_24c & 0x200) != 0) &&
           ((*(char *)local_248 != '0' || (puVar10 == (ushort *)0x0)))) {
          puVar10 = (ushort *)(&stack0x00000000 + -(int)puVar6);
          *(undefined *)puVar6 = 0x30;
          local_248 = puVar6;
        }
        break;
      case 0x78:
        local_224 = 0x27;
        goto LAB_004018b2;
      case 0x58:
        goto switchD_004015c1_caseD_58;
      }
      ppcVar1 = param_1;
      if (local_228 == 0) {
        if ((local_24c & 0x40) != 0) {
          if ((local_24c & 0x100) == 0) {
            if ((local_24c & 1) == 0) {
              if ((local_24c & 2) == 0) goto LAB_00401a8f;
              local_23a = ' ';
            }
            else {
              local_23a = '+';
            }
          }
          else {
            local_23a = '-';
          }
          local_238 = 1;
        }
LAB_00401a8f:
        iVar14 = (local_234 - local_238) - (int)puVar10;
        if ((local_24c & 0xc) == 0) {
          FUN_00401d10(0x20,iVar14,param_1,&local_240);
        }
        FUN_00401d50(&local_23a,local_238,ppcVar1,&local_240);
        if (((local_24c & 8) != 0) && ((local_24c & 4) == 0)) {
          FUN_00401d10(0x30,iVar14,ppcVar1,&local_240);
        }
        if ((local_230 == 0) || (puVar11 = local_248, puVar6 = puVar10, (int)puVar10 < 1)) {
          FUN_00401d50((char *)local_248,(int)puVar10,ppcVar1,&local_240);
        }
        else {
          do {
            puVar6 = (ushort *)((int)puVar6 + -1);
            pCVar7 = FUN_004031e0(local_214,*puVar11);
            if ((int)pCVar7 < 1) break;
            FUN_00401d50(local_214,(int)pCVar7,param_1,&local_240);
            puVar11 = puVar11 + 1;
          } while (puVar6 != (ushort *)0x0);
        }
        if ((local_24c & 4) != 0) {
          FUN_00401d10(0x20,iVar14,param_1,&local_240);
        }
      }
    }
    bVar8 = *param_2;
    param_2 = param_2 + 1;
    local_21c = local_21c & 0xffffff00 | (uint)bVar8;
  } while( true );
}



void __cdecl FUN_00401cc0(uint param_1,char **param_2,int *param_3)

{
  char *pcVar1;
  
  pcVar1 = param_2[1];
  param_2[1] = pcVar1 + -1;
  if ((int)(pcVar1 + -1) < 0) {
    param_1 = FUN_00403350(param_1,param_2);
  }
  else {
    **param_2 = (char)param_1;
    param_1 = param_1 & 0xff;
    *param_2 = *param_2 + 1;
  }
  if (param_1 == 0xffffffff) {
    *param_3 = -1;
    return;
  }
  *param_3 = *param_3 + 1;
  return;
}



void __cdecl FUN_00401d10(uint param_1,int param_2,char **param_3,int *param_4)

{
  if (0 < param_2) {
    do {
      param_2 = param_2 + -1;
      FUN_00401cc0(param_1,param_3,param_4);
      if (*param_4 == -1) {
        return;
      }
    } while (0 < param_2);
  }
  return;
}



void __cdecl FUN_00401d50(char *param_1,int param_2,char **param_3,int *param_4)

{
  char cVar1;
  
  if (0 < param_2) {
    do {
      param_2 = param_2 + -1;
      cVar1 = *param_1;
      param_1 = param_1 + 1;
      FUN_00401cc0((int)cVar1,param_3,param_4);
      if (*param_4 == -1) {
        return;
      }
    } while (0 < param_2);
  }
  return;
}



undefined4 __cdecl FUN_00401d90(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_1;
  *(undefined4 **)param_1 = puVar1 + 1;
  return *puVar1;
}



undefined8 __cdecl FUN_00401db0(int *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 **)param_1 = puVar1 + 1;
  return *puVar1;
}



uint __cdecl FUN_00401dd0(ushort **param_1)

{
  ushort *puVar1;
  ushort *puVar2;
  
  puVar1 = *param_1;
  puVar2 = puVar1 + 2;
  *param_1 = puVar2;
  return (uint)puVar2 & 0xffff0000 | (uint)*puVar1;
}



void FUN_00401ed0(void)

{
  if (DAT_00408cec != (code *)0x0) {
    (*DAT_00408cec)();
  }
  FUN_00401ff0((undefined **)&DAT_00406008,(undefined **)&DAT_00406010);
  FUN_00401ff0((undefined **)&DAT_00406000,(undefined **)&DAT_00406004);
  return;
}



void __cdecl FUN_00401f00(UINT param_1)

{
  FUN_00401f40(param_1,0,0);
  return;
}



// Library Function - Single Match
// Name: __exit
// Library: Visual Studio 1998 Release

void __cdecl __exit(int _Code)

{
  FUN_00401f40(_Code,1,0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl FUN_00401f40(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  code **ppcVar1;
  code **ppcVar2;
  UINT uExitCode;
  
  if (DAT_0040895c == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  _DAT_00408958 = 1;
  DAT_00408954 = (undefined)param_3;
  if (param_2 == 0) {
    if ((DAT_00408ce8 != (code **)0x0) &&
       (ppcVar2 = (code **)(DAT_00408ce4 + -4), ppcVar1 = DAT_00408ce8, DAT_00408ce8 <= ppcVar2)) {
      do {
        if (*ppcVar2 != (code *)0x0) {
          (**ppcVar2)();
          ppcVar1 = DAT_00408ce8;
        }
        ppcVar2 = ppcVar2 + -1;
      } while (ppcVar1 <= ppcVar2);
    }
    FUN_00401ff0((undefined **)&DAT_00406014,(undefined **)&DAT_0040601c);
  }
  FUN_00401ff0((undefined **)&DAT_00406020,(undefined **)&DAT_00406024);
  if (param_3 == 0) {
    DAT_0040895c = 1;
    ExitProcess(param_1);
  }
  return;
}



void __cdecl FUN_00401ff0(undefined **param_1,undefined **param_2)

{
  if (param_1 < param_2) {
    do {
      if ((code *)*param_1 != (code *)0x0) {
        (*(code *)*param_1)();
      }
      param_1 = (code **)param_1 + 1;
    } while (param_1 < param_2);
  }
  return;
}



LONG __cdecl FUN_00402010(int param_1,_EXCEPTION_POINTERS *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  LONG LVar5;
  undefined4 *puVar6;
  int iVar7;
  
  piVar4 = FUN_00402150(param_1);
  uVar3 = DAT_00408960;
  if ((piVar4 == (int *)0x0) || (pcVar1 = (code *)piVar4[2], pcVar1 == (code *)0x0)) {
    LVar5 = UnhandledExceptionFilter(param_2);
    return LVar5;
  }
  if (pcVar1 == (code *)0x5) {
    piVar4[2] = 0;
    return 1;
  }
  if (pcVar1 != (code *)0x1) {
    DAT_00408960 = param_2;
    if (piVar4[1] == 8) {
      if (DAT_00406370 < DAT_00406374 + DAT_00406370) {
        iVar7 = (DAT_00406374 + DAT_00406370) - DAT_00406370;
        puVar6 = (undefined4 *)(DAT_00406370 * 0xc + 0x406300);
        do {
          *puVar6 = 0;
          puVar6 = puVar6 + 3;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      uVar2 = DAT_0040637c;
      iVar7 = *piVar4;
      if (iVar7 == -0x3fffff72) {
        DAT_0040637c = 0x83;
      }
      else {
        if (iVar7 == -0x3fffff70) {
          DAT_0040637c = 0x81;
        }
        else {
          if (iVar7 == -0x3fffff6f) {
            DAT_0040637c = 0x84;
          }
          else {
            if (iVar7 == -0x3fffff6d) {
              DAT_0040637c = 0x85;
            }
            else {
              if (iVar7 == -0x3fffff73) {
                DAT_0040637c = 0x82;
              }
              else {
                if (iVar7 == -0x3fffff71) {
                  DAT_0040637c = 0x86;
                }
                else {
                  if (iVar7 == -0x3fffff6e) {
                    DAT_0040637c = 0x8a;
                  }
                }
              }
            }
          }
        }
      }
      (*pcVar1)(8,DAT_0040637c);
      DAT_0040637c = uVar2;
      DAT_00408960 = (_EXCEPTION_POINTERS *)uVar3;
      return -1;
    }
    piVar4[2] = 0;
    (*pcVar1)(piVar4[1]);
    DAT_00408960 = (_EXCEPTION_POINTERS *)uVar3;
    return -1;
  }
  return -1;
}



int * __cdecl FUN_00402150(int param_1)

{
  int *piVar1;
  
  piVar1 = &DAT_004062f8;
  if (DAT_004062f8 != param_1) {
    do {
      piVar1 = piVar1 + 3;
      if (&DAT_004062f8 + DAT_00406378 * 3 <= piVar1) break;
    } while (*piVar1 != param_1);
  }
  if ((&DAT_004062f8 + DAT_00406378 * 3 <= piVar1) || (*piVar1 != param_1)) {
    piVar1 = (int *)0x0;
  }
  return piVar1;
}



void FUN_004021a0(void)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  char *pcVar10;
  char *pcVar11;
  undefined4 *puVar12;
  int *local_4;
  
  cVar2 = *DAT_004088f8;
  iVar7 = 0;
  pcVar6 = DAT_004088f8;
  while (cVar2 != '\0') {
    if (cVar2 != '=') {
      iVar7 = iVar7 + 1;
    }
    uVar3 = 0xffffffff;
    pcVar10 = pcVar6;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    cVar2 = pcVar6[~uVar3];
    pcVar6 = pcVar6 + ~uVar3;
  }
  piVar9 = (int *)FUN_00402fb0(iVar7 * 4 + 4);
  DAT_0040893c = piVar9;
  if (piVar9 == (int *)0x0) {
    __amsg_exit(9);
  }
  cVar2 = *DAT_004088f8;
  local_4 = piVar9;
  pcVar6 = DAT_004088f8;
  do {
    if (cVar2 == '\0') {
      FUN_00403590(DAT_004088f8);
      DAT_004088f8 = (char *)0x0;
      *piVar9 = 0;
      return;
    }
    uVar3 = 0xffffffff;
    pcVar10 = pcVar6;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    if (cVar2 != '=') {
      iVar7 = FUN_00402fb0(uVar3);
      *piVar9 = iVar7;
      if (iVar7 == 0) {
        __amsg_exit(9);
      }
      uVar4 = 0xffffffff;
      pcVar10 = pcVar6;
      do {
        pcVar11 = pcVar10;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar11 = pcVar10 + 1;
        cVar2 = *pcVar10;
        pcVar10 = pcVar11;
      } while (cVar2 != '\0');
      uVar4 = ~uVar4;
      uVar5 = uVar4 >> 2;
      puVar8 = (undefined4 *)(pcVar11 + -uVar4);
      puVar12 = (undefined4 *)*local_4;
      while (uVar5 != 0) {
        uVar5 = uVar5 - 1;
        *puVar12 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar12 = puVar12 + 1;
      }
      uVar4 = uVar4 & 3;
      piVar9 = local_4 + 1;
      while (local_4 = piVar9, uVar4 != 0) {
        uVar4 = uVar4 - 1;
        *(undefined *)puVar12 = *(undefined *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar12 = (undefined4 *)((int)puVar12 + 1);
      }
    }
    cVar2 = pcVar6[uVar3];
    pcVar6 = pcVar6 + uVar3;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00402290(void)

{
  byte **ppbVar1;
  byte *pbVar2;
  int local_8;
  int local_4;
  
  GetModuleFileNameA((HMODULE)0x0,&DAT_00408968,0x104);
  _DAT_0040894c = &DAT_00408968;
  pbVar2 = DAT_00409d04;
  if (*DAT_00409d04 == 0) {
    pbVar2 = &DAT_00408968;
  }
  FUN_00402330(pbVar2,(byte **)0x0,(byte *)0x0,&local_8,&local_4);
  ppbVar1 = (byte **)FUN_00402fb0(local_4 + local_8 * 4);
  if (ppbVar1 == (byte **)0x0) {
    __amsg_exit(8);
  }
  FUN_00402330(pbVar2,ppbVar1,(byte *)(ppbVar1 + local_8),&local_8,&local_4);
  DAT_00408930 = local_8 + -1;
  DAT_00408934 = ppbVar1;
  return;
}



void __cdecl FUN_00402330(byte *param_1,byte **param_2,byte *param_3,int *param_4,int *param_5)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int *piVar5;
  byte *pbVar6;
  uint uVar7;
  
  piVar5 = param_5;
  *param_5 = 0;
  *param_4 = 1;
  if (param_2 != (byte **)0x0) {
    *param_2 = param_3;
    param_2 = param_2 + 1;
  }
  if (*param_1 == 0x22) {
    bVar1 = param_1[1];
    pbVar6 = param_1 + 1;
    while ((bVar1 != 0x22 && (bVar1 != 0))) {
      if (((*(byte *)((int)&DAT_00408a78 + (uint)bVar1 + 1) & 4) != 0) &&
         (*param_5 = *param_5 + 1, param_3 != (byte *)0x0)) {
        *param_3 = *pbVar6;
        param_3 = param_3 + 1;
        pbVar6 = pbVar6 + 1;
      }
      *param_5 = *param_5 + 1;
      if (param_3 != (byte *)0x0) {
        *param_3 = *pbVar6;
        param_3 = param_3 + 1;
      }
      bVar1 = pbVar6[1];
      pbVar6 = pbVar6 + 1;
    }
    *param_5 = *param_5 + 1;
    if (param_3 != (byte *)0x0) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    if (*pbVar6 == 0x22) {
      pbVar6 = pbVar6 + 1;
    }
  }
  else {
    do {
      *piVar5 = *piVar5 + 1;
      if (param_3 != (byte *)0x0) {
        *param_3 = *param_1;
        param_3 = param_3 + 1;
      }
      bVar1 = *param_1;
      pbVar6 = param_1 + 1;
      param_5 = (int *)(uint)bVar1;
      if ((*(byte *)((int)param_5 + 0x408a79) & 4) != 0) {
        *piVar5 = *piVar5 + 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = *pbVar6;
          param_3 = param_3 + 1;
        }
        pbVar6 = param_1 + 2;
      }
      if (bVar1 == 0x20) break;
      if (bVar1 == 0) goto LAB_00402409;
      param_1 = pbVar6;
    } while (bVar1 != 9);
    if (bVar1 == 0) {
LAB_00402409:
      pbVar6 = pbVar6 + -1;
    }
    else {
      if (param_3 != (byte *)0x0) {
        param_3[-1] = 0;
      }
    }
  }
  bVar3 = false;
  bVar4 = false;
  while (*pbVar6 != 0) {
    while ((*pbVar6 == 0x20 || (*pbVar6 == 9))) {
      pbVar6 = pbVar6 + 1;
    }
    if (*pbVar6 == 0) break;
    if (param_2 != (byte **)0x0) {
      *param_2 = param_3;
      param_2 = param_2 + 1;
    }
    *param_4 = *param_4 + 1;
    while( true ) {
      bVar1 = *pbVar6;
      uVar7 = 0;
      bVar2 = true;
      while (bVar1 == 0x5c) {
        bVar1 = pbVar6[1];
        pbVar6 = pbVar6 + 1;
        uVar7 = uVar7 + 1;
      }
      if (*pbVar6 == 0x22) {
        if ((uVar7 & 1) == 0) {
          if ((bVar3) && (pbVar6[1] == 0x22)) {
            pbVar6 = pbVar6 + 1;
          }
          else {
            bVar2 = false;
          }
          bVar3 = !bVar4;
          bVar4 = bVar3;
        }
        uVar7 = uVar7 >> 1;
      }
      while (uVar7 != 0) {
        if (param_3 != (byte *)0x0) {
          *param_3 = 0x5c;
          param_3 = param_3 + 1;
        }
        uVar7 = uVar7 - 1;
        *piVar5 = *piVar5 + 1;
      }
      bVar1 = *pbVar6;
      if ((bVar1 == 0) || ((!bVar3 && ((bVar1 == 0x20 || (bVar1 == 9)))))) break;
      if (bVar2) {
        if (param_3 == (byte *)0x0) {
          if ((*(byte *)((int)&DAT_00408a78 + (uint)bVar1 + 1) & 4) != 0) {
            pbVar6 = pbVar6 + 1;
            *piVar5 = *piVar5 + 1;
          }
          *piVar5 = *piVar5 + 1;
          goto LAB_00402505;
        }
        if ((*(byte *)((int)&DAT_00408a78 + (uint)bVar1 + 1) & 4) != 0) {
          *param_3 = bVar1;
          param_3 = param_3 + 1;
          pbVar6 = pbVar6 + 1;
          *piVar5 = *piVar5 + 1;
        }
        *param_3 = *pbVar6;
        param_3 = param_3 + 1;
        *piVar5 = *piVar5 + 1;
        pbVar6 = pbVar6 + 1;
      }
      else {
LAB_00402505:
        pbVar6 = pbVar6 + 1;
      }
    }
    if (param_3 != (byte *)0x0) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    *piVar5 = *piVar5 + 1;
  }
  if (param_2 != (byte **)0x0) {
    *param_2 = (byte *)0x0;
  }
  *param_4 = *param_4 + 1;
  return;
}



undefined4 * FUN_00402540(void)

{
  char cVar1;
  WCHAR WVar2;
  WCHAR *pWVar3;
  int cchWideChar;
  uint cbMultiByte;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *lpMultiByteStr;
  LPWCH lpWideCharStr;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  lpWideCharStr = (LPWCH)0x0;
  lpMultiByteStr = (undefined4 *)0x0;
  if (DAT_00408a70 == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr == (LPWCH)0x0) {
      lpMultiByteStr = (undefined4 *)GetEnvironmentStrings();
      if (lpMultiByteStr == (undefined4 *)0x0) {
        return (undefined4 *)0x0;
      }
      DAT_00408a70 = 2;
    }
    else {
      DAT_00408a70 = 1;
    }
  }
  if (DAT_00408a70 == 1) {
    if ((lpWideCharStr != (LPWCH)0x0) ||
       (lpWideCharStr = GetEnvironmentStringsW(), lpWideCharStr != (LPWCH)0x0)) {
      WVar2 = *lpWideCharStr;
      pWVar3 = lpWideCharStr;
      while (WVar2 != L'\0') {
        do {
          pWVar3 = pWVar3;
          pWVar3 = pWVar3 + 1;
        } while (*pWVar3 != L'\0');
        pWVar3 = pWVar3 + 2;
        WVar2 = *pWVar3;
      }
      cchWideChar = ((int)((int)pWVar3 - (int)lpWideCharStr) >> 1) + 1;
      cbMultiByte = WideCharToMultiByte(0,0,lpWideCharStr,cchWideChar,(LPSTR)0x0,0,(LPCSTR)0x0,
                                        (LPBOOL)0x0);
      if ((cbMultiByte != 0) &&
         (lpMultiByteStr = (undefined4 *)FUN_00402fb0(cbMultiByte),
         lpMultiByteStr != (undefined4 *)0x0)) {
        cchWideChar = WideCharToMultiByte(0,0,lpWideCharStr,cchWideChar,(LPSTR)lpMultiByteStr,
                                          cbMultiByte,(LPCSTR)0x0,(LPBOOL)0x0);
        if (cchWideChar == 0) {
          FUN_00403590((undefined *)lpMultiByteStr);
          lpMultiByteStr = (undefined4 *)0x0;
        }
        FreeEnvironmentStringsW(lpWideCharStr);
        return lpMultiByteStr;
      }
      FreeEnvironmentStringsW(lpWideCharStr);
      return (undefined4 *)0x0;
    }
  }
  else {
    if ((DAT_00408a70 == 2) &&
       ((lpMultiByteStr != (undefined4 *)0x0 ||
        (lpMultiByteStr = (undefined4 *)GetEnvironmentStrings(), lpMultiByteStr != (undefined4 *)0x0
        )))) {
      cVar1 = *(char *)lpMultiByteStr;
      puVar4 = lpMultiByteStr;
      while (cVar1 != '\0') {
        do {
          puVar6 = puVar4;
          puVar4 = (undefined4 *)((int)puVar6 + 1);
        } while (*(char *)((int)puVar6 + 1) != '\0');
        cVar1 = *(char *)((int)puVar6 + 2);
        puVar4 = (undefined4 *)((int)puVar6 + 2);
      }
      cbMultiByte = (int)puVar4 + (1 - (int)lpMultiByteStr);
      puVar4 = (undefined4 *)FUN_00402fb0(cbMultiByte);
      if (puVar4 != (undefined4 *)0x0) {
        uVar5 = cbMultiByte >> 2;
        puVar6 = lpMultiByteStr;
        puVar7 = puVar4;
        while (uVar5 != 0) {
          uVar5 = uVar5 - 1;
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        cbMultiByte = cbMultiByte & 3;
        while (cbMultiByte != 0) {
          cbMultiByte = cbMultiByte - 1;
          *(undefined *)puVar7 = *(undefined *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        }
        FreeEnvironmentStringsA((LPCH)lpMultiByteStr);
        return puVar4;
      }
      FreeEnvironmentStringsA((LPCH)lpMultiByteStr);
      return (undefined4 *)0x0;
    }
  }
  return (undefined4 *)0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 __cdecl FUN_004026a0(int param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  UINT CodePage;
  UINT *pUVar4;
  BOOL BVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined4 *puVar12;
  _cpinfo local_14;
  
  CodePage = FUN_00402890(param_1);
  if (CodePage == DAT_00408b7c) {
    return 0;
  }
  if (CodePage == 0) {
    FUN_00402940();
    return 0;
  }
  iVar9 = 0;
  pUVar4 = &DAT_00406388;
  do {
    if (*pUVar4 == CodePage) {
      iVar8 = 0x40;
      puVar12 = &DAT_00408a78;
      while (iVar8 != 0) {
        iVar8 = iVar8 + -1;
        *puVar12 = 0;
        puVar12 = puVar12 + 1;
      }
      *(undefined *)puVar12 = 0;
      uVar6 = 0;
      pbVar10 = &DAT_00406398 + iVar9 * 0x30;
      do {
        bVar2 = *pbVar10;
        pbVar11 = pbVar10;
        while ((bVar2 != 0 && (bVar2 = pbVar11[1], bVar2 != 0))) {
          uVar7 = (uint)*pbVar11;
          if (uVar7 <= bVar2) {
            bVar3 = (&DAT_00406380)[uVar6];
            do {
              pbVar1 = (byte *)((int)&DAT_00408a78 + uVar7 + 1);
              *pbVar1 = *pbVar1 | bVar3;
              uVar7 = uVar7 + 1;
            } while (uVar7 <= bVar2);
          }
          bVar2 = pbVar11[2];
          pbVar11 = pbVar11 + 2;
        }
        uVar6 = uVar6 + 1;
        pbVar10 = pbVar10 + 8;
      } while (uVar6 < 4);
      DAT_00408b7c = CodePage;
      _DAT_00408b80 = FUN_004028e0(CodePage);
      _DAT_00408b88 = (&DAT_0040638c)[iVar9 * 0xc];
      _DAT_00408b8c = (&DAT_00406390)[iVar9 * 0xc];
      _DAT_00408b90 = (&DAT_00406394)[iVar9 * 0xc];
      return 0;
    }
    pUVar4 = pUVar4 + 0xc;
    iVar9 = iVar9 + 1;
  } while (pUVar4 < &DAT_00406478);
  BVar5 = GetCPInfo(CodePage,(LPCPINFO)&local_14);
  if (BVar5 != 1) {
    if (_DAT_00408b94 == 0) {
      return 0xffffffff;
    }
    FUN_00402940();
    return 0;
  }
  iVar9 = 0x40;
  puVar12 = &DAT_00408a78;
  while (iVar9 != 0) {
    iVar9 = iVar9 + -1;
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
  }
  *(undefined *)puVar12 = 0;
  if (local_14.MaxCharSize < 2) {
    DAT_00408b7c = 0;
    _DAT_00408b80 = 0;
  }
  else {
    if (local_14.LeadByte[0] != '\0') {
      pbVar10 = local_14.LeadByte + 1;
      do {
        bVar2 = *pbVar10;
        if (bVar2 == 0) break;
        uVar6 = (uint)pbVar10[-1];
        while (uVar6 <= bVar2) {
          *(byte *)((int)&DAT_00408a78 + uVar6 + 1) = *(byte *)((int)&DAT_00408a78 + uVar6 + 1) | 4;
          uVar6 = uVar6 + 1;
        }
        pbVar11 = pbVar10 + 1;
        pbVar10 = pbVar10 + 2;
      } while (*pbVar11 != 0);
    }
    uVar6 = 1;
    do {
      *(byte *)((int)&DAT_00408a78 + uVar6 + 1) = *(byte *)((int)&DAT_00408a78 + uVar6 + 1) | 8;
      uVar6 = uVar6 + 1;
    } while (uVar6 < 0xff);
    DAT_00408b7c = CodePage;
    _DAT_00408b80 = FUN_004028e0(CodePage);
  }
  _DAT_00408b88 = 0;
  _DAT_00408b8c = 0;
  _DAT_00408b90 = 0;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

UINT __cdecl FUN_00402890(int param_1)

{
  UINT UVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    _DAT_00408b94 = 1;
                    // WARNING: Could not recover jumptable at 0x004028ad. Too many branches
                    // WARNING: Treating indirect jump as call
    UVar1 = GetOEMCP();
    return UVar1;
  }
  if (param_1 == -3) {
    _DAT_00408b94 = 1;
                    // WARNING: Could not recover jumptable at 0x004028c2. Too many branches
                    // WARNING: Treating indirect jump as call
    UVar1 = GetACP();
    return UVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_00408bb8;
  }
  _DAT_00408b94 = (uint)bVar2;
  return param_1;
}



undefined4 __cdecl FUN_004028e0(undefined4 param_1)

{
  switch(param_1) {
  case 0x3a4:
    return 0x411;
  default:
    return 0;
  case 0x3a8:
    return 0x804;
  case 0x3b5:
    return 0x412;
  case 0x3b6:
    return 0x404;
  }
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00402940(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0x40;
  puVar2 = &DAT_00408a78;
  while (iVar1 != 0) {
    iVar1 = iVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined *)puVar2 = 0;
  DAT_00408b7c = 0;
  _DAT_00408b80 = 0;
  _DAT_00408b88 = 0;
  _DAT_00408b8c = 0;
  _DAT_00408b90 = 0;
  return;
}



void FUN_00402970(void)

{
  FUN_004026a0(-3);
  return;
}



void FUN_00402980(void)

{
  byte bVar1;
  undefined4 *puVar2;
  DWORD nStdHandle;
  HANDLE hFile;
  int iVar3;
  HANDLE *ppvVar4;
  int *piVar5;
  uint uVar6;
  UINT local_48;
  _STARTUPINFOA local_44;
  
  puVar2 = (undefined4 *)FUN_00402fb0(0x100);
  if (puVar2 == (undefined4 *)0x0) {
    __amsg_exit(0x1b);
  }
  DAT_00408ce0 = 0x20;
  DAT_00408be0 = puVar2;
  if (puVar2 < puVar2 + 0x40) {
    do {
      *(undefined *)(puVar2 + 1) = 0;
      *puVar2 = 0xffffffff;
      *(undefined *)((int)puVar2 + 5) = 10;
      puVar2 = puVar2 + 2;
    } while (puVar2 < DAT_00408be0 + 0x40);
  }
  GetStartupInfoA((LPSTARTUPINFOA)&local_44);
  if ((local_44.cbReserved2 != 0) && (local_44.lpReserved2 != (UINT *)0x0)) {
    local_48 = *local_44.lpReserved2;
    local_44.lpReserved2 = local_44.lpReserved2 + 1;
    ppvVar4 = (HANDLE *)((int)local_44.lpReserved2 + local_48);
    if (0x7ff < (int)local_48) {
      local_48 = 0x800;
    }
    if ((int)DAT_00408ce0 < (int)local_48) {
      piVar5 = &DAT_00408be4;
      do {
        puVar2 = (undefined4 *)FUN_00402fb0(0x100);
        if (puVar2 == (undefined4 *)0x0) {
          local_48 = DAT_00408ce0;
          break;
        }
        *(undefined4 **)piVar5 = puVar2;
        DAT_00408ce0 = DAT_00408ce0 + 0x20;
        if (puVar2 < puVar2 + 0x40) {
          do {
            *(undefined *)(puVar2 + 1) = 0;
            *puVar2 = 0xffffffff;
            *(undefined *)((int)puVar2 + 5) = 10;
            puVar2 = puVar2 + 2;
          } while (puVar2 < (undefined4 *)(*piVar5 + 0x100));
        }
        piVar5 = piVar5 + 1;
      } while ((int)DAT_00408ce0 < (int)local_48);
    }
    uVar6 = 0;
    if (0 < (int)local_48) {
      do {
        if (((*ppvVar4 != (HANDLE)0xffffffff) && ((*(byte *)local_44.lpReserved2 & 1) != 0)) &&
           (((*(byte *)local_44.lpReserved2 & 8) != 0 ||
            (nStdHandle = GetFileType(*ppvVar4), nStdHandle != 0)))) {
          iVar3 = (&DAT_00408be0)[(int)uVar6 >> 5];
          *(HANDLE *)(iVar3 + (uVar6 & 0x1f) * 8) = *ppvVar4;
          *(byte *)(iVar3 + (uVar6 & 0x1f) * 8 + 4) = *(byte *)local_44.lpReserved2;
        }
        uVar6 = uVar6 + 1;
        local_44.lpReserved2 = (UINT *)((int)local_44.lpReserved2 + 1);
        ppvVar4 = ppvVar4 + 1;
      } while ((int)uVar6 < (int)local_48);
    }
  }
  iVar3 = 0;
  do {
    ppvVar4 = (HANDLE *)(DAT_00408be0 + iVar3 * 2);
    if (DAT_00408be0[iVar3 * 2] == -1) {
      *(undefined *)(ppvVar4 + 1) = 0x81;
      if (iVar3 == 0) {
        nStdHandle = 0xfffffff6;
      }
      else {
        nStdHandle = 0xfffffff5 - (uint)(iVar3 != 1);
      }
      hFile = GetStdHandle(nStdHandle);
      if ((hFile == (HANDLE)0xffffffff) || (nStdHandle = GetFileType(hFile), nStdHandle == 0)) {
        bVar1 = *(byte *)(ppvVar4 + 1) | 0x40;
        goto LAB_00402b5b;
      }
      *ppvVar4 = hFile;
      if ((nStdHandle & 0xff) == 2) {
        bVar1 = *(byte *)(ppvVar4 + 1) | 0x40;
        goto LAB_00402b5b;
      }
      if ((nStdHandle & 0xff) == 3) {
        bVar1 = *(byte *)(ppvVar4 + 1) | 8;
        goto LAB_00402b5b;
      }
    }
    else {
      bVar1 = *(byte *)(ppvVar4 + 1) | 0x80;
LAB_00402b5b:
      *(byte *)(ppvVar4 + 1) = bVar1;
    }
    iVar3 = iVar3 + 1;
    if (2 < iVar3) {
      SetHandleCount(DAT_00408ce0);
      return;
    }
  } while( true );
}



undefined4 FUN_00402b80(void)

{
  undefined **ppuVar1;
  
  DAT_00408bd4 = HeapCreate(1,0x1000,0);
  if (DAT_00408bd4 == (HANDLE)0x0) {
    return 0;
  }
  ppuVar1 = FUN_004035e0();
  if (ppuVar1 == (undefined **)0x0) {
    HeapDestroy(DAT_00408bd4);
    return 0;
  }
  return 1;
}



// Library Function - Single Match
// Name: __global_unwind2
// Library: Visual Studio

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x402bd8,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



// Library Function - Single Match
// Name: __local_unwind2
// Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release, Visual Studio 2003 Debug, Visual
// Studio 2003 Release

void __cdecl __local_unwind2(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack28;
  undefined *puStack24;
  undefined4 local_14;
  int iStack16;
  
  iStack16 = param_1;
  puStack24 = &LAB_00402be0;
  uStack28 = *in_FS_OFFSET;
  *(undefined4 **)in_FS_OFFSET = &uStack28;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == -1) || (iVar2 == param_2)) break;
    local_14 = *(undefined4 *)(iVar1 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_14;
    if (*(int *)(iVar1 + 4 + iVar2 * 0xc) == 0) {
      FUN_00402c96(0x101);
      (**(code **)(iVar1 + 8 + iVar2 * 0xc))();
    }
  }
  *in_FS_OFFSET = uStack28;
  return;
}



void FUN_00402c96(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  
  DAT_00406488 = in_EAX;
  DAT_0040648c = *(undefined4 *)(unaff_EBP + 8);
  DAT_00406490 = unaff_EBP;
  return;
}



void FUN_00402d75(int param_1)

{
  __local_unwind2(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00402d90(void)

{
  if ((DAT_00408900 == 1) || ((DAT_00408900 == 0 && (_DAT_0040606c == 1)))) {
    FUN_00402dd0(0xfc);
    if (DAT_00408b98 != (code *)0x0) {
      (*DAT_00408b98)();
    }
    FUN_00402dd0(0xff);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl FUN_00402dd0(int param_1)

{
  char cVar1;
  int *piVar2;
  DWORD DVar3;
  HANDLE hFile;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *_Dest;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  char *lpBuffer;
  char *pcVar10;
  DWORD local_1a8;
  undefined4 local_1a4 [25];
  undefined4 auStack320 [15];
  undefined4 local_104;
  
  piVar2 = &DAT_00406498;
  iVar7 = 0;
  do {
    if (param_1 == *piVar2) break;
    piVar2 = piVar2 + 2;
    iVar7 = iVar7 + 1;
  } while (piVar2 < &DAT_00406528);
  if (param_1 == (&DAT_00406498)[iVar7 * 2]) {
    if ((DAT_00408900 == 1) || ((DAT_00408900 == 0 && (_DAT_0040606c == 1)))) {
      if ((DAT_00408be0 == 0) ||
         (hFile = *(HANDLE *)(DAT_00408be0 + 0x10), hFile == (HANDLE)0xffffffff)) {
        hFile = GetStdHandle(0xfffffff4);
      }
      lpBuffer = *(char **)(iVar7 * 8 + 0x40649c);
      uVar5 = 0xffffffff;
      pcVar10 = lpBuffer;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      WriteFile(hFile,lpBuffer,~uVar5 - 1,&local_1a8,(LPOVERLAPPED)0x0);
    }
    else {
      if (param_1 != 0xfc) {
        DVar3 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)&local_104,0x104);
        if (DVar3 == 0) {
          iVar4 = 5;
          _Dest = (undefined4 *)"<program name unknown>";
          puVar8 = &local_104;
          while (iVar4 != 0) {
            iVar4 = iVar4 + -1;
            *puVar8 = *_Dest;
            _Dest = _Dest + 1;
            puVar8 = puVar8 + 1;
          }
          *(undefined2 *)puVar8 = *(undefined2 *)_Dest;
          *(undefined *)((int)puVar8 + 2) = *(undefined *)((int)_Dest + 2);
        }
        uVar5 = 0xffffffff;
        _Dest = &local_104;
        puVar8 = &local_104;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *(char *)puVar8;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        } while (cVar1 != '\0');
        if (0x3c < ~uVar5) {
          uVar5 = 0xffffffff;
          _Dest = &local_104;
          do {
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            cVar1 = *(char *)_Dest;
            _Dest = (undefined4 *)((int)_Dest + 1);
          } while (cVar1 != '\0');
          _Dest = (undefined4 *)((int)auStack320 + ~uVar5);
          _strncpy((char *)_Dest,"...",3);
        }
        iVar4 = 6;
        puVar8 = (undefined4 *)"Runtime Error!\n\nProgram: ";
        puVar9 = local_1a4;
        while (iVar4 != 0) {
          iVar4 = iVar4 + -1;
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
        *(undefined2 *)puVar9 = *(undefined2 *)puVar8;
        uVar5 = 0xffffffff;
        do {
          puVar8 = _Dest;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          puVar8 = (undefined4 *)((int)_Dest + 1);
          cVar1 = *(char *)_Dest;
          _Dest = puVar8;
        } while (cVar1 != '\0');
        uVar5 = ~uVar5;
        iVar4 = -1;
        _Dest = local_1a4;
        do {
          puVar9 = _Dest;
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          puVar9 = (undefined4 *)((int)_Dest + 1);
          cVar1 = *(char *)_Dest;
          _Dest = puVar9;
        } while (cVar1 != '\0');
        uVar6 = uVar5 >> 2;
        _Dest = (undefined4 *)((int)puVar8 - uVar5);
        puVar8 = (undefined4 *)((int)puVar9 + -1);
        while (uVar6 != 0) {
          uVar6 = uVar6 - 1;
          *puVar8 = *_Dest;
          _Dest = _Dest + 1;
          puVar8 = puVar8 + 1;
        }
        uVar5 = uVar5 & 3;
        while (uVar5 != 0) {
          uVar5 = uVar5 - 1;
          *(undefined *)puVar8 = *(undefined *)_Dest;
          _Dest = (undefined4 *)((int)_Dest + 1);
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
        uVar5 = 0xffffffff;
        lpBuffer = "\n\n";
        do {
          pcVar10 = lpBuffer;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar10 = lpBuffer + 1;
          cVar1 = *lpBuffer;
          lpBuffer = pcVar10;
        } while (cVar1 != '\0');
        uVar5 = ~uVar5;
        iVar4 = -1;
        _Dest = local_1a4;
        do {
          puVar8 = _Dest;
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          puVar8 = (undefined4 *)((int)_Dest + 1);
          cVar1 = *(char *)_Dest;
          _Dest = puVar8;
        } while (cVar1 != '\0');
        uVar6 = uVar5 >> 2;
        _Dest = (undefined4 *)(pcVar10 + -uVar5);
        puVar8 = (undefined4 *)((int)puVar8 + -1);
        while (uVar6 != 0) {
          uVar6 = uVar6 - 1;
          *puVar8 = *_Dest;
          _Dest = _Dest + 1;
          puVar8 = puVar8 + 1;
        }
        uVar5 = uVar5 & 3;
        while (uVar5 != 0) {
          uVar5 = uVar5 - 1;
          *(undefined *)puVar8 = *(undefined *)_Dest;
          _Dest = (undefined4 *)((int)_Dest + 1);
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
        uVar5 = 0xffffffff;
        lpBuffer = *(char **)(iVar7 * 8 + 0x40649c);
        do {
          pcVar10 = lpBuffer;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar10 = lpBuffer + 1;
          cVar1 = *lpBuffer;
          lpBuffer = pcVar10;
        } while (cVar1 != '\0');
        uVar5 = ~uVar5;
        iVar7 = -1;
        _Dest = local_1a4;
        do {
          puVar8 = _Dest;
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          puVar8 = (undefined4 *)((int)_Dest + 1);
          cVar1 = *(char *)_Dest;
          _Dest = puVar8;
        } while (cVar1 != '\0');
        uVar6 = uVar5 >> 2;
        _Dest = (undefined4 *)(pcVar10 + -uVar5);
        puVar8 = (undefined4 *)((int)puVar8 + -1);
        while (uVar6 != 0) {
          uVar6 = uVar6 - 1;
          *puVar8 = *_Dest;
          _Dest = _Dest + 1;
          puVar8 = puVar8 + 1;
        }
        uVar5 = uVar5 & 3;
        while (uVar5 != 0) {
          uVar5 = uVar5 - 1;
          *(undefined *)puVar8 = *(undefined *)_Dest;
          _Dest = (undefined4 *)((int)_Dest + 1);
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
        FUN_00403d00(local_1a4,"Microsoft Visual C++ Runtime Library",0x12010);
        return;
      }
    }
  }
  return;
}



void __cdecl FUN_00402fb0(uint param_1)

{
  FUN_00402fd0(param_1,DAT_00408bcc);
  return;
}



int __cdecl FUN_00402fd0(uint param_1,int param_2)

{
  int iVar1;
  
  if (param_1 < 0xffffffe1) {
    if (param_1 == 0) {
      param_1 = 1;
    }
    do {
      if (param_1 < 0xffffffe1) {
        iVar1 = FUN_00403020(param_1);
      }
      else {
        iVar1 = 0;
      }
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_2 == 0) {
        return 0;
      }
      iVar1 = FUN_00403e90(param_1);
    } while (iVar1 != 0);
  }
  return 0;
}



void __cdecl FUN_00403020(int param_1)

{
  int *piVar1;
  uint dwBytes;
  
  dwBytes = param_1 + 0xfU & 0xfffffff0;
  if ((dwBytes <= DAT_00408774) &&
     (piVar1 = FUN_00403940((int *)(param_1 + 0xfU >> 4)), piVar1 != (int *)0x0)) {
    return;
  }
  HeapAlloc(DAT_00408bd4,0,dwBytes);
  return;
}



uint __cdecl FUN_00403060(uint param_1)

{
  if (DAT_00408ce0 <= param_1) {
    return 0;
  }
  return (uint)*(byte *)((&DAT_00408be0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 8) & 0x40;
}



undefined4 __cdecl FUN_004030e0(int *param_1)

{
  uint uVar1;
  char *pcVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  uVar3 = 0;
  if ((((byte)param_1[3] & 3) == 2) && ((param_1[3] & 0x108U) != 0)) {
    pcVar4 = (char *)(*param_1 - (int)(char *)param_1[2]);
    if (0 < (int)pcVar4) {
      pcVar2 = (char *)FUN_00403f10(param_1[4],(char *)param_1[2],pcVar4);
      uVar1 = param_1[3];
      if (pcVar2 == pcVar4) {
        if ((uVar1 & 0x80) != 0) {
          param_1[1] = 0;
          param_1[3] = uVar1 & 0xfffffffd;
          *param_1 = param_1[2];
          return 0;
        }
      }
      else {
        uVar3 = 0xffffffff;
        param_1[3] = uVar1 | 0x20;
      }
    }
  }
  param_1[1] = 0;
  *param_1 = param_1[2];
  return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

LPSTR __cdecl FUN_004031e0(LPSTR param_1,ushort param_2)

{
  LPSTR lpMultiByteStr;
  
  lpMultiByteStr = param_1;
  if (param_1 == (LPSTR)0x0) {
    return param_1;
  }
  if (DAT_00408ba8 == 0) {
    if (param_2 < 0x100) {
      *param_1 = (CHAR)param_2;
      return (LPSTR)0x1;
    }
  }
  else {
    param_1 = (LPSTR)0x0;
    lpMultiByteStr =
         (LPSTR)WideCharToMultiByte(DAT_00408bb8,0x220,(LPCWSTR)&param_2,1,lpMultiByteStr,
                                    DAT_00408780,(LPCSTR)0x0,(LPBOOL)&param_1);
    if ((lpMultiByteStr != (LPSTR)0x0) && (param_1 == (LPSTR)0x0)) {
      return lpMultiByteStr;
    }
  }
  _DAT_00408914 = 0x2a;
  return (LPSTR)0xffffffff;
}



// Library Function - Single Match
// Name: __aulldiv
// Library: Visual Studio

undefined8 __aulldiv(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar3 = param_1;
  uVar8 = param_4;
  uVar6 = param_2;
  uVar9 = param_3;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar5 = uVar8 >> 1;
      uVar9 = uVar9 >> 1 | (uint)((uVar8 & 1) != 0) << 0x1f;
      uVar7 = uVar6 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar6 & 1) != 0) << 0x1f;
      uVar8 = uVar5;
      uVar6 = uVar7;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar7,uVar3) / (ulonglong)uVar9;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar8 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar8)) ||
       ((param_2 <= uVar8 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  return CONCAT44(uVar3,iVar4);
}



// Library Function - Single Match
// Name: __aullrem
// Library: Visual Studio

undefined8 __aullrem(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  uVar3 = param_1;
  uVar4 = param_4;
  uVar9 = param_2;
  uVar10 = param_3;
  if (param_4 == 0) {
    iVar6 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) %
                 (ulonglong)param_3);
    iVar7 = 0;
  }
  else {
    do {
      uVar5 = uVar4 >> 1;
      uVar10 = uVar10 >> 1 | (uint)((uVar4 & 1) != 0) << 0x1f;
      uVar8 = uVar9 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar9 & 1) != 0) << 0x1f;
      uVar4 = uVar5;
      uVar9 = uVar8;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar8,uVar3) / (ulonglong)uVar10;
    uVar3 = (int)uVar1 * param_4;
    lVar2 = (uVar1 & 0xffffffff) * (ulonglong)param_3;
    uVar9 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar4 = (uint)lVar2;
    uVar10 = uVar9 + uVar3;
    if (((CARRY4(uVar9,uVar3)) || (param_2 < uVar10)) || ((param_2 <= uVar10 && (param_1 < uVar4))))
    {
      bVar11 = uVar4 < param_3;
      uVar4 = uVar4 - param_3;
      uVar10 = (uVar10 - param_4) - (uint)bVar11;
    }
    iVar6 = -(uVar4 - param_1);
    iVar7 = -(uint)(uVar4 - param_1 != 0) - ((uVar10 - param_2) - (uint)(uVar4 < param_1));
  }
  return CONCAT44(iVar7,iVar6);
}



uint __cdecl FUN_00403350(uint param_1,char **param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  undefined *puVar4;
  char *pcVar5;
  char *pcVar6;
  
  pcVar6 = param_2[3];
  pcVar1 = param_2[4];
  if ((((uint)pcVar6 & 0x82) == 0) || (((uint)pcVar6 & 0x40) != 0)) {
LAB_00403470:
    param_2[3] = (char *)((uint)pcVar6 | 0x20);
    return 0xffffffff;
  }
  pcVar5 = (char *)0x0;
  if (((uint)pcVar6 & 1) != 0) {
    param_2[1] = (char *)0x0;
    if (((uint)pcVar6 & 0x10) == 0) goto LAB_00403470;
    *param_2 = param_2[2];
    param_2[3] = (char *)((uint)pcVar6 & 0xfffffffe);
  }
  pcVar6 = param_2[3];
  param_2[1] = (char *)0x0;
  param_2[3] = (char *)((uint)pcVar6 & 0xffffffef | 2);
  if (((uint)pcVar6 & 0x10c) == 0) {
    if ((param_2 == (char **)&DAT_00406098) || (param_2 == (char **)&DAT_004060b8)) {
      uVar3 = FUN_00403060((uint)pcVar1);
      if (uVar3 != 0) goto LAB_004033c3;
    }
    FUN_00404200((int *)param_2);
  }
LAB_004033c3:
  if (((uint)param_2[3] & 0x108) == 0) {
    pcVar6 = (char *)0x1;
    pcVar5 = (char *)FUN_00403f10((uint)pcVar1,(char *)&param_1,(char *)0x1);
  }
  else {
    pcVar2 = param_2[2];
    pcVar6 = *param_2 + -(int)pcVar2;
    *param_2 = pcVar2 + 1;
    param_2[1] = param_2[6] + -1;
    if ((int)pcVar6 < 1) {
      if (pcVar1 == (char *)0xffffffff) {
        puVar4 = &DAT_00406478;
      }
      else {
        puVar4 = (undefined *)((&DAT_00408be0)[(int)pcVar1 >> 5] + ((uint)pcVar1 & 0x1f) * 8);
      }
      if ((puVar4[4] & 0x20) != 0) {
        FUN_00404140((uint)pcVar1,0,2);
      }
      *param_2[2] = (char)param_1;
    }
    else {
      pcVar5 = (char *)FUN_00403f10((uint)pcVar1,pcVar2,pcVar6);
      *param_2[2] = (char)param_1;
    }
  }
  if (pcVar5 != pcVar6) {
    param_2[3] = (char *)((uint)param_2[3] | 0x20);
    return 0xffffffff;
  }
  return param_1 & 0xff;
}



int * __cdecl FUN_00403480(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint dwBytes;
  int *piVar4;
  
  dwBytes = param_2 * param_1;
  if (dwBytes < 0xffffffe1) {
    if (dwBytes == 0) {
      dwBytes = 0x10;
    }
    else {
      dwBytes = dwBytes + 0xf & 0xfffffff0;
    }
  }
  do {
    piVar3 = (int *)0x0;
    if (dwBytes < 0xffffffe1) {
      if (DAT_00408774 < dwBytes) {
LAB_004034e0:
        if (piVar3 != (int *)0x0) {
          return piVar3;
        }
      }
      else {
        piVar3 = FUN_00403940((int *)(dwBytes >> 4));
        if (piVar3 != (int *)0x0) {
          uVar2 = dwBytes >> 2;
          piVar4 = piVar3;
          while (uVar2 != 0) {
            uVar2 = uVar2 - 1;
            *piVar4 = 0;
            piVar4 = piVar4 + 1;
          }
          uVar2 = dwBytes & 3;
          while (uVar2 != 0) {
            uVar2 = uVar2 - 1;
            *(undefined *)piVar4 = 0;
            piVar4 = (int *)((int)piVar4 + 1);
          }
          goto LAB_004034e0;
        }
      }
      piVar3 = (int *)HeapAlloc(DAT_00408bd4,8,dwBytes);
    }
    if ((piVar3 != (int *)0x0) || (DAT_00408bcc == 0)) {
      return piVar3;
    }
    iVar1 = FUN_00403e90(dwBytes);
    if (iVar1 == 0) {
      return (int *)0x0;
    }
  } while( true );
}



void __cdecl FUN_00403590(undefined *param_1)

{
  undefined *lpMem;
  byte *pbVar1;
  int *local_4;
  
  lpMem = param_1;
  if (param_1 != (undefined *)0x0) {
    pbVar1 = (byte *)FUN_00403880(param_1,&local_4,(uint *)&param_1);
    if (pbVar1 != (byte *)0x0) {
      FUN_004038e0((int)local_4,(int)param_1,pbVar1);
      return;
    }
    HeapFree(DAT_00408bd4,0,lpMem);
  }
  return;
}



undefined ** FUN_004035e0(void)

{
  bool bVar1;
  LPVOID pvVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined **lpMem;
  undefined4 *lpAddress;
  undefined4 *puVar5;
  
  if (DAT_00406760 == -1) {
    lpMem = &PTR_LOOP_00406750;
  }
  else {
    lpMem = (undefined **)HeapAlloc(DAT_00408bd4,0,0x2020);
    if (lpMem == (undefined **)0x0) {
      return (undefined **)0x0;
    }
  }
  lpAddress = (undefined4 *)VirtualAlloc((LPVOID)0x0,0x400000,0x2000,4);
  if (lpAddress != (undefined4 *)0x0) {
    pvVar2 = VirtualAlloc(lpAddress,0x10000,0x1000,4);
    if (pvVar2 != (LPVOID)0x0) {
      if (lpMem == &PTR_LOOP_00406750) {
        if (PTR_LOOP_00406750 == (undefined **)0x0) {
          PTR_LOOP_00406750 = &PTR_LOOP_00406750;
        }
        if (PTR_LOOP_00406754 == (undefined **)0x0) {
          PTR_LOOP_00406754 = &PTR_LOOP_00406750;
        }
      }
      else {
        *(undefined ***)lpMem = &PTR_LOOP_00406750;
        *(undefined ***)(lpMem + 1) = PTR_LOOP_00406754;
        PTR_LOOP_00406754 = lpMem;
        *(undefined ***)lpMem[1] = lpMem;
      }
      *(undefined4 **)(lpMem + 5) = lpAddress + 0x100000;
      *(undefined4 **)(lpMem + 4) = lpAddress;
      *(undefined ***)(lpMem + 2) = lpMem + 6;
      *(undefined ***)(lpMem + 3) = lpMem + 0x26;
      iVar3 = 0;
      ppuVar4 = lpMem + 6;
      do {
        bVar1 = 0xf < iVar3;
        iVar3 = iVar3 + 1;
        *ppuVar4 = (undefined *)(((uint)bVar1 - 1 & 0xf1) - 1);
        ppuVar4[1] = (undefined *)0xf1;
        ppuVar4 = ppuVar4 + 2;
      } while (iVar3 < 0x400);
      iVar3 = 0x4000;
      puVar5 = lpAddress;
      while (iVar3 != 0) {
        iVar3 = iVar3 + -1;
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      if (lpAddress < lpMem[4] + 0x10000) {
        do {
          lpAddress[1] = 0xf0;
          *(undefined4 **)lpAddress = lpAddress + 2;
          *(undefined *)(lpAddress + 0x3e) = 0xff;
          lpAddress = lpAddress + 0x400;
        } while (lpAddress < lpMem[4] + 0x10000);
      }
      return lpMem;
    }
    VirtualFree(lpAddress,0,0x8000);
  }
  if (lpMem != &PTR_LOOP_00406750) {
    HeapFree(DAT_00408bd4,0,lpMem);
  }
  return (undefined **)0x0;
}



void __cdecl FUN_00403750(undefined **param_1)

{
  VirtualFree(param_1[4],0,0x8000);
  if ((undefined **)PTR_LOOP_00408770 == param_1) {
    PTR_LOOP_00408770 = param_1[1];
  }
  if (param_1 != &PTR_LOOP_00406750) {
    *(undefined **)param_1[1] = *param_1;
    *(undefined **)(*param_1 + 4) = param_1[1];
    HeapFree(DAT_00408bd4,0,param_1);
    return;
  }
  DAT_00406760 = 0xffffffff;
  return;
}



void __cdecl FUN_004037b0(int param_1)

{
  BOOL BVar1;
  undefined **ppuVar2;
  int iVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  
  ppuVar6 = (undefined **)PTR_LOOP_00406754;
  do {
    ppuVar5 = ppuVar6;
    if (ppuVar6[4] != (undefined *)0xffffffff) {
      iVar4 = 0;
      ppuVar5 = ppuVar6 + 0x804;
      iVar3 = 0x3ff000;
      do {
        if (*ppuVar5 == (undefined *)0xf0) {
          BVar1 = VirtualFree(ppuVar6[4] + iVar3,0x1000,0x4000);
          if (BVar1 != 0) {
            *ppuVar5 = (undefined *)0xffffffff;
            DAT_00408bbc = DAT_00408bbc + -1;
            if (((undefined **)ppuVar6[3] == (undefined **)0x0) || (ppuVar5 < ppuVar6[3])) {
              *(undefined ***)(ppuVar6 + 3) = ppuVar5;
            }
            iVar4 = iVar4 + 1;
            param_1 = param_1 + -1;
            if (param_1 == 0) break;
          }
        }
        iVar3 = iVar3 + -0x1000;
        ppuVar5 = ppuVar5 + -2;
      } while (-1 < iVar3);
      ppuVar5 = (undefined **)ppuVar6[1];
      if ((iVar4 != 0) && (ppuVar6[6] == (undefined *)0xffffffff)) {
        iVar3 = 1;
        ppuVar2 = ppuVar6 + 8;
        do {
          if (*ppuVar2 != (undefined *)0xffffffff) break;
          iVar3 = iVar3 + 1;
          ppuVar2 = ppuVar2 + 2;
        } while (iVar3 < 0x400);
        if (iVar3 == 0x400) {
          FUN_00403750(ppuVar6);
        }
      }
    }
    if ((ppuVar5 == (undefined **)PTR_LOOP_00406754) || (ppuVar6 = ppuVar5, param_1 < 1)) {
      return;
    }
  } while( true );
}



int __cdecl FUN_00403880(undefined *param_1,int **param_2,uint *param_3)

{
  undefined **ppuVar1;
  uint uVar2;
  
  ppuVar1 = &PTR_LOOP_00406750;
  while ((param_1 < ppuVar1[4] || param_1 == ppuVar1[4] || (ppuVar1[5] <= param_1))) {
    ppuVar1 = (undefined **)*ppuVar1;
    if (ppuVar1 == &PTR_LOOP_00406750) {
      return 0;
    }
  }
  if (((uint)param_1 & 0xf) != 0) {
    return 0;
  }
  if (((uint)param_1 & 0xfff) < 0x100) {
    return 0;
  }
  *(undefined ***)param_2 = ppuVar1;
  uVar2 = (uint)param_1 & 0xfffff000;
  *param_3 = uVar2;
  return ((int)(param_1 + (-0x100 - uVar2)) >> 4) + 8 + uVar2;
}



void __cdecl FUN_004038e0(int param_1,int param_2,byte *param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_2 - *(int *)(param_1 + 0x10) >> 0xc;
  piVar1 = (int *)(param_1 + 0x18 + iVar2 * 8);
  *piVar1 = *(int *)(param_1 + 0x18 + iVar2 * 8) + (uint)*param_3;
  *param_3 = 0;
  piVar1[1] = 0xf1;
  if ((*piVar1 == 0xf0) && (DAT_00408bbc = DAT_00408bbc + 1, DAT_00408bbc == 0x20)) {
    FUN_004037b0(0x10);
  }
  return;
}



int * __cdecl FUN_00403940(int *param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  int *lpAddress;
  int *piVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  int **ppiVar7;
  int iVar8;
  int **ppiVar9;
  int **ppiVar10;
  bool bVar11;
  int *local_4;
  
  local_4 = (int *)PTR_LOOP_00408770;
  do {
    if (local_4[4] != -1) {
      ppiVar9 = (int **)local_4[2];
      ppiVar7 = (int **)(((int)ppiVar9 + (-0x18 - (int)local_4) >> 3) * 0x1000 + local_4[4]);
      while (ppiVar9 < local_4 + 0x806) {
        if (((int)param_1 <= (int)*ppiVar9) && (param_1 <= ppiVar9[1] && ppiVar9[1] != param_1)) {
          lpAddress = (int *)FUN_00403b80(ppiVar7,*ppiVar9,param_1);
          if (lpAddress != (int *)0x0) {
            PTR_LOOP_00408770 = (undefined *)local_4;
            *ppiVar9 = (int *)((int)*ppiVar9 - (int)param_1);
            *(int ***)(local_4 + 2) = ppiVar9;
            return lpAddress;
          }
          ppiVar9[1] = param_1;
        }
        ppiVar9 = ppiVar9 + 2;
        ppiVar7 = ppiVar7 + 0x400;
      }
      ppiVar7 = (int **)local_4[2];
      ppiVar10 = (int **)local_4[4];
      ppiVar9 = (int **)(local_4 + 6);
      while (ppiVar9 < ppiVar7) {
        if (((int)param_1 <= (int)*ppiVar9) && (param_1 <= ppiVar9[1] && ppiVar9[1] != param_1)) {
          lpAddress = (int *)FUN_00403b80(ppiVar10,*ppiVar9,param_1);
          if (lpAddress != (int *)0x0) {
            PTR_LOOP_00408770 = (undefined *)local_4;
            *ppiVar9 = (int *)((int)*ppiVar9 - (int)param_1);
            *(int ***)(local_4 + 2) = ppiVar9;
            return lpAddress;
          }
          ppiVar9[1] = param_1;
        }
        ppiVar9 = ppiVar9 + 2;
        ppiVar10 = ppiVar10 + 0x400;
      }
    }
    local_4 = (int *)*local_4;
  } while (local_4 != (int *)PTR_LOOP_00408770);
  ppuVar6 = &PTR_LOOP_00406750;
  while ((ppuVar6[4] == (undefined *)0xffffffff || (ppuVar6[3] == (undefined *)0x0))) {
    ppuVar6 = (undefined **)*ppuVar6;
    if (ppuVar6 == &PTR_LOOP_00406750) {
      ppuVar6 = FUN_004035e0();
      if (ppuVar6 == (undefined **)0x0) {
        return (int *)0x0;
      }
      lpAddress = (int *)ppuVar6[4];
      *(char *)(lpAddress + 2) = (char)param_1;
      PTR_LOOP_00408770 = (undefined *)ppuVar6;
      *lpAddress = (int)((int)lpAddress + 8) + (int)param_1;
      lpAddress[1] = 0xf0 - (int)param_1;
      ppuVar6[6] = ppuVar6[6] + -((uint)param_1 & 0xff);
      return lpAddress + 0x40;
    }
  }
  ppuVar2 = (undefined **)ppuVar6[3];
  puVar3 = *ppuVar2;
  lpAddress = (int *)(ppuVar6[4] + ((int)ppuVar2 + (-0x18 - (int)ppuVar6) >> 3) * 0x1000);
  iVar8 = 0;
  ppuVar5 = ppuVar2;
  while ((puVar3 == (undefined *)0xffffffff && (iVar8 < 0x10))) {
    puVar3 = ppuVar5[2];
    ppuVar5 = ppuVar5 + 2;
    iVar8 = iVar8 + 1;
  }
  piVar4 = (int *)VirtualAlloc(lpAddress,iVar8 << 0xc,0x1000,4);
  if (piVar4 != lpAddress) {
    return (int *)0x0;
  }
  ppuVar5 = ppuVar2;
  if (0 < iVar8) {
    piVar4 = lpAddress + 1;
    do {
      *piVar4 = 0xf0;
      *(int **)(piVar4 + -1) = piVar4 + 1;
      *(undefined *)(piVar4 + 0x3d) = 0xff;
      *ppuVar5 = (undefined *)0xf0;
      ppuVar5[1] = (undefined *)0xf1;
      piVar4 = piVar4 + 0x400;
      ppuVar5 = ppuVar5 + 2;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  ppuVar1 = ppuVar6 + 0x806;
  bVar11 = ppuVar5 < ppuVar1;
  if (bVar11) {
    do {
      if (*ppuVar5 == (undefined *)0xffffffff) break;
      ppuVar5 = ppuVar5 + 2;
    } while (ppuVar5 < ppuVar1);
    bVar11 = ppuVar5 < ppuVar1;
  }
  PTR_LOOP_00408770 = (undefined *)ppuVar6;
  ppuVar6[3] = (undefined *)(-(uint)bVar11 & (uint)ppuVar5);
  *(char *)(lpAddress + 2) = (char)param_1;
  *(undefined ***)(ppuVar6 + 2) = ppuVar2;
  *ppuVar2 = *ppuVar2 + -(int)param_1;
  lpAddress[1] = lpAddress[1] - (int)param_1;
  *lpAddress = (int)((int)lpAddress + 8) + (int)param_1;
  return lpAddress + 0x40;
}



int __cdecl FUN_00403b80(int **param_1,int *param_2,int *param_3)

{
  byte bVar1;
  int **ppiVar2;
  int *piVar3;
  int **ppiVar4;
  int **ppiVar5;
  int **ppiVar6;
  
  ppiVar2 = (int **)*param_1;
  if (param_3 <= param_1[1]) {
    *(byte *)ppiVar2 = (byte)param_3;
    if ((int **)((int)ppiVar2 + (int)param_3) < param_1 + 0x3e) {
      *param_1 = (int *)((int)*param_1 + (int)param_3);
      param_1[1] = (int *)((int)param_1[1] - (int)param_3);
    }
    else {
      param_1[1] = (int *)0x0;
      *(int ***)param_1 = param_1 + 2;
    }
    return (int)(ppiVar2 + 2) * 0x10 + (int)param_1 * -0xf;
  }
  ppiVar4 = (int **)((int)param_1[1] + (int)ppiVar2);
  ppiVar5 = ppiVar2;
  if (*(byte *)ppiVar4 != 0) {
    ppiVar5 = ppiVar4;
  }
  if ((int **)((int)ppiVar5 + (int)param_3) < param_1 + 0x3e) {
    do {
      if (*(byte *)ppiVar5 == 0) {
        bVar1 = *(byte *)((int)ppiVar5 + 1);
        ppiVar4 = (int **)((int)ppiVar5 + 1);
        piVar3 = (int *)0x1;
        while (bVar1 == 0) {
          ppiVar4 = (int **)((int)ppiVar4 + 1);
          piVar3 = (int *)((int)piVar3 + 1);
          bVar1 = *(byte *)ppiVar4;
        }
        if (param_3 <= piVar3) {
          if (param_1 + 0x3e <= (int **)((int)ppiVar5 + (int)param_3)) {
            *(int ***)param_1 = param_1 + 2;
            goto LAB_00403ccf;
          }
          *(int ***)param_1 = (int **)((int)ppiVar5 + (int)param_3);
          param_1[1] = (int *)((int)piVar3 - (int)param_3);
          goto LAB_00403cd6;
        }
        if (ppiVar5 == ppiVar2) {
          param_1[1] = piVar3;
        }
        else {
          param_2 = (int *)((int)param_2 - (int)piVar3);
          if (param_2 < param_3) {
            return 0;
          }
        }
      }
      else {
        ppiVar4 = (int **)((int)ppiVar5 + (uint)*(byte *)ppiVar5);
      }
      ppiVar5 = ppiVar4;
    } while ((int **)((int)ppiVar4 + (int)param_3) < param_1 + 0x3e);
  }
  ppiVar4 = param_1 + 2;
  ppiVar5 = ppiVar4;
  if (ppiVar4 < ppiVar2) {
    while ((int **)((int)ppiVar5 + (int)param_3) < param_1 + 0x3e) {
      if (*(byte *)ppiVar5 == 0) {
        bVar1 = *(byte *)((int)ppiVar5 + 1);
        ppiVar6 = (int **)((int)ppiVar5 + 1);
        piVar3 = (int *)0x1;
        while (bVar1 == 0) {
          ppiVar6 = (int **)((int)ppiVar6 + 1);
          piVar3 = (int *)((int)piVar3 + 1);
          bVar1 = *(byte *)ppiVar6;
        }
        if (param_3 <= piVar3) {
          if ((int **)((int)ppiVar5 + (int)param_3) < param_1 + 0x3e) {
            *(int ***)param_1 = (int **)((int)ppiVar5 + (int)param_3);
            param_1[1] = (int *)((int)piVar3 - (int)param_3);
          }
          else {
            *(int ***)param_1 = ppiVar4;
LAB_00403ccf:
            param_1[1] = (int *)0x0;
          }
LAB_00403cd6:
          *(byte *)ppiVar5 = (byte)param_3;
          return (int)(ppiVar5 + 2) * 0x10 + (int)param_1 * -0xf;
        }
        param_2 = (int *)((int)param_2 - (int)piVar3);
        if (param_2 < param_3) {
          return 0;
        }
      }
      else {
        ppiVar6 = (int **)((int)ppiVar5 + (uint)*(byte *)ppiVar5);
      }
      ppiVar5 = ppiVar6;
      if (ppiVar2 <= ppiVar6) {
        return 0;
      }
    }
  }
  return 0;
}



int __cdecl FUN_00403d00(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_00408bc0 != (FARPROC)0x0) {
LAB_00403d50:
    if (DAT_00408bc4 != (FARPROC)0x0) {
      iVar1 = (*DAT_00408bc4)();
    }
    if ((iVar1 != 0) && (DAT_00408bc8 != (FARPROC)0x0)) {
      iVar1 = (*DAT_00408bc8)(iVar1);
    }
    iVar1 = (*DAT_00408bc0)(iVar1,param_1,param_2,param_3);
    return iVar1;
  }
  hModule = LoadLibraryA("user32.dll");
  if (hModule != (HMODULE)0x0) {
    DAT_00408bc0 = GetProcAddress(hModule,"MessageBoxA");
    if (DAT_00408bc0 != (FARPROC)0x0) {
      DAT_00408bc4 = GetProcAddress(hModule,"GetActiveWindow");
      DAT_00408bc8 = GetProcAddress(hModule,"GetLastActivePopup");
      goto LAB_00403d50;
    }
  }
  return 0;
}



// Library Function - Single Match
// Name: _strncpy
// Library: Visual Studio 1998 Release

char * __cdecl _strncpy(char *_Dest,char *_Source,size_t _Count)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint *puVar5;
  
  if (_Count == 0) {
    return _Dest;
  }
  puVar5 = (uint *)_Dest;
  if (((uint)_Source & 3) != 0) {
    while( true ) {
      cVar3 = *_Source;
      _Source = (char *)((int)_Source + 1);
      *(char *)puVar5 = cVar3;
      puVar5 = (uint *)((int)puVar5 + 1);
      _Count = _Count - 1;
      if (_Count == 0) {
        return _Dest;
      }
      if (cVar3 == '\0') break;
      if (((uint)_Source & 3) == 0) {
        uVar4 = _Count >> 2;
        goto joined_r0x00403dce;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        if (uVar4 == 0) goto LAB_00403e0b;
        goto LAB_00403e79;
      }
      *(undefined *)puVar5 = 0;
      puVar5 = (uint *)((int)puVar5 + 1);
      _Count = _Count - 1;
    } while (_Count != 0);
    return _Dest;
  }
  uVar4 = _Count >> 2;
  if (uVar4 != 0) {
    do {
      uVar1 = *(uint *)_Source;
      uVar2 = *(uint *)_Source;
      _Source = (char *)((uint *)_Source + 1);
      if (((uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff) & 0x81010100) != 0) {
        if ((char)uVar2 == '\0') {
          *puVar5 = 0;
joined_r0x00403e75:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_00403e79:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_00403e0b;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x00403e75;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x00403e75;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x00403e75;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x00403dce:
    } while (uVar4 != 0);
    _Count = _Count & 3;
    if (_Count == 0) {
      return _Dest;
    }
  }
  do {
    cVar3 = *_Source;
    _Source = (char *)((int)_Source + 1);
    *(char *)puVar5 = cVar3;
    puVar5 = (uint *)((int)puVar5 + 1);
    if (cVar3 == '\0') {
      while (_Count = _Count - 1, _Count != 0) {
LAB_00403e0b:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
  return _Dest;
}



undefined4 __cdecl FUN_00403e90(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_00408bd0 != (code *)0x0) {
    iVar1 = (*DAT_00408bd0)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int __cdecl FUN_00403f10(uint param_1,char *param_2,char *param_3)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  char *pcVar4;
  BOOL BVar5;
  int iVar6;
  char *pcVar7;
  DWORD local_41c;
  DWORD local_414;
  DWORD local_410;
  int local_40c;
  int *local_408;
  char local_404 [1028];
  
  if (param_1 < DAT_00408ce0) {
    piVar1 = &DAT_00408be0 + ((int)param_1 >> 5);
    iVar6 = (param_1 & 0x1f) * 8;
    bVar2 = *(byte *)(iVar6 + 4 + (&DAT_00408be0)[(int)param_1 >> 5]);
    if ((bVar2 & 1) != 0) {
      local_41c = 0;
      local_40c = 0;
      if (param_3 == (char *)0x0) {
        return 0;
      }
      local_408 = piVar1;
      if ((bVar2 & 0x20) != 0) {
        FUN_00404140(param_1,0,2);
      }
      if ((*(byte *)((HANDLE *)(*piVar1 + iVar6) + 1) & 0x80) == 0) {
        BVar5 = WriteFile(*(HANDLE *)(*piVar1 + iVar6),param_2,(DWORD)param_3,&local_410,
                          (LPOVERLAPPED)0x0);
        if (BVar5 == 0) {
          local_414 = GetLastError();
        }
        else {
          local_41c = local_410;
          local_414 = 0;
        }
      }
      else {
        local_414 = 0;
        pcVar7 = param_2;
        if (param_3 != (char *)0x0) {
          do {
            pcVar4 = local_404;
            do {
              if (param_3 <= pcVar7 + -(int)param_2) break;
              cVar3 = *pcVar7;
              pcVar7 = pcVar7 + 1;
              if (cVar3 == '\n') {
                *pcVar4 = '\r';
                local_40c = local_40c + 1;
                pcVar4 = pcVar4 + 1;
              }
              *pcVar4 = cVar3;
              pcVar4 = pcVar4 + 1;
            } while ((int)(pcVar4 + -(int)local_404) < 0x400);
            BVar5 = WriteFile(*(HANDLE *)(iVar6 + *local_408),local_404,
                              (DWORD)(pcVar4 + -(int)local_404),&local_410,(LPOVERLAPPED)0x0);
            if (BVar5 == 0) {
              local_414 = GetLastError();
              break;
            }
            local_41c = local_41c + local_410;
            if (((int)local_410 < (int)(pcVar4 + -(int)local_404)) ||
               (param_3 <= pcVar7 + -(int)param_2)) break;
          } while( true );
        }
      }
      if (local_41c != 0) {
        return local_41c - local_40c;
      }
      if (local_414 == 0) {
        if (((*(byte *)(iVar6 + 4 + *local_408) & 0x40) != 0) && (*param_2 == '\x1a')) {
          return 0;
        }
        _DAT_00408914 = 0x1c;
        _DAT_00408918 = 0;
        return -1;
      }
      if (local_414 == 5) {
        _DAT_00408914 = 9;
        _DAT_00408918 = local_414;
        return -1;
      }
      FUN_004043d0(local_414);
      return -1;
    }
  }
  _DAT_00408914 = 9;
  _DAT_00408918 = 0;
  return -1;
}



void FUN_00404130(void)

{
  __amsg_exit(2);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

DWORD __cdecl FUN_00404140(uint param_1,LONG param_2,DWORD param_3)

{
  HANDLE hFile;
  DWORD DVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 < DAT_00408ce0) {
    iVar3 = (param_1 & 0x1f) * 8;
    if ((*(byte *)((&DAT_00408be0)[(int)param_1 >> 5] + 4 + iVar3) & 1) != 0) {
      hFile = (HANDLE)FUN_00404380(param_1);
      if (hFile == (HANDLE)0xffffffff) {
        _DAT_00408914 = 9;
        return 0xffffffff;
      }
      DVar1 = SetFilePointer(hFile,param_2,(PLONG)0x0,param_3);
      if (DVar1 == 0xffffffff) {
        uVar2 = GetLastError();
      }
      else {
        uVar2 = 0;
      }
      if (uVar2 != 0) {
        FUN_004043d0(uVar2);
        return 0xffffffff;
      }
      *(byte *)((&DAT_00408be0)[(int)param_1 >> 5] + 4 + iVar3) =
           *(byte *)((&DAT_00408be0)[(int)param_1 >> 5] + 4 + iVar3) & 0xfd;
      return DVar1;
    }
  }
  _DAT_00408914 = 9;
  _DAT_00408918 = 0;
  return 0xffffffff;
}



void __cdecl FUN_00404200(int *param_1)

{
  int iVar1;
  
  DAT_00408910 = DAT_00408910 + 1;
  iVar1 = FUN_00402fb0(0x1000);
  param_1[2] = iVar1;
  if (iVar1 != 0) {
    param_1[3] = param_1[3] | 8;
    param_1[6] = 0x1000;
    *param_1 = param_1[2];
    param_1[1] = 0;
    return;
  }
  param_1[6] = 2;
  param_1[3] = param_1[3] | 4;
  *(int **)(param_1 + 2) = param_1 + 5;
  *(int **)param_1 = param_1 + 5;
  param_1[1] = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 __cdecl FUN_00404380(uint param_1)

{
  if ((param_1 < DAT_00408ce0) &&
     ((*(byte *)((&DAT_00408be0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 8) & 1) != 0)) {
    return *(undefined4 *)((&DAT_00408be0)[(int)param_1 >> 5] + (param_1 & 0x1f) * 8);
  }
  _DAT_00408914 = 9;
  _DAT_00408918 = 0;
  return 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl FUN_004043d0(uint param_1)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = &DAT_00408790;
  do {
    if (param_1 == *puVar1) {
      _DAT_00408914 = (&DAT_00408794)[iVar2 * 2];
      _DAT_00408918 = param_1;
      return;
    }
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + 1;
  } while (puVar1 < &DAT_004088f8);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    _DAT_00408914 = 0xd;
    _DAT_00408918 = param_1;
    return;
  }
  if ((param_1 < 0xbc) || (_DAT_00408914 = 8, 0xca < param_1)) {
    _DAT_00408914 = 0x16;
  }
  _DAT_00408918 = param_1;
  return;
}



void RtlUnwind(PVOID TargetFrame,PVOID TargetIp,PEXCEPTION_RECORD ExceptionRecord,PVOID ReturnValue)

{
                    // WARNING: Could not recover jumptable at 0x00404560. Too many branches
                    // WARNING: Treating indirect jump as call
  RtlUnwind(TargetFrame,TargetIp,ExceptionRecord,ReturnValue);
  return;
}


