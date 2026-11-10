// rea decompile_all
// name: CDrawingManager::PixelAlpha
// address: 0x100b436a
// body: available
// range: 0x100b436a-0x100b43c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: static unsigned long __stdcall CDrawingManager::PixelAlpha(unsigned
   long,double,double,double)
   
   Library: Visual Studio 2015 Release */

ulong CDrawingManager::PixelAlpha(ulong param_1,double param_2,double param_3,double param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_stack_00000008;
  
  uVar1 = FUN_100b0bbb(param_1 >> 0x10 & 0xff,CONCAT44(param_4._0_4_,param_3._4_4_));
  uVar2 = FUN_100b0bbb(param_1 >> 8 & 0xff,CONCAT44(param_3._0_4_,param_2._4_4_));
  uVar3 = FUN_100b0bbb(param_1 & 0xff,CONCAT44(param_2._0_4_,in_stack_00000008));
  return uVar3 & 0xff | ((uVar1 & 0xff) << 8 | uVar2 & 0xff) << 8;
}

