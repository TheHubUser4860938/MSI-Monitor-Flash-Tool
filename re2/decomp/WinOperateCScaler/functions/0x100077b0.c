// rea decompile_all
// name: FUN_100077b0
// address: 0x100077b0
// body: available
// range: 0x100077b0-0x10007954 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100077b0(int *param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10194d10;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (in_ECX != param_1) {
    iVar5 = *param_1;
    if (iVar5 == param_1[1]) {
      FUN_10005770(*in_ECX,in_ECX[1]);
      iVar5 = *in_ECX;
    }
    else {
      uVar1 = (param_1[1] - iVar5) / 0x18;
      uVar2 = (in_ECX[1] - *in_ECX) / 0x18;
      if (uVar2 < uVar1) {
        if ((uint)((in_ECX[2] - *in_ECX) / 0x18) < uVar1) {
          if (*in_ECX != 0) {
            FUN_10005770(*in_ECX,in_ECX[1]);
            FUN_1000fd80(*in_ECX,(in_ECX[2] - *in_ECX) / 0x18);
          }
          cVar3 = FUN_1000e6b0((param_1[1] - *param_1) / 0x18);
          if (cVar3 == '\0') {
            ExceptionList = local_10;
            return;
          }
          local_8 = 0;
          iVar5 = FUN_10005b30(*param_1,param_1[1],*in_ECX);
        }
        else {
          iVar5 = iVar5 + uVar2 * 0x18;
          FUN_10005730(*param_1,iVar5,*in_ECX);
          iVar5 = FUN_10005b60(iVar5,param_1[1],in_ECX[1]);
        }
      }
      else {
        uVar4 = FUN_10005730(iVar5,param_1[1],*in_ECX);
        FUN_10005770(uVar4,in_ECX[1]);
        iVar5 = *in_ECX + ((param_1[1] - *param_1) / 0x18) * 0x18;
      }
    }
    in_ECX[1] = iVar5;
  }
  ExceptionList = local_10;
  return;
}

