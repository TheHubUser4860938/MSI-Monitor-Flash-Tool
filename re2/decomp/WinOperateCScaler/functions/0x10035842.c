// rea decompile_all
// name: CByteArray::Serialize
// address: 0x10035842
// body: available
// range: 0x10035842-0x100358ed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CByteArray::Serialize(class CArchive &)
   
   Library: Visual Studio 2015 Release */

void __thiscall CByteArray::Serialize(CByteArray *this,CArchive *param_1)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  uint local_c;
  uint local_8;
  
  if ((~*(uint *)(param_1 + 0x18) & 1) == 0) {
    uVar1 = CArchive::ReadCount(param_1);
    FUN_100358ee(uVar1,0xffffffff);
    iVar2 = *(int *)(this + 4);
    for (uVar3 = *(uint *)(this + 8); uVar3 != 0; uVar3 = uVar3 - local_c) {
      local_c = uVar3;
      if (0x7ffffffe < uVar3) {
        local_c = 0x7fffffff;
      }
      FUN_1002652d(iVar2,local_c);
      iVar2 = iVar2 + local_c;
    }
  }
  else {
    CArchive::WriteCount(param_1,*(ulong *)(this + 8));
    iVar2 = *(int *)(this + 4);
    for (uVar3 = *(uint *)(this + 8); uVar3 != 0; uVar3 = uVar3 - local_8) {
      local_8 = uVar3;
      if (0x7ffffffe < uVar3) {
        local_8 = 0x7fffffff;
      }
      FUN_1002625d(iVar2,local_8);
      iVar2 = iVar2 + local_8;
    }
  }
  return;
}

