// rea decompile_all
// name: CMFCBaseTabCtrl::SetTabHicon
// address: 0x100a10b5
// body: available
// range: 0x100a10b5-0x100a1173 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCBaseTabCtrl::SetTabHicon(int,struct HICON__ *)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCBaseTabCtrl::SetTabHicon(CMFCBaseTabCtrl *this,int param_1,HICON__ *param_2)

{
  code *pcVar1;
  int *piVar2;
  HICON pHVar3;
  AFX_GLOBAL_DATA *pAVar4;
  int iVar5;
  
  if ((param_1 < 0) || (*(int *)(this + 0xbc) <= param_1)) {
    iVar5 = 0;
  }
  else {
    piVar2 = (int *)FUN_10151a1d(param_1);
    iVar5 = *piVar2;
    if (*(int *)(iVar5 + 0xc) != 0) {
      DestroyIcon(*(HICON *)(iVar5 + 0xc));
    }
    if (param_2 == (HICON__ *)0x0) {
      *(undefined4 *)(iVar5 + 0xc) = 0;
    }
    else {
      pHVar3 = CopyIcon(param_2);
      *(HICON *)(iVar5 + 0xc) = pHVar3;
    }
    *(undefined4 *)(iVar5 + 8) = 0xffffffff;
    pAVar4 = GetGlobalData();
    iVar5 = *(int *)(this + 0xd4);
    if (iVar5 <= *(int *)(pAVar4 + 0x114)) {
      pAVar4 = GetGlobalData();
      iVar5 = *(int *)(pAVar4 + 0x114);
    }
    *(int *)(this + 0xd4) = iVar5;
    pAVar4 = GetGlobalData();
    iVar5 = *(int *)(this + 0xd8);
    if (iVar5 <= *(int *)(pAVar4 + 0x118)) {
      pAVar4 = GetGlobalData();
      iVar5 = *(int *)(pAVar4 + 0x118);
    }
    *(int *)(this + 0xd8) = iVar5;
    pcVar1 = *(code **)(*(int *)this + 0x178);
    guard_check_icall();
    (*pcVar1)();
    iVar5 = 1;
  }
  return iVar5;
}

