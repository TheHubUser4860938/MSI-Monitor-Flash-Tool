// rea decompile_all
// name: CMFCShadowWnd::CMFCShadowWnd
// address: 0x100b47ad
// body: available
// range: 0x100b47ad-0x100b47fa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    private: __thiscall CMFCShadowWnd::CMFCShadowWnd(class CMFCPopupMenu *,int)
   
   Library: Visual Studio 2015 Release */

CMFCShadowWnd * __thiscall
CMFCShadowWnd::CMFCShadowWnd(CMFCShadowWnd *this,CMFCPopupMenu *param_1,int param_2)

{
  CMiniFrameWnd::CMiniFrameWnd((CMiniFrameWnd *)this);
  *(undefined ***)this = vftable;
  CMFCShadowRenderer::CMFCShadowRenderer((CMFCShadowRenderer *)(this + 0x138));
  *(undefined4 *)(this + 0x2b0) = 0;
  *(CMFCPopupMenu **)(this + 0x130) = param_1;
  *(int *)(this + 0x134) = param_2;
  return this;
}

