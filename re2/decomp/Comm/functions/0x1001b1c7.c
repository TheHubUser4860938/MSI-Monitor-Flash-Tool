// rea decompile_all
// name: Format
// address: 0x1001b1c7
// body: available
// range: 0x1001b1c7-0x1001b32c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: class ATL::CStringT<char,class StrTraitMFC<char,class ATL::ChTraitsCRT<char> > >
   __thiscall ATL::COleDateTime::Format(unsigned long,unsigned long)const 
    public: class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> >
   > __thiscall ATL::COleDateTime::Format(unsigned long,unsigned long)const 
   
   Library: Visual Studio 2015 Release */

int * Format(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *in_ECX;
  int local_1c;
  int local_18;
  undefined4 local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x1001b1d3;
  if (*(int *)(in_ECX + 1) == 2) {
    FUN_100037c0(&DAT_101b5ebc);
  }
  else if (*(int *)(in_ECX + 1) == 1) {
    uVar1 = FUN_10013071();
    FUN_10003190(uVar1);
    local_8 = 0;
    iVar2 = FUN_10012ca3(0xd800);
    if ((iVar2 == 0) || (iVar2 = FUN_100032f0(iVar2,0xd800), iVar2 == 0)) {
      FUN_100037c0(L"Invalid DateTime");
      FUN_10003460();
    }
    else {
      iVar2 = FUN_10003060(local_18 + -0x10);
      *param_1 = iVar2 + 0x10;
      FUN_10003460();
    }
  }
  else {
    local_14[0] = 0;
    local_8 = 1;
    iVar2 = Ordinal_114(*in_ECX,param_3,param_2,local_14);
    if (iVar2 < 0) {
      uVar1 = FUN_10013071();
      FUN_10003190(uVar1);
      local_8 = CONCAT31(local_8._1_3_,2);
      iVar2 = FUN_10012ca3(0xd800);
      if ((iVar2 == 0) || (iVar2 = FUN_100032f0(iVar2,0xd800), iVar2 == 0)) {
        FUN_100037c0(L"Invalid DateTime");
        FUN_10003460();
        Ordinal_6(local_14[0]);
        return param_1;
      }
      iVar2 = FUN_10003060(local_18 + -0x10);
    }
    else {
      FUN_100037c0(local_14[0]);
      local_8 = CONCAT31(local_8._1_3_,3);
      iVar2 = FUN_10003060(local_1c + -0x10);
    }
    *param_1 = iVar2 + 0x10;
    FUN_10003460();
    Ordinal_6(local_14[0]);
  }
  return param_1;
}

