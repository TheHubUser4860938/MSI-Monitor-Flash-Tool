// rea decompile_all
// name: CFrameWnd::LoadFrame
// address: 0x100bb77e
// body: available
// range: 0x100bb77e-0x100bb8a9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CFrameWnd::LoadFrame(unsigned int,unsigned long,class CWnd
   *,struct CCreateContext *)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CFrameWnd::LoadFrame
          (CFrameWnd *this,uint param_1,ulong param_2,CWnd *param_3,CCreateContext *param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  HMENU pHVar4;
  int local_18;
  wchar_t *local_14;
  
  *(uint *)(this + 0xd0) = param_1;
  uVar2 = FUN_10048e90();
  FUN_10034c30(uVar2);
  local_18 = 0;
  iVar3 = FUN_10048ace(param_1);
  if ((iVar3 != 0) && (iVar3 = FUN_10034d90(iVar3,param_1), iVar3 != 0)) {
    AfxExtractSubString((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                        (this + 0xf0),local_14,0,L'\n');
  }
  AfxEndDeferRegisterClass(8);
  uVar2 = GetIconWndClass(param_2,param_1);
  iVar3 = FUN_100349e0(*(int *)(this + 0xf0) + -0x10);
  pcVar1 = *(code **)(*(int *)this + 0x164);
  guard_check_icall(uVar2,iVar3 + 0x10,param_2,&DAT_10205c08,param_3,param_1 & 0xffff,0,param_4);
  iVar3 = (*pcVar1)();
  if (iVar3 != 0) {
    if (*(int *)(this + 0x100) == 1) {
      pHVar4 = ::GetMenu(*(HWND *)(this + 0x20));
    }
    else {
      pHVar4 = *(HMENU *)(this + 0x104);
    }
    *(HMENU *)(this + 0x88) = pHVar4;
    LoadAccelTable(param_1 & 0xffff);
    if (param_4 == (CCreateContext *)0x0) {
      CWnd::SendMessageToDescendants(*(HWND__ **)(this + 0x20),0x364,0,0,1,1);
    }
    local_18 = 1;
  }
  FUN_10034f00();
  FUN_10034f00();
  return local_18;
}

