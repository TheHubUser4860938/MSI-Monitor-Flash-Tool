// rea decompile_all
// name: AfxEndDeferRegisterClass
// address: 0x10042d0e
// body: available
// range: 0x10042d0e-0x10042fff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    int __stdcall AfxEndDeferRegisterClass(long)
   
   Library: Visual Studio 2008 Release */

int AfxEndDeferRegisterClass(long param_1)

{
  uint uVar1;
  AFX_MODULE_STATE *pAVar2;
  int iVar3;
  uint uVar4;
  uint local_38;
  code *local_34;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  wchar_t *local_14;
  undefined4 local_10;
  undefined4 local_c;
  AFX_MODULE_STATE *local_8;
  
  local_8 = AfxGetModuleState();
  param_1 = param_1 & ~*(uint *)(local_8 + 0x18);
  if (param_1 == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
    _memset(&local_38,0,0x28);
    local_34 = DefWindowProcW_exref;
    pAVar2 = AfxGetModuleState();
    local_28 = *(undefined4 *)(pAVar2 + 8);
    local_20 = DAT_10068990;
    local_10 = 8;
    if ((param_1 & 1U) != 0) {
      local_38 = 0xb;
      local_14 = L"AfxWnd90su";
      iVar3 = AfxRegisterClass((tagWNDCLASSA *)&local_38);
      if (iVar3 != 0) {
        uVar1 = 1;
      }
    }
    if ((param_1 & 0x20U) != 0) {
      local_38 = local_38 | 0x8b;
      local_14 = L"AfxOleControl90su";
      iVar3 = AfxRegisterClass((tagWNDCLASSA *)&local_38);
      if (iVar3 != 0) {
        uVar1 = uVar1 | 0x20;
      }
    }
    if ((param_1 & 2U) != 0) {
      local_38 = 0;
      local_14 = L"AfxControlBar90su";
      local_1c = 0x10;
      iVar3 = AfxRegisterClass((tagWNDCLASSA *)&local_38);
      if (iVar3 != 0) {
        uVar1 = uVar1 | 2;
      }
    }
    if ((param_1 & 4U) != 0) {
      local_38 = 8;
      local_1c = 0;
      iVar3 = _AfxRegisterWithIcon((tagWNDCLASSA *)&local_38,(char *)L"AfxMDIFrame90su",0x7a01);
      if (iVar3 != 0) {
        uVar1 = uVar1 | 4;
      }
    }
    if ((param_1 & 8U) != 0) {
      local_38 = 0xb;
      local_1c = 6;
      iVar3 = _AfxRegisterWithIcon((tagWNDCLASSA *)&local_38,(char *)L"AfxFrameOrView90su",0x7a02);
      if (iVar3 != 0) {
        uVar1 = uVar1 | 8;
      }
    }
    if ((param_1 & 0x10U) != 0) {
      local_c = 0xff;
      uVar4 = _AfxInitCommonControls((tagINITCOMMONCONTROLSEX *)&local_10,0x3fc0);
      uVar1 = uVar1 | uVar4;
      param_1 = param_1 & 0xffffc03f;
    }
    if ((param_1 & 0x40U) != 0) {
      local_c = 0x10;
      uVar4 = _AfxInitCommonControls((tagINITCOMMONCONTROLSEX *)&local_10,0x40);
      uVar1 = uVar1 | uVar4;
    }
    if ((param_1 & 0x80U) != 0) {
      local_c = 2;
      uVar4 = _AfxInitCommonControls((tagINITCOMMONCONTROLSEX *)&local_10,0x80);
      uVar1 = uVar1 | uVar4;
    }
    if ((param_1 & 0x100U) != 0) {
      local_c = 8;
      uVar4 = _AfxInitCommonControls((tagINITCOMMONCONTROLSEX *)&local_10,0x100);
      uVar1 = uVar1 | uVar4;
    }
    if ((param_1 & 0x200U) != 0) {
      local_c = 0x20;
      uVar4 = _AfxInitCommonControls((tagINITCOMMONCONTROLSEX *)&local_10,0x200);
      uVar1 = uVar1 | uVar4;
    }
    if ((param_1 & 0x400U) != 0) {
      local_c = 1;
      uVar4 = _AfxInitCommonControls((tagINITCOMMONCONTROLSEX *)&local_10,0x400);
      uVar1 = uVar1 | uVar4;
    }
    if ((param_1 & 0x800U) != 0) {
      local_c = 0x40;
      uVar4 = _AfxInitCommonControls((tagINITCOMMONCONTROLSEX *)&local_10,0x800);
      uVar1 = uVar1 | uVar4;
    }
    if ((param_1 & 0x1000U) != 0) {
      local_c = 4;
      uVar4 = _AfxInitCommonControls((tagINITCOMMONCONTROLSEX *)&local_10,0x1000);
      uVar1 = uVar1 | uVar4;
    }
    if ((param_1 & 0x2000U) != 0) {
      local_c = 0x80;
      uVar4 = _AfxInitCommonControls((tagINITCOMMONCONTROLSEX *)&local_10,0x2000);
      uVar1 = uVar1 | uVar4;
    }
    if ((param_1 & 0x4000U) != 0) {
      local_c = 0x800;
      uVar4 = _AfxInitCommonControls((tagINITCOMMONCONTROLSEX *)&local_10,0x4000);
      uVar1 = uVar1 | uVar4;
    }
    if ((param_1 & 0x8000U) != 0) {
      local_c = 0x400;
      uVar4 = _AfxInitCommonControls((tagINITCOMMONCONTROLSEX *)&local_10,0x8000);
      uVar1 = uVar1 | uVar4;
    }
    if ((param_1 & 0x10000U) != 0) {
      local_c = 0x200;
      uVar4 = _AfxInitCommonControls((tagINITCOMMONCONTROLSEX *)&local_10,0x10000);
      uVar1 = uVar1 | uVar4;
    }
    if ((param_1 & 0x20000U) != 0) {
      local_c = 0x100;
      uVar4 = _AfxInitCommonControls((tagINITCOMMONCONTROLSEX *)&local_10,0x20000);
      uVar1 = uVar1 | uVar4;
    }
    if ((param_1 & 0x40000U) != 0) {
      local_c = 0x8000;
      uVar4 = _AfxInitCommonControls((tagINITCOMMONCONTROLSEX *)&local_10,0x40000);
      uVar1 = uVar1 | uVar4;
    }
    if ((param_1 & 0x80000U) != 0) {
      local_c = 0x1000;
      uVar4 = _AfxInitCommonControls((tagINITCOMMONCONTROLSEX *)&local_10,0x80000);
      uVar1 = uVar1 | uVar4;
    }
    *(uint *)(local_8 + 0x18) = *(uint *)(local_8 + 0x18) | uVar1;
    if ((*(uint *)(local_8 + 0x18) & 0x3fc0) == 0x3fc0) {
      *(uint *)(local_8 + 0x18) = *(uint *)(local_8 + 0x18) | 0x10;
      uVar1 = uVar1 | 0x10;
    }
    uVar1 = (uint)((uVar1 & param_1) == param_1);
  }
  return uVar1;
}

