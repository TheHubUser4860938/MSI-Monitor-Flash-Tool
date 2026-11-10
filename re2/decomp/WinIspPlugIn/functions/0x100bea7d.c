// rea decompile_all
// name: CFrameWnd::RecalcLayout
// address: 0x100bea7d
// body: available
// range: 0x100bea7d-0x100beba1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CFrameWnd::RecalcLayout(int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CFrameWnd::RecalcLayout(CFrameWnd *this,int param_1)

{
  code *pcVar1;
  ulong uVar2;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  if (*(int *)(this + 0xf4) == 0) {
    *(undefined4 *)(this + 0xf4) = 1;
    if ((*(uint *)(this + 0x118) & 4) != 0) {
      param_1 = 1;
    }
    *(uint *)(this + 0x118) = *(uint *)(this + 0x118) & 0xfffffff3;
    if ((param_1 != 0) && (*(int **)(this + 0xac) != (int *)0x0)) {
      pcVar1 = *(code **)(**(int **)(this + 0xac) + 0x50);
      guard_check_icall();
      (*pcVar1)();
    }
    uVar2 = CWnd::GetExStyle((CWnd *)this);
    if ((uVar2 & 0x2000) == 0) {
      CWnd::RepositionBars((CWnd *)this,0,0xffff,0xe900,2,(tagRECT *)(this + 0x9c),(tagRECT *)0x0,1)
      ;
    }
    else {
      local_18.left = 0;
      local_18.right = 0x7fff;
      local_18.bottom = 0x7fff;
      local_18.top = 0;
      CWnd::RepositionBars((CWnd *)this,0,0xffff,0xe900,1,&local_18,&local_18,0);
      CWnd::RepositionBars((CWnd *)this,0,0xffff,0xe900,2,(tagRECT *)(this + 0x9c),&local_18,1);
      pcVar1 = *(code **)(*(int *)this + 0x68);
      guard_check_icall(&local_18,0);
      (*pcVar1)();
      CWnd::SetWindowPos((CWnd *)this,(CWnd *)0x0,0,0,local_18.right - local_18.left,
                         local_18.bottom - local_18.top,0x16);
    }
    *(undefined4 *)(this + 0xf4) = 0;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

