// rea decompile_all
// name: __crt_stdio_input::format_string_parser<wchar_t>::scan_scanset_range
// address: 0x10190b16
// body: available
// range: 0x10190b16-0x10190c25 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: bool __thiscall
   __crt_stdio_input::format_string_parser<wchar_t>::scan_scanset_range(void)
   
   Library: Visual Studio 2015 Release */

bool __thiscall
__crt_stdio_input::format_string_parser<wchar_t>::scan_scanset_range
          (format_string_parser<wchar_t> *this)

{
  scanset_storage<2> *this_00;
  wchar_t wVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  uchar *puVar4;
  wchar_t wVar5;
  wchar_t wVar6;
  bool bVar7;
  
  this_00 = (scanset_storage<2> *)(this + 0x34);
  puVar4 = scanset_storage<2>::data(this_00);
  if (puVar4 == (uchar *)0x0) {
    reset_token_state_for_error(this,0xc);
    bVar7 = false;
  }
  else {
    scanset_buffer<wchar_t>::reset((scanset_buffer<wchar_t> *)this_00);
    bVar7 = **(short **)(this + 8) == 0x5e;
    if (bVar7) {
      *(short **)(this + 8) = *(short **)(this + 8) + 1;
    }
    if (**(short **)(this + 8) == 0x5d) {
      *(short **)(this + 8) = *(short **)(this + 8) + 1;
      scanset_buffer<wchar_t>::set((scanset_buffer<wchar_t> *)this_00,L']');
    }
    pwVar2 = *(wchar_t **)(this + 8);
    wVar5 = *pwVar2;
    while (wVar5 != L']') {
      pwVar3 = *(wchar_t **)(this + 8);
      wVar5 = *pwVar3;
      if (wVar5 == L'\0') break;
      if (((wVar5 == L'-') && (pwVar3 != pwVar2)) && (wVar1 = pwVar3[1], wVar1 != L']')) {
        wVar5 = pwVar3[-1];
        wVar6 = wVar1;
        if ((ushort)wVar1 < (ushort)wVar5) {
          wVar6 = wVar5;
          wVar5 = wVar1;
        }
        for (; wVar5 != (wchar_t)(wVar6 + L'\x01'); wVar5 = wVar5 + L'\x01') {
          scanset_buffer<wchar_t>::set((scanset_buffer<wchar_t> *)this_00,wVar5);
        }
      }
      else {
        scanset_buffer<wchar_t>::set((scanset_buffer<wchar_t> *)this_00,wVar5);
      }
      *(int *)(this + 8) = *(int *)(this + 8) + 2;
      wVar5 = **(wchar_t **)(this + 8);
    }
    if (**(short **)(this + 8) == 0) {
      reset_token_state_for_error(this,0x16);
      bVar7 = false;
    }
    else {
      if (bVar7) {
        scanset_buffer<wchar_t>::invert((scanset_buffer<wchar_t> *)this_00);
      }
      *(int *)(this + 8) = *(int *)(this + 8) + 2;
      bVar7 = true;
    }
  }
  return bVar7;
}

