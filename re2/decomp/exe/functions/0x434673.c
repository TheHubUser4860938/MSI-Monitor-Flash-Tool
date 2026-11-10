// rea decompile_all
// name: CDlgGroupRadioButtonIterator::MovePrev
// address: 0x434673
// body: available
// range: 0x434673-0x4346f2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CDlgGroupRadioButtonIterator::MovePrev(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CDlgGroupRadioButtonIterator::MovePrev(CDlgGroupRadioButtonIterator *this)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 local_c [4];
  int local_8;
  
  FUN_00433d13(this);
  bVar1 = false;
  iVar5 = local_8;
  do {
    if (iVar5 == 0) goto LAB_004346b0;
    uVar3 = COleControlSiteOrWnd::GetStyle(*(COleControlSiteOrWnd **)(iVar5 + 8));
    if ((uVar3 >> 0x11 & 1) != 0) goto LAB_004346b0;
    FUN_00434322(&local_8);
    while (iVar5 = local_8, local_8 == 0) {
LAB_004346b0:
      uVar4 = GetLastButton(this);
      FUN_00433d33(uVar4);
      if (local_8 == 0) {
        return;
      }
      if (bVar1) {
        return;
      }
      bVar1 = true;
    }
    bVar2 = IsDisabled(*(COleControlSiteOrWnd **)(local_8 + 8));
    if (!bVar2) {
      FUN_00433d33(local_c);
      return;
    }
  } while( true );
}

