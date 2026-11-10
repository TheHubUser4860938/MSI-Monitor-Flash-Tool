// rea decompile_all
// name: CUserTool::DrawToolIcon
// address: 0x100e66a5
// body: available
// range: 0x100e66a5-0x100e6723 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CUserTool::DrawToolIcon(class CDC *,class CRect const &)
   
   Library: Visual Studio 2015 Release */

void __thiscall CUserTool::DrawToolIcon(CUserTool *this,CDC *param_1,CRect *param_2)

{
  AFX_GLOBAL_DATA *pAVar1;
  int iVar2;
  HDC hdc;
  int iVar3;
  
  pAVar1 = GetGlobalData();
  iVar3 = *(int *)(pAVar1 + 0x114);
  pAVar1 = GetGlobalData();
  iVar3 = ((*(int *)(param_2 + 8) - *(int *)param_2) - iVar3) / 2;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  iVar2 = ((*(int *)(param_2 + 0xc) - *(int *)(param_2 + 4)) - *(int *)(pAVar1 + 0x118)) / 2;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  hdc = (HDC)0x0;
  if (param_1 != (CDC *)0x0) {
    hdc = *(HDC *)(param_1 + 4);
  }
  DrawIconEx(hdc,*(int *)param_2 + iVar3,iVar2 + *(int *)(param_2 + 4),*(HICON *)(this + 0x18),0,0,0
             ,(HBRUSH)0x0,3);
  return;
}

