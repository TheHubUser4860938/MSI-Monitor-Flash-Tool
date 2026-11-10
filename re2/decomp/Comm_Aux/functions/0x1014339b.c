// rea decompile_all
// name: CMFCVisualManagerOfficeXP::OnDrawCaptionButtonIcon
// address: 0x1014339b
// body: available
// range: 0x1014339b-0x1014342c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCVisualManagerOfficeXP::OnDrawCaptionButtonIcon(class CDC
   *,class CMFCCaptionButton *,enum CMenuImages::IMAGES_IDS,int,int,class CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOfficeXP::OnDrawCaptionButtonIcon
          (CMFCVisualManagerOfficeXP *this,CDC *param_1,int param_2,IMAGES_IDS param_3,int param_4,
          int param_5)

{
  IMAGE_STATE IVar1;
  undefined4 uVar2;
  undefined4 local_c;
  undefined4 local_8;
  
  if (param_5 != 0) {
    IVar1 = 1;
    goto LAB_101433df;
  }
  if (*(int *)(param_2 + 8) == 0) {
    if (*(int *)(param_2 + 4) != 0) {
LAB_10143404:
      uVar2 = *(undefined4 *)(this + 0xcc);
      goto LAB_10143412;
    }
    if (*(int *)(param_2 + 0x20) == -1) {
      IVar1 = -(uint)(param_4 != 0) & 3;
      goto LAB_101433df;
    }
    if (((0xc0 < *(byte *)(param_2 + 0x20)) && (0xc0 < *(byte *)(param_2 + 0x21))) &&
       (0xc0 < *(byte *)(param_2 + 0x22))) goto LAB_10143428;
  }
  else {
    if (*(int *)(param_2 + 4) != 0) goto LAB_10143404;
    uVar2 = *(undefined4 *)(this + 200);
LAB_10143412:
    if ((((byte)uVar2 < 0xc1) && ((byte)((uint)uVar2 >> 8) < 0xc1)) &&
       ((byte)((uint)uVar2 >> 0x10) < 0xc1)) {
LAB_10143428:
      IVar1 = 3;
      goto LAB_101433df;
    }
  }
  IVar1 = 0;
LAB_101433df:
  local_c = 0;
  local_8 = 0;
  CMenuImages::Draw(param_1,param_3,(CPoint *)&stack0x00000018,IVar1,(CSize *)&local_c);
  return;
}

