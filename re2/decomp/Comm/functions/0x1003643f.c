// rea decompile_all
// name: CMFCButton::SetImageInternal
// address: 0x1003643f
// body: available
// range: 0x1003643f-0x100365c5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCButton::SetImageInternal(struct HBITMAP__ *,int,struct HBITMAP__
   *,int,int,struct HBITMAP__ *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCButton::SetImageInternal
          (CMFCButton *this,HBITMAP__ *param_1,int param_2,HBITMAP__ *param_3,int param_4,
          int param_5,HBITMAP__ *param_6)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  AFX_GLOBAL_DATA *pAVar4;
  HBITMAP__ *h;
  int iVar5;
  undefined1 local_2c [4];
  undefined4 local_28;
  undefined4 local_24;
  ushort local_1a;
  int local_14;
  CMFCButton *local_10;
  int local_c;
  CMFCButton *local_8;
  
  local_10 = this;
  ClearImages(this,param_5);
  if (param_1 != (HBITMAP__ *)0x0) {
    local_14 = (param_6 != (HBITMAP__ *)0x0) + 2;
    iVar5 = 0;
    do {
      h = param_1;
      if ((iVar5 != 0) && (h = param_3, iVar5 != 1)) {
        h = param_6;
      }
      if (param_5 == 0) {
        if (iVar5 == 0) {
          iVar2 = 0xf0;
        }
        else {
          iVar2 = (-(uint)(iVar5 != 1) & 0x118) + 0x208;
        }
      }
      else if (iVar5 == 0) {
        iVar2 = 0x438;
      }
      else {
        iVar2 = (-(uint)(iVar5 != 1) & 0x118) + 0x550;
      }
      local_8 = this + iVar2;
      if (h == (HBITMAP__ *)0x0) break;
      GetObjectW(h,0x18,local_2c);
      if ((param_4 == 0) && ((local_1a < 9 || (0x1f < local_1a)))) {
        local_c = 0;
LAB_10036505:
        if ((local_1a != 0x20) || (iVar2 = FUN_1006cbe8(), iVar2 == 0)) goto LAB_10036519;
        bVar1 = true;
      }
      else {
        local_c = 1;
        if (param_4 == 0) goto LAB_10036505;
LAB_10036519:
        bVar1 = false;
      }
      if (iVar5 == 0) {
        *(undefined4 *)(local_10 + 0xe0) = local_28;
        *(undefined4 *)(local_10 + 0xe4) = local_24;
      }
      if (bVar1) {
        CMFCToolBarImages::PreMultiplyAlpha(h,1);
      }
      *(undefined4 *)(local_8 + 0x54) = local_28;
      *(undefined4 *)(local_8 + 0x58) = local_24;
      if (local_c == 0) {
        if (bVar1) {
          uVar3 = 0xffffffff;
        }
        else {
          pAVar4 = GetGlobalData();
          uVar3 = *(ulong *)(pAVar4 + 0x1c);
        }
      }
      else {
        uVar3 = 0xc0c0c0;
      }
      CMFCToolBarImages::SetTransparentColor((CMFCToolBarImages *)local_8,uVar3);
      CMFCToolBarImages::AddImage((CMFCToolBarImages *)local_8,h,1);
      iVar5 = iVar5 + 1;
      this = local_10;
    } while (iVar5 < local_14);
    if (param_2 != 0) {
      if (param_3 != (HBITMAP__ *)0x0) {
        DeleteObject(param_3);
      }
      DeleteObject(param_1);
      if (param_6 != (HBITMAP__ *)0x0) {
        DeleteObject(param_6);
      }
    }
  }
  return;
}

