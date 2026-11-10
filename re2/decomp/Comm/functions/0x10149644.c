// rea decompile_all
// name: FUN_10149644
// address: 0x10149644
// body: available
// range: 0x10149644-0x101497e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x10149685) */
/* WARNING: Removing unreachable block (ram,0x101496c0) */
/* WARNING: Removing unreachable block (ram,0x1014973f) */

undefined4 FUN_10149644(void)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  BOOL BVar6;
  uint uVar7;
  uint uVar8;
  uint in_XCR0;
  uint local_18;
  uint local_14;
  
  DAT_101de29c = 0;
  DAT_101d4000 = DAT_101d4000 | 1;
  BVar6 = IsProcessorFeaturePresent(10);
  uVar5 = DAT_101d4000;
  if (BVar6 != 0) {
    local_18 = 0;
    DAT_101d4000 = DAT_101d4000 | 2;
    DAT_101de29c = 1;
    piVar1 = (int *)cpuid_basic_info(0);
    puVar2 = (uint *)cpuid_Version_info(1);
    uVar8 = puVar2[3];
    if (((piVar1[1] == 0x756e6547 && piVar1[2] == 0x49656e69) && piVar1[3] == 0x6c65746e) &&
       (((((uVar7 = *puVar2 & 0xfff3ff0, uVar7 == 0x106c0 || (uVar7 == 0x20660)) ||
          (uVar7 == 0x20670)) || ((uVar7 == 0x30650 || (uVar7 == 0x30660)))) || (uVar7 == 0x30670)))
       ) {
      DAT_101de2a0 = DAT_101de2a0 | 1;
    }
    if (6 < *piVar1) {
      iVar3 = cpuid_Extended_Feature_Enumeration_info(7);
      local_18 = *(uint *)(iVar3 + 4);
      if ((local_18 & 0x200) != 0) {
        DAT_101de2a0 = DAT_101de2a0 | 2;
      }
    }
    if ((uVar8 & 0x100000) != 0) {
      DAT_101d4000 = uVar5 | 6;
      DAT_101de29c = 2;
      if (((uVar8 & 0x8000000) != 0) && ((uVar8 & 0x10000000) != 0)) {
        uVar4 = xinuse(0);
        local_14 = in_XCR0 & (uint)uVar4;
        if ((local_14 & 6) == 6) {
          DAT_101d4000 = uVar5 | 0xe;
          DAT_101de29c = 3;
          if ((local_18 & 0x20) != 0) {
            DAT_101d4000 = uVar5 | 0x2e;
            DAT_101de29c = 5;
          }
        }
      }
    }
  }
  return 0;
}

