// rea decompile_all
// name: CWnd::GetCurrentMessage
// address: 0x100401cd
// body: available
// range: 0x100401cd-0x1004020a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100401e5 to 0x10038e31 FUN_10038e31 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: static struct tagMSG const * __stdcall CWnd::GetCurrentMessage(void)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

tagMSG * CWnd::GetCurrentMessage(void)

{
  CNoTrackObject *pCVar1;
  LONG LVar2;
  DWORD DVar3;
  
  pCVar1 = CThreadLocalObject::GetData
                     ((CThreadLocalObject *)&DAT_10066d70,(_func_CNoTrackObject_ptr *)&LAB_10038e4d)
  ;
  if (pCVar1 == (CNoTrackObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10038e31();
  }
  LVar2 = GetMessageTime();
  *(LONG *)(pCVar1 + 0x68) = LVar2;
  DVar3 = GetMessagePos();
  *(int *)(pCVar1 + 0x70) = (int)(short)(DVar3 >> 0x10);
  *(int *)(pCVar1 + 0x6c) = (int)(short)DVar3;
  return (tagMSG *)(pCVar1 + 0x58);
}

