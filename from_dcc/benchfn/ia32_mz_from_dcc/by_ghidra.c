typedef unsigned char   undefined;

typedef unsigned int    uint;
typedef unsigned char    undefined1;
typedef unsigned int    undefined2;
typedef unsigned long    undefined4;



// WARNING: Stack frame is not setup normally: Input value of stackpointer is not used
// WARNING: This function may have set the stack pointer

void entry(void)

{
  int *piVar1;
  uint *puVar2;
  byte *pbVar3;
  char *pcVar4;
  undefined *puVar5;
  code *pcVar6;
  char cVar7;
  int iVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  undefined2 extraout_DX;
  undefined2 extraout_DX_00;
  undefined *puVar12;
  int *piVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  byte *unaff_SI;
  int *piVar19;
  int *piVar20;
  undefined *puVar21;
  int iVar22;
  undefined2 unaff_ES;
  undefined2 uVar23;
  undefined2 uVar24;
  undefined4 uVar25;
  
  uVar24 = 0x23e;
  puVar12 = (undefined *)&DAT_11db_0080;
                    // WARNING: Read-only address (ram,0x000101f8) is written
  uRam000101f8 = 0x11db;
  pcVar6 = (code *)swi(0x21);
  uVar25 = (*pcVar6)();
  uVar23 = s_Turbo_C___Copyright__c__1988_Bor_11db_0004._40_2_;
  puVar18 = DAT_11db_0002;
  iVar8 = (int)((ulong)uVar25 >> 0x10);
  *(undefined2 *)&DAT_11db_0092 = (int)uVar25;
  *(undefined2 *)&DAT_11db_0090 = unaff_ES;
  *(undefined2 *)&DAT_11db_008c = uVar23;
  *(undefined **)(int *)&DAT_11db_00ac = puVar18;
  *(undefined2 *)&DAT_11db_0096 = 0xffff;
  *(undefined2 *)(puVar12 + -2) = 0x2e;
  FUN_1000_0162();
  uVar25 = *(undefined4 *)&DAT_11db_008a;
  uVar23 = (undefined2)((ulong)uVar25 >> 0x10);
  piVar19 = (int *)uVar25;
  uVar10 = 0x7fff;
  piVar20 = piVar19;
  do {
    if (((*piVar20 == 0x3738) && (iVar11 = piVar20[1], (char)iVar11 == '=')) &&
       (piVar1 = (int *)&DAT_11db_0096, *piVar1 = *piVar1 + 1,
       ((byte)((uint)iVar11 >> 8) & 0xdf) == 0x59)) {
      piVar1 = (int *)&DAT_11db_0096;
      *piVar1 = *piVar1 + 1;
    }
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      piVar1 = piVar20;
      piVar20 = (int *)((int)piVar20 + 1);
    } while ((char)uVar25 != *(char *)piVar1);
    if (uVar10 == 0) goto LAB_1000_01e9;
    piVar19 = (int *)((int)piVar19 + 1);
  } while (*(char *)piVar20 != (char)uVar25);
  *(int *)&DAT_11db_008a = -(uVar10 | 0x8000);
  piVar19 = (int *)((int)piVar19 * 2 + 8U & 0xfff8);
  *(int **)&DAT_11db_008e = piVar19;
  puVar18 = puVar18 + -iVar8;
  uVar10 = *(uint *)&DAT_11db_023c;
  if (uVar10 < 0x200) {
    uVar10 = 0x200;
    *(undefined2 *)&DAT_11db_023c = 0x200;
  }
  if ((uVar10 < 0xf9d2) && (puVar2 = (uint *)&DAT_11db_023a, !CARRY2(uVar10 + 0x62e,*puVar2))) {
    bVar9 = 4;
    puVar21 = (undefined *)((uVar10 + 0x62e + *puVar2 >> 4) + 1);
    if (puVar21 <= puVar18) {
      if (((*(int *)&DAT_11db_023c == 0) || (*(int *)&DAT_11db_023a == 0)) &&
         (puVar21 = (undefined *)0x1000, puVar18 < (undefined *)0x1001)) {
        puVar21 = puVar18;
      }
      puVar18 = puVar21 + iVar8;
      *(undefined **)(int *)&DAT_11db_00a4 = puVar18;
      *(undefined **)(int *)&DAT_11db_00a8 = puVar18;
      piVar19 = (int *)(puVar18 + -*(int *)&DAT_11db_0090);
      piVar13 = (int *)(puVar12 + -2);
      *(undefined **)(puVar12 + -2) = puVar21;
      pcVar6 = (code *)swi(0x21);
      (*pcVar6)();
      iVar22 = *piVar13 << (bVar9 & 0x1f);
      puVar18 = (undefined *)&DAT_11db_05e8;
      iVar11 = 0x46;
      while (iVar11 != 0) {
        iVar11 = iVar11 + -1;
        puVar5 = puVar18;
        puVar18 = puVar18 + 1;
        *puVar5 = 0;
      }
      *(undefined2 *)(iVar22 + -2) = 0x1000;
      puVar14 = (undefined *)(iVar22 + -4);
      *(undefined2 *)(iVar22 + -4) = 0xf8;
      (**(code **)&DAT_11db_05da)();
      puVar15 = puVar14 + -2;
      *(undefined2 *)(puVar14 + -2) = 0xfb;
      FUN_1000_0336();
      *(undefined2 *)(puVar15 + -2) = 0xfe;
      FUN_1000_0421();
      pcVar6 = (code *)swi(0x1a);
      (*pcVar6)();
      *(undefined2 *)&DAT_11db_0098 = extraout_DX_00;
      *(int *)&DAT_11db_009a = iVar11;
      puVar16 = puVar15 + -2;
      *(undefined2 *)(puVar15 + -2) = 0x10e;
      (**(code **)&DAT_11db_05de)();
      *(undefined2 *)(puVar16 + -2) = *(undefined2 *)&DAT_11db_0088;
      *(undefined2 *)(puVar16 + -4) = *(undefined2 *)&DAT_11db_0086;
      *(undefined2 *)(puVar16 + -6) = *(undefined2 *)&DAT_11db_0084;
      *(undefined2 *)(puVar16 + -8) = 0x11d;
      uVar23 = FUN_1000_0265();
      *(undefined2 *)(puVar16 + -8) = uVar23;
      *(undefined2 *)(puVar16 + -10) = 0x121;
      FUN_1000_0301();
      *(undefined2 *)(puVar16 + -10) = 0x129;
      FUN_1000_01a5();
      *(undefined2 *)(puVar16 + -10) = 0x1000;
      puVar18 = puVar16 + -0xc;
      *(undefined2 *)(puVar16 + -0xc) = 0x12e;
      (*pcRam000005dc)();
      iVar8 = 0;
      unaff_SI = (byte *)0x0;
      iVar11 = 0x2f;
      do {
        pbVar3 = unaff_SI;
        iVar8 = CONCAT11((char)((uint)iVar8 >> 8) + CARRY1((byte)iVar8,*pbVar3),
                         (byte)iVar8 + *pbVar3);
        unaff_SI = unaff_SI + 1;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      if (iVar8 != 0xd37) {
        *(undefined2 *)(puVar18 + -2) = 0x14f;
        FUN_1000_01da();
      }
      pcVar6 = (code *)swi(0x21);
      puVar12 = puVar18;
      (*pcVar6)();
      uVar24 = extraout_DX;
    }
  }
LAB_1000_01e9:
  *(undefined2 *)(puVar12 + -2) = 0x1f1;
  FUN_1000_01da();
  *(undefined2 *)(puVar12 + -2) = 3;
  puVar17 = puVar12 + -4;
  *(undefined2 *)(puVar12 + -4) = 0x1f8;
  cVar7 = FUN_1000_0121();
  pcVar4 = (char *)((int)piVar19 + (int)unaff_SI);
  *pcVar4 = *pcVar4 + cVar7;
  *(undefined **)(puVar17 + -2) = puVar18;
  return;
}



void FUN_1000_0121(void)

{
  byte *pbVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int in_BX;
  byte *pbVar6;
  
  FUN_1000_01a5();
  (*pcRam000005dc)(0x1000);
  iVar4 = 0;
  pbVar6 = (byte *)0x0;
  iVar5 = 0x2f;
  do {
    pbVar1 = pbVar6;
    iVar4 = CONCAT11((char)((uint)iVar4 >> 8) + CARRY1((byte)iVar4,*pbVar1),(byte)iVar4 + *pbVar1);
    pbVar6 = pbVar6 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  if (iVar4 != 0xd37) {
    FUN_1000_01da();
  }
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  FUN_1000_01da();
  cVar3 = FUN_1000_0121();
  pbVar1 = pbVar6 + in_BX;
  *pbVar1 = *pbVar1 + cVar3;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl16near FUN_1000_0162(void)

{
  code *pcVar1;
  undefined2 in_BX;
  undefined2 unaff_ES;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  unique0x10000025 = in_BX;
  _DAT_11db_0076 = unaff_ES;
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  DAT_11db_0078 = in_BX;
  DAT_11db_007a = unaff_ES;
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  DAT_11db_007c = in_BX;
  DAT_11db_007e = unaff_ES;
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  DAT_11db_0080 = in_BX;
  DAT_11db_0082 = unaff_ES;
  (*pcVar1)();
  return;
}



void __cdecl16near FUN_1000_01a5(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}



void __cdecl16far FUN_1000_01d2(void)

{
  DAT_11db_0096 = 0;
  return;
}



void __cdecl16near FUN_1000_01d9(void)

{
  return;
}



void __cdecl16near FUN_1000_01da(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}



void __cdecl16near FUN_1000_01fa(void)

{
  return;
}



void __cdecl16near FUN_1000_01ff(void)

{
  FUN_1000_01fa();
  FUN_1000_01fa();
  FUN_1000_01fa();
  FUN_1000_01fa();
  FUN_1000_01fa();
  FUN_1000_01fa();
  FUN_1000_01fa();
  FUN_1000_01fa();
  FUN_1000_01fa();
  FUN_1000_01fa();
  return;
}



void __cdecl16near FUN_1000_0222(void)

{
  FUN_1000_01ff();
  FUN_1000_01ff();
  FUN_1000_01ff();
  FUN_1000_01ff();
  FUN_1000_01ff();
  FUN_1000_01ff();
  FUN_1000_01ff();
  FUN_1000_01ff();
  FUN_1000_01ff();
  FUN_1000_01ff();
  return;
}



void __cdecl16near FUN_1000_0245(void)

{
  FUN_1000_0222();
  FUN_1000_0222();
  FUN_1000_0222();
  FUN_1000_0222();
  FUN_1000_0222();
  FUN_1000_0222();
  FUN_1000_0222();
  FUN_1000_0222();
  FUN_1000_0222();
  return;
}



void __cdecl16near FUN_1000_0265(void)

{
  bool bVar1;
  uint local_a;
  int local_8;
  uint local_6;
  int local_4;
  
  FUN_1000_0e4b(0x194);
  FUN_1000_16d4(0x1b0,&local_6);
  FUN_1000_0e4b(0x1b4,local_6,local_4);
  local_8 = 0;
  local_a = 1;
  while( true ) {
    if ((local_4 <= local_8) && ((local_4 < local_8 || (local_6 < local_a)))) break;
    FUN_1000_0245();
    bVar1 = 0xfffe < local_a;
    local_a = local_a + 1;
    local_8 = local_8 + (uint)bVar1;
  }
  FUN_1000_0e4b(0x1ce);
  return;
}



undefined2 FUN_1000_02c5(uint param_1)

{
  if ((int)param_1 < 0) {
    if (-param_1 < 0x23 || param_1 == 0xffdd) {
      DAT_11db_0094 = -param_1;
      DAT_11db_01d8 = 0xffff;
      return 0xffff;
    }
  }
  else {
    if (param_1 < 0x59) goto LAB_1000_02d8;
  }
  param_1 = 0x57;
LAB_1000_02d8:
  DAT_11db_0094 = (int)*(char *)(param_1 + 0x1da);
  DAT_11db_01d8 = param_1;
  return 0xffff;
}



void __cdecl16near FUN_1000_0300(void)

{
  return;
}



void __cdecl16near FUN_1000_0301(void)

{
  int iVar1;
  
  while (iVar1 = DAT_11db_023e + -1, DAT_11db_023e != 0) {
    DAT_11db_023e = iVar1;
    (**(code **)(iVar1 * 2 + 0x5e8))();
  }
  DAT_11db_023e = iVar1;
  (*DAT_11db_0234)();
  (*DAT_11db_0236)();
  (*DAT_11db_0238)();
  FUN_1000_0121();
  return;
}



// WARNING (jumptable): Unable to track spacebase fully for stack
// WARNING: Unable to track spacebase fully for stack

void FUN_1000_0336(void)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  int extraout_DX;
  int extraout_DX_00;
  undefined *puVar10;
  char **ppcVar11;
  char *pcVar12;
  char *pcVar13;
  undefined2 uVar14;
  undefined2 unaff_SS;
  bool bVar15;
  bool bVar16;
  code *in_stack_00000000;
  uint uStack4;
  undefined2 uStack2;
  
  DAT_1000_0332 = 0x11db;
  uVar6 = (uint)*(byte *)&DAT_11db_0080;
  puVar10 = (undefined *)(uVar6 + 1);
  pcVar12 = (char *)(DAT_11db_008a + 2);
  uVar8 = 1;
  uVar14 = DAT_11db_0090;
  DAT_1000_0330 = in_stack_00000000;
  if (2 < (byte)DAT_11db_0092) {
    uVar8 = 0x7f;
    pcVar13 = pcVar12;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar1 = pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (*pcVar1 != '\0');
    if (uVar8 == 0) goto LAB_1000_01e2;
    uVar8 = uVar8 ^ 0x7f;
    uVar14 = DAT_11db_008c;
  }
  puVar7 = (undefined *)(uVar6 + 2 + uVar8 & 0xfffe);
  iVar3 = -(int)puVar7;
  pcVar13 = &stack0x0000 + iVar3;
  if (puVar7 <= register0x00000010) {
    *(uint *)((int)(&uStack4 + 1) + iVar3) = uVar8;
    while (uVar8 - 1 != 0) {
      pcVar2 = pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar1 = pcVar12;
      pcVar12 = pcVar12 + 1;
      *pcVar2 = *pcVar1;
      uVar8 = uVar8 - 1;
    }
    bVar15 = false;
    *pcVar13 = '\0';
    bVar16 = uVar8 == 0;
LAB_1000_03a3:
    *(uint *)((int)&uStack4 + iVar3) = 0x3a6;
    bVar5 = FUN_1000_03bf();
    iVar9 = extraout_DX;
    if (bVar15 || bVar16) {
      do {
        uVar14 = DAT_1000_0332;
        if (bVar15) {
          iVar9 = *(uint *)((int)(&uStack4 + 1) + iVar3) + iVar9;
          *(uint *)&DAT_11db_0084 = uVar8;
          puVar10 = (undefined *)((uVar8 + 1) * 2);
          ppcVar11 = (char **)(&stack0x0000 + (uVar8 + 1) * -2);
          pcVar12 = (char *)register0x00000010;
          if (register0x00000010 < puVar10) goto LAB_1000_01e2;
          *(char ***)(int **)&DAT_11db_0086 = ppcVar11;
          goto LAB_1000_0407;
        }
        *(uint *)((int)&uStack4 + iVar3) = 0x3ad;
        bVar5 = FUN_1000_03bf();
        iVar9 = extraout_DX_00;
      } while (!bVar15 && !bVar16);
    }
    if ((bVar5 != 0x20) && (bVar5 != 0xd)) goto code_r0x000103b7;
    goto LAB_1000_03bb;
  }
LAB_1000_01e2:
  uStack2 = 0x1f1;
  FUN_1000_01da();
  uStack2 = 3;
  uStack4 = 0x1f8;
  cVar4 = FUN_1000_0121();
  pcVar1 = puVar10 + (int)pcVar12;
  *pcVar1 = *pcVar1 + cVar4;
  return;
code_r0x000103b7:
  bVar15 = bVar5 < 9;
  bVar16 = bVar5 == 9;
  if (bVar16) {
LAB_1000_03bb:
    bVar15 = false;
    bVar16 = true;
  }
  goto LAB_1000_03a3;
  while( true ) {
    *(BADSPACEBASE **)ppcVar11 = register0x00000010;
    ppcVar11 = ppcVar11 + 1;
    do {
      pcVar1 = (char *)register0x00000010;
      register0x00000010 = (BADSPACEBASE *)((char *)register0x00000010 + 1);
      bVar15 = *pcVar1 != '\0';
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0 && bVar15);
    if (bVar15) break;
LAB_1000_0407:
    if (iVar9 == 0) break;
  }
  *ppcVar11 = (char *)0x0;
                    // WARNING: Could not recover jumptable at 0x0001041c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_1000_0330)();
  return;
}



int __cdecl16near FUN_1000_03bf(void)

{
  char cVar1;
  undefined uVar2;
  int in_AX;
  int iVar3;
  int in_CX;
  char *unaff_SI;
  undefined *unaff_DI;
  undefined2 unaff_ES;
  
  uVar2 = (undefined)in_AX;
  if (in_AX != 0) {
    *unaff_DI = uVar2;
  }
  iVar3 = in_AX << 8;
  if (in_CX != 0) {
    cVar1 = *unaff_SI;
    iVar3 = CONCAT11(uVar2,cVar1 + -0x22);
    if ((((char)(cVar1 + -0x22) != '\0') && (iVar3 = CONCAT11(uVar2,cVar1), cVar1 == '\\')) &&
       (unaff_SI[1] == '\"')) {
      iVar3 = CONCAT11(uVar2,unaff_SI[1]);
    }
  }
  return iVar3;
}



void __cdecl16near FUN_1000_0421(void)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  char **in_BX;
  char *unaff_SI;
  char *pcVar5;
  char *pcVar6;
  undefined2 uVar7;
  
  iVar4 = DAT_11db_008a;
  pcVar6 = (char *)FUN_1000_0570();
  uVar7 = DAT_11db_008c;
  if (pcVar6 != (char *)0x0) {
    unaff_SI = (char *)0x0;
    pcVar5 = pcVar6;
    while (iVar4 != 0) {
      iVar4 = iVar4 + -1;
      pcVar2 = pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar1 = unaff_SI;
      unaff_SI = unaff_SI + 1;
      *pcVar2 = *pcVar1;
    }
    uVar7 = 0x11db;
    in_BX = (char **)FUN_1000_0570(DAT_11db_008e);
    DAT_11db_0088 = in_BX;
    if (in_BX != (char **)0x0) {
      iVar4 = -1;
      do {
        *in_BX = pcVar6;
        in_BX = in_BX + 1;
        do {
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          pcVar1 = pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (*pcVar1 != '\0');
        if (*pcVar6 == '\0') {
          *in_BX = (char *)0x0;
          return;
        }
      } while( true );
    }
  }
  FUN_1000_01da();
  cVar3 = FUN_1000_0121(3);
  pcVar1 = (char *)((int)in_BX + (int)unaff_SI);
  *pcVar1 = *pcVar1 + cVar3;
  return;
}



uint __cdecl16near FUN_1000_046b(undefined2 param_1)

{
  bool bVar1;
  
  bVar1 = DAT_11db_023e != 0x20;
  if (bVar1) {
    *(undefined2 *)(DAT_11db_023e * 2 + 0x5e8) = param_1;
    DAT_11db_023e = DAT_11db_023e + 1;
  }
  return (uint)!bVar1;
}



void __cdecl16near FUN_1000_0491(int param_1)

{
  int iVar1;
  
  DAT_11db_062a = *(int *)(param_1 + 6);
  if (DAT_11db_062a == param_1) {
    DAT_11db_062a = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 4);
    *(int *)(DAT_11db_062a + 4) = iVar1;
    *(int *)(iVar1 + 6) = DAT_11db_062a;
  }
  return;
}



int * __cdecl16near FUN_1000_04bf(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar1 = param_1;
  *piVar1 = *piVar1 - param_2;
  piVar3 = (int *)(*param_1 + (int)param_1);
  *piVar3 = param_2 + 1;
  *(int **)(piVar3 + 1) = param_1;
  piVar2 = piVar3;
  if (DAT_11db_0628 != param_1) {
    *(int **)((int)piVar3 + param_2 + 2) = piVar3;
    piVar2 = DAT_11db_0628;
  }
  DAT_11db_0628 = piVar2;
  return piVar3 + 2;
}



int * __cdecl16near FUN_1000_04f9(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)FUN_1000_0607(param_1,0);
  if (piVar1 == (int *)0xffff) {
    piVar2 = (int *)0x0;
  }
  else {
    *(int **)(piVar1 + 1) = DAT_11db_0628;
    *piVar1 = param_1 + 1;
    piVar2 = piVar1 + 2;
    DAT_11db_0628 = piVar1;
  }
  return piVar2;
}



int * __cdecl16near FUN_1000_0536(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_1000_0607(param_1,0);
  if (piVar1 == (int *)0xffff) {
    piVar1 = (int *)0x0;
  }
  else {
    DAT_11db_0628 = piVar1;
    DAT_11db_062c = piVar1;
    *piVar1 = param_1 + 1;
    piVar1 = piVar1 + 2;
  }
  return piVar1;
}



uint * __cdecl16near FUN_1000_0570(uint param_1)

{
  uint *puVar1;
  undefined2 uVar2;
  uint uVar3;
  uint *puVar4;
  
  if ((param_1 == 0) || (0xfff4 < param_1)) {
    uVar2 = 0;
  }
  else {
    uVar3 = param_1 + 0xb & 0xfff8;
    if (DAT_11db_062c == 0) {
      uVar2 = FUN_1000_0536(uVar3);
    }
    else {
      puVar4 = DAT_11db_062a;
      if (DAT_11db_062a != (uint *)0x0) {
        do {
          if (uVar3 + 0x28 <= *puVar4) {
            uVar2 = FUN_1000_04bf(puVar4,uVar3);
            return (uint *)uVar2;
          }
          if (uVar3 <= *puVar4) {
            FUN_1000_0491(puVar4);
            puVar1 = puVar4;
            *puVar1 = *puVar1 + 1;
            return puVar4 + 2;
          }
          puVar4 = (uint *)puVar4[3];
        } while (puVar4 != DAT_11db_062a);
      }
      uVar2 = FUN_1000_04f9(uVar3);
    }
  }
  return (uint *)uVar2;
}



undefined2 __cdecl16near FUN_1000_05e3(undefined *param_1)

{
  undefined2 uVar1;
  undefined auStack258 [256];
  
  if (param_1 < auStack258) {
    DAT_11db_009e = param_1;
    uVar1 = 0;
  }
  else {
    DAT_11db_0094 = 8;
    uVar1 = 0xffff;
  }
  return uVar1;
}



uint __cdecl16near FUN_1000_0607(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1 + DAT_11db_009e;
  if ((param_2 + (uint)CARRY2(param_1,DAT_11db_009e) + (uint)(0xfeff < uVar1) != 0) ||
     (uVar2 = DAT_11db_009e, &stack0xfffe <= (undefined *)(uVar1 + 0x100))) {
    DAT_11db_0094 = 8;
    uVar2 = 0xffff;
    uVar1 = DAT_11db_009e;
  }
  DAT_11db_009e = uVar1;
  return uVar2;
}



void __cdecl16near FUN_1000_063b(undefined2 param_1)

{
  FUN_1000_05e3(param_1);
  return;
}



void __cdecl16near FUN_1000_0649(int param_1)

{
  FUN_1000_0607(param_1,param_1 >> 0xf);
  return;
}



int FUN_1000_065b(int *param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  int local_4;
  
  local_4 = *param_1;
  if ((param_1[1] & 0x40U) == 0) {
    iVar2 = local_4;
    pcVar5 = (char *)param_1[5];
    while (iVar3 = iVar2 + -1, iVar2 != 0) {
      pcVar4 = pcVar5 + 1;
      pcVar1 = pcVar5;
      iVar2 = iVar3;
      pcVar5 = pcVar4;
      if (*pcVar1 == '\n') {
        local_4 = local_4 + 1;
      }
    }
  }
  return local_4;
}



undefined2 __cdecl16near FUN_1000_06a2(int *param_1,uint param_2,int param_3,int param_4)

{
  uint *puVar1;
  int iVar2;
  undefined2 uVar3;
  uint uVar4;
  bool bVar5;
  long lVar6;
  
  iVar2 = FUN_1000_0dcd(param_1);
  if (iVar2 == 0) {
    if ((param_4 == 1) && (0 < *param_1)) {
      uVar4 = FUN_1000_065b(param_1);
      bVar5 = param_2 < uVar4;
      param_2 = param_2 - uVar4;
      param_3 = (param_3 - ((int)uVar4 >> 0xf)) - (uint)bVar5;
    }
    puVar1 = (uint *)(param_1 + 1);
    *puVar1 = *puVar1 & 0xfe5f;
    *param_1 = 0;
    param_1[5] = param_1[4];
    lVar6 = FUN_1000_0c28((int)*(char *)(param_1 + 2),param_2,param_3,param_4);
    if (lVar6 == -1) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0xffff;
  }
  return uVar3;
}



long __cdecl16near FUN_1000_0706(int *param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = FUN_1000_0dcd(param_1);
  if (iVar1 == 0) {
    lVar2 = FUN_1000_1d4e((int)*(char *)(param_1 + 2));
    if (0 < *param_1) {
      iVar1 = FUN_1000_065b(param_1);
      lVar2 = lVar2 - iVar1;
    }
  }
  else {
    lVar2 = -1;
  }
  return lVar2;
}



void __cdecl16near FUN_1000_075b(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0x342;
  iVar2 = 0x14;
  while (iVar2 != 0) {
    if ((*(uint *)(iVar1 + 2) & 0x300) == 0x300) {
      FUN_1000_0dcd(iVar1);
    }
    iVar1 = iVar1 + 0x10;
    iVar2 = iVar2 + -1;
  }
  return;
}



undefined2 FUN_1000_0782(int *param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  
  if ((param_1[1] & 0x200U) != 0) {
    FUN_1000_075b();
  }
  iVar3 = param_1[3];
  iVar2 = param_1[4];
  param_1[5] = iVar2;
  iVar3 = FUN_1000_09f7((int)*(char *)(param_1 + 2),iVar2,iVar3);
  *param_1 = iVar3;
  if (iVar3 < 1) {
    if (*param_1 == 0) {
      param_1[1] = param_1[1] & 0xfe7fU | 0x20;
    }
    else {
      *param_1 = 0;
      puVar1 = (uint *)(param_1 + 1);
      *puVar1 = *puVar1 | 0x10;
    }
    uVar4 = 0xffff;
  }
  else {
    puVar1 = (uint *)(param_1 + 1);
    *puVar1 = *puVar1 & 0xffdf;
    uVar4 = 0;
  }
  return uVar4;
}



void __cdecl16near FUN_1000_07df(int *param_1)

{
  int *piVar1;
  
  piVar1 = param_1;
  *piVar1 = *piVar1 + 1;
  FUN_1000_07f2(param_1);
  return;
}



uint __cdecl16near FUN_1000_07f2(int *param_1)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  byte local_3;
  
  while( true ) {
    piVar1 = param_1;
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    if (SBORROW2(iVar3,1) == *piVar1 < 0) {
      piVar1 = param_1 + 5;
      *piVar1 = *piVar1 + 1;
      return (uint)*(byte *)(param_1[5] + -1);
    }
    piVar1 = param_1;
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + 1;
    if ((SCARRY2(iVar3,1) != *piVar1 < 0) || ((param_1[1] & 0x110U) != 0)) break;
    while (puVar2 = (uint *)(param_1 + 1), *puVar2 = *puVar2 | 0x80, param_1[3] == 0) {
      if ((DAT_11db_04aa != 0) || (param_1 != (int *)0x342)) {
        while( true ) {
          if ((param_1[1] & 0x200U) != 0) {
            FUN_1000_075b();
          }
          iVar3 = FUN_1000_0ab3((int)*(char *)(param_1 + 2),&local_3,1);
          if (iVar3 != 1) break;
          if ((local_3 != 0xd) || ((param_1[1] & 0x40U) != 0)) {
            puVar2 = (uint *)(param_1 + 1);
            *puVar2 = *puVar2 & 0xffdf;
            return (uint)local_3;
          }
        }
        iVar3 = FUN_1000_0d5f((int)*(char *)(param_1 + 2));
        if (iVar3 == 1) {
          param_1[1] = param_1[1] & 0xfe7fU | 0x20;
        }
        else {
          puVar2 = (uint *)(param_1 + 1);
          *puVar2 = *puVar2 | 0x10;
        }
        return 0xffff;
      }
      iVar3 = FUN_1000_08f2((int)cRam000120f6);
      if (iVar3 == 0) {
        DAT_11db_0344 = DAT_11db_0344 & 0xfdff;
      }
      FUN_1000_0904(0x342,0,(uint)((DAT_11db_0344 & 0x200) != 0),0x200);
    }
    iVar3 = FUN_1000_0782(param_1);
    if (iVar3 != 0) {
      return 0xffff;
    }
  }
  puVar2 = (uint *)(param_1 + 1);
  *puVar2 = *puVar2 | 0x10;
  return 0xffff;
}



uint __cdecl16near FUN_1000_08f2(void)

{
  code *pcVar1;
  uint extraout_DX;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return extraout_DX & 0x80;
}



undefined2 __cdecl16near FUN_1000_0904(int *param_1,int param_2,int param_3,uint param_4)

{
  uint *puVar1;
  undefined2 uVar2;
  
  if ((((int *)param_1[7] == param_1) && (param_3 < 3)) && (param_4 < 0x8000)) {
    if ((DAT_11db_04ac == 0) && (param_1 == (int *)0x352)) {
      DAT_11db_04ac = 1;
    }
    else {
      if ((DAT_11db_04aa == 0) && (param_1 == (int *)0x342)) {
        DAT_11db_04aa = 1;
      }
    }
    if (*param_1 != 0) {
      FUN_1000_06a2(param_1,0,0,1);
    }
    if ((param_1[1] & 4U) != 0) {
      FUN_1000_16ad(param_1[4]);
    }
    puVar1 = (uint *)(param_1 + 1);
    *puVar1 = *puVar1 & 0xfff3;
    param_1[3] = 0;
    param_1[4] = (int)param_1 + 5;
    param_1[5] = (int)param_1 + 5;
    if ((param_3 != 2) && (param_4 != 0)) {
      DAT_11db_0234 = 0x9d6;
      if (param_2 == 0) {
        param_2 = FUN_1000_0570(param_4);
        if (param_2 == 0) {
          return 0xffff;
        }
        puVar1 = (uint *)(param_1 + 1);
        *puVar1 = *puVar1 | 4;
      }
      param_1[5] = param_2;
      param_1[4] = param_2;
      param_1[3] = param_4;
      if (param_3 == 1) {
        puVar1 = (uint *)(param_1 + 1);
        *puVar1 = *puVar1 | 8;
      }
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffff;
  }
  return uVar2;
}



char * __cdecl16near FUN_1000_09f7(int param_1,char *param_2,int param_3)

{
  uint *puVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  undefined2 uVar8;
  char local_3;
  
  if ((param_3 + 1U < 2) || ((*(uint *)(param_1 * 2 + 0x482) & 0x200) != 0)) {
    pcVar4 = (char *)0x0;
  }
  else {
    do {
      iVar5 = FUN_1000_0ab3(param_1,param_2,param_3);
      if (iVar5 + 1U < (uint)&DAT_11db_0002) {
        return (char *)iVar5;
      }
      pcVar7 = param_2;
      pcVar3 = param_2;
      if ((*(uint *)(param_1 * 2 + 0x482) & 0x8000) != 0) {
        return (char *)iVar5;
      }
      do {
        while( true ) {
          pcVar4 = pcVar3;
          cVar2 = *pcVar7;
          pcVar6 = param_2;
          if (cVar2 == '\x1a') {
            FUN_1000_0c28(param_1,-iVar5,-(uint)(iVar5 != 0),2);
            puVar1 = (uint *)(param_1 * 2 + 0x482);
            *puVar1 = *puVar1 | 0x200;
            goto LAB_1000_0aa7;
          }
          if (cVar2 == '\r') break;
          *pcVar4 = cVar2;
          iVar5 = iVar5 + -1;
          pcVar7 = pcVar7 + 1;
          pcVar3 = pcVar4 + 1;
          if (iVar5 == 0) goto LAB_1000_0a7f;
        }
        iVar5 = iVar5 + -1;
        pcVar7 = pcVar7 + 1;
        pcVar3 = pcVar4;
      } while (iVar5 != 0);
      uVar8 = 0x11db;
      FUN_1000_0ab3(param_1,&local_3,1);
      *pcVar4 = local_3;
LAB_1000_0a7f:
      pcVar4 = pcVar4 + 1;
    } while (pcVar4 == pcVar6);
LAB_1000_0aa7:
    pcVar4 = pcVar4 + -(int)pcVar6;
  }
  return pcVar4;
}



void __cdecl16near FUN_1000_0ab3(void)

{
  code *pcVar1;
  bool in_CF;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if (in_CF) {
    FUN_1000_02c5();
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00010b79)
// WARNING: Removing unreachable block (ram,0x00010bc7)

char * __cdecl16near FUN_1000_0acf(int param_1,char *param_2,char *param_3)

{
  uint *puVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  char *local_8a;
  char *local_86;
  char local_84 [130];
  
  if (param_3 + 1 < (char *)0x2) {
    param_3 = (char *)0x0;
  }
  else {
    if ((*(uint *)(param_1 * 2 + 0x482) & 0x8000) == 0) {
      puVar1 = (uint *)(param_1 * 2 + 0x482);
      *puVar1 = *puVar1 & 0xfdff;
      local_86 = param_2;
      local_8a = param_3;
      pcVar4 = local_84;
      while (local_8a != (char *)0x0) {
        local_8a = local_8a + -1;
        pcVar3 = local_86 + 1;
        cVar2 = *local_86;
        if (cVar2 == '\n') {
          *pcVar4 = '\r';
          pcVar4 = pcVar4 + 1;
        }
        *pcVar4 = cVar2;
        pcVar4 = pcVar4 + 1;
        local_86 = pcVar3;
        if (0x7f < (int)(pcVar4 + -(int)local_84)) {
          pcVar4 = pcVar4 + -(int)local_84;
          pcVar3 = (char *)FUN_1000_0be2(param_1,local_84,pcVar4);
          if (pcVar3 != pcVar4) {
            return pcVar3 + (int)(param_3 + (-(int)pcVar4 - (int)local_8a));
          }
          pcVar4 = local_84;
        }
      }
      pcVar4 = pcVar4 + -(int)local_84;
      if ((pcVar4 != (char *)0x0) &&
         (pcVar3 = (char *)FUN_1000_0be2(param_1,local_84,pcVar4), pcVar3 != pcVar4)) {
        param_3 = pcVar3 + (int)(param_3 + -(int)pcVar4);
      }
    }
    else {
      param_3 = (char *)FUN_1000_0be2(param_1,param_2,param_3);
    }
  }
  return param_3;
}



undefined2 __cdecl16near FUN_1000_0be2(int param_1)

{
  uint *puVar1;
  code *pcVar2;
  undefined2 uVar3;
  bool bVar4;
  
  bVar4 = false;
  if ((*(uint *)(param_1 * 2 + 0x482) & 0x800) != 0) {
    bVar4 = false;
    FUN_1000_0c28(param_1,0,0,2);
  }
  pcVar2 = (code *)swi(0x21);
  uVar3 = (*pcVar2)();
  if (bVar4) {
    uVar3 = FUN_1000_02c5();
  }
  else {
    puVar1 = (uint *)(param_1 * 2 + 0x482);
    *puVar1 = *puVar1 | 0x1000;
  }
  return uVar3;
}



void __cdecl16near FUN_1000_0c28(int param_1)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  
  puVar1 = (uint *)(param_1 * 2 + 0x482);
  bVar3 = false;
  *puVar1 = *puVar1 & 0xfdff;
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  if (bVar3) {
    FUN_1000_02c5();
  }
  return;
}



char * FUN_1000_0c53(char param_1,char param_2,uint param_3,char *param_4,uint param_5,uint param_6)

{
  char *pcVar1;
  byte bVar2;
  ulong uVar3;
  char cVar4;
  byte *pbVar5;
  byte *pbVar6;
  char *pcVar7;
  bool bVar8;
  byte local_24 [34];
  
  pcVar7 = param_4;
  if ((param_3 < 0x25) && (1 < (byte)param_3)) {
    if (((int)param_6 < 0) && (param_2 != '\0')) {
      *param_4 = '-';
      pcVar7 = param_4 + 1;
      bVar8 = param_5 != 0;
      param_5 = -param_5;
      param_6 = -(uint)bVar8 - param_6;
    }
    pbVar6 = local_24;
    if (param_6 == 0) goto LAB_1000_0c9d;
    do {
      uVar3 = (ulong)param_6;
      param_6 = param_6 / param_3;
      uVar3 = uVar3 % (ulong)param_3 << 0x10 | (ulong)param_5;
      param_5 = (uint)(uVar3 / (ulong)param_3);
      *pbVar6 = (byte)(uVar3 % (ulong)param_3);
      pbVar6 = pbVar6 + 1;
    } while (param_6 != 0);
    while (param_5 != 0) {
LAB_1000_0c9d:
      *pbVar6 = (byte)(param_5 % param_3);
      pbVar6 = pbVar6 + 1;
      param_5 = param_5 / param_3;
    }
    pbVar5 = pbVar6 + -(int)local_24;
    do {
      pbVar6 = pbVar6 + -1;
      bVar2 = *pbVar6;
      if (bVar2 < 10) {
        cVar4 = bVar2 + 0x30;
      }
      else {
        cVar4 = (bVar2 - 10) + param_1;
      }
      pcVar1 = pcVar7;
      pcVar7 = pcVar7 + 1;
      *pcVar1 = cVar4;
      pbVar5 = pbVar5 + -1;
    } while (pbVar5 != (byte *)0x0);
  }
  *pcVar7 = '\0';
  return param_4;
}



void __cdecl16near FUN_1000_0cd2(uint param_1,undefined2 param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 10) {
    iVar1 = (int)param_1 >> 0xf;
  }
  else {
    iVar1 = 0;
  }
  FUN_1000_0c53(param_1 & 0xff00 | 0x61,CONCAT11((char)(param_1 >> 8),1),param_3,param_2,param_1,
                iVar1);
  return;
}



void __cdecl16near
FUN_1000_0cfb(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  uint in_AX;
  
  FUN_1000_0c53(CONCAT11((char)(in_AX >> 8),0x61),in_AX & 0xff00,param_4,param_3,param_1,param_2);
  return;
}



void __cdecl16near
FUN_1000_0d17(undefined2 param_1,undefined2 param_2,undefined2 param_3,int param_4)

{
  FUN_1000_0c53(0x61,(uint)(param_4 == 10),param_4,param_3,param_1,param_2);
  return;
}



void FUN_1000_0d3e(void)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  int unaff_SI;
  
  iVar4 = 2;
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  FUN_1000_01da();
  cVar3 = FUN_1000_0121();
  pcVar1 = (char *)(iVar4 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar3;
  return;
}



void FUN_1000_0d43(void)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  int unaff_SI;
  
  iVar4 = 2;
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  FUN_1000_01da();
  cVar3 = FUN_1000_0121();
  pcVar1 = (char *)(iVar4 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar3;
  return;
}



// WARNING: Removing unreachable block (ram,0x00010db5)

undefined2 __cdecl16near FUN_1000_0d5f(int param_1)

{
  code *pcVar1;
  undefined2 uVar2;
  bool bVar3;
  ulong uVar4;
  undefined4 uVar5;
  ulong uVar6;
  
  bVar3 = false;
  if ((*(uint *)(param_1 * 2 + 0x482) & 0x200) != 0) {
    return 1;
  }
  pcVar1 = (code *)swi(0x21);
  uVar4 = (*pcVar1)();
  uVar2 = (undefined2)uVar4;
  if (!bVar3) {
    if ((uVar4 & 0x800000) != 0) {
      return 0;
    }
    bVar3 = false;
    pcVar1 = (code *)swi(0x21);
    uVar5 = (*pcVar1)();
    uVar2 = (undefined2)uVar5;
    if (!bVar3) {
      bVar3 = false;
      pcVar1 = (code *)swi(0x21);
      uVar4 = (*pcVar1)((int)((ulong)uVar5 >> 0x10));
      uVar2 = (undefined2)uVar4;
      if (!bVar3) {
        pcVar1 = (code *)swi(0x21);
        uVar6 = (*pcVar1)();
        uVar2 = (undefined2)uVar6;
        if (!bVar3) {
          if (uVar6 < uVar4) {
            return 0;
          }
          return 1;
        }
      }
    }
  }
  uVar2 = FUN_1000_02c5(uVar2);
  return uVar2;
}



undefined2 __cdecl16near FUN_1000_0dcd(int *param_1)

{
  int *piVar1;
  uint *puVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  
  if ((int *)param_1[7] == param_1) {
    if (*param_1 < 0) {
      iVar5 = param_1[3] + *param_1 + 1;
      piVar1 = param_1;
      *piVar1 = *piVar1 - iVar5;
      iVar4 = param_1[4];
      param_1[5] = iVar4;
      iVar4 = FUN_1000_0acf((int)*(char *)(param_1 + 2),iVar4,iVar5);
      if ((iVar4 == iVar5) || ((param_1[1] & 0x200U) != 0)) {
        uVar3 = 0;
      }
      else {
        puVar2 = (uint *)(param_1 + 1);
        *puVar2 = *puVar2 | 0x10;
        uVar3 = 0xffff;
      }
    }
    else {
      if ((((param_1[1] & 8U) != 0) || (param_1[5] == (int)param_1 + 5)) &&
         (*param_1 = 0, param_1[5] == (int)param_1 + 5)) {
        param_1[5] = param_1[4];
      }
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0xffff;
  }
  return uVar3;
}



void __cdecl16near FUN_1000_0e4b(undefined2 param_1)

{
  FUN_1000_1073(&stack0x0004,param_1,0x352,0xf81);
  return;
}



void __cdecl16near FUN_1000_0e64(char param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = param_2;
  *piVar1 = *piVar1 + -1;
  FUN_1000_0e7d((int)param_1,param_2);
  return;
}



uint __cdecl16near FUN_1000_0e7d(undefined param_1,int *param_2)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  byte local_3;
  
  piVar3 = param_2;
  local_3 = param_1;
  while( true ) {
    piVar1 = piVar3;
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + 1;
    if (SCARRY2(iVar4,1) != *piVar1 < 0) {
      piVar1 = piVar3 + 5;
      *piVar1 = *piVar1 + 1;
      *(byte *)(piVar3[5] + -1) = local_3;
      if (((piVar3[1] & 8U) != 0) &&
         (((local_3 == 10 || (local_3 == 0xd)) && (iVar4 = FUN_1000_0dcd(piVar3), iVar4 != 0)))) {
        return 0xffff;
      }
      return (uint)local_3;
    }
    piVar1 = piVar3;
    *piVar1 = *piVar1 + -1;
    if (((piVar3[1] & 0x90U) != 0) || ((piVar3[1] & 2U) == 0)) {
      puVar2 = (uint *)(piVar3 + 1);
      *puVar2 = *puVar2 | 0x10;
      return 0xffff;
    }
    puVar2 = (uint *)(piVar3 + 1);
    *puVar2 = *puVar2 | 0x100;
    if (piVar3[3] == 0) break;
    if (*piVar3 == 0) {
      *piVar3 = -1 - piVar3[3];
    }
    else {
      iVar4 = FUN_1000_0dcd(piVar3);
      if (iVar4 != 0) {
        return 0xffff;
      }
    }
  }
  if (((((local_3 == 10) && ((piVar3[1] & 0x40U) == 0)) &&
       (iVar4 = FUN_1000_0be2((int)*(char *)(piVar3 + 2),0x4e0,1), iVar4 != 1)) ||
      (iVar4 = FUN_1000_0be2((int)*(char *)(piVar3 + 2),&param_1,1), iVar4 != 1)) &&
     ((piVar3[1] & 0x200U) == 0)) {
    puVar2 = (uint *)(piVar3 + 1);
    *puVar2 = *puVar2 | 0x10;
    return 0xffff;
  }
  return (uint)local_3;
}



void __cdecl16near FUN_1000_0f6b(undefined2 param_1)

{
  FUN_1000_0e7d(param_1,0x352);
  return;
}



uint FUN_1000_0f81(int *param_1,uint param_2,undefined2 *param_3)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = param_2;
  if ((param_1[1] & 8U) == 0) {
    if ((((param_1[1] & 0x40U) == 0) || (param_1[3] == 0)) || (param_2 <= (uint)param_1[3])) {
      do {
        if (uVar4 == 0) {
          return param_2;
        }
        piVar1 = param_1;
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + 1;
        if (SCARRY2(iVar3,1) == *piVar1 < 0) {
          uVar5 = FUN_1000_0e64(*param_3,param_1);
        }
        else {
          bVar2 = *(byte *)param_3;
          piVar1 = param_1 + 5;
          *piVar1 = *piVar1 + 1;
          *(byte *)(param_1[5] + -1) = bVar2;
          uVar5 = (uint)bVar2;
        }
        param_3 = (undefined2 *)((int)param_3 + 1);
        uVar4 = uVar4 - 1;
      } while (uVar5 != 0xffff);
      param_2 = 0;
    }
    else {
      if ((*param_1 == 0) || (iVar3 = FUN_1000_0dcd(param_1), iVar3 == 0)) {
        uVar4 = FUN_1000_0be2((int)*(char *)(param_1 + 2),param_3,param_2);
        if (uVar4 < param_2) {
          param_2 = 0;
        }
      }
      else {
        param_2 = 0;
      }
    }
  }
  else {
    do {
      if (uVar4 == 0) {
        return param_2;
      }
      iVar3 = FUN_1000_0e7d((int)(char)*(byte *)param_3,param_1);
      uVar4 = uVar4 - 1;
      param_3 = (undefined2 *)((int)param_3 + 1);
    } while (iVar3 != -1);
    param_2 = 0;
  }
  return param_2;
}



void thunk_FUN_1000_0d3e(void)

{
                    // WARNING: Could not recover jumptable at 0x00011044. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_11db_05e0)();
  return;
}



void FUN_1000_1048(undefined2 param_1)

{
  byte bVar1;
  undefined *unaff_DI;
  undefined2 unaff_ES;
  
  bVar1 = (byte)((uint)param_1 >> 8);
  *unaff_DI = *(undefined *)(ulong)((uint)(bVar1 >> 4) + 0x4e9);
  unaff_DI[1] = *(undefined *)(ulong)((uint)(bVar1 & 0xf) + 0x4e9);
  unaff_DI[2] = *(undefined *)(ulong)((uint)(byte)((byte)param_1 >> 4) + 0x4e9);
  unaff_DI[3] = *(undefined *)(ulong)((uint)((byte)param_1 & 0xf) + 0x4e9);
  return;
}



int FUN_1000_1073(undefined4 *param_1,byte *param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  byte *pbVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  undefined4 uVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  byte bVar13;
  uint *puVar14;
  char *pcVar15;
  uint *puVar16;
  uint *puVar17;
  byte bVar19;
  int iVar18;
  char *pcVar20;
  int extraout_DX;
  int extraout_DX_00;
  int extraout_DX_01;
  char cVar21;
  byte *pbVar22;
  byte *pbVar23;
  byte *pbVar24;
  undefined4 *puVar25;
  uint *puVar26;
  int *piVar27;
  uint uVar28;
  undefined2 uVar29;
  uint unaff_SS;
  uint local_9a;
  byte local_95;
  uint *local_94;
  uint *local_92;
  byte local_8f;
  int local_8e;
  undefined local_8a;
  uint local_89 [23];
  int local_5a;
  char local_57;
  byte local_56 [80];
  int local_6;
  int local_4;
  
  local_5a = 0;
  local_57 = 'P';
  local_4 = 0;
  pbVar24 = local_56;
LAB_1000_10dd:
  pbVar23 = param_2 + 1;
  bVar13 = *param_2;
  if (bVar13 != 0) {
    pbVar22 = pbVar23;
    if (bVar13 == 0x25) {
      pbVar22 = param_2 + 2;
      bVar13 = *pbVar23;
      if (bVar13 != 0x25) {
        puVar17 = (uint *)0x0;
        local_8e = 0;
        local_9a = 0;
        bVar11 = false;
        bVar10 = false;
        bVar9 = false;
        bVar8 = false;
        bVar5 = false;
        bVar6 = false;
        local_8f = 0;
        local_94 = (uint *)0xffff;
        local_92 = (uint *)0xffff;
        do {
          bVar12 = false;
          if (0x5f < (byte)(bVar13 - 0x20)) goto LAB_1000_156a;
          cVar4 = *(char *)((uint)(byte)(bVar13 - 0x20) + 0x4f9);
          cVar21 = cVar4 * '\x02';
          bVar19 = (byte)((uint)puVar17 >> 8);
          param_2 = pbVar22;
          uVar28 = unaff_SS;
          puVar16 = local_94;
          puVar26 = local_92;
          switch(cVar4) {
          case '\0':
            if (bVar19 != 0) goto LAB_1000_156a;
            if (local_8f != 0x2b) {
              local_8f = bVar13;
            }
            break;
          case '\x01':
            if (bVar19 != 0) goto LAB_1000_156a;
            local_9a = local_9a | 1;
            break;
          case '\x02':
            puVar26 = *(uint **)param_1;
            param_1 = (undefined4 *)((int)param_1 + 2);
            if (bVar19 < 2) {
              puVar17 = (uint *)0x300;
              puVar16 = puVar26;
              puVar26 = local_92;
            }
            else {
              if (bVar19 != 4) goto LAB_1000_156a;
              puVar17 = (uint *)0x500;
            }
            break;
          case '\x03':
            if (bVar19 != 0) goto LAB_1000_156a;
            local_9a = local_9a | 2;
            bVar6 = true;
            break;
          case '\x04':
            if (3 < bVar19) goto LAB_1000_156a;
            puVar17 = (uint *)0x400;
            break;
          case '\x05':
switchD_1000_1140_caseD_5:
            puVar14 = (uint *)(int)(char)(bVar13 - 0x30);
            if (bVar19 < 3) {
              puVar17 = (uint *)0x200;
              puVar16 = puVar14;
              if (-1 < (int)local_94) {
                puVar16 = puVar14 + (int)local_94 * 5;
              }
            }
            else {
              if (bVar19 != 4) goto LAB_1000_156a;
              puVar26 = puVar14;
              if (-1 < (int)local_92) {
                puVar26 = puVar14 + (int)local_92 * 5;
              }
            }
            break;
          case '\x06':
            local_9a = local_9a | 0x10;
            bVar5 = true;
            puVar17 = (uint *)0x500;
            break;
          case '\a':
            local_9a = local_9a & 0xffef | 0x100;
            bVar11 = true;
            bVar5 = false;
            puVar17 = (uint *)0x500;
            break;
          case '\b':
            local_9a = local_9a & 0xffef | 0x80;
            bVar10 = true;
            bVar5 = false;
            puVar17 = (uint *)0x500;
            break;
          case '\t':
            if (bVar19 != 0) goto switchD_1000_1140_caseD_5;
            if (!bVar6) {
              local_9a = local_9a | 8;
              bVar8 = true;
              puVar17 = (uint *)0x100;
            }
            break;
          case '\n':
            goto switchD_1000_1140_caseD_a;
          case '\v':
            uVar29 = CONCAT11(8,cVar21);
            goto LAB_1000_127a;
          case '\f':
            uVar29 = CONCAT11(10,cVar21);
            goto LAB_1000_127f;
          case '\r':
            uVar29 = CONCAT11(0x10,bVar13 - 0x17);
LAB_1000_127a:
            local_8f = 0;
LAB_1000_127f:
            local_95 = 0;
            pcVar15 = *(char **)param_1;
            pcVar20 = (char *)0x0;
            goto LAB_1000_12a2;
          case '\x0e':
            puVar17 = (uint *)&local_8a;
            puVar25 = (undefined4 *)((int)param_1 + 2);
            if (bVar9) {
              FUN_1000_1048(*(char **)(undefined4 *)((int)param_1 + 2),*(char **)param_1);
              puVar17 = local_89;
              local_8a = 0x3a;
              puVar25 = param_1 + 1;
            }
            param_1 = puVar25;
            FUN_1000_1048();
            *(undefined *)puVar17 = 0;
            puVar26 = (uint *)&local_8a;
            puVar17 = (uint *)((int)puVar17 - (int)puVar26);
            goto LAB_1000_1427;
          case '\x0f':
            puVar17 = local_92;
            if ((int)local_92 < 0) {
              puVar17 = (uint *)(s_Turbo_C___Copyright__c__1988_Bor_11db_0004 + 2);
            }
            if (bVar10) {
              uVar29 = 2;
              local_6 = 4;
            }
            else {
              if (bVar11) {
                uVar29 = 8;
                local_6 = 10;
              }
              else {
                local_6 = 8;
                uVar29 = 6;
              }
            }
            thunk_FUN_1000_0d3e(uVar29,local_9a & 1,(uint)bVar13,local_89,puVar17,param_1);
            puVar26 = local_89;
            param_1 = (undefined4 *)((int)param_1 + local_6);
            goto LAB_1000_1427;
          case '\x10':
            puVar1 = param_1;
            param_1 = (undefined4 *)((int)param_1 + 2);
            puVar26 = local_89;
            local_89[0] = (uint)*(char **)puVar1 & 0xff;
            puVar17 = (uint *)0x1;
            goto LAB_1000_1468;
          case '\x11':
            if (bVar9) {
              uVar7 = *param_1;
              uVar28 = (uint)((ulong)uVar7 >> 0x10);
              puVar26 = (uint *)uVar7;
              param_1 = param_1 + 1;
              puVar16 = (uint *)(uVar28 | (uint)puVar26);
            }
            else {
              puVar26 = *(uint **)param_1;
              param_1 = (undefined4 *)((int)param_1 + 2);
              uVar28 = 0x11db;
              puVar16 = puVar26;
            }
            if (puVar16 == (uint *)0x0) {
              uVar28 = 0x11db;
              puVar26 = (uint *)0x4e2;
            }
            FUN_1000_108c();
            if (local_92 < puVar17) {
              puVar17 = local_92;
            }
            goto LAB_1000_1468;
          case '\x12':
            if (bVar9) {
              uVar7 = *param_1;
              uVar29 = (undefined2)((ulong)uVar7 >> 0x10);
              piVar27 = (int *)uVar7;
              param_1 = param_1 + 1;
            }
            else {
              piVar27 = *(int **)param_1;
              param_1 = (undefined4 *)((int)param_1 + 2);
              uVar29 = 0x11db;
            }
            *piVar27 = (uint)(byte)(0x50 - local_57) + local_5a;
            goto LAB_1000_10dd;
          default:
            goto LAB_1000_156a;
          case '\x16':
            local_9a = local_9a & 0xffdf;
            bVar9 = false;
            puVar17 = (uint *)0x500;
            break;
          case '\x17':
            local_9a = local_9a | 0x20;
            bVar9 = true;
            puVar17 = (uint *)0x500;
          }
          local_92 = puVar26;
          local_94 = puVar16;
          pbVar3 = pbVar22;
          pbVar22 = pbVar22 + 1;
          bVar13 = *pbVar3;
        } while( true );
      }
    }
    *pbVar24 = bVar13;
    pbVar24 = pbVar24 + 1;
    cVar4 = local_57 + -1;
    bVar6 = local_57 < '\x01';
    param_2 = pbVar22;
    local_57 = cVar4;
    if (cVar4 == '\0' || bVar6) {
      FUN_1000_10a1();
    }
    goto LAB_1000_10dd;
  }
  goto LAB_1000_1572;
switchD_1000_1140_caseD_a:
  uVar29 = CONCAT11(10,cVar21);
  local_95 = 1;
  pcVar15 = *(char **)param_1;
  pcVar20 = (char *)((int)pcVar15 >> 0xf);
LAB_1000_12a2:
  puVar25 = (undefined4 *)((int)param_1 + 2);
  if (bVar5) {
    pcVar20 = *(char **)puVar25;
    puVar25 = param_1 + 1;
  }
  puVar26 = local_89;
  param_1 = puVar25;
  if ((pcVar15 == (char *)0x0) && (pcVar20 == (char *)0x0)) {
    if (local_92 == (uint *)0x0) {
      if ((local_94 != (uint *)0x0) && (local_94 != (uint *)0xffff)) {
        do {
          FUN_1000_1099();
          local_94 = (uint *)((int)local_94 + -1);
        } while (local_94 != (uint *)0x0);
      }
      goto LAB_1000_10dd;
    }
  }
  else {
    local_9a = local_9a | 4;
  }
  FUN_1000_0c53(uVar29,(uint)local_95,(int)(char)((uint)uVar29 >> 8),puVar26,pcVar15,pcVar20);
  if ((int)local_92 < 1) {
LAB_1000_1427:
    if ((!bVar8) || ((int)local_94 < 1)) goto LAB_1000_1449;
  }
  FUN_1000_108c();
  if (*(byte *)puVar26 == 0x2d) {
    puVar17 = (uint *)((int)puVar17 + -1);
  }
  if (extraout_DX - (int)puVar17 != 0 && (int)puVar17 <= extraout_DX) {
    local_8e = extraout_DX - (int)puVar17;
  }
LAB_1000_1449:
  if ((local_8f != 0) && (*(byte *)puVar26 != 0x2d)) {
    local_8e = local_8e + -1 + (uint)(local_8e == 0);
    puVar26 = (uint *)((int)puVar26 + -1);
    *(byte *)puVar26 = local_8f;
  }
  FUN_1000_108c();
LAB_1000_1468:
  if ((local_9a & 5) == 5) {
    if (bVar13 == 0x6f) {
      if (local_8e < 1) {
        local_8e = 1;
      }
    }
    else {
      if ((bVar13 == 0x78) || (bVar13 == 0x58)) {
        bVar12 = true;
        local_94 = local_94 + -1;
        bVar5 = local_8e < 2;
        local_8e = local_8e + -2;
        if (bVar5) {
          local_8e = 0;
        }
      }
    }
  }
  iVar18 = (int)puVar17 + local_8e;
  if (!bVar6) {
    while (iVar18 < (int)local_94) {
      FUN_1000_1099();
      local_94 = (uint *)((int)local_94 + -1);
    }
  }
  if (bVar12) {
    FUN_1000_1099();
    FUN_1000_1099();
  }
  if (0 < local_8e) {
    iVar18 = iVar18 - local_8e;
    local_94 = (uint *)((int)local_94 - local_8e);
    bVar13 = *(byte *)puVar26;
    if (((bVar13 == 0x2d) || (bVar13 == 0x20)) || (bVar13 == 0x2b)) {
      puVar26 = (uint *)((int)puVar26 + 1);
      FUN_1000_1099();
      iVar18 = iVar18 + -1;
      local_94 = (uint *)((int)local_94 + -1);
      local_8e = extraout_DX_00;
    }
    while (local_8e != 0) {
      FUN_1000_1099();
      local_8e = local_8e + -1;
      iVar18 = extraout_DX_01;
    }
  }
  if (iVar18 != 0) {
    local_94 = (uint *)((int)local_94 - iVar18);
    do {
      puVar2 = puVar26;
      puVar26 = (uint *)((int)puVar26 + 1);
      *pbVar24 = *(byte *)puVar2;
      pbVar24 = pbVar24 + 1;
      cVar4 = local_57 + -1;
      bVar6 = local_57 < '\x01';
      local_57 = cVar4;
      if (cVar4 == '\0' || bVar6) {
        FUN_1000_10a1();
      }
      iVar18 = iVar18 + -1;
    } while (iVar18 != 0);
  }
  if (0 < (int)local_94) {
    do {
      FUN_1000_1099();
      local_94 = (uint *)((int)local_94 + -1);
    } while (local_94 != (uint *)0x0);
  }
  goto LAB_1000_10dd;
LAB_1000_156a:
  do {
    FUN_1000_1099();
    pbVar3 = pbVar23;
    pbVar23 = pbVar23 + 1;
  } while (*pbVar3 != 0);
LAB_1000_1572:
  if (local_57 < 'P') {
    FUN_1000_10a1();
  }
  if (local_4 != 0) {
    local_5a = -1;
  }
  return local_5a;
}



void __cdecl16near FUN_1000_108c(void)

{
  char *pcVar1;
  int iVar2;
  char *unaff_DI;
  undefined2 unaff_ES;
  
  iVar2 = -1;
  do {
    if (iVar2 == 0) {
      return;
    }
    iVar2 = iVar2 + -1;
    pcVar1 = unaff_DI;
    unaff_DI = unaff_DI + 1;
  } while (*pcVar1 != '\0');
  return;
}



void __cdecl16near FUN_1000_1099(void)

{
  char *pcVar1;
  int *piVar2;
  char cVar3;
  undefined in_AL;
  int iVar4;
  int unaff_BP;
  undefined *unaff_DI;
  undefined2 unaff_SS;
  
  *unaff_DI = in_AL;
  pcVar1 = (char *)(unaff_BP + -0x55);
  cVar3 = *pcVar1;
  *pcVar1 = *pcVar1 + -1;
  if (*pcVar1 != '\0' && SBORROW1(cVar3,'\x01') == *pcVar1 < '\0') {
    iVar4 = (**(code **)(unaff_BP + 10))
                      (*(undefined2 *)(unaff_BP + 8),unaff_DI + (1 - (unaff_BP + -0x54)),
                       unaff_BP + -0x54);
    if (iVar4 == 0) {
      *(undefined2 *)(unaff_BP + -2) = 1;
    }
    *(undefined *)(unaff_BP + -0x55) = 0x50;
    piVar2 = (int *)(unaff_BP + -0x58);
    *(undefined **)piVar2 = unaff_DI + (1 - (unaff_BP + -0x54)) + *piVar2;
  }
  return;
}



void __cdecl16near FUN_1000_10a1(void)

{
  int *piVar1;
  int iVar2;
  int unaff_BP;
  int unaff_DI;
  int iVar3;
  undefined2 unaff_SS;
  
  iVar3 = unaff_DI - (unaff_BP + -0x54);
  iVar2 = (**(code **)(unaff_BP + 10))(*(undefined2 *)(unaff_BP + 8),iVar3,unaff_BP + -0x54);
  if (iVar2 == 0) {
    *(undefined2 *)(unaff_BP + -2) = 1;
  }
  *(undefined *)(unaff_BP + -0x55) = 0x50;
  piVar1 = (int *)(unaff_BP + -0x58);
  *piVar1 = *piVar1 + iVar3;
  return;
}



void __cdecl16near FUN_1000_1596(int param_1)

{
  int iVar1;
  
  if (DAT_11db_062a == 0) {
    DAT_11db_062a = param_1;
    *(int *)(param_1 + 4) = param_1;
    *(int *)(param_1 + 6) = param_1;
  }
  else {
    iVar1 = *(int *)(DAT_11db_062a + 6);
    *(int *)(DAT_11db_062a + 6) = param_1;
    *(int *)(iVar1 + 4) = param_1;
    *(int *)(param_1 + 6) = iVar1;
    *(int *)(param_1 + 4) = DAT_11db_062a;
  }
  return;
}



void __cdecl16near FUN_1000_15cf(int *param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = param_1;
  *piVar1 = *piVar1 + *param_2;
  if (DAT_11db_0628 == param_2) {
    DAT_11db_0628 = param_1;
  }
  else {
    *(int **)((int)param_2 + *param_2 + 2) = param_1;
  }
  FUN_1000_0491(param_2);
  return;
}



void __cdecl16near FUN_1000_1606(void)

{
  uint *puVar1;
  
  if (DAT_11db_062c == DAT_11db_0628) {
    FUN_1000_063b(DAT_11db_062c);
    DAT_11db_0628 = (uint *)0x0;
    DAT_11db_062c = (uint *)0x0;
  }
  else {
    puVar1 = (uint *)DAT_11db_0628[1];
    if ((*puVar1 & 1) == 0) {
      FUN_1000_0491(puVar1);
      if (puVar1 == DAT_11db_062c) {
        DAT_11db_0628 = (uint *)0x0;
        DAT_11db_062c = (uint *)0x0;
      }
      else {
        DAT_11db_0628 = (uint *)puVar1[1];
      }
      FUN_1000_063b(puVar1);
    }
    else {
      FUN_1000_063b(DAT_11db_0628);
      DAT_11db_0628 = puVar1;
    }
  }
  return;
}



void __cdecl16near FUN_1000_165f(uint *param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  
  puVar1 = param_1;
  *puVar1 = *puVar1 - 1;
  puVar3 = (uint *)(*param_1 + (int)param_1);
  puVar2 = (uint *)param_1[1];
  if (((*puVar2 & 1) == 0) && (param_1 != DAT_11db_062c)) {
    puVar1 = puVar2;
    *puVar1 = *puVar1 + *param_1;
    *(uint **)(puVar3 + 1) = puVar2;
    param_1 = puVar2;
  }
  else {
    FUN_1000_1596(param_1);
  }
  if ((*puVar3 & 1) == 0) {
    FUN_1000_15cf(param_1,puVar3);
  }
  return;
}



void __cdecl16near FUN_1000_16ad(int param_1)

{
  if (param_1 != 0) {
    if (param_1 + -4 == DAT_11db_0628) {
      FUN_1000_1606();
    }
    else {
      FUN_1000_165f(param_1 + -4);
    }
  }
  return;
}



void __cdecl16near FUN_1000_16d4(undefined2 param_1)

{
  FUN_1000_16f3(0x7f2,0x1d65,0x342,param_1,&stack0x0004);
  return;
}



int __cdecl16near FUN_1000_16f3(code *param_1,code *param_2,undefined2 param_3,byte *param_4)

{
  byte *pbVar1;
  undefined2 *puVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined2 uVar8;
  byte bVar9;
  uint uVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  byte *pbVar13;
  undefined2 *puVar14;
  byte *pbVar15;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  undefined4 uVar19;
  int local_2a;
  int local_28;
  int local_26;
  undefined2 *local_24;
  undefined2 local_22 [16];
  
  local_2a = 0;
  local_28 = 0;
LAB_1000_1726:
  pbVar1 = param_4;
  param_4 = param_4 + 1;
  bVar9 = *pbVar1;
  if (bVar9 == 0) {
    return local_2a;
  }
  if (bVar9 == 0x25) {
    local_24 = (undefined2 *)0xffff;
    bVar16 = false;
    bVar17 = false;
    bVar3 = false;
    pbVar13 = param_4;
    puVar11 = local_24;
LAB_1000_1794:
    local_24 = puVar11;
    param_4 = pbVar13 + 1;
    puVar14 = (undefined2 *)(int)(char)*pbVar13;
    if ((int)puVar14 < 0) {
      return local_2a;
    }
    bVar9 = *(byte *)(puVar14 + 0x2ad);
    puVar11 = local_24;
    switch(bVar9) {
    case 0:
    case 1:
    case 2:
      goto LAB_1000_1aff;
    case 3:
      goto LAB_1000_172f;
    case 4:
      bVar3 = true;
      pbVar13 = param_4;
      goto LAB_1000_1794;
    case 5:
      pbVar13 = param_4;
      puVar11 = puVar14 + -0x18;
      if (-1 < (int)local_24) {
        puVar11 = puVar14 + -0x18 + (int)local_24 * 5;
      }
      goto LAB_1000_1794;
    case 6:
      if (!bVar3) {
        FUN_1000_1708();
      }
      puVar11 = local_24;
      if ((int)local_24 < 0) {
        puVar11 = (undefined2 *)0x1;
      }
      if (local_24 == (undefined2 *)0x0) goto LAB_1000_19f7;
      goto LAB_1000_19dd;
    case 7:
    case 8:
      uVar8 = 10;
      break;
    case 9:
      uVar8 = 0;
      break;
    case 10:
      thunk_FUN_1000_0d43(param_1,param_2,param_3,(uint)local_24 & 0x7fff,&local_28,&local_26);
      cVar4 = '\0';
      bVar18 = local_26 < 0;
      if (local_26 < 1) {
        thunk_FUN_1000_0d43();
        if ((bool)cVar4 == bVar18) {
          return local_2a;
        }
        goto switchD_1000_17b2_caseD_16;
      }
      if (bVar3) {
        thunk_FUN_1000_0d43();
      }
      else {
        FUN_1000_1708();
        local_2a = local_2a + 1;
        if (bVar17) {
          uVar8 = 4;
        }
        else {
          if (bVar16) {
            uVar8 = 8;
          }
          else {
            uVar8 = 0;
          }
        }
        thunk_FUN_1000_0d43(puVar14,uVar8);
      }
      goto LAB_1000_1726;
    case 0xb:
      bVar16 = true;
      pbVar13 = param_4;
      goto LAB_1000_1794;
    case 0xc:
      pbVar13 = param_4;
      goto LAB_1000_1794;
    case 0xd:
      bVar17 = true;
      pbVar13 = param_4;
      goto LAB_1000_1794;
    case 0xe:
      uVar8 = 8;
      break;
    case 0xf:
      iVar5 = 0x196f;
      goto LAB_1000_1b06;
    case 0x10:
      puVar11 = local_22;
      iVar5 = 0x10;
      while (iVar5 != 0) {
        iVar5 = iVar5 + -1;
        puVar2 = puVar11;
        puVar11 = puVar11 + 1;
        *puVar2 = 0;
      }
      param_4 = pbVar13 + 2;
      bVar9 = *param_4;
      bVar17 = bVar9 == 0x5e;
      if (bVar17) {
        pbVar1 = param_4;
        param_4 = pbVar13 + 3;
        bVar9 = *pbVar1;
      }
      uVar7 = (uint)bVar9;
      do {
        pbVar13 = param_4;
        pbVar15 = (byte *)(uVar7 >> 3);
        bVar9 = '\x01' << ((byte)uVar7 & 7);
        iVar5 = (uint)bVar9 << 8;
        pbVar1 = (byte *)((int)local_22 + (int)pbVar15);
        *pbVar1 = *pbVar1 | bVar9;
        uVar10 = uVar7;
        while( true ) {
          param_4 = pbVar13 + 1;
          bVar9 = *pbVar13;
          uVar7 = (uint)bVar9;
          if (bVar9 == 0) {
            return local_2a;
          }
          if (bVar9 == 0x5d) {
            puVar11 = (undefined2 *)((uint)local_24 & 0x7fff);
            unaff_ES = unaff_SS;
            local_24 = puVar11;
            if (!bVar3) {
              FUN_1000_1708();
            }
            goto LAB_1000_1a77;
          }
          if (((bVar9 != 0x2d) ||
              (pbVar1 = param_4, bVar9 = (byte)uVar10, *pbVar1 <= bVar9 && bVar9 != *pbVar1)) ||
             (*param_4 == 0x5d)) break;
          pbVar13 = pbVar13 + 2;
          cVar4 = *param_4 - bVar9;
          if (cVar4 != '\0') {
            uVar10 = (uint)(byte)(bVar9 + cVar4);
            do {
              bVar16 = iVar5 < 0;
              bVar9 = (char)((uint)iVar5 >> 8) << 1 | bVar16;
              iVar5 = (uint)bVar9 << 8;
              pbVar15 = pbVar15 + bVar16;
              pbVar1 = (byte *)((int)local_22 + (int)pbVar15);
              *pbVar1 = *pbVar1 | bVar9;
              cVar4 = cVar4 + -1;
            } while (cVar4 != '\0');
          }
        }
      } while( true );
    case 0x11:
      goto switchD_1000_17b2_caseD_11;
    case 0x12:
      uVar8 = 0x10;
      break;
    case 0x13:
      iVar5 = 0x1898;
      goto LAB_1000_1b06;
    case 0x14:
      pbVar13 = param_4;
      goto LAB_1000_1794;
    case 0x15:
      pbVar13 = param_4;
      goto LAB_1000_1794;
    default:
      goto switchD_1000_17b2_caseD_16;
    }
    if (((uint)puVar14 & 0x20) == 0) {
      bVar17 = true;
    }
    FUN_1000_1bcc(param_1,param_2,param_3,uVar8,(uint)local_24 & 0x7fff,&local_28,&local_26);
    if (local_26 < 1) {
      if (-1 < local_26) {
        return local_2a;
      }
      goto switchD_1000_17b2_caseD_16;
    }
    if (bVar3) goto LAB_1000_1726;
    local_2a = local_2a + 1;
    goto LAB_1000_187e;
  }
LAB_1000_172f:
  iVar5 = (int)(char)bVar9;
  local_28 = local_28 + 1;
  iVar6 = (*param_1)(param_3);
  if (-1 < iVar6) goto code_r0x0001173f;
  goto switchD_1000_17b2_caseD_16;
switchD_1000_17b2_caseD_11:
  pbVar13 = param_4;
  if (!bVar3) goto LAB_1000_187e;
  goto LAB_1000_1794;
LAB_1000_1a77:
  puVar14 = (undefined2 *)((int)puVar11 - 1);
  if (0 < (int)puVar11) {
    local_28 = local_28 + 1;
    uVar7 = (*param_1)(param_3);
    if ((int)uVar7 < 0) {
      if (((int)puVar11 < (int)local_24) && (!bVar3)) {
        *pbVar15 = 0;
        local_2a = local_2a + 1;
      }
      goto switchD_1000_17b2_caseD_16;
    }
    if ((*(byte *)((int)local_22 + (uVar7 >> 3)) & '\x01' << ((byte)uVar7 & 7)) == 0) {
      if (!bVar17) goto LAB_1000_1ab6;
    }
    else {
      if (bVar17) {
LAB_1000_1ab6:
        (*param_2)(uVar7,param_3);
        local_28 = local_28 + -1;
        if ((int)local_24 <= (int)puVar11) goto LAB_1000_1ad3;
        goto LAB_1000_1aca;
      }
    }
    puVar11 = puVar14;
    if (!bVar3) {
      pbVar1 = pbVar15;
      pbVar15 = pbVar15 + 1;
      *pbVar1 = (byte)uVar7;
    }
    goto LAB_1000_1a77;
  }
LAB_1000_1aca:
  if (!bVar3) {
    local_2a = local_2a + 1;
LAB_1000_1ad3:
    *pbVar15 = 0;
  }
  goto LAB_1000_1726;
LAB_1000_1b06:
  local_28 = local_28 + 1;
  iVar6 = (*param_1)(param_3);
  if (iVar6 < 1) {
    if (iVar6 != 0) {
switchD_1000_17b2_caseD_16:
      (*param_2)(0xffff,param_3);
      return local_2a - (uint)(local_2a == 0);
    }
LAB_1000_1b21:
                    // WARNING: Could not recover jumptable at 0x00011b25. Too many branches
                    // WARNING: Treating indirect jump as call
    uVar8 = (*(code *)(iVar5 + 3))();
    return uVar8;
  }
  if (((char)iVar6 < '\0') || (*(char *)(iVar6 + 0x55a) != '\x01')) goto LAB_1000_1b21;
  goto LAB_1000_1b06;
LAB_1000_187e:
  uVar19 = FUN_1000_1708();
  *puVar14 = (int)uVar19;
  if (bVar17) {
    puVar14[1] = (int)((ulong)uVar19 >> 0x10);
  }
  goto LAB_1000_1726;
  while (puVar12 = (undefined2 *)((int)puVar11 - 1), bVar17 = 0 < (int)puVar11, puVar11 = puVar12,
        puVar12 != (undefined2 *)0x0 && bVar17) {
LAB_1000_19dd:
    local_28 = local_28 + 1;
    iVar5 = (*param_1)(param_3);
    if (!bVar3) {
      puVar2 = puVar14;
      puVar14 = (undefined2 *)((int)puVar14 + 1);
      *(char *)puVar2 = (char)iVar5;
    }
    if (iVar5 < 0) goto switchD_1000_17b2_caseD_16;
  }
LAB_1000_19f7:
  if (!bVar3) {
    local_2a = local_2a + 1;
  }
  goto LAB_1000_1726;
code_r0x0001173f:
  if ((iVar5 < 0) || (*(char *)(iVar5 + 0x55a) != '\x01')) {
    if (iVar6 != iVar5) {
      (*param_2)(iVar6,param_3);
LAB_1000_1aff:
      return local_2a;
    }
  }
  else {
    while ((-1 < (char)iVar6 && (*(char *)(iVar6 + 0x55a) == '\x01'))) {
      local_28 = local_28 + 1;
      iVar6 = (*param_1)(param_3);
      if (iVar6 < 1) goto switchD_1000_17b2_caseD_16;
    }
    (*param_2)(iVar6,param_3);
    local_28 = local_28 + -1;
  }
  goto LAB_1000_1726;
}



void __cdecl16near FUN_1000_1708(void)

{
  int *piVar1;
  int unaff_BP;
  undefined2 unaff_SS;
  
  if ((*(byte *)(unaff_BP + -0x29) & 0x20) != 0) {
    piVar1 = (int *)(unaff_BP + 0xc);
    *piVar1 = *piVar1 + 4;
    return;
  }
  piVar1 = (int *)(unaff_BP + 0xc);
  *piVar1 = *piVar1 + 2;
  return;
}



void thunk_FUN_1000_0d43(void)

{
                    // WARNING: Could not recover jumptable at 0x00011b92. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_11db_05e2)();
  return;
}



void thunk_FUN_1000_0d43(void)

{
                    // WARNING: Could not recover jumptable at 0x00011b96. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_11db_05e4)();
  return;
}



void thunk_FUN_1000_0d43(void)

{
                    // WARNING: Could not recover jumptable at 0x00011b9a. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_11db_05e6)();
  return;
}



void __cdecl16near FUN_1000_1b9e(void)

{
  return;
}



undefined4 __cdecl16near
FUN_1000_1bcc(code *param_1,code *param_2,undefined2 param_3,uint param_4,int param_5,int *param_6,
             undefined2 *param_7)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  byte bVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  bool bVar16;
  char local_7;
  int local_6;
  undefined2 local_4;
  
  local_7 = '\0';
  local_6 = 0;
  local_4 = 1;
  iVar2 = local_6;
  do {
    local_6 = iVar2;
    iVar2 = local_6 + 1;
    uVar7 = (*param_1)(param_3);
    if ((int)uVar7 < 0) goto LAB_1000_1c5a;
    cVar5 = (char)uVar7;
    uVar7 = SEXT12(cVar5);
  } while (((uVar7 & 0x80) == 0) && ((*(byte *)(uVar7 + 0x241) & 1) != 0));
  if (param_5 < 1) {
LAB_1000_1c61:
    local_6 = iVar2;
    local_4 = 0;
  }
  else {
    if (cVar5 != '+') {
      iVar4 = param_5 + -1;
      if (cVar5 == '-') {
        local_7 = '\x01';
        goto LAB_1000_1c11;
      }
LAB_1000_1c24:
      local_6 = iVar2;
      param_5 = iVar4;
      uVar13 = 0;
      uVar14 = 0;
      bVar6 = (byte)uVar7;
      iVar2 = local_6;
      if (param_4 == 0) {
        param_4 = 10;
        if (bVar6 != 0x30) {
LAB_1000_1ca7:
          bVar15 = bVar6 < 0x30;
          FUN_1000_1b9e();
          uVar13 = uVar7;
          if (!bVar15) goto LAB_1000_1cbe;
          goto LAB_1000_1c61;
        }
        iVar2 = param_5 + -1;
        if (0 < param_5) {
          local_6 = local_6 + 1;
          uVar7 = (*param_1)(param_3);
          param_4 = 8;
          bVar6 = (byte)uVar7;
          bVar15 = bVar6 < 0x78;
          param_5 = iVar2;
          if ((bVar6 == 0x78) || (bVar15 = bVar6 < 0x58, bVar6 == 0x58)) {
            param_4 = 0x10;
            goto LAB_1000_1cbe;
          }
LAB_1000_1ccd:
          while (FUN_1000_1b9e(), !bVar15) {
            uVar10 = (uint)((ulong)uVar13 * (ulong)param_4 >> 0x10);
            uVar8 = (uint)((ulong)uVar13 * (ulong)param_4);
            uVar13 = uVar7 + uVar8;
            uVar7 = (uint)CARRY2(uVar7,uVar8);
            uVar8 = uVar14 + uVar10;
            bVar15 = CARRY2(uVar14,uVar10) || CARRY2(uVar8,uVar7);
            uVar14 = uVar8 + uVar7;
            if (uVar14 != 0) goto LAB_1000_1cea;
LAB_1000_1cbe:
            if (param_5 < 1) goto LAB_1000_1d0f;
            local_6 = local_6 + 1;
            uVar7 = (*param_1)(param_3);
            param_5 = param_5 + -1;
          }
LAB_1000_1d03:
          (*param_2)(uVar7,param_3);
          local_6 = local_6 + -1;
        }
      }
      else {
        if ((0x24 < param_4) || (bVar9 = (byte)param_4, bVar9 < 2)) goto LAB_1000_1c61;
        if (bVar6 != 0x30) goto LAB_1000_1ca7;
        bVar15 = bVar9 < 0x10;
        if (bVar9 != 0x10) goto LAB_1000_1cbe;
        iVar2 = param_5 + -1;
        if (0 < param_5) {
          local_6 = local_6 + 1;
          uVar7 = (*param_1)(param_3);
          bVar6 = (byte)uVar7;
          bVar15 = bVar6 < 0x78;
          param_5 = iVar2;
          if (bVar6 == 0x78) goto LAB_1000_1cbe;
          bVar15 = bVar6 < 0x58;
          if (bVar6 == 0x58) goto LAB_1000_1cbe;
          goto LAB_1000_1ccd;
        }
      }
LAB_1000_1d0f:
      if (local_7 != '\0') {
        bVar15 = uVar13 != 0;
        uVar13 = -uVar13;
        uVar14 = -(uint)bVar15 - uVar14;
      }
      goto LAB_1000_1d1f;
    }
LAB_1000_1c11:
    if (param_5 + -1 < 1) goto LAB_1000_1c61;
    uVar7 = (*param_1)(param_3);
    iVar4 = param_5 + -2;
    iVar2 = local_6 + 2;
    if (-1 < (int)uVar7) goto LAB_1000_1c24;
LAB_1000_1c5a:
    local_6 = iVar2;
    local_4 = 0xffff;
  }
  (*param_2)(uVar7,param_3);
  local_6 = local_6 + -1;
  uVar13 = 0;
  uVar14 = 0;
LAB_1000_1d1f:
  piVar1 = param_6;
  *piVar1 = *piVar1 + local_6;
  *param_7 = local_4;
  return CONCAT22(uVar14,uVar13);
  while( true ) {
    local_6 = local_6 + 1;
    uVar7 = (*param_1)(param_3);
    uVar8 = param_4;
    FUN_1000_1b9e();
    if (bVar15) goto LAB_1000_1d03;
    uVar11 = (uint)((ulong)uVar13 * (ulong)uVar8 >> 0x10);
    uVar10 = (uint)((ulong)uVar13 * (ulong)uVar8);
    lVar3 = (ulong)uVar14 * (ulong)uVar8;
    uVar13 = uVar7 + uVar10;
    uVar7 = (uint)CARRY2(uVar7,uVar10);
    uVar14 = (uint)lVar3 + uVar11;
    bVar16 = CARRY2((uint)lVar3,uVar11) || CARRY2(uVar14,uVar7);
    uVar14 = uVar14 + uVar7;
    bVar9 = (byte)((ulong)lVar3 >> 0x10);
    bVar12 = (byte)((ulong)lVar3 >> 0x18);
    bVar6 = bVar9 + bVar12;
    bVar15 = CARRY1(bVar9,bVar12) || CARRY1(bVar6,bVar16);
    param_5 = param_5 + -1;
    if ((byte)(bVar6 + bVar16) != '\0') break;
LAB_1000_1cea:
    if (param_5 < 1) goto LAB_1000_1d0f;
  }
  uVar13 = CONCAT11((local_7 != '\0') + -1,local_7 + -1);
  uVar14 = (uint)(local_7 != '\0') + 0x7fff;
  local_4 = 2;
  goto LAB_1000_1d1f;
}



void __cdecl16near FUN_1000_1d4e(undefined2 param_1)

{
  FUN_1000_0c28(param_1,0,0,1);
  return;
}



uint __cdecl16near FUN_1000_1d65(uint param_1,int *param_2)

{
  int *piVar1;
  
  if (param_1 != 0xffff) {
    piVar1 = param_2;
    *piVar1 = *piVar1 + 1;
    if (1 < *param_2) {
      piVar1 = param_2 + 5;
      *piVar1 = *piVar1 + -1;
      *(undefined *)param_2[5] = (undefined)param_1;
      return param_1 & 0xff;
    }
    if (*param_2 == 1) {
      param_2[5] = (int)param_2 + 5;
      *(undefined *)((int)param_2 + 5) = (undefined)param_1;
      return param_1 & 0xff;
    }
    piVar1 = param_2;
    *piVar1 = *piVar1 + -1;
  }
  return 0xffff;
}


