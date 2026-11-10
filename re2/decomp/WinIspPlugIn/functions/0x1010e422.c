// rea decompile_all
// name: CMFCRibbonTab::GetKeyTipRect
// address: 0x1010e422
// body: available
// range: 0x1010e422-0x1010e549 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual class CRect __thiscall CMFCRibbonTab::GetKeyTipRect(class CDC *,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonTab::GetKeyTipRect(CMFCRibbonTab *this,CDC *param_1,int param_2)

{
  RECT *lprc;
  code *pcVar1;
  BOOL BVar2;
  int iVar3;
  int iVar4;
  int local_30;
  int local_2c;
  LONG local_28;
  undefined4 uStack_24;
  int local_20;
  int local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  pcVar1 = *(code **)(*(int *)this + 0x1d4);
  guard_check_icall(&local_30,param_2);
  (*pcVar1)();
  if ((local_30 != 0) || (local_2c != 0)) {
    lprc = (RECT *)(this + 0x74);
    BVar2 = IsRectEmpty(lprc);
    if (BVar2 == 0) {
      local_18.left = lprc->left;
      local_18.top = *(LONG *)(this + 0x78);
      local_18.right = *(LONG *)(this + 0x7c);
      local_18.bottom = *(LONG *)(this + 0x80);
      local_28 = lprc->left;
      uStack_24 = *(undefined4 *)(this + 0x78);
      local_20 = *(int *)(this + 0x7c);
      local_1c = *(int *)(this + 0x80);
      iVar4 = *(int *)param_2;
      guard_check_icall(*(int *)(*(int *)(this + 0x88) + 0x8c),
                        *(undefined4 *)(*(int *)(*(int *)(this + 0x88) + 0x8c) + -0xc),&local_28,
                        0x424);
      (**(code **)(iVar4 + 0x68))();
      iVar3 = ((local_18.right - local_18.left) - (local_20 - local_28)) / 2;
      iVar4 = 4;
      if (3 < iVar3) {
        iVar4 = iVar3;
      }
      InflateRect(&local_18,-iVar4,0);
      local_18.left = (local_18.right + local_18.left) / 2 - local_30 / 2;
      local_18.right = local_18.left + local_30;
      local_18.top = local_1c + -2;
      local_18.bottom = local_2c + local_18.top;
      *(LONG *)param_1 = local_18.left;
      *(LONG *)(param_1 + 4) = local_18.top;
      *(LONG *)(param_1 + 8) = local_18.right;
      *(LONG *)(param_1 + 0xc) = local_18.bottom;
      goto LAB_1010e535;
    }
  }
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
LAB_1010e535:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

