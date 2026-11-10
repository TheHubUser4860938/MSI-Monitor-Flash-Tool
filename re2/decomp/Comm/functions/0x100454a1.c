// rea decompile_all
// name: CTreeCtrl::HitTest
// address: 0x100454a1
// body: available
// range: 0x100454a1-0x100454d8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: struct _TREEITEM * __thiscall CTreeCtrl::HitTest(class CPoint,unsigned int *)const 
   
   Library: Visual Studio 2015 Release */

_TREEITEM * __thiscall
CTreeCtrl::HitTest(CTreeCtrl *this,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  _TREEITEM *p_Var1;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_14 = param_2;
  local_10 = param_3;
  p_Var1 = (_TREEITEM *)SendMessageW(*(HWND *)(this + 0x20),0x1111,0,(LPARAM)&local_14);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_c;
  }
  return p_Var1;
}

