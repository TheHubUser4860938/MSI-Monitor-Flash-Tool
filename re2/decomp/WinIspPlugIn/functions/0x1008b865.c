// rea decompile_all
// name: DrawTextOnGlass
// address: 0x1008b865
// body: available
// range: 0x1008b865-0x1008b911 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: virtual int __thiscall CMFCVisualManager::DrawTextOnGlass(class CDC *,class
   ATL::CStringT<char,class StrTraitMFC<char,class ATL::ChTraitsCRT<char> > >,class CRect,unsigned
   long,int,unsigned long)
    public: virtual int __thiscall CMFCVisualManager::DrawTextOnGlass(class CDC *,class
   ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > >,class
   CRect,unsigned long,int,unsigned long)
   
   Library: Visual Studio 2015 Release */

undefined4 DrawTextOnGlass(int *param_1,int param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  int in_ECX;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  GetTextColor((HDC)param_1[2]);
  pcVar1 = *(code **)(*param_1 + 0x30);
  guard_check_icall();
  (*pcVar1)();
  FUN_10047580(param_2 + -0x10);
  uVar5 = 0;
  uVar4 = 0;
  uVar2 = *(undefined4 *)(in_ECX + 0x10);
  piVar3 = param_1;
  GetGlobalData();
  uVar2 = DrawTextOnGlass(uVar2,piVar3,uVar4,uVar5);
  pcVar1 = *(code **)(*param_1 + 0x30);
  guard_check_icall();
  (*pcVar1)();
  FUN_100476d0();
  return uVar2;
}

