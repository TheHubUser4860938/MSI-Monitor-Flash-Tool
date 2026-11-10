// rea decompile_all
// name: CMFCShellListCtrl::OnGetItemText
// address: 0x1006b321
// body: available
// range: 0x1006b321-0x1006b4b6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006b344 to 0x1004a383 FUN_1004a383 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > > __thiscall CMFCShellListCtrl::OnGetItemText(int,int,struct
   _AFX_SHELLITEMINFO *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCShellListCtrl::OnGetItemText
          (CMFCShellListCtrl *this,int param_1,int param_2,_AFX_SHELLITEMINFO *param_3)

{
  code *pcVar1;
  DWORD_PTR DVar2;
  BOOL BVar3;
  int iVar4;
  undefined4 uVar5;
  int in_stack_00000010;
  undefined **ppuVar6;
  int local_704;
  SHFILEINFOW local_700;
  undefined4 local_44c;
  undefined4 local_448;
  undefined4 local_444;
  undefined4 local_440;
  undefined4 local_43c;
  undefined4 local_438;
  undefined4 local_434;
  undefined4 local_430;
  byte local_42c;
  WCHAR local_21c [266];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x6f8;
  local_8 = 0x1006b330;
  if (in_stack_00000010 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1004a383();
  }
  if (param_3 == (_AFX_SHELLITEMINFO *)0x0) {
    DVar2 = SHGetFileInfoW(*(LPCWSTR *)(in_stack_00000010 + 4),0,&local_700,0x2b4,0x208);
    if (DVar2 == 0) goto LAB_1006b363;
    ppuVar6 = (undefined **)local_700.szDisplayName;
  }
  else {
    if (param_3 == (_AFX_SHELLITEMINFO *)0x1) {
LAB_1006b3a1:
      BVar3 = SHGetPathFromIDListW(*(LPCITEMIDLIST *)(in_stack_00000010 + 4),local_21c);
      if (BVar3 != 0) {
        local_44c = 0;
        local_448 = 0;
        local_444 = 0;
        local_440 = 0;
        local_43c = 0;
        local_438 = 0;
        iVar4 = CFile::GetStatus(local_21c,(CFileStatus *)&local_44c,(CAtlTransactionManager *)0x0);
        if (iVar4 != 0) {
          uVar5 = FUN_10049868();
          FUN_100476a0(uVar5);
          local_8 = 0;
          if (param_3 == (_AFX_SHELLITEMINFO *)0x1) {
            if ((local_42c & 0x18) == 0) {
              pcVar1 = *(code **)(*(int *)this + 0x1a0);
              guard_check_icall(local_434,local_430,&local_704);
              (*pcVar1)();
            }
          }
          else {
            pcVar1 = *(code **)(*(int *)this + 0x1a4);
            guard_check_icall(&local_444,&local_704);
            (*pcVar1)();
          }
          iVar4 = FUN_10047580(local_704 + -0x10);
          *(int *)param_1 = iVar4 + 0x10;
          FUN_100476d0();
          goto LAB_1006b36f;
        }
      }
    }
    else if (param_3 == (_AFX_SHELLITEMINFO *)0x2) {
      DVar2 = SHGetFileInfoW(*(LPCWSTR *)(in_stack_00000010 + 4),0,&local_700,0x2b4,0x408);
      if (DVar2 != 0) {
        ppuVar6 = (undefined **)local_700.szTypeName;
        goto LAB_1006b368;
      }
    }
    else if (param_3 == (_AFX_SHELLITEMINFO *)0x3) goto LAB_1006b3a1;
LAB_1006b363:
    ppuVar6 = &PTR_1020e6b0;
  }
LAB_1006b368:
  FUN_10047180(ppuVar6);
LAB_1006b36f:
  FUN_1018015d();
  return;
}

