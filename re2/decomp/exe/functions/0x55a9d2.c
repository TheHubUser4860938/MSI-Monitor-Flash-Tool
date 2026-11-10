// rea decompile_all
// name: _AfxMultMultDivDiv
// address: 0x55a9d2
// body: available
// range: 0x55a9d2-0x55ab13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    long __stdcall _AfxMultMultDivDiv(int,int,int,int,int)
   
   Library: Visual Studio 2015 Release */

long _AfxMultMultDivDiv(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int local_14;
  int local_c;
  
  lVar10 = (longlong)param_2 * (longlong)param_3;
  uVar6 = (uint)((ulonglong)lVar10 >> 0x20);
  uVar2 = (uint)lVar10;
  lVar1 = (longlong)param_4 * (longlong)param_5;
  iVar7 = (int)((ulonglong)lVar1 >> 0x20);
  uVar8 = (int)uVar6 >> 0x1f;
  uVar5 = (uVar2 ^ uVar8) - uVar8;
  iVar3 = ((uVar6 ^ uVar8) - uVar8) - (uint)((uVar2 ^ uVar8) < uVar8);
  iVar9 = 0;
  local_14 = 0;
  if (uVar5 != 0 || iVar3 != 0) {
    do {
      uVar5 = uVar5 >> 1 | iVar3 << 0x1f;
      iVar3 = iVar3 >> 1;
      iVar9 = iVar9 + 1;
      local_14 = iVar9;
    } while (uVar5 != 0 || iVar3 != 0);
  }
  local_c = 0;
  uVar5 = (param_1 ^ param_1 >> 0x1f) - (param_1 >> 0x1f);
  iVar3 = (int)uVar5 >> 0x1f;
  if (uVar5 != 0) {
    local_c = 0;
    do {
      uVar5 = uVar5 >> 1 | iVar3 << 0x1f;
      iVar3 = iVar3 >> 1;
      local_c = local_c + 1;
    } while (uVar5 != 0 || iVar3 != 0);
  }
  local_14 = local_14 + local_c;
  if ((iVar7 == 0 || lVar1 < 0) && (lVar1 < 0)) {
    lVar1 = CONCAT44(-(iVar7 + (uint)((int)lVar1 != 0)),-(int)lVar1);
    lVar10 = CONCAT44(-(uVar6 + (uVar2 != 0)),-uVar2);
  }
  while (lVar11 = lVar10, 0x1f < local_14) {
    iVar3 = (int)((ulonglong)lVar1 >> 0x20);
    lVar11 = lVar10 >> 1;
    lVar1 = lVar1 >> 1;
    if (local_14 + -1 < 0x20) break;
    uVar2 = (uint)lVar1 >> 1 | (int)((ulonglong)lVar1 >> 0x20) << 0x1f;
    iVar7 = local_14 + -2;
    lVar11 = CONCAT44((int)(lVar10 >> 0x22),
                      (uint)lVar11 >> 1 | (int)((ulonglong)lVar11 >> 0x20) << 0x1f);
    iVar9 = iVar3 >> 2;
    lVar1 = CONCAT44(iVar9,uVar2);
    local_14 = local_14 + -3;
    if (iVar7 < 0x20) break;
    param_1 = param_1 >> 1;
    lVar1 = CONCAT44(iVar3 >> 3,uVar2 >> 1 | iVar9 << 0x1f);
    lVar10 = lVar11;
  }
  lVar10 = __allmul(param_1,param_1 >> 0x1f,lVar11);
  if (lVar1 == 0) {
    if ((lVar10 < 0x100000000) && (lVar10 < 0)) {
      lVar4 = -0x80000000;
    }
    else {
      lVar4 = 0x7fffffff;
    }
  }
  else {
    lVar11 = __alldiv(lVar1,2,0);
    lVar4 = __alldiv(lVar11 + lVar10,lVar1);
  }
  return lVar4;
}

