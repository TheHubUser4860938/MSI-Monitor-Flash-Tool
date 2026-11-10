// rea decompile_all
// name: CDockState::Serialize
// address: 0x54a255
// body: available
// range: 0x54a255-0x54a397 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CDockState::Serialize(class CArchive &)
   
   Library: Visual Studio 2015 Release */

void __thiscall CDockState::Serialize(CDockState *this,CArchive *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  CControlBarInfo *local_20;
  CDockState *local_1c;
  undefined4 local_18;
  uint local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x54a261;
  if ((~*(uint *)(param_1 + 0x18) & 1) == 0) {
    Clear(this);
    local_1c = this + 0x44;
    FUN_00450090(local_1c);
    if (1 < *(uint *)(this + 0x44)) {
      local_2c = 0;
      local_28 = 0;
      FUN_0041822b(&local_2c,8);
      SetScreenSize(this,(CSize *)&local_2c);
    }
    FUN_0043e7f2(local_14);
    FUN_0051dec6(local_14[0] & 0xffff,0xffffffff);
    local_14[0] = 0;
    if (0 < *(int *)(this + 0xc)) {
      do {
        local_20 = (CControlBarInfo *)FUN_00416408(0x5c);
        local_8 = 0;
        if (local_20 == (CControlBarInfo *)0x0) {
          local_18 = 0;
        }
        else {
          local_18 = CControlBarInfo::CControlBarInfo(local_20);
        }
        local_8 = 0xffffffff;
        puVar1 = (undefined4 *)FUN_004ab4cd(local_14[0]);
        *puVar1 = local_18;
        FUN_004ab4cd(local_14[0]);
        FUN_0054a05b(param_1,this);
        local_14[0] = local_14[0] + 1;
      } while ((int)local_14[0] < *(int *)(this + 0xc));
    }
    *(undefined4 *)local_1c = 2;
  }
  else {
    FUN_0043e915(*(undefined4 *)(this + 0x44));
    if (1 < *(uint *)(this + 0x44)) {
      local_20 = (CControlBarInfo *)(*(int *)(this + 0x28) - *(int *)(this + 0x20));
      local_24 = *(int *)(this + 0x24) - *(int *)(this + 0x1c);
      FUN_0043f073(&local_24,8);
    }
    FUN_0043e8d0(*(undefined2 *)(this + 0xc));
    iVar2 = 0;
    if (0 < *(int *)(this + 0xc)) {
      do {
        FUN_004ab4cd(iVar2);
        FUN_0054a05b(param_1,this);
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(this + 0xc));
    }
  }
  return;
}

