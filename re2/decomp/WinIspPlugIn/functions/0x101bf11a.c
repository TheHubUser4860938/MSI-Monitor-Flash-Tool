// rea decompile_all
// name: FUN_101bf11a
// address: 0x101bf11a
// body: available
// range: 0x101bf11a-0x101bf366 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x101bf366 with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_101bf11a(uint param_1,byte param_2,uint param_3,uint param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  uint in_ECX;
  uint uVar7;
  int iVar8;
  int unaff_ESI;
  longlong lVar9;
  uint in_stack_00000020;
  char *in_stack_00000024;
  uint local_8;
  
  iVar8 = 0;
  *in_stack_00000024 = '\0';
  if ((*(byte *)((&DAT_102498c8)[(int)param_1 >> 6] + 0x28 + (param_1 & 0x3f) * 0x30) & 0x80) == 0)
  {
    return 0;
  }
  local_8 = in_ECX;
  if ((in_stack_00000020 & 0x74000) == 0) {
    local_8 = 0;
    iVar3 = FUN_101bff10(&local_8);
    if (iVar3 != 0) {
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      pcVar1 = (code *)swi(3);
      iVar8 = (*pcVar1)();
      return iVar8;
    }
    if ((local_8 & 0x74000) == 0) {
      in_stack_00000020 = in_stack_00000020 | 0x4000;
    }
    else {
      in_stack_00000020 = in_stack_00000020 | local_8 & 0x74000;
    }
  }
  uVar4 = in_stack_00000020 & 0x74000;
  if (uVar4 == 0x4000) {
    *in_stack_00000024 = '\0';
  }
  else if ((uVar4 == 0x10000) || (uVar4 == 0x14000)) {
    if ((in_stack_00000020 & 0x301) == 0x301) goto LAB_101bf1cc;
  }
  else if ((uVar4 == 0x20000) || (uVar4 == 0x24000)) {
LAB_101bf1cc:
    *in_stack_00000024 = '\x02';
  }
  else if ((uVar4 == 0x40000) || (uVar4 == 0x44000)) {
    *in_stack_00000024 = '\x01';
  }
  if ((in_stack_00000020 & 0x70000) == 0) {
    return 0;
  }
  if ((param_2 & 0x40) != 0) {
    return 0;
  }
  uVar4 = param_3 & 0xc0000000;
  uVar7 = 0;
  bVar2 = false;
  if (uVar4 == 0x40000000) {
LAB_101bf201:
    if (param_4 == 0) {
      return 0;
    }
    if (param_4 < 3) {
LAB_101bf254:
      bVar2 = true;
LAB_101bf257:
      if (uVar7 != 0) goto LAB_101bf25f;
      goto LAB_101bf2fa;
    }
    if (4 < param_4) {
      if (param_4 != 5) {
        return 0;
      }
      goto LAB_101bf254;
    }
    lVar9 = __lseeki64_nolock(param_1,0x200000000,unaff_ESI);
    if (lVar9 != 0) {
      lVar9 = __lseeki64_nolock(param_1,0,unaff_ESI);
      if (lVar9 == -1) goto LAB_101bf2b7;
      uVar7 = param_3 >> 0x1f;
      goto LAB_101bf257;
    }
  }
  else {
    if (uVar4 != 0x80000000) {
      if (uVar4 != 0xc0000000) {
        return 0;
      }
      goto LAB_101bf201;
    }
LAB_101bf25f:
    local_8 = 0;
    iVar3 = __read_nolock(param_1,&local_8,3);
    if (0 < iVar3) {
      bVar2 = (bool)(bVar2 & !bVar2);
    }
    if (iVar3 == -1) goto LAB_101bf2b7;
    if (iVar3 == 2) {
LAB_101bf2a0:
      if ((local_8 & 0xffff) == 0xfffe) {
        piVar5 = __errno();
        *piVar5 = 0x16;
        goto LAB_101bf2b7;
      }
      if ((local_8 & 0xffff) == 0xfeff) {
        lVar9 = __lseeki64_nolock(param_1,0,unaff_ESI);
        if (lVar9 == -1) goto LAB_101bf2b7;
        *in_stack_00000024 = '\x02';
        goto LAB_101bf2fa;
      }
    }
    else if (iVar3 == 3) {
      if (local_8 == 0xbfbbef) {
        *in_stack_00000024 = '\x01';
        goto LAB_101bf2fa;
      }
      goto LAB_101bf2a0;
    }
    lVar9 = __lseeki64_nolock(param_1,0,unaff_ESI);
    if (lVar9 == -1) goto LAB_101bf2b7;
LAB_101bf2fa:
    if (!bVar2) {
      return 0;
    }
  }
  iVar3 = 0;
  local_8 = 0;
  if (*in_stack_00000024 == '\x01') {
    local_8 = 0xbfbbef;
    iVar3 = 3;
LAB_101bf32a:
    if (iVar3 == 0) {
      return 0;
    }
  }
  else {
    if (*in_stack_00000024 != '\x02') goto LAB_101bf32a;
    local_8 = 0xfeff;
    iVar3 = 2;
  }
  while (iVar6 = __write(param_1,(void *)((int)&local_8 + iVar8),iVar3 - iVar8), iVar6 != -1) {
    iVar8 = iVar8 + iVar6;
    if (iVar3 <= iVar8) {
      return 0;
    }
  }
LAB_101bf2b7:
  piVar5 = __errno();
  return *piVar5;
}

