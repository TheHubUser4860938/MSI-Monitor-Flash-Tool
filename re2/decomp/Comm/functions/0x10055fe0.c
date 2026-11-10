// rea decompile_all
// name: CMFCVisualManager::OnDrawMiniFrameBorder
// address: 0x10055fe0
// body: available
// range: 0x10055fe0-0x10056104 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnDrawMiniFrameBorder(class CDC *,class
   CPaneFrameWnd *,class CRect,class CRect)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManager::OnDrawMiniFrameBorder(undefined4 param_1_00,CDC *param_1,int param_2)

{
  AFX_GLOBAL_DATA *pAVar1;
  int in_stack_00000020;
  int in_stack_00000024;
  ulong uVar2;
  
  if (*(int *)(param_2 + 0x188) == 1) {
    pAVar1 = GetGlobalData();
    CDC::Draw3dRect(param_1,(tagRECT *)&stack0x0000000c,0x7f,*(ulong *)(pAVar1 + 0x60));
    InflateRect((LPRECT)&stack0x0000000c,-1,-1);
    uVar2 = 0x7f;
  }
  else {
    if (*(int *)(param_2 + 0x188) == 2) {
      pAVar1 = GetGlobalData();
      CDC::Draw3dRect(param_1,(tagRECT *)&stack0x0000000c,0x7f0000,*(ulong *)(pAVar1 + 0x60));
      InflateRect((LPRECT)&stack0x0000000c,-1,-1);
      uVar2 = 0x7f0000;
      pAVar1 = GetGlobalData();
      CDC::Draw3dRect(param_1,(tagRECT *)&stack0x0000000c,*(ulong *)(pAVar1 + 0x5c),uVar2);
      goto LAB_100560a7;
    }
    pAVar1 = GetGlobalData();
    uVar2 = *(ulong *)(pAVar1 + 0x60);
    pAVar1 = GetGlobalData();
    CDC::Draw3dRect(param_1,(tagRECT *)&stack0x0000000c,*(ulong *)(pAVar1 + 0x54),uVar2);
    InflateRect((LPRECT)&stack0x0000000c,-1,-1);
    pAVar1 = GetGlobalData();
    uVar2 = *(ulong *)(pAVar1 + 0x58);
  }
  pAVar1 = GetGlobalData();
  CDC::Draw3dRect(param_1,(tagRECT *)&stack0x0000000c,*(ulong *)(pAVar1 + 0x5c),uVar2);
LAB_100560a7:
  InflateRect((LPRECT)&stack0x0000000c,2 - in_stack_00000024,2 - in_stack_00000020);
  pAVar1 = GetGlobalData();
  uVar2 = *(ulong *)(pAVar1 + 0x54);
  pAVar1 = GetGlobalData();
  CDC::Draw3dRect(param_1,(tagRECT *)&stack0x0000000c,*(ulong *)(pAVar1 + 0x54),uVar2);
  InflateRect((LPRECT)&stack0x0000000c,1,1);
  pAVar1 = GetGlobalData();
  uVar2 = *(ulong *)(pAVar1 + 0x54);
  pAVar1 = GetGlobalData();
  CDC::Draw3dRect(param_1,(tagRECT *)&stack0x0000000c,*(ulong *)(pAVar1 + 0x54),uVar2);
  return;
}

