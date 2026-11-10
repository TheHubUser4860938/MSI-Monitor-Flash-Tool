// rea decompile_all
// name: CMFCCaptionBar::CheckRectangle
// address: 0x100e87a2
// body: available
// range: 0x100e87a2-0x100e885a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CMFCCaptionBar::CheckRectangle(class CRect &,class CRect const &,int)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCCaptionBar::CheckRectangle(CMFCCaptionBar *this,CRect *param_1,CRect *param_2,int param_3)

{
  BOOL BVar1;
  int iVar2;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  BVar1 = IsRectEmpty((RECT *)param_1);
  if ((BVar1 == 0) && (BVar1 = IsRectEmpty((RECT *)param_2), BVar1 == 0)) {
    local_18.left = *(LONG *)param_2;
    local_18.top = *(LONG *)(param_2 + 4);
    local_18.right = *(LONG *)(param_2 + 8);
    local_18.bottom = *(LONG *)(param_2 + 0xc);
    InflateRect(&local_18,*(int *)(this + 0x494),*(int *)(this + 0x494));
    if ((*(int *)param_1 <= local_18.right) && (local_18.left <= *(int *)param_1)) {
      *(LONG *)param_1 = local_18.right;
    }
    if ((local_18.left <= *(int *)(param_1 + 8)) && (*(int *)(param_1 + 8) <= local_18.right)) {
      *(LONG *)(param_1 + 8) = local_18.left;
    }
    iVar2 = *(int *)param_1;
    if ((local_18.left <= iVar2) && (*(int *)(param_1 + 8) <= local_18.right)) {
      *(int *)(param_1 + 8) = iVar2;
    }
    if ((iVar2 <= local_18.left) && (local_18.right <= *(int *)(param_1 + 8))) {
      if (param_3 == 0) {
        *(LONG *)param_1 = local_18.right;
      }
      else {
        *(LONG *)(param_1 + 8) = local_18.left;
      }
    }
    if (param_3 == 0) {
      if (local_18.left < *(int *)(param_1 + 8)) goto LAB_100e8847;
    }
    else if (*(int *)param_1 < local_18.right) goto LAB_100e8847;
    *(undefined4 *)param_1 = *(undefined4 *)(param_1 + 8);
  }
LAB_100e8847:
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}

