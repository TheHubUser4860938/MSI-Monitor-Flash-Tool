// rea decompile_all
// name: COleDropTarget::Register
// address: 0x101299f2
// body: available
// range: 0x101299f2-0x10129a57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall COleDropTarget::Register(class CWnd *)
   
   Library: Visual Studio 2015 Release */

int __thiscall COleDropTarget::Register(COleDropTarget *this,CWnd *param_1)

{
  IUnknown *pUnk;
  HRESULT HVar1;
  uint uVar2;
  LPDROPTARGET pDropTarget;
  
  pUnk = CCmdTarget::GetInterface((CCmdTarget *)this,&DAT_10200adc);
  HVar1 = CoLockObjectExternal(pUnk,1,0);
  if (HVar1 == 0) {
    pDropTarget = (LPDROPTARGET)CCmdTarget::GetInterface((CCmdTarget *)this,&DAT_10200b4c);
    HVar1 = RegisterDragDrop(*(HWND *)(param_1 + 0x20),pDropTarget);
    if (HVar1 == 0) {
      *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
      *(COleDropTarget **)(param_1 + 0x6c) = this;
    }
    else {
      CoLockObjectExternal(pUnk,0,0);
    }
    uVar2 = (uint)(HVar1 == 0);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

