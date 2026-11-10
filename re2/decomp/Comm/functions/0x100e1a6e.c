// rea decompile_all
// name: CFrameImpl::OnWindowPosChanging
// address: 0x100e1a6e
// body: available
// range: 0x100e1a6e-0x100e1b09 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CFrameImpl::OnWindowPosChanging(struct tagWINDOWPOS *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CFrameImpl::OnWindowPosChanging(CFrameImpl *this,tagWINDOWPOS *param_1)

{
  code *pcVar1;
  int iVar2;
  CMFCVisualManager *pCVar3;
  undefined4 uVar4;
  undefined4 local_8;
  
  if ((((*(int *)(this + 0x3c) == 0) && (*(int *)(this + 0x2c) == 0)) &&
      (((byte)*(undefined4 *)(param_1 + 0x18) & 0x21) != 1)) &&
     ((*(int *)(this + 0xfc) != 0 || (iVar2 = IsOwnerDrawCaption(this), iVar2 != 0)))) {
    local_8 = 0;
    *(undefined4 *)(this + 0x3c) = 1;
    if (*(int *)(this + 0xb4) != 0) {
      local_8 = DAT_101dc7c0;
      DAT_101dc7c0 = 1;
    }
    pCVar3 = CMFCVisualManager::GetInstance();
    pcVar1 = *(code **)(*(int *)pCVar3 + 0x1f8);
    guard_check_icall(*(undefined4 *)(this + 0xb0),*(undefined4 *)(param_1 + 0x10),
                      *(undefined4 *)(param_1 + 0x14));
    uVar4 = (*pcVar1)();
    *(undefined4 *)(this + 0x20) = uVar4;
    if (*(int *)(this + 0xb4) != 0) {
      DAT_101dc7c0 = local_8;
    }
    *(undefined4 *)(this + 0x3c) = 0;
  }
  return;
}

