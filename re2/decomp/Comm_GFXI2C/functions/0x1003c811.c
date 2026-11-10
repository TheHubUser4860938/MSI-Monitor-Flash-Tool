// rea decompile_all
// name: _AfxLoadDotBitmap
// address: 0x1003c811
// body: available
// range: 0x1003c811-0x1003c932 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003c84e to 0x10038e31 FUN_10038e31 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    void __stdcall _AfxLoadDotBitmap(void)
   
   Library: Visual Studio 2008 Release */

void _AfxLoadDotBitmap(void)

{
  byte bVar1;
  LONG LVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  int local_94;
  int local_90;
  int local_8c;
  undefined1 local_88 [128];
  uint local_8;
  
  local_8 = DAT_10064168 ^ (uint)&stack0xfffffffc;
  LVar2 = GetMenuCheckMarkDimensions();
  local_90 = (int)(short)LVar2;
  local_8c = (int)(short)((uint)LVar2 >> 0x10);
  if ((4 < local_90) && (5 < local_8c)) {
    if (0x20 < local_90) {
      local_90 = 0x20;
    }
    iVar6 = local_90 + 0xf >> 4;
    iVar7 = ((local_90 + -4) / 2 + iVar6 * 0x10) - local_90;
    if (0xc < iVar7) {
      iVar7 = 0xc;
    }
    if (0x20 < local_8c) {
      local_8c = 0x20;
    }
    _memset(local_88,0xff,0x80);
    puVar3 = local_88 + (local_8c + -6 >> 1) * iVar6 * 2;
    pbVar4 = &DAT_1005a1a8;
    local_94 = 5;
    do {
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
      uVar5 = ~((ushort)bVar1 << ((byte)iVar7 & 0x1f));
      *puVar3 = (char)(uVar5 >> 8);
      puVar3[1] = (char)uVar5;
      puVar3 = puVar3 + iVar6 * 2;
      local_94 = local_94 + -1;
    } while (local_94 != 0);
    DAT_100689a0 = CreateBitmap(local_90,local_8c,1,1,local_88);
    if (DAT_100689a0 == (HBITMAP)0x0) {
      DAT_100689a0 = LoadBitmapW((HINSTANCE)0x0,(LPCWSTR)0x7fe3);
    }
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10038e31();
}

