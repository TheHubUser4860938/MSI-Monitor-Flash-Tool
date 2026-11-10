// rea decompile_all
// name: AfxMergeMenus
// address: 0x1001201e
// body: available
// range: 0x1001201e-0x10012289 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    struct HMENU__ * __stdcall AfxMergeMenus(struct HMENU__ *,struct HMENU__ *,long *,int,int)
   
   Library: Visual Studio 2015 Release */

HMENU__ * AfxMergeMenus(HMENU__ *param_1,HMENU__ *param_2,long *param_3,int param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  HMENU hMenu;
  UINT UVar3;
  int iVar4;
  AFX_MODULE_STATE *pAVar5;
  HMENU__ *pHVar6;
  UINT uPosition;
  WCHAR *lpNewItem;
  HMENU local_22c;
  UINT local_224;
  LPCWSTR local_21c;
  int local_218;
  WCHAR local_214 [262];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x230;
  local_8 = 0x1001202d;
  bVar1 = false;
  iVar2 = GetMenuItemCount(param_2);
  uPosition = 0;
  local_218 = 0;
  if (param_4 == 1) {
    uPosition = *param_3;
  }
  local_224 = 0;
  if (0 < iVar2) {
    do {
      hMenu = GetSubMenu(param_2,local_224);
      UVar3 = GetMenuState(param_2,local_224,0x400);
      if ((hMenu == (HMENU)0x0) && ((UVar3 & 0x800) != 0)) {
        param_3[param_4] = local_218;
        local_218 = 0;
        if (param_4 < 5) {
          uPosition = uPosition + param_3[param_4 + 1];
        }
        param_4 = param_4 + 2;
      }
      else {
        local_22c = (HMENU)0x0;
        if ((param_5 != 0) && ((param_4 == 5 && (param_3[5] == 1)))) {
          local_22c = GetSubMenu(param_1,uPosition);
        }
        iVar4 = GetMenuStringW(param_2,local_224,local_214,0x100,0x400);
        if (hMenu == (HMENU)0x0) {
          if (0 < iVar4) {
            lpNewItem = local_214;
            hMenu = (HMENU)GetMenuItemID(param_2,local_224);
            UVar3 = UVar3 | 0x400;
LAB_1001223d:
            InsertMenuW(param_1,uPosition,UVar3,(UINT_PTR)hMenu,lpNewItem);
            uPosition = uPosition + 1;
            local_218 = local_218 + 1;
          }
        }
        else if (local_22c == (HMENU)0x0) {
          iVar4 = GetMenuItemCount(hMenu);
          if (iVar4 != 0) {
            lpNewItem = local_214;
            UVar3 = UVar3 & 0xff | 0x410;
            goto LAB_1001223d;
          }
        }
        else {
          pAVar5 = AfxGetModuleState();
          FUN_100037c0(*(undefined4 *)(pAVar5 + 0x10));
          local_8 = 0;
          if (*(int *)(local_21c + -6) != 0) {
            ATL::CSimpleStringT<wchar_t,0>::AppendChar((CSimpleStringT<wchar_t,0> *)&local_21c,L' ')
            ;
          }
          ATL::CSimpleStringT<wchar_t,0>::Append((CSimpleStringT<wchar_t,0> *)&local_21c,local_214);
          AppendMenuW(local_22c,0x10,(UINT_PTR)hMenu,local_21c);
          param_3[param_4] = 0;
          param_3[param_4 + -1] = param_3[param_4 + -1] + 1;
          local_8 = 0xffffffff;
          bVar1 = true;
          FUN_10003460();
        }
      }
      local_224 = local_224 + 1;
    } while ((int)local_224 < iVar2);
    if (bVar1) goto LAB_10012209;
  }
  param_3[param_4] = local_218;
LAB_10012209:
  pHVar6 = (HMENU__ *)FUN_101490fe();
  return pHVar6;
}

