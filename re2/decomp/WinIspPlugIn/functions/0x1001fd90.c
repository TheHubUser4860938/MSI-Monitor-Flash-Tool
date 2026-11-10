// rea decompile_all
// name: FUN_1001fd90
// address: 0x1001fd90
// body: available
// range: 0x1001fd90-0x1001feca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001fd90(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_ECX;
  undefined4 extraout_ECX;
  uint uVar6;
  undefined4 uVar7;
  int local_d4;
  uint uStack_c8;
  undefined1 local_c4 [40];
  int aiStack_9c [11];
  int local_70;
  undefined **local_5c [19];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101c1fe1;
  local_10 = ExceptionList;
  uVar1 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_1002c1b0(in_ECX);
  local_8 = 0;
  uVar2 = FUN_100486d0(uVar1);
  if (param_2 == 0) {
    uVar7 = 6;
  }
  else {
    uVar7 = 10;
  }
  iVar3 = FUN_1000b3d0(uVar2,uVar7,extraout_ECX);
  iVar5 = *(int *)(local_d4 + 4);
  if (iVar3 == 0) {
    uVar6 = *(uint *)((int)&uStack_c8 + iVar5) | 2;
    uVar4 = *(uint *)((int)&uStack_c8 + iVar5) | 6;
    iVar5 = *(int *)((int)aiStack_9c + iVar5);
  }
  else {
    uVar6 = 0;
    uVar4 = 4;
    iVar5 = *(int *)((int)aiStack_9c + iVar5);
  }
  if (iVar5 != 0) {
    uVar4 = uVar6;
  }
  FUN_100071e0(uVar4,0);
  if (local_70 != 0) {
    FUN_100486d0(uVar1);
    FUN_10011b60();
    if (param_1 != 0) {
      FUN_10011e10(local_c4);
    }
  }
  iVar5 = FUN_1000b310();
  if (iVar5 == 0) {
    uVar1 = *(uint *)((int)&uStack_c8 + *(int *)(local_d4 + 4));
    uVar4 = uVar1 | 6;
    if (*(int *)((int)aiStack_9c + *(int *)(local_d4 + 4)) != 0) {
      uVar4 = uVar1 | 2;
    }
    FUN_100071e0(uVar4,0);
  }
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_5c);
  local_8 = 1;
  local_5c[0] = std::ios_base::vftable;
  std::ios_base::_Ios_base_dtor((ios_base *)local_5c);
  ExceptionList = local_10;
  return;
}

