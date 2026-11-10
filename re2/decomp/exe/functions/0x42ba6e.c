// rea decompile_all
// name: FUN_0042ba6e
// address: 0x42ba6e
// body: available
// range: 0x42ba6e-0x42bba5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42bba1 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042ba6e(void)

{
  byte bVar1;
  ushort uVar2;
  LONG LVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  byte *pbVar8;
  int local_94;
  int local_90;
  undefined1 local_88 [128];
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  LVar3 = GetMenuCheckMarkDimensions();
  local_94 = (int)(short)LVar3;
  local_90 = (int)(short)((uint)LVar3 >> 0x10);
  if ((4 < local_94) && (5 < local_90)) {
    if (0x20 < local_94) {
      local_94 = 0x20;
    }
    iVar4 = local_94 + 0xf >> 4;
    iVar6 = ((local_94 + -4) / 2 + iVar4 * 0x10) - local_94;
    if (0xc < iVar6) {
      iVar6 = 0xc;
    }
    if (0x20 < local_90) {
      local_90 = 0x20;
    }
    _memset(local_88,0xff,0x80);
    pbVar8 = &DAT_005b0d34;
    iVar5 = 5;
    puVar7 = local_88 + (local_90 + -6 >> 1) * iVar4 * 2;
    do {
      bVar1 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      uVar2 = ~((ushort)bVar1 << ((byte)iVar6 & 0x1f));
      puVar7[1] = (char)uVar2;
      *puVar7 = (char)(uVar2 >> 8);
      puVar7 = puVar7 + iVar4 * 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    DAT_00616208 = CreateBitmap(local_94,local_90,1,1,local_88);
    if (DAT_00616208 == (HBITMAP)0x0) {
      DAT_00616208 = LoadBitmapW((HINSTANCE)0x0,(LPCWSTR)0x7fe3);
    }
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00429127();
}

