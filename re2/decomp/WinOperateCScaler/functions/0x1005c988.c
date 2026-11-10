// rea decompile_all
// name: FUN_1005c988
// address: 0x1005c988
// body: available
// range: 0x1005c988-0x1005ca61 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1005ca5d to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_1005c988(undefined4 param_1,SIZE_T param_2)

{
  _func_5234 *p_Var1;
  HGLOBAL hMem;
  LPVOID pvVar2;
  HRESULT HVar3;
  CImage *this;
  HBITMAP__ *pHVar4;
  int iVar5;
  CMenu *in_ECX;
  LPSTREAM This;
  LPSTREAM local_8;
  
  hMem = GlobalAlloc(2,param_2);
  if (hMem != (HGLOBAL)0x0) {
    local_8 = (IStream *)0x0;
    pvVar2 = GlobalLock(hMem);
    FUN_1016bba0(pvVar2,param_1,param_2);
    HVar3 = CreateStreamOnHGlobal(hMem,1,&local_8);
    if (HVar3 == 0) {
      if (DAT_10209bf8 != 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_10209c3c);
      }
      if (DAT_10209c30 == (CImage *)0x0) {
        this = (CImage *)FUN_1001cfa0(0x34);
        if (this == (CImage *)0x0) {
          DAT_10209c30 = (CImage *)0x0;
        }
        else {
          DAT_10209c30 = (CImage *)ATL::CImage::CImage(this);
        }
        if (DAT_10209c30 == (CImage *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_1001d023();
        }
      }
      ATL::CImage::Load(DAT_10209c30,local_8);
      p_Var1 = local_8->lpVtbl->Release;
      This = local_8;
      guard_check_icall();
      (*p_Var1)(This);
      pHVar4 = ATL::CImage::Detach(DAT_10209c30);
      iVar5 = CMenu::Attach(in_ECX,(HMENU__ *)pHVar4);
      if (DAT_10209bf8 == 0) {
        return iVar5;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_10209c3c);
      return iVar5;
    }
  }
  return 0;
}

