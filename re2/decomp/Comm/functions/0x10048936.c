// rea decompile_all
// name: CBasePane::DoPaint
// address: 0x10048936
// body: available
// range: 0x10048936-0x100489da inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CBasePane::DoPaint(class CDC *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CBasePane::DoPaint(CBasePane *this,CDC *param_1)

{
  code *pcVar1;
  int iVar2;
  CMFCVisualManager *pCVar3;
  tagRECT local_28;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  pcVar1 = *(code **)(*(int *)param_1 + 0x50);
  guard_check_icall(&local_18);
  (*pcVar1)();
  local_28.left = 0;
  local_28.top = 0;
  local_28.right = 0;
  local_28.bottom = 0;
  GetClientRect(*(HWND *)(this + 0x20),&local_28);
  pCVar3 = CMFCVisualManager::GetInstance();
  iVar2 = *(int *)pCVar3;
  guard_check_icall(param_1,this,local_28.left,local_28.top,local_28.right,local_28.bottom,local_18,
                    local_14,local_10,local_c,0);
  (**(code **)(iVar2 + 0x34))();
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

