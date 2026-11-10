// rea decompile_all
// name: COleDropTarget::XDropTarget::DragLeave
// address: 0x100fd749
// body: available
// range: 0x100fd749-0x100fd7c1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __stdcall COleDropTarget::XDropTarget::DragLeave(void)
   
   Library: Visual Studio 2015 Release */

long COleDropTarget::XDropTarget::DragLeave(void)

{
  code *pcVar1;
  CWnd *pCVar2;
  int in_stack_00000004;
  COleDataObject local_24 [28];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_8 = 0x100fd755;
  FUN_10024293(*(undefined4 *)(in_stack_00000004 + -0x18));
  pCVar2 = CWnd::FromHandle(*(HWND__ **)(in_stack_00000004 + -0x14));
  *(undefined4 *)(in_stack_00000004 + -0xc) = 0xffff;
  COleDataObject::COleDataObject(local_24);
  COleDataObject::Attach(local_24,*(IDataObject **)(in_stack_00000004 + -0x10),0);
  pcVar1 = *(code **)(*(int *)(in_stack_00000004 + -0x34) + 100);
  guard_check_icall(pCVar2);
  (*pcVar1)();
  _AfxRelease((IUnknown **)(in_stack_00000004 + -0x10));
  local_8 = 0;
  COleDataObject::Release(local_24);
  guard_check_icall();
  return 0;
}

