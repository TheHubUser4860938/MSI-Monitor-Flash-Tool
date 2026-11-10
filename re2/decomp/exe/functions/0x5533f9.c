// rea decompile_all
// name: CMFCColorPickerCtrl::~CMFCColorPickerCtrl
// address: 0x5533f9
// body: available
// range: 0x5533f9-0x55349e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual __thiscall CMFCColorPickerCtrl::~CMFCColorPickerCtrl(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCColorPickerCtrl::~CMFCColorPickerCtrl(CMFCColorPickerCtrl *this)

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
  if (0 < *(int *)(this + 0xc0)) {
    do {
      piVar3 = (int *)FUN_004ab4cd(iVar4);
      if ((int *)*piVar3 != (int *)0x0) {
        pcVar1 = *(code **)(*(int *)*piVar3 + 4);
        guard_check_icall(1,uVar2);
        (*pcVar1)();
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(this + 0xc0));
  }
  CObArray::~CObArray((CObArray *)(this + 0xb8));
  *(undefined ***)(this + 0xb0) = CBitmap::vftable;
  FUN_0040ee80();
  CButton::~CButton((CButton *)this);
  ExceptionList = local_10;
  return;
}

