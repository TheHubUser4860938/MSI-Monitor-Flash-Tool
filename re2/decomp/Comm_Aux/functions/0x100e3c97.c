// rea decompile_all
// name: CDockingManager::OnActivateFrame
// address: 0x100e3c97
// body: available
// range: 0x100e3c97-0x100e3e03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CDockingManager::OnActivateFrame(int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CDockingManager::OnActivateFrame(CDockingManager *this,int param_1)

{
  CDockingManager *hWnd;
  code *pcVar1;
  int iVar2;
  BOOL BVar3;
  CWnd *pCVar4;
  undefined4 *puVar5;
  CObject *pCVar6;
  __POSITION *p_Var7;
  HWND hWnd_00;
  CObject *local_10;
  CDockingManager *local_c;
  HWND local_8;
  
  if (*(int *)(this + 0xe4) != 0) {
    local_c = this;
    iVar2 = FUN_1004e58b(&PTR_s_CMDIChildWndEx_101c65bc);
    if (param_1 == 0) {
      local_10 = *(CObject **)(this + 0xcc);
joined_r0x100e3d41:
      if (local_10 != (CObject *)0x0) {
        puVar5 = (undefined4 *)FUN_10034920(&local_10);
        pCVar6 = (CObject *)*puVar5;
        if (pCVar6 == (CObject *)0x0) {
          hWnd_00 = (HWND)0x0;
        }
        else {
          hWnd_00 = *(HWND *)(pCVar6 + 0x20);
        }
        local_8 = hWnd_00;
        BVar3 = IsWindow(hWnd_00);
        if ((BVar3 != 0) && (BVar3 = IsWindowVisible(hWnd_00), BVar3 != 0)) {
          if (iVar2 == 0) {
            pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneFrameWnd_10205d4c,pCVar6);
            pcVar1 = *(code **)(*(int *)pCVar6 + 0x1a8);
            guard_check_icall();
            pCVar6 = (CObject *)(*pcVar1)();
            pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCBaseToolBar_101bb650,pCVar6);
            hWnd_00 = local_8;
            this = local_c;
            if (pCVar6 == (CObject *)0x0) goto joined_r0x100e3d41;
          }
          ShowWindow(hWnd_00,0);
          p_Var7 = CList<HWND__*,HWND__*&>::Find
                             ((CList<HWND__*,HWND__*&> *)(this + 0x164),&local_8,(__POSITION *)0x0);
          if (p_Var7 == (__POSITION *)0x0) {
            CList<unsigned_int,unsigned_int&>::AddTail
                      ((CList<unsigned_int,unsigned_int&> *)(this + 0x164),(uint *)&local_8);
          }
        }
        goto joined_r0x100e3d41;
      }
    }
    else {
      puVar5 = *(undefined4 **)(this + 0x168);
      while (puVar5 != (undefined4 *)0x0) {
        hWnd = (CDockingManager *)puVar5[2];
        puVar5 = (undefined4 *)*puVar5;
        local_c = hWnd;
        BVar3 = IsWindow((HWND)hWnd);
        if (BVar3 != 0) {
          pCVar4 = CWnd::FromHandle((HWND__ *)hWnd);
          local_10 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneFrameWnd_10205d4c,
                                        (CObject *)pCVar4);
          if (local_10 != (CObject *)0x0) {
            pcVar1 = *(code **)(*(int *)local_10 + 0x1a0);
            guard_check_icall();
            iVar2 = (*pcVar1)();
            if (0 < iVar2) {
              ShowWindow((HWND)local_c,4);
            }
          }
        }
      }
      CList<tagPOINT,tagPOINT>::RemoveAll((CList<tagPOINT,tagPOINT> *)(this + 0x164));
    }
  }
  return;
}

