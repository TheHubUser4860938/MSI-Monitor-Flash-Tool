// rea decompile_all
// name: ParseControlRendererInfo
// address: 0x100ae4c4
// body: available
// range: 0x100ae4c4-0x100ae6db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: static int __stdcall CTagManager::ParseControlRendererInfo(class
   ATL::CStringT<char,class StrTraitMFC<char,class ATL::ChTraitsCRT<char> > > const &,class
   CMFCControlRendererInfo &)
    public: static int __stdcall CTagManager::ParseControlRendererInfo(class
   ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > > const &,class
   CMFCControlRendererInfo &)
   
   Library: Visual Studio 2015 Release */

void ParseControlRendererInfo(undefined4 *param_1,CMFCControlRendererInfo *param_2)

{
  undefined4 uVar1;
  int iVar2;
  BOOL BVar3;
  LONG local_80;
  LONG local_7c;
  CTagManager local_78 [8];
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> local_70 [4];
  CMFCControlRendererInfo *local_6c;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> local_68 [4];
  CMFCControlRendererInfo local_64 [8];
  RECT local_5c;
  CRect local_4c [16];
  CRect local_3c [16];
  CRect local_2c [16];
  ulong local_1c;
  int local_18 [4];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x80;
  local_8 = 0x100ae4d3;
  local_6c = param_2;
  CTagManager::CTagManager(local_78,(wchar_t *)*param_1);
  local_8 = 0;
  CMFCControlRendererInfo::CMFCControlRendererInfo(local_64);
  local_8._0_1_ = 1;
  uVar1 = GetResourceID();
  SetResourceID(uVar1);
  FUN_10047180(PTR_u_RECT_1023d6c8);
  local_8._0_1_ = 2;
  iVar2 = CTagManager::ReadRect(local_78,local_70,(CRect *)&local_5c);
  local_8._0_1_ = 1;
  FUN_100476d0();
  if (iVar2 == 0) {
    local_80 = 0;
    local_7c = 0;
    FUN_10047180(PTR_u_SIZE_1023d6c4);
    local_8._0_1_ = 3;
    iVar2 = CTagManager::ReadSize(local_78,local_68,(CSize *)&local_80);
    local_8._0_1_ = 1;
    FUN_100476d0();
    param_2 = local_6c;
    if (iVar2 != 0) {
      local_5c.left = 0;
      local_5c.top = 0;
      local_5c.right = local_80;
      local_5c.bottom = local_7c;
    }
  }
  BVar3 = IsRectEmpty(&local_5c);
  if (BVar3 == 0) {
    FUN_10047180(PTR_u_CORNERS_1023d728);
    local_8._0_1_ = 4;
    CTagManager::ReadRect
              (local_78,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                        &local_6c,local_4c);
    local_8._0_1_ = 1;
    FUN_100476d0();
    FUN_10047180(PTR_u_SIDES_1023d72c);
    local_8._0_1_ = 5;
    CTagManager::ReadRect(local_78,local_68,local_3c);
    local_8._0_1_ = 1;
    FUN_100476d0();
    FUN_10047180(PTR_u_INTERIOR_1023d730);
    local_8._0_1_ = 6;
    CTagManager::ReadRect
              (local_78,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                        &local_6c,local_2c);
    local_8._0_1_ = 1;
    FUN_100476d0();
    FUN_10047180(PTR_u_TRANSPARENT_1023d734);
    local_8._0_1_ = 7;
    CTagManager::ReadColor(local_78,local_68,&local_1c);
    local_8._0_1_ = 1;
    FUN_100476d0();
    FUN_10047180(PTR_u_PREMLTCHECK_1023d738);
    local_8._0_1_ = 8;
    CTagManager::ReadBool(local_78,local_70,local_18);
    local_8._0_1_ = 1;
    FUN_100476d0();
    CMFCControlRendererInfo::operator=(param_2,local_64);
  }
  FUN_10137c13();
  CTagManager::~CTagManager(local_78);
  FUN_1018015d();
  return;
}

