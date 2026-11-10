// rea decompile_all
// name: __crt_stdio_input::input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_>::process
// address: 0x1015931e
// body: available
// range: 0x1015931e-0x101593ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall __crt_stdio_input::input_processor<wchar_t,class
   __crt_stdio_input::string_input_adapter<wchar_t> >::process(void)
   
   Library: Visual Studio 2015 Release */

int __thiscall
__crt_stdio_input::input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_>::
process(input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_> *this)

{
  string_input_adapter<wchar_t> *this_00;
  int iVar1;
  bool bVar2;
  ushort uVar3;
  int iVar4;
  int *piVar5;
  
  this_00 = (string_input_adapter<wchar_t> *)(this + 8);
  bVar2 = string_input_adapter<wchar_t>::validate(this_00);
  if (bVar2) {
    bVar2 = format_string_parser<wchar_t>::validate((format_string_parser<wchar_t> *)(this + 0x18));
    if (bVar2) {
      do {
        bVar2 = format_string_parser<wchar_t>::advance
                          ((format_string_parser<wchar_t> *)(this + 0x18));
        if (!bVar2) break;
        bVar2 = process_state(this);
      } while (bVar2);
      iVar4 = *(int *)(this + 0x58);
      if (*(int *)(this + 0x5c) == 0) {
        uVar3 = string_input_adapter<wchar_t>::get(this_00);
        if (uVar3 == 0xffff) {
          iVar4 = -1;
        }
        string_input_adapter<wchar_t>::unget(this_00,uVar3);
      }
      if (((*(uint *)this & 1) != 0) && (iVar1 = *(int *)(this + 0x24), iVar1 != 0)) {
        piVar5 = __errno();
        *piVar5 = iVar1;
        FUN_1014f4c6();
      }
    }
    else {
      iVar4 = -1;
    }
  }
  else {
    iVar4 = -1;
  }
  return iVar4;
}

