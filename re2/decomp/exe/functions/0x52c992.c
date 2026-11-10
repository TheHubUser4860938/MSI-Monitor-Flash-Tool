// rea decompile_all
// name: OnCreate
// address: 0x52c992
// body: available
// range: 0x52c992-0x52caef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    protected: int __thiscall CMFCOutlookBarTabCtrl::OnCreate(struct tagCREATESTRUCTA *)
    protected: int __thiscall CMFCOutlookBarTabCtrl::OnCreate(struct tagCREATESTRUCTW *)
   
   Library: Visual Studio 2015 Release */

void OnCreate(undefined4 param_1)

{
  CMFCButton *pCVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int in_ECX;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  iVar3 = OnCreate(param_1);
  if (iVar3 != -1) {
    pCVar1 = (CMFCButton *)(in_ECX + 0x1010);
    local_18 = 0;
    pcVar2 = *(code **)(*(int *)pCVar1 + 0x164);
    local_14 = 0;
    local_10 = 0;
    local_c = 0;
    guard_check_icall(&PTR_005e8934,0x40000000,&local_18);
    (*pcVar2)();
    CMFCButton::SetStdImage(pCVar1,0x18,0,0);
    CMFCButton::SetAutorepeatMode(pCVar1,100);
    pCVar1 = (CMFCButton *)(in_ECX + 0x17b8);
    pcVar2 = *(code **)(*(int *)pCVar1 + 0x164);
    guard_check_icall(&PTR_005e8934,0x40000000,&local_18);
    (*pcVar2)();
    CMFCButton::SetStdImage(pCVar1,0xd,0,0);
    CMFCButton::SetAutorepeatMode(pCVar1,100);
    *(undefined4 *)(in_ECX + 0xe2c) = 0;
    pcVar2 = *(code **)(*(int *)(in_ECX + 0x2b0) + 0x324);
    guard_check_icall(in_ECX,0x800,0x50402808,0,0,0,0,0xe800);
    (*pcVar2)();
    *(undefined4 *)(in_ECX + 0xe64) = 0;
    *(undefined4 *)(in_ECX + 0x30c) = *(undefined4 *)(in_ECX + 0x20);
    iVar3 = *(int *)(in_ECX + 0x2b0);
    pcVar2 = *(code **)(iVar3 + 0x1c0);
    guard_check_icall();
    uVar4 = (*pcVar2)();
    pcVar2 = *(code **)(iVar3 + 0x1e4);
    guard_check_icall(uVar4 & 0xffbff0ff);
    (*pcVar2)();
    *(undefined4 *)(in_ECX + 0xe6c) = 0;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

