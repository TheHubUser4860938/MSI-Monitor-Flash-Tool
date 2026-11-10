// rea decompile_all
// name: CToolTipCtrl::OnAddTool
// address: 0x4e5684
// body: available
// range: 0x4e5684-0x4e5729 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: long __thiscall CToolTipCtrl::OnAddTool(unsigned int,long)
   
   Library: Visual Studio 2015 Release */

long __thiscall CToolTipCtrl::OnAddTool(CToolTipCtrl *this,uint param_1,long param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined1 local_40 [4];
  int local_3c;
  undefined1 local_38 [32];
  int local_18;
  int local_14;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  _memcpy_s(local_38,0x30,(void *)param_2,*(rsize_t *)param_2);
  if (((local_18 == 0) && (local_14 != -1)) && (local_14 != 0)) {
    iVar2 = Lookup(local_14,local_40);
    if (iVar2 == 0) {
      puVar3 = (undefined4 *)CMapStringToPtr__operator__(local_14);
      *puVar3 = 0;
    }
    local_3c = 0;
    LookupKey(local_14,&local_3c);
    local_14 = local_3c;
  }
  pcVar1 = *(code **)(*(int *)this + 0x11c);
  guard_check_icall(0x432,param_1,local_38);
  (*pcVar1)();
  lVar4 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return lVar4;
}

