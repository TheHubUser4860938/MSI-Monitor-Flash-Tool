// rea decompile_all
// name: CMFCToolBar::CalcMaxButtonHeight
// address: 0x451277
// body: available
// range: 0x451277-0x4513ad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4512e5 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual int __thiscall CMFCToolBar::CalcMaxButtonHeight(void)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCToolBar::CalcMaxButtonHeight(CMFCToolBar *this)

{
  code *pcVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  CClientDC local_4c [20];
  undefined4 local_38;
  undefined1 local_30 [16];
  CFont *local_20;
  uint local_1c;
  int local_18;
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x3c;
  local_8 = 0x451283;
  pcVar1 = *(code **)(*(int *)this + 0x194);
  guard_check_icall();
  uVar2 = (*pcVar1)();
  local_1c = (uint)((uVar2 & 0xa000) != 0);
  *(undefined4 *)(this + 0xb8c) = 0;
  if ((*(int *)(this + 0xb88) == 0) || ((uVar2 & 0xa000) == 0)) {
    iVar7 = 0;
  }
  else {
    local_14 = 0;
    CClientDC::CClientDC(local_4c,(CWnd *)this);
    local_8 = 0;
    local_20 = CBasePane::SelectDefaultFont((CBasePane *)this,(CDC *)local_4c);
    if (local_20 == (CFont *)0x0) {
LAB_004512e5:
                    /* WARNING: Subroutine does not return */
      FUN_00429127();
    }
    local_18 = *(int *)(this + 0xc40);
    iVar7 = 0;
    while (local_18 != 0) {
      piVar3 = (int *)FUN_004ead48(&local_18);
      piVar3 = (int *)*piVar3;
      if (piVar3 == (int *)0x0) goto LAB_004512e5;
      if (piVar3[6] != 0) {
        if (*(int *)(piVar3[0xb] + -0xc) == 0) {
          pcVar1 = *(code **)(*(int *)this + 0x3a0);
          guard_check_icall(piVar3);
          (*pcVar1)();
        }
        iVar7 = *piVar3;
        uVar2 = local_1c;
        uVar4 = GetButtonSize(this);
        guard_check_icall(local_30,local_4c,uVar4,uVar2);
        puVar5 = (undefined4 *)(**(code **)(iVar7 + 0x1c))();
        local_38 = *puVar5;
        iVar7 = local_14;
        if (local_14 <= (int)puVar5[1]) {
          iVar7 = puVar5[1];
          local_14 = iVar7;
        }
      }
    }
    iVar6 = GetButtonSize(this);
    *(uint *)(this + 0xb8c) = (uint)(*(int *)(iVar6 + 4) < iVar7);
    CDC::SelectObject((CDC *)local_4c,(CPen *)local_20);
    CClientDC::~CClientDC(local_4c);
  }
  return iVar7;
}

