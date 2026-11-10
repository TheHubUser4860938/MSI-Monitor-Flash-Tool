// rea decompile_all
// name: FUN_10014e70
// address: 0x10014e70
// body: available
// range: 0x10014e70-0x10014ff2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_10014e70(undefined4 param_1,byte param_2,int *param_3,uint param_4)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *_Dst;
  uint uVar6;
  uint _Size;
  uint local_c;
  
  _Size = (uint)param_2;
  uVar6 = 0;
  if (param_4 / _Size != 0) {
    do {
      local_c = (uVar6 & 0xff) * (uint)param_2;
      uVar4 = local_c & 0xff;
      local_c = local_c & 0xff;
      iVar5 = (**(code **)(*DAT_10249d10 + 0x74))(0xa0,local_c,param_2,uVar4 + (int)param_3,0);
      if (iVar5 != 0) {
        return iVar5;
      }
      Sleep(10);
      if (uVar6 == 0) {
        _Dst = (int *)FUN_100491e5(_Size);
        _memset(_Dst,0,_Size);
        iVar5 = (**(code **)(*DAT_10249d10 + 0x78))
                          (0xa0,local_c,param_2,(char *)(uVar4 + (int)_Dst),0);
        piVar2 = _Dst;
        piVar3 = param_3;
        uVar4 = _Size;
        if (iVar5 != 0) {
          return iVar5;
        }
        while (uVar1 = uVar4 - 4, 3 < uVar4) {
          if (*piVar2 != *piVar3) goto LAB_10014f46;
          piVar2 = piVar2 + 1;
          piVar3 = piVar3 + 1;
          uVar4 = uVar1;
        }
        if (uVar1 != 0xfffffffc) {
LAB_10014f46:
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
      uVar6 = uVar6 + 1;
    } while (uVar6 < param_4 / _Size);
  }
  if ((char)(param_4 % _Size) != '\0') {
    uVar6 = (uVar6 & 0xff) * (uint)param_2;
    (**(code **)(*DAT_10249d10 + 0x80))
              (0xa0,uVar6 & 0xff,param_4 % _Size,(uVar6 & 0xff) + (int)param_3,0);
  }
  return 0;
}

