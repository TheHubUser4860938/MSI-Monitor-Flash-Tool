// rea decompile_all
// name: CList<tagPOINT,tagPOINT>::Serialize
// address: 0x10066d06
// body: available
// range: 0x10066d06-0x10066d70 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CList<struct tagPOINT,struct tagPOINT>::Serialize(class CArchive
   &)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CList<tagPOINT,tagPOINT>::Serialize(CList<tagPOINT,tagPOINT> *this,CArchive *param_1)

{
  tagPOINT tVar1;
  ulong uVar2;
  undefined4 *puVar3;
  CList<tagPOINT,tagPOINT> *local_c;
  CList<tagPOINT,tagPOINT> *local_8;
  
  local_c = this;
  local_8 = this;
  if ((~*(uint *)(param_1 + 0x18) & 1) == 0) {
    for (uVar2 = CArchive::ReadCount(param_1); uVar2 != 0; uVar2 = uVar2 - 1) {
      FUN_1009cbd5(param_1,&local_c,1);
      tVar1.y = (LONG)local_8;
      tVar1.x = (LONG)local_c;
      AddTail(this,tVar1);
    }
  }
  else {
    CArchive::WriteCount(param_1,*(ulong *)(this + 0xc));
    for (puVar3 = *(undefined4 **)(this + 4); puVar3 != (undefined4 *)0x0;
        puVar3 = (undefined4 *)*puVar3) {
      FUN_1009cbd5(param_1,puVar3 + 2,1);
    }
  }
  return;
}

