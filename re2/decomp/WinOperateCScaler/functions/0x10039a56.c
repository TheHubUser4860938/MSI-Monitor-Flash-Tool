// rea decompile_all
// name: CDialogTemplate::SetFont
// address: 0x10039a56
// body: available
// range: 0x10039a56-0x10039ba3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CDialogTemplate::SetFont(wchar_t const *,unsigned short)
   
   Library: Visual Studio 2015 Release */

int __thiscall CDialogTemplate::SetFont(CDialogTemplate *this,wchar_t *param_1,ushort param_2)

{
  int iVar1;
  int iVar2;
  short sVar3;
  WORD WVar4;
  DLGTEMPLATE *pDVar5;
  int iVar6;
  size_t sVar7;
  ushort *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  if (*(int *)(this + 4) == 0) {
    return 0;
  }
  pDVar5 = GlobalLock(*(HGLOBAL *)this);
  sVar3 = *(short *)((int)&pDVar5->style + 2);
  iVar6 = HasFont(pDVar5);
  uVar12 = (uint)(sVar3 == -1);
  iVar2 = uVar12 * 4 + 2;
  if (sVar3 == -1) {
    uVar9._0_2_ = pDVar5->y;
    uVar9._2_2_ = pDVar5->cx;
    pDVar5->y = (short)(uVar9 | 0x40);
    pDVar5->cx = (short)((uVar9 | 0x40) >> 0x10);
  }
  else {
    pDVar5->style = pDVar5->style | 0x40;
  }
  if (param_1 == (wchar_t *)0x0) {
    sVar7 = 0;
  }
  else {
    sVar7 = _wcslen(param_1);
    if (0x1f < (int)sVar7) {
      return 0;
    }
  }
  iVar1 = iVar2 + (sVar7 + 1) * 2;
  if (iVar2 <= iVar1) {
    puVar8 = (ushort *)FUN_100398f1(pDVar5);
    if (iVar6 == 0) {
      iVar6 = 0;
    }
    else {
      if ((wchar_t *)(puVar8 + uVar12 * 2 + 1) == (wchar_t *)0x0) {
        sVar7 = 0;
      }
      else {
        sVar7 = _wcslen((wchar_t *)(puVar8 + uVar12 * 2 + 1));
      }
      iVar6 = uVar12 * 4 + 4 + sVar7 * 2;
    }
    uVar9 = (int)puVar8 + iVar6 + 3 & 0xfffffffc;
    uVar11 = (int)puVar8 + iVar1 + 3 & 0xfffffffc;
    if (sVar3 == -1) {
      WVar4 = pDVar5->cy;
    }
    else {
      WVar4 = pDVar5->cdit;
    }
    if ((iVar1 != iVar6) && (WVar4 != 0)) {
      uVar10 = (*(int *)(this + 4) - uVar9) + (int)pDVar5;
      if (*(uint *)(this + 4) < uVar10) {
        return 0;
      }
      FUN_10019160(uVar11,uVar10,uVar9,uVar10);
    }
    *puVar8 = param_2;
    FUN_10019160(puVar8 + uVar12 * 2 + 1,iVar1 - iVar2,param_1,iVar1 - iVar2);
    *(uint *)(this + 4) = *(int *)(this + 4) + (uVar11 - uVar9);
    GlobalUnlock(*(HGLOBAL *)this);
    *(undefined4 *)(this + 8) = 0;
    return 1;
  }
  return 0;
}

