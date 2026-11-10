// rea decompile_all
// name: _AFX_MOUSEANCHORWND::WindowProc
// address: 0x100ad263
// body: available
// range: 0x100ad263-0x100ad31c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual long __thiscall _AFX_MOUSEANCHORWND::WindowProc(unsigned int,unsigned int,long)
   
   Library: Visual Studio 2015 Release */

long __thiscall
_AFX_MOUSEANCHORWND::WindowProc(_AFX_MOUSEANCHORWND *this,uint param_1,uint param_2,long param_3)

{
  POINT pt;
  BOOL BVar1;
  long lVar2;
  tagPOINT local_c;
  
  local_c.x = (LONG)this;
  local_c.y = (LONG)this;
  if (param_1 < 0x206) {
    if ((param_1 < 0x204) &&
       ((param_1 < 0x100 ||
        ((0x102 < param_1 &&
         ((param_1 < 0x104 || ((0x105 < param_1 && ((param_1 < 0x201 || (0x202 < param_1))))))))))))
    goto LAB_100ad308;
  }
  else if (param_1 != 0x207) {
    if (param_1 == 0x208) {
      local_c.x = (LONG)(short)param_3;
      local_c.y = (LONG)(short)((uint)param_3 >> 0x10);
      ClientToScreen(*(HWND *)(this + 0x20),&local_c);
      pt.y = local_c.y;
      pt.x = local_c.x;
      BVar1 = PtInRect((RECT *)(this + 0x80),pt);
      if (BVar1 != 0) goto LAB_100ad308;
    }
    else if (param_1 != 0x20a) goto LAB_100ad308;
  }
  *(undefined4 *)(this + 0x98) = 1;
LAB_100ad308:
  lVar2 = CWnd::WindowProc((CWnd *)this,param_1,param_2,param_3);
  return lVar2;
}

