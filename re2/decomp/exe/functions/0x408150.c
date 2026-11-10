// rea decompile_all
// name: FUN_00408150
// address: 0x408150
// body: available
// range: 0x408150-0x40831d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00408150(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_ECX;
  int in_EDX;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined1 local_f0 [24];
  undefined **local_d8;
  int local_d4 [3];
  uint uStack_c8;
  undefined1 local_c4 [40];
  int aiStack_9c [11];
  int local_70;
  undefined **local_5c [18];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0059c427;
  local_10 = ExceptionList;
  uVar1 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar6 = 0xc0;
  local_14 = uVar1;
  _memset(local_d4,0,0xc0);
  FUN_0040a820(uVar6);
  local_d8 = CCpTransform::vftable;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  uVar6 = FUN_00406f40(local_f0,&DAT_006195e4);
  FUN_00403450(uVar6);
  FUN_004033e0(uVar1);
  puVar5 = &DAT_006195fc;
  if (0xf < DAT_00619610) {
    puVar5 = DAT_006195fc;
  }
  local_8._0_1_ = 0;
  iVar2 = FUN_0040cc10(puVar5,10,extraout_ECX);
  iVar3 = *(int *)(local_d4[0] + 4);
  if (iVar2 == 0) {
    uVar4 = *(uint *)((int)&uStack_c8 + iVar3) | 2;
    uVar1 = *(uint *)((int)&uStack_c8 + iVar3) | 6;
    iVar3 = *(int *)((int)aiStack_9c + iVar3);
  }
  else {
    uVar4 = 0;
    uVar1 = 4;
    iVar3 = *(int *)((int)aiStack_9c + iVar3);
  }
  if (iVar3 != 0) {
    uVar1 = uVar4;
  }
  FUN_00402a10(uVar1,0);
  if (local_70 != 0) {
    local_d8 = CCpTransform::vftable;
    local_8._0_1_ = 3;
    uVar6 = FUN_00406f40(local_f0,-(uint)(in_EDX != 0) & in_EDX + 4U);
    FUN_00403450(uVar6);
    FUN_004033e0();
    local_8._0_1_ = 0;
    FUN_0040d390();
    FUN_0040d640(local_c4);
  }
  iVar3 = FUN_0040cb50();
  if (iVar3 == 0) {
    uVar1 = *(uint *)((int)&uStack_c8 + *(int *)(local_d4[0] + 4));
    uVar4 = uVar1 | 6;
    if (*(int *)((int)aiStack_9c + *(int *)(local_d4[0] + 4)) != 0) {
      uVar4 = uVar1 | 2;
    }
    FUN_00402a10(uVar4,0);
  }
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_5c);
  local_8 = 4;
  local_5c[0] = std::ios_base::vftable;
  std::ios_base::_Ios_base_dtor((ios_base *)local_5c);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

