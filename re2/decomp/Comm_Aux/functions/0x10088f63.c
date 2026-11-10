// rea decompile_all
// name: CMFCScanliner::attach
// address: 0x10088f63
// body: available
// range: 0x10088f63-0x10088ff7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CMFCScanliner::attach(unsigned char *,class CRect const &,unsigned
   int,unsigned int,unsigned char,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCScanliner::attach
          (CMFCScanliner *this,uchar *param_1,CRect *param_2,uint param_3,uint param_4,uchar param_5
          ,int param_6)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uchar *puVar5;
  uchar *puVar6;
  
  empty(this);
  uVar1 = *(undefined4 *)param_2;
  iVar2 = *(int *)(param_2 + 8);
  iVar3 = *(int *)param_2;
  iVar4 = *(int *)(param_2 + 4);
  if (param_4 == 0) {
    param_4 = iVar2 - iVar3;
  }
  if (param_3 == 0) {
    param_3 = iVar4 + (*(int *)(param_2 + 0xc) - iVar4);
  }
  *(int *)(this + 0x18) = *(int *)(param_2 + 0xc) - iVar4;
  *(uint *)(this + 0xc) = param_4;
  *(uint *)(this + 0x20) = param_4;
  *(uint *)(this + 0x1c) = (uint)param_5 * (iVar2 - iVar3);
  if (param_6 != 0) {
    *(uint *)(this + 0x20) = -param_4;
  }
  *(int *)(this + 0x10) = iVar4;
  this[0x24] = (CMFCScanliner)param_5;
  *(uint *)(this + 0x28) = param_3;
  *(undefined4 *)(this + 0x14) = uVar1;
  puVar5 = _begin(this,param_1);
  *(uchar **)(this + 4) = puVar5;
  puVar6 = _end(this,param_1);
  *(uchar **)this = puVar5;
  *(uchar **)(this + 8) = puVar6;
  return;
}

