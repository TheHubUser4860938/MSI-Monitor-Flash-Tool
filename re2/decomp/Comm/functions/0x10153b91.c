// rea decompile_all
// name: common_splitpath_internal<wchar_t,<lambda_b1695639fcc80704960aa67b3ee55b9c>,<lambda_ecdbb1a461ee1e417bd5a09552dd727e>_>
// address: 0x10153b91
// body: available
// range: 0x10153b91-0x10153d8a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    int __cdecl common_splitpath_internal<wchar_t,class
   <lambda_b1695639fcc80704960aa67b3ee55b9c>,class <lambda_ecdbb1a461ee1e417bd5a09552dd727e>
   >(wchar_t const * const,struct `anonymous namespace'::component_buffers<wchar_t> * const,class
   <lambda_b1695639fcc80704960aa67b3ee55b9c>,class <lambda_ecdbb1a461ee1e417bd5a09552dd727e>)
   
   Library: Visual Studio 2015 Release */

int __cdecl
common_splitpath_internal<wchar_t,<lambda_b1695639fcc80704960aa67b3ee55b9c>,<lambda_ecdbb1a461ee1e417bd5a09552dd727e>_>
          (short *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined2 *puVar1;
  short sVar2;
  short *psVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  short *psVar7;
  short *local_8;
  
  if (((((param_1 == (short *)0x0) || (param_2 == (undefined4 *)0x0)) ||
       (puVar1 = (undefined2 *)*param_2, (puVar1 == (undefined2 *)0x0) != (param_2[1] == 0))) ||
      ((psVar7 = (short *)0x0, (param_2[2] == 0) != (param_2[3] == 0) ||
       ((param_2[4] == 0) != (param_2[5] == 0))))) || ((param_2[6] == 0) != (param_2[7] == 0))) {
    reset_buffers<>(param_2,param_3);
    piVar4 = __errno();
    *piVar4 = 0x16;
    FUN_1014f4c6();
    return 0x16;
  }
  iVar6 = 1;
  psVar3 = param_1;
  do {
    if (*psVar3 == 0) break;
    psVar3 = psVar3 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  if (*psVar3 == 0x3a) {
    if (puVar1 == (undefined2 *)0x0) {
LAB_10153c66:
      param_1 = psVar3 + 1;
      goto LAB_10153c74;
    }
    if (2 < (uint)param_2[1]) {
      FUN_10153786(puVar1,param_2[1],param_1,2);
      goto LAB_10153c66;
    }
LAB_10153c38:
    reset_buffers<>(param_2,param_3);
    piVar4 = __errno();
    iVar6 = 0x22;
    *piVar4 = 0x22;
  }
  else {
    if (puVar1 != (undefined2 *)0x0) {
      *puVar1 = 0;
    }
LAB_10153c74:
    sVar2 = *param_1;
    local_8 = (short *)0x0;
    psVar3 = param_1;
    if (sVar2 == 0) {
LAB_10153cd3:
      psVar7 = param_1;
      if ((undefined2 *)param_2[2] != (undefined2 *)0x0) {
        *(undefined2 *)param_2[2] = 0;
      }
    }
    else {
      do {
        if ((sVar2 == 0x2f) || (sVar2 == 0x5c)) {
          psVar7 = psVar3 + 1;
        }
        else if (sVar2 == 0x2e) {
          local_8 = psVar3;
        }
        psVar3 = psVar3 + 1;
        sVar2 = *psVar3;
      } while (sVar2 != 0);
      if (psVar7 == (short *)0x0) goto LAB_10153cd3;
      if (param_2[2] != 0) {
        uVar5 = (int)psVar7 - (int)param_1 >> 1;
        if ((uint)param_2[3] <= uVar5) goto LAB_10153c38;
        FUN_10153786(param_2[2],param_2[3],param_1,uVar5);
      }
    }
    if ((local_8 == (short *)0x0) || (local_8 < psVar7)) {
      if (param_2[4] != 0) {
        uVar5 = (int)psVar3 - (int)psVar7 >> 1;
        if ((uint)param_2[5] <= uVar5) goto LAB_10153c38;
        FUN_10153786(param_2[4],param_2[5],psVar7,uVar5);
      }
      if ((undefined2 *)param_2[6] != (undefined2 *)0x0) {
        *(undefined2 *)param_2[6] = 0;
      }
    }
    else {
      if (param_2[4] != 0) {
        uVar5 = (int)local_8 - (int)psVar7 >> 1;
        if ((uint)param_2[5] <= uVar5) goto LAB_10153c38;
        FUN_10153786(param_2[4],param_2[5],psVar7,uVar5);
      }
      if (param_2[6] != 0) {
        uVar5 = (int)psVar3 - (int)local_8 >> 1;
        if ((uint)param_2[7] <= uVar5) goto LAB_10153c38;
        FUN_10153786(param_2[6],param_2[7],local_8,uVar5);
      }
    }
    iVar6 = 0;
  }
  return iVar6;
}

