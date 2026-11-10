// rea decompile_all
// name: CFrameWnd::BeginModalState
// address: 0x100bbe90
// body: available
// range: 0x100bbe90-0x100bbfaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100bbec0 to 0x1004a383 FUN_1004a383 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CFrameWnd::BeginModalState(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CFrameWnd::BeginModalState(CFrameWnd *this)

{
  longlong lVar1;
  CFrameWnd *pCVar2;
  CWnd *pCVar3;
  HWND pHVar4;
  BOOL BVar5;
  CWnd *pCVar6;
  int iVar7;
  LRESULT LVar8;
  int iVar9;
  uint uVar10;
  UINT uCmd;
  undefined **local_2c;
  void *local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  CFrameWnd *local_18;
  CWnd *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x100bbe9c;
  *(int *)(this + 0xe4) = *(int *)(this + 0xe4) + 1;
  if (*(uint *)(this + 0xe4) < 2) {
    local_18 = this;
    local_14 = CWnd::GetTopLevelParent((CWnd *)this);
    if (local_14 == (CWnd *)0x0) goto LAB_100bbec0;
    local_2c = CArray<HWND__*,HWND__*>::vftable;
    iVar9 = 0;
    local_28 = (void *)0x0;
    local_1c = 0;
    local_20 = 0;
    local_24 = 0;
    uCmd = 5;
    local_8 = 0;
    pHVar4 = GetDesktopWindow();
    pHVar4 = GetWindow(pHVar4,uCmd);
    pCVar3 = local_14;
    if (pHVar4 != (HWND)0x0) {
      do {
        BVar5 = IsWindowEnabled(pHVar4);
        if ((((BVar5 != 0) && (pCVar6 = CWnd::FromHandlePermanent(pHVar4), pCVar6 != (CWnd *)0x0))
            && (iVar7 = AfxIsDescendant(*(HWND__ **)(pCVar3 + 0x20),pHVar4), iVar7 != 0)) &&
           (LVar8 = SendMessageW(pHVar4,0x36c,0,0), LVar8 == 0)) {
          EnableWindow(pHVar4,0);
          FUN_101010f9(iVar9,pHVar4);
          iVar9 = local_24;
        }
        pHVar4 = GetWindow(pHVar4,2);
        pCVar2 = local_18;
      } while (pHVar4 != (HWND)0x0);
      if (iVar9 != 0) {
        if (iVar9 < 1) {
LAB_100bbec0:
                    /* WARNING: Subroutine does not return */
          FUN_1004a383();
        }
        lVar1 = (ulonglong)(iVar9 + 1) * 4;
        iVar7 = FUN_100491e5(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
        uVar10 = iVar9 * 4;
        *(int *)(pCVar2 + 0xe8) = iVar7;
        *(undefined4 *)(uVar10 + iVar7) = 0;
        if (local_28 == (void *)0x0) goto LAB_100bbec0;
        ATL::Checked::memmove_s(*(void **)(pCVar2 + 0xe8),uVar10,local_28,uVar10);
      }
    }
    CArray<HWND__*,HWND__*>::~CArray<HWND__*,HWND__*>((CArray<HWND__*,HWND__*> *)&local_2c);
  }
  return;
}

