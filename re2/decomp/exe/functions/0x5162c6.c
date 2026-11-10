// rea decompile_all
// name: CMDIChildWnd::LoadFrame
// address: 0x5162c6
// body: available
// range: 0x5162c6-0x5163af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CMDIChildWnd::LoadFrame(unsigned int,unsigned long,class CWnd
   *,struct CCreateContext *)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMDIChildWnd::LoadFrame
          (CMDIChildWnd *this,uint param_1,ulong param_2,CWnd *param_3,CCreateContext *param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  undefined4 local_18;
  wchar_t *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x5162d2;
  uVar4 = param_2 | 0x40000000;
  *(uint *)(this + 0xd0) = param_1;
  if ((param_4 != (CCreateContext *)0x0) && (iVar3 = *(int *)(param_4 + 8), iVar3 != 0)) {
    *(undefined4 *)(this + 0x120) = *(undefined4 *)(iVar3 + 0x88);
    *(undefined4 *)(this + 0x8c) = *(undefined4 *)(iVar3 + 0x8c);
  }
  uVar2 = FUN_004295fe();
  FUN_0040eb30(uVar2);
  local_8 = 0;
  uVar2 = FUN_004295fe();
  FUN_0040eb30(uVar2);
  local_8 = CONCAT31(local_8._1_3_,1);
  iVar3 = FUN_00435fce(param_1);
  if ((iVar3 != 0) && (iVar3 = FUN_004160f0(iVar3,param_1), iVar3 != 0)) {
    AfxExtractSubString((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                        &local_18,local_14,0,L'\n');
  }
  iVar3 = *(int *)this;
  puVar5 = &DAT_0060c838;
  uVar2 = GetIconWndClass(uVar4,param_1);
  pcVar1 = *(code **)(iVar3 + 0x1c0);
  guard_check_icall(uVar2,local_18,uVar4,puVar5,param_3,param_4);
  iVar3 = (*pcVar1)();
  FUN_0040efa0();
  FUN_0040efa0();
  return (uint)(iVar3 != 0);
}

