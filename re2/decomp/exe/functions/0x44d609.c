// rea decompile_all
// name: FUN_0044d609
// address: 0x44d609
// body: available
// range: 0x44d609-0x44d6e2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44d6de to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0044d609(undefined4 param_1,SIZE_T param_2)

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
    FUN_005734b0(pvVar2,param_1,param_2);
    HVar3 = CreateStreamOnHGlobal(hMem,1,&local_8);
    if (HVar3 == 0) {
      if (DAT_00614e24 != 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00614e68);
      }
      if (DAT_00614e5c == (CImage *)0x0) {
        this = (CImage *)FUN_00416408(0x34);
        if (this == (CImage *)0x0) {
          DAT_00614e5c = (CImage *)0x0;
        }
        else {
          DAT_00614e5c = (CImage *)ATL::CImage::CImage(this);
        }
        if (DAT_00614e5c == (CImage *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00429127();
        }
      }
      ATL::CImage::Load(DAT_00614e5c,local_8);
      p_Var1 = local_8->lpVtbl->Release;
      This = local_8;
      guard_check_icall();
      (*p_Var1)(This);
      pHVar4 = ATL::CImage::Detach(DAT_00614e5c);
      iVar5 = CMenu::Attach(in_ECX,(HMENU__ *)pHVar4);
      if (DAT_00614e24 == 0) {
        return iVar5;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00614e68);
      return iVar5;
    }
  }
  return 0;
}

