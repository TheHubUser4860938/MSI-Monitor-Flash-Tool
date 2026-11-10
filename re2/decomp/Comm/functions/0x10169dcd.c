// rea decompile_all
// name: _ProcessCodePage
// address: 0x10169dcd
// body: available
// range: 0x10169dcd-0x10169eaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    _ProcessCodePage
   
   Library: Visual Studio 2015 Release */

UINT _ProcessCodePage(wchar_t *param_1,int param_2)

{
  wchar_t wVar1;
  uint uVar2;
  int iVar3;
  UINT UVar4;
  uint uVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  bool bVar8;
  UINT local_8;
  
  if ((param_1 != (wchar_t *)0x0) && (uVar2 = 0, *param_1 != L'\0')) {
    pwVar7 = L"ACP";
    pwVar6 = param_1;
    do {
      wVar1 = *pwVar6;
      bVar8 = (ushort)wVar1 < (ushort)*pwVar7;
      if (wVar1 != *pwVar7) {
LAB_10169e18:
        uVar5 = -(uint)bVar8 | 1;
        goto LAB_10169e1d;
      }
      if (wVar1 == L'\0') break;
      wVar1 = pwVar6[1];
      bVar8 = (ushort)wVar1 < (ushort)pwVar7[1];
      if (wVar1 != pwVar7[1]) goto LAB_10169e18;
      pwVar6 = pwVar6 + 2;
      pwVar7 = pwVar7 + 2;
    } while (wVar1 != L'\0');
    uVar5 = 0;
LAB_10169e1d:
    if (uVar5 != 0) {
      pwVar7 = L"OCP";
      pwVar6 = param_1;
      do {
        wVar1 = *pwVar6;
        bVar8 = (ushort)wVar1 < (ushort)*pwVar7;
        if (wVar1 != *pwVar7) {
LAB_10169e4c:
          uVar2 = -(uint)bVar8 | 1;
          break;
        }
        if (wVar1 == L'\0') break;
        wVar1 = pwVar6[1];
        bVar8 = (ushort)wVar1 < (ushort)pwVar7[1];
        if (wVar1 != pwVar7[1]) goto LAB_10169e4c;
        pwVar6 = pwVar6 + 2;
        pwVar7 = pwVar7 + 2;
      } while (wVar1 != L'\0');
      if (uVar2 != 0) {
        UVar4 = __wtol(param_1);
        return UVar4;
      }
      iVar3 = GetLocaleInfoW(*(LCID *)(param_2 + 8),0x2000000b,(LPWSTR)&local_8,2);
      if (iVar3 == 0) {
        return 0;
      }
      return local_8;
    }
  }
  iVar3 = GetLocaleInfoW(*(LCID *)(param_2 + 8),0x20001004,(LPWSTR)&local_8,2);
  if (iVar3 == 0) {
    return 0;
  }
  if (local_8 == 0) {
    UVar4 = GetACP();
    return UVar4;
  }
  return local_8;
}

