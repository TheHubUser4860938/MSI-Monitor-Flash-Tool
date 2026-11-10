// rea decompile_all
// name: COleControlContainer::CreateOleFont
// address: 0x43fb9e
// body: available
// range: 0x43fb9e-0x43fce1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: void __thiscall COleControlContainer::CreateOleFont(class CFont *)
   
   Library: Visual Studio 2015 Release */

void __thiscall COleControlContainer::CreateOleFont(COleControlContainer *this,CFont *param_1)

{
  int iVar1;
  COleControlContainer *pCVar2;
  CWindowDC local_b0 [8];
  HDC local_a8;
  undefined4 local_9c;
  undefined4 local_98;
  int local_94;
  undefined4 local_90;
  undefined2 local_8c;
  ushort local_8a;
  uint local_88;
  uint local_84;
  uint local_80;
  undefined4 local_7c;
  undefined **local_78;
  HGDIOBJ local_74;
  int local_70 [4];
  undefined2 local_60;
  byte local_5c;
  byte local_5b;
  byte local_5a;
  byte local_59;
  undefined1 local_54 [76];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xa0;
  local_74 = (HGDIOBJ)0x0;
  local_78 = CFont::vftable;
  local_8 = 0;
  if ((param_1 == (CFont *)0x0) || (*(int *)(param_1 + 4) == 0)) {
    local_74 = GetStockObject(0x11);
    if (local_74 == (HGDIOBJ)0x0) {
      local_74 = GetStockObject(0xd);
      if (local_74 == (HGDIOBJ)0x0) {
        *(undefined4 *)(this + 100) = 0;
        goto LAB_0043fccb;
      }
    }
    param_1 = (CFont *)&local_78;
  }
  GetObjectW(*(undefined ***)(param_1 + 4),0x5c,local_70);
  local_9c = 0x20;
  FUN_00415a10(local_54);
  local_98 = local_7c;
  local_8c = local_60;
  local_8a = (ushort)local_59;
  local_88 = (uint)local_5c;
  local_84 = (uint)local_5b;
  local_80 = (uint)local_5a;
  local_8._0_1_ = 1;
  if (local_70[0] < 0) {
    local_70[0] = -local_70[0];
  }
  CWindowDC::CWindowDC(local_b0,*(CWnd **)(this + 0x20));
  local_8 = CONCAT31(local_8._1_3_,2);
  local_94 = GetDeviceCaps(local_a8,0x5a);
  local_90 = 0;
  pCVar2 = this + 100;
  local_94 = (local_70[0] * 720000) / local_94;
  _AfxRelease((IUnknown **)pCVar2);
  iVar1 = Ordinal_420(&local_9c,&DAT_005dbb50,pCVar2);
  if (iVar1 < 0) {
    *(undefined4 *)pCVar2 = 0;
  }
  CWindowDC::~CWindowDC(local_b0);
  FUN_0040efa0();
LAB_0043fccb:
  local_78 = CFont::vftable;
  FUN_0040ee80();
  FUN_0055bae6();
  return;
}

