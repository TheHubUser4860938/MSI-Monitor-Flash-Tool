// rea decompile_all
// name: CMFCPropertyGridCtrl::HitTest
// address: 0x10048b20
// body: available
// range: 0x10048b20-0x10048be9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: class CMFCPropertyGridProperty * __thiscall CMFCPropertyGridCtrl::HitTest(class
   CPoint,enum CMFCPropertyGridProperty::ClickArea *,int)const 
   
   Library: Visual Studio 2015 Release */

CMFCPropertyGridProperty * __thiscall
CMFCPropertyGridCtrl::HitTest
          (CMFCPropertyGridCtrl *this,LONG param_2,LONG param_3,undefined4 *param_4,int param_5)

{
  undefined4 *puVar1;
  POINT pt;
  POINT pt_00;
  BOOL BVar2;
  CMFCPropertyGridProperty *pCVar3;
  undefined4 *puVar4;
  RECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  pt.y = param_3;
  pt.x = param_2;
  BVar2 = PtInRect((RECT *)(this + 0x328),pt);
  if ((BVar2 == 0) && (param_5 == 0)) {
    local_18.left = BVar2;
    local_18.top = BVar2;
    local_18.right = BVar2;
    local_18.bottom = BVar2;
    GetClientRect(*(HWND *)(this + 0x20),&local_18);
    local_28.top = *(LONG *)(this + 0x334);
    local_28.left = local_18.left;
    local_28.right = local_18.right;
    local_28.bottom = local_18.bottom;
    if ((param_4 != (undefined4 *)0x0) &&
       (pt_00.y = param_3, pt_00.x = param_2, BVar2 = PtInRect(&local_28,pt_00), BVar2 != 0)) {
      *param_4 = 3;
    }
  }
  else {
    puVar4 = *(undefined4 **)(this + (-(uint)(*(int *)(this + 0x304) != 0) & 0x1c) + 0x3a4);
    do {
      if (puVar4 == (undefined4 *)0x0) break;
      puVar1 = puVar4 + 2;
      puVar4 = (undefined4 *)*puVar4;
      pCVar3 = CMFCPropertyGridProperty::HitTest
                         ((CMFCPropertyGridProperty *)*puVar1,param_2,param_3,param_4);
    } while (pCVar3 == (CMFCPropertyGridProperty *)0x0);
  }
  pCVar3 = (CMFCPropertyGridProperty *)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return pCVar3;
}

