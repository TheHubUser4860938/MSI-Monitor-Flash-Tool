// rea decompile_all
// name: CMFCButton::DrawItem
// address: 0x1006c1ac
// body: available
// range: 0x1006c1ac-0x1006c288 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006c1c1 to 0x1004a383 FUN_1004a383 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCButton::DrawItem(struct tagDRAWITEMSTRUCT *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCButton::DrawItem(CMFCButton *this,tagDRAWITEMSTRUCT *param_1)

{
  code *pcVar1;
  CDC *pCVar2;
  undefined1 *puVar3;
  CMemDC local_60 [4];
  undefined1 *local_5c;
  int local_58;
  undefined1 local_50 [44];
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x54;
  local_8 = 0x1006c1b8;
  if ((param_1 != (tagDRAWITEMSTRUCT *)0x0) && (*(int *)param_1 == 4)) {
    pCVar2 = CDC::FromHandle(*(HDC__ **)(param_1 + 0x18));
    CMemDC::CMemDC(local_60,pCVar2,(CWnd *)this);
    local_8 = 0;
    puVar3 = local_50;
    if (local_58 == 0) {
      puVar3 = local_5c;
    }
    CopyRect(&local_24,(RECT *)(param_1 + 0x1c));
    pcVar1 = *(code **)(*(int *)this + 0x178);
    guard_check_icall(puVar3,&local_24);
    (*pcVar1)();
    pcVar1 = *(code **)(*(int *)this + 0x17c);
    guard_check_icall(puVar3,&local_24,*(undefined4 *)(param_1 + 0x10));
    (*pcVar1)();
    pcVar1 = *(code **)(*(int *)this + 0x184);
    guard_check_icall(puVar3,&local_24,*(undefined4 *)(param_1 + 0x10));
    (*pcVar1)();
    if ((((byte)param_1[0x10] & 0x10) != 0) && (*(int *)(this + 0x94) != 0)) {
      pcVar1 = *(code **)(*(int *)this + 0x180);
      guard_check_icall(puVar3,&local_24);
      (*pcVar1)();
    }
    CMemDC::~CMemDC(local_60);
    FUN_1018015d();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1004a383();
}

