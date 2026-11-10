// rea decompile_all
// name: SetStyle
// address: 0x100a41b6
// body: available
// range: 0x100a41b6-0x100a422b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: static int __stdcall CMFCVisualManagerOffice2007::SetStyle(enum
   CMFCVisualManagerOffice2007::Style,char const *)
    public: static int __stdcall CMFCVisualManagerOffice2007::SetStyle(enum
   CMFCVisualManagerOffice2007::Style,wchar_t const *)
   
   Library: Visual Studio 2015 Release */

bool SetStyle(int param_1)

{
  HMODULE hModule;
  AFX_MODULE_STATE *pAVar1;
  HRSRC pHVar2;
  bool bVar3;
  LPCWSTR local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x100a41c2;
  if ((DAT_101dc728 == param_1) && (0x20 < DAT_101dc72c)) {
    bVar3 = true;
  }
  else {
    GetStyleResourceID(local_14,param_1);
    local_8 = 0;
    pAVar1 = AfxGetModuleState();
    hModule = *(HMODULE *)(pAVar1 + 0xc);
    pHVar2 = FindResourceW(hModule,local_14[0],L"STYLE_XML");
    bVar3 = pHVar2 != (HRSRC)0x0;
    if (bVar3) {
      CMFCVisualManagerOffice2007::CleanStyle();
      DAT_101dc728 = param_1;
      CMFCVisualManagerOffice2007::SetResourceHandle(hModule);
    }
    FUN_10003460();
  }
  return bVar3;
}

