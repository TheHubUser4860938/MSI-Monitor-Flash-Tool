// rea decompile_all
// name: CDC::AlphaBlend
// address: 0x10085f8e
// body: available
// range: 0x10085f8e-0x10085fc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CDC::AlphaBlend(int,int,int,int,class CDC *,int,int,int,int,struct
   _BLENDFUNCTION)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CDC::AlphaBlend(CDC *this,int param_1,int param_2,int param_3,int param_4,CDC *param_5,int param_6,
               int param_7,int param_8,int param_9,_BLENDFUNCTION param_10)

{
  HDC hdcSrc;
  BOOL BVar1;
  
  hdcSrc = (HDC)0x0;
  if (param_5 != (CDC *)0x0) {
    hdcSrc = *(HDC *)(param_5 + 4);
  }
  BVar1 = ::AlphaBlend(*(HDC *)(this + 4),param_1,param_2,param_3,param_4,hdcSrc,param_6,param_7,
                       param_8,param_9,param_10);
  return BVar1;
}

