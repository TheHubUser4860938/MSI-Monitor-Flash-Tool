// rea decompile_all
// name: CFile::GetStatus
// address: 0x1006648f
// body: available
// range: 0x1006648f-0x10066619 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CFile::GetStatus(struct CFileStatus &)const 
   
   Library: Visual Studio 2015 Release */

int __thiscall CFile::GetStatus(CFile *this,CFileStatus *param_1)

{
  wchar_t *lpFileName;
  undefined4 uVar1;
  BOOL BVar2;
  undefined4 *puVar3;
  int iVar4;
  _FILETIME local_4c;
  _FILETIME local_44;
  _FILETIME local_3c;
  LARGE_INTEGER local_34;
  uint local_2c [9];
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  _memset(param_1,0,0x230);
  uVar1 = FUN_101a26b7(param_1 + 0x24,0x104,*(undefined4 *)(this + 0xc),0xffffffff);
  FUN_10046fe0(uVar1);
  if (((*(HANDLE *)(this + 4) != (HANDLE)0xffffffff) &&
      (BVar2 = GetFileTime(*(HANDLE *)(this + 4),&local_3c,&local_44,&local_4c), BVar2 != 0)) &&
     (BVar2 = GetFileSizeEx(*(HANDLE *)(this + 4),&local_34), BVar2 != 0)) {
    *(DWORD *)(param_1 + 0x18) = local_34.s.LowPart;
    *(LONG *)(param_1 + 0x1c) = local_34.s.HighPart;
    lpFileName = *(wchar_t **)(this + 0xc);
    if (*(int *)(lpFileName + -6) == 0) {
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    else {
      if (*(CAtlTransactionManager **)(this + 0x10) == (CAtlTransactionManager *)0x0) {
        local_2c[0] = GetFileAttributesW(lpFileName);
      }
      else {
        iVar4 = ATL::CAtlTransactionManager::GetFileAttributesExW
                          (*(CAtlTransactionManager **)(this + 0x10),lpFileName,
                           GetFileExInfoStandard,local_2c);
        local_2c[0] = -(uint)(iVar4 != 0) & local_2c[0];
      }
      *(uint *)(param_1 + 0x20) = -(uint)(local_2c[0] != 0xffffffff) & local_2c[0];
    }
    iVar4 = ATL::CTime::IsValidFILETIME(&local_3c);
    if (iVar4 == 0) {
      *(undefined4 *)param_1 = 0;
      *(undefined4 *)(param_1 + 4) = 0;
    }
    else {
      puVar3 = (undefined4 *)FUN_100660aa(&local_3c,0xffffffff);
      *(undefined4 *)param_1 = *puVar3;
      *(undefined4 *)(param_1 + 4) = puVar3[1];
    }
    iVar4 = ATL::CTime::IsValidFILETIME(&local_44);
    if (iVar4 == 0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    else {
      puVar3 = (undefined4 *)FUN_100660aa(&local_44,0xffffffff);
      *(undefined4 *)(param_1 + 0x10) = *puVar3;
      *(undefined4 *)(param_1 + 0x14) = puVar3[1];
    }
    iVar4 = ATL::CTime::IsValidFILETIME(&local_4c);
    if (iVar4 == 0) {
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    else {
      puVar3 = (undefined4 *)FUN_100660aa(&local_4c,0xffffffff);
      *(undefined4 *)(param_1 + 8) = *puVar3;
      *(undefined4 *)(param_1 + 0xc) = puVar3[1];
    }
    if (*(int *)param_1 == 0 && *(int *)(param_1 + 4) == 0) {
      *(undefined4 *)param_1 = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 0xc);
    }
    if (*(int *)(param_1 + 0x10) == 0 && *(int *)(param_1 + 0x14) == 0) {
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0xc);
    }
  }
  iVar4 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar4;
}

