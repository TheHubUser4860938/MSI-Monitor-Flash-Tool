// rea decompile_all
// name: COleControlSite::XOleIPSite::GetWindowContext
// address: 0x4443fd
// body: available
// range: 0x4443fd-0x444487 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual long __stdcall COleControlSite::XOleIPSite::GetWindowContext(struct
   IOleInPlaceFrame * *,struct IOleInPlaceUIWindow * *,struct tagRECT *,struct tagRECT *,struct
   tagOIFI *)
   
   Library: Visual Studio 2015 Release */

long COleControlSite::XOleIPSite::GetWindowContext
               (IOleInPlaceFrame **param_1,IOleInPlaceUIWindow **param_2,tagRECT *param_3,
               tagRECT *param_4,tagOIFI *param_5)

{
  IOleInPlaceFrameVtbl *pIVar1;
  ulong uVar2;
  long lVar3;
  int in_stack_00000018;
  
  FUN_00434a7a(param_1[-0x2d]);
  lVar3 = 0;
  if (param_3 != (tagRECT *)0x0) {
    param_3->left = 0;
  }
  uVar2 = CCmdTarget::InternalQueryInterface((CCmdTarget *)param_1[-0x2c],&DAT_005db9b0,param_2);
  if ((int)uVar2 < 0) {
    lVar3 = -0x7fffbffb;
  }
  else {
    pIVar1 = param_1[-0x2c][8].lpVtbl;
    CopyRect(param_4,(RECT *)(param_1 + -0x28));
    GetClientRect((HWND)pIVar1->SetActiveObject,(LPRECT)param_5);
    *(undefined4 *)(in_stack_00000018 + 4) = 0;
    *(_func_6171 **)(in_stack_00000018 + 8) = pIVar1->SetActiveObject;
    *(undefined4 *)(in_stack_00000018 + 0xc) = 0;
    *(undefined4 *)(in_stack_00000018 + 0x10) = 0;
  }
  guard_check_icall();
  return lVar3;
}

