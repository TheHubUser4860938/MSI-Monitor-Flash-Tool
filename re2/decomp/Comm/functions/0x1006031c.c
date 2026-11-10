// rea decompile_all
// name: CMFCToolBar::LoadToolBar
// address: 0x1006031c
// body: available
// range: 0x1006031c-0x10060370 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCToolBar::LoadToolBar(unsigned int,unsigned int,unsigned
   int,int,unsigned int,unsigned int,unsigned int)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCToolBar::LoadToolBar
          (CMFCToolBar *this,uint param_1,uint param_2,uint param_3,int param_4,uint param_5,
          uint param_6,uint param_7)

{
  code *pcVar1;
  int iVar2;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_c;
  uint local_8;
  
  CMFCToolBarInfo::CMFCToolBarInfo((CMFCToolBarInfo *)&local_24);
  local_24 = param_2;
  local_20 = param_7;
  local_1c = param_5;
  local_c = param_3;
  local_8 = param_6;
  pcVar1 = *(code **)(*(int *)this + 0x338);
  guard_check_icall(param_1,&local_24,param_4);
  iVar2 = (*pcVar1)();
  return iVar2;
}

