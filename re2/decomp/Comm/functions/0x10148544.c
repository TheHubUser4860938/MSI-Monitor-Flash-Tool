// rea decompile_all
// name: FUN_10148544
// address: 0x10148544
// body: available
// range: 0x10148544-0x101485f1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10148544(void)

{
  UINT UVar1;
  UINT *in_ECX;
  
  UVar1 = RegisterClipboardFormatW(L"Native");
  *in_ECX = UVar1;
  UVar1 = RegisterClipboardFormatW(L"OwnerLink");
  in_ECX[1] = UVar1;
  UVar1 = RegisterClipboardFormatW(L"ObjectLink");
  in_ECX[2] = UVar1;
  UVar1 = RegisterClipboardFormatW(L"Embedded Object");
  in_ECX[3] = UVar1;
  UVar1 = RegisterClipboardFormatW(L"Embed Source");
  in_ECX[4] = UVar1;
  UVar1 = RegisterClipboardFormatW(L"Link Source");
  in_ECX[5] = UVar1;
  UVar1 = RegisterClipboardFormatW(L"Object Descriptor");
  in_ECX[6] = UVar1;
  UVar1 = RegisterClipboardFormatW(L"Link Source Descriptor");
  in_ECX[7] = UVar1;
  UVar1 = RegisterClipboardFormatW(L"FileName");
  in_ECX[8] = UVar1;
  UVar1 = RegisterClipboardFormatW(L"FileNameW");
  in_ECX[9] = UVar1;
  UVar1 = RegisterClipboardFormatW(L"Rich Text Format");
  in_ECX[10] = UVar1;
  UVar1 = RegisterClipboardFormatW(L"RichEdit Text and Objects");
  in_ECX[0xb] = UVar1;
  return;
}

