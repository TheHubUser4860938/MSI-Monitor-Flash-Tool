// rea decompile_all
// name: CPropertySheet::HandleInitDialog
// address: 0x10062ac6
// body: available
// range: 0x10062ac6-0x10062c4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: long __thiscall CPropertySheet::HandleInitDialog(unsigned int,long)
   
   Library: Visual Studio 2015 Release */

long __thiscall CPropertySheet::HandleInitDialog(CPropertySheet *this,uint param_1,long param_2)

{
  code *pcVar1;
  HWND__ *pHVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  AFX_DYNAMIC_LAYOUT_ITEM *pAVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  CObject *pCVar10;
  long lVar11;
  UINT uCmd;
  undefined1 local_4c [16];
  undefined1 local_3c [8];
  undefined1 local_34 [16];
  undefined4 local_24;
  HWND__ *local_20;
  CMFCDynamicLayout *local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  pcVar1 = *(code **)(*(int *)this + 0x16c);
  guard_check_icall();
  local_24 = (*pcVar1)();
  local_1c = *(CMFCDynamicLayout **)(this + 0x58);
  if (local_1c != (CMFCDynamicLayout *)0x0) {
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetWindowRect(*(HWND *)(this + 0x20),&local_18);
    uCmd = 5;
    pHVar3 = *(HWND *)(this + 0x20);
    *(LONG *)(this + 0xd8) = local_18.right - local_18.left;
    *(LONG *)(this + 0xdc) = local_18.bottom - local_18.top;
    while( true ) {
      pHVar3 = GetWindow(pHVar3,uCmd);
      pCVar4 = CWnd::FromHandle(pHVar3);
      if ((pCVar4 == (CWnd *)0x0) ||
         (pHVar2 = *(HWND__ **)(pCVar4 + 0x20), local_20 = pHVar2, pHVar2 == (HWND__ *)0x0)) break;
      pAVar5 = CMFCDynamicLayout::FindItem(local_1c,pHVar2);
      if (pAVar5 == (AFX_DYNAMIC_LAYOUT_ITEM *)0x0) {
        uVar6 = SendMessageW(*(HWND *)(pCVar4 + 0x20),0x87,0,0);
        if ((uVar6 & 0x2000) == 0) {
          pcVar1 = *(code **)(*(int *)this + 0x174);
          guard_check_icall(pHVar2);
          iVar9 = (*pcVar1)();
          if (iVar9 == 0) {
            pCVar10 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPropertyPage_101b5820,
                                         (CObject *)pCVar4);
            if (pCVar10 != (CObject *)0x0) {
              pcVar1 = *(code **)(*(int *)this + 0x178);
              guard_check_icall();
              iVar9 = (*pcVar1)();
              if (iVar9 == 0) goto LAB_10062c2a;
            }
            puVar7 = (undefined4 *)CMFCDynamicLayout::SizeHorizontalAndVertical((int)local_4c,100);
            puVar8 = (undefined4 *)CMFCDynamicLayout::MoveNone();
          }
          else {
            puVar7 = (undefined4 *)CMFCDynamicLayout::SizeVertical((int)local_3c);
            puVar8 = (undefined4 *)CMFCDynamicLayout::MoveNone();
          }
        }
        else {
          puVar7 = (undefined4 *)CMFCDynamicLayout::MoveNone();
          puVar8 = (undefined4 *)CMFCDynamicLayout::SizeHorizontalAndVertical((int)local_34,100);
        }
        CMFCDynamicLayout::AddItem(local_1c,local_20,*puVar8,puVar8[1],*puVar7,puVar7[1]);
      }
LAB_10062c2a:
      uCmd = 2;
      pHVar3 = *(HWND *)(pCVar4 + 0x20);
    }
  }
  lVar11 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return lVar11;
}

