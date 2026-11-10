// rea decompile_all
// name: CMFCCustomColorsPropertyPage::Setup
// address: 0x1017644c
// body: available
// range: 0x1017644c-0x10176537 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CMFCCustomColorsPropertyPage::Setup(unsigned char,unsigned char,unsigned
   char)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCCustomColorsPropertyPage::Setup
          (CMFCCustomColorsPropertyPage *this,uchar param_1,uchar param_2,uchar param_3)

{
  uint uVar1;
  undefined4 uVar2;
  double local_20;
  double local_18;
  double local_10;
  
  FUN_100b467d();
  uVar2 = (undefined4)((ulonglong)local_20 >> 0x20);
  FUN_101756b1(local_10,local_18,SUB84(local_20,0),uVar2,1);
  FUN_101756b1(local_10,local_18,SUB84(local_20,0),uVar2,1);
  *(uint *)(this + 0x268) = (uint)param_1;
  *(uint *)(this + 0x270) = (uint)param_2;
  *(uint *)(this + 0x26c) = (uint)param_3;
  uVar1 = HLS2Int(local_10);
  *(uint *)(this + 0x278) = uVar1;
  uVar1 = HLS2Int(local_18);
  *(uint *)(this + 0x274) = uVar1;
  uVar1 = HLS2Int(local_20);
  *(uint *)(this + 0x27c) = uVar1;
  if (*(int *)(this + 0x20) != 0) {
    FUN_10057526(0);
  }
  return;
}

