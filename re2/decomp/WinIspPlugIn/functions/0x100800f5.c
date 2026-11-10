// rea decompile_all
// name: CBasePane::InsertPane
// address: 0x100800f5
// body: available
// range: 0x100800f5-0x10080245 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CBasePane::InsertPane(class CBasePane *,class CBasePane *,int)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CBasePane::InsertPane(CBasePane *this,CBasePane *param_1,CBasePane *param_2,int param_3)

{
  code *pcVar1;
  CObject *pCVar2;
  int iVar3;
  CFrameWndEx *this_00;
  undefined4 uVar4;
  
  uVar4 = 0;
  pcVar1 = *(code **)(*(int *)this + 0x228);
  guard_check_icall(0);
  pCVar2 = (CObject *)(*pcVar1)();
  pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMultiPaneFrameWnd_1023d950,pCVar2);
  if (pCVar2 == (CObject *)0x0) {
    pcVar1 = *(code **)(*(int *)this + 0x19c);
    guard_check_icall(uVar4);
    this_00 = (CFrameWndEx *)(*pcVar1)();
    if ((this_00 == (CFrameWndEx *)0x0) || (DAT_1023d948 != 0)) {
      iVar3 = 1;
    }
    else {
      iVar3 = FUN_10051e53(&PTR_s_CFrameWndEx_101e90a0);
      if (iVar3 == 0) {
        iVar3 = FUN_10051e53(&PTR_s_CMDIFrameWndEx_101e9630);
        if (iVar3 == 0) {
          iVar3 = FUN_10051e53(&PTR_s_COleIPFrameWndEx_101e9c40);
          if (iVar3 == 0) {
            iVar3 = FUN_10051e53(&PTR_s_COleDocIPFrameWndEx_101e9ff8);
            if (iVar3 == 0) {
              iVar3 = FUN_10051e53(&PTR_s_CMDIChildWndEx_101ea534);
              if (iVar3 == 0) {
                iVar3 = FUN_10051e53(&PTR_s_COleCntrFrameWndEx_101eb17c);
                if (iVar3 == 0) {
                  iVar3 = 0;
                }
                else {
                  iVar3 = COleCntrFrameWndEx::InsertPane
                                    ((COleCntrFrameWndEx *)this_00,param_1,param_2,param_3);
                }
              }
              else {
                iVar3 = CMDIChildWndEx::InsertPane
                                  ((CMDIChildWndEx *)this_00,param_1,param_2,param_3);
              }
            }
            else {
              iVar3 = COleDocIPFrameWndEx::InsertPane
                                ((COleDocIPFrameWndEx *)this_00,param_1,param_2,param_3);
            }
          }
          else {
            iVar3 = COleIPFrameWndEx::InsertPane
                              ((COleIPFrameWndEx *)this_00,param_1,param_2,param_3);
          }
        }
        else {
          iVar3 = CMDIFrameWndEx::InsertPane((CMDIFrameWndEx *)this_00,param_1,param_2,param_3);
        }
      }
      else {
        iVar3 = CFrameWndEx::InsertPane(this_00,param_1,param_2,param_3);
      }
    }
  }
  else {
    pcVar1 = *(code **)(*(int *)pCVar2 + 600);
    guard_check_icall(param_1,param_2,param_3);
    iVar3 = (*pcVar1)();
  }
  return iVar3;
}

