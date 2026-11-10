// rea decompile_all
// name: CMFCTabCtrl::GetTabFromPoint
// address: 0x4f22da
// body: available
// range: 0x4f22da-0x4f2454 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCTabCtrl::GetTabFromPoint(class CPoint &)const 
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCTabCtrl::GetTabFromPoint(CMFCTabCtrl *this,CPoint *param_1)

{
  BOOL BVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  BVar1 = PtInRect((RECT *)(this + 0x2dc),*(POINT *)param_1);
  if (BVar1 != 0) {
    if (((*(int *)(this + 0x254) == 0) && (*(int *)(this + 600) == 0)) &&
       (*(int *)(this + 0x25c) == 0)) {
      CMFCBaseTabCtrl::GetTabFromPoint((CMFCBaseTabCtrl *)this,param_1);
    }
    else {
      if (-1 < *(int *)(this + 0xc0)) {
        iVar3 = FUN_004858f9(*(int *)(this + 0xc0));
        local_18.left = *(int *)(iVar3 + 0x10);
        local_18.top = *(int *)(iVar3 + 0x14);
        local_18.right = *(LONG *)(iVar3 + 0x18);
        local_18.bottom = *(int *)(iVar3 + 0x1c);
        BVar1 = PtInRect(&local_18,*(POINT *)param_1);
        if (BVar1 != 0) {
          iVar3 = FUN_0041a24d(*(undefined4 *)(this + 0xc0));
          if (iVar3 == 0) {
            iVar3 = local_18.bottom - local_18.top;
            if ((*(int *)param_1 < iVar3 + local_18.left) &&
               (iVar5 = *(int *)param_1 - local_18.left,
               (*(int *)(param_1 + 4) - local_18.top) * (*(int *)(param_1 + 4) - local_18.top) +
               iVar5 * iVar5 < (iVar3 * iVar3) / 2)) {
              iVar3 = *(int *)(this + 0xc0);
              do {
                iVar3 = iVar3 + -1;
                if (iVar3 < 0) break;
                iVar5 = FUN_004858f9(iVar3);
              } while (*(int *)(iVar5 + 0x34) == 0);
            }
          }
          goto LAB_004f243e;
        }
      }
      iVar3 = *(int *)(this + 0xbc);
      iVar5 = 0;
      if (0 < iVar3) {
        do {
          iVar4 = iVar5;
          if (*(int *)(this + 0xb0) == iVar3) {
            piVar2 = (int *)FUN_004ab4cd(iVar5);
            iVar4 = *piVar2;
          }
          iVar3 = FUN_004858f9(iVar4);
          if ((*(int *)(iVar3 + 0x34) != 0) &&
             (BVar1 = PtInRect((RECT *)(iVar3 + 0x10),*(POINT *)param_1), BVar1 != 0)) break;
          iVar3 = *(int *)(this + 0xbc);
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar3);
      }
    }
  }
LAB_004f243e:
  iVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar3;
}

