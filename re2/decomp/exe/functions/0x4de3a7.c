// rea decompile_all
// name: CBasePane::InsertPane
// address: 0x4de3a7
// body: available
// range: 0x4de3a7-0x4de4f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
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
  pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMultiPaneFrameWnd_0060c89c,pCVar2);
  if (pCVar2 == (CObject *)0x0) {
    pcVar1 = *(code **)(*(int *)this + 0x19c);
    guard_check_icall(uVar4);
    this_00 = (CFrameWndEx *)(*pcVar1)();
    if ((this_00 == (CFrameWndEx *)0x0) || (DAT_0060c460 != 0)) {
      iVar3 = 1;
    }
    else {
      iVar3 = FUN_0043970d(&PTR_s_CFrameWndEx_005ba788);
      if (iVar3 == 0) {
        iVar3 = FUN_0043970d(&PTR_s_CMDIFrameWndEx_005bad18);
        if (iVar3 == 0) {
          iVar3 = FUN_0043970d(&PTR_s_COleIPFrameWndEx_005c15c4);
          if (iVar3 == 0) {
            iVar3 = FUN_0043970d(&PTR_s_COleDocIPFrameWndEx_005c1980);
            if (iVar3 == 0) {
              iVar3 = FUN_0043970d(&PTR_s_CMDIChildWndEx_005c1ebc);
              if (iVar3 == 0) {
                iVar3 = FUN_0043970d(&PTR_s_COleCntrFrameWndEx_005c5008);
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

