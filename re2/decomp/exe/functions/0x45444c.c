// rea decompile_all
// name: FUN_0045444c
// address: 0x45444c
// body: available
// range: 0x45444c-0x454697 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x454693 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0045444c(uint param_1,int param_2,int param_3)

{
  double dVar1;
  HMODULE hModule;
  code *pcVar2;
  AFX_MODULE_STATE *pAVar3;
  HRSRC hResInfo;
  HGLOBAL hResData;
  LPVOID pvVar4;
  void *_Memory;
  uint uVar5;
  AFX_GLOBAL_DATA *pAVar6;
  int iVar7;
  int *piVar8;
  int *in_ECX;
  uint uVar9;
  ushort *puVar10;
  int iVar11;
  int local_1c;
  int iStack_10;
  int local_8;
  
  if (param_1 == 0) {
LAB_00454693:
                    /* WARNING: Subroutine does not return */
    FUN_00429127();
  }
  pAVar3 = AfxGetModuleState();
  hModule = *(HMODULE *)(pAVar3 + 0xc);
  hResInfo = FindResourceW(hModule,(LPCWSTR)(param_1 & 0xffff),(LPCWSTR)0xf1);
  if (((hResInfo == (HRSRC)0x0) ||
      (hResData = LoadResource(hModule,hResInfo), hResData == (HGLOBAL)0x0)) ||
     (pvVar4 = LockResource(hResData), pvVar4 == (LPVOID)0x0)) {
    return 0;
  }
  _Memory = (void *)FUN_00416444((uint)*(ushort *)((int)pvVar4 + 6) * 4);
  if (_Memory == (void *)0x0) goto LAB_00454693;
  uVar5 = (uint)*(ushort *)((int)pvVar4 + 2);
  uVar9 = (uint)*(ushort *)((int)pvVar4 + 4);
  local_8 = uVar5 + 6;
  iStack_10 = uVar9 + 6;
  iVar7 = DAT_00614ea8;
  if (param_3 != 0) {
    iVar7 = in_ECX[0x30c];
  }
  if (iVar7 == 0) {
    pAVar6 = GetGlobalData();
    if (*(int *)(pAVar6 + 0x1e8) == 0) {
      dVar1 = 1.0;
    }
    else {
      dVar1 = *(double *)(pAVar6 + 0x1e0);
    }
    if (dVar1 != 1.0) {
      GetGlobalData();
      local_8 = FUN_0055bce0();
      iStack_10 = FUN_0055bce0();
    }
  }
  if (param_3 == 0) {
    iVar7 = CMFCToolBarImages::IsScaled((CMFCToolBarImages *)&DAT_00614fd0);
    if (iVar7 == 0) {
      FUN_0045a1c5(local_8,iStack_10,uVar5,uVar9);
    }
  }
  else {
    FUN_00459e34(local_8,iStack_10,uVar5,uVar9,0);
  }
  local_1c = 1;
  if (*(int *)(param_2 + 4) == 0) {
    *(uint *)(param_2 + 4) = param_1;
  }
  if (in_ECX[0x346] == 0) {
    pcVar2 = *(code **)(*in_ECX + 0x334);
    guard_check_icall(param_2,param_3);
    iVar7 = (*pcVar2)();
    if (iVar7 == 0) goto LAB_00454675;
  }
  iVar7 = in_ECX[0x301];
  iVar11 = 0;
  if (*(short *)((int)pvVar4 + 6) != 0) {
    puVar10 = (ushort *)((int)pvVar4 + 8);
    do {
      uVar5 = (uint)*puVar10;
      *(uint *)((int)_Memory + iVar11 * 4) = uVar5;
      if ((param_3 == 0) && (uVar5 != 0)) {
        piVar8 = (int *)FUN_00489126(uVar5);
        *piVar8 = iVar7;
        iVar7 = iVar7 + 1;
      }
      iVar11 = iVar11 + 1;
      puVar10 = puVar10 + 1;
    } while (iVar11 < (int)(uint)*(ushort *)((int)pvVar4 + 6));
  }
  in_ECX[0x346] = param_1;
  pcVar2 = *(code **)(*in_ECX + 0x33c);
  guard_check_icall(_Memory,*(undefined2 *)((int)pvVar4 + 6),1);
  local_1c = (*pcVar2)();
  if (local_1c == 0) {
    in_ECX[0x346] = 0;
  }
LAB_00454675:
  FID_conflict__free(_Memory);
  FreeResource(hResData);
  return local_1c;
}

