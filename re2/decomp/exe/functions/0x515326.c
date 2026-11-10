// rea decompile_all
// name: CMFCAcceleratorKey::AddVirtKeyStr
// address: 0x515326
// body: available
// range: 0x515326-0x515421 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: void __thiscall CMFCAcceleratorKey::AddVirtKeyStr(class ATL::CStringT<wchar_t,class
   StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > > &,unsigned int,int)const 
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCAcceleratorKey::AddVirtKeyStr
          (CMFCAcceleratorKey *this,
          CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *param_1,uint param_2,
          int param_3)

{
  WCHAR ch;
  undefined4 uVar1;
  HKL dwhkl;
  UINT UVar2;
  BOOL BVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  wchar_t *pwVar7;
  int local_80;
  WCHAR local_7c [58];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x74;
  local_8 = 0x515332;
  uVar1 = FUN_004295fe();
  FUN_0040eb30(uVar1);
  iVar6 = 0;
  local_8 = 0;
  if (param_2 == 0x13) {
    pwVar7 = L"Pause";
  }
  else {
    _memset(local_7c,0,0x66);
    dwhkl = GetKeyboardLayout(0);
    UVar2 = MapVirtualKeyExW(param_2,0,dwhkl);
    uVar4 = UVar2 << 0x10 | 1;
    if (((0x20 < param_2) && (param_2 < 0x30)) || (param_2 == 0x6f)) {
      uVar4 = UVar2 << 0x10 | 0x1000001;
    }
    GetKeyNameTextW(uVar4,local_7c,0x32);
    pwVar7 = local_7c;
  }
  FUN_00415ad0(pwVar7);
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::MakeLower
            ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_80);
  iVar5 = local_80;
  if (0 < *(int *)(local_80 + -0xc)) {
    do {
      ch = FUN_00414b20(iVar6);
      BVar3 = IsCharLowerW(ch);
      if (BVar3 != 0) {
        uVar4 = _toupper((uint)(ushort)ch);
        FUN_00414ac0(iVar6,uVar4 & 0xffff);
        iVar5 = local_80;
        break;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(iVar5 + -0xc));
  }
  FUN_004157a0(iVar5,*(undefined4 *)(iVar5 + -0xc));
  if (param_3 == 0) {
    FUN_004153a0(0x2b);
  }
  FUN_0040efa0();
  FUN_0055bae6();
  return;
}

