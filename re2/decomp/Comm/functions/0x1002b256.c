// rea decompile_all
// name: CChevronOwnerDrawMenu::MeasureItem
// address: 0x1002b256
// body: available
// range: 0x1002b256-0x1002b3a8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CChevronOwnerDrawMenu::MeasureItem(struct tagMEASUREITEMSTRUCT
   *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CChevronOwnerDrawMenu::MeasureItem(CChevronOwnerDrawMenu *this,tagMEASUREITEMSTRUCT *param_1)

{
  undefined4 uVar1;
  BOOL BVar2;
  CPen *pCVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  tagMENUITEMINFOW local_68;
  undefined1 local_38 [4];
  int local_34;
  int local_30;
  int local_20;
  CChevronOwnerDrawMenu *local_1c;
  CSimpleStringT<wchar_t,0> local_18 [4];
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x58;
  local_8 = 0x1002b262;
  local_1c = this;
  if (*(int *)(param_1 + 0x14) == 0) {
    iVar6 = GetSystemMetrics(0x32);
    local_34 = GetSystemMetrics(0x31);
    this = local_1c;
  }
  else {
    GetObjectW(*(HANDLE *)(*(int *)(param_1 + 0x14) + 4),0x18,local_38);
    iVar6 = local_30;
  }
  local_14 = local_34 + 2;
  iVar6 = iVar6 + 2;
  uVar1 = FUN_10013071();
  FUN_10003190(uVar1);
  local_8 = 0;
  _memset(&local_68,0,0x30);
  local_68.cbSize = 0x30;
  local_68.fMask = 0x40;
  BVar2 = GetMenuItemInfoW(*(HMENU *)(this + 4),*(UINT *)(param_1 + 8),0,&local_68);
  iVar5 = local_14;
  if (BVar2 != 0) {
    local_68.dwTypeData = (LPWSTR)FUN_100035b0(local_68.cch);
    local_68.cch = local_68.cch + 1;
    BVar2 = GetMenuItemInfoW(*(HMENU *)(this + 4),*(UINT *)(param_1 + 8),0,&local_68);
    ATL::CSimpleStringT<wchar_t,0>::ReleaseBuffer(local_18,-1);
    iVar5 = local_14;
    if (BVar2 != 0) {
      CWindowDC::CWindowDC((CWindowDC *)&local_34,(CWnd *)0x0);
      local_8 = CONCAT31(local_8._1_3_,1);
      pCVar3 = CDC::SelectObject((CDC *)&local_34,(CPen *)(local_1c + 8));
      CDC::GetTextExtent((CDC *)&local_34,
                         (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         &local_20);
      CDC::SelectObject((CDC *)&local_34,pCVar3);
      iVar5 = local_14 + local_20 + 3;
      CWindowDC::~CWindowDC((CWindowDC *)&local_34);
    }
  }
  iVar4 = GetSystemMetrics(0xf);
  if (iVar6 < iVar4) {
    iVar6 = GetSystemMetrics(0xf);
  }
  *(int *)(param_1 + 0x10) = iVar6;
  *(int *)(param_1 + 0xc) = iVar5;
  FUN_10003460();
  return;
}

