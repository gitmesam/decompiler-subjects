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
  uint uVar9;
  byte bVar10;
  uint uVar11;
  int iVar12;
  undefined2 extraout_DX;
  undefined2 extraout_DX_00;
  undefined *puVar13;
  int *piVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  byte *unaff_SI;
  int *piVar20;
  int *piVar21;
  undefined *puVar22;
  int iVar23;
  undefined2 unaff_ES;
  undefined2 uVar24;
  undefined2 uVar25;
  undefined4 uVar26;
  
  uVar25 = 0x251;
  puVar13 = (undefined *)&DAT_11ef_0080;
                    // WARNING: Read-only address (ram,0x000101f8) is written
  uRam000101f8 = 0x11ef;
  pcVar6 = (code *)swi(0x21);
  uVar26 = (*pcVar6)();
  uVar24 = s_Turbo_C___Copyright__c__1988_Bor_11ef_0004._40_2_;
  puVar19 = DAT_11ef_0002;
  iVar8 = (int)((ulong)uVar26 >> 0x10);
  *(undefined2 *)&DAT_11ef_0092 = (int)uVar26;
  *(undefined2 *)&DAT_11ef_0090 = unaff_ES;
  *(undefined2 *)&DAT_11ef_008c = uVar24;
  *(undefined **)(int *)&DAT_11ef_00ac = puVar19;
  *(undefined2 *)&DAT_11ef_0096 = 0xffff;
  *(undefined2 *)(puVar13 + -2) = 0x2e;
  FUN_1000_0162();
  uVar26 = *(undefined4 *)&DAT_11ef_008a;
  uVar24 = (undefined2)((ulong)uVar26 >> 0x10);
  piVar20 = (int *)uVar26;
  uVar11 = 0x7fff;
  piVar21 = piVar20;
  do {
    if (((*piVar21 == 0x3738) && (iVar12 = piVar21[1], (char)iVar12 == '=')) &&
       (piVar1 = (int *)&DAT_11ef_0096, *piVar1 = *piVar1 + 1,
       ((byte)((uint)iVar12 >> 8) & 0xdf) == 0x59)) {
      piVar1 = (int *)&DAT_11ef_0096;
      *piVar1 = *piVar1 + 1;
    }
    do {
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      piVar1 = piVar21;
      piVar21 = (int *)((int)piVar21 + 1);
    } while ((char)uVar26 != *(char *)piVar1);
    if (uVar11 == 0) goto LAB_1000_01e9;
    piVar20 = (int *)((int)piVar20 + 1);
  } while (*(char *)piVar21 != (char)uVar26);
  *(int *)&DAT_11ef_008a = -(uVar11 | 0x8000);
  piVar20 = (int *)((int)piVar20 * 2 + 8U & 0xfff8);
  *(int **)&DAT_11ef_008e = piVar20;
  puVar19 = puVar19 + -iVar8;
  uVar11 = *(uint *)&DAT_11ef_0224;
  if (uVar11 < 0x200) {
    uVar11 = 0x200;
    *(undefined2 *)&DAT_11ef_0224 = 0x200;
  }
  if ((uVar11 < 0xf9ea) && (puVar2 = (uint *)&DAT_11ef_0222, !CARRY2(uVar11 + 0x616,*puVar2))) {
    bVar10 = 4;
    puVar22 = (undefined *)((uVar11 + 0x616 + *puVar2 >> 4) + 1);
    if (puVar22 <= puVar19) {
      if (((*(int *)&DAT_11ef_0224 == 0) || (*(int *)&DAT_11ef_0222 == 0)) &&
         (puVar22 = (undefined *)0x1000, puVar19 < (undefined *)0x1001)) {
        puVar22 = puVar19;
      }
      puVar19 = puVar22 + iVar8;
      *(undefined **)(int *)&DAT_11ef_00a4 = puVar19;
      *(undefined **)(int *)&DAT_11ef_00a8 = puVar19;
      piVar20 = (int *)(puVar19 + -*(int *)&DAT_11ef_0090);
      piVar14 = (int *)(puVar13 + -2);
      *(undefined **)(puVar13 + -2) = puVar22;
      pcVar6 = (code *)swi(0x21);
      (*pcVar6)();
      iVar23 = *piVar14 << (bVar10 & 0x1f);
      puVar19 = (undefined *)&DAT_11ef_05d0;
      iVar12 = 0x46;
      while (iVar12 != 0) {
        iVar12 = iVar12 + -1;
        puVar5 = puVar19;
        puVar19 = puVar19 + 1;
        *puVar5 = 0;
      }
      *(undefined2 *)(iVar23 + -2) = 0x1000;
      puVar15 = (undefined *)(iVar23 + -4);
      *(undefined2 *)(iVar23 + -4) = 0xf8;
      (**(code **)&DAT_11ef_05c2)();
      puVar16 = puVar15 + -2;
      *(undefined2 *)(puVar15 + -2) = 0xfb;
      FUN_1000_03ca();
      *(undefined2 *)(puVar16 + -2) = 0xfe;
      FUN_1000_04b5();
      pcVar6 = (code *)swi(0x1a);
      (*pcVar6)();
      *(undefined2 *)&DAT_11ef_0098 = extraout_DX_00;
      *(int *)&DAT_11ef_009a = iVar12;
      puVar17 = puVar16 + -2;
      *(undefined2 *)(puVar16 + -2) = 0x10e;
      (**(code **)&DAT_11ef_05c6)();
      *(undefined2 *)(puVar17 + -2) = *(undefined2 *)&DAT_11ef_0088;
      *(undefined2 *)(puVar17 + -4) = *(undefined2 *)&DAT_11ef_0086;
      *(undefined2 *)(puVar17 + -6) = *(undefined2 *)&DAT_11ef_0084;
      *(undefined2 *)(puVar17 + -8) = 0x11d;
      uVar24 = FUN_1000_01fa();
      *(undefined2 *)(puVar17 + -8) = uVar24;
      *(undefined2 *)(puVar17 + -10) = 0x121;
      FUN_1000_0395();
      *(undefined2 *)(puVar17 + -10) = 0x129;
      FUN_1000_01a5();
      *(undefined2 *)(puVar17 + -10) = 0x1000;
      puVar19 = puVar17 + -0xc;
      *(undefined2 *)(puVar17 + -0xc) = 0x12e;
      (*pcRam000005c4)();
      iVar8 = 0;
      unaff_SI = (byte *)0x0;
      iVar12 = 0x2f;
      do {
        pbVar3 = unaff_SI;
        iVar8 = CONCAT11((char)((uint)iVar8 >> 8) + CARRY1((byte)iVar8,*pbVar3),
                         (byte)iVar8 + *pbVar3);
        unaff_SI = unaff_SI + 1;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
      if (iVar8 != 0xd37) {
        *(undefined2 *)(puVar19 + -2) = 0x14f;
        FUN_1000_01da();
      }
      pcVar6 = (code *)swi(0x21);
      puVar13 = puVar19;
      (*pcVar6)();
      uVar25 = extraout_DX;
    }
  }
LAB_1000_01e9:
  *(undefined2 *)(puVar13 + -2) = 0x1f1;
  FUN_1000_01da();
  *(undefined2 *)(puVar13 + -2) = 3;
  puVar18 = puVar13 + -4;
  *(undefined2 *)(puVar13 + -4) = 0x1f8;
  cVar7 = FUN_1000_0121();
  pcVar4 = (char *)((int)piVar20 + (int)unaff_SI);
  *pcVar4 = *pcVar4 + cVar7;
  *(undefined **)(puVar18 + -2) = puVar19;
  *(undefined **)(puVar18 + -0x18) = puVar18 + -6;
  *(undefined2 *)(puVar18 + -0x1a) = 0x194;
  *(undefined2 *)(puVar18 + -0x1c) = 0x20b;
  FUN_1000_1768();
  *(undefined2 *)(puVar18 + -0x18) = *(undefined2 *)(puVar18 + -4);
  *(undefined2 *)(puVar18 + -0x1a) = *(undefined2 *)(puVar18 + -6);
  *(undefined2 *)(puVar18 + -0x1c) = 0x198;
  *(undefined2 *)(puVar18 + -0x1e) = 0x21a;
  FUN_1000_0edf();
  *(undefined **)(puVar18 + -0x18) = puVar18 + -0x16;
  *(undefined2 *)(puVar18 + -0x1a) = 0x1b2;
  *(undefined2 *)(puVar18 + -0x1c) = 0x228;
  FUN_1000_1768();
  *(undefined **)(puVar18 + -0x18) = puVar18 + -0x12;
  *(undefined2 *)(puVar18 + -0x1a) = 0x1b6;
  *(undefined2 *)(puVar18 + -0x1c) = 0x235;
  FUN_1000_1768();
  *(undefined2 *)(puVar18 + -8) = 0;
  *(undefined2 *)(puVar18 + -10) = 1;
  while( true ) {
    if ((*(int *)(puVar18 + -4) <= *(int *)(puVar18 + -8)) &&
       ((*(int *)(puVar18 + -4) < *(int *)(puVar18 + -8) ||
        (*(uint *)(puVar18 + -6) <= *(uint *)(puVar18 + -10) &&
         *(uint *)(puVar18 + -10) != *(uint *)(puVar18 + -6))))) break;
    *(undefined2 *)(puVar18 + -0xc) = 0;
    *(undefined2 *)(puVar18 + -0xe) = 1;
    while ((*(int *)(puVar18 + -0xc) < 0 ||
           ((*(int *)(puVar18 + -0xc) < 1 && (*(uint *)(puVar18 + -0xe) < 0x29))))) {
      uVar9 = *(uint *)(puVar18 + -0x16) + *(uint *)(puVar18 + -0x12);
      uVar11 = *(uint *)(puVar18 + -0xe);
      *(uint *)(puVar18 + -0x14) =
           *(int *)(puVar18 + -0x14) + *(int *)(puVar18 + -0x10) +
           (uint)CARRY2(*(uint *)(puVar18 + -0x16),*(uint *)(puVar18 + -0x12)) +
           *(int *)(puVar18 + -0xc) + (uint)CARRY2(uVar9,*(uint *)(puVar18 + -0xe));
      *(uint *)(puVar18 + -0x16) = uVar9 + uVar11;
      uVar11 = *(uint *)(puVar18 + -0x14);
      uVar9 = *(uint *)(puVar18 + -0x16);
      *(int *)(puVar18 + -0x10) = (int)uVar11 >> 1;
      *(uint *)(puVar18 + -0x12) = uVar9 >> 1 | (uint)((uVar11 & 1) != 0) << 0xf;
      *(undefined2 *)(puVar18 + -0x18) = 0;
      *(undefined2 *)(puVar18 + -0x1a) = 10;
      *(undefined2 *)(puVar18 + -0x1c) = *(undefined2 *)(puVar18 + -0x10);
      *(undefined2 *)(puVar18 + -0x1e) = *(undefined2 *)(puVar18 + -0x12);
      *(undefined2 *)(puVar18 + -0x20) = 0x1000;
      *(undefined2 *)(puVar18 + -0x22) = 0x28b;
      uVar26 = FUN_1000_1deb();
      *(int *)(puVar18 + -0x14) = (int)((ulong)uVar26 >> 0x10);
      *(int *)(puVar18 + -0x16) = (int)uVar26;
      if ((*(int *)(puVar18 + -0x10) == *(int *)(puVar18 + -0xc)) &&
         (*(int *)(puVar18 + -0x12) == *(int *)(puVar18 + -0xe))) {
        uVar24 = 1;
      }
      else {
        uVar24 = 0;
      }
      *(undefined2 *)(puVar18 + -0x14) = 0;
      *(undefined2 *)(puVar18 + -0x16) = uVar24;
      uVar11 = *(uint *)(puVar18 + -0x16);
      uVar9 = *(uint *)(puVar18 + -0xe);
      *(uint *)(puVar18 + -0x10) = *(uint *)(puVar18 + -0x14) | *(uint *)(puVar18 + -0xc);
      *(uint *)(puVar18 + -0x12) = uVar11 | uVar9;
      uVar11 = *(uint *)(puVar18 + -0x12);
      uVar9 = *(uint *)(puVar18 + -0x10);
      *(undefined2 *)(puVar18 + -0x14) = 0;
      *(uint *)(puVar18 + -0x16) = (uint)((uVar11 | uVar9) == 0);
      uVar11 = *(uint *)(puVar18 + -0x16);
      uVar9 = *(uint *)(puVar18 + -0xe);
      *(uint *)(puVar18 + -0x10) =
           *(int *)(puVar18 + -0x14) + *(int *)(puVar18 + -0xc) +
           (uint)CARRY2(uVar11,*(uint *)(puVar18 + -0xe));
      *(uint *)(puVar18 + -0x12) = uVar11 + uVar9;
      if ((*(int *)(puVar18 + -0x10) < *(int *)(puVar18 + -0xc)) ||
         ((*(int *)(puVar18 + -0x10) <= *(int *)(puVar18 + -0xc) &&
          (*(uint *)(puVar18 + -0x12) < *(uint *)(puVar18 + -0xe) ||
           *(uint *)(puVar18 + -0x12) == *(uint *)(puVar18 + -0xe))))) {
        uVar24 = 0;
      }
      else {
        uVar24 = 1;
      }
      *(undefined2 *)(puVar18 + -0x14) = 0;
      *(undefined2 *)(puVar18 + -0x16) = uVar24;
      puVar2 = (uint *)(puVar18 + -0xe);
      uVar11 = *puVar2;
      *puVar2 = *puVar2 + 1;
      *(uint *)(puVar18 + -0xc) = *(int *)(puVar18 + -0xc) + (uint)(0xfffe < uVar11);
    }
    puVar2 = (uint *)(puVar18 + -10);
    uVar11 = *puVar2;
    *puVar2 = *puVar2 + 1;
    *(uint *)(puVar18 + -8) = *(int *)(puVar18 + -8) + (uint)(0xfffe < uVar11);
  }
  *(undefined2 *)(puVar18 + -0x18) = *(undefined2 *)(puVar18 + -0x14);
  *(undefined2 *)(puVar18 + -0x1a) = *(undefined2 *)(puVar18 + -0x16);
  *(undefined2 *)(puVar18 + -0x1c) = 0x1ba;
  *(undefined2 *)(puVar18 + -0x1e) = 0x352;
  FUN_1000_0edf();
  return;
}



void FUN_1000_0121(undefined *param_1)

{
  byte *pbVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int in_BX;
  byte *pbVar7;
  bool bVar8;
  uint uStack18;
  uint uStack16;
  uint uStack14;
  uint uStack12;
  uint uStack10;
  uint uStack8;
  uint uStack6;
  int iStack4;
  uint uStack2;
  
  uStack2 = 0x129;
  FUN_1000_01a5();
  uStack2 = 0x1000;
  iStack4 = 0x12e;
  (*pcRam000005c4)();
  iVar4 = 0;
  pbVar7 = (byte *)0x0;
  iVar6 = 0x2f;
  do {
    pbVar1 = pbVar7;
    iVar4 = CONCAT11((char)((uint)iVar4 >> 8) + CARRY1((byte)iVar4,*pbVar1),(byte)iVar4 + *pbVar1);
    pbVar7 = pbVar7 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  if (iVar4 != 0xd37) {
    uStack2 = 0x14f;
    FUN_1000_01da();
  }
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  param_1 = (undefined *)0x1f1;
  FUN_1000_01da();
  param_1 = (undefined *)0x3;
  iVar4 = 0x1f8;
  cVar3 = FUN_1000_0121();
  pbVar1 = pbVar7 + in_BX;
  *pbVar1 = *pbVar1 + cVar3;
  param_1 = (undefined *)register0x00000010;
  FUN_1000_1768(0x194,&uStack2);
  FUN_1000_0edf(0x198,uStack2,iVar4);
  FUN_1000_1768(0x1b2,&uStack18);
  FUN_1000_1768(0x1b6,&uStack14);
  iStack4 = 0;
  uStack6 = 1;
  while ((iStack4 < iVar4 || ((iStack4 <= iVar4 && (uStack6 <= uStack2))))) {
    uStack8 = 0;
    uStack10 = 1;
    while (((int)uStack8 < 0 || (((int)uStack8 < 1 && (uStack10 < 0x29))))) {
      bVar8 = CARRY2(uStack18,uStack14);
      uStack14 = uStack18 + uStack14;
      uStack18 = uStack14 + uStack10;
      uStack16 = uStack16 + uStack12 + (uint)bVar8 + uStack8 + (uint)CARRY2(uStack14,uStack10);
      uStack12 = (int)uStack16 >> 1;
      uStack14 = uStack18 >> 1 | (uint)((uStack16 & 1) != 0) << 0xf;
      FUN_1000_1deb(uStack14,uStack12,10,0);
      if ((uStack12 == uStack8) && (uStack14 == uStack10)) {
        uVar5 = 1;
      }
      else {
        uVar5 = 0;
      }
      uVar5 = (uint)((uVar5 | uStack10 | uStack8) == 0);
      uStack14 = uVar5 + uStack10;
      uStack12 = uStack8 + CARRY2(uVar5,uStack10);
      if (((int)uStack12 < (int)uStack8) ||
         (((int)uStack12 <= (int)uStack8 && (uStack14 <= uStack10)))) {
        uStack18 = 0;
      }
      else {
        uStack18 = 1;
      }
      uStack16 = 0;
      bVar8 = 0xfffe < uStack10;
      uStack10 = uStack10 + 1;
      uStack8 = uStack8 + bVar8;
    }
    bVar8 = 0xfffe < uStack6;
    uStack6 = uStack6 + 1;
    iStack4 = iStack4 + (uint)bVar8;
  }
  FUN_1000_0edf(0x1ba,uStack18,uStack16);
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
  _DAT_11ef_0076 = unaff_ES;
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  DAT_11ef_0078 = in_BX;
  DAT_11ef_007a = unaff_ES;
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  DAT_11ef_007c = in_BX;
  DAT_11ef_007e = unaff_ES;
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  DAT_11ef_0080 = in_BX;
  DAT_11ef_0082 = unaff_ES;
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
  DAT_11ef_0096 = 0;
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
  uint uVar1;
  bool bVar2;
  uint local_16;
  uint local_14;
  uint local_12;
  uint local_10;
  uint local_e;
  uint local_c;
  uint local_a;
  int local_8;
  uint local_6;
  int local_4;
  
  FUN_1000_1768(0x194,&local_6);
  FUN_1000_0edf(0x198,local_6,local_4);
  FUN_1000_1768(0x1b2,&local_16);
  FUN_1000_1768(0x1b6,&local_12);
  local_8 = 0;
  local_a = 1;
  while ((local_8 < local_4 || ((local_8 <= local_4 && (local_a <= local_6))))) {
    local_c = 0;
    local_e = 1;
    while (((int)local_c < 0 || (((int)local_c < 1 && (local_e < 0x29))))) {
      bVar2 = CARRY2(local_16,local_12);
      local_12 = local_16 + local_12;
      local_16 = local_12 + local_e;
      local_14 = local_14 + local_10 + (uint)bVar2 + local_c + (uint)CARRY2(local_12,local_e);
      local_10 = (int)local_14 >> 1;
      local_12 = local_16 >> 1 | (uint)((local_14 & 1) != 0) << 0xf;
      FUN_1000_1deb(local_12,local_10,10,0);
      if ((local_10 == local_c) && (local_12 == local_e)) {
        uVar1 = 1;
      }
      else {
        uVar1 = 0;
      }
      uVar1 = (uint)((uVar1 | local_e | local_c) == 0);
      local_12 = uVar1 + local_e;
      local_10 = local_c + CARRY2(uVar1,local_e);
      if (((int)local_10 < (int)local_c) ||
         (((int)local_10 <= (int)local_c && (local_12 <= local_e)))) {
        local_16 = 0;
      }
      else {
        local_16 = 1;
      }
      local_14 = 0;
      bVar2 = 0xfffe < local_e;
      local_e = local_e + 1;
      local_c = local_c + bVar2;
    }
    bVar2 = 0xfffe < local_a;
    local_a = local_a + 1;
    local_8 = local_8 + (uint)bVar2;
  }
  FUN_1000_0edf(0x1ba,local_16,local_14);
  return;
}



undefined2 FUN_1000_0359(uint param_1)

{
  if ((int)param_1 < 0) {
    if (-param_1 < 0x23 || param_1 == 0xffdd) {
      DAT_11ef_0094 = -param_1;
      DAT_11ef_01c0 = 0xffff;
      return 0xffff;
    }
  }
  else {
    if (param_1 < 0x59) goto LAB_1000_036c;
  }
  param_1 = 0x57;
LAB_1000_036c:
  DAT_11ef_0094 = (int)*(char *)(param_1 + 0x1c2);
  DAT_11ef_01c0 = param_1;
  return 0xffff;
}



void __cdecl16near FUN_1000_0394(void)

{
  return;
}



void __cdecl16near FUN_1000_0395(void)

{
  int iVar1;
  
  while (iVar1 = DAT_11ef_0226 + -1, DAT_11ef_0226 != 0) {
    DAT_11ef_0226 = iVar1;
    (**(code **)(iVar1 * 2 + 0x5d0))();
  }
  DAT_11ef_0226 = iVar1;
  (*DAT_11ef_021c)();
  (*DAT_11ef_021e)();
  (*DAT_11ef_0220)();
  FUN_1000_0121();
  return;
}



// WARNING (jumptable): Unable to track spacebase fully for stack
// WARNING: Unable to track spacebase fully for stack

void FUN_1000_03ca(void)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  undefined2 uVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  undefined *puVar8;
  uint uVar9;
  int iVar10;
  int extraout_DX;
  int extraout_DX_00;
  undefined *puVar11;
  char **ppcVar12;
  char *pcVar13;
  char *pcVar14;
  char **ppcVar15;
  undefined2 unaff_SS;
  bool bVar16;
  bool bVar17;
  code *in_stack_00000000;
  uint uStack22;
  uint uStack20;
  uint uStack18;
  uint uStack16;
  uint uStack14;
  uint uStack12;
  uint uStack10;
  int iStack8;
  uint uStack6;
  int iStack4;
  char **ppcStack2;
  
  DAT_1000_03c6 = 0x11ef;
  uVar7 = (uint)*(byte *)&DAT_11ef_0080;
  puVar11 = (undefined *)(uVar7 + 1);
  pcVar13 = (char *)(DAT_11ef_008a + 2);
  uVar9 = 1;
  ppcVar15 = DAT_11ef_0090;
  ppcVar12 = DAT_11ef_0090;
  DAT_1000_03c4 = in_stack_00000000;
  if (2 < (byte)DAT_11ef_0092) {
    uVar9 = 0x7f;
    pcVar14 = pcVar13;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar1 = pcVar14;
      pcVar14 = pcVar14 + 1;
    } while (*pcVar1 != '\0');
    if (uVar9 == 0) goto LAB_1000_01e2;
    uVar9 = uVar9 ^ 0x7f;
    ppcVar15 = DAT_11ef_008c;
  }
  puVar8 = (undefined *)(uVar7 + 2 + uVar9 & 0xfffe);
  iVar3 = -(int)puVar8;
  pcVar14 = &stack0x0000 + iVar3;
  if (puVar8 <= register0x00000010) {
    *(uint *)(char ***)((int)&ppcStack2 + iVar3) = uVar9;
    while (uVar9 - 1 != 0) {
      pcVar2 = pcVar14;
      pcVar14 = pcVar14 + 1;
      pcVar1 = pcVar13;
      pcVar13 = pcVar13 + 1;
      *pcVar2 = *pcVar1;
      uVar9 = uVar9 - 1;
    }
    bVar16 = false;
    *pcVar14 = '\0';
    bVar17 = uVar9 == 0;
LAB_1000_0437:
    *(int *)((int)&iStack4 + iVar3) = 0x43a;
    bVar6 = FUN_1000_0453();
    iVar10 = extraout_DX;
    if (bVar16 || bVar17) {
      do {
        uVar4 = DAT_1000_03c6;
        if (bVar16) {
          iVar10 = (int)*(char ***)((int)&ppcStack2 + iVar3) + iVar10;
          *(uint *)&DAT_11ef_0084 = uVar9;
          puVar11 = (undefined *)((uVar9 + 1) * 2);
          ppcVar12 = (char **)(&stack0x0000 + (uVar9 + 1) * -2);
          pcVar13 = (char *)register0x00000010;
          if (register0x00000010 < puVar11) goto LAB_1000_01e2;
          *(char ***)(int **)&DAT_11ef_0086 = ppcVar12;
          goto LAB_1000_049b;
        }
        *(int *)((int)&iStack4 + iVar3) = 0x441;
        bVar6 = FUN_1000_0453();
        iVar10 = extraout_DX_00;
      } while (!bVar16 && !bVar17);
    }
    if ((bVar6 != 0x20) && (bVar6 != 0xd)) goto code_r0x0001044b;
    goto LAB_1000_044f;
  }
LAB_1000_01e2:
  ppcStack2 = (char **)0x1f1;
  FUN_1000_01da();
  ppcStack2 = (char **)0x3;
  iStack4 = 0x1f8;
  cVar5 = FUN_1000_0121();
  pcVar1 = puVar11 + (int)pcVar13;
  *pcVar1 = *pcVar1 + cVar5;
  ppcStack2 = ppcVar12;
  FUN_1000_1768(0x194,&uStack6);
  FUN_1000_0edf(0x198,uStack6,iStack4);
  FUN_1000_1768(0x1b2,&uStack22);
  FUN_1000_1768(0x1b6,&uStack18);
  iStack8 = 0;
  uStack10 = 1;
  while ((iStack8 < iStack4 || ((iStack8 <= iStack4 && (uStack10 <= uStack6))))) {
    uStack12 = 0;
    uStack14 = 1;
    while (((int)uStack12 < 0 || (((int)uStack12 < 1 && (uStack14 < 0x29))))) {
      bVar16 = CARRY2(uStack22,uStack18);
      uStack18 = uStack22 + uStack18;
      uStack22 = uStack18 + uStack14;
      uStack20 = uStack20 + uStack16 + (uint)bVar16 + uStack12 + (uint)CARRY2(uStack18,uStack14);
      uStack16 = (int)uStack20 >> 1;
      uStack18 = uStack22 >> 1 | (uint)((uStack20 & 1) != 0) << 0xf;
      FUN_1000_1deb(uStack18,uStack16,10,0);
      if ((uStack16 == uStack12) && (uStack18 == uStack14)) {
        uVar9 = 1;
      }
      else {
        uVar9 = 0;
      }
      uVar9 = (uint)((uVar9 | uStack14 | uStack12) == 0);
      uStack18 = uVar9 + uStack14;
      uStack16 = uStack12 + CARRY2(uVar9,uStack14);
      if (((int)uStack16 < (int)uStack12) ||
         (((int)uStack16 <= (int)uStack12 && (uStack18 <= uStack14)))) {
        uStack22 = 0;
      }
      else {
        uStack22 = 1;
      }
      uStack20 = 0;
      bVar16 = 0xfffe < uStack14;
      uStack14 = uStack14 + 1;
      uStack12 = uStack12 + bVar16;
    }
    bVar16 = 0xfffe < uStack10;
    uStack10 = uStack10 + 1;
    iStack8 = iStack8 + (uint)bVar16;
  }
  FUN_1000_0edf(0x1ba,uStack22,uStack20);
  return;
code_r0x0001044b:
  bVar16 = bVar6 < 9;
  bVar17 = bVar6 == 9;
  if (bVar17) {
LAB_1000_044f:
    bVar16 = false;
    bVar17 = true;
  }
  goto LAB_1000_0437;
  while( true ) {
    *(BADSPACEBASE **)ppcVar12 = register0x00000010;
    ppcVar12 = ppcVar12 + 1;
    do {
      pcVar1 = (char *)register0x00000010;
      register0x00000010 = (BADSPACEBASE *)((char *)register0x00000010 + 1);
      bVar16 = *pcVar1 != '\0';
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0 && bVar16);
    if (bVar16) break;
LAB_1000_049b:
    if (iVar10 == 0) break;
  }
  *ppcVar12 = (char *)0x0;
                    // WARNING: Could not recover jumptable at 0x000104b0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_1000_03c4)();
  return;
}



int __cdecl16near FUN_1000_0453(void)

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



void __cdecl16near FUN_1000_04b5(void)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  char **in_BX;
  char *unaff_SI;
  char *pcVar6;
  char *pcVar7;
  bool bVar8;
  uint uStack22;
  uint uStack20;
  uint uStack18;
  uint uStack16;
  uint uStack14;
  uint uStack12;
  uint uStack10;
  int iStack8;
  uint uStack6;
  int iStack4;
  undefined2 uVar9;
  
  iStack4 = 0x4bd;
  iVar5 = DAT_11ef_008a;
  pcVar7 = (char *)FUN_1000_0604();
  uVar9 = DAT_11ef_008c;
  if (pcVar7 != (char *)0x0) {
    unaff_SI = (char *)0x0;
    pcVar6 = pcVar7;
    while (iVar5 != 0) {
      iVar5 = iVar5 + -1;
      pcVar2 = pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar1 = unaff_SI;
      unaff_SI = unaff_SI + 1;
      *pcVar2 = *pcVar1;
    }
    uVar9 = 0x11ef;
    iStack4 = DAT_11ef_008e;
    uStack6 = 0x4db;
    in_BX = (char **)FUN_1000_0604();
    DAT_11ef_0088 = in_BX;
    if (in_BX != (char **)0x0) {
      iVar5 = -1;
      do {
        *in_BX = pcVar7;
        in_BX = in_BX + 1;
        do {
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          pcVar1 = pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (*pcVar1 != '\0');
        if (*pcVar7 == '\0') {
          *in_BX = (char *)0x0;
          return;
        }
      } while( true );
    }
  }
  FUN_1000_01da();
  iStack4 = 0x1f8;
  cVar3 = FUN_1000_0121();
  pcVar1 = (char *)((int)in_BX + (int)unaff_SI);
  *pcVar1 = *pcVar1 + cVar3;
  FUN_1000_1768(0x194,&uStack6);
  FUN_1000_0edf(0x198,uStack6,iStack4);
  FUN_1000_1768(0x1b2,&uStack22);
  FUN_1000_1768(0x1b6,&uStack18);
  iStack8 = 0;
  uStack10 = 1;
  while ((iStack8 < iStack4 || ((iStack8 <= iStack4 && (uStack10 <= uStack6))))) {
    uStack12 = 0;
    uStack14 = 1;
    while (((int)uStack12 < 0 || (((int)uStack12 < 1 && (uStack14 < 0x29))))) {
      bVar8 = CARRY2(uStack22,uStack18);
      uStack18 = uStack22 + uStack18;
      uStack22 = uStack18 + uStack14;
      uStack20 = uStack20 + uStack16 + (uint)bVar8 + uStack12 + (uint)CARRY2(uStack18,uStack14);
      uStack16 = (int)uStack20 >> 1;
      uStack18 = uStack22 >> 1 | (uint)((uStack20 & 1) != 0) << 0xf;
      FUN_1000_1deb(uStack18,uStack16,10,0);
      if ((uStack16 == uStack12) && (uStack18 == uStack14)) {
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
      }
      uVar4 = (uint)((uVar4 | uStack14 | uStack12) == 0);
      uStack18 = uVar4 + uStack14;
      uStack16 = uStack12 + CARRY2(uVar4,uStack14);
      if (((int)uStack16 < (int)uStack12) ||
         (((int)uStack16 <= (int)uStack12 && (uStack18 <= uStack14)))) {
        uStack22 = 0;
      }
      else {
        uStack22 = 1;
      }
      uStack20 = 0;
      bVar8 = 0xfffe < uStack14;
      uStack14 = uStack14 + 1;
      uStack12 = uStack12 + bVar8;
    }
    bVar8 = 0xfffe < uStack10;
    uStack10 = uStack10 + 1;
    iStack8 = iStack8 + (uint)bVar8;
  }
  FUN_1000_0edf(0x1ba,uStack22,uStack20);
  return;
}



uint __cdecl16near FUN_1000_04ff(undefined2 param_1)

{
  bool bVar1;
  
  bVar1 = DAT_11ef_0226 != 0x20;
  if (bVar1) {
    *(undefined2 *)(DAT_11ef_0226 * 2 + 0x5d0) = param_1;
    DAT_11ef_0226 = DAT_11ef_0226 + 1;
  }
  return (uint)!bVar1;
}



void __cdecl16near FUN_1000_0525(int param_1)

{
  int iVar1;
  
  DAT_11ef_0612 = *(int *)(param_1 + 6);
  if (DAT_11ef_0612 == param_1) {
    DAT_11ef_0612 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 4);
    *(int *)(DAT_11ef_0612 + 4) = iVar1;
    *(int *)(iVar1 + 6) = DAT_11ef_0612;
  }
  return;
}



int * __cdecl16near FUN_1000_0553(int *param_1,int param_2)

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
  if (DAT_11ef_0610 != param_1) {
    *(int **)((int)piVar3 + param_2 + 2) = piVar3;
    piVar2 = DAT_11ef_0610;
  }
  DAT_11ef_0610 = piVar2;
  return piVar3 + 2;
}



int * __cdecl16near FUN_1000_058d(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)FUN_1000_069b(param_1,0);
  if (piVar1 == (int *)0xffff) {
    piVar2 = (int *)0x0;
  }
  else {
    *(int **)(piVar1 + 1) = DAT_11ef_0610;
    *piVar1 = param_1 + 1;
    piVar2 = piVar1 + 2;
    DAT_11ef_0610 = piVar1;
  }
  return piVar2;
}



int * __cdecl16near FUN_1000_05ca(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_1000_069b(param_1,0);
  if (piVar1 == (int *)0xffff) {
    piVar1 = (int *)0x0;
  }
  else {
    DAT_11ef_0610 = piVar1;
    DAT_11ef_0614 = piVar1;
    *piVar1 = param_1 + 1;
    piVar1 = piVar1 + 2;
  }
  return piVar1;
}



uint * __cdecl16near FUN_1000_0604(uint param_1)

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
    if (DAT_11ef_0614 == 0) {
      uVar2 = FUN_1000_05ca(uVar3);
    }
    else {
      puVar4 = DAT_11ef_0612;
      if (DAT_11ef_0612 != (uint *)0x0) {
        do {
          if (uVar3 + 0x28 <= *puVar4) {
            uVar2 = FUN_1000_0553(puVar4,uVar3);
            return (uint *)uVar2;
          }
          if (uVar3 <= *puVar4) {
            FUN_1000_0525(puVar4);
            puVar1 = puVar4;
            *puVar1 = *puVar1 + 1;
            return puVar4 + 2;
          }
          puVar4 = (uint *)puVar4[3];
        } while (puVar4 != DAT_11ef_0612);
      }
      uVar2 = FUN_1000_058d(uVar3);
    }
  }
  return (uint *)uVar2;
}



undefined2 __cdecl16near FUN_1000_0677(undefined *param_1)

{
  undefined2 uVar1;
  undefined auStack258 [256];
  
  if (param_1 < auStack258) {
    DAT_11ef_009e = param_1;
    uVar1 = 0;
  }
  else {
    DAT_11ef_0094 = 8;
    uVar1 = 0xffff;
  }
  return uVar1;
}



uint __cdecl16near FUN_1000_069b(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1 + DAT_11ef_009e;
  if ((param_2 + (uint)CARRY2(param_1,DAT_11ef_009e) + (uint)(0xfeff < uVar1) != 0) ||
     (uVar2 = DAT_11ef_009e, &stack0xfffe <= (undefined *)(uVar1 + 0x100))) {
    DAT_11ef_0094 = 8;
    uVar2 = 0xffff;
    uVar1 = DAT_11ef_009e;
  }
  DAT_11ef_009e = uVar1;
  return uVar2;
}



void __cdecl16near FUN_1000_06cf(undefined2 param_1)

{
  FUN_1000_0677(param_1);
  return;
}



void __cdecl16near FUN_1000_06dd(int param_1)

{
  FUN_1000_069b(param_1,param_1 >> 0xf);
  return;
}



int FUN_1000_06ef(int *param_1)

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



undefined2 __cdecl16near FUN_1000_0736(int *param_1,uint param_2,int param_3,int param_4)

{
  uint *puVar1;
  int iVar2;
  undefined2 uVar3;
  uint uVar4;
  bool bVar5;
  long lVar6;
  
  iVar2 = FUN_1000_0e61(param_1);
  if (iVar2 == 0) {
    if ((param_4 == 1) && (0 < *param_1)) {
      uVar4 = FUN_1000_06ef(param_1);
      bVar5 = param_2 < uVar4;
      param_2 = param_2 - uVar4;
      param_3 = (param_3 - ((int)uVar4 >> 0xf)) - (uint)bVar5;
    }
    puVar1 = (uint *)(param_1 + 1);
    *puVar1 = *puVar1 & 0xfe5f;
    *param_1 = 0;
    param_1[5] = param_1[4];
    lVar6 = FUN_1000_0cbc((int)*(char *)(param_1 + 2),param_2,param_3,param_4);
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



long __cdecl16near FUN_1000_079a(int *param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = FUN_1000_0e61(param_1);
  if (iVar1 == 0) {
    lVar2 = FUN_1000_1e85((int)*(char *)(param_1 + 2));
    if (0 < *param_1) {
      iVar1 = FUN_1000_06ef(param_1);
      lVar2 = lVar2 - iVar1;
    }
  }
  else {
    lVar2 = -1;
  }
  return lVar2;
}



void __cdecl16near FUN_1000_07ef(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0x32a;
  iVar2 = 0x14;
  while (iVar2 != 0) {
    if ((*(uint *)(iVar1 + 2) & 0x300) == 0x300) {
      FUN_1000_0e61(iVar1);
    }
    iVar1 = iVar1 + 0x10;
    iVar2 = iVar2 + -1;
  }
  return;
}



undefined2 FUN_1000_0816(int *param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  
  if ((param_1[1] & 0x200U) != 0) {
    FUN_1000_07ef();
  }
  iVar3 = param_1[3];
  iVar2 = param_1[4];
  param_1[5] = iVar2;
  iVar3 = FUN_1000_0a8b((int)*(char *)(param_1 + 2),iVar2,iVar3);
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



void __cdecl16near FUN_1000_0873(int *param_1)

{
  int *piVar1;
  
  piVar1 = param_1;
  *piVar1 = *piVar1 + 1;
  FUN_1000_0886(param_1);
  return;
}



uint __cdecl16near FUN_1000_0886(int *param_1)

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
      if ((DAT_11ef_0492 != 0) || (param_1 != (int *)0x32a)) {
        while( true ) {
          if ((param_1[1] & 0x200U) != 0) {
            FUN_1000_07ef();
          }
          iVar3 = FUN_1000_0b47((int)*(char *)(param_1 + 2),&local_3,1);
          if (iVar3 != 1) break;
          if ((local_3 != 0xd) || ((param_1[1] & 0x40U) != 0)) {
            puVar2 = (uint *)(param_1 + 1);
            *puVar2 = *puVar2 & 0xffdf;
            return (uint)local_3;
          }
        }
        iVar3 = FUN_1000_0df3((int)*(char *)(param_1 + 2));
        if (iVar3 == 1) {
          param_1[1] = param_1[1] & 0xfe7fU | 0x20;
        }
        else {
          puVar2 = (uint *)(param_1 + 1);
          *puVar2 = *puVar2 | 0x10;
        }
        return 0xffff;
      }
      iVar3 = FUN_1000_0986((int)cRam0001221e);
      if (iVar3 == 0) {
        DAT_11ef_032c = DAT_11ef_032c & 0xfdff;
      }
      FUN_1000_0998(0x32a,0,(uint)((DAT_11ef_032c & 0x200) != 0),0x200);
    }
    iVar3 = FUN_1000_0816(param_1);
    if (iVar3 != 0) {
      return 0xffff;
    }
  }
  puVar2 = (uint *)(param_1 + 1);
  *puVar2 = *puVar2 | 0x10;
  return 0xffff;
}



uint __cdecl16near FUN_1000_0986(void)

{
  code *pcVar1;
  uint extraout_DX;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return extraout_DX & 0x80;
}



undefined2 __cdecl16near FUN_1000_0998(int *param_1,int param_2,int param_3,uint param_4)

{
  uint *puVar1;
  undefined2 uVar2;
  
  if ((((int *)param_1[7] == param_1) && (param_3 < 3)) && (param_4 < 0x8000)) {
    if ((DAT_11ef_0494 == 0) && (param_1 == (int *)0x33a)) {
      DAT_11ef_0494 = 1;
    }
    else {
      if ((DAT_11ef_0492 == 0) && (param_1 == (int *)0x32a)) {
        DAT_11ef_0492 = 1;
      }
    }
    if (*param_1 != 0) {
      FUN_1000_0736(param_1,0,0,1);
    }
    if ((param_1[1] & 4U) != 0) {
      FUN_1000_1741(param_1[4]);
    }
    puVar1 = (uint *)(param_1 + 1);
    *puVar1 = *puVar1 & 0xfff3;
    param_1[3] = 0;
    param_1[4] = (int)param_1 + 5;
    param_1[5] = (int)param_1 + 5;
    if ((param_3 != 2) && (param_4 != 0)) {
      DAT_11ef_021c = 0xa6a;
      if (param_2 == 0) {
        param_2 = FUN_1000_0604(param_4);
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



char * __cdecl16near FUN_1000_0a8b(int param_1,char *param_2,int param_3)

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
  
  if ((param_3 + 1U < 2) || ((*(uint *)(param_1 * 2 + 0x46a) & 0x200) != 0)) {
    pcVar4 = (char *)0x0;
  }
  else {
    do {
      iVar5 = FUN_1000_0b47(param_1,param_2,param_3);
      if (iVar5 + 1U < (uint)&DAT_11ef_0002) {
        return (char *)iVar5;
      }
      pcVar7 = param_2;
      pcVar3 = param_2;
      if ((*(uint *)(param_1 * 2 + 0x46a) & 0x8000) != 0) {
        return (char *)iVar5;
      }
      do {
        while( true ) {
          pcVar4 = pcVar3;
          cVar2 = *pcVar7;
          pcVar6 = param_2;
          if (cVar2 == '\x1a') {
            FUN_1000_0cbc(param_1,-iVar5,-(uint)(iVar5 != 0),2);
            puVar1 = (uint *)(param_1 * 2 + 0x46a);
            *puVar1 = *puVar1 | 0x200;
            goto LAB_1000_0b3b;
          }
          if (cVar2 == '\r') break;
          *pcVar4 = cVar2;
          iVar5 = iVar5 + -1;
          pcVar7 = pcVar7 + 1;
          pcVar3 = pcVar4 + 1;
          if (iVar5 == 0) goto LAB_1000_0b13;
        }
        iVar5 = iVar5 + -1;
        pcVar7 = pcVar7 + 1;
        pcVar3 = pcVar4;
      } while (iVar5 != 0);
      uVar8 = 0x11ef;
      FUN_1000_0b47(param_1,&local_3,1);
      *pcVar4 = local_3;
LAB_1000_0b13:
      pcVar4 = pcVar4 + 1;
    } while (pcVar4 == pcVar6);
LAB_1000_0b3b:
    pcVar4 = pcVar4 + -(int)pcVar6;
  }
  return pcVar4;
}



void __cdecl16near FUN_1000_0b47(void)

{
  code *pcVar1;
  bool in_CF;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if (in_CF) {
    FUN_1000_0359();
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00010c0d)
// WARNING: Removing unreachable block (ram,0x00010c5b)

char * __cdecl16near FUN_1000_0b63(int param_1,char *param_2,char *param_3)

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
    if ((*(uint *)(param_1 * 2 + 0x46a) & 0x8000) == 0) {
      puVar1 = (uint *)(param_1 * 2 + 0x46a);
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
          pcVar3 = (char *)FUN_1000_0c76(param_1,local_84,pcVar4);
          if (pcVar3 != pcVar4) {
            return pcVar3 + (int)(param_3 + (-(int)pcVar4 - (int)local_8a));
          }
          pcVar4 = local_84;
        }
      }
      pcVar4 = pcVar4 + -(int)local_84;
      if ((pcVar4 != (char *)0x0) &&
         (pcVar3 = (char *)FUN_1000_0c76(param_1,local_84,pcVar4), pcVar3 != pcVar4)) {
        param_3 = pcVar3 + (int)(param_3 + -(int)pcVar4);
      }
    }
    else {
      param_3 = (char *)FUN_1000_0c76(param_1,param_2,param_3);
    }
  }
  return param_3;
}



undefined2 __cdecl16near FUN_1000_0c76(int param_1)

{
  uint *puVar1;
  code *pcVar2;
  undefined2 uVar3;
  bool bVar4;
  
  bVar4 = false;
  if ((*(uint *)(param_1 * 2 + 0x46a) & 0x800) != 0) {
    bVar4 = false;
    FUN_1000_0cbc(param_1,0,0,2);
  }
  pcVar2 = (code *)swi(0x21);
  uVar3 = (*pcVar2)();
  if (bVar4) {
    uVar3 = FUN_1000_0359();
  }
  else {
    puVar1 = (uint *)(param_1 * 2 + 0x46a);
    *puVar1 = *puVar1 | 0x1000;
  }
  return uVar3;
}



void __cdecl16near FUN_1000_0cbc(int param_1)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  
  puVar1 = (uint *)(param_1 * 2 + 0x46a);
  bVar3 = false;
  *puVar1 = *puVar1 & 0xfdff;
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  if (bVar3) {
    FUN_1000_0359();
  }
  return;
}



char * FUN_1000_0ce7(char param_1,char param_2,uint param_3,char *param_4,uint param_5,uint param_6)

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
    if (param_6 == 0) goto LAB_1000_0d31;
    do {
      uVar3 = (ulong)param_6;
      param_6 = param_6 / param_3;
      uVar3 = uVar3 % (ulong)param_3 << 0x10 | (ulong)param_5;
      param_5 = (uint)(uVar3 / (ulong)param_3);
      *pbVar6 = (byte)(uVar3 % (ulong)param_3);
      pbVar6 = pbVar6 + 1;
    } while (param_6 != 0);
    while (param_5 != 0) {
LAB_1000_0d31:
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



void __cdecl16near FUN_1000_0d66(uint param_1,undefined2 param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 10) {
    iVar1 = (int)param_1 >> 0xf;
  }
  else {
    iVar1 = 0;
  }
  FUN_1000_0ce7(param_1 & 0xff00 | 0x61,CONCAT11((char)(param_1 >> 8),1),param_3,param_2,param_1,
                iVar1);
  return;
}



void __cdecl16near
FUN_1000_0d8f(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  uint in_AX;
  
  FUN_1000_0ce7(CONCAT11((char)(in_AX >> 8),0x61),in_AX & 0xff00,param_4,param_3,param_1,param_2);
  return;
}



void __cdecl16near
FUN_1000_0dab(undefined2 param_1,undefined2 param_2,undefined2 param_3,int param_4)

{
  FUN_1000_0ce7(0x61,(uint)(param_4 == 10),param_4,param_3,param_1,param_2);
  return;
}



void FUN_1000_0dd2(uint param_1,int param_2,undefined2 param_3)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int unaff_SI;
  bool bVar6;
  uint uStack14;
  uint uStack12;
  uint uStack10;
  uint uStack8;
  uint uStack6;
  uint uStack4;
  uint uStack2;
  
  iVar5 = 2;
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  param_3 = 0x1f1;
  FUN_1000_01da();
  param_3 = 3;
  param_2 = 0x1f8;
  cVar3 = FUN_1000_0121();
  pcVar1 = (char *)(iVar5 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar3;
  FUN_1000_1768(0x194,&param_1);
  FUN_1000_0edf(0x198,param_1,param_2);
  FUN_1000_1768(0x1b2,&uStack14);
  FUN_1000_1768(0x1b6,&uStack10);
  iVar5 = 0;
  uStack2 = 1;
  while ((iVar5 < param_2 || ((iVar5 <= param_2 && (uStack2 <= param_1))))) {
    uStack4 = 0;
    uStack6 = 1;
    while (((int)uStack4 < 0 || (((int)uStack4 < 1 && (uStack6 < 0x29))))) {
      bVar6 = CARRY2(uStack14,uStack10);
      uStack10 = uStack14 + uStack10;
      uStack14 = uStack10 + uStack6;
      uStack12 = uStack12 + uStack8 + (uint)bVar6 + uStack4 + (uint)CARRY2(uStack10,uStack6);
      uStack8 = (int)uStack12 >> 1;
      uStack10 = uStack14 >> 1 | (uint)((uStack12 & 1) != 0) << 0xf;
      FUN_1000_1deb(uStack10,uStack8,10,0);
      if ((uStack8 == uStack4) && (uStack10 == uStack6)) {
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
      }
      uVar4 = (uint)((uVar4 | uStack6 | uStack4) == 0);
      uStack10 = uVar4 + uStack6;
      uStack8 = uStack4 + CARRY2(uVar4,uStack6);
      if (((int)uStack8 < (int)uStack4) || (((int)uStack8 <= (int)uStack4 && (uStack10 <= uStack6)))
         ) {
        uStack14 = 0;
      }
      else {
        uStack14 = 1;
      }
      uStack12 = 0;
      bVar6 = 0xfffe < uStack6;
      uStack6 = uStack6 + 1;
      uStack4 = uStack4 + bVar6;
    }
    bVar6 = 0xfffe < uStack2;
    uStack2 = uStack2 + 1;
    iVar5 = iVar5 + (uint)bVar6;
  }
  FUN_1000_0edf(0x1ba,uStack14,uStack12);
  return;
}



void FUN_1000_0dd7(uint param_1,int param_2,undefined2 param_3)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int unaff_SI;
  bool bVar6;
  uint uStack14;
  uint uStack12;
  uint uStack10;
  uint uStack8;
  uint uStack6;
  uint uStack4;
  uint uStack2;
  
  iVar5 = 2;
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  param_3 = 0x1f1;
  FUN_1000_01da();
  param_3 = 3;
  param_2 = 0x1f8;
  cVar3 = FUN_1000_0121();
  pcVar1 = (char *)(iVar5 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar3;
  FUN_1000_1768(0x194,&param_1);
  FUN_1000_0edf(0x198,param_1,param_2);
  FUN_1000_1768(0x1b2,&uStack14);
  FUN_1000_1768(0x1b6,&uStack10);
  iVar5 = 0;
  uStack2 = 1;
  while ((iVar5 < param_2 || ((iVar5 <= param_2 && (uStack2 <= param_1))))) {
    uStack4 = 0;
    uStack6 = 1;
    while (((int)uStack4 < 0 || (((int)uStack4 < 1 && (uStack6 < 0x29))))) {
      bVar6 = CARRY2(uStack14,uStack10);
      uStack10 = uStack14 + uStack10;
      uStack14 = uStack10 + uStack6;
      uStack12 = uStack12 + uStack8 + (uint)bVar6 + uStack4 + (uint)CARRY2(uStack10,uStack6);
      uStack8 = (int)uStack12 >> 1;
      uStack10 = uStack14 >> 1 | (uint)((uStack12 & 1) != 0) << 0xf;
      FUN_1000_1deb(uStack10,uStack8,10,0);
      if ((uStack8 == uStack4) && (uStack10 == uStack6)) {
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
      }
      uVar4 = (uint)((uVar4 | uStack6 | uStack4) == 0);
      uStack10 = uVar4 + uStack6;
      uStack8 = uStack4 + CARRY2(uVar4,uStack6);
      if (((int)uStack8 < (int)uStack4) || (((int)uStack8 <= (int)uStack4 && (uStack10 <= uStack6)))
         ) {
        uStack14 = 0;
      }
      else {
        uStack14 = 1;
      }
      uStack12 = 0;
      bVar6 = 0xfffe < uStack6;
      uStack6 = uStack6 + 1;
      uStack4 = uStack4 + bVar6;
    }
    bVar6 = 0xfffe < uStack2;
    uStack2 = uStack2 + 1;
    iVar5 = iVar5 + (uint)bVar6;
  }
  FUN_1000_0edf(0x1ba,uStack14,uStack12);
  return;
}



// WARNING: Removing unreachable block (ram,0x00010e49)

undefined2 __cdecl16near FUN_1000_0df3(int param_1)

{
  code *pcVar1;
  undefined2 uVar2;
  bool bVar3;
  ulong uVar4;
  undefined4 uVar5;
  ulong uVar6;
  
  bVar3 = false;
  if ((*(uint *)(param_1 * 2 + 0x46a) & 0x200) != 0) {
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
  uVar2 = FUN_1000_0359(uVar2);
  return uVar2;
}



undefined2 __cdecl16near FUN_1000_0e61(int *param_1)

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
      iVar4 = FUN_1000_0b63((int)*(char *)(param_1 + 2),iVar4,iVar5);
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



void __cdecl16near FUN_1000_0edf(undefined2 param_1)

{
  FUN_1000_1107(&stack0x0004,param_1,0x33a,0x1015);
  return;
}



void __cdecl16near FUN_1000_0ef8(char param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = param_2;
  *piVar1 = *piVar1 + -1;
  FUN_1000_0f11((int)param_1,param_2);
  return;
}



uint __cdecl16near FUN_1000_0f11(undefined param_1,int *param_2)

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
         (((local_3 == 10 || (local_3 == 0xd)) && (iVar4 = FUN_1000_0e61(piVar3), iVar4 != 0)))) {
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
      iVar4 = FUN_1000_0e61(piVar3);
      if (iVar4 != 0) {
        return 0xffff;
      }
    }
  }
  if (((((local_3 == 10) && ((piVar3[1] & 0x40U) == 0)) &&
       (iVar4 = FUN_1000_0c76((int)*(char *)(piVar3 + 2),0x4c8,1), iVar4 != 1)) ||
      (iVar4 = FUN_1000_0c76((int)*(char *)(piVar3 + 2),&param_1,1), iVar4 != 1)) &&
     ((piVar3[1] & 0x200U) == 0)) {
    puVar2 = (uint *)(piVar3 + 1);
    *puVar2 = *puVar2 | 0x10;
    return 0xffff;
  }
  return (uint)local_3;
}



void __cdecl16near FUN_1000_0fff(undefined2 param_1)

{
  FUN_1000_0f11(param_1,0x33a);
  return;
}



uint FUN_1000_1015(int *param_1,uint param_2,undefined2 *param_3)

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
          uVar5 = FUN_1000_0ef8(*param_3,param_1);
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
      if ((*param_1 == 0) || (iVar3 = FUN_1000_0e61(param_1), iVar3 == 0)) {
        uVar4 = FUN_1000_0c76((int)*(char *)(param_1 + 2),param_3,param_2);
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
      iVar3 = FUN_1000_0f11((int)(char)*(byte *)param_3,param_1);
      uVar4 = uVar4 - 1;
      param_3 = (undefined2 *)((int)param_3 + 1);
    } while (iVar3 != -1);
    param_2 = 0;
  }
  return param_2;
}



void thunk_FUN_1000_0dd2(void)

{
                    // WARNING: Could not recover jumptable at 0x000110d8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_11ef_05c8)();
  return;
}



void FUN_1000_10dc(undefined2 param_1)

{
  byte bVar1;
  undefined *unaff_DI;
  undefined2 unaff_ES;
  
  bVar1 = (byte)((uint)param_1 >> 8);
  *unaff_DI = *(undefined *)(ulong)((uint)(bVar1 >> 4) + 0x4d1);
  unaff_DI[1] = *(undefined *)(ulong)((uint)(bVar1 & 0xf) + 0x4d1);
  unaff_DI[2] = *(undefined *)(ulong)((uint)(byte)((byte)param_1 >> 4) + 0x4d1);
  unaff_DI[3] = *(undefined *)(ulong)((uint)((byte)param_1 & 0xf) + 0x4d1);
  return;
}



int FUN_1000_1107(undefined4 *param_1,byte *param_2)

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
LAB_1000_1171:
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
          if (0x5f < (byte)(bVar13 - 0x20)) goto LAB_1000_15fe;
          cVar4 = *(char *)((uint)(byte)(bVar13 - 0x20) + 0x4e1);
          cVar21 = cVar4 * '\x02';
          bVar19 = (byte)((uint)puVar17 >> 8);
          param_2 = pbVar22;
          uVar28 = unaff_SS;
          puVar16 = local_94;
          puVar26 = local_92;
          switch(cVar4) {
          case '\0':
            if (bVar19 != 0) goto LAB_1000_15fe;
            if (local_8f != 0x2b) {
              local_8f = bVar13;
            }
            break;
          case '\x01':
            if (bVar19 != 0) goto LAB_1000_15fe;
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
              if (bVar19 != 4) goto LAB_1000_15fe;
              puVar17 = (uint *)0x500;
            }
            break;
          case '\x03':
            if (bVar19 != 0) goto LAB_1000_15fe;
            local_9a = local_9a | 2;
            bVar6 = true;
            break;
          case '\x04':
            if (3 < bVar19) goto LAB_1000_15fe;
            puVar17 = (uint *)0x400;
            break;
          case '\x05':
switchD_1000_11d4_caseD_5:
            puVar14 = (uint *)(int)(char)(bVar13 - 0x30);
            if (bVar19 < 3) {
              puVar17 = (uint *)0x200;
              puVar16 = puVar14;
              if (-1 < (int)local_94) {
                puVar16 = puVar14 + (int)local_94 * 5;
              }
            }
            else {
              if (bVar19 != 4) goto LAB_1000_15fe;
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
            if (bVar19 != 0) goto switchD_1000_11d4_caseD_5;
            if (!bVar6) {
              local_9a = local_9a | 8;
              bVar8 = true;
              puVar17 = (uint *)0x100;
            }
            break;
          case '\n':
            goto switchD_1000_11d4_caseD_a;
          case '\v':
            uVar29 = CONCAT11(8,cVar21);
            goto LAB_1000_130e;
          case '\f':
            uVar29 = CONCAT11(10,cVar21);
            goto LAB_1000_1313;
          case '\r':
            uVar29 = CONCAT11(0x10,bVar13 - 0x17);
LAB_1000_130e:
            local_8f = 0;
LAB_1000_1313:
            local_95 = 0;
            pcVar15 = *(char **)param_1;
            pcVar20 = (char *)0x0;
            goto LAB_1000_1336;
          case '\x0e':
            puVar17 = (uint *)&local_8a;
            puVar25 = (undefined4 *)((int)param_1 + 2);
            if (bVar9) {
              FUN_1000_10dc(*(char **)(undefined4 *)((int)param_1 + 2),*(char **)param_1);
              puVar17 = local_89;
              local_8a = 0x3a;
              puVar25 = param_1 + 1;
            }
            param_1 = puVar25;
            FUN_1000_10dc();
            *(undefined *)puVar17 = 0;
            puVar26 = (uint *)&local_8a;
            puVar17 = (uint *)((int)puVar17 - (int)puVar26);
            goto LAB_1000_14bb;
          case '\x0f':
            puVar17 = local_92;
            if ((int)local_92 < 0) {
              puVar17 = (uint *)(s_Turbo_C___Copyright__c__1988_Bor_11ef_0004 + 2);
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
            thunk_FUN_1000_0dd2(uVar29,local_9a & 1,(uint)bVar13,local_89,puVar17,param_1);
            puVar26 = local_89;
            param_1 = (undefined4 *)((int)param_1 + local_6);
            goto LAB_1000_14bb;
          case '\x10':
            puVar1 = param_1;
            param_1 = (undefined4 *)((int)param_1 + 2);
            puVar26 = local_89;
            local_89[0] = (uint)*(char **)puVar1 & 0xff;
            puVar17 = (uint *)0x1;
            goto LAB_1000_14fc;
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
              uVar28 = 0x11ef;
              puVar16 = puVar26;
            }
            if (puVar16 == (uint *)0x0) {
              uVar28 = 0x11ef;
              puVar26 = (uint *)0x4ca;
            }
            FUN_1000_1120();
            if (local_92 < puVar17) {
              puVar17 = local_92;
            }
            goto LAB_1000_14fc;
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
              uVar29 = 0x11ef;
            }
            *piVar27 = (uint)(byte)(0x50 - local_57) + local_5a;
            goto LAB_1000_1171;
          default:
            goto LAB_1000_15fe;
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
      FUN_1000_1135();
    }
    goto LAB_1000_1171;
  }
  goto LAB_1000_1606;
switchD_1000_11d4_caseD_a:
  uVar29 = CONCAT11(10,cVar21);
  local_95 = 1;
  pcVar15 = *(char **)param_1;
  pcVar20 = (char *)((int)pcVar15 >> 0xf);
LAB_1000_1336:
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
          FUN_1000_112d();
          local_94 = (uint *)((int)local_94 + -1);
        } while (local_94 != (uint *)0x0);
      }
      goto LAB_1000_1171;
    }
  }
  else {
    local_9a = local_9a | 4;
  }
  FUN_1000_0ce7(uVar29,(uint)local_95,(int)(char)((uint)uVar29 >> 8),puVar26,pcVar15,pcVar20);
  if ((int)local_92 < 1) {
LAB_1000_14bb:
    if ((!bVar8) || ((int)local_94 < 1)) goto LAB_1000_14dd;
  }
  FUN_1000_1120();
  if (*(byte *)puVar26 == 0x2d) {
    puVar17 = (uint *)((int)puVar17 + -1);
  }
  if (extraout_DX - (int)puVar17 != 0 && (int)puVar17 <= extraout_DX) {
    local_8e = extraout_DX - (int)puVar17;
  }
LAB_1000_14dd:
  if ((local_8f != 0) && (*(byte *)puVar26 != 0x2d)) {
    local_8e = local_8e + -1 + (uint)(local_8e == 0);
    puVar26 = (uint *)((int)puVar26 + -1);
    *(byte *)puVar26 = local_8f;
  }
  FUN_1000_1120();
LAB_1000_14fc:
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
      FUN_1000_112d();
      local_94 = (uint *)((int)local_94 + -1);
    }
  }
  if (bVar12) {
    FUN_1000_112d();
    FUN_1000_112d();
  }
  if (0 < local_8e) {
    iVar18 = iVar18 - local_8e;
    local_94 = (uint *)((int)local_94 - local_8e);
    bVar13 = *(byte *)puVar26;
    if (((bVar13 == 0x2d) || (bVar13 == 0x20)) || (bVar13 == 0x2b)) {
      puVar26 = (uint *)((int)puVar26 + 1);
      FUN_1000_112d();
      iVar18 = iVar18 + -1;
      local_94 = (uint *)((int)local_94 + -1);
      local_8e = extraout_DX_00;
    }
    while (local_8e != 0) {
      FUN_1000_112d();
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
        FUN_1000_1135();
      }
      iVar18 = iVar18 + -1;
    } while (iVar18 != 0);
  }
  if (0 < (int)local_94) {
    do {
      FUN_1000_112d();
      local_94 = (uint *)((int)local_94 + -1);
    } while (local_94 != (uint *)0x0);
  }
  goto LAB_1000_1171;
LAB_1000_15fe:
  do {
    FUN_1000_112d();
    pbVar3 = pbVar23;
    pbVar23 = pbVar23 + 1;
  } while (*pbVar3 != 0);
LAB_1000_1606:
  if (local_57 < 'P') {
    FUN_1000_1135();
  }
  if (local_4 != 0) {
    local_5a = -1;
  }
  return local_5a;
}



void __cdecl16near FUN_1000_1120(void)

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



void __cdecl16near FUN_1000_112d(void)

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



void __cdecl16near FUN_1000_1135(void)

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



void __cdecl16near FUN_1000_162a(int param_1)

{
  int iVar1;
  
  if (DAT_11ef_0612 == 0) {
    DAT_11ef_0612 = param_1;
    *(int *)(param_1 + 4) = param_1;
    *(int *)(param_1 + 6) = param_1;
  }
  else {
    iVar1 = *(int *)(DAT_11ef_0612 + 6);
    *(int *)(DAT_11ef_0612 + 6) = param_1;
    *(int *)(iVar1 + 4) = param_1;
    *(int *)(param_1 + 6) = iVar1;
    *(int *)(param_1 + 4) = DAT_11ef_0612;
  }
  return;
}



void __cdecl16near FUN_1000_1663(int *param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = param_1;
  *piVar1 = *piVar1 + *param_2;
  if (DAT_11ef_0610 == param_2) {
    DAT_11ef_0610 = param_1;
  }
  else {
    *(int **)((int)param_2 + *param_2 + 2) = param_1;
  }
  FUN_1000_0525(param_2);
  return;
}



void __cdecl16near FUN_1000_169a(void)

{
  uint *puVar1;
  
  if (DAT_11ef_0614 == DAT_11ef_0610) {
    FUN_1000_06cf(DAT_11ef_0614);
    DAT_11ef_0610 = (uint *)0x0;
    DAT_11ef_0614 = (uint *)0x0;
  }
  else {
    puVar1 = (uint *)DAT_11ef_0610[1];
    if ((*puVar1 & 1) == 0) {
      FUN_1000_0525(puVar1);
      if (puVar1 == DAT_11ef_0614) {
        DAT_11ef_0610 = (uint *)0x0;
        DAT_11ef_0614 = (uint *)0x0;
      }
      else {
        DAT_11ef_0610 = (uint *)puVar1[1];
      }
      FUN_1000_06cf(puVar1);
    }
    else {
      FUN_1000_06cf(DAT_11ef_0610);
      DAT_11ef_0610 = puVar1;
    }
  }
  return;
}



void __cdecl16near FUN_1000_16f3(uint *param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  
  puVar1 = param_1;
  *puVar1 = *puVar1 - 1;
  puVar3 = (uint *)(*param_1 + (int)param_1);
  puVar2 = (uint *)param_1[1];
  if (((*puVar2 & 1) == 0) && (param_1 != DAT_11ef_0614)) {
    puVar1 = puVar2;
    *puVar1 = *puVar1 + *param_1;
    *(uint **)(puVar3 + 1) = puVar2;
    param_1 = puVar2;
  }
  else {
    FUN_1000_162a(param_1);
  }
  if ((*puVar3 & 1) == 0) {
    FUN_1000_1663(param_1,puVar3);
  }
  return;
}



void __cdecl16near FUN_1000_1741(int param_1)

{
  if (param_1 != 0) {
    if (param_1 + -4 == DAT_11ef_0610) {
      FUN_1000_169a();
    }
    else {
      FUN_1000_16f3(param_1 + -4);
    }
  }
  return;
}



void __cdecl16near FUN_1000_1768(undefined2 param_1)

{
  FUN_1000_1787(0x886,0x1e9c,0x32a,param_1,&stack0x0004);
  return;
}



int __cdecl16near FUN_1000_1787(code *param_1,code *param_2,undefined2 param_3,byte *param_4)

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
LAB_1000_17ba:
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
LAB_1000_1828:
    local_24 = puVar11;
    param_4 = pbVar13 + 1;
    puVar14 = (undefined2 *)(int)(char)*pbVar13;
    if ((int)puVar14 < 0) {
      return local_2a;
    }
    bVar9 = *(byte *)(puVar14 + 0x2a1);
    puVar11 = local_24;
    switch(bVar9) {
    case 0:
    case 1:
    case 2:
      goto LAB_1000_1b93;
    case 3:
      goto LAB_1000_17c3;
    case 4:
      bVar3 = true;
      pbVar13 = param_4;
      goto LAB_1000_1828;
    case 5:
      pbVar13 = param_4;
      puVar11 = puVar14 + -0x18;
      if (-1 < (int)local_24) {
        puVar11 = puVar14 + -0x18 + (int)local_24 * 5;
      }
      goto LAB_1000_1828;
    case 6:
      if (!bVar3) {
        FUN_1000_179c();
      }
      puVar11 = local_24;
      if ((int)local_24 < 0) {
        puVar11 = (undefined2 *)0x1;
      }
      if (local_24 == (undefined2 *)0x0) goto LAB_1000_1a8b;
      goto LAB_1000_1a71;
    case 7:
    case 8:
      uVar8 = 10;
      break;
    case 9:
      uVar8 = 0;
      break;
    case 10:
      thunk_FUN_1000_0dd7(param_1,param_2,param_3,(uint)local_24 & 0x7fff,&local_28,&local_26);
      cVar4 = '\0';
      bVar18 = local_26 < 0;
      if (local_26 < 1) {
        thunk_FUN_1000_0dd7();
        if ((bool)cVar4 == bVar18) {
          return local_2a;
        }
        goto switchD_1000_1846_caseD_16;
      }
      if (bVar3) {
        thunk_FUN_1000_0dd7();
      }
      else {
        FUN_1000_179c();
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
        thunk_FUN_1000_0dd7(puVar14,uVar8);
      }
      goto LAB_1000_17ba;
    case 0xb:
      bVar16 = true;
      pbVar13 = param_4;
      goto LAB_1000_1828;
    case 0xc:
      pbVar13 = param_4;
      goto LAB_1000_1828;
    case 0xd:
      bVar17 = true;
      pbVar13 = param_4;
      goto LAB_1000_1828;
    case 0xe:
      uVar8 = 8;
      break;
    case 0xf:
      iVar5 = 0x1a03;
      goto LAB_1000_1b9a;
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
              FUN_1000_179c();
            }
            goto LAB_1000_1b0b;
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
      goto switchD_1000_1846_caseD_11;
    case 0x12:
      uVar8 = 0x10;
      break;
    case 0x13:
      iVar5 = 0x192c;
      goto LAB_1000_1b9a;
    case 0x14:
      pbVar13 = param_4;
      goto LAB_1000_1828;
    case 0x15:
      pbVar13 = param_4;
      goto LAB_1000_1828;
    default:
      goto switchD_1000_1846_caseD_16;
    }
    if (((uint)puVar14 & 0x20) == 0) {
      bVar17 = true;
    }
    FUN_1000_1c60(param_1,param_2,param_3,uVar8,(uint)local_24 & 0x7fff,&local_28,&local_26);
    if (local_26 < 1) {
      if (-1 < local_26) {
        return local_2a;
      }
      goto switchD_1000_1846_caseD_16;
    }
    if (bVar3) goto LAB_1000_17ba;
    local_2a = local_2a + 1;
    goto LAB_1000_1912;
  }
LAB_1000_17c3:
  iVar5 = (int)(char)bVar9;
  local_28 = local_28 + 1;
  iVar6 = (*param_1)(param_3);
  if (-1 < iVar6) goto code_r0x000117d3;
  goto switchD_1000_1846_caseD_16;
switchD_1000_1846_caseD_11:
  pbVar13 = param_4;
  if (!bVar3) goto LAB_1000_1912;
  goto LAB_1000_1828;
LAB_1000_1b0b:
  puVar14 = (undefined2 *)((int)puVar11 - 1);
  if (0 < (int)puVar11) {
    local_28 = local_28 + 1;
    uVar7 = (*param_1)(param_3);
    if ((int)uVar7 < 0) {
      if (((int)puVar11 < (int)local_24) && (!bVar3)) {
        *pbVar15 = 0;
        local_2a = local_2a + 1;
      }
      goto switchD_1000_1846_caseD_16;
    }
    if ((*(byte *)((int)local_22 + (uVar7 >> 3)) & '\x01' << ((byte)uVar7 & 7)) == 0) {
      if (!bVar17) goto LAB_1000_1b4a;
    }
    else {
      if (bVar17) {
LAB_1000_1b4a:
        (*param_2)(uVar7,param_3);
        local_28 = local_28 + -1;
        if ((int)local_24 <= (int)puVar11) goto LAB_1000_1b67;
        goto LAB_1000_1b5e;
      }
    }
    puVar11 = puVar14;
    if (!bVar3) {
      pbVar1 = pbVar15;
      pbVar15 = pbVar15 + 1;
      *pbVar1 = (byte)uVar7;
    }
    goto LAB_1000_1b0b;
  }
LAB_1000_1b5e:
  if (!bVar3) {
    local_2a = local_2a + 1;
LAB_1000_1b67:
    *pbVar15 = 0;
  }
  goto LAB_1000_17ba;
LAB_1000_1b9a:
  local_28 = local_28 + 1;
  iVar6 = (*param_1)(param_3);
  if (iVar6 < 1) {
    if (iVar6 != 0) {
switchD_1000_1846_caseD_16:
      (*param_2)(0xffff,param_3);
      return local_2a - (uint)(local_2a == 0);
    }
LAB_1000_1bb5:
                    // WARNING: Could not recover jumptable at 0x00011bb9. Too many branches
                    // WARNING: Treating indirect jump as call
    uVar8 = (*(code *)(iVar5 + 3))();
    return uVar8;
  }
  if (((char)iVar6 < '\0') || (*(char *)(iVar6 + 0x542) != '\x01')) goto LAB_1000_1bb5;
  goto LAB_1000_1b9a;
LAB_1000_1912:
  uVar19 = FUN_1000_179c();
  *puVar14 = (int)uVar19;
  if (bVar17) {
    puVar14[1] = (int)((ulong)uVar19 >> 0x10);
  }
  goto LAB_1000_17ba;
  while (puVar12 = (undefined2 *)((int)puVar11 - 1), bVar17 = 0 < (int)puVar11, puVar11 = puVar12,
        puVar12 != (undefined2 *)0x0 && bVar17) {
LAB_1000_1a71:
    local_28 = local_28 + 1;
    iVar5 = (*param_1)(param_3);
    if (!bVar3) {
      puVar2 = puVar14;
      puVar14 = (undefined2 *)((int)puVar14 + 1);
      *(char *)puVar2 = (char)iVar5;
    }
    if (iVar5 < 0) goto switchD_1000_1846_caseD_16;
  }
LAB_1000_1a8b:
  if (!bVar3) {
    local_2a = local_2a + 1;
  }
  goto LAB_1000_17ba;
code_r0x000117d3:
  if ((iVar5 < 0) || (*(char *)(iVar5 + 0x542) != '\x01')) {
    if (iVar6 != iVar5) {
      (*param_2)(iVar6,param_3);
LAB_1000_1b93:
      return local_2a;
    }
  }
  else {
    while ((-1 < (char)iVar6 && (*(char *)(iVar6 + 0x542) == '\x01'))) {
      local_28 = local_28 + 1;
      iVar6 = (*param_1)(param_3);
      if (iVar6 < 1) goto switchD_1000_1846_caseD_16;
    }
    (*param_2)(iVar6,param_3);
    local_28 = local_28 + -1;
  }
  goto LAB_1000_17ba;
}



void __cdecl16near FUN_1000_179c(void)

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



void thunk_FUN_1000_0dd7(void)

{
                    // WARNING: Could not recover jumptable at 0x00011c26. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_11ef_05ca)();
  return;
}



void thunk_FUN_1000_0dd7(void)

{
                    // WARNING: Could not recover jumptable at 0x00011c2a. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_11ef_05cc)();
  return;
}



void thunk_FUN_1000_0dd7(void)

{
                    // WARNING: Could not recover jumptable at 0x00011c2e. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_11ef_05ce)();
  return;
}



void __cdecl16near FUN_1000_1c32(void)

{
  return;
}



undefined4 __cdecl16near
FUN_1000_1c60(code *param_1,code *param_2,undefined2 param_3,uint param_4,int param_5,int *param_6,
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
    if ((int)uVar7 < 0) goto LAB_1000_1cee;
    cVar5 = (char)uVar7;
    uVar7 = SEXT12(cVar5);
  } while (((uVar7 & 0x80) == 0) && ((*(byte *)(uVar7 + 0x229) & 1) != 0));
  if (param_5 < 1) {
LAB_1000_1cf5:
    local_6 = iVar2;
    local_4 = 0;
  }
  else {
    if (cVar5 != '+') {
      iVar4 = param_5 + -1;
      if (cVar5 == '-') {
        local_7 = '\x01';
        goto LAB_1000_1ca5;
      }
LAB_1000_1cb8:
      local_6 = iVar2;
      param_5 = iVar4;
      uVar13 = 0;
      uVar14 = 0;
      bVar6 = (byte)uVar7;
      iVar2 = local_6;
      if (param_4 == 0) {
        param_4 = 10;
        if (bVar6 != 0x30) {
LAB_1000_1d3b:
          bVar15 = bVar6 < 0x30;
          FUN_1000_1c32();
          uVar13 = uVar7;
          if (!bVar15) goto LAB_1000_1d52;
          goto LAB_1000_1cf5;
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
            goto LAB_1000_1d52;
          }
LAB_1000_1d61:
          while (FUN_1000_1c32(), !bVar15) {
            uVar10 = (uint)((ulong)uVar13 * (ulong)param_4 >> 0x10);
            uVar8 = (uint)((ulong)uVar13 * (ulong)param_4);
            uVar13 = uVar7 + uVar8;
            uVar7 = (uint)CARRY2(uVar7,uVar8);
            uVar8 = uVar14 + uVar10;
            bVar15 = CARRY2(uVar14,uVar10) || CARRY2(uVar8,uVar7);
            uVar14 = uVar8 + uVar7;
            if (uVar14 != 0) goto LAB_1000_1d7e;
LAB_1000_1d52:
            if (param_5 < 1) goto LAB_1000_1da3;
            local_6 = local_6 + 1;
            uVar7 = (*param_1)(param_3);
            param_5 = param_5 + -1;
          }
LAB_1000_1d97:
          (*param_2)(uVar7,param_3);
          local_6 = local_6 + -1;
        }
      }
      else {
        if ((0x24 < param_4) || (bVar9 = (byte)param_4, bVar9 < 2)) goto LAB_1000_1cf5;
        if (bVar6 != 0x30) goto LAB_1000_1d3b;
        bVar15 = bVar9 < 0x10;
        if (bVar9 != 0x10) goto LAB_1000_1d52;
        iVar2 = param_5 + -1;
        if (0 < param_5) {
          local_6 = local_6 + 1;
          uVar7 = (*param_1)(param_3);
          bVar6 = (byte)uVar7;
          bVar15 = bVar6 < 0x78;
          param_5 = iVar2;
          if (bVar6 == 0x78) goto LAB_1000_1d52;
          bVar15 = bVar6 < 0x58;
          if (bVar6 == 0x58) goto LAB_1000_1d52;
          goto LAB_1000_1d61;
        }
      }
LAB_1000_1da3:
      if (local_7 != '\0') {
        bVar15 = uVar13 != 0;
        uVar13 = -uVar13;
        uVar14 = -(uint)bVar15 - uVar14;
      }
      goto LAB_1000_1db3;
    }
LAB_1000_1ca5:
    if (param_5 + -1 < 1) goto LAB_1000_1cf5;
    uVar7 = (*param_1)(param_3);
    iVar4 = param_5 + -2;
    iVar2 = local_6 + 2;
    if (-1 < (int)uVar7) goto LAB_1000_1cb8;
LAB_1000_1cee:
    local_6 = iVar2;
    local_4 = 0xffff;
  }
  (*param_2)(uVar7,param_3);
  local_6 = local_6 + -1;
  uVar13 = 0;
  uVar14 = 0;
LAB_1000_1db3:
  piVar1 = param_6;
  *piVar1 = *piVar1 + local_6;
  *param_7 = local_4;
  return CONCAT22(uVar14,uVar13);
  while( true ) {
    local_6 = local_6 + 1;
    uVar7 = (*param_1)(param_3);
    uVar8 = param_4;
    FUN_1000_1c32();
    if (bVar15) goto LAB_1000_1d97;
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
LAB_1000_1d7e:
    if (param_5 < 1) goto LAB_1000_1da3;
  }
  uVar13 = CONCAT11((local_7 != '\0') + -1,local_7 + -1);
  uVar14 = (uint)(local_7 != '\0') + 0x7fff;
  local_4 = 2;
  goto LAB_1000_1db3;
}



undefined4 __stdcall16far FUN_1000_1deb(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  
  uVar3 = 2;
  if ((param_4 == 0) && ((param_2 == 0 || (param_3 == 0)))) {
    param_1 = (uint)(CONCAT22(param_2,param_1) % (ulong)param_3);
    param_2 = 0;
  }
  else {
    if ((int)param_2 < 0) {
      bVar5 = param_1 != 0;
      param_1 = -param_1;
      param_2 = -(uint)bVar5 - param_2;
      uVar3 = 0xe;
    }
    if ((int)param_4 < 0) {
      bVar5 = param_3 != 0;
      param_3 = -param_3;
      param_4 = -(uint)bVar5 - param_4;
      uVar3 = uVar3 ^ 4;
    }
    iVar1 = 0x20;
    uVar4 = 0;
    uVar2 = 0;
    do {
      bVar5 = (int)param_1 < 0;
      param_1 = param_1 * 2;
      bVar6 = (int)param_2 < 0;
      param_2 = param_2 << 1 | (uint)bVar5;
      bVar5 = (int)uVar2 < 0;
      uVar2 = uVar2 << 1 | (uint)bVar6;
      uVar4 = uVar4 << 1 | (uint)bVar5;
      if ((param_4 <= uVar4) && ((param_4 < uVar4 || (param_3 <= uVar2)))) {
        bVar5 = uVar2 < param_3;
        uVar2 = uVar2 - param_3;
        uVar4 = (uVar4 - param_4) - (uint)bVar5;
        param_1 = param_1 + 1;
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    if ((uVar3 & 2) != 0) {
      uVar3 = uVar3 >> 1;
      param_1 = uVar2;
      param_2 = uVar4;
    }
    if ((uVar3 & 4) != 0) {
      bVar5 = param_1 != 0;
      param_1 = -param_1;
      param_2 = -(uint)bVar5 - param_2;
    }
  }
  return CONCAT22(param_2,param_1);
}



void __cdecl16near FUN_1000_1e85(undefined2 param_1)

{
  FUN_1000_0cbc(param_1,0,0,1);
  return;
}



uint __cdecl16near FUN_1000_1e9c(uint param_1,int *param_2)

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


