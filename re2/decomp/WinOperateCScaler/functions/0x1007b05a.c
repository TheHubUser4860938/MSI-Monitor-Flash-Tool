// rea decompile_all
// name: CMFCTabCtrl::Create
// address: 0x1007b05a
// body: available
// range: 0x1007b05a-0x1007b15c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: int __thiscall CMFCTabCtrl::Create(enum CMFCTabCtrl::Style,struct tagRECT const &,class
   CWnd *,unsigned int,enum CMFCBaseTabCtrl::Location,int)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCTabCtrl::Create(CMFCTabCtrl *this,Style param_1,tagRECT *param_2,CWnd *param_3,uint param_4,
                   Location param_5,int param_6)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  wchar_t *pwVar6;
  uint local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x1007b066;
  iVar4 = 1;
  iVar3 = iVar4;
  if ((param_1 != 1) && (param_1 != 2)) {
    iVar3 = 0;
  }
  *(int *)(this + 0x250) = iVar3;
  *(uint *)(this + 0x260) = (uint)(param_1 == 2);
  local_14[0] = (uint)(param_1 == 4);
  *(uint *)(this + 0x254) = local_14[0];
  *(uint *)(this + 600) = (uint)(param_1 == 5);
  iVar1 = iVar4;
  if ((param_1 != 6) && (param_1 != 7)) {
    iVar1 = 0;
  }
  *(int *)(this + 0x25c) = iVar1;
  *(uint *)(this + 0x88) = local_14[0];
  *(Location *)(this + 0x90) = param_5;
  if ((((iVar3 == 0) && (param_1 != 3)) && (param_1 != 4)) && ((param_1 != 5 && (param_1 != 7)))) {
    iVar4 = 0;
  }
  *(int *)(this + 0x264) = iVar4;
  *(int *)(this + 0x268) = param_6;
  if ((iVar3 == 0) && ((param_1 == 2) != 0)) {
    *(undefined4 *)(this + 0x260) = 0;
  }
  puVar5 = local_14;
  pwVar6 = L"Afx:TabWnd";
  GetGlobalData();
  puVar2 = (undefined4 *)RegisterWindowClass(puVar5,pwVar6);
  local_8 = 0;
  iVar3 = ::Create(*puVar2,&DAT_101a63a8,0x56000000,param_2,param_3,param_4,0);
  ATL::CStringData::Release((CStringData *)(local_14[0] - 0x10));
  return iVar3;
}

