// rea decompile_all
// name: CMFCDynamicLayoutData::ApplyLayoutDataTo
// address: 0x100372de
// body: available
// range: 0x100372de-0x100373ae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CMFCDynamicLayoutData::ApplyLayoutDataTo(class CWnd *,int)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCDynamicLayoutData::ApplyLayoutDataTo(CMFCDynamicLayoutData *this,CWnd *param_1,int param_2)

{
  CMFCDynamicLayout *this_00;
  undefined4 *puVar1;
  int iVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  if (((param_1 != (CWnd *)0x0) && (*(int *)(param_1 + 0x20) != 0)) && (*(int *)(this + 0xc) != 0))
  {
    CWnd::EnableDynamicLayout(param_1,0);
    CWnd::EnableDynamicLayout(param_1,1);
    this_00 = *(CMFCDynamicLayout **)(param_1 + 0x58);
    if ((this_00 != (CMFCDynamicLayout *)0x0) &&
       (iVar2 = CMFCDynamicLayout::Create(this_00,param_1), iVar2 != 0)) {
      pHVar3 = GetWindow(*(HWND *)(param_1 + 0x20),5);
      pCVar4 = CWnd::FromHandle(pHVar3);
      puVar6 = *(undefined4 **)(this + 4);
      while ((pCVar4 != (CWnd *)0x0 && (puVar6 != (undefined4 *)0x0))) {
        uVar5 = 0;
        puVar1 = (undefined4 *)*puVar6;
        if ((0 < (int)puVar6[2]) ||
           (((0 < (int)puVar6[3] || (0 < (int)puVar6[4])) || (0 < (int)puVar6[5])))) {
          if (pCVar4 != (CWnd *)0x0) {
            uVar5 = *(undefined4 *)(pCVar4 + 0x20);
          }
          CMFCDynamicLayout::AddItem(this_00,uVar5,puVar6[2],puVar6[3],puVar6[4],puVar6[5]);
        }
        pHVar3 = GetWindow(*(HWND *)(pCVar4 + 0x20),2);
        pCVar4 = CWnd::FromHandle(pHVar3);
        puVar6 = puVar1;
      }
      if (param_2 != 0) {
        CMFCDynamicLayout::Adjust(this_00);
      }
      return 1;
    }
  }
  return 0;
}

