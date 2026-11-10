// rea decompile_all
// name: GetIconWndClass
// address: 0x10084ffb
// body: available
// range: 0x10084ffb-0x1008508a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    protected: char const * __thiscall CFrameWnd::GetIconWndClass(unsigned long,unsigned int)
    protected: wchar_t const * __thiscall CFrameWnd::GetIconWndClass(unsigned long,unsigned int)
   
   Library: Visual Studio 2015 Release */

undefined4 GetIconWndClass(undefined4 param_1,ushort param_2)

{
  code *pcVar1;
  AFX_MODULE_STATE *pAVar2;
  HICON pHVar3;
  BOOL BVar4;
  undefined4 uVar5;
  int *in_ECX;
  undefined1 local_5c [32];
  undefined4 local_3c;
  LPCWSTR local_34;
  tagWNDCLASSW local_2c;
  
  pAVar2 = AfxGetModuleState();
  pHVar3 = LoadIconW(*(HINSTANCE *)(pAVar2 + 0xc),(LPCWSTR)(uint)param_2);
  if (pHVar3 != (HICON)0x0) {
    _memset(local_5c,0,0x30);
    local_3c = param_1;
    pcVar1 = *(code **)(*in_ECX + 100);
    guard_check_icall(local_5c);
    (*pcVar1)();
    if (local_34 != (LPCWSTR)0x0) {
      pAVar2 = AfxGetModuleState();
      BVar4 = GetClassInfoW(*(HINSTANCE *)(pAVar2 + 8),local_34,&local_2c);
      if ((BVar4 != 0) && (local_2c.hIcon != pHVar3)) {
        uVar5 = AfxRegisterWndClass(local_2c.style,local_2c.hCursor,local_2c.hbrBackground,pHVar3);
        return uVar5;
      }
    }
  }
  return 0;
}

