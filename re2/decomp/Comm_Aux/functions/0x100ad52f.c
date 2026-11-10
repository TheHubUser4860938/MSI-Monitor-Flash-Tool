// rea decompile_all
// name: ParseControlRenderer
// address: 0x100ad52f
// body: available
// range: 0x100ad52f-0x100ad5f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: static int __stdcall CTagManager::ParseControlRenderer(class ATL::CStringT<char,class
   StrTraitMFC<char,class ATL::ChTraitsCRT<char> > > const &,class CMFCControlRenderer &,char const
   *)
    public: static int __stdcall CTagManager::ParseControlRenderer(class ATL::CStringT<wchar_t,class
   StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > > const &,class CMFCControlRenderer
   &,wchar_t const *)
   
   Library: Visual Studio 2015 Release */

void ParseControlRenderer(undefined4 param_1,int *param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  undefined1 local_a4 [80];
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x98;
  local_8 = 0x100ad53e;
  pcVar1 = *(code **)(*param_2 + 0x28);
  guard_check_icall();
  (*pcVar1)();
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  CMFCControlRendererInfo(param_3,&local_54,&local_44,&local_34,&local_24);
  local_8 = 0;
  iVar2 = ParseControlRendererInfo(param_1,local_a4);
  if (iVar2 != 0) {
    pcVar1 = *(code **)(*param_2 + 0xc);
    guard_check_icall(local_a4,0);
    (*pcVar1)();
  }
  FUN_10136cf1();
  FUN_1017f5f4();
  return;
}

