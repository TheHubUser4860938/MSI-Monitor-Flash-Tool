// rea decompile_all
// name: CWinApp::ProcessWndProcException
// address: 0x1003aeb2
// body: available
// range: 0x1003aeb2-0x1003af34 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003aec3 to 0x10038e31 FUN_10038e31 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual long __thiscall CWinApp::ProcessWndProcException(class CException *,struct
   tagMSG const *)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

long __thiscall CWinApp::ProcessWndProcException(CWinApp *this,CException *param_1,tagMSG *param_2)

{
  UINT UVar1;
  int iVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  lVar3 = 0;
  if ((param_1 != (CException *)0x0) && (param_2 != (tagMSG *)0x0)) {
    UVar1 = param_2->message;
    if ((UVar1 == 1) || (UVar1 == 0xf)) {
      lVar3 = FUN_1003cc3d(param_1,param_2);
    }
    else {
      uVar4 = 0xf108;
      if (UVar1 == 0x111) {
        if (param_2->lParam == 0) {
          uVar4 = 0xf109;
        }
        lVar3 = 1;
      }
      iVar2 = CObject::IsKindOf((CObject *)param_1,(CRuntimeClass *)&PTR_s_CMemoryException_10059684
                               );
      if (iVar2 == 0) {
        iVar2 = CObject::IsKindOf((CObject *)param_1,(CRuntimeClass *)&PTR_s_CUserException_1005b050
                                 );
        if (iVar2 != 0) {
          return lVar3;
        }
        uVar5 = 0x10;
      }
      else {
        uVar5 = 0x1030;
      }
      (**(code **)(*(int *)param_1 + 0x14))(uVar5,uVar4);
    }
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10038e31();
}

