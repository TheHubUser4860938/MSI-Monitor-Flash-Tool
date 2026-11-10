// rea decompile_all
// name: FUN_1011b8fe
// address: 0x1011b8fe
// body: available
// range: 0x1011b8fe-0x1011ba31 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1011b8fe(CDC *param_1,uint param_2,LONG param_3,LONG param_4,LONG param_5,int param_6)

{
  int iVar1;
  code *pcVar2;
  int *piVar3;
  HBRUSH hbr;
  int *in_ECX;
  HBRUSH hbr_00;
  undefined1 local_28 [4];
  int local_24;
  int *local_20;
  CDC *local_1c;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  local_1c = param_1;
  local_20 = in_ECX;
  GetGlobalData();
  iVar1 = *in_ECX;
  piVar3 = (int *)FUN_1006a934(local_28);
  pcVar2 = *(code **)(iVar1 + 0x2dc);
  guard_check_icall();
  local_24 = (*pcVar2)();
  local_24 = local_24 + *piVar3;
  if (param_6 == 0) {
    hbr_00 = (HBRUSH)0x0;
    if (in_ECX == (int *)0xfffffef4) {
      hbr = (HBRUSH)0x0;
    }
    else {
      hbr = (HBRUSH)in_ECX[0x44];
    }
    FillRect(*(HDC *)(local_1c + 4),(RECT *)&param_2,hbr);
    local_18.right = param_2 + 2 + local_24;
    local_18.left = param_2;
    local_18.top = param_3;
    local_18.bottom = param_5;
    if (local_20 != (int *)0xffffff04) {
      hbr_00 = (HBRUSH)local_20[0x40];
    }
    FillRect(*(HDC *)(local_1c + 4),&local_18,hbr_00);
    GetGlobalData();
  }
  else {
    param_2 = param_2 & ~-(uint)(in_ECX[0x18] != 0);
    pcVar2 = *(code **)(*in_ECX + 0x314);
    guard_check_icall(local_1c,param_2,param_3,param_4,param_5,local_20 + 0x47,0);
    (*pcVar2)();
    CDC::Draw3dRect(local_1c,(tagRECT *)&param_2,local_20[0x3a],local_20[0x3a]);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

