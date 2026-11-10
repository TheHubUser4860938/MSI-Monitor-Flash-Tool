// rea decompile_all
// name: FUN_10190474
// address: 0x10190474
// body: available
// range: 0x10190474-0x101905ec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_10190474(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,double param_7)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  undefined2 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 local_54;
  undefined4 local_44;
  uint local_40;
  undefined1 local_3c [52];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 100;
  local_8 = 0x10190480;
  bVar3 = param_7 < 0.0;
  if (bVar3) {
    param_7 = -param_7;
  }
  uVar8 = 0;
  if (!NAN(param_7) && 1e+35 < param_7 != (param_7 == 1e+35)) {
    do {
      if (4999 < uVar8) break;
      param_7 = param_7 / 10000000000.0;
      uVar8 = uVar8 + 10;
    } while (1e+35 < param_7 != (param_7 == 1e+35));
  }
  iVar5 = FUN_10013480(local_3c,0x28,"%.0Lf",param_7);
  if (iVar5 < 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
  }
  else {
    FUN_100072b0();
    local_8 = 0;
    piVar6 = (int *)use_facet<>();
    local_8 = 0xffffffff;
    FUN_10006a30();
    pcVar1 = *(code **)(*piVar6 + 0x30);
    guard_check_icall();
    uVar4 = (*pcVar1)();
    local_44 = 0;
    local_40 = 7;
    local_54 = (undefined4 *)((uint)local_54._2_2_ << 0x10);
    FUN_1018d51a(iVar5,0);
    local_8 = 1;
    puVar7 = local_54;
    if (local_40 < 8) {
      puVar7 = &local_54;
    }
    iVar2 = *piVar6;
    guard_check_icall(local_3c,local_3c + iVar5,puVar7);
    (**(code **)(iVar2 + 0x2c))();
    FUN_1018d424(uVar8,uVar4);
    basic_string<>(&local_54);
    Putmfld(param_1,param_2,param_3,param_4,param_5,param_6,bVar3);
    FID_conflict__Tidy(1,0);
  }
  FUN_1018015d();
  return;
}

