// rea decompile_all
// name: FUN_10020220
// address: 0x10020220
// body: available
// range: 0x10020220-0x100203c6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10020220(void)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint *in_ECX;
  int *in_EDX;
  undefined4 *puVar10;
  uint *puVar11;
  uint uVar12;
  uint *puVar13;
  undefined4 local_4cc;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  _memset(&local_4cc,0xff,0x4c4);
  puVar2 = (undefined4 *)*in_EDX;
  uVar7 = (uint)(ushort)in_ECX[0x132];
  cVar1 = *(char *)((int)puVar2[1] + 0xd);
  puVar9 = puVar2;
  puVar8 = (undefined4 *)puVar2[1];
  while (cVar1 == '\0') {
    if ((uint)puVar8[4] < (uint)*(ushort *)((int)in_ECX + 0x4ca)) {
      puVar10 = (undefined4 *)puVar8[2];
      puVar8 = puVar9;
    }
    else {
      puVar10 = (undefined4 *)*puVar8;
    }
    puVar9 = puVar8;
    puVar8 = puVar10;
    cVar1 = *(char *)((int)puVar10 + 0xd);
  }
  if ((puVar9 == puVar2) || ((uint)*(ushort *)((int)in_ECX + 0x4ca) < (uint)puVar9[4])) {
    puVar9 = puVar2;
  }
  if (puVar9 != puVar2) {
    uVar3 = *in_ECX;
    puVar11 = (uint *)(uVar7 + puVar9[5]);
    puVar13 = puVar11;
    puVar6 = in_ECX;
    uVar12 = uVar3;
    while( true ) {
      uVar5 = uVar12 - 4;
      puVar4 = puVar6 + 1;
      if (uVar12 < 4) break;
      if (*puVar4 != *puVar13) goto LAB_100202ea;
      puVar13 = puVar13 + 1;
      puVar6 = puVar4;
      uVar12 = uVar5;
    }
    if (uVar5 != 0xfffffffc) {
LAB_100202ea:
      if (((char)*puVar4 != (char)*puVar13) ||
         ((uVar5 != 0xfffffffd &&
          ((*(char *)((int)puVar6 + 5) != *(char *)((int)puVar13 + 1) ||
           ((uVar5 != 0xfffffffe &&
            ((*(char *)((int)puVar6 + 6) != *(char *)((int)puVar13 + 2) ||
             ((uVar5 != 0xffffffff && (*(char *)((int)puVar6 + 7) != *(char *)((int)puVar13 + 3)))))
            )))))))) {
        puVar13 = &local_4cc;
        while (uVar7 = uVar3 - 4, 3 < uVar3) {
          if (*puVar13 != *puVar11) goto LAB_10020348;
          puVar13 = puVar13 + 1;
          puVar11 = puVar11 + 1;
          uVar3 = uVar7;
        }
        if (uVar7 != 0xfffffffc) {
LAB_10020348:
          if (((char)*puVar13 != (char)*puVar11) ||
             ((uVar7 != 0xfffffffd &&
              ((*(char *)((int)puVar13 + 1) != *(char *)((int)puVar11 + 1) ||
               ((uVar7 != 0xfffffffe &&
                ((*(char *)((int)puVar13 + 2) != *(char *)((int)puVar11 + 2) ||
                 ((uVar7 != 0xffffffff &&
                  (*(char *)((int)puVar13 + 3) != *(char *)((int)puVar11 + 3))))))))))))) {
            __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
            return;
          }
        }
        goto LAB_100203b4;
      }
    }
    uVar12 = 0;
    if (uVar3 != 0) {
      do {
        if (*(char *)(puVar9[5] + uVar12 + uVar7) != -1) {
          *(undefined1 *)(puVar9[5] + uVar12 + uVar7) = 0xff;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < *in_ECX);
    }
  }
LAB_100203b4:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

