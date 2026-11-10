// rea decompile_all
// name: CMFCVisualManagerOffice2003::GetTabFrameColors
// address: 0x10111c83
// body: available
// range: 0x10111c83-0x10111da4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManagerOffice2003::GetTabFrameColors(class
   CMFCBaseTabCtrl const *,unsigned long &,unsigned long &,unsigned long &,unsigned long &,unsigned
   long &,unsigned long &,class CBrush * &,class CBrush * &)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOffice2003::GetTabFrameColors
          (CMFCVisualManagerOffice2003 *this,CMFCBaseTabCtrl *param_1,ulong *param_2,ulong *param_3,
          ulong *param_4,ulong *param_5,ulong *param_6,ulong *param_7,CBrush **param_8,
          CBrush **param_9)

{
  code *pcVar1;
  int iVar2;
  AFX_GLOBAL_DATA *pAVar3;
  undefined4 uVar4;
  ulong uVar5;
  
  CMFCVisualManager::GetTabFrameColors
            ((CMFCVisualManager *)this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
             param_8,param_9);
  pcVar1 = *(code **)(*(int *)param_1 + 0x288);
  guard_check_icall();
  iVar2 = (*pcVar1)();
  if (iVar2 == 0) {
    pAVar3 = GetGlobalData();
    if (8 < *(int *)(pAVar3 + 0x1ac)) {
      pAVar3 = GetGlobalData();
      iVar2 = AFX_GLOBAL_DATA::IsHighContrastMode(pAVar3);
      if (((iVar2 == 0) && (*(int *)(param_1 + 0x134) == 0)) && (*(int *)(this + 0x208) != 0)) {
        iVar2 = *(int *)param_1;
        pcVar1 = *(code **)(iVar2 + 0x20c);
        guard_check_icall();
        uVar4 = (*pcVar1)();
        pcVar1 = *(code **)(iVar2 + 0x1dc);
        guard_check_icall(uVar4);
        iVar2 = (*pcVar1)();
        if (iVar2 == -1) {
          pAVar3 = GetGlobalData();
          *param_5 = *(ulong *)(pAVar3 + 0x6c);
        }
        pAVar3 = GetGlobalData();
        *param_2 = *(ulong *)(pAVar3 + 0x58);
        pAVar3 = GetGlobalData();
        *param_3 = *(ulong *)(pAVar3 + 0x60);
        pcVar1 = *(code **)(*(int *)param_1 + 0x28c);
        guard_check_icall();
        iVar2 = (*pcVar1)();
        if (iVar2 == 0) {
          pAVar3 = GetGlobalData();
          uVar5 = *(ulong *)(pAVar3 + 100);
        }
        else {
          pAVar3 = GetGlobalData();
          uVar5 = *(ulong *)(pAVar3 + 0x58);
        }
        *param_4 = uVar5;
        pAVar3 = GetGlobalData();
        *param_6 = *(ulong *)(pAVar3 + 0x58);
        pAVar3 = GetGlobalData();
        *param_7 = *(ulong *)(pAVar3 + 0x54);
      }
    }
  }
  return;
}

