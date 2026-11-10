// rea decompile_all
// name: COleDataSource::DoDragDrop
// address: 0x4e4b13
// body: available
// range: 0x4e4b13-0x4e4c02 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: unsigned long __thiscall COleDataSource::DoDragDrop(unsigned long,struct tagRECT const
   *,class COleDropSource *)
   
   Library: Visual Studio 2015 Release */

ulong __thiscall
COleDataSource::DoDragDrop
          (COleDataSource *this,ulong param_1,tagRECT *param_2,COleDropSource *param_3)

{
  int iVar1;
  BOOL BVar2;
  CWnd *pCVar3;
  LPDATAOBJECT pDataObj;
  LPDROPSOURCE pDropSource;
  ulong uVar4;
  RECT *lprc;
  DWORD local_60;
  tagPOINT local_5c;
  COleDropSource local_54 [76];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x58;
  local_8 = 0x4e4b1f;
  COleDropSource::COleDropSource(local_54);
  local_8 = 0;
  if (param_3 == (COleDropSource *)0x0) {
    param_3 = local_54;
  }
  *(undefined4 *)(param_3 + 0x34) = 0;
  if (param_2 == (tagRECT *)0x0) {
    local_5c.x = 0;
    local_5c.y = 0;
    GetCursorPos(&local_5c);
    SetRect((LPRECT)(param_3 + 0x24),local_5c.x,local_5c.y,local_5c.x,local_5c.y);
  }
  else {
    CopyRect((LPRECT)(param_3 + 0x24),param_2);
  }
  lprc = (RECT *)(param_3 + 0x24);
  iVar1 = CRect::IsRectNull((CRect *)lprc);
  if (iVar1 == 0) {
    BVar2 = IsRectEmpty(lprc);
    if (BVar2 != 0) {
      InflateRect(lprc,DAT_00616f90,DAT_00616f90);
    }
  }
  else {
    *(undefined4 *)(param_3 + 0x34) = 1;
  }
  iVar1 = *(int *)param_3;
  pCVar3 = AfxGetMainWnd();
  guard_check_icall(pCVar3);
  iVar1 = (**(code **)(iVar1 + 0x58))();
  if (iVar1 != 0) {
    pDataObj = (LPDATAOBJECT)CCmdTarget::GetInterface((CCmdTarget *)this,&DAT_005dba90);
    pDropSource = (LPDROPSOURCE)CCmdTarget::GetInterface((CCmdTarget *)param_3,&DAT_005db9f0);
    local_60 = 0;
    ::DoDragDrop(pDataObj,pDropSource,param_1,&local_60);
  }
  CCmdTarget::~CCmdTarget((CCmdTarget *)local_54);
  uVar4 = FUN_0055bae6();
  return uVar4;
}

