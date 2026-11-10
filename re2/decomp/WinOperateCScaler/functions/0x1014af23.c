// rea decompile_all
// name: OnAddToCustomizePage
// address: 0x1014af23
// body: available
// range: 0x1014af23-0x1014af72 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: virtual void __thiscall CMFCToolBarComboBoxButton::OnAddToCustomizePage(void)
    public: virtual void __thiscall CMFCToolBarDateTimeCtrl::OnAddToCustomizePage(void)
    public: virtual void __thiscall CMFCToolBarEditBoxButton::OnAddToCustomizePage(void)
   
   Library: Visual Studio 2015 Release */

void OnAddToCustomizePage(void)

{
  code *pcVar1;
  int iVar2;
  int *in_ECX;
  CObList local_2c [4];
  int local_28;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x1014af2f;
  CObList::CObList(local_2c,10);
  local_8 = 0;
  iVar2 = FUN_1006a622(in_ECX[8],local_2c);
  if (iVar2 != 0) {
    pcVar1 = *(code **)(*in_ECX + 0x14);
    guard_check_icall(*(undefined4 *)(local_28 + 8));
    (*pcVar1)();
  }
  CObList::~CObList(local_2c);
  return;
}

