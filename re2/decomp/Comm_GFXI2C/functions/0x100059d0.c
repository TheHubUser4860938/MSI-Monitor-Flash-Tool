// rea decompile_all
// name: FUN_100059d0
// address: 0x100059d0
// body: available
// range: 0x100059d0-0x10005a49 inclusive
// range: 0x10005a50-0x10005b56 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_100059d0(void *this,CArchive *param_1)

{
  int *piVar1;
  int iVar2;
  ulong uVar3;
  undefined4 *puVar4;
  CStringData *pCVar5;
  CStringData *pCVar6;
  undefined4 local_20;
  void *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10058713;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((~*(uint *)(param_1 + 0x18) & 1) == 0) {
    uVar3 = CArchive::ReadCount(param_1);
    while (uVar3 != 0) {
      uVar3 = uVar3 - 1;
      _eh_vector_constructor_iterator_(&local_20,0x14,1,FUN_10005190,FUN_100051c0);
      local_4 = 0;
      FUN_10005c30(param_1,&local_20);
      puVar4 = FUN_10005b90(*(undefined4 *)((int)this + 8));
      puVar4[2] = local_20;
      iVar2 = puVar4[3];
      pCVar5 = (CStringData *)((int)local_1c + -0x10);
      pCVar6 = (CStringData *)(iVar2 + -0x10);
      if (pCVar5 != pCVar6) {
        if ((*(int *)(iVar2 + -4) < 0) || (*(int *)pCVar5 != *(int *)pCVar6)) {
          FUN_10002660(puVar4 + 3,local_1c,*(int *)((int)local_1c + -0xc));
        }
        else {
          pCVar5 = ATL::CSimpleStringT<wchar_t,0>::CloneData(pCVar5);
          piVar1 = (int *)(iVar2 + -4);
          LOCK();
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1 || iVar2 + -1 < 0) {
            (**(code **)(**(int **)pCVar6 + 4))(pCVar6);
          }
          puVar4[3] = pCVar5 + 0x10;
        }
      }
      puVar4[4] = local_18;
      puVar4[5] = local_14;
      puVar4[6] = local_10;
      if (*(undefined4 **)((int)this + 8) == (undefined4 *)0x0) {
        *(undefined4 **)((int)this + 4) = puVar4;
      }
      else {
        **(undefined4 **)((int)this + 8) = puVar4;
      }
      *(undefined4 **)((int)this + 8) = puVar4;
      local_4 = 0xffffffff;
      _eh_vector_destructor_iterator_(&local_20,0x14,1,FUN_100051c0);
    }
  }
  else {
    CArchive::WriteCount(param_1,*(ulong *)((int)this + 0xc));
    for (puVar4 = *(undefined4 **)((int)this + 4); puVar4 != (undefined4 *)0x0;
        puVar4 = (undefined4 *)*puVar4) {
      FUN_10005c30(param_1,puVar4 + 2);
    }
  }
  ExceptionList = local_c;
  return;
}

