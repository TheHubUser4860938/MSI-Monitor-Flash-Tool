// rea decompile_all
// name: CWinApp::WriteProfileBinary
// address: 0x10017d3a
// body: available
// range: 0x10017d3a-0x10017e11 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CWinApp::WriteProfileBinary(wchar_t const *,wchar_t const
   *,unsigned char *,unsigned int)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CWinApp::WriteProfileBinary
          (CWinApp *this,wchar_t *param_1,wchar_t *param_2,uchar *param_3,uint param_4)

{
  code *pcVar1;
  longlong lVar2;
  HKEY__ *hKey;
  LSTATUS LVar3;
  void *_Memory;
  uint uVar4;
  
  uVar4 = 0;
  if (*(int *)(this + 0x58) == 0) {
    lVar2 = (ulonglong)(param_4 * 2 + 1) * 2;
    _Memory = (void *)FUN_10011fb9(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2);
    if (param_4 != 0) {
      do {
        *(ushort *)((int)_Memory + uVar4 * 4) = (param_3[uVar4] & 0xf) + 0x41;
        *(ushort *)((int)_Memory + uVar4 * 4 + 2) = (param_3[uVar4] >> 4) + 0x41;
        uVar4 = uVar4 + 1;
      } while (uVar4 < param_4);
    }
    *(undefined2 *)((int)_Memory + uVar4 * 4) = 0;
    pcVar1 = *(code **)(*(int *)this + 0x88);
    guard_check_icall(param_1,param_2,_Memory);
    uVar4 = (*pcVar1)();
    FID_conflict__free(_Memory);
  }
  else {
    hKey = GetSectionKey(this,param_1,(CAtlTransactionManager *)0x0);
    uVar4 = 0;
    if (hKey != (HKEY__ *)0x0) {
      LVar3 = RegSetValueExW(hKey,param_2,0,3,param_3,param_4);
      RegCloseKey(hKey);
      uVar4 = (uint)(LVar3 == 0);
    }
  }
  return uVar4;
}

