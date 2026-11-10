// rea decompile_all
// name: CCheckListBox::OnLBFindString
// address: 0x101725e3
// body: available
// range: 0x101725e3-0x1017265a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: long __thiscall CCheckListBox::OnLBFindString(unsigned int,long)
   
   Library: Visual Studio 2015 Release */

long __thiscall CCheckListBox::OnLBFindString(CCheckListBox *this,uint param_1,long param_2)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  LRESULT LVar4;
  WPARAM wParam;
  
  uVar2 = CWnd::GetExStyle((CWnd *)this);
  if ((uVar2 & 0x40) == 0) {
    for (wParam = -(uint)(param_1 != 0xffffffff) & param_1;
        LVar4 = SendMessageW(*(HWND *)(this + 0x20),0x18b,0,0), (int)wParam < LVar4;
        wParam = wParam + 1) {
      LVar4 = SendMessageW(*(HWND *)(this + 0x20),0x199,wParam,0);
      if (param_2 == LVar4) {
        return wParam;
      }
    }
    lVar3 = -1;
  }
  else {
    pcVar1 = *(code **)(*(int *)this + 0x11c);
    guard_check_icall(399,param_1,param_2);
    lVar3 = (*pcVar1)();
  }
  return lVar3;
}

