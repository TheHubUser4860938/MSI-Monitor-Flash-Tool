// rea decompile_all
// name: ATL::CAccessorBase::FreeType
// address: 0x44343f
// body: available
// range: 0x44343f-0x4434fc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: static void __cdecl ATL::CAccessorBase::FreeType(unsigned short,unsigned char *,struct
   IRowset *)
   
   Library: Visual Studio 2015 Release */

void __cdecl ATL::CAccessorBase::FreeType(ushort param_1,uchar *param_2,IRowset *param_3)

{
  code *pcVar1;
  int *piVar2;
  int *local_8;
  
  if (param_2 == (uchar *)0x0) {
    return;
  }
  if ((param_1 & 0x2000) == 0) {
    if (param_1 == 8) {
      Ordinal_6(*(undefined4 *)param_2);
    }
    else {
      if (param_1 != 9) {
        if (param_1 == 0xc) {
          Ordinal_9(param_2);
          goto LAB_004434e5;
        }
        if (param_1 != 0xd) {
          if (param_1 == 0x88) {
            CComQIPtr<IChapteredRowset,&struct___s_GUID_const__GUID_0c733a93_2a1c_11ce_ade5_00aa0044773d>
            ::
            CComQIPtr<IChapteredRowset,&struct___s_GUID_const__GUID_0c733a93_2a1c_11ce_ade5_00aa0044773d>
                      ((CComQIPtr<IChapteredRowset,&struct___s_GUID_const__GUID_0c733a93_2a1c_11ce_ade5_00aa0044773d>
                        *)&local_8,(IUnknown *)param_3);
            if (local_8 != (int *)0x0) {
              pcVar1 = *(code **)(*local_8 + 0x10);
              guard_check_icall(local_8,*(undefined4 *)param_2,0);
              (*pcVar1)();
            }
            CComPtrBase<IAccessor>::~CComPtrBase<IAccessor>((CComPtrBase<IAccessor> *)&local_8);
          }
          goto LAB_004434e5;
        }
      }
      piVar2 = *(int **)param_2;
      if (piVar2 == (int *)0x0) goto LAB_004434e5;
      pcVar1 = *(code **)(*piVar2 + 8);
      guard_check_icall(piVar2);
      (*pcVar1)();
    }
  }
  else {
    if (*(int *)param_2 == 0) goto LAB_004434e5;
    Ordinal_16(*(undefined4 *)param_2);
  }
  param_2[0] = '\0';
  param_2[1] = '\0';
  param_2[2] = '\0';
  param_2[3] = '\0';
LAB_004434e5:
  if ((param_1 & 0x1000) != 0) {
    CoTaskMemFree(*(LPVOID *)(param_2 + 4));
  }
  return;
}

