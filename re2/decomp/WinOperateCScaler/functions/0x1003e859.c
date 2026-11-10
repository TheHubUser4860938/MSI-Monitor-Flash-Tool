// rea decompile_all
// name: CMFCShellListCtrl::EnumObjects
// address: 0x1003e859
// body: available
// range: 0x1003e859-0x1003ea6a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Exceeded maximum restarts with more pending */
/* Library Function - Single Match
    protected: virtual long __thiscall CMFCShellListCtrl::EnumObjects(struct IShellFolder *,struct
   _ITEMIDLIST *)
   
   Library: Visual Studio 2015 Release */

long __thiscall
CMFCShellListCtrl::EnumObjects(CMFCShellListCtrl *this,IShellFolder *param_1,_ITEMIDLIST *param_2)

{
  IShellFolderVtbl *pIVar1;
  _func_12948 *p_Var2;
  code *pcVar3;
  _func_12931 *p_Var4;
  undefined4 *puVar5;
  _ITEMIDLIST *p_Var6;
  LRESULT LVar7;
  int iVar8;
  IEnumIDListVtbl *pIVar9;
  IShellFolder *pIVar10;
  HWND hwnd;
  UINT cidl;
  SHCONTF grfFlags;
  _ITEMIDLIST **apidl;
  IEnumIDList **ppenumIDList;
  SFGAOF *rgfInOut;
  uint local_70 [3];
  uint local_64;
  uint local_60;
  undefined *local_5c;
  undefined4 local_54;
  undefined4 *local_50;
  HRESULT local_34;
  LRESULT local_30;
  int local_2c;
  undefined4 *local_28;
  LRESULT local_24;
  SFGAOF local_20;
  IEnumIDList *local_1c;
  _ITEMIDLIST *local_18;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x60;
  local_8 = 0x1003e865;
  ppenumIDList = &local_1c;
  local_1c = (IEnumIDList *)0x0;
  grfFlags = *(SHCONTF *)(this + 0x15c);
  pIVar1 = param_1->lpVtbl;
  hwnd = (HWND)0x0;
  pIVar10 = param_1;
  guard_check_icall();
  local_34 = (*pIVar1->EnumObjects)(pIVar10,hwnd,grfFlags,ppenumIDList);
  if ((-1 < local_34) && (local_1c != (IEnumIDList *)0x0)) {
    local_14[0] = 1;
    pIVar9 = local_1c->lpVtbl;
    while( true ) {
      guard_check_icall(local_1c,1,&local_18,local_14);
      iVar8 = (*pIVar9->Next)();
      if ((iVar8 != 0) || (local_14[0] == 0)) break;
      _memset(local_70,0,0x3c);
      local_70[0] = 0xf;
      p_Var2 = param_1->lpVtbl->AddRef;
      pIVar10 = param_1;
      guard_check_icall();
      (*p_Var2)(pIVar10);
      puVar5 = GlobalAlloc(0x40,0xc);
      puVar5[2] = local_18;
      local_28 = puVar5;
      p_Var6 = CShellManager::ConcatenateItem(DAT_1020a990,param_2,local_18);
      puVar5[1] = p_Var6;
      *puVar5 = param_1;
      local_5c = &DAT_101a63a8;
      local_50 = puVar5;
      LVar7 = SendMessageW(*(HWND *)(this + 0x20),0x1004,0,0);
      pcVar3 = *(code **)(*(int *)this + 0x19c);
      guard_check_icall(LVar7,puVar5);
      local_54 = (*pcVar3)();
      pIVar1 = param_1->lpVtbl;
      rgfInOut = &local_20;
      apidl = &local_18;
      local_20 = 0xfc000;
      cidl = 1;
      pIVar10 = param_1;
      guard_check_icall();
      (*pIVar1->GetAttributesOf)(pIVar10,cidl,apidl,rgfInOut);
      if ((local_20 & 0x20000) != 0) {
        local_70[0] = local_70[0] | 8;
        local_60 = local_60 | 0xf00;
        local_64 = local_64 | 0x100;
      }
      if ((local_20 & 0x8000) != 0) {
        local_70[0] = local_70[0] | 8;
        local_60 = local_60 | 4;
        local_64 = local_64 | 4;
      }
      local_24 = SendMessageW(*(HWND *)(this + 0x20),0x104d,0,(LPARAM)local_70);
      if (-1 < local_24) {
        local_30 = SendMessageW(*(HWND *)(this + 0xa0),0x1200,0,0);
        iVar8 = 0;
        if (0 < local_30) {
          do {
            pcVar3 = *(code **)(*(int *)this + 0x198);
            guard_check_icall(&local_2c,local_24,iVar8,local_28);
            puVar5 = (undefined4 *)(*pcVar3)();
            local_8 = 0;
            CListCtrl::SetItemText((CListCtrl *)this,local_24,iVar8,(wchar_t *)*puVar5);
            local_8 = 0xffffffff;
            ATL::CStringData::Release((CStringData *)(local_2c + -0x10));
            iVar8 = iVar8 + 1;
          } while (iVar8 < local_30);
        }
      }
      local_14[0] = 0;
      pIVar9 = local_1c->lpVtbl;
    }
    p_Var4 = local_1c->lpVtbl->Release;
    guard_check_icall(local_1c);
    (*p_Var4)();
  }
  return local_34;
}

