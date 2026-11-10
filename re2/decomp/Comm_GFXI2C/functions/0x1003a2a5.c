// rea decompile_all
// name: CArchive::FillBuffer
// address: 0x1003a2a5
// body: available
// range: 0x1003a2a5-0x1003a393 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003a2bc to 0x1003aa69 FUN_1003aa69 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CArchive::FillBuffer(unsigned int)
   
   Library: Visual Studio 2008 Release */

void __thiscall CArchive::FillBuffer(CArchive *this,uint param_1)

{
  CArchive *pCVar1;
  void *pvVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  short *unaff_EBX;
  undefined4 unaff_ESI;
  int iVar6;
  uint local_8;
  
  if (((byte)this[0x18] & 1) != 0) {
    pvVar2 = *(void **)(this + 0x28);
    pCVar1 = this + 0x2c;
    local_8 = *(int *)pCVar1 - (int)pvVar2;
    uVar3 = param_1 + local_8;
    if (*(int *)(this + 8) == 0) {
      pvVar4 = *(void **)(this + 0x30);
      if (pvVar4 < pvVar2) {
        if (0 < (int)local_8) {
          FUN_10003e20(pvVar4,*(int *)pCVar1 - (int)pvVar4,pvVar2,local_8);
          pvVar4 = *(void **)(this + 0x30);
          *(void **)(this + 0x28) = pvVar4;
          *(uint *)pCVar1 = (int)pvVar4 + local_8;
        }
        if (*(int *)(this + 0xc) == 0) {
          param_1 = *(uint *)(this + 0x20);
        }
        param_1 = param_1 - local_8;
        iVar6 = local_8 + (int)pvVar4;
        do {
          iVar5 = (**(code **)(**(int **)(this + 0x24) + 0x34))(iVar6,param_1);
          local_8 = local_8 + iVar5;
          param_1 = param_1 - iVar5;
          iVar6 = iVar6 + iVar5;
          if ((iVar5 == 0) || (param_1 == 0)) break;
        } while (local_8 < uVar3);
        *(int *)(this + 0x28) = *(int *)(this + 0x30);
        *(uint *)pCVar1 = *(int *)(this + 0x30) + local_8;
      }
    }
    else {
      if (local_8 != 0) {
        (**(code **)(**(int **)(this + 0x24) + 0x28))(-local_8,(int)-local_8 >> 0x1f,1);
      }
      (**(code **)(**(int **)(this + 0x24) + 0x50))
                (0,*(undefined4 *)(this + 0x20),this + 0x30,pCVar1);
      *(undefined4 *)(this + 0x28) = *(undefined4 *)(this + 0x30);
    }
    if (uVar3 <= (uint)(*(int *)pCVar1 - *(int *)(this + 0x28))) {
      return;
    }
    unaff_EBX = (short *)0x0;
    unaff_ESI = 3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1003aa69(unaff_ESI,unaff_EBX);
}

