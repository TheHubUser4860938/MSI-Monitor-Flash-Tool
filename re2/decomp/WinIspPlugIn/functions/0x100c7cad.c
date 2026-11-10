// rea decompile_all
// name: CKeyboardManager::FindDefaultAccelerator
// address: 0x100c7cad
// body: available
// range: 0x100c7cad-0x100c7df9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100c7d1c to 0x1004a383 FUN_1004a383 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: static int __stdcall CKeyboardManager::FindDefaultAccelerator(unsigned int,class
   ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > > &,class
   CFrameWnd *,int)
   
   Library: Visual Studio 2015 Release */

int CKeyboardManager::FindDefaultAccelerator
              (uint param_1,
              CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *param_2,
              CFrameWnd *param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  CMFCAcceleratorKey local_2c [8];
  tagACCEL *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x100c7cb9;
  FUN_10047240();
  if (param_3 != (CFrameWnd *)0x0) {
    pcVar1 = *(code **)(*(int *)param_3 + 0x1ac);
    guard_check_icall();
    iVar2 = (*pcVar1)();
    if (iVar2 != 0) {
      piVar5 = (int *)&DAT_102472c0;
      if (param_4 == 0) {
        piVar5 = &DAT_102472c4;
        piVar6 = &DAT_102472bc;
      }
      else {
        piVar6 = (int *)&DAT_102472b8;
      }
      puVar3 = &DAT_102472c8;
      if (param_4 == 0) {
        puVar3 = &DAT_102472cc;
      }
      FUN_100c8068(piVar6,puVar3,piVar5,iVar2);
      if (*piVar6 != 0) {
        local_18 = 0;
        local_1c = 0;
        if (*piVar5 < 1) {
          return 0;
        }
        local_20 = 0;
        do {
          local_24 = (tagACCEL *)(*piVar6 + local_20);
          if (local_24->cmd == param_1) {
            local_18 = 1;
            CMFCAcceleratorKey::CMFCAcceleratorKey(local_2c,local_24);
            local_8 = 0;
            uVar4 = FUN_10049868();
            FUN_100476a0(uVar4);
            local_8 = CONCAT31(local_8._1_3_,1);
            CMFCAcceleratorKey::Format
                      (local_2c,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                 *)local_14);
            if (*(int *)(*(int *)param_2 + -0xc) != 0) {
              FUN_100479f0(&DAT_101e527c);
            }
            FUN_10047a30(local_14[0],*(undefined4 *)(local_14[0] + -0xc));
            if (DAT_102472d0 == 0) {
              FUN_100476d0();
              FUN_100c7af2();
              return local_18;
            }
            FUN_100476d0();
            local_8 = 0xffffffff;
            FUN_100c7af2();
          }
          local_1c = local_1c + 1;
          local_20 = local_20 + 6;
          if (*piVar5 <= local_1c) {
            return local_18;
          }
        } while( true );
      }
                    /* WARNING: Subroutine does not return */
      FUN_1004a383();
    }
  }
  return 0;
}

