// rea decompile_all
// name: CMFCRibbonBar::RemoveAllKeys
// address: 0x504a55
// body: available
// range: 0x504a55-0x504b19 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: void __thiscall CMFCRibbonBar::RemoveAllKeys(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonBar::RemoveAllKeys(CMFCRibbonBar *this)

{
  int iVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  undefined **local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  CMFCRibbonBar *local_1c;
  undefined4 local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x24;
  iVar1 = *(int *)(this + 0x7e8);
  if (iVar1 != 0) {
    iVar5 = 0;
    local_34 = CArray<CMFCRibbonKeyTip*,CMFCRibbonKeyTip*>::vftable;
    local_30 = 0;
    local_24 = 0;
    local_28 = 0;
    local_2c = 0;
    local_8 = 0;
    local_14 = 0;
    local_20 = iVar1;
    local_1c = this;
    if (0 < iVar1) {
      do {
        puVar3 = (undefined4 *)FUN_004ab4cd(iVar5);
        FUN_00473afc(local_2c,*puVar3);
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar1);
    }
    iVar5 = 0;
    FUN_00558084(0,0xffffffff);
    if (0 < iVar1) {
      do {
        piVar4 = (int *)FUN_004ab4cd(iVar5);
        piVar4 = (int *)*piVar4;
        if (piVar4 != (int *)0x0) {
          if (piVar4[8] != 0) {
            pcVar2 = *(code **)(*piVar4 + 0x60);
            guard_check_icall();
            (*pcVar2)();
          }
          pcVar2 = *(code **)(*piVar4 + 4);
          guard_check_icall(1);
          (*pcVar2)();
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < local_20);
    }
    CArray<CMFCRibbonKeyTip*,CMFCRibbonKeyTip*>::~CArray<CMFCRibbonKeyTip*,CMFCRibbonKeyTip*>
              ((CArray<CMFCRibbonKeyTip*,CMFCRibbonKeyTip*> *)&local_34);
  }
  return;
}

