// rea decompile_all
// name: Create
// address: 0x1001ccea
// body: available
// range: 0x1001ccea-0x1001cd3c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: virtual int __thiscall CWnd::Create(char const *,char const *,unsigned long,struct
   tagRECT const &,class CWnd *,unsigned int,struct CCreateContext *)
    public: virtual int __thiscall CWnd::Create(wchar_t const *,wchar_t const *,unsigned long,struct
   tagRECT const &,class CWnd *,unsigned int,struct CCreateContext *)
   
   Library: Visual Studio 2015 Release */

void Create(undefined4 param_1,undefined4 param_2,uint param_3,int *param_4,int param_5,
           undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  
  uVar2 = 0;
  if (param_5 != 0) {
    uVar2 = *(undefined4 *)(param_5 + 0x20);
  }
  iVar1 = *in_ECX;
  guard_check_icall(0,param_1,param_2,param_3 | 0x40000000,*param_4,param_4[1],param_4[2] - *param_4
                    ,param_4[3] - param_4[1],uVar2,param_6,param_7);
  (**(code **)(iVar1 + 0x5c))();
  return;
}

