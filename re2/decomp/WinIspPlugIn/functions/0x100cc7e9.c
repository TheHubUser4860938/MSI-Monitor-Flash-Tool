// rea decompile_all
// name: CMFCVisualManagerOffice2007::OnDrawCheckBoxEx
// address: 0x100cc7e9
// body: available
// range: 0x100cc7e9-0x100cc8d2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManagerOffice2007::OnDrawCheckBoxEx(class CDC *,class
   CRect,int,int,int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOffice2007::OnDrawCheckBoxEx
          (CMFCVisualManagerOffice2007 *this,undefined4 param_1,undefined4 param_3,
          undefined4 param_4,undefined4 param_5,undefined4 param_6,int param_7,int param_8,
          int param_9,int param_10)

{
  code *pcVar1;
  int iVar2;
  AFX_GLOBAL_DATA *pAVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int local_8;
  
  iVar2 = CanDrawImage(this);
  if (iVar2 == 0) {
    CMFCVisualManagerOffice2003::OnDrawCheckBoxEx
              ((CMFCVisualManagerOffice2003 *)this,param_1,param_3,param_4,param_5,param_6,param_7,
               param_8,param_9,param_10);
  }
  else {
    local_8 = param_7 * 4;
    if (param_10 == 0) {
      local_8 = local_8 + 3;
    }
    else if (param_9 == 0) {
      if (param_8 != 0) {
        local_8 = local_8 + 1;
      }
    }
    else if (param_8 != 0) {
      local_8 = local_8 + 2;
    }
    pAVar3 = GetGlobalData();
    if (*(int *)(pAVar3 + 0x198) != 0) {
      pcVar1 = *(code **)(*(int *)(this + 0x7320) + 0x24);
      guard_check_icall();
      (*pcVar1)();
    }
    uVar6 = 0xff;
    uVar5 = 1;
    uVar4 = 1;
    iVar2 = *(int *)(this + 0x7320);
    guard_check_icall(param_1,param_3,param_4,param_5,param_6,1,1,local_8,0xff);
    (**(code **)(iVar2 + 0x18))();
    pAVar3 = GetGlobalData();
    if (*(int *)(pAVar3 + 0x198) != 0) {
      pcVar1 = *(code **)(*(int *)(this + 0x7320) + 0x24);
      guard_check_icall(param_1,param_3,param_4,param_5,param_6,uVar4,uVar5,local_8,uVar6);
      (*pcVar1)();
    }
  }
  return;
}

