// rea decompile_all
// name: SetText
// address: 0x100ca319
// body: available
// range: 0x100ca319-0x100ca3b9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: virtual void __thiscall CMFCRibbonBaseElement::SetText(char const *)
    public: virtual void __thiscall CMFCRibbonBaseElement::SetText(wchar_t const *)
   
   Library: Visual Studio 2015 Release */

void SetText(undefined *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined1 local_18 [4];
  undefined1 local_14 [12];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x100ca325;
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_101b5ebc;
  }
  FUN_10003780(param_1);
  iVar1 = FUN_10010f20(10,0);
  if (-1 < iVar1) {
    uVar2 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Mid
                      ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (in_ECX + 0x60),(int)local_14);
    local_8 = 0;
    FUN_100030d0(uVar2);
    local_8 = 0xffffffff;
    FUN_10003460();
    uVar2 = FUN_10002d90(local_18,iVar1);
    local_8 = 1;
    FUN_100030d0(uVar2);
    local_8 = 0xffffffff;
    FUN_10003460();
  }
  FUN_100110b0();
  FUN_10011160();
  return;
}

