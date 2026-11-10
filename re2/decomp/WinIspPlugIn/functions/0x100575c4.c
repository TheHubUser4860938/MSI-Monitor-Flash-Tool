// rea decompile_all
// name: CWnd::UpdateDialogControls
// address: 0x100575c4
// body: available
// range: 0x100575c4-0x100576d2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: void __thiscall CWnd::UpdateDialogControls(class CCmdTarget *,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CWnd::UpdateDialogControls(CWnd *this,CCmdTarget *param_1,int param_2)

{
  HWND hWnd;
  CWnd *pCVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined **local_b8 [8];
  HWND local_98;
  CCmdUI local_38 [4];
  int local_34;
  undefined ***local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xa8;
  local_8 = 0x100575d3;
  CCmdUI::CCmdUI(local_38);
  CWnd((CWnd *)local_b8,(HWND__ *)0x0);
  local_b8[0] = vftable;
  local_8 = 0;
  hWnd = GetTopWindow(*(HWND *)(this + 0x20));
  do {
    if (hWnd == (HWND)0x0) {
      local_98 = (HWND)0x0;
      ~CWnd((CWnd *)local_b8);
      return;
    }
    local_98 = hWnd;
    local_34 = ::GetDlgCtrlID(hWnd);
    local_24 = local_b8;
    pCVar1 = FromHandlePermanent(hWnd);
    if (pCVar1 == (CWnd *)0x0) {
LAB_1005763f:
      iVar2 = FUN_1004d9b0(local_34,0xffffffff,local_38,0);
      if (iVar2 == 0) {
        iVar2 = param_2;
        if (param_2 != 0) {
          uVar3 = SendMessageW(local_98,0x87,0,0);
          if ((uVar3 & 0x2000) != 0) {
            uVar4 = GetExStyle((CWnd *)local_b8);
            uVar3 = uVar4 & 0xf;
            if ((((uVar3 != 3) && (uVar3 != 6)) && (uVar3 != 7)) && (uVar3 != 9)) goto LAB_10057699;
          }
          iVar2 = 0;
        }
LAB_10057699:
        FUN_1004d83d(param_1,iVar2);
      }
    }
    else {
      iVar2 = FUN_1004d9b0(0,0xbd11ffff,local_38,0);
      if (iVar2 == 0) goto LAB_1005763f;
    }
    hWnd = GetWindow(hWnd,2);
  } while( true );
}

