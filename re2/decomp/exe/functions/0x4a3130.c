// rea decompile_all
// name: CMFCMenuBar::GetRowHeight
// address: 0x4a3130
// body: available
// range: 0x4a3130-0x4a31fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCMenuBar::GetRowHeight(void)const 
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCMenuBar::GetRowHeight(CMFCMenuBar *this)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  AFX_GLOBAL_DATA *pAVar4;
  int iVar5;
  
  if (*(int *)(this + 0xd74) == 0) {
    iVar2 = DAT_0060c52c;
    if (DAT_0060c52c < 1) {
      iVar2 = DAT_0060c51c;
    }
    iVar2 = iVar2 + -2;
  }
  else {
    iVar2 = CMFCToolBar::GetButtonSize((CMFCToolBar *)this);
    iVar2 = *(int *)(iVar2 + 4);
  }
  pcVar1 = *(code **)(*(int *)this + 0x194);
  guard_check_icall();
  uVar3 = (*pcVar1)();
  pAVar4 = GetGlobalData();
  if ((uVar3 & 0xa000) == 0) {
    iVar5 = *(int *)(pAVar4 + 0x1d0);
  }
  else {
    iVar5 = *(int *)(pAVar4 + 0x1cc);
  }
  if (iVar2 < iVar5) {
    pcVar1 = *(code **)(*(int *)this + 0x194);
    guard_check_icall();
    uVar3 = (*pcVar1)();
    pAVar4 = GetGlobalData();
    if ((uVar3 & 0xa000) == 0) {
      iVar2 = *(int *)(pAVar4 + 0x1d0);
    }
    else {
      iVar2 = *(int *)(pAVar4 + 0x1cc);
    }
  }
  else if (*(int *)(this + 0xd74) == 0) {
    iVar2 = DAT_0060c52c;
    if (DAT_0060c52c < 1) {
      iVar2 = DAT_0060c51c;
    }
    iVar2 = iVar2 + -2;
  }
  else {
    iVar2 = CMFCToolBar::GetButtonSize((CMFCToolBar *)this);
    iVar2 = *(int *)(iVar2 + 4);
  }
  return iVar2;
}

