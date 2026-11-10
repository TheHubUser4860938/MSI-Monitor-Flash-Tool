// rea decompile_all
// name: COleControlSite::XOleIPSite::InvalidateRgn
// address: 0x444811
// body: available
// range: 0x444811-0x4448f2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual long __stdcall COleControlSite::XOleIPSite::InvalidateRgn(struct HRGN__ *,int)
   
   Library: Visual Studio 2015 Release */

long COleControlSite::XOleIPSite::InvalidateRgn(HRGN__ *param_1,int param_2)

{
  code *pcVar1;
  CGdiObject *pCVar2;
  BOOL BVar3;
  long lVar4;
  undefined4 extraout_EDX;
  int in_stack_0000000c;
  undefined **ppuVar5;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  local_28.left = 0;
  local_28.top = 0;
  local_28.right = 0;
  local_28.bottom = 0;
  FUN_00434a7a(param_1[-0x2d].unused);
  if (param_2 != 0) {
    pCVar2 = CGdiObject::FromHandle((void *)param_2);
    GetRgnBox(*(HRGN *)(pCVar2 + 4),&local_18);
    IntersectRect(&local_28,&local_18,(RECT *)(param_1 + -0x28));
    BVar3 = EqualRect(&local_28,&local_18);
    if (BVar3 != 0) {
      CWnd::InvalidateRgn(*(CWnd **)(param_1[-0x2c].unused + 0x20),(CRgn *)pCVar2,in_stack_0000000c)
      ;
      goto LAB_004448c7;
    }
  }
  pcVar1 = *(code **)(param_1->unused + 100);
  guard_check_icall(param_1,0,in_stack_0000000c);
  (*pcVar1)();
LAB_004448c7:
  guard_check_icall();
  ppuVar5 = CRgn::vftable;
  FUN_0040ee80();
  lVar4 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX,ppuVar5);
  return lVar4;
}

