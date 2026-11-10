// rea decompile_all
// name: ButtonLoadBitmap
// address: 0x1006bd83
// body: available
// range: 0x1006bd83-0x1006be04 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006bda1 to 0x1004a383 FUN_1004a383 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    struct HBITMAP__ * __stdcall ButtonLoadBitmap(unsigned int)
   
   Library: Visual Studio 2015 Release */

HBITMAP__ * ButtonLoadBitmap(uint param_1)

{
  HBITMAP__ *pHVar1;
  int iVar2;
  AFX_MODULE_STATE *pAVar3;
  LPCWSTR name;
  CPngImage local_18 [16];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x1006bd8f;
  if (param_1 == 0) {
LAB_1006bd96:
    pHVar1 = (HBITMAP__ *)0x0;
  }
  else {
    name = (LPCWSTR)(param_1 & 0xffff);
    if (name == (LPCWSTR)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_1004a383();
    }
    CPngImage::CPngImage(local_18);
    local_8 = 0;
    iVar2 = Load(name,0);
    if (iVar2 == 0) {
      pAVar3 = AfxGetModuleState();
      if (*(HINSTANCE *)(pAVar3 + 0xc) == (HINSTANCE)0x0) {
        FUN_100852bb();
        goto LAB_1006bd96;
      }
      pHVar1 = LoadImageW(*(HINSTANCE *)(pAVar3 + 0xc),name,0,0,0,0x3000);
    }
    else {
      pHVar1 = CGdiObject::Detach((CGdiObject *)local_18);
    }
    FUN_100852bb();
  }
  return pHVar1;
}

