// rea decompile_all
// name: CMFCControlRendererInfo
// address: 0x10137ab1
// body: available
// range: 0x10137ab1-0x10137b48 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: __thiscall CMFCControlRendererInfo::CMFCControlRendererInfo(char const *,class CRect
   const &,class CRect const &,class CRect const &,class CRect const &)
    public: __thiscall CMFCControlRendererInfo::CMFCControlRendererInfo(wchar_t const *,class CRect
   const &,class CRect const &,class CRect const &,class CRect const &)
   
   Library: Visual Studio 2015 Release */

void CMFCControlRendererInfo
               (undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
               undefined4 *param_5)

{
  undefined4 uVar1;
  CMFCControlRendererInfo *in_ECX;
  
  uVar1 = FUN_10049868();
  FUN_100476a0(uVar1);
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  *(undefined4 *)(in_ECX + 0x24) = 0;
  *(undefined4 *)(in_ECX + 0x28) = 0;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  *(undefined4 *)(in_ECX + 0x30) = 0;
  *(undefined4 *)(in_ECX + 0x34) = 0;
  *(undefined4 *)(in_ECX + 0x38) = 0;
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  *(undefined4 *)(in_ECX + 0x40) = 0;
  *(undefined4 *)(in_ECX + 0x44) = 0;
  CMFCControlRendererInfo::CommonInit(in_ECX);
  SetResourceID(param_1);
  *(undefined4 *)(in_ECX + 8) = *param_2;
  *(undefined4 *)(in_ECX + 0xc) = param_2[1];
  *(undefined4 *)(in_ECX + 0x10) = param_2[2];
  *(undefined4 *)(in_ECX + 0x14) = param_2[3];
  *(undefined4 *)(in_ECX + 0x18) = *param_3;
  *(undefined4 *)(in_ECX + 0x1c) = param_3[1];
  *(undefined4 *)(in_ECX + 0x20) = param_3[2];
  *(undefined4 *)(in_ECX + 0x24) = param_3[3];
  *(undefined4 *)(in_ECX + 0x28) = *param_4;
  *(undefined4 *)(in_ECX + 0x2c) = param_4[1];
  *(undefined4 *)(in_ECX + 0x30) = param_4[2];
  *(undefined4 *)(in_ECX + 0x34) = param_4[3];
  *(undefined4 *)(in_ECX + 0x38) = *param_5;
  *(undefined4 *)(in_ECX + 0x3c) = param_5[1];
  *(undefined4 *)(in_ECX + 0x40) = param_5[2];
  *(undefined4 *)(in_ECX + 0x44) = param_5[3];
  return;
}

