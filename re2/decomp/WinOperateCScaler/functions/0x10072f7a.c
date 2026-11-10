// rea decompile_all
// name: CMFCTabInfo
// address: 0x10072f7a
// body: available
// range: 0x10072f7a-0x1007307f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Multiple Matches With Same Base Name
    private: __thiscall CMFCTabInfo::CMFCTabInfo(class ATL::CStringT<char,class
   StrTraitMFC<char,class ATL::ChTraitsCRT<char> > > const &,unsigned int,class CWnd *,int,int)
    private: __thiscall CMFCTabInfo::CMFCTabInfo(class ATL::CStringT<wchar_t,class
   StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > > const &,unsigned int,class CWnd
   *,int,int)
   
   Library: Visual Studio 2015 Release */

void CMFCTabInfo(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *in_ECX;
  int local_21c;
  WCHAR local_214 [262];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x214;
  local_8 = 0x10072f89;
  *in_ECX = CMFCTabInfo::vftable;
  uVar1 = FUN_1001e20a();
  FUN_1001d224(uVar1);
  in_ECX[2] = param_2;
  local_8 = 0;
  ((LPRECT)(in_ECX + 4))->left = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = param_3;
  in_ECX[10] = param_4;
  in_ECX[0x11] = param_5;
  FUN_10018680(param_1);
  SetRectEmpty((LPRECT)(in_ECX + 4));
  in_ECX[0xb] = 0xffffffff;
  in_ECX[0xc] = 0xffffffff;
  in_ECX[0xd] = 1;
  in_ECX[9] = 0;
  in_ECX[3] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  if (in_ECX[8] == 0) {
    in_ECX[0xe] = 0;
  }
  else {
    GetClassNameW(*(HWND *)(in_ECX[8] + 0x20),local_214,0xff);
    FUN_100185a0(local_214);
    local_8 = CONCAT31(local_8._1_3_,1);
    iVar2 = FUN_10030ace(L"SysListView32");
    in_ECX[0xe] = (uint)(iVar2 == 0);
    ATL::CStringData::Release((CStringData *)(local_21c + -0x10));
  }
  FUN_10154478();
  return;
}

