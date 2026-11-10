// rea decompile_all
// name: <lambda_275893d493268fdec8709772e3fcec0e>::operator()
// address: 0x101ac361
// body: available
// range: 0x101ac361-0x101ac480 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall <lambda_275893d493268fdec8709772e3fcec0e>::operator()(void)const 
   
   Library: Visual Studio 2015 Release */

int __thiscall
<lambda_275893d493268fdec8709772e3fcec0e>::operator()
          (<lambda_275893d493268fdec8709772e3fcec0e> *this)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  sbyte sVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  uint *_Memory;
  uint local_18;
  
  uVar3 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  puVar8 = (uint *)**(int **)this;
  if (puVar8 != (uint *)0x0) {
    local_18 = DAT_1023dfec & 0x1f;
    sVar7 = (sbyte)local_18;
    _Memory = (uint *)((*puVar8 ^ DAT_1023dfec) >> sVar7 | (*puVar8 ^ DAT_1023dfec) << 0x20 - sVar7)
    ;
    puVar8 = (uint *)((puVar8[1] ^ DAT_1023dfec) >> sVar7 |
                     (puVar8[1] ^ DAT_1023dfec) << 0x20 - sVar7);
    if ((_Memory != (uint *)0x0) && (puVar9 = puVar8, _Memory != (uint *)0xffffffff)) {
      do {
        sVar7 = (sbyte)local_18;
        bVar2 = 0x20U - sVar7 & 0x1f;
        uVar4 = (0U >> bVar2 | 0 << 0x20 - bVar2) ^ DAT_1023dfec;
        do {
          puVar8 = puVar8 + -1;
          if (puVar8 < _Memory) {
            if (_Memory != (uint *)0xffffffff) {
              FID_conflict__free(_Memory);
            }
            bVar2 = 0x20 - ((byte)DAT_1023dfec & 0x1f) & 0x1f;
            uVar4 = (0U >> bVar2 | 0 << 0x20 - bVar2) ^ DAT_1023dfec;
            *(uint *)**(undefined4 **)this = uVar4;
            *(uint *)(**(int **)this + 4) = uVar4;
            *(uint *)(**(int **)this + 8) = uVar4;
            goto LAB_101ac472;
          }
        } while (*puVar8 == uVar4);
        uVar10 = *puVar8 ^ DAT_1023dfec;
        *puVar8 = uVar4;
        guard_check_icall();
        (*(code *)(uVar10 >> sVar7 | uVar10 << 0x20 - sVar7))();
        local_18 = DAT_1023dfec & 0x1f;
        uVar10 = *(uint *)**(int **)this ^ DAT_1023dfec;
        uVar4 = ((uint *)**(int **)this)[1] ^ DAT_1023dfec;
        sVar7 = (sbyte)local_18;
        puVar1 = (uint *)(uVar10 >> sVar7 | uVar10 << 0x20 - sVar7);
        puVar5 = (uint *)(uVar4 >> sVar7 | uVar4 << 0x20 - sVar7);
        if ((puVar1 != _Memory) || (puVar5 != puVar9)) {
          puVar8 = puVar5;
          _Memory = puVar1;
          puVar9 = puVar5;
        }
      } while( true );
    }
  }
LAB_101ac472:
  iVar6 = __security_check_cookie(uVar3 ^ (uint)&stack0xfffffffc);
  return iVar6;
}

