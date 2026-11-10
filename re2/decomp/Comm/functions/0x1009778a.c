// rea decompile_all
// name: CMFCVisualManagerOffice2007::OnDrawRibbonCategoryCaption
// address: 0x1009778a
// body: available
// range: 0x1009778a-0x1009787d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual unsigned long __thiscall
   CMFCVisualManagerOffice2007::OnDrawRibbonCategoryCaption(class CDC *,class
   CMFCRibbonContextCaption *)
   
   Library: Visual Studio 2015 Release */

ulong __thiscall
CMFCVisualManagerOffice2007::OnDrawRibbonCategoryCaption
          (CMFCVisualManagerOffice2007 *this,CDC *param_1,CMFCRibbonContextCaption *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  
  iVar3 = CanDrawImage(this);
  if ((iVar3 == 0) || (iVar3 = *(int *)(param_2 + 0x1c4), iVar3 == 0)) {
    uVar4 = CMFCVisualManagerOffice2003::OnDrawRibbonCategoryCaption
                      ((CMFCVisualManagerOffice2003 *)this,param_1,param_2);
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 0x74);
    iVar2 = *(int *)(this + iVar3 * 0x648 + 0x8b00);
    guard_check_icall(param_1,*(undefined4 *)(param_2 + 0x74),*(undefined4 *)(param_2 + 0x78),
                      *(undefined4 *)(param_2 + 0x7c),*(undefined4 *)(param_2 + 0x80),0,0xff);
    (**(code **)(iVar2 + 0x10))();
    if (0 < *(int *)(param_2 + 0x1cc)) {
      iVar2 = *(int *)(this + 0x8d90);
      guard_check_icall(param_1,uVar1,
                        *(undefined4 *)(*(int *)(*(int *)(param_2 + 0x84) + 0x7a8) + 0x108),
                        *(int *)(param_2 + 0x1cc),
                        *(undefined4 *)(*(int *)(*(int *)(param_2 + 0x84) + 0x7a8) + 0x110),0,0xff);
      (**(code **)(iVar2 + 0x14))();
    }
    uVar4 = *(ulong *)(this + iVar3 * 0x648 + 0x8b00 + 0x5e0);
  }
  return uVar4;
}

