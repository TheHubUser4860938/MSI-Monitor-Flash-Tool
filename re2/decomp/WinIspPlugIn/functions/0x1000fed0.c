// rea decompile_all
// name: FUN_1000fed0
// address: 0x1000fed0
// body: available
// range: 0x1000fed0-0x10010069 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000fed0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5,double param_6)

{
  num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> *pnVar1;
  uint uVar2;
  undefined4 ***pppuVar3;
  char *pcVar4;
  undefined4 uVar5;
  char *in_ECX;
  int iVar6;
  num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> *this;
  num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> *extraout_ECX;
  undefined4 uVar7;
  uint local_48;
  undefined4 local_44;
  char *local_40;
  int local_3c;
  int local_38;
  undefined4 **local_34 [4];
  num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> *local_24;
  uint local_20;
  undefined1 local_1c [8];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101c15b8;
  local_10 = ExceptionList;
  local_14 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_44 = param_1;
  local_3c = param_4;
  local_20 = 0xf;
  local_24 = (num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> *)0x0;
  local_34[0] = (undefined4 **)((uint)local_34[0] & 0xffffff00);
  local_8 = 0;
  local_38 = *(int *)(param_4 + 0x18);
  uVar2 = *(uint *)(param_4 + 0x14) & 0x3000;
  local_48 = *(uint *)(param_4 + 0x1c);
  if (((int)local_48 < 1) && ((((int)local_48 < 0 || (local_38 == 0)) && (uVar2 != 0x2000)))) {
    local_48 = 0;
    local_38 = 6;
  }
  iVar6 = local_38;
  uVar5 = SUB84(param_6,0);
  uVar7 = (undefined4)((ulonglong)param_6 >> 0x20);
  local_40 = in_ECX;
  if ((uVar2 == 0x2000) && (10000000000.0 < ABS(param_6))) {
    FUN_1019ee9e(uVar5,uVar7,&local_48,local_14);
    iVar6 = (int)(((local_48 ^ (int)local_48 >> 0x1f) - ((int)local_48 >> 0x1f)) * 0x7597) / 100000
            + iVar6;
  }
  this = (num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> *)(iVar6 + 0x32);
  if (local_24 < this) {
    FUN_1000ac90((int)this - (int)local_24,0);
    this = extraout_ECX;
  }
  else {
    pppuVar3 = local_34;
    if (0xf < local_20) {
      pppuVar3 = (undefined4 ***)local_34[0];
    }
    local_24 = this;
    *(num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> *)
     ((int)pppuVar3 + (int)this) =
         (num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>)0x0;
  }
  pnVar1 = local_24;
  pppuVar3 = local_34;
  if (0xf < local_20) {
    pppuVar3 = (undefined4 ***)local_34[0];
  }
  iVar6 = local_38;
  pcVar4 = std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::_Ffmt
                     (this,local_40,(char)local_1c,0);
  uVar5 = FUN_10013480(pppuVar3,pnVar1,pcVar4,iVar6,uVar5,uVar7);
  pppuVar3 = local_34;
  if (0xf < local_20) {
    pppuVar3 = (undefined4 ***)local_34[0];
  }
  FUN_10010f00(local_40,local_44,param_2,param_3,local_3c,param_5,pppuVar3,uVar5);
  if (0xf < local_20) {
    FUN_1000b630(local_34[0],local_20 + 1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

