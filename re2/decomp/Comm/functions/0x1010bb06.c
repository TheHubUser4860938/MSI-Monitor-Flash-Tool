// rea decompile_all
// name: CMDIChildWnd::OnUpdateFrameTitle
// address: 0x1010bb06
// body: available
// range: 0x1010bb06-0x1010bc0c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMDIChildWnd::OnUpdateFrameTitle(int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMDIChildWnd::OnUpdateFrameTitle(CMDIChildWnd *this,int param_1)

{
  code *pcVar1;
  CMDIFrameWnd *pCVar2;
  ulong uVar3;
  int iVar4;
  undefined4 uVar5;
  size_t sVar6;
  size_t sVar7;
  errno_t eVar8;
  wchar_t local_434 [516];
  wchar_t local_2c [18];
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  pCVar2 = GetMDIFrame(this);
  pcVar1 = *(code **)(*(int *)pCVar2 + 0x1a4);
  iVar4 = param_1;
  guard_check_icall(param_1);
  (*pcVar1)();
  uVar3 = CWnd::GetExStyle((CWnd *)this);
  if ((uVar3 & 0x8000) != 0) {
    pcVar1 = *(code **)(*(int *)this + 0x16c);
    guard_check_icall(iVar4);
    iVar4 = (*pcVar1)();
    if (param_1 != 0) {
      if (iVar4 == 0) {
        uVar5 = *(undefined4 *)(this + 0xf0);
      }
      else {
        uVar5 = *(undefined4 *)(iVar4 + 0x20);
      }
      uVar5 = FUN_10153786(local_434,0x204,uVar5,0xffffffff);
      FUN_10003260(uVar5);
      if (0 < *(int *)(this + 0x84)) {
        FID_conflict___swprintf_c(local_2c,(wchar_t *)0x11,&DAT_1018ca6c,*(int *)(this + 0x84));
        sVar6 = _wcslen(local_2c);
        sVar7 = _wcslen(local_434);
        if (sVar6 + sVar7 < 0x204) {
          eVar8 = _wcscat_s(local_434,0x204,local_2c);
          FUN_10003260(eVar8);
        }
      }
      FUN_10024aa1(*(undefined4 *)(this + 0x20),local_434);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

