// rea decompile_all
// name: COccManager::CreateDlgControls
// address: 0x417ed9
// body: available
// range: 0x417ed9-0x41806e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00417fcc) */
/* Library Function - Single Match
    public: virtual int __thiscall COccManager::CreateDlgControls(class CWnd *,void *,struct
   _AFX_OCC_DIALOG_INFO *)
   
   Library: Visual Studio 2015 Release */

int __thiscall
COccManager::CreateDlgControls
          (COccManager *this,CWnd *param_1,void *param_2,_AFX_OCC_DIALOG_INFO *param_3)

{
  ushort uVar1;
  int iVar2;
  ulong uVar3;
  DLGITEMTEMPLATE *pDVar4;
  HWND hWnd;
  int iVar5;
  int iVar6;
  HWND pHVar7;
  HWND hWnd_00;
  int local_14;
  HWND__ *local_10;
  int local_c;
  HWND local_8;
  
  hWnd = (HWND)0x0;
  if (*(int *)param_3 == 0) {
    iVar5 = 1;
  }
  else {
    if (param_1 != (CWnd *)0x0) {
      hWnd = *(HWND *)(param_1 + 0x20);
    }
    iVar5 = IsDialogEx(*(DLGTEMPLATE **)param_3);
    local_c = 1;
    if (param_2 != (void *)0x0) {
      iVar2 = *(int *)(param_3 + 4);
      hWnd_00 = (HWND)0x0;
      local_14 = 0;
      local_8 = (HWND)0x0;
      do {
        if (*(short *)param_2 == 0) break;
        uVar3 = *(ulong *)((int)param_2 + 4);
        uVar1 = *(ushort *)((int)param_2 + 2);
        local_10 = (HWND__ *)(uint)uVar1;
        if ((((uVar1 == 0x376) || (uVar1 == 0x37a)) || (uVar1 == 0x377)) ||
           ((uVar1 == 0x37b || (uVar1 == 0x378)))) {
          pDVar4 = *(DLGITEMTEMPLATE **)(iVar2 + local_14 * 4);
          pHVar7 = local_10;
          while (pDVar4 == (DLGITEMTEMPLATE *)0x0) {
            local_14 = local_14 + 1;
            local_10 = pHVar7;
            if (hWnd_00 == (HWND)0x0) {
              hWnd_00 = GetWindow(hWnd,5);
            }
            else {
              hWnd_00 = GetWindow(hWnd_00,2);
            }
            pHVar7 = local_10;
            local_8 = hWnd_00;
            pDVar4 = *(DLGITEMTEMPLATE **)(iVar2 + local_14 * 4);
          }
          local_14 = local_14 + 1;
          local_10 = (HWND)0x0;
          if ((pDVar4 == (DLGITEMTEMPLATE *)0xffffffff) ||
             (iVar6 = CreateDlgControl(this,param_1,hWnd_00,iVar5,pDVar4,(ushort)pHVar7,
                                       (uchar *)((int)param_2 + 8),uVar3,&local_10), iVar6 == 0)) {
            local_c = 0;
            hWnd_00 = local_8;
          }
          else {
            hWnd_00 = local_8;
            if (local_10 != (HWND)0x0) {
              if (iVar5 != 0) {
                SetWindowContextHelpId(local_10,*(DWORD *)pDVar4);
              }
              pHVar7 = GetParent(local_10);
              hWnd_00 = local_8;
              if (pHVar7 == hWnd) {
                local_8 = local_10;
                hWnd_00 = local_10;
              }
            }
          }
        }
        param_2 = (void *)((int)((int)param_2 + 8) + uVar3);
      } while (local_c != 0);
      if (local_c == 0) {
        return 0;
      }
    }
    iVar5 = local_c;
    if (*(COleControlContainer **)(param_1 + 0x70) != (COleControlContainer *)0x0) {
      COleControlContainer::FreezeAllEvents(*(COleControlContainer **)(param_1 + 0x70),0);
    }
    BindControls(this,param_1);
  }
  return iVar5;
}

