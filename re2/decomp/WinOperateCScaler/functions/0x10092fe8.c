// rea decompile_all
// name: CFrameWnd::UpdateFrameTitleForDocument
// address: 0x10092fe8
// body: available
// range: 0x10092fe8-0x100930e2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: void __thiscall CFrameWnd::UpdateFrameTitleForDocument(char const *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CFrameWnd::UpdateFrameTitleForDocument(CFrameWnd *this,char *param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  int local_58;
  wchar_t local_54 [38];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x48;
  local_8 = 0x10092ff4;
  uVar1 = FUN_1001e20a();
  FUN_1001d224(uVar1);
  local_8 = 0;
  uVar2 = CWnd::GetExStyle((CWnd *)this);
  if ((uVar2 & 0x4000) == 0) {
    FUN_1001d630(*(int *)(this + 0xf0),*(undefined4 *)(*(int *)(this + 0xf0) + -0xc));
    if (param_1 != (char *)0x0) {
      ATL::CSimpleStringT<wchar_t,0>::Append((CSimpleStringT<wchar_t,0> *)&local_58,L" - ");
      ATL::CSimpleStringT<wchar_t,0>::Append
                ((CSimpleStringT<wchar_t,0> *)&local_58,(wchar_t *)param_1);
      if (0 < *(int *)(this + 0x84)) {
        FID_conflict___swprintf_c(local_54,(wchar_t *)0x20,&DAT_101b7914,*(int *)(this + 0x84));
        ATL::CSimpleStringT<wchar_t,0>::Append((CSimpleStringT<wchar_t,0> *)&local_58,local_54);
      }
    }
  }
  else {
    if (param_1 != (char *)0x0) {
      ATL::CSimpleStringT<wchar_t,0>::Append
                ((CSimpleStringT<wchar_t,0> *)&local_58,(wchar_t *)param_1);
      if (0 < *(int *)(this + 0x84)) {
        FID_conflict___swprintf_c(local_54,(wchar_t *)0x20,&DAT_101b7914,*(int *)(this + 0x84));
        ATL::CSimpleStringT<wchar_t,0>::Append((CSimpleStringT<wchar_t,0> *)&local_58,local_54);
      }
      ATL::CSimpleStringT<wchar_t,0>::Append((CSimpleStringT<wchar_t,0> *)&local_58,L" - ");
    }
    FUN_1001d630(*(int *)(this + 0xf0),*(undefined4 *)(*(int *)(this + 0xf0) + -0xc));
  }
  FUN_1002f72b(*(undefined4 *)(this + 0x20),local_58);
  ATL::CStringData::Release((CStringData *)(local_58 + -0x10));
  FUN_10154478();
  return;
}

