// rea decompile_all
// name: OnCreate
// address: 0x100a5391
// body: available
// range: 0x100a5391-0x100a54bd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    protected: int __thiscall CMFCOutlookBarPane::OnCreate(struct tagCREATESTRUCTA *)
    protected: int __thiscall CMFCOutlookBarPane::OnCreate(struct tagCREATESTRUCTW *)
   
   Library: Visual Studio 2015 Release */

void OnCreate(undefined4 param_1)

{
  code *pcVar1;
  int iVar2;
  LONG *pLVar3;
  int *in_ECX;
  undefined1 local_20 [8];
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  iVar2 = OnCreate(param_1);
  if (iVar2 != -1) {
    pcVar1 = *(code **)(*in_ECX + 0x1e4);
    guard_check_icall(in_ECX[0x27] & 0xffbff0ff);
    (*pcVar1)();
    pcVar1 = *(code **)(*in_ECX + 0x238);
    in_ECX[0x4b] = 0;
    in_ECX[0x4a] = 0;
    in_ECX[0x4d] = 0;
    in_ECX[0x4c] = 0;
    guard_check_icall(&DAT_102450c0,0,0,0,0,0x13,0);
    (*pcVar1)();
    pLVar3 = (LONG *)FUN_100b0af4(local_20);
    local_18.right = *pLVar3;
    local_18.bottom = pLVar3[1];
    local_18.left = 0;
    local_18.top = 0;
    InflateRect(&local_18,3,3);
    pcVar1 = *(code **)(in_ECX[0x39a] + 0x164);
    guard_check_icall(&PTR_1020e6b0,0x40000000,&local_18);
    (*pcVar1)();
    CMFCButton::SetStdImage((CMFCButton *)(in_ECX + 0x39a),0x18,0,0);
    pcVar1 = *(code **)(in_ECX[0x584] + 0x164);
    guard_check_icall(&PTR_1020e6b0,0x40000000,&local_18);
    (*pcVar1)();
    CMFCButton::SetStdImage((CMFCButton *)(in_ECX + 0x584),0xd,0,0);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

