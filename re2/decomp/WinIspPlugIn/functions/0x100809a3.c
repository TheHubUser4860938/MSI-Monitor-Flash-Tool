// rea decompile_all
// name: CBasePane::PaneFromPoint
// address: 0x100809a3
// body: available
// range: 0x100809a3-0x10080ac7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: class CBasePane * __thiscall CBasePane::PaneFromPoint(class CPoint,int,bool,struct
   CRuntimeClass *)const 
   
   Library: Visual Studio 2015 Release */

CBasePane * __thiscall
CBasePane::PaneFromPoint
          (CBasePane *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6)

{
  code *pcVar1;
  int iVar2;
  CBasePane *pCVar3;
  
  pcVar1 = *(code **)(*(int *)this + 0x19c);
  guard_check_icall();
  iVar2 = (*pcVar1)();
  if ((iVar2 != 0) && (DAT_1023d948 == 0)) {
    iVar2 = FUN_10051e53(&PTR_s_CFrameWndEx_101e90a0);
    if (iVar2 != 0) {
      pCVar3 = (CBasePane *)::PaneFromPoint(param_2,param_3,param_4,param_5,param_6);
      return pCVar3;
    }
    iVar2 = FUN_10051e53(&PTR_s_CMDIFrameWndEx_101e9630);
    if (iVar2 != 0) {
      pCVar3 = (CBasePane *)::PaneFromPoint(param_2,param_3,param_4,param_5,param_6);
      return pCVar3;
    }
    iVar2 = FUN_10051e53(&PTR_s_COleIPFrameWndEx_101e9c40);
    if (iVar2 != 0) {
      pCVar3 = (CBasePane *)::PaneFromPoint(param_2,param_3,param_4,param_5,param_6);
      return pCVar3;
    }
    iVar2 = FUN_10051e53(&PTR_s_COleDocIPFrameWndEx_101e9ff8);
    if (iVar2 != 0) {
      pCVar3 = (CBasePane *)::PaneFromPoint(param_2,param_3,param_4,param_5,param_6);
      return pCVar3;
    }
    iVar2 = FUN_10051e53(&PTR_s_CMDIChildWndEx_101ea534);
    if (iVar2 != 0) {
      pCVar3 = (CBasePane *)::PaneFromPoint(param_2,param_3,param_4,param_5,param_6);
      return pCVar3;
    }
    iVar2 = FUN_10051e53(&PTR_s_COleCntrFrameWndEx_101eb17c);
    if (iVar2 != 0) {
      pCVar3 = (CBasePane *)::PaneFromPoint(param_2,param_3,param_4,param_5,param_6);
      return pCVar3;
    }
  }
  return (CBasePane *)0x0;
}

