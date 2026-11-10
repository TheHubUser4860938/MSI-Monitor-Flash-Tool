// rea decompile_all
// name: <lambda_4e60a939b0d047cfe11ddc22648dfba9>::operator()
// address: 0x10193846
// body: available
// range: 0x10193846-0x10193986 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall <lambda_4e60a939b0d047cfe11ddc22648dfba9>::operator()(void)const 
   
   Library: Visual Studio 2015 Release */

int __thiscall
<lambda_4e60a939b0d047cfe11ddc22648dfba9>::operator()
          (<lambda_4e60a939b0d047cfe11ddc22648dfba9> *this)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint *puVar5;
  void *pvVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  
  puVar5 = (uint *)**(int **)this;
  if (puVar5 == (uint *)0x0) {
    return -1;
  }
  bVar4 = (byte)DAT_10206460 & 0x1f;
  puVar9 = (uint *)((puVar5[1] ^ DAT_10206460) >> bVar4 | (puVar5[1] ^ DAT_10206460) << 0x20 - bVar4
                   );
  puVar7 = (uint *)((puVar5[2] ^ DAT_10206460) >> bVar4 | (puVar5[2] ^ DAT_10206460) << 0x20 - bVar4
                   );
  pvVar6 = (void *)((*puVar5 ^ DAT_10206460) >> bVar4 | (*puVar5 ^ DAT_10206460) << 0x20 - bVar4);
  pvVar1 = pvVar6;
  if (puVar9 != puVar7) goto LAB_10193940;
  uVar8 = (int)puVar7 - (int)pvVar6 >> 2;
  uVar2 = 0x200;
  if (uVar8 < 0x201) {
    uVar2 = uVar8;
  }
  uVar2 = uVar2 + uVar8;
  if (uVar2 == 0) {
    uVar2 = 0x20;
  }
  if (uVar2 < uVar8) {
LAB_101938c7:
    uVar2 = uVar8 + 4;
    pvVar1 = (void *)FUN_101920b4(pvVar6,uVar2,4);
    FID_conflict__free((void *)0x0);
    if (pvVar1 == (void *)0x0) {
      return -1;
    }
  }
  else {
    pvVar1 = (void *)FUN_101920b4(pvVar6,uVar2,4);
    FID_conflict__free((void *)0x0);
    if (pvVar1 == (void *)0x0) goto LAB_101938c7;
  }
  puVar9 = (uint *)((int)pvVar1 + uVar8 * 4);
  puVar7 = (uint *)((int)pvVar1 + uVar2 * 4);
  bVar4 = 0x20 - ((byte)DAT_10206460 & 0x1f) & 0x1f;
  uVar2 = (0U >> bVar4 | 0 << 0x20 - bVar4) ^ DAT_10206460;
  uVar8 = ~-(uint)(puVar7 < puVar9) & (uint)((int)puVar7 + (3 - (int)puVar9)) >> 2;
  if (uVar8 != 0) {
    uVar3 = 0;
    puVar5 = puVar9;
    do {
      uVar3 = uVar3 + 1;
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
    } while (uVar3 != uVar8);
  }
LAB_10193940:
  uVar2 = __crt_fast_encode_pointer<>(**(undefined4 **)(this + 4));
  *puVar9 = uVar2;
  pvVar1 = __crt_fast_encode_pointer<void*>(pvVar1);
  *(void **)**(undefined4 **)this = pvVar1;
  pvVar1 = __crt_fast_encode_pointer<void*>(puVar9 + 1);
  *(void **)(**(int **)this + 4) = pvVar1;
  pvVar1 = __crt_fast_encode_pointer<void*>(puVar7);
  *(void **)(**(int **)this + 8) = pvVar1;
  return 0;
}

