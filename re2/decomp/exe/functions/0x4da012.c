// rea decompile_all
// name: CCmdTarget::MemberIDFromName
// address: 0x4da012
// body: available
// range: 0x4da012-0x4da08f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: static long __stdcall CCmdTarget::MemberIDFromName(struct AFX_DISPMAP const *,char
   const *)
   
   Library: Visual Studio 2015 Release */

long CCmdTarget::MemberIDFromName(AFX_DISPMAP *param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint local_8;
  
  iVar3 = 0;
  do {
    if (param_1 == (AFX_DISPMAP *)0x0) {
      return -1;
    }
    puVar4 = *(undefined4 **)(param_1 + 4);
    uVar1 = GetEntryCount(param_1);
    local_8 = 0;
    if (uVar1 != 0) {
      do {
        if ((*(short *)(puVar4 + 3) != 0xfff) &&
           (iVar2 = AfxInvariantStrICmp((wchar_t *)*puVar4,(wchar_t *)param_2), iVar2 == 0)) {
          if (puVar4[1] != -1) {
            return puVar4[1];
          }
          return iVar3 << 0x10 | local_8 + 1 & 0xffff;
        }
        puVar4 = puVar4 + 8;
        local_8 = local_8 + 1;
      } while (local_8 < uVar1);
    }
    param_1 = *(AFX_DISPMAP **)param_1;
    iVar3 = iVar3 + 1;
  } while( true );
}

