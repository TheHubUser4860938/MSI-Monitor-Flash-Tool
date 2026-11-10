// rea decompile_all
// name: FUN_10006040
// address: 0x10006040
// body: available
// range: 0x10006040-0x100061a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10006040(undefined4 param_1,uint param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_ECX;
  uint uVar4;
  char *pcVar5;
  undefined **local_2c [6];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10194af2;
  local_10 = ExceptionList;
  uVar1 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_4 != 0) {
    *in_ECX = (int)&PTR_101a70e0;
    in_ECX[0x1c] = (int)std::basic_ios<char,std::char_traits<char>_>::vftable;
    local_8 = 0;
  }
  local_14 = (uint)(param_4 != 0);
  *(undefined ***)((int)in_ECX + *(int *)(*in_ECX + 4)) =
       std::basic_istream<char,std::char_traits<char>_>::vftable;
  *(int *)(*(int *)(*in_ECX + 4) + -4 + (int)in_ECX) = *(int *)(*in_ECX + 4) + -0x18;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  FUN_10010440(in_ECX + 4,0);
  local_8 = 2;
  *(undefined ***)((int)in_ECX + *(int *)(*in_ECX + 4)) =
       std::basic_ifstream<char,std::char_traits<char>_>::vftable;
  *(int *)(*(int *)(*in_ECX + 4) + -4 + (int)in_ECX) = *(int *)(*in_ECX + 4) + -0x70;
  FUN_100061b0(uVar1);
  in_ECX[4] = (int)std::basic_filebuf<char,std::char_traits<char>_>::vftable;
  FUN_1000ec50(0,0);
  local_8 = CONCAT31(local_8._1_3_,3);
  iVar2 = FUN_10010670(param_1,param_2 | 1,param_3);
  if (iVar2 == 0) {
    iVar2 = *(int *)(*in_ECX + 4);
    uVar1 = *(uint *)(iVar2 + 0xc + (int)in_ECX);
    uVar4 = uVar1 | 6;
    if (*(int *)((int)in_ECX + iVar2 + 0x38) != 0) {
      uVar4 = uVar1 | 2;
    }
    *(uint *)((int)in_ECX + iVar2 + 0xc) = uVar4 & 0x17;
    uVar1 = *(uint *)((int)in_ECX + iVar2 + 0x10) & uVar4 & 0x17;
    if (uVar1 != 0) {
      if ((uVar1 & 4) == 0) goto LAB_10006177;
      uVar3 = FUN_100057f0();
      pcVar5 = "ios_base::badbit set";
      do {
        while( true ) {
          FUN_10006bd0(1,uVar3,pcVar5);
          local_2c[0] = std::ios_base::failure::vftable;
          uVar1 = __CxxThrowException_8(local_2c,&DAT_101ed1a0);
LAB_10006177:
          if ((uVar1 & 2) == 0) break;
          uVar3 = FUN_100057f0();
          pcVar5 = "ios_base::failbit set";
        }
        uVar3 = FUN_100057f0();
        pcVar5 = "ios_base::eofbit set";
      } while( true );
    }
  }
  ExceptionList = local_10;
  return;
}

