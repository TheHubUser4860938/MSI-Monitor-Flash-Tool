// rea decompile_all
// name: __crt_stdio_input::format_string_parser<wchar_t>::scan_optional_field_width
// address: 0x1015976f
// body: available
// range: 0x1015976f-0x1015999a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: bool __thiscall
   __crt_stdio_input::format_string_parser<wchar_t>::scan_optional_field_width(void)
   
   Library: Visual Studio 2015 Release */

bool __thiscall
__crt_stdio_input::format_string_parser<wchar_t>::scan_optional_field_width
          (format_string_parser<wchar_t> *this)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  int local_8;
  
  iVar4 = 0x30;
  uVar1 = **(ushort **)(this + 8);
  uVar3 = (uint)uVar1;
  if (0x2f < uVar1) {
    if (uVar3 < 0x3a) {
LAB_10159790:
      uVar2 = uVar3 - iVar4;
    }
    else {
      iVar4 = 0xff10;
      if (uVar1 < 0xff10) {
        iVar4 = 0x660;
        if ((uVar1 < 0x660) ||
           ((0x669 < uVar1 &&
            ((iVar4 = 0x6f0, uVar1 < 0x6f0 ||
             ((0x6f9 < uVar1 &&
              ((iVar4 = 0x966, uVar1 < 0x966 ||
               ((0x96f < uVar1 &&
                ((iVar4 = 0x9e6, uVar1 < 0x9e6 ||
                 ((0x9ef < uVar1 &&
                  ((iVar4 = 0xa66, uVar1 < 0xa66 ||
                   ((0xa6f < uVar1 &&
                    ((iVar4 = 0xae6, uVar1 < 0xae6 ||
                     ((0xaef < uVar1 &&
                      ((iVar4 = 0xb66, uVar1 < 0xb66 ||
                       ((0xb6f < uVar1 &&
                        ((iVar4 = 0xc66, uVar1 < 0xc66 ||
                         ((0xc6f < uVar1 &&
                          ((iVar4 = 0xce6, uVar1 < 0xce6 ||
                           ((0xcef < uVar1 &&
                            ((iVar4 = 0xd66, uVar1 < 0xd66 ||
                             ((0xd6f < uVar1 &&
                              ((iVar4 = 0xe50, uVar1 < 0xe50 ||
                               ((0xe59 < uVar1 &&
                                ((iVar4 = 0xed0, uVar1 < 0xed0 ||
                                 ((0xed9 < uVar1 &&
                                  ((iVar4 = 0xf20, uVar1 < 0xf20 ||
                                   ((0xf29 < uVar1 &&
                                    ((iVar4 = 0x1040, uVar1 < 0x1040 ||
                                     ((0x1049 < uVar1 &&
                                      ((iVar4 = 0x17e0, uVar1 < 0x17e0 ||
                                       ((0x17e9 < uVar1 &&
                                        ((iVar4 = 0x1810, uVar1 < 0x1810 || (0x1819 < uVar1)))))))))
                                     )))))))))))))))))))))))))))))))))))))))))))))))))))))
        goto LAB_10159928;
        goto LAB_10159790;
      }
      if (uVar1 < 0xff1a) goto LAB_10159790;
      uVar2 = 0xffffffff;
    }
    if (uVar2 != 0xffffffff) goto LAB_10159955;
  }
LAB_10159928:
  if (((uVar1 < 0x41) || (0x5a < uVar3)) && (0x19 < (ushort)(uVar1 - 0x61))) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = uVar3 - 0x20;
    if (0x19 < (ushort)(uVar1 - 0x61)) {
      uVar2 = uVar3;
    }
    uVar2 = uVar2 - 0x37;
  }
LAB_10159955:
  if (uVar2 < 10) {
    local_8 = 0;
    lVar5 = wcstoull(*(ushort **)(this + 8),&local_8,10);
    if ((lVar5 == 0) || (local_8 == *(int *)(this + 8))) {
      reset_token_state_for_error(this,0x16);
      return false;
    }
    *(longlong *)(this + 0x20) = lVar5;
    *(int *)(this + 8) = local_8;
  }
  return true;
}

