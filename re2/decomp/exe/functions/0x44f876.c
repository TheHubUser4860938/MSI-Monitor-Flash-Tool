// rea decompile_all
// name: CMFCScanlinerBitmap::attach
// address: 0x44f876
// body: available
// range: 0x44f876-0x44f962 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CMFCScanlinerBitmap::attach(struct HBITMAP__ *,class CPoint const &)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCScanlinerBitmap::attach(CMFCScanlinerBitmap *this,HBITMAP__ *param_1,CPoint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 local_4c [4];
  int local_48;
  long local_44;
  ushort local_3a;
  uchar *local_38;
  int local_34;
  uint local_30;
  CPoint *local_2c;
  RECT local_28;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  local_2c = param_2;
  if ((((param_1 != (HBITMAP__ *)0x0) && (iVar1 = GetObjectW(param_1,0x18,local_4c), iVar1 != 0)) &&
      (local_38 != (uchar *)0x0)) && (0x17 < local_3a)) {
    uVar2 = _labs(local_44);
    local_18.left = 0;
    local_18.top = 0;
    local_34 = local_48;
    local_18.right = local_48;
    local_28.left = *(LONG *)local_2c;
    local_28.top = *(LONG *)(local_2c + 4);
    local_28.right = local_28.left + local_48;
    local_28.bottom = local_28.top + uVar2;
    local_30 = uVar2;
    local_18.bottom = uVar2;
    IntersectRect(&local_18,&local_28,&local_18);
    uVar4 = local_48 * (uint)(local_3a >> 3);
    uVar3 = uVar4 & 0x80000003;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
    }
    if (uVar3 != 0) {
      uVar4 = uVar4 + (4 - uVar3);
    }
    CMFCScanliner::attach
              ((CMFCScanliner *)this,local_38,(CSize *)&local_34,uVar2,uVar4,(uchar)(local_3a >> 3),
               (uint)(local_44 < 0));
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

