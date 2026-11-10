// rea decompile_all
// name: CMFCRibbonCategory::~CMFCRibbonCategory
// address: 0x47b091
// body: available
// range: 0x47b091-0x47b1c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual __thiscall CMFCRibbonCategory::~CMFCRibbonCategory(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonCategory::~CMFCRibbonCategory(CMFCRibbonCategory *this)

{
  code *pcVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_005a5494;
  local_10 = ExceptionList;
  uVar2 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar4 = 0;
  *(undefined ***)this = vftable;
  if (0 < *(int *)(this + 0x564)) {
    do {
      piVar3 = (int *)FUN_004ab4cd(iVar4);
      if ((int *)*piVar3 != (int *)0x0) {
        pcVar1 = *(code **)(*(int *)*piVar3 + 4);
        guard_check_icall(1);
        (*pcVar1)();
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(this + 0x564));
  }
  iVar4 = 0;
  if (0 < *(int *)(this + 0x7b0)) {
    do {
      piVar3 = (int *)FUN_004ab4cd(iVar4);
      if ((int *)*piVar3 != (int *)0x0) {
        pcVar1 = *(code **)(*(int *)*piVar3 + 4);
        guard_check_icall(1,uVar2);
        (*pcVar1)();
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(this + 0x7b0));
  }
  CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*>::
  ~CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*>
            ((CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*> *)(this + 0x7a8));
  CMFCToolBarImages::~CMFCToolBarImages((CMFCToolBarImages *)(this + 0x690));
  CMFCToolBarImages::~CMFCToolBarImages((CMFCToolBarImages *)(this + 0x578));
  ~CArray<>();
  CArray<int,int>::~CArray<int,int>((CArray<int,int> *)(this + 0x548));
  CMFCRibbonButton::~CMFCRibbonButton((CMFCRibbonButton *)(this + 0x370));
  CMFCRibbonButton::~CMFCRibbonButton((CMFCRibbonButton *)(this + 0x1a8));
  CMFCRibbonBaseElement::~CMFCRibbonBaseElement((CMFCRibbonBaseElement *)(this + 0x90));
  FUN_0040efa0();
  CMFCBaseAccessibleObject::~CMFCBaseAccessibleObject((CMFCBaseAccessibleObject *)this);
  ExceptionList = local_10;
  return;
}

