// rea decompile_all
// name: CMFCToolBarsCustomizeDialog::~CMFCToolBarsCustomizeDialog
// address: 0x100f5a14
// body: available
// range: 0x100f5a14-0x100f5c46 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual __thiscall CMFCToolBarsCustomizeDialog::~CMFCToolBarsCustomizeDialog(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCToolBarsCustomizeDialog::~CMFCToolBarsCustomizeDialog(CMFCToolBarsCustomizeDialog *this)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int *local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = ExceptionList;
  local_8 = 0xffffffff;
  puStack_c = &LAB_1019f30a;
  uVar3 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined ***)this = vftable;
  local_18 = -(uint)(*(int *)(this + 0xec) != 0);
  while (local_18 != 0) {
    uVar4 = FUN_1001e20a(uVar3);
    FUN_1001d224(uVar4);
    FUN_100f6a46(&local_18,&local_14,&local_1c);
    piVar6 = local_1c;
    while (piVar6[3] != 0) {
      piVar5 = (int *)FUN_100350dd();
      if (piVar5 != (int *)0x0) {
        pcVar1 = *(code **)(*piVar5 + 4);
        guard_check_icall(1);
        (*pcVar1)();
      }
    }
    pcVar1 = *(code **)(*piVar6 + 4);
    guard_check_icall(1);
    (*pcVar1)();
    ATL::CStringData::Release((CStringData *)(local_14 + -0x10));
  }
  CMap<ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>,wchar_t_const*,CDocument*,CDocument*>
  ::RemoveAll((CMap<ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>,wchar_t_const*,CDocument*,CDocument*>
               *)(this + 0xe0));
  if (*(int **)(this + 0x118) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(this + 0x118) + 4);
    guard_check_icall(1);
    (*pcVar1)();
  }
  if (*(int **)(this + 0x11c) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(this + 0x11c) + 4);
    guard_check_icall(1);
    (*pcVar1)();
  }
  if (*(int **)(this + 0x120) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(this + 0x120) + 4);
    guard_check_icall(1);
    (*pcVar1)();
  }
  if (*(int **)(this + 0x124) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(this + 0x124) + 4);
    guard_check_icall(1);
    (*pcVar1)();
  }
  if (*(int **)(this + 0x128) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(this + 0x128) + 4);
    guard_check_icall(1);
    (*pcVar1)();
  }
  if (*(int **)(this + 300) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(this + 300) + 4);
    guard_check_icall(1);
    (*pcVar1)();
  }
  if (*(int **)(this + 0x130) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(this + 0x130) + 4);
    guard_check_icall(1);
    (*pcVar1)();
  }
  iVar2 = *(int *)(this + 0x140);
  while (iVar2 != 0) {
    piVar6 = (int *)FUN_100f6fcb();
    if (piVar6 != (int *)0x0) {
      pcVar1 = *(code **)(*piVar6 + 4);
      guard_check_icall(1);
      (*pcVar1)();
    }
    iVar2 = *(int *)(this + 0x140);
  }
  CMFCButton::~CMFCButton((CMFCButton *)(this + 0x168));
  ATL::CStringData::Release((CStringData *)(*(int *)(this + 0x150) + -0x10));
  local_8 = 0;
  *(undefined ***)(this + 0x134) = CList<CPropertyPage*,CPropertyPage*>::vftable;
  CList<tagPOINT,tagPOINT>::RemoveAll((CList<tagPOINT,tagPOINT> *)(this + 0x134));
  CStringList::~CStringList((CStringList *)(this + 0xfc));
  local_8 = 1;
  *(undefined ***)(this + 0xe0) =
       CMap<ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>,wchar_t_const*,CObList*,CObList*>
       ::vftable;
  CMap<ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>,wchar_t_const*,CDocument*,CDocument*>
  ::RemoveAll((CMap<ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>,wchar_t_const*,CDocument*,CDocument*>
               *)(this + 0xe0));
  CPropertySheet::~CPropertySheet((CPropertySheet *)this);
  ExceptionList = local_10;
  return;
}

