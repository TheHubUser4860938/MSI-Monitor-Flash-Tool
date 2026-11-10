// rea decompile_all
// name: FUN_10096566
// address: 0x10096566
// body: available
// range: 0x10096566-0x1009671b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10096717 to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10096566(CDC *param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9,int param_10)

{
  int iVar1;
  CPen *pCVar2;
  AFX_GLOBAL_DATA *pAVar3;
  CMFCVisualManagerOffice2007 *in_ECX;
  
  iVar1 = CMFCVisualManagerOffice2007::CanDrawImage(in_ECX);
  if ((iVar1 != 0) && (iVar1 = FUN_10019d4f(&PTR_s_CMFCTasksPaneFrameWnd_101d3cbc), iVar1 != 0)) {
    pCVar2 = CDC::SelectObject(param_1,(CPen *)(in_ECX + 0x134));
    if (pCVar2 != (CPen *)0x0) {
      PatBlt(*(HDC *)(param_1 + 4),param_3,param_4,param_7,param_6 - param_4,0xf00021);
      PatBlt(*(HDC *)(param_1 + 4),param_3,param_4,param_5 - param_3,param_8,0xf00021);
      PatBlt(*(HDC *)(param_1 + 4),param_5 - param_9,param_4,param_9,param_6 - param_4,0xf00021);
      PatBlt(*(HDC *)(param_1 + 4),param_3,param_6 - param_10,param_5 - param_3,param_10,0xf00021);
      InflateRect((LPRECT)&param_7,-2,-2);
      InflateRect((LPRECT)&param_3,-2,-2);
      pAVar3 = GetGlobalData();
      CDC::SelectObject(param_1,(CPen *)(pAVar3 + 0xd0));
      PatBlt(*(HDC *)(param_1 + 4),param_3,param_4 + 1,param_7,(param_6 - param_4) + -1,0xf00021);
      PatBlt(*(HDC *)(param_1 + 4),param_3 + 1,param_4,(param_5 - param_3) + -2,param_8,0xf00021);
      PatBlt(*(HDC *)(param_1 + 4),param_5 - param_9,param_4 + 1,param_9,(param_6 - param_4) + -1,
             0xf00021);
      PatBlt(*(HDC *)(param_1 + 4),param_3 + 1,param_6 - param_10,(param_5 - param_3) + -2,param_10,
             0xf00021);
      CDC::SelectObject(param_1,pCVar2);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_10012a3f();
  }
  FUN_1010dfb6(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  return;
}

