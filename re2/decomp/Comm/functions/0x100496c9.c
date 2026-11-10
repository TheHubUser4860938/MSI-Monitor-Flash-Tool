// rea decompile_all
// name: CBasePane::RemovePaneFromDockManager
// address: 0x100496c9
// body: available
// range: 0x100496c9-0x100497e9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CBasePane::RemovePaneFromDockManager(class CBasePane *,int,int,int,class
   CBasePane *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CBasePane::RemovePaneFromDockManager
          (CBasePane *this,CBasePane *param_1,int param_2,int param_3,int param_4,CBasePane *param_5
          )

{
  code *pcVar1;
  CFrameWndEx *this_00;
  int iVar2;
  
  pcVar1 = *(code **)(*(int *)this + 0x19c);
  guard_check_icall();
  this_00 = (CFrameWndEx *)(*pcVar1)();
  if ((this_00 != (CFrameWndEx *)0x0) && (DAT_101d3948 == 0)) {
    iVar2 = FUN_10019d4f(&PTR_s_CFrameWndEx_10191fb0);
    if (iVar2 == 0) {
      iVar2 = FUN_10019d4f(&PTR_s_CMDIFrameWndEx_10192540);
      if (iVar2 == 0) {
        iVar2 = FUN_10019d4f(&PTR_s_COleIPFrameWndEx_10192b50);
        if (iVar2 == 0) {
          iVar2 = FUN_10019d4f(&PTR_s_COleDocIPFrameWndEx_10192f08);
          if (iVar2 == 0) {
            iVar2 = FUN_10019d4f(&PTR_s_CMDIChildWndEx_10193444);
            if (iVar2 == 0) {
              iVar2 = FUN_10019d4f(&PTR_s_COleCntrFrameWndEx_1019408c);
              if (iVar2 != 0) {
                COleCntrFrameWndEx::RemovePaneFromDockManager
                          ((COleCntrFrameWndEx *)this_00,param_1,param_2,param_3,param_4,param_5);
              }
            }
            else {
              CMDIChildWndEx::RemovePaneFromDockManager
                        ((CMDIChildWndEx *)this_00,param_1,param_2,param_3,param_4,param_5);
            }
          }
          else {
            COleDocIPFrameWndEx::RemovePaneFromDockManager
                      ((COleDocIPFrameWndEx *)this_00,param_1,param_2,param_3,param_4,param_5);
          }
        }
        else {
          COleIPFrameWndEx::RemovePaneFromDockManager
                    ((COleIPFrameWndEx *)this_00,param_1,param_2,param_3,param_4,param_5);
        }
      }
      else {
        CMDIFrameWndEx::RemovePaneFromDockManager
                  ((CMDIFrameWndEx *)this_00,param_1,param_2,param_3,param_4,param_5);
      }
    }
    else {
      CFrameWndEx::RemovePaneFromDockManager(this_00,param_1,param_2,param_3,param_4,param_5);
    }
  }
  return;
}

