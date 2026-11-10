// rea decompile_all
// name: FUN_10191045
// address: 0x10191045
// body: available
// range: 0x10191045-0x10191164 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_10191045(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5,double param_6)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 ***pppuVar3;
  undefined4 in_ECX;
  int iVar4;
  int iVar5;
  uint local_38;
  undefined4 **local_34 [4];
  uint local_24;
  uint local_20;
  undefined1 local_1c [20];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x34;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = (undefined4 **)((uint)local_34[0] & 0xffffff00);
  local_38 = *(uint *)(param_4 + 0x1c);
  uVar1 = *(uint *)(param_4 + 0x14) & 0x3000;
  iVar5 = *(int *)(param_4 + 0x18);
  local_8 = 0;
  if (((int)local_38 < 1) && ((((int)local_38 < 0 || (iVar5 == 0)) && (uVar1 != 0x2000)))) {
    iVar5 = 6;
    local_38 = 0;
  }
  uVar2 = (undefined4)((ulonglong)param_6 >> 0x20);
  iVar4 = iVar5;
  if ((uVar1 == 0x2000) && (10000000000.0 < ABS(param_6))) {
    FUN_1019ee9e(SUB84(param_6,0),uVar2,&local_38);
    iVar4 = iVar5 + (int)(((local_38 ^ (int)local_38 >> 0x1f) - ((int)local_38 >> 0x1f)) * 0x7597) /
                    100000;
  }
  FUN_10010470(iVar4 + 0x32,0);
  local_38 = local_24;
  pppuVar3 = (undefined4 ***)local_34[0];
  if (local_20 < 0x10) {
    pppuVar3 = local_34;
  }
  uVar2 = Ffmt(in_ECX,local_1c,0x4c,*(undefined4 *)(param_4 + 0x14),iVar5,SUB84(param_6,0),uVar2);
  uVar2 = FUN_10013480(pppuVar3,local_38,uVar2);
  pppuVar3 = (undefined4 ***)local_34[0];
  if (local_20 < 0x10) {
    pppuVar3 = local_34;
  }
  Fput(in_ECX,param_1,param_2,param_3,param_4,param_5,pppuVar3,uVar2);
  FUN_1000a890(1,0);
  FUN_1018015d();
  return;
}

