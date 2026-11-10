// rea decompile_all
// name: ParseToolTipInfo
// address: 0x100ae4e0
// body: available
// range: 0x100ae4e0-0x100ae761 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: static int __stdcall CTagManager::ParseToolTipInfo(class ATL::CStringT<char,class
   StrTraitMFC<char,class ATL::ChTraitsCRT<char> > > const &,class CMFCToolTipInfo &)
    public: static int __stdcall CTagManager::ParseToolTipInfo(class ATL::CStringT<wchar_t,class
   StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > > const &,class CMFCToolTipInfo &)
   
   Library: Visual Studio 2015 Release */

undefined4 ParseToolTipInfo(undefined4 *param_1,CMFCToolTipInfo *param_2)

{
  CMFCToolTipInfo local_54 [4];
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40 [2];
  int local_38;
  int local_34;
  ulong local_30;
  ulong local_2c;
  ulong local_28;
  ulong local_24;
  CTagManager local_20 [8];
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> local_18 [4];
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> local_14 [12];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x44;
  local_8 = 0x100ae4ec;
  CTagManager::CTagManager(local_20,(wchar_t *)*param_1);
  local_8 = 0;
  CMFCToolTipInfo::CMFCToolTipInfo(local_54);
  FUN_100352e0(PTR_u_BALLON_10205bac);
  local_8._0_1_ = 1;
  CTagManager::ReadBool(local_20,local_14,(int *)local_54);
  local_8._0_1_ = 0;
  FUN_10034f00();
  FUN_100352e0(PTR_u_DRAW_ICON_10205bb0);
  local_8._0_1_ = 2;
  CTagManager::ReadBool(local_20,local_18,&local_50);
  local_8._0_1_ = 0;
  FUN_10034f00();
  FUN_100352e0(PTR_u_DRAW_DESCRIPTION_10205bb4);
  local_8._0_1_ = 3;
  CTagManager::ReadBool(local_20,local_14,&local_4c);
  local_8._0_1_ = 0;
  FUN_10034f00();
  FUN_100352e0(PTR_u_MAX_DESC_WIDTH_10205bbc);
  local_8._0_1_ = 4;
  CTagManager::ReadInt(local_20,local_18,&local_38);
  local_8._0_1_ = 0;
  FUN_10034f00();
  FUN_100352e0(PTR_u_ROUNDED_CORNERS_10205bc0);
  local_8._0_1_ = 5;
  CTagManager::ReadBool(local_20,local_14,&local_48);
  local_8._0_1_ = 0;
  FUN_10034f00();
  FUN_100352e0(PTR_u_BOLD_LABEL_10205bc4);
  local_8._0_1_ = 6;
  CTagManager::ReadBool(local_20,local_18,&local_44);
  local_8._0_1_ = 0;
  FUN_10034f00();
  FUN_100352e0(PTR_u_COLOR_FILL_10205bc8);
  local_8._0_1_ = 7;
  CTagManager::ReadColor(local_20,local_14,&local_30);
  local_8._0_1_ = 0;
  FUN_10034f00();
  FUN_100352e0(PTR_u_COLOR_FILLGRADIENT_10205bcc);
  local_8._0_1_ = 8;
  CTagManager::ReadColor(local_20,local_18,&local_2c);
  local_8._0_1_ = 0;
  FUN_10034f00();
  FUN_100352e0(PTR_u_GRADIENT_ANGLE_10205bd8);
  local_8._0_1_ = 9;
  CTagManager::ReadInt(local_20,local_14,&local_34);
  local_8._0_1_ = 0;
  FUN_10034f00();
  FUN_100352e0(PTR_u_COLOR_TEXT_10205bd0);
  local_8._0_1_ = 10;
  CTagManager::ReadColor(local_20,local_18,&local_28);
  local_8._0_1_ = 0;
  FUN_10034f00();
  FUN_100352e0(PTR_u_COLOR_BORDER_10205bd4);
  local_8._0_1_ = 0xb;
  CTagManager::ReadColor(local_20,local_14,&local_24);
  local_8._0_1_ = 0;
  FUN_10034f00();
  FUN_100352e0(PTR_u_DRAW_SEPARATOR_10205bb8);
  local_8 = CONCAT31(local_8._1_3_,0xc);
  CTagManager::ReadBool(local_20,local_18,local_40);
  FUN_10034f00();
  CMFCToolTipInfo::operator=(param_2,local_54);
  CTagManager::~CTagManager(local_20);
  return 1;
}

