// rea decompile_all
// name: FUN_10014cd0
// address: 0x10014cd0
// body: available
// range: 0x10014cd0-0x10014e68 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_10014cd0(undefined4 param_1,byte param_2,int *param_3,uint param_4)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *_Dst;
  int iVar7;
  int in_ECX;
  int iVar8;
  uint uVar9;
  uint _Size;
  char local_c;
  
  _Size = (uint)param_2;
  iVar8 = 0x1f00;
  if (*(int *)(in_ECX + 0x434) != 1) {
    iVar8 = 0;
  }
  uVar9 = 0;
  if (param_4 / _Size != 0) {
    uVar4 = (uint)param_2;
    do {
      uVar5 = uVar4 * uVar9 & 0xffff;
      iVar7 = iVar8 + uVar5;
      iVar6 = (**(code **)(*DAT_10249d10 + 0x80))(0xa8,iVar7,uVar4,uVar5 + (int)param_3,1);
      if (iVar6 != 0) {
        return iVar6;
      }
      Sleep(1);
      if (uVar9 == 0) {
        _Dst = (int *)FUN_100491e5(_Size);
        _memset(_Dst,0,_Size);
        iVar7 = (**(code **)(*DAT_10249d10 + 0x84))(0xa8,iVar7,uVar4,_Dst,1);
        piVar2 = _Dst;
        piVar3 = param_3;
        uVar5 = _Size;
        if (iVar7 != 0) {
          return iVar7;
        }
        while (uVar1 = uVar5 - 4, 3 < uVar5) {
          if (*piVar2 != *piVar3) goto LAB_10014db8;
          piVar2 = piVar2 + 1;
          piVar3 = piVar3 + 1;
          uVar5 = uVar1;
        }
        if (uVar1 != 0xfffffffc) {
LAB_10014db8:
          if (((char)*piVar2 != (char)*piVar3) ||
             ((uVar1 != 0xfffffffd &&
              ((*(char *)((int)piVar2 + 1) != *(char *)((int)piVar3 + 1) ||
               ((uVar1 != 0xfffffffe &&
                ((*(char *)((int)piVar2 + 2) != *(char *)((int)piVar3 + 2) ||
                 ((uVar1 != 0xffffffff && (*(char *)((int)piVar2 + 3) != *(char *)((int)piVar3 + 3))
                  ))))))))))) {
            if (_Dst != (int *)0x0) {
              FID_conflict__free(_Dst);
            }
            return 0xe06;
          }
        }
        if (_Dst != (int *)0x0) {
          FID_conflict__free(_Dst);
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < param_4 / _Size);
  }
  local_c = (char)(param_4 % _Size);
  if (local_c != '\0') {
    uVar9 = (uint)param_2 * (uVar9 & 0xffff) & 0xffff;
    (**(code **)(*DAT_10249d10 + 0x80))(0xa8,iVar8 + uVar9,param_4 % _Size,uVar9 + (int)param_3,1);
  }
  return 0;
}

