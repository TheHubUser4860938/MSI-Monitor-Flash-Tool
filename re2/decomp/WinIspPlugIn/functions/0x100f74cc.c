// rea decompile_all
// name: CGlobalUtils::GetWndIcon
// address: 0x100f74cc
// body: available
// range: 0x100f74cc-0x100f758d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: struct HICON__ * __thiscall CGlobalUtils::GetWndIcon(class CWnd *)
   
   Library: Visual Studio 2015 Release */

HICON__ * __thiscall CGlobalUtils::GetWndIcon(CGlobalUtils *this,CWnd *param_1)

{
  HICON__ *pHVar1;
  int iVar2;
  CImageList local_18 [4];
  undefined4 local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x100f74d8;
  if ((param_1 == (CWnd *)0x0) || (*(int *)(param_1 + 0x20) == 0)) {
    pHVar1 = (HICON__ *)0x0;
  }
  else {
    pHVar1 = (HICON__ *)SendMessageW(*(HWND *)(param_1 + 0x20),0x7f,0,0);
    if (pHVar1 == (HICON__ *)0x0) {
      pHVar1 = (HICON__ *)SendMessageW(*(HWND *)(param_1 + 0x20),0x7f,1,0);
      if (pHVar1 != (HICON__ *)0x0) {
        CImageList::CImageList(local_18);
        local_8 = 0;
        CImageList::Create(local_18,0x10,0x10,0x21,0,1);
        _IsolationAwareImageList_ReplaceIcon_12(local_14,0xffffffff,pHVar1);
        iVar2 = _IsolationAwareImageList_GetImageCount_4(local_14);
        if (iVar2 == 1) {
          pHVar1 = (HICON__ *)_IsolationAwareImageList_GetIcon_12(local_14,0,0);
        }
        CImageList::~CImageList(local_18);
        if (pHVar1 != (HICON__ *)0x0) {
          return pHVar1;
        }
      }
      pHVar1 = (HICON__ *)GetClassLongW(*(HWND *)(param_1 + 0x20),-0x22);
      if (pHVar1 == (HICON__ *)0x0) {
        pHVar1 = (HICON__ *)GetClassLongW(*(HWND *)(param_1 + 0x20),-0xe);
      }
    }
  }
  return pHVar1;
}

