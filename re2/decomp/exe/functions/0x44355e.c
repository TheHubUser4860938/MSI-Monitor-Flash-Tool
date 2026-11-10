// rea decompile_all
// name: ATL::CDynamicAccessor::GetAlignment
// address: 0x44355e
// body: available
// range: 0x44355e-0x4435cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: static unsigned int __cdecl ATL::CDynamicAccessor::GetAlignment(unsigned short)
   
   Library: Visual Studio 2015 Release */

uint __cdecl ATL::CDynamicAccessor::GetAlignment(ushort param_1)

{
  if ((param_1 & 0x4000) != 0) {
    return 4;
  }
  if ((param_1 & 0x2000) != 0) {
    return 4;
  }
  if ((param_1 & 0x1000) != 0) {
    return 2;
  }
  if (param_1 < 0x49) {
    if (param_1 != 0x48) {
      switch(param_1) {
      case 2:
      case 0xb:
      case 0x12:
        return 2;
      case 3:
      case 4:
      case 8:
      case 9:
      case 10:
      case 0xd:
      case 0x13:
        break;
      default:
        return 8;
      case 0x10:
      case 0x11:
      case 0x14:
      case 0x15:
        goto switchD_00443596_caseD_2;
      }
    }
    return 4;
  }
  if ((param_1 != 0x80) && (param_1 != 0x81)) {
    if (param_1 == 0x82) {
      return 2;
    }
    if (param_1 != 0x83) {
      if (param_1 == 0x85) {
        return 2;
      }
      if (param_1 != 0x86) {
        if (param_1 != 0x87) {
          return 8;
        }
        return 2;
      }
      return 2;
    }
  }
switchD_00443596_caseD_2:
  return 1;
}

