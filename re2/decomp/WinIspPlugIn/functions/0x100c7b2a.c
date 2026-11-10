// rea decompile_all
// name: CMFCAcceleratorKey::AddVirtKeyStr
// address: 0x100c7b2a
// body: available
// range: 0x100c7b2a-0x100c7c25 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
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
  local_8 = 0x100c7b36;
  uVar1 = FUN_10049868();
  FUN_100476a0(uVar1);
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
  FUN_10047140(pwVar7);
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::MakeLower
            ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_80);
  iVar5 = local_80;
  if (0 < *(int *)(local_80 + -0xc)) {
    do {
      ch = FUN_10046cb0(iVar6);
      BVar3 = IsCharLowerW(ch);
      if (BVar3 != 0) {
        uVar4 = _toupper((uint)(ushort)ch);
        FUN_10046c50(iVar6,uVar4 & 0xffff);
        iVar5 = local_80;
        break;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(iVar5 + -0xc));
  }
  FUN_10047a30(iVar5,*(undefined4 *)(iVar5 + -0xc));
  if (param_3 == 0) {
    ATL::CSimpleStringT<wchar_t,0>::AppendChar((CSimpleStringT<wchar_t,0> *)param_1,L'+');
  }
  FUN_100476d0();
  FUN_1018015d();
  return;
}

