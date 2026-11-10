// rea decompile_all
// name: CMFCPropertyGridProperty::AddTerminalProp
// address: 0x537337
// body: available
// range: 0x537337-0x5373dd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCPropertyGridProperty::AddTerminalProp(class CList<class
   CMFCPropertyGridProperty *,class CMFCPropertyGridProperty *> &)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCPropertyGridProperty::AddTerminalProp
          (CMFCPropertyGridProperty *this,
          CList<CMFCPropertyGridProperty*,CMFCPropertyGridProperty*> *param_1)

{
  undefined4 *puVar1;
  __POSITION *p_Var2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  __POSITION *p_Var6;
  undefined4 *puVar7;
  
  bVar4 = false;
  if ((*(int *)(this + 0x5c) == 0) || (*(int *)(this + 0x6c) != 0)) {
    p_Var6 = *(__POSITION **)(param_1 + 4);
    do {
      if (p_Var6 == (__POSITION *)0x0) break;
      p_Var2 = *(__POSITION **)p_Var6;
      pcVar3 = *(code **)(**(int **)(this + 0xc4) + 0x1b4);
      guard_check_icall(*(undefined4 *)(p_Var6 + 8),this);
      iVar5 = (*pcVar3)();
      if (0 < iVar5) {
        CList<CMFCPropertyGridProperty*,CMFCPropertyGridProperty*>::InsertBefore
                  (param_1,p_Var6,this);
        bVar4 = true;
      }
      p_Var6 = p_Var2;
    } while (!bVar4);
    if (!bVar4) {
      CList<HWND__*,HWND__*>::AddTail((CList<HWND__*,HWND__*> *)param_1,(HWND__ *)this);
    }
  }
  else {
    SetRectEmpty((LPRECT)(this + 0x30));
    puVar7 = *(undefined4 **)(this + 0xd0);
    while (puVar7 != (undefined4 *)0x0) {
      puVar1 = puVar7 + 2;
      puVar7 = (undefined4 *)*puVar7;
      AddTerminalProp((CMFCPropertyGridProperty *)*puVar1,param_1);
    }
  }
  return;
}

