// rea decompile_all
// name: DrawTextOnGlass
// address: 0x425ebf
// body: available
// range: 0x425ebf-0x425fe6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: int __thiscall AFX_GLOBAL_DATA::DrawTextOnGlass(void *,class CDC *,int,int,class
   ATL::CStringT<char,class StrTraitMFC<char,class ATL::ChTraitsCRT<char> > >,class CRect,unsigned
   long,int,unsigned long)
    public: int __thiscall AFX_GLOBAL_DATA::DrawTextOnGlass(void *,class CDC *,int,int,class
   ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > >,class
   CRect,unsigned long,int,unsigned long)
   
   Library: Visual Studio 2015 Release */

undefined4 DrawTextOnGlass(void *param_1,int *param_2,int param_3,int param_4,int param_5)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  AFX_GLOBAL_DATA *in_ECX;
  HDC__ *pHVar4;
  ulong in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_00000030;
  wchar_t *pwVar5;
  undefined4 local_60;
  uint local_5c;
  int local_58;
  int local_2c;
  void *local_20;
  wchar_t *local_1c;
  undefined4 local_18;
  wchar_t *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x50;
  local_20 = param_1;
  pHVar4 = (HDC__ *)0x0;
  local_8 = 0;
  if (param_1 != (void *)0x0) {
    iVar2 = AFX_GLOBAL_DATA::IsDwmCompositionEnabled(in_ECX);
    if (iVar2 != 0) {
      FUN_004164e7(param_5);
      local_18 = 1;
      local_8 = CONCAT31(local_8._1_3_,1);
      iVar2 = Ordinal_7(local_1c);
      lVar1 = (ulonglong)(iVar2 + 1) * 2;
      local_14 = (wchar_t *)
                 FUN_00416444(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
      pwVar5 = local_1c;
      iVar2 = Ordinal_7(local_1c,local_1c);
      _wcscpy_s(local_14,iVar2 + 1,pwVar5);
      _memset(&local_60,0,0x40);
      pwVar5 = local_14;
      local_60 = 0x40;
      uVar3 = 0x2000;
      local_5c = 0x2000;
      if (0 < in_stack_0000002c) {
        uVar3 = 0x2800;
        local_2c = in_stack_0000002c;
        local_5c = 0x2800;
      }
      if (in_stack_00000030 != -1) {
        local_5c = uVar3 | 1;
        local_58 = in_stack_00000030;
      }
      if (param_2 != (int *)0x0) {
        pHVar4 = (HDC__ *)param_2[1];
      }
      _AfxDrawThemeTextEx(local_20,pHVar4,param_3,param_4,local_14,-1,in_stack_00000028,
                          (tagRECT *)&stack0x00000018,(_DTTOPTS *)&local_60);
      FID_conflict__free(pwVar5);
      Ordinal_6(local_1c);
      goto LAB_00425fd1;
    }
  }
  iVar2 = *param_2;
  guard_check_icall(param_5,*(undefined4 *)(param_5 + -0xc),&stack0x00000018,in_stack_00000028);
  (**(code **)(iVar2 + 0x68))();
  local_18 = 0;
LAB_00425fd1:
  FUN_0040efa0();
  return local_18;
}

