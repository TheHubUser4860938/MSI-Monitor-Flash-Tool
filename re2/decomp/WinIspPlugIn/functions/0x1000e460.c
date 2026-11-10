// rea decompile_all
// name: FUN_1000e460
// address: 0x1000e460
// body: available
// range: 0x1000e460-0x1000e5ce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000e5ce with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_1000e460(char *param_1,char *param_2,uint param_3)

{
  uint *puVar1;
  uint _Size;
  code *pcVar2;
  char cVar3;
  char *_Dest;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined **local_2c;
  undefined8 local_28;
  undefined **local_20;
  undefined8 local_1c;
  char *local_14;
  undefined1 local_10;
  char *local_c;
  undefined1 local_8;
  
  _Size = *(uint *)(param_1 + 0x10);
  puVar1 = (uint *)(param_1 + 0x10);
  _Dest = (char *)FUN_100491e5(_Size);
  _memset(_Dest,0,_Size);
  if (0xf < *(uint *)(param_1 + 0x14)) {
    param_1 = *(char **)param_1;
  }
  _strncpy(_Dest,param_1,_Size);
  if (param_3 < (*puVar1 & 1)) {
    FID_conflict__free(_Dest);
    return 0;
  }
  uVar6 = 0;
  if (_Size != 0) {
    do {
      cVar5 = _Dest[uVar6];
      if ((byte)(cVar5 - 0x30U) < 10) {
        cVar5 = cVar5 + -0x30;
      }
      else if ((byte)(cVar5 + 0xbfU) < 6) {
        cVar5 = cVar5 + -0x37;
      }
      else {
        if (5 < (byte)(cVar5 + 0x9fU)) goto LAB_1000e58f;
        cVar5 = cVar5 + -0x57;
      }
      cVar3 = _Dest[uVar6 + 1];
      if ((byte)(cVar3 - 0x30U) < 10) {
        cVar3 = cVar3 + -0x30;
      }
      else if ((byte)(cVar3 + 0xbfU) < 6) {
        cVar3 = cVar3 + -0x37;
      }
      else {
        if (5 < (byte)(cVar3 + 0x9fU)) {
          local_20 = std::exception::vftable;
          local_c = "Invalid Input";
          local_8 = 1;
          local_1c = 0;
          ___std_exception_copy(&local_c,&local_1c);
          local_20 = std::invalid_argument::vftable;
          __CxxThrowException_8(&local_20,&DAT_10238a9c);
LAB_1000e58f:
          local_2c = std::exception::vftable;
          local_14 = "Invalid Input";
          local_10 = 1;
          local_28 = 0;
          ___std_exception_copy(&local_14,&local_28);
          local_2c = std::invalid_argument::vftable;
          __CxxThrowException_8(&local_2c,&DAT_10238a9c);
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return uVar4;
        }
        cVar3 = cVar3 + -0x57;
      }
      uVar6 = uVar6 + 2;
      *param_2 = cVar5 * '\x10' + cVar3;
      param_2 = param_2 + 1;
    } while (uVar6 < _Size);
  }
  FID_conflict__free(_Dest);
  return 1;
}

