// rea decompile_all
// name: CMFCToolTipCtrl::OnDrawDescription
// address: 0x101394d7
// body: available
// range: 0x101394d7-0x101395be inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual class CSize __thiscall CMFCToolTipCtrl::OnDrawDescription(class CDC *,class
   CRect,int)
   
   Library: Visual Studio 2015 Release */

int * __thiscall
CMFCToolTipCtrl::OnDrawDescription
          (CMFCToolTipCtrl *this,int *param_1,int *param_3,int param_4,undefined4 param_5,
          int param_6,undefined4 param_7,int param_8)

{
  code *pcVar1;
  AFX_GLOBAL_DATA *pAVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  if (*(int *)(this + 0xb8) == 0) {
    param_1[1] = 0;
  }
  else {
    iVar5 = *param_3;
    pAVar2 = GetGlobalData();
    guard_check_icall(pAVar2 + 0x124);
    uVar3 = (**(code **)(iVar5 + 0x28))();
    param_6 = GetFixedWidth(this);
    if ((param_6 < 1) || (iVar5 = *(int *)(this + 0xec), 0x20 < iVar5)) {
      param_6 = *(int *)(this + 0xcc) + param_4;
    }
    else {
      param_6 = param_4 + param_6;
      if ((0 < iVar5) && (*(int *)(this + 0xb4) != 0)) {
        param_6 = param_6 - (*(int *)(this + 0xfc) + iVar5);
      }
    }
    iVar5 = *param_3;
    guard_check_icall(*(int *)(this + 0xe8),*(undefined4 *)(*(int *)(this + 0xe8) + -0xc),&param_4,
                      (-(uint)(param_8 != 0) & 0x400) + 0x10);
    iVar4 = (**(code **)(iVar5 + 0x68))();
    pcVar1 = *(code **)(*param_3 + 0x28);
    guard_check_icall(uVar3);
    (*pcVar1)();
    iVar5 = param_6 - param_4;
    param_1[1] = iVar4;
  }
  *param_1 = iVar5;
  return param_1;
}

