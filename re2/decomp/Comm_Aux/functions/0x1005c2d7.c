// rea decompile_all
// name: CFile::GetStatus
// address: 0x1005c2d7
// body: available
// range: 0x1005c2d7-0x1005c43a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: static int __stdcall CFile::GetStatus(wchar_t const *,struct CFileStatus &,class
   ATL::CAtlTransactionManager *)
   
   Library: Visual Studio 2015 Release */

int CFile::GetStatus(wchar_t *param_1,CFileStatus *param_2,CAtlTransactionManager *param_3)

{
  size_t sVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 uVar4;
  uint local_2c;
  _FILETIME local_28;
  _FILETIME local_20;
  _FILETIME local_18;
  uint local_c;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  if ((param_1 != (wchar_t *)0x0) && (sVar1 = _wcslen(param_1), sVar1 < 0x104)) {
    iVar3 = AfxFullPath((wchar_t *)(param_2 + 0x24),param_1);
    if (iVar3 == 0) {
      *(wchar_t *)(param_2 + 0x24) = L'\0';
    }
    else {
      if (param_3 == (CAtlTransactionManager *)0x0) {
        iVar3 = GetFileAttributesExW(param_1,GetFileExInfoStandard,&local_2c);
      }
      else {
        iVar3 = ATL::CAtlTransactionManager::GetFileAttributesExW
                          (param_3,param_1,GetFileExInfoStandard,&local_2c);
      }
      if (iVar3 != 0) {
        *(uint *)(param_2 + 0x20) = local_2c & 0xffffff7f;
        uVar4 = __allshl();
        *(int *)(param_2 + 0x18) = (int)uVar4;
        *(uint *)(param_2 + 0x18) = *(uint *)(param_2 + 0x18) | local_c;
        *(int *)(param_2 + 0x1c) = (int)((ulonglong)uVar4 >> 0x20);
        *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
        iVar3 = ATL::CTime::IsValidFILETIME(&local_28);
        if (iVar3 == 0) {
          *(undefined4 *)param_2 = 0;
          *(undefined4 *)(param_2 + 4) = 0;
        }
        else {
          puVar2 = (undefined4 *)FUN_1005bd67(&local_28,0xffffffff);
          *(undefined4 *)param_2 = *puVar2;
          *(undefined4 *)(param_2 + 4) = puVar2[1];
        }
        iVar3 = ATL::CTime::IsValidFILETIME(&local_20);
        if (iVar3 == 0) {
          *(undefined4 *)(param_2 + 0x10) = 0;
          *(undefined4 *)(param_2 + 0x14) = 0;
        }
        else {
          puVar2 = (undefined4 *)FUN_1005bd67(&local_20,0xffffffff);
          *(undefined4 *)(param_2 + 0x10) = *puVar2;
          *(undefined4 *)(param_2 + 0x14) = puVar2[1];
        }
        iVar3 = ATL::CTime::IsValidFILETIME(&local_18);
        if (iVar3 == 0) {
          *(undefined4 *)(param_2 + 8) = 0;
          *(undefined4 *)(param_2 + 0xc) = 0;
        }
        else {
          puVar2 = (undefined4 *)FUN_1005bd67(&local_18,0xffffffff);
          *(undefined4 *)(param_2 + 8) = *puVar2;
          *(undefined4 *)(param_2 + 0xc) = puVar2[1];
        }
        if (*(int *)param_2 == 0 && *(int *)(param_2 + 4) == 0) {
          *(undefined4 *)param_2 = *(undefined4 *)(param_2 + 8);
          *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_2 + 0xc);
        }
        if (*(int *)(param_2 + 0x10) == 0 && *(int *)(param_2 + 0x14) == 0) {
          *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_2 + 8);
          *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_2 + 0xc);
        }
      }
    }
  }
  iVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar3;
}

