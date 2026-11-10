// rea decompile_all
// name: AFX_MODULE_STATE::CreateActivationContext
// address: 0x1003ba12
// body: available
// range: 0x1003ba12-0x1003bb0d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall AFX_MODULE_STATE::CreateActivationContext(void)
   
   Library: Visual Studio 2008 Release */

void __thiscall AFX_MODULE_STATE::CreateActivationContext(AFX_MODULE_STATE *this)

{
  HMODULE hModule;
  DWORD DVar1;
  void *pvVar2;
  undefined4 local_234;
  undefined4 local_230;
  WCHAR *local_22c;
  undefined4 local_220;
  HMODULE local_218;
  WCHAR local_214 [260];
  short local_c;
  undefined2 local_a;
  uint local_8;
  
  local_8 = DAT_10064168 ^ (uint)&stack0xfffffffc;
  _AfxInitContextAPI();
  hModule = *(HMODULE *)(this + 8);
  local_a = 0;
  local_c = 0;
  DVar1 = GetModuleFileNameW(hModule,local_214,0x105);
  if (DVar1 != 0) {
    if (local_c == 0) {
      local_22c = local_214;
      local_234 = 0x20;
      local_230 = 0x88;
      local_220 = 2;
      local_218 = hModule;
      pvVar2 = AfxCreateActCtxW((tagACTCTXW *)&local_234);
      *(void **)(this + 0x80) = pvVar2;
      if (pvVar2 == (void *)0xffffffff) {
        local_220 = 3;
        pvVar2 = AfxCreateActCtxW((tagACTCTXW *)&local_234);
        *(void **)(this + 0x80) = pvVar2;
      }
      if (*(int *)(this + 0x80) == -1) {
        local_220 = 1;
        pvVar2 = AfxCreateActCtxW((tagACTCTXW *)&local_234);
        *(void **)(this + 0x80) = pvVar2;
        if (pvVar2 == (void *)0xffffffff) {
          *(undefined4 *)(this + 0x80) = 0;
        }
      }
    }
    else {
      SetLastError(0x6f);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

