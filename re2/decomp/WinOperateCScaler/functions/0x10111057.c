// rea decompile_all
// name: FUN_10111057
// address: 0x10111057
// body: available
// range: 0x10111057-0x101111ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10111057(void)

{
  POINT pt;
  POINT pt_00;
  char cVar1;
  CMFCRibbonBaseElement *pCVar2;
  int iVar3;
  BOOL BVar4;
  int in_ECX;
  int iVar5;
  tagPOINT local_24;
  float local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  cVar1 = '\0';
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetWindowRect(*(HWND *)(in_ECX + 0x20),&local_18);
  local_24.x = 0;
  local_24.y = 0;
  GetCursorPos(&local_24);
  pCVar2 = CMFCRibbonPanel::GetDroppedDown(*(CMFCRibbonPanel **)(in_ECX + 0x201c));
  if (((pCVar2 == (CMFCRibbonBaseElement *)0x0) && (iVar3 = FUN_100dbf78(), iVar3 == 0)) &&
     (pCVar2 = CMFCRibbonPanel::GetPressed(*(CMFCRibbonPanel **)(in_ECX + 0x201c)),
     pCVar2 == (CMFCRibbonBaseElement *)0x0)) {
    pt.y = local_24.y;
    pt.x = local_24.x;
    BVar4 = PtInRect(&local_18,pt);
    if (BVar4 == 0) {
      if (*(int *)(in_ECX + 0x204c) == 0) {
        iVar5 = 0;
        iVar3 = 0;
        if (local_24.x < local_18.left) {
          iVar5 = local_18.left - local_24.x;
        }
        else if (local_18.right < local_24.x) {
          iVar5 = local_24.x - local_18.right;
        }
        if (local_24.y < local_18.top) {
          iVar3 = local_18.top - local_24.y;
        }
        else if (local_18.bottom < local_24.y) {
          iVar3 = local_24.y - local_18.bottom;
        }
        if (iVar3 < iVar5) {
          iVar3 = iVar5;
        }
        local_1c = (float)((-(uint)(*(int *)(in_ECX + 0x2048) != 0) & 0x2c) + 0x16);
        if ((int)((-(uint)(*(int *)(in_ECX + 0x2048) != 0) & 0x84) + 0x2c) < iVar3) {
          PostMessageW(*(HWND *)(in_ECX + 0x20),0x10,0,0);
          goto LAB_101111f0;
        }
        if (iVar3 < (int)local_1c) {
          local_1c = (((float)(int)local_1c - (float)iVar3) / (float)(int)local_1c) * 255.0;
          cVar1 = FUN_10154930();
        }
        goto LAB_101111df;
      }
    }
    else {
      *(undefined4 *)(in_ECX + 0x204c) = 0;
      *(undefined4 *)(in_ECX + 0x2048) = 1;
    }
    cVar1 = -1;
  }
  else {
    cVar1 = -1;
    if ((*(int *)(in_ECX + 0x204c) != 0) &&
       (pt_00.y = local_24.y, pt_00.x = local_24.x, BVar4 = PtInRect(&local_18,pt_00), BVar4 != 0))
    {
      *(undefined4 *)(in_ECX + 0x204c) = 0;
    }
  }
LAB_101111df:
  if (*(char *)(in_ECX + 0x2044) != cVar1) {
    *(char *)(in_ECX + 0x2044) = cVar1;
  }
LAB_101111f0:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

