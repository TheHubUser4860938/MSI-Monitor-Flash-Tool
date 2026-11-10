// rea decompile_all
// name: FUN_0045b96b
// address: 0x45b96b
// body: available
// range: 0x45b96b-0x45bb26 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0045b96b(void)

{
  double dVar1;
  undefined4 uVar2;
  AFX_GLOBAL_DATA *pAVar3;
  int iVar4;
  undefined8 uVar5;
  
  if (DAT_006158c4 == 0) {
    if (DAT_00615964 == 0) {
      uVar2 = 1;
      DAT_006158c4 = 1;
      CMFCToolBarImages::Initialize((CMFCToolBarImages *)&DAT_006158d8);
      CMFCToolBarImages::Initialize((CMFCToolBarImages *)&DAT_006159f0);
      CMFCToolBarImages::Initialize((CMFCToolBarImages *)&DAT_00615b08);
      CMFCToolBarImages::Initialize((CMFCToolBarImages *)&DAT_00615c20);
      CMFCToolBarImages::Initialize((CMFCToolBarImages *)&DAT_00615d38);
      CMFCToolBarImages::Initialize((CMFCToolBarImages *)&DAT_00615e50);
      DAT_0061592c = 9;
      uVar5 = 0;
      DAT_00615930 = DAT_0061592c;
      pAVar3 = GetGlobalData();
      iVar4 = AFX_GLOBAL_DATA::Is32BitIcons(pAVar3);
      iVar4 = CMFCToolBarImages::Load
                        ((CMFCToolBarImages *)&DAT_006158d8,(-(uint)(iVar4 != 0) & 0x3b7) + 0x3f01,
                         (HINSTANCE__ *)uVar5,(int)((ulonglong)uVar5 >> 0x20));
      if (iVar4 == 0) {
        uVar2 = 0;
      }
      else {
        if (DAT_00614e58 != 0) {
          CMFCToolBarImages::Mirror((CMFCToolBarImages *)&DAT_006158d8);
        }
        CMFCToolBarImages::SetTransparentColor((CMFCToolBarImages *)&DAT_006158d8,0xff00ff);
        CMenuImages::CreateCopy((CMFCToolBarImages *)&DAT_00615b08,0x808080);
        CMenuImages::CreateCopy((CMFCToolBarImages *)&DAT_006159f0,0x484848);
        CMenuImages::CreateCopy((CMFCToolBarImages *)&DAT_00615c20,0xc0c0c0);
        CMenuImages::CreateCopy((CMFCToolBarImages *)&DAT_00615d38,0xffffff);
        CMenuImages::CreateCopy((CMFCToolBarImages *)&DAT_00615e50,0);
        if (DAT_00615964 != 0) {
          pAVar3 = GetGlobalData();
          if (*(int *)(pAVar3 + 0x1e8) == 0) {
            dVar1 = 1.0;
          }
          else {
            dVar1 = *(double *)(pAVar3 + 0x1e0);
          }
          if (dVar1 != 1.0) {
            FUN_0044e89f(dVar1);
            FUN_0044e89f(dVar1);
            FUN_0044e89f(dVar1);
            FUN_0044e89f(dVar1);
            FUN_0044e89f(dVar1);
            FUN_0044e89f(dVar1);
          }
        }
      }
      DAT_006158c4 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

