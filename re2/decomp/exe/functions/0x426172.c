// rea decompile_all
// name: InfoEnumProc
// address: 0x426172
// body: available
// range: 0x426172-0x4261f6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    int __stdcall InfoEnumProc(struct HMONITOR__ *,struct HDC__ *,struct tagRECT *,long)
   
   Library: Visual Studio 2015 Release */

int InfoEnumProc(HMONITOR__ *param_1,HDC__ *param_2,tagRECT *param_3,long param_4)

{
  BOOL BVar1;
  int iVar2;
  tagMONITORINFO local_40;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  local_40.cbSize = 0x28;
  BVar1 = GetMonitorInfoW(param_1,&local_40);
  if (BVar1 != 0) {
    CopyRect(&local_18,&local_40.rcWork);
    iVar2 = *(int *)param_4;
    if (local_18.left <= *(int *)param_4) {
      iVar2 = local_18.left;
    }
    *(int *)param_4 = iVar2;
    iVar2 = *(int *)(param_4 + 8);
    if (*(int *)(param_4 + 8) <= local_18.right) {
      iVar2 = local_18.right;
    }
    *(int *)(param_4 + 8) = iVar2;
    iVar2 = *(int *)(param_4 + 4);
    if (local_18.top <= *(int *)(param_4 + 4)) {
      iVar2 = local_18.top;
    }
    *(int *)(param_4 + 4) = iVar2;
    iVar2 = *(int *)(param_4 + 0xc);
    if (*(int *)(param_4 + 0xc) <= local_18.bottom) {
      iVar2 = local_18.bottom;
    }
    *(int *)(param_4 + 0xc) = iVar2;
  }
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}

