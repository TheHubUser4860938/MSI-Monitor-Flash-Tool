// rea decompile_all
// name: FUN_1003d150
// address: 0x1003d150
// body: available
// range: 0x1003d150-0x1003d362 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_1003d150(uint param_1,uint param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar4;
  uint uVar5;
  uint local_1024;
  undefined1 local_1010 [4096];
  undefined1 local_10 [4];
  uint local_c;
  undefined4 uStack_8;
  
  uStack_8 = 0x1003d15d;
  local_c = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  _memset(local_1010,0,0x1000);
  if (param_2 < 0x1000) {
    FUN_1003d760(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    iVar4 = 0x1000 - (param_1 & 0xfff);
    param_2 = param_2 - iVar4;
    uVar5 = param_2 & 0xfff;
    if (uVar5 == 0) {
      uVar5 = 0x1000;
    }
    iVar1 = 1;
    if (param_2 != 0) {
      param_2 = param_2 - uVar5;
      iVar1 = 2;
    }
    uVar2 = iVar1 + (param_2 >> 0xc);
    local_1024 = 0;
    iVar1 = param_3;
    if (uVar2 != 0) {
      do {
        if ((local_1024 == 0) && (iVar4 != 0x1000)) {
          _memset(local_1010,0xff,0x1000);
          iVar3 = FUN_1003eda0(param_1 >> 0x10,param_1 & 0xffff,0x1000,local_1010);
          if (iVar3 != 0) break;
          FUN_10197c50(local_10 + -iVar4,param_3,iVar4);
          iVar3 = FUN_1003d370(param_1,extraout_ECX,local_1010,param_4,param_5);
          if (iVar3 != 0) break;
          param_1 = param_1 + iVar4;
          iVar1 = iVar1 + iVar4;
        }
        else if ((uVar2 - 1 == local_1024) && (uVar5 != 0x1000)) {
          _memset(local_1010,0xff,0x1000);
          FUN_10197c50(local_1010,iVar1,uVar5);
          iVar3 = FUN_1003d370(param_1,extraout_ECX_00,local_1010,param_4,param_5);
          if (iVar3 != 0) break;
        }
        else {
          iVar3 = FUN_1003d370(param_1,local_1024,iVar1,param_4,param_5);
          if (iVar3 != 0) break;
          param_1 = param_1 + 0x1000;
          iVar1 = iVar1 + 0x1000;
        }
        local_1024 = local_1024 + 1;
      } while (local_1024 < uVar2);
    }
  }
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}

