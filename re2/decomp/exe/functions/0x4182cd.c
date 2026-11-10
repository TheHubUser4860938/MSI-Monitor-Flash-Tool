// rea decompile_all
// name: COccManager::PreCreateDialog
// address: 0x4182cd
// body: available
// range: 0x4182cd-0x4183fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual struct DLGTEMPLATE const * __thiscall COccManager::PreCreateDialog(struct
   _AFX_OCC_DIALOG_INFO *,struct DLGTEMPLATE const *)
   
   Library: Visual Studio 2015 Release */

DLGTEMPLATE * __thiscall
COccManager::PreCreateDialog(COccManager *this,_AFX_OCC_DIALOG_INFO *param_1,DLGTEMPLATE *param_2)

{
  code *pcVar1;
  int iVar2;
  DLGTEMPLATE *pDVar3;
  undefined4 *puVar4;
  int iVar5;
  void *_Dst;
  undefined4 *puVar6;
  short *psVar7;
  undefined4 uVar8;
  uint uVar9;
  
  iVar2 = IsDialogEx(param_2);
  iVar2 = FUN_005766bc(4,*(ushort *)((int)&param_2->cdit + (-(uint)(iVar2 != 0) & 8)) + 1);
  *(int *)(param_1 + 4) = iVar2;
  pDVar3 = (DLGTEMPLATE *)0x0;
  if (iVar2 != 0) {
    pcVar1 = *(code **)(*(int *)this + 0x1c);
    guard_check_icall(param_2,iVar2);
    pDVar3 = (DLGTEMPLATE *)(*pcVar1)();
    *(DLGTEMPLATE **)param_1 = pDVar3;
    puVar4 = (undefined4 *)FUN_00418597(param_2);
    iVar2 = IsDialogEx(param_2);
    iVar5 = IsDialogEx(param_2);
    uVar9 = (uint)*(ushort *)((int)&param_2->cdit + (-(uint)(iVar5 != 0) & 8));
    _Dst = (void *)FUN_00416444(uVar9 * 8);
    *(void **)(param_1 + 0xc) = _Dst;
    _memset(_Dst,0,uVar9 << 3);
    *(uint *)(param_1 + 8) = uVar9;
    iVar5 = 0;
    if (uVar9 != 0) {
      do {
        puVar6 = (undefined4 *)FUN_00418622(puVar4,iVar2);
        if (iVar2 == 0) {
          *(uint *)(*(int *)(param_1 + 0xc) + iVar5 * 8) = (uint)*(ushort *)(puVar4 + 4);
          psVar7 = (short *)((int)puVar4 + 0x12);
        }
        else {
          *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar5 * 8) = puVar4[5];
          psVar7 = (short *)(puVar4 + 6);
          puVar4 = puVar4 + 2;
        }
        if (((*psVar7 == -1) && (psVar7[1] == 0x80)) && (((byte)*puVar4 & 0xf) == 9)) {
          uVar8 = 1;
        }
        else {
          uVar8 = 0;
        }
        *(undefined4 *)(*(int *)(param_1 + 0xc) + 4 + iVar5 * 8) = uVar8;
        iVar5 = iVar5 + 1;
        puVar4 = puVar6;
      } while (iVar5 < (int)uVar9);
    }
    if (pDVar3 == (DLGTEMPLATE *)0x0) {
      pDVar3 = param_2;
    }
  }
  return pDVar3;
}

