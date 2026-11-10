// rea decompile_all
// name: CMFCShellTreeCtrl::SelectPath
// address: 0x10042ba5
// body: available
// range: 0x10042ba5-0x10042e40 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: int __thiscall CMFCShellTreeCtrl::SelectPath(struct _ITEMIDLIST const *,int)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCShellTreeCtrl::SelectPath(CMFCShellTreeCtrl *this,_ITEMIDLIST *param_1,int param_2)

{
  bool bVar1;
  uint lParam;
  uint uVar2;
  _ITEMIDLIST *p_Var3;
  int iVar4;
  DWORD_PTR DVar5;
  LRESULT LVar6;
  undefined **local_5ac;
  undefined4 *local_5a8;
  undefined4 *local_590;
  undefined4 local_58c;
  LPCWSTR local_588;
  _ITEMIDLIST *local_584;
  uint local_580;
  SHFILEINFOW local_57c;
  SHFILEINFOW local_2c8;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x59c;
  local_8 = 0x10042bb4;
  local_58c = 0;
  if (param_1 != (_ITEMIDLIST *)0x0) {
    lParam = SendMessageW(*(HWND *)(this + 0x20),0x110a,0,0);
    SendMessageW(*(HWND *)(this + 0x20),0xb,0,0);
    uVar2 = CShellManager::GetItemCount(DAT_101dbc30,param_1);
    if (uVar2 != 0) {
      CList<_ITEMIDLIST*,_ITEMIDLIST*>::CList<_ITEMIDLIST*,_ITEMIDLIST*>
                ((CList<_ITEMIDLIST*,_ITEMIDLIST*> *)&local_5ac,10);
      local_8 = 0;
      p_Var3 = (_ITEMIDLIST *)FUN_10076063(param_1);
      CList<_ITEMIDLIST*,_ITEMIDLIST*>::AddHead
                ((CList<_ITEMIDLIST*,_ITEMIDLIST*> *)&local_5ac,p_Var3);
      while (iVar4 = FUN_10076197(param_1,&local_584), 0 < iVar4) {
        CList<_ITEMIDLIST*,_ITEMIDLIST*>::AddHead
                  ((CList<_ITEMIDLIST*,_ITEMIDLIST*> *)&local_5ac,local_584);
        param_1 = local_584;
      }
      while (local_5a8 != (undefined4 *)0x0) {
        local_588 = (LPCWSTR)local_5a8[2];
        local_590 = (undefined4 *)*local_5a8;
        if (lParam != 0) {
          LVar6 = SendMessageW(*(HWND *)(this + 0x20),0x110a,4,lParam);
          if (LVar6 == 0) {
            SendMessageW(*(HWND *)(this + 0x20),0x1102,2,lParam);
          }
          bVar1 = false;
          local_580 = SendMessageW(*(HWND *)(this + 0x20),0x110a,4,lParam);
          do {
            if (local_580 == 0) break;
            iVar4 = FUN_1004530c(local_580);
            if ((((iVar4 != 0) &&
                 (DVar5 = SHGetFileInfoW(*(LPCWSTR *)(iVar4 + 4),0,&local_57c,0x2b4,0x208),
                 DVar5 != 0)) &&
                (DVar5 = SHGetFileInfoW(local_588,0,&local_2c8,0x2b4,0x208), DVar5 != 0)) &&
               (iVar4 = lstrcmpiW(local_57c.szDisplayName,local_2c8.szDisplayName), iVar4 == 0)) {
              bVar1 = true;
              lParam = local_580;
            }
            local_580 = SendMessageW(*(HWND *)(this + 0x20),0x110a,1,local_580);
          } while (!bVar1);
          lParam = lParam & -(uint)bVar1;
        }
        FUN_100760f2(local_588);
        local_5a8 = local_590;
      }
      local_8 = 1;
      local_5ac = CList<_ITEMIDLIST*,_ITEMIDLIST*>::vftable;
      CList<tagPOINT,tagPOINT>::RemoveAll((CList<tagPOINT,tagPOINT> *)&local_5ac);
    }
    if (lParam != 0) {
      *(undefined4 *)(this + 0x84) = 1;
      SendMessageW(*(HWND *)(this + 0x20),0x110b,9,lParam);
      if ((param_2 != 0) &&
         (LVar6 = SendMessageW(*(HWND *)(this + 0x20),0x110a,4,lParam), LVar6 == 0)) {
        SendMessageW(*(HWND *)(this + 0x20),0x1102,2,lParam);
      }
      SendMessageW(*(HWND *)(this + 0x20),0x1114,0,lParam);
      *(undefined4 *)(this + 0x84) = 0;
      local_58c = 1;
    }
    SendMessageW(*(HWND *)(this + 0x20),0xb,1,0);
    RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x105);
  }
  iVar4 = FUN_101490fe();
  return iVar4;
}

