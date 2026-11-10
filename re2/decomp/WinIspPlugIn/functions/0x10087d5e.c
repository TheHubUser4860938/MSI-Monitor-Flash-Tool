// rea decompile_all
// name: FID_conflict:ExtractIconW
// address: 0x10087d5e
// body: available
// range: 0x10087d5e-0x10087e48 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Different Base Names
    public: struct HICON__ * __thiscall CMFCToolBarImages::ExtractIconA(int)
    public: struct HICON__ * __thiscall CMFCToolBarImages::ExtractIconW(int)
   
   Library: Visual Studio 2015 Release */

HICON FID_conflict_ExtractIconW(HINSTANCE hInst,LPCWSTR lpszExeFileName,UINT nIconIndex)

{
  AFX_GLOBAL_DATA *pAVar1;
  CGdiObject *pCVar2;
  undefined4 uVar3;
  HICON pHVar4;
  int in_ECX;
  uint uVar5;
  int iVar6;
  CImageList local_1c [4];
  undefined4 local_18;
  HANDLE local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x10087d6a;
  if (((int)hInst < 0) || (*(int *)(in_ECX + 4) <= (int)hInst)) {
    pHVar4 = (HICON)0x0;
  }
  else {
    iVar6 = *(int *)(in_ECX + 8);
    if (iVar6 == 8) {
      uVar5 = 9;
    }
    else if (iVar6 == 0x10) {
      uVar5 = 0x11;
    }
    else if (iVar6 == 0x18) {
      uVar5 = 0x19;
    }
    else if (iVar6 == 0x20) {
      uVar5 = 0x20;
    }
    else {
      uVar5 = iVar6 != 0x20 | 4;
    }
    CImageList::CImageList(local_1c);
    local_8 = 0;
    CImageList::Create(local_1c,*(int *)(in_ECX + 0x54),*(int *)(in_ECX + 0x58),uVar5,0,0);
    local_14[0] = CopyImage(*(HANDLE *)(in_ECX + 0x8c),0,0,0,0x2000);
    iVar6 = *(int *)(in_ECX + 0xa8);
    if (iVar6 == -1) {
      pAVar1 = GetGlobalData();
      iVar6 = *(int *)(pAVar1 + 0x1c);
    }
    pCVar2 = CGdiObject::FromHandle(local_14[0]);
    if (pCVar2 == (CGdiObject *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(pCVar2 + 4);
    }
    _IsolationAwareImageList_AddMasked_12(local_18,uVar3,iVar6);
    FUN_1005ba69(local_14);
    pHVar4 = (HICON)_IsolationAwareImageList_GetIcon_12(local_18,hInst,0);
    CImageList::~CImageList(local_1c);
  }
  return pHVar4;
}

