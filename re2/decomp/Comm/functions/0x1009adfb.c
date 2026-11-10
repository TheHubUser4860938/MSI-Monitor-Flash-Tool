// rea decompile_all
// name: CMFCVisualManagerOffice2007::OnFillOutlookPageButton
// address: 0x1009adfb
// body: available
// range: 0x1009adfb-0x1009af44 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManagerOffice2007::OnFillOutlookPageButton(class CDC
   *,class CRect const &,int,int,unsigned long &)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOffice2007::OnFillOutlookPageButton
          (CMFCVisualManagerOffice2007 *this,CDC *param_1,CRect *param_2,int param_3,int param_4,
          ulong *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  CDrawingManager local_1c [8];
  CMFCVisualManagerOffice2007 *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x1009ae07;
  local_14 = this;
  iVar3 = CanDrawImage(this);
  if (iVar3 == 0) {
    CMFCVisualManagerOffice2003::OnFillOutlookPageButton
              ((CMFCVisualManagerOffice2003 *)this,param_1,param_2,param_3,param_4,param_5);
    return;
  }
  cVar5 = '\0';
  uVar6 = *(undefined4 *)param_2;
  uVar7 = *(undefined4 *)(param_2 + 4);
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  if (*(int *)(this + 0x3ed4) == 0) {
    uVar6 = *(undefined4 *)(this + 0x15c);
    uVar7 = *(undefined4 *)(this + 0x160);
    if (param_4 == 0) {
      if (param_3 != 0) {
        uVar6 = *(undefined4 *)(this + 0x194);
        uVar7 = *(undefined4 *)(this + 400);
      }
    }
    else if (param_3 == 0) {
      uVar6 = *(undefined4 *)(this + 0x198);
      uVar7 = *(undefined4 *)(this + 0x19c);
    }
    else {
      uVar6 = *(undefined4 *)(this + 0x19c);
      uVar7 = *(undefined4 *)(this + 0x198);
    }
    CDrawingManager::CDrawingManager(local_1c,param_1);
    local_8 = 0;
    CDrawingManager::FillGradient
              (local_1c,*(undefined4 *)param_2,*(undefined4 *)(param_2 + 4),
               *(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),uVar6,uVar7,1,0,0);
    FUN_10079775();
    local_14 = this;
    goto LAB_1009af16;
  }
  if (param_4 == 0) {
    if (param_3 != 0) {
      uVar4 = *(ulong *)(this + 0x9078);
      cVar5 = '\x01';
      goto LAB_1009ae68;
    }
  }
  else {
    uVar4 = *(ulong *)(this + 0x907c);
    cVar5 = (param_3 != 0) + '\x02';
LAB_1009ae68:
    *param_5 = uVar4;
  }
  iVar3 = *(int *)(this + 0x3e40);
  guard_check_icall(param_1,uVar6,uVar7,uVar1,uVar2,cVar5,0xff);
  (**(code **)(iVar3 + 0x10))();
LAB_1009af16:
  *param_5 = *(ulong *)(local_14 + 0x9074);
  if (param_4 == 0) {
    if (param_3 == 0) {
      return;
    }
    uVar4 = *(ulong *)(local_14 + 0x9078);
  }
  else {
    uVar4 = *(ulong *)(local_14 + 0x907c);
  }
  *param_5 = uVar4;
  return;
}

