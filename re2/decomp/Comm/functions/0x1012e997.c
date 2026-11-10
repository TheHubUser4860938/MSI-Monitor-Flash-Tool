// rea decompile_all
// name: CCmdTarget::GetDispEntry
// address: 0x1012e997
// body: available
// range: 0x1012e997-0x1012ea6a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: struct AFX_DISPMAP_ENTRY const * __stdcall CCmdTarget::GetDispEntry(long)
   
   Library: Visual Studio 2015 Release */

AFX_DISPMAP_ENTRY * CCmdTarget::GetDispEntry(long param_1)

{
  code *pcVar1;
  AFX_DISPMAP *pAVar2;
  undefined4 *puVar3;
  AFX_DISPMAP_ENTRY *pAVar4;
  AFX_DISPMAP *pAVar5;
  uint uVar6;
  bool bVar7;
  uint in_stack_00000008;
  
  pcVar1 = *(code **)(*(int *)param_1 + 0x30);
  guard_check_icall();
  pAVar2 = (AFX_DISPMAP *)(*pcVar1)();
  bVar7 = in_stack_00000008 == 0;
  if (bVar7) {
    pAVar5 = pAVar2;
    if (pAVar2 == (AFX_DISPMAP *)0x0) {
      return (AFX_DISPMAP_ENTRY *)0x0;
    }
    do {
      for (puVar3 = *(undefined4 **)(pAVar5 + 4); puVar3[6] != -1; puVar3 = puVar3 + 8) {
        if (*(short *)(puVar3 + 3) == 0xfff) {
          in_stack_00000008 = puVar3[1];
          if ((in_stack_00000008 == 0xffffffff) &&
             (in_stack_00000008 = MemberIDFromName(pAVar2,(char *)*puVar3),
             in_stack_00000008 == 0xffffffff)) {
            return (AFX_DISPMAP_ENTRY *)0x0;
          }
          bVar7 = in_stack_00000008 == 0;
          goto LAB_1012e9fe;
        }
      }
      pAVar5 = *(AFX_DISPMAP **)pAVar5;
    } while (pAVar5 != (AFX_DISPMAP *)0x0);
  }
  else {
LAB_1012e9fe:
    if (!bVar7 && -1 < (int)in_stack_00000008) {
      uVar6 = 0;
      if (pAVar2 == (AFX_DISPMAP *)0x0) {
        return (AFX_DISPMAP_ENTRY *)0x0;
      }
      pAVar5 = pAVar2;
      do {
        if (in_stack_00000008 >> 0x10 <= uVar6) break;
        pAVar5 = *(AFX_DISPMAP **)pAVar5;
        uVar6 = uVar6 + 1;
      } while (pAVar5 != (AFX_DISPMAP *)0x0);
      if (pAVar5 != (AFX_DISPMAP *)0x0) {
        uVar6 = GetEntryCount(pAVar5);
        if ((in_stack_00000008 & 0xffff) <= uVar6) {
          pAVar4 = (AFX_DISPMAP_ENTRY *)
                   (*(int *)(pAVar5 + 4) + (in_stack_00000008 & 0xffff) * 0x20 + -0x20);
          if (*(int *)(pAVar4 + 4) == -1) {
            return pAVar4;
          }
          if (*(uint *)(pAVar4 + 4) == in_stack_00000008) {
            return pAVar4;
          }
        }
      }
    }
  }
  do {
    if (pAVar2 == (AFX_DISPMAP *)0x0) {
      return (AFX_DISPMAP_ENTRY *)0x0;
    }
    for (pAVar4 = *(AFX_DISPMAP_ENTRY **)(pAVar2 + 4); *(int *)(pAVar4 + 0x18) != -1;
        pAVar4 = pAVar4 + 0x20) {
      if (*(uint *)(pAVar4 + 4) == in_stack_00000008) {
        return pAVar4;
      }
    }
    pAVar2 = *(AFX_DISPMAP **)pAVar2;
  } while( true );
}

