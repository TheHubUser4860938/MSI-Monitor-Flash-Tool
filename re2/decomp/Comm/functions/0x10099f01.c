// rea decompile_all
// name: CMFCVisualManagerOffice2007::OnEraseTabsArea
// address: 0x10099f01
// body: available
// range: 0x10099f01-0x1009a067 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManagerOffice2007::OnEraseTabsArea(class CDC *,class
   CRect,class CMFCBaseTabCtrl const *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOffice2007::OnEraseTabsArea
          (CMFCVisualManagerOffice2007 *this,CDC *param_1,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,int *param_7)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  CDrawingManager local_20 [8];
  CMFCVisualManagerOffice2007 *local_18;
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x10099f0d;
  local_18 = this;
  iVar2 = CanDrawImage(this);
  if ((iVar2 != 0) && (param_7[0x4d] == 0)) {
    pcVar1 = *(code **)(*param_7 + 0x288);
    guard_check_icall();
    iVar2 = (*pcVar1)();
    if (iVar2 == 0) {
      pcVar1 = *(code **)(*param_7 + 0x2a8);
      guard_check_icall();
      iVar2 = (*pcVar1)();
      if (iVar2 == 0) {
        pcVar1 = *(code **)(*param_7 + 0x28c);
        guard_check_icall();
        iVar2 = (*pcVar1)();
        if (iVar2 == 0) {
          pcVar1 = *(code **)(*param_7 + 0x290);
          guard_check_icall();
          iVar2 = (*pcVar1)();
          if (iVar2 == 0) {
            local_14 = param_7[0x24];
            pcVar1 = *(code **)(*param_7 + 0x280);
            guard_check_icall();
            iVar2 = (*pcVar1)();
            if (iVar2 != 0) {
              local_14 = (-(uint)(local_14 != 0) & 0xfffffe88) + 0x3b50;
              iVar2 = *(int *)(this + local_14);
              guard_check_icall(param_1,param_3,param_4,param_5,param_6,0,0xff);
              (**(code **)(iVar2 + 0x10))();
              return;
            }
            CDrawingManager::CDrawingManager(local_20,param_1);
            uVar4 = *(undefined4 *)(this + 0x15c);
            local_8 = 0;
            uVar3 = *(undefined4 *)(this + 0x160);
            if (local_14 == 0) {
              uVar3 = uVar4;
              uVar4 = *(undefined4 *)(this + 0x160);
            }
            CDrawingManager::FillGradient
                      (local_20,param_3,param_4,param_5,param_6,uVar3,uVar4,1,0,0);
            FUN_10079775();
            return;
          }
        }
      }
    }
  }
  CMFCVisualManagerOffice2003::OnEraseTabsArea
            ((CMFCVisualManagerOffice2003 *)this,param_1,param_3,param_4,param_5,param_6,param_7);
  return;
}

