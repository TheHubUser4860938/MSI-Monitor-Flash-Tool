// rea decompile_all
// name: FUN_005222b9
// address: 0x5222b9
// body: available
// range: 0x5222b9-0x5224eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x5224e7 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005222b9(undefined4 *param_1,int param_2,int param_3)

{
  bool bVar1;
  BOOL BVar2;
  int iVar3;
  DWORD_PTR DVar4;
  SHFILEINFOW local_de0;
  SHFILEINFOW local_b2c;
  undefined4 local_878;
  undefined4 local_874;
  undefined4 local_870;
  undefined4 local_86c;
  undefined4 local_868;
  undefined4 local_864;
  undefined4 local_648;
  undefined4 local_644;
  undefined4 local_640;
  undefined4 local_63c;
  undefined4 local_638;
  undefined4 local_634;
  WCHAR local_418 [260];
  WCHAR local_210 [260];
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  if ((param_1 == (undefined4 *)0x0) || (param_2 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00429127();
  }
  local_878 = 0;
  local_874 = 0;
  local_870 = 0;
  local_86c = 0;
  local_868 = 0;
  local_864 = 0;
  local_648 = 0;
  local_644 = 0;
  local_640 = 0;
  local_63c = 0;
  local_638 = 0;
  local_634 = 0;
  if (param_3 == 0) {
    iVar3 = *(int *)*param_1;
    guard_check_icall((int *)*param_1,0,param_1[2],*(undefined4 *)(param_2 + 8));
    (**(code **)(iVar3 + 0x1c))();
    goto LAB_005224d4;
  }
  if (param_3 != 1) {
    if (param_3 == 2) {
      DVar4 = SHGetFileInfoW((LPCWSTR)param_1[1],0,&local_de0,0x2b4,0x408);
      if ((DVar4 != 0) &&
         (DVar4 = SHGetFileInfoW(*(LPCWSTR *)(param_2 + 4),0,&local_b2c,0x2b4,0x408), DVar4 != 0)) {
        lstrcmpiW(local_de0.szTypeName,local_b2c.szTypeName);
      }
      goto LAB_005224d4;
    }
    if (param_3 != 3) goto LAB_005224d4;
  }
  BVar2 = SHGetPathFromIDListW((LPCITEMIDLIST)param_1[1],local_210);
  if ((((BVar2 != 0) &&
       (iVar3 = CFile::GetStatus(local_210,(CFileStatus *)&local_878,(CAtlTransactionManager *)0x0),
       iVar3 != 0)) &&
      (BVar2 = SHGetPathFromIDListW(*(LPCITEMIDLIST *)(param_2 + 4),local_418), BVar2 != 0)) &&
     (((iVar3 = CFile::GetStatus(local_418,(CFileStatus *)&local_648,(CAtlTransactionManager *)0x0),
       iVar3 != 0 && (param_3 != 1)) &&
      (bVar1 = ATL::CTime::operator<((CTime *)&local_870,local_640,local_63c), !bVar1)))) {
    ATL::CTime::operator>((CTime *)&local_870,local_640,local_63c);
  }
LAB_005224d4:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

