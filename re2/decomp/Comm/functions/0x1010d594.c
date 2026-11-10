// rea decompile_all
// name: CMFCVisualManagerOfficeXP::OnDrawMenuArrowOnCustomizeList
// address: 0x1010d594
// body: available
// range: 0x1010d594-0x1010d671 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1010d624 to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall
   CMFCVisualManagerOfficeXP::OnDrawMenuArrowOnCustomizeList(class CDC *,class CRect,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOfficeXP::OnDrawMenuArrowOnCustomizeList
          (undefined4 param_1_00,CDC *param_1,undefined4 param_3,undefined4 param_4,int param_5,
          int param_6)

{
  int *piVar1;
  CPen *pCVar2;
  IMAGE_STATE IVar3;
  ulong uVar4;
  undefined1 local_44 [8];
  undefined1 local_3c [8];
  undefined **local_34 [2];
  undefined4 local_2c;
  int local_28;
  int local_24;
  undefined4 uStack_20;
  int local_1c;
  int iStack_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x34;
  local_8 = 0x1010d5a0;
  local_24 = param_3;
  uStack_20 = param_4;
  local_1c = param_5;
  iStack_18 = param_6;
  piVar1 = (int *)FUN_100796e6(local_3c);
  uVar4 = 0;
  local_24 = local_1c - *piVar1;
  IVar3 = 0;
  if (((*(byte *)(local_28 + 200) < 0x80) || (*(byte *)(local_28 + 0xc9) < 0x80)) ||
     (*(byte *)(local_28 + 0xca) < 0x80)) {
    IVar3 = 3;
    uVar4 = 0xffffff;
  }
  local_2c = 0;
  local_28 = 0;
  CMenuImages::Draw(param_1,0xe,(CRect *)&local_24,IVar3,(CSize *)&local_2c);
  CPen::CPen((CPen *)local_34,0,1,uVar4);
  local_8 = 0;
  pCVar2 = CDC::SelectObject(param_1,(CPen *)local_34);
  if (pCVar2 == (CPen *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10012a3f();
  }
  CDC::MoveTo(param_1,(int)local_44,local_24 + -1);
  CDC::LineTo(param_1,local_24 + -1,param_6 + -2);
  CDC::SelectObject(param_1,pCVar2);
  local_34[0] = CPen::vftable;
  CImageList::~CImageList((CImageList *)local_34);
  FUN_101490fe();
  return;
}

