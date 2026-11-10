// rea decompile_all
// name: CPropertySheet::GetPageCount
// address: 0x10062a0e
// body: available
// range: 0x10062a0e-0x10062a3a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CPropertySheet::GetPageCount(void)const 
   
   Library: Visual Studio 2015 Release */

int __thiscall CPropertySheet::GetPageCount(CPropertySheet *this)

{
  code *pcVar1;
  int iVar2;
  CTabCtrl *pCVar3;
  LRESULT LVar4;
  
  if (*(int *)(this + 0x20) == 0) {
    return *(int *)(this + 0xbc);
  }
  pCVar3 = GetTabControl(this);
  if (pCVar3 != (CTabCtrl *)0x0) {
    LVar4 = SendMessageW(*(HWND *)(pCVar3 + 0x20),0x1304,0,0);
    return LVar4;
  }
  __CxxThrowException_8(&stack0xfffffff8,&DAT_101f2858);
  pcVar1 = (code *)swi(3);
  iVar2 = (*pcVar1)();
  return iVar2;
}

