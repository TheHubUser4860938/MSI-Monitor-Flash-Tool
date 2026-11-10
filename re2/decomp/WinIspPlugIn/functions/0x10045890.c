// rea decompile_all
// name: FUN_10045890
// address: 0x10045890
// body: available
// range: 0x10045890-0x100459ea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10045890(void)

{
  short sVar1;
  int iVar2;
  undefined4 ******ppppppuVar3;
  size_t sVar4;
  int *in_ECX;
  size_t _Count;
  int local_30;
  undefined4 *****local_2c [4];
  int local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101c0f98;
  local_10 = ExceptionList;
  local_14 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (((in_ECX[0xe] != 0) && (*(char *)((int)in_ECX + 0x3e) != '\0')) &&
     (sVar1 = (**(code **)(*in_ECX + 0xc))(0xffff,local_14), sVar1 != -1)) {
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = (undefined4 *****)((uint)local_2c[0] & 0xffffff00);
    FUN_1000a990(8,0);
    local_8 = 0;
LAB_10045920:
    ppppppuVar3 = local_2c;
    if (0xf < local_18) {
      ppppppuVar3 = (undefined4 ******)local_2c[0];
    }
    iVar2 = (**(code **)(*(int *)in_ECX[0xe] + 0x20))
                      (in_ECX + 0x10,ppppppuVar3,local_1c + (int)ppppppuVar3,&local_30);
    if (iVar2 == 0) {
      *(undefined1 *)((int)in_ECX + 0x3e) = 0;
    }
    else if (iVar2 != 1) goto LAB_100459b7;
    ppppppuVar3 = local_2c;
    if (0xf < local_18) {
      ppppppuVar3 = (undefined4 ******)local_2c[0];
    }
    _Count = local_30 - (int)ppppppuVar3;
    if (_Count != 0) {
      ppppppuVar3 = local_2c;
      if (0xf < local_18) {
        ppppppuVar3 = (undefined4 ******)local_2c[0];
      }
      sVar4 = _fwrite(ppppppuVar3,1,_Count,(FILE *)in_ECX[0x13]);
      if (_Count != sVar4) goto LAB_100459b7;
    }
    if (*(char *)((int)in_ECX + 0x3e) == '\0') goto LAB_100459b7;
    if (_Count == 0) {
      FUN_1000ac90(8,0);
    }
    goto LAB_10045920;
  }
LAB_100459cf:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
LAB_100459b7:
  if (0xf < local_18) {
    FUN_1000b630(local_2c[0],local_18 + 1);
  }
  goto LAB_100459cf;
}

