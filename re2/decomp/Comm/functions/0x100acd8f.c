// rea decompile_all
// name: CDockingManager::FrameFromPoint
// address: 0x100acd8f
// body: available
// range: 0x100acd8f-0x100ace42 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual class CPaneFrameWnd * __thiscall CDockingManager::FrameFromPoint(class
   CPoint,class CPaneFrameWnd *,int)const 
   
   Library: Visual Studio 2015 Release */

CPaneFrameWnd * __thiscall
CDockingManager::FrameFromPoint
          (CDockingManager *this,LONG param_2,LONG param_3,CObject *param_4,int param_5)

{
  POINT pt;
  CObject *pCVar1;
  BOOL BVar2;
  int iVar3;
  CPaneFrameWnd *pCVar4;
  int local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  local_1c = *(int *)(this + 0xcc);
  do {
    do {
      if (local_1c == 0) goto LAB_100ace2c;
      pCVar1 = (CObject *)FUN_1005f4c2(&local_1c);
      pCVar1 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneFrameWnd_101d38dc,pCVar1);
      BVar2 = IsWindowVisible(*(HWND *)(pCVar1 + 0x20));
    } while (((BVar2 == 0) || (pCVar1 == param_4)) ||
            ((iVar3 = FUN_10019d4f(&PTR_s_CMultiPaneFrameWnd_101d3950), iVar3 == 0 && (param_5 != 0)
             )));
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetWindowRect(*(HWND *)(pCVar1 + 0x20),&local_18);
    pt.y = param_3;
    pt.x = param_2;
    BVar2 = PtInRect(&local_18,pt);
  } while (BVar2 == 0);
LAB_100ace2c:
  pCVar4 = (CPaneFrameWnd *)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return pCVar4;
}

