// rea decompile_all
// name: CMFCVisualManager::OnDrawTabCloseButton
// address: 0x10090fc3
// body: available
// range: 0x10090fc3-0x10091043 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnDrawTabCloseButton(class CDC *,class
   CRect,class CMFCBaseTabCtrl const *,int,int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCVisualManager::OnDrawTabCloseButton(undefined4 param_1_00,CDC *param_1)

{
  AFX_GLOBAL_DATA *pAVar1;
  HBRUSH hbr;
  int in_stack_0000001c;
  int in_stack_00000020;
  ulong uVar2;
  ulong uVar3;
  undefined4 local_c;
  undefined4 local_8;
  
  if (in_stack_0000001c != 0) {
    pAVar1 = GetGlobalData();
    hbr = (HBRUSH)0x0;
    if (pAVar1 != (AFX_GLOBAL_DATA *)0xffffff30) {
      hbr = *(HBRUSH *)(pAVar1 + 0xd4);
    }
    FillRect(*(HDC *)(param_1 + 4),(RECT *)&stack0x00000008,hbr);
  }
  local_c = 0;
  local_8 = 0;
  CMenuImages::Draw(param_1,5,(CRect *)&stack0x00000008,0,(CSize *)&local_c);
  if (in_stack_0000001c != 0) {
    pAVar1 = GetGlobalData();
    if (in_stack_00000020 == 0) {
      uVar3 = *(ulong *)(pAVar1 + 0x60);
      pAVar1 = GetGlobalData();
      uVar2 = *(ulong *)(pAVar1 + 0x5c);
    }
    else {
      uVar3 = *(ulong *)(pAVar1 + 0x5c);
      pAVar1 = GetGlobalData();
      uVar2 = *(ulong *)(pAVar1 + 0x60);
    }
    CDC::Draw3dRect(param_1,(tagRECT *)&stack0x00000008,uVar2,uVar3);
  }
  return;
}

