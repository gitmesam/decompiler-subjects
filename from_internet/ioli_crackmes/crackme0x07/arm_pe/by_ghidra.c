typedef unsigned char   undefined;

typedef unsigned int    ImageBaseOffset32;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef short    wchar_t;
typedef unsigned short    word;
typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

struct HINSTANCE__ {
    int unused;
};

typedef int BOOL;

typedef struct HINSTANCE__ * HINSTANCE;

typedef ulong DWORD;

typedef HINSTANCE HMODULE;

typedef uint UINT;

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
    word Machine; // 448
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

typedef struct _iobuf _iobuf, *P_iobuf;

struct _iobuf {
    char * _ptr;
    int _cnt;
    char * _base;
    int _flag;
    int _file;
    int _charbuf;
    int _bufsiz;
    char * _tmpfname;
};

typedef struct _iobuf FILE;

typedef wchar_t WCHAR;

typedef void * HANDLE;

typedef WCHAR * LPWSTR;

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

typedef uint size_t;




void entry(undefined4 param_1,undefined4 param_2,int param_3)

{
  FUN_000118a4();
  FUN_00011360();
  FUN_0001153c();
  FUN_00011624();
  FUN_0001164c(param_1,param_2,param_3);
  FUN_00011514();
  FUN_000118b0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



undefined4 FUN_00011050(undefined4 param_1,int param_2)

{
  int iVar1;
  int local_14;
  
  local_14 = 0;
  do {
    if (*(int *)(local_14 * 4 + param_2) == 0) {
      return 0;
    }
    local_14 = local_14 + 1;
    iVar1 = FUN_000118f8();
  } while (iVar1 != 0);
  DAT_00014000 = 1;
  return 1;
}



void FUN_0001110c(void)

{
  int iVar1;
  int extraout_r1;
  uint uStack40;
  int iStack36;
  
  FUN_000118e0();
  FUN_00011524();
  FUN_000118d4();
  iVar1 = FUN_00011050(uStack40,extraout_r1);
  if (iVar1 != 0) {
    iStack36 = 0;
    while (iStack36 < 10) {
      if ((uStack40 & 1) == 0) {
        if (DAT_00014000 == 1) {
          FUN_000118e0();
        }
        FUN_00011524();
      }
      iStack36 = iStack36 + 1;
    }
  }
  return;
}



void FUN_0001112c(undefined4 param_1,int param_2)

{
  int iVar1;
  uint local_18;
  int local_14;
  
  FUN_000118d4();
  iVar1 = FUN_00011050(local_18,param_2);
  if (iVar1 != 0) {
    local_14 = 0;
    while (local_14 < 10) {
      if ((local_18 & 1) == 0) {
        if (DAT_00014000 == 1) {
          FUN_000118e0();
        }
        FUN_00011524();
      }
      local_14 = local_14 + 1;
    }
  }
  return;
}



void FUN_000111dc(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint local_20;
  int local_1c;
  uint local_18;
  
  local_1c = 0;
  local_18 = 0;
  while (uVar1 = FUN_000118c8(), local_18 < uVar1) {
    FUN_000118d4();
    local_1c = local_1c + local_20;
    if (local_1c == 0x10) {
      FUN_0001112c(param_1,param_2);
    }
    local_18 = local_18 + 1;
  }
  FUN_0001110c();
  iVar2 = FUN_00011050(local_20,param_2);
  if (iVar2 != 0) {
    local_18 = 0;
    while ((int)local_18 < 10) {
      if ((local_20 & 1) == 0) {
        FUN_000118e0();
        FUN_00011524();
      }
      local_18 = local_18 + 1;
    }
  }
  return;
}



undefined4 FUN_000112f4(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined auStack116 [100];
  undefined4 uStack4;
  
  uStack4 = 0x11300;
  FUN_00011624();
  FUN_000118e0();
  FUN_000118ec();
  FUN_000118bc();
  FUN_000111dc(auStack116,param_3);
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00011374)
// WARNING: Removing unreachable block (ram,0x00011378)
// WARNING: Removing unreachable block (ram,0x00011394)

void FUN_00011360(void)

{
  return;
}



void FUN_000113b4(void)

{
  FUN_00011934();
  return;
}



undefined4 FUN_000113e4(undefined4 param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  if ((((param_2 != (int *)0x0) && (param_3 != (int *)0x0 && *param_2 != 0)) && (*param_3 != 0)) &&
     (iVar2 = (*param_3 - *param_2 >> 2) + 1, 0 < iVar2)) {
    iVar1 = FUN_00011928();
    if (iVar1 != 0) {
      *param_2 = iVar1;
      iVar1 = iVar1 + iVar2 * 4;
      *param_3 = iVar1;
      *(undefined4 *)(iVar1 + -4) = param_1;
      return param_1;
    }
  }
  return 0;
}



undefined4 FUN_00011474(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_000113e4(param_1,&DAT_00014004,&DAT_00014008);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



void FUN_0001149c(void)

{
  bool bVar1;
  uint uVar2;
  
  if (DAT_00014004 != 0) {
    if (DAT_00014004 <= DAT_00014008 - 4U) {
      uVar2 = DAT_00014008 - 8;
      do {
        if (*(code **)(uVar2 + 4) != (code *)0x0) {
                    // WARNING: Could not recover jumptable at 0x000114dc. Too many branches
                    // WARNING: Treating indirect jump as call
          (**(code **)(uVar2 + 4))();
          return;
        }
        bVar1 = DAT_00014004 <= uVar2;
        uVar2 = uVar2 - 4;
      } while (bVar1);
    }
    FUN_00011910();
    DAT_00014004 = 0;
  }
  FUN_0001191c();
  return;
}



void FUN_00011514(void)

{
  FUN_0001149c();
  FUN_000113b4();
  return;
}



void FUN_00011524(void)

{
  FUN_00011514();
  FUN_000118b0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



undefined4 FUN_0001153c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00011904();
  if (puVar1 == (undefined4 *)0x0) {
    DAT_00014004 = puVar1;
    return 0;
  }
  DAT_00014004 = puVar1;
  *puVar1 = 0;
  DAT_00014008 = puVar1;
  return 1;
}



void FUN_00011578(void)

{
  code *pcVar1;
  undefined *puVar2;
  
  pcVar1 = *(code **)PTR_DAT_00012000;
  if (pcVar1 != (code *)0x0) {
    do {
      (*pcVar1)();
      puVar2 = PTR_DAT_00012000 + 4;
      pcVar1 = *(code **)(PTR_DAT_00012000 + 4);
      PTR_DAT_00012000 = puVar2;
    } while (pcVar1 != (code *)0x0);
    return;
  }
  return;
}



void FUN_000115bc(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  code **ppcVar4;
  
  piVar2 = &DAT_00011988;
  iVar1 = 0;
  do {
    iVar3 = iVar1;
    piVar2 = piVar2 + 1;
    iVar1 = iVar3 + 1;
  } while (*piVar2 != 0);
  if (iVar3 != 0) {
    ppcVar4 = (code **)(&DAT_00011988 + iVar3);
    do {
      (**ppcVar4)();
      iVar3 = iVar3 + -1;
      ppcVar4 = ppcVar4 + -1;
    } while (iVar3 != 0);
  }
  FUN_00011474(FUN_00011578);
  return;
}



void FUN_00011624(void)

{
  if (DAT_0001400c != 0) {
    return;
  }
  DAT_0001400c = 1;
  FUN_000115bc();
  return;
}



void FUN_0001164c(undefined4 param_1,undefined4 param_2,int param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  FUN_00011964();
  if (param_3 != 0) {
    param_3 = FUN_00011970();
  }
  iVar3 = FUN_00011904();
  if (iVar3 == 0) {
    FUN_000118b0();
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  DAT_00014014 = (int *)FUN_00011904();
  if (DAT_00014014 == (int *)0x0) {
    FUN_000118b0();
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  *DAT_00014014 = iVar3;
  FUN_00011970();
  FUN_0001197c();
  DAT_00014010 = DAT_00014010 + 1;
  if (0 < param_3) {
    iVar6 = *DAT_00014014;
    iVar3 = FUN_000118c8();
    puVar7 = (undefined *)(iVar6 + iVar3 + 1);
    FUN_0001197c();
    iVar3 = FUN_000118c8();
    puVar9 = puVar7 + iVar3;
    if (puVar7 == (undefined *)0x0) {
      DAT_00014010 = 1;
    }
    else {
      iVar3 = 1;
      while( true ) {
        iVar6 = FUN_00011940();
        puVar8 = puVar7 + iVar6;
        cVar2 = puVar7[iVar6];
        iVar6 = iVar3;
        if (cVar2 == '\0') break;
        puVar5 = &DAT_00013068;
        if (cVar2 != '\"') {
          do {
            pcVar1 = puVar5 + 1;
            if (*pcVar1 == '\0') {
              iVar6 = FUN_00011958();
              puVar7 = puVar8 + iVar6;
              goto LAB_000117e8;
            }
            puVar5 = puVar5 + 1;
          } while (cVar2 != *pcVar1);
        }
        puVar8 = puVar8 + 1;
        puVar7 = (undefined *)FUN_0001194c();
        if (puVar7 == (undefined *)0x0) {
          puVar7 = puVar9;
        }
LAB_000117e8:
        *puVar7 = 0;
        iVar6 = iVar3 + 1;
        piVar4 = (int *)FUN_00011928();
        if (piVar4 == (int *)0x0) {
          DAT_00014010 = -1;
          goto LAB_00011838;
        }
        DAT_00014014 = piVar4;
        *(undefined **)(piVar4 + iVar3) = puVar8;
        if (puVar7 == puVar9) break;
        puVar7 = puVar7 + 1;
        iVar3 = iVar6;
      }
      DAT_00014010 = iVar6;
      if (iVar6 < 0) {
LAB_00011838:
        FUN_000118b0();
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
    }
  }
  piVar4 = DAT_00014014;
  DAT_00014014[DAT_00014010] = 0;
  FUN_000112f4(DAT_00014010,DAT_00014014,(int)piVar4);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000118a4(void)

{
                    // WARNING: Could not recover jumptable at 0x000118a8. Too many branches
                    // WARNING: Treating indirect jump as call
  _fpreset();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Exceeded maximum restarts with more pending

void FUN_000118b0(void)

{
                    // WARNING: Could not recover jumptable at 0x000118b4. Too many branches
                    // WARNING: Treating indirect jump as call
  TerminateProcess();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Exceeded maximum restarts with more pending

void FUN_000118bc(void)

{
                    // WARNING: Could not recover jumptable at 0x000118c0. Too many branches
                    // WARNING: Treating indirect jump as call
  scanf();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Exceeded maximum restarts with more pending

void FUN_000118c8(void)

{
                    // WARNING: Could not recover jumptable at 0x000118cc. Too many branches
                    // WARNING: Treating indirect jump as call
  strlen();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Exceeded maximum restarts with more pending

void FUN_000118d4(void)

{
                    // WARNING: Could not recover jumptable at 0x000118d8. Too many branches
                    // WARNING: Treating indirect jump as call
  sscanf();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Exceeded maximum restarts with more pending

void FUN_000118e0(void)

{
                    // WARNING: Could not recover jumptable at 0x000118e4. Too many branches
                    // WARNING: Treating indirect jump as call
  puts();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Exceeded maximum restarts with more pending

void FUN_000118ec(void)

{
                    // WARNING: Could not recover jumptable at 0x000118f0. Too many branches
                    // WARNING: Treating indirect jump as call
  printf();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Exceeded maximum restarts with more pending

void FUN_000118f8(void)

{
                    // WARNING: Could not recover jumptable at 0x000118fc. Too many branches
                    // WARNING: Treating indirect jump as call
  strncmp();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Exceeded maximum restarts with more pending

void FUN_00011904(void)

{
                    // WARNING: Could not recover jumptable at 0x00011908. Too many branches
                    // WARNING: Treating indirect jump as call
  malloc();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Exceeded maximum restarts with more pending

void FUN_00011910(void)

{
                    // WARNING: Could not recover jumptable at 0x00011914. Too many branches
                    // WARNING: Treating indirect jump as call
  free();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Exceeded maximum restarts with more pending

void FUN_0001191c(void)

{
                    // WARNING: Could not recover jumptable at 0x00011920. Too many branches
                    // WARNING: Treating indirect jump as call
  fflush();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Exceeded maximum restarts with more pending

void FUN_00011928(void)

{
                    // WARNING: Could not recover jumptable at 0x0001192c. Too many branches
                    // WARNING: Treating indirect jump as call
  realloc();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00011934(void)

{
                    // WARNING: Could not recover jumptable at 0x00011938. Too many branches
                    // WARNING: Treating indirect jump as call
  _fcloseall();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Exceeded maximum restarts with more pending

void FUN_00011940(void)

{
                    // WARNING: Could not recover jumptable at 0x00011944. Too many branches
                    // WARNING: Treating indirect jump as call
  strspn();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Exceeded maximum restarts with more pending

void FUN_0001194c(void)

{
                    // WARNING: Could not recover jumptable at 0x00011950. Too many branches
                    // WARNING: Treating indirect jump as call
  strchr();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Exceeded maximum restarts with more pending

void FUN_00011958(void)

{
                    // WARNING: Could not recover jumptable at 0x0001195c. Too many branches
                    // WARNING: Treating indirect jump as call
  strcspn();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Exceeded maximum restarts with more pending

void FUN_00011964(void)

{
                    // WARNING: Could not recover jumptable at 0x00011968. Too many branches
                    // WARNING: Treating indirect jump as call
  GetModuleFileNameW();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Exceeded maximum restarts with more pending

void FUN_00011970(void)

{
                    // WARNING: Could not recover jumptable at 0x00011974. Too many branches
                    // WARNING: Treating indirect jump as call
  wcslen();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Exceeded maximum restarts with more pending

void FUN_0001197c(void)

{
                    // WARNING: Could not recover jumptable at 0x00011980. Too many branches
                    // WARNING: Treating indirect jump as call
  wcstombs();
  return;
}


