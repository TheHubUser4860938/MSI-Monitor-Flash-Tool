// rea decompile_all
// name: CMFCToolBar::SizeToolBar
// address: 0x1006665d
// body: available
// range: 0x1006665d-0x10066847 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100666e7 to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: void __thiscall CMFCToolBar::SizeToolBar(int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCToolBar::SizeToolBar(CMFCToolBar *this,int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  AFX_GLOBAL_DATA *pAVar4;
  int iVar5;
  int *piVar6;
  CClientDC local_48 [20];
  undefined1 local_34 [4];
  int local_30;
  CFont *local_2c;
  int local_24;
  undefined1 local_20 [4];
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x38;
  local_8 = 0x10066669;
  pcVar1 = *(code **)(*(int *)this + 0x358);
  guard_check_icall();
  iVar2 = (*pcVar1)();
  pcVar1 = *(code **)(*(int *)this + 0x354);
  local_18 = iVar2;
  guard_check_icall();
  local_14 = (*pcVar1)();
  CClientDC::CClientDC(local_48,(CWnd *)this);
  local_8 = 0;
  pcVar1 = *(code **)(*(int *)this + 0x194);
  guard_check_icall();
  uVar3 = (*pcVar1)();
  if ((uVar3 & 0xa000) == 0) {
    pAVar4 = GetGlobalData();
    local_2c = (CFont *)CDC::SelectObject((CDC *)local_48,(CPen *)(pAVar4 + 0x14c));
  }
  else {
    local_2c = CBasePane::SelectDefaultFont((CBasePane *)this,(CDC *)local_48);
  }
  if (local_2c == (CFont *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10012a3f();
  }
  if (param_2 == 0) {
    local_1c = 0;
    iVar2 = WrapToolBar(this,0,0x7fff,(CDC *)local_48,iVar2,local_14);
    local_30 = WrapToolBar(this,param_1,0x7fff,(CDC *)local_48,local_18,local_14);
    if ((iVar2 != local_30) && (0 < param_1)) {
      do {
        local_24 = (local_1c + param_1) / 2;
        iVar5 = WrapToolBar(this,local_24,0x7fff,(CDC *)local_48,local_18,local_14);
        iVar2 = local_24;
        if (iVar5 != local_30) {
          if (local_1c == local_24) {
            WrapToolBar(this,param_1,0x7fff,(CDC *)local_48,local_18,local_14);
            break;
          }
          local_1c = local_24;
          iVar2 = param_1;
        }
        param_1 = iVar2;
      } while (local_1c < iVar2);
    }
    pcVar1 = *(code **)(*(int *)this + 0x2a4);
    guard_check_icall(local_34,0);
    piVar6 = (int *)(*pcVar1)();
    iVar2 = *piVar6;
  }
  else {
    WrapToolBar(this,0x7fff,0x7fff,(CDC *)local_48,iVar2,local_14);
    pcVar1 = *(code **)(*(int *)this + 0x2a4);
    guard_check_icall(local_34,0);
    piVar6 = (int *)(*pcVar1)();
    iVar2 = *piVar6;
    if (piVar6[1] < param_1) {
      iVar5 = 0;
      do {
        piVar6 = (int *)GetButtonSize(this);
        local_30 = iVar5 + *piVar6;
        WrapToolBar(this,local_30,0x7fff,(CDC *)local_48,local_18,local_14);
        pcVar1 = *(code **)(*(int *)this + 0x2a4);
        guard_check_icall(local_20,0);
        piVar6 = (int *)(*pcVar1)();
        iVar2 = *piVar6;
        iVar5 = local_30;
      } while (param_1 < piVar6[1]);
    }
  }
  WrapToolBar(this,iVar2,0x7fff,(CDC *)local_48,local_18,local_14);
  CDC::SelectObject((CDC *)local_48,(CPen *)local_2c);
  CClientDC::~CClientDC(local_48);
  return;
}

