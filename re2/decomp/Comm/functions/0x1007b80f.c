// rea decompile_all
// name: CDrawingManager::Fill4ColorsGradient
// address: 0x1007b80f
// body: available
// range: 0x1007b80f-0x1007b8ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CDrawingManager::Fill4ColorsGradient(class CRect,unsigned long,unsigned
   long,unsigned long,unsigned long,int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CDrawingManager::Fill4ColorsGradient
          (CDrawingManager *this,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,
          undefined4 param_7,undefined4 param_8,undefined4 param_9,int param_10,int param_11)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = param_4;
  local_c = param_5;
  local_28 = param_2;
  local_24 = param_3;
  if (param_10 == 0) {
    local_28 = ((param_4 - param_2) * param_11) / 100 + param_2;
    local_10 = local_28;
  }
  else {
    local_24 = ((param_5 - param_3) * param_11) / 100 + param_3;
    local_c = local_24;
  }
  FillGradient(this,param_2,param_3,local_10,local_c,param_6,param_7,param_10,0,0);
  FillGradient(this,local_28,local_24,param_4,param_5,param_8,param_9,param_10,0,0);
  return;
}

