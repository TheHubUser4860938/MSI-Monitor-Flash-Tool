// rea decompile_all
// name: CDialogTemplate::SetFont
// address: 0x100452f9
// body: available
// range: 0x100452f9-0x1004541d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CDialogTemplate::SetFont(wchar_t const *,unsigned short)
   
   Library: Visual Studio 2008 Release */

int __thiscall CDialogTemplate::SetFont(CDialogTemplate *this,wchar_t *param_1,ushort param_2)

{
  int iVar1;
  DLGTEMPLATE *pDVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  void *pvVar6;
  int iVar7;
  rsize_t rVar8;
  int iVar9;
  uint uVar10;
  WORD WVar11;
  void *pvVar12;
  bool bVar13;
  
  if (*(int *)(this + 4) == 0) {
    return 0;
  }
  pDVar2 = GlobalLock(*(HGLOBAL *)this);
  bVar13 = *(short *)((int)&pDVar2->style + 2) == -1;
  iVar3 = HasFont(pDVar2);
  iVar7 = (uint)bVar13 * 2 + 1;
  iVar1 = iVar7 * 2;
  if (bVar13) {
    uVar10._0_2_ = pDVar2->y;
    uVar10._2_2_ = pDVar2->cx;
    pDVar2->y = (short)(uVar10 | 0x40);
    pDVar2->cx = (short)((uVar10 | 0x40) >> 0x10);
  }
  else {
    pDVar2->style = pDVar2->style | 0x40;
  }
  iVar4 = lstrlenW(param_1);
  if ((iVar4 < 0x20) && (iVar4 = iVar1 + 2 + iVar4 * 2, iVar1 <= iVar4)) {
    puVar5 = (ushort *)GetFontSizeField(pDVar2);
    iVar9 = 0;
    if (iVar3 != 0) {
      iVar3 = FUN_10047adf((short *)(puVar5 + iVar7));
      iVar9 = iVar1 + 2 + iVar3 * 2;
    }
    pvVar6 = (void *)((uint)(iVar9 + 3 + (int)puVar5) & 0xfffffffc);
    pvVar12 = (void *)((uint)((int)puVar5 + iVar4 + 3) & 0xfffffffc);
    if (bVar13) {
      WVar11 = pDVar2->cy;
    }
    else {
      WVar11 = pDVar2->cdit;
    }
    if ((iVar4 != iVar9) && (WVar11 != 0)) {
      uVar10 = (*(uint *)(this + 4) - (int)pvVar6) + (int)pDVar2;
      if (*(uint *)(this + 4) < uVar10) goto LAB_100453d3;
      FUN_10003e20(pvVar12,uVar10,pvVar6,uVar10);
    }
    *puVar5 = param_2;
    rVar8 = iVar4 + iVar7 * -2;
    FUN_10003e20(puVar5 + iVar7,rVar8,param_1,rVar8);
    *(int *)(this + 4) = (int)pvVar12 + (*(int *)(this + 4) - (int)pvVar6);
    GlobalUnlock(*(HGLOBAL *)this);
    *(undefined4 *)(this + 8) = 0;
    iVar7 = 1;
  }
  else {
LAB_100453d3:
    iVar7 = 0;
  }
  return iVar7;
}

