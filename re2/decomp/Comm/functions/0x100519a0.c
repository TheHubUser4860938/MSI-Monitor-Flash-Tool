// rea decompile_all
// name: CMFCToolBarImages::MapToSysColor
// address: 0x100519a0
// body: available
// range: 0x100519a0-0x10051a2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: static unsigned long __stdcall CMFCToolBarImages::MapToSysColor(unsigned long,int)
   
   Library: Visual Studio 2015 Release */

ulong CMFCToolBarImages::MapToSysColor(ulong param_1,int param_2)

{
  AFX_GLOBAL_DATA *pAVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  do {
    if (param_1 == (&DAT_10187f3c)[iVar5 * 2]) {
      if (param_2 != 0) {
        iVar6 = *(int *)(&UNK_10187f40 + iVar5 * 8);
        pAVar1 = GetGlobalData();
        uVar2 = AFX_GLOBAL_DATA::GetColor(pAVar1,iVar6);
        iVar6 = *(int *)(&UNK_10187f40 + iVar5 * 8);
        pAVar1 = GetGlobalData();
        uVar3 = AFX_GLOBAL_DATA::GetColor(pAVar1,iVar6);
        iVar5 = *(int *)(&UNK_10187f40 + iVar5 * 8);
        pAVar1 = GetGlobalData();
        uVar4 = AFX_GLOBAL_DATA::GetColor(pAVar1,iVar5);
        return uVar4 >> 0x10 & 0xff | ((uVar3 & 0xff) << 8 | uVar2 >> 8 & 0xff) << 8;
      }
      iVar5 = *(int *)(&UNK_10187f40 + iVar5 * 8);
      pAVar1 = GetGlobalData();
      uVar2 = AFX_GLOBAL_DATA::GetColor(pAVar1,iVar5);
      return uVar2;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 4);
  return param_1;
}

