// rea decompile_all
// name: CDataSourceControl::BindColumns
// address: 0x4417c3
// body: available
// range: 0x4417c3-0x4419a0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CDataSourceControl::BindColumns(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CDataSourceControl::BindColumns(CDataSourceControl *this)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar6 = 0;
  if (*(int *)(this + 0x48) == 0) {
    if (*(int *)(this + 0x40) != 0) {
      iVar7 = 0;
      if (0 < *(int *)(this + 0x38)) {
        do {
          Ordinal_9(*(int *)(this + 0x40) + iVar6);
          iVar7 = iVar7 + 1;
          iVar6 = iVar6 + 0x10;
        } while (iVar7 < *(int *)(this + 0x38));
        if (0 < *(int *)(this + 0x38)) {
          FID_conflict__free(*(void **)(this + 0x40));
          FID_conflict__free(*(void **)(this + 0x3c));
        }
      }
      *(undefined4 *)(this + 0x40) = 0;
    }
    iVar7 = 0;
    iVar6 = *(int *)(this + 0x10);
    *(undefined4 *)(this + 0x38) = 0;
    if (0 < iVar6) {
      iVar5 = 0;
      piVar8 = (int *)(*(int *)(this + 0x14) + 0x24);
      do {
        iVar1 = *piVar8;
        piVar8 = piVar8 + 10;
        iVar5 = iVar5 + *(int *)(iVar1 + 0xc);
        *(int *)(this + 0x38) = iVar5;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    if (0 < (int)*(uint *)(this + 0x38)) {
      lVar3 = (ulonglong)*(uint *)(this + 0x38) * 0x30;
      uVar4 = FUN_00416444(-(uint)((int)((ulonglong)lVar3 >> 0x20) != 0) | (uint)lVar3);
      *(undefined4 *)(this + 0x3c) = uVar4;
    }
    iVar6 = 0;
    local_8 = 0;
    local_14 = 0;
    if (0 < *(int *)(this + 0x10)) {
      do {
        local_10 = *(int *)(*(int *)(*(int *)(this + 0x14) + 0x24 + iVar7) + 4);
        if (local_10 != 0) {
          local_c = iVar6 * 0x30;
          do {
            piVar8 = (int *)FUN_004ead48(&local_10);
            iVar5 = *piVar8;
            CopyColumnID(this,(tagDBCOLUMNID *)(*(int *)(this + 0x3c) + local_c),
                         (tagDBCOLUMNID *)(*(int *)(this + 0x14) + iVar7));
            *(int *)(local_c + 0x18 + *(int *)(this + 0x3c)) = local_8 << 4;
            *(undefined4 *)(local_c + 0x1c + *(int *)(this + 0x3c)) = 0;
            *(undefined4 *)(local_c + 0x24 + *(int *)(this + 0x3c)) = 0xffffffff;
            *(undefined4 *)(local_c + 0x20 + *(int *)(this + 0x3c)) = 0xffffffff;
            *(undefined4 *)(local_c + 0x28 + *(int *)(this + 0x3c)) = 1;
            iVar6 = local_8 + 1;
            *(undefined4 *)(local_c + 0x2c + *(int *)(this + 0x3c)) = *(undefined4 *)(iVar5 + 0xa0);
            local_c = local_c + 0x30;
            local_8 = iVar6;
          } while (local_10 != 0);
        }
        local_14 = local_14 + 1;
        iVar7 = iVar7 + 0x28;
      } while (local_14 < *(int *)(this + 0x10));
    }
    iVar7 = 0;
    iVar6 = **(int **)(this + 8);
    guard_check_icall(*(int **)(this + 8),*(undefined4 *)(this + 0x38),*(undefined4 *)(this + 0x3c),
                      *(int *)(this + 0x38) << 4,0);
    (**(code **)(iVar6 + 0x10))();
    if (*(uint *)(this + 0x38) != 0) {
      lVar3 = (ulonglong)*(uint *)(this + 0x38) * 0x10;
      uVar4 = FUN_00416444(-(uint)((int)((ulonglong)lVar3 >> 0x20) != 0) | (uint)lVar3);
      *(undefined4 *)(this + 0x40) = uVar4;
    }
    if (0 < *(int *)(this + 0x38)) {
      iVar6 = 0;
      do {
        _memset((void *)(*(int *)(this + 0x40) + iVar6),0,0x10);
        iVar7 = iVar7 + 1;
        *(undefined2 *)(iVar6 + *(int *)(this + 0x40)) = 0;
        iVar6 = iVar6 + 0x10;
      } while (iVar7 < *(int *)(this + 0x38));
    }
  }
  GetBoundClientRow(this);
  pcVar2 = *(code **)(*(int *)this + 0x14);
  guard_check_icall();
  (*pcVar2)();
  return;
}

