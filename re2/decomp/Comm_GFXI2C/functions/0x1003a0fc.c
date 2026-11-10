// rea decompile_all
// name: CArchive::Read
// address: 0x1003a0fc
// body: available
// range: 0x1003a0fc-0x1003a22c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003a126 to 0x1003aa69 FUN_1003aa69 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: unsigned int __thiscall CArchive::Read(void *,unsigned int)
   
   Library: Visual Studio 2008 Release */

uint __thiscall CArchive::Read(CArchive *this,void *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  int local_c;
  uint local_8;
  
  if ((param_2 == 0) || (param_1 == (void *)0x0)) {
    uVar1 = 0;
  }
  else {
    if (((byte)this[0x18] & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1003aa69(4,*(short **)(this + 0x14));
    }
    uVar1 = *(int *)(this + 0x2c) - (int)*(void **)(this + 0x28);
    if (param_2 < uVar1) {
      uVar1 = param_2;
    }
    FUN_10038b3c(param_1,param_2,*(void **)(this + 0x28),uVar1);
    *(uint *)(this + 0x28) = *(int *)(this + 0x28) + uVar1;
    param_1 = (void *)((int)param_1 + uVar1);
    uVar1 = param_2 - uVar1;
    if (uVar1 != 0) {
      iVar4 = uVar1 - uVar1 % *(uint *)(this + 0x20);
      local_c = 0;
      local_8 = iVar4;
      do {
        iVar2 = (**(code **)(**(int **)(this + 0x24) + 0x34))(param_1,local_8);
        param_1 = (void *)((int)param_1 + iVar2);
        local_c = local_c + iVar2;
        local_8 = local_8 - iVar2;
        if (iVar2 == 0) break;
      } while (local_8 != 0);
      uVar1 = uVar1 - local_c;
      if ((uVar1 != 0) && (local_c == iVar4)) {
        uVar5 = 0;
        if (*(int *)(this + 8) == 0) {
          if ((*(int *)(this + 0xc) != 0) ||
             (local_8 = *(uint *)(this + 0x20), *(uint *)(this + 0x20) < uVar1)) {
            local_8 = uVar1;
          }
          local_c = *(int *)(this + 0x30);
          do {
            iVar4 = (**(code **)(**(int **)(this + 0x24) + 0x34))(local_c,local_8);
            local_c = local_c + iVar4;
            local_8 = local_8 - iVar4;
            uVar5 = uVar5 + iVar4;
            if ((iVar4 == 0) || (local_8 == 0)) break;
          } while (uVar5 < uVar1);
          pvVar3 = *(void **)(this + 0x30);
          *(uint *)(this + 0x2c) = (int)pvVar3 + uVar5;
        }
        else {
          (**(code **)(**(int **)(this + 0x24) + 0x50))
                    (0,*(undefined4 *)(this + 0x20),this + 0x30,this + 0x2c);
          pvVar3 = *(void **)(this + 0x30);
        }
        *(void **)(this + 0x28) = pvVar3;
        uVar5 = *(int *)(this + 0x2c) - (int)pvVar3;
        if (uVar1 < (uint)(*(int *)(this + 0x2c) - (int)pvVar3)) {
          uVar5 = uVar1;
        }
        FUN_10038b3c(param_1,uVar1,pvVar3,uVar5);
        *(uint *)(this + 0x28) = *(int *)(this + 0x28) + uVar5;
        uVar1 = uVar1 - uVar5;
      }
    }
    uVar1 = param_2 - uVar1;
  }
  return uVar1;
}

