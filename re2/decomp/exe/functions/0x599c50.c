// rea decompile_all
// name: _qsort
// address: 0x599c50
// body: available
// range: 0x599c50-0x599e19 inclusive
// range: 0x599e20-0x599fe9 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    _qsort
   
   Library: Visual Studio 2015 Release */

void __cdecl
_qsort(void *_Base,size_t _NumOfElements,size_t _SizeOfElements,_PtFuncCompare *_PtFuncCompare)

{
  uint uVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  size_t sVar8;
  char *pcVar9;
  char *pcVar10;
  char *local_114;
  char *local_110;
  int local_10c;
  char *local_108;
  undefined4 auStack_f8 [30];
  undefined4 auStack_80 [30];
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  local_108 = _Base;
  if ((((_Base == (void *)0x0) && (_NumOfElements != 0)) || (_SizeOfElements == 0)) ||
     (_PtFuncCompare == (_PtFuncCompare *)0x0)) {
    piVar3 = __errno();
    *piVar3 = 0x16;
    FUN_0057662d();
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  local_10c = 0;
  if (_NumOfElements < 2) {
LAB_00599fda:
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  pcVar5 = (char *)((_NumOfElements - 1) * _SizeOfElements + (int)_Base);
LAB_00599cd5:
  while (uVar1 = (uint)((int)pcVar5 - (int)local_108) / _SizeOfElements + 1, 8 < uVar1) {
    pcVar7 = local_108 + (uVar1 >> 1) * _SizeOfElements;
    pcVar9 = local_108;
    pcVar6 = pcVar7;
    guard_check_icall();
    iVar4 = (*_PtFuncCompare)(pcVar9,pcVar6);
    if (0 < iVar4) {
      swap(local_108,pcVar7,_SizeOfElements);
    }
    pcVar9 = local_108;
    pcVar6 = pcVar5;
    guard_check_icall();
    iVar4 = (*_PtFuncCompare)(pcVar9,pcVar6);
    if (0 < iVar4) {
      swap(local_108,pcVar5,_SizeOfElements);
    }
    pcVar9 = pcVar7;
    pcVar6 = pcVar5;
    guard_check_icall();
    iVar4 = (*_PtFuncCompare)(pcVar9,pcVar6);
    local_110 = local_108;
    pcVar9 = pcVar5;
    local_114 = pcVar7;
    if (0 < iVar4) {
      swap(pcVar7,pcVar5,_SizeOfElements);
    }
LAB_00599da0:
    pcVar6 = pcVar9;
    if (local_110 < pcVar7) {
      do {
        local_110 = local_110 + _SizeOfElements;
        if (pcVar7 <= local_110) goto LAB_00599de1;
        pcVar10 = local_110;
        pcVar6 = pcVar7;
        guard_check_icall();
        iVar4 = (*_PtFuncCompare)(pcVar10,pcVar6);
      } while (iVar4 < 1);
      if (pcVar7 <= local_110) goto LAB_00599de1;
    }
    else {
LAB_00599de1:
      do {
        pcVar9 = pcVar6;
        local_110 = local_110 + _SizeOfElements;
        if (pcVar5 < local_110) break;
        pcVar6 = local_110;
        pcVar9 = pcVar7;
        guard_check_icall();
        iVar4 = (*_PtFuncCompare)(pcVar6,pcVar9);
        pcVar6 = pcVar9;
      } while (iVar4 < 1);
    }
    do {
      pcVar9 = pcVar9 + -_SizeOfElements;
      if (pcVar9 <= pcVar7) break;
      pcVar6 = pcVar9;
      pcVar10 = pcVar7;
      guard_check_icall();
      iVar4 = (*_PtFuncCompare)(pcVar6,pcVar10);
    } while (0 < iVar4);
    if (local_110 <= pcVar9) {
      pcVar6 = pcVar9;
      sVar8 = _SizeOfElements;
      if (local_110 != pcVar9) {
        do {
          pcVar7 = pcVar6 + 1;
          cVar2 = pcVar7[(int)(local_110 + (-1 - (int)pcVar9))];
          pcVar7[(int)(local_110 + (-1 - (int)pcVar9))] = *pcVar6;
          *pcVar6 = cVar2;
          sVar8 = sVar8 - 1;
          pcVar6 = pcVar7;
          pcVar7 = local_114;
        } while (sVar8 != 0);
      }
      if (pcVar7 == pcVar9) {
        local_114 = local_110;
        pcVar7 = local_110;
      }
      goto LAB_00599da0;
    }
    pcVar9 = pcVar9 + _SizeOfElements;
    if (pcVar7 < pcVar9) {
      do {
        pcVar9 = pcVar9 + -_SizeOfElements;
        if (pcVar9 <= pcVar7) goto LAB_00599ef1;
        pcVar6 = pcVar9;
        pcVar10 = pcVar7;
        guard_check_icall();
        iVar4 = (*_PtFuncCompare)(pcVar6,pcVar10);
      } while (iVar4 == 0);
      if (pcVar9 <= pcVar7) goto LAB_00599ef1;
    }
    else {
LAB_00599ef1:
      do {
        pcVar9 = pcVar9 + -_SizeOfElements;
        if (pcVar9 <= local_108) break;
        pcVar6 = pcVar9;
        pcVar10 = pcVar7;
        guard_check_icall();
        iVar4 = (*_PtFuncCompare)(pcVar6,pcVar10);
      } while (iVar4 == 0);
    }
    if ((int)pcVar9 - (int)local_108 < (int)pcVar5 - (int)local_110) goto LAB_00599f6b;
    if (local_108 < pcVar9) {
      auStack_f8[local_10c] = local_108;
      auStack_80[local_10c] = pcVar9;
      local_10c = local_10c + 1;
    }
    local_108 = local_110;
    if (pcVar5 <= local_110) goto LAB_00599fb2;
  }
  shortsort(local_108,pcVar5,_SizeOfElements,(_func_int_void_ptr_void_ptr *)_PtFuncCompare);
  goto LAB_00599fb2;
LAB_00599f6b:
  if (local_110 < pcVar5) {
    auStack_f8[local_10c] = local_110;
    auStack_80[local_10c] = pcVar5;
    local_10c = local_10c + 1;
  }
  pcVar5 = pcVar9;
  if (pcVar9 <= local_108) {
LAB_00599fb2:
    local_10c = local_10c + -1;
    if (-1 < local_10c) {
      local_108 = (char *)auStack_f8[local_10c];
      pcVar5 = (char *)auStack_80[local_10c];
      goto LAB_00599cd5;
    }
    goto LAB_00599fda;
  }
  goto LAB_00599cd5;
}

