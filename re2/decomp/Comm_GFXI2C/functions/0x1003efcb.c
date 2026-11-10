// rea decompile_all
// name: Create
// address: 0x1003efcb
// body: available
// range: 0x1003efcb-0x1003f01a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: virtual int __thiscall CWnd::Create(char const *,char const *,unsigned long,struct
   tagRECT const &,class CWnd *,unsigned int,struct CCreateContext *)
    public: virtual int __thiscall CWnd::Create(wchar_t const *,wchar_t const *,unsigned long,struct
   tagRECT const &,class CWnd *,unsigned int,struct CCreateContext *)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __thiscall
Create(void *this,undefined4 param_1,undefined4 param_2,uint param_3,int *param_4,int param_5,
      undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  
  if (param_5 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_5 + 0x20);
  }
  (**(code **)(*(int *)this + 0x5c))
            (0,param_1,param_2,param_3 | 0x40000000,*param_4,param_4[1],param_4[2] - *param_4,
             param_4[3] - param_4[1],uVar1,param_6,param_7);
  return;
}

