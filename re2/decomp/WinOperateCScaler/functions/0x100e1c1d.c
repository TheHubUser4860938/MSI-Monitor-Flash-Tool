// rea decompile_all
// name: CMFCRibbonBaseElement::~CMFCRibbonBaseElement
// address: 0x100e1c1d
// body: available
// range: 0x100e1c1d-0x100e1c21 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall CMFCRibbonBaseElement::~CMFCRibbonBaseElement(CMFCRibbonBaseElement *this)

{
  int iVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_101a3154;
  pvStack_10 = ExceptionList;
  uVar2 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  ExceptionList = &pvStack_10;
  iVar1 = *(int *)(this + 0x9c);
  *(undefined ***)this = vftable;
  if (iVar1 != 0) {
    if (*(CMFCRibbonBaseElement **)(iVar1 + 0x116c) != this) {
                    /* WARNING: Subroutine does not return */
      FUN_1001d023(uVar2);
    }
    *(undefined4 *)(iVar1 + 0x116c) = 0;
    ClosePopupMenu(this);
  }
  ATL::CStringData::Release((CStringData *)(*(int *)(this + 0x70) + -0x10));
  ATL::CStringData::Release((CStringData *)(*(int *)(this + 0x6c) + -0x10));
  ATL::CStringData::Release((CStringData *)(*(int *)(this + 0x68) + -0x10));
  ATL::CStringData::Release((CStringData *)(*(int *)(this + 100) + -0x10));
  ATL::CStringData::Release((CStringData *)(*(int *)(this + 0x60) + -0x10));
  CMFCBaseAccessibleObject::~CMFCBaseAccessibleObject((CMFCBaseAccessibleObject *)this);
  ExceptionList = pvStack_10;
  return;
}

