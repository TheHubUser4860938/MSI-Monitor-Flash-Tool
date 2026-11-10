// rea decompile_all
// name: AfxEndDeferRegisterClass
// address: 0x1001b98d
// body: available
// range: 0x1001b98d-0x1001bc7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    int __stdcall AfxEndDeferRegisterClass(long)
   
   Library: Visual Studio 2015 Release */

int AfxEndDeferRegisterClass(long param_1)

{
  AFX_MODULE_STATE *pAVar1;
  AFX_MODULE_STATE *pAVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint local_34;
  code *local_30;
  undefined4 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  wchar_t *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  pAVar1 = AfxGetModuleState();
  uVar5 = param_1 & ~*(uint *)(pAVar1 + 0x18);
  if (uVar5 == 0) {
    uVar5 = 1;
  }
  else {
    uVar6 = 0;
    _memset(&local_34,0,0x28);
    local_30 = DefWindowProcW_exref;
    pAVar2 = AfxGetModuleState();
    local_24 = *(undefined4 *)(pAVar2 + 8);
    local_1c = DAT_101d8b00;
    local_c = 8;
    if ((uVar5 & 1) != 0) {
      local_34 = 0xb;
      local_10 = L"AfxWnd140su";
      iVar3 = AfxRegisterClass((tagWNDCLASSA *)&local_34);
      if (iVar3 != 0) {
        uVar6 = 1;
      }
    }
    if ((uVar5 & 0x20) != 0) {
      local_34 = local_34 | 0x8b;
      local_10 = L"AfxOleControl140su";
      iVar3 = AfxRegisterClass((tagWNDCLASSA *)&local_34);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 0x20;
      }
    }
    if ((uVar5 & 2) != 0) {
      local_34 = 0;
      local_10 = L"AfxControlBar140su";
      local_18 = 0x10;
      iVar3 = AfxRegisterClass((tagWNDCLASSA *)&local_34);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 2;
      }
    }
    if ((uVar5 & 4) != 0) {
      local_18 = 0;
      local_34 = 8;
      iVar3 = _AfxRegisterWithIcon((tagWNDCLASSA *)&local_34,(char *)L"AfxMDIFrame140su",0x7a01);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 4;
      }
    }
    if ((uVar5 & 8) != 0) {
      local_34 = 0xb;
      local_18 = 6;
      iVar3 = _AfxRegisterWithIcon((tagWNDCLASSA *)&local_34,(char *)L"AfxFrameOrView140su",0x7a02);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 8;
      }
    }
    if ((uVar5 & 0x10) != 0) {
      local_8 = 0xff;
      uVar4 = _AfxInitCommonControls((tagINITCOMMONCONTROLSEX *)&local_c,0x3fc0);
      uVar6 = uVar6 | uVar4;
      uVar5 = uVar5 & 0xffffc03f;
    }
    if ((uVar5 & 0x40) != 0) {
      local_8 = 0x10;
      uVar4 = _AfxInitCommonControls((tagINITCOMMONCONTROLSEX *)&local_c,0x40);
      uVar6 = uVar6 | uVar4;
    }
    if ((char)uVar5 < '\0') {
      local_8 = 2;
      uVar4 = _AfxInitCommonControls((tagINITCOMMONCONTROLSEX *)&local_c,0x80);
      uVar6 = uVar6 | uVar4;
    }
    if ((uVar5 & 0x100) != 0) {
      local_8 = 8;
      uVar4 = _AfxInitCommonControls((tagINITCOMMONCONTROLSEX *)&local_c,0x100);
      uVar6 = uVar6 | uVar4;
    }
    if ((uVar5 & 0x200) != 0) {
      local_8 = 0x20;
      uVar4 = _AfxInitCommonControls((tagINITCOMMONCONTROLSEX *)&local_c,0x200);
      uVar6 = uVar6 | uVar4;
    }
    if ((uVar5 & 0x400) != 0) {
      local_8 = 1;
      uVar4 = _AfxInitCommonControls((tagINITCOMMONCONTROLSEX *)&local_c,0x400);
      uVar6 = uVar6 | uVar4;
    }
    if ((uVar5 & 0x800) != 0) {
      local_8 = 0x40;
      uVar4 = _AfxInitCommonControls((tagINITCOMMONCONTROLSEX *)&local_c,0x800);
      uVar6 = uVar6 | uVar4;
    }
    if ((uVar5 & 0x1000) != 0) {
      local_8 = 4;
      uVar4 = _AfxInitCommonControls((tagINITCOMMONCONTROLSEX *)&local_c,0x1000);
      uVar6 = uVar6 | uVar4;
    }
    if ((uVar5 & 0x2000) != 0) {
      local_8 = 0x80;
      uVar4 = _AfxInitCommonControls((tagINITCOMMONCONTROLSEX *)&local_c,0x2000);
      uVar6 = uVar6 | uVar4;
    }
    if ((uVar5 & 0x4000) != 0) {
      local_8 = 0x800;
      uVar4 = _AfxInitCommonControls((tagINITCOMMONCONTROLSEX *)&local_c,0x4000);
      uVar6 = uVar6 | uVar4;
    }
    if ((uVar5 & 0x8000) != 0) {
      local_8 = 0x400;
      uVar4 = _AfxInitCommonControls((tagINITCOMMONCONTROLSEX *)&local_c,0x8000);
      uVar6 = uVar6 | uVar4;
    }
    if ((uVar5 & 0x10000) != 0) {
      local_8 = 0x200;
      uVar4 = _AfxInitCommonControls((tagINITCOMMONCONTROLSEX *)&local_c,0x10000);
      uVar6 = uVar6 | uVar4;
    }
    if ((uVar5 & 0x20000) != 0) {
      local_8 = 0x100;
      uVar4 = _AfxInitCommonControls((tagINITCOMMONCONTROLSEX *)&local_c,0x20000);
      uVar6 = uVar6 | uVar4;
    }
    if ((uVar5 & 0x40000) != 0) {
      local_8 = 0x8000;
      uVar4 = _AfxInitCommonControls((tagINITCOMMONCONTROLSEX *)&local_c,0x40000);
      uVar6 = uVar6 | uVar4;
    }
    if ((uVar5 & 0x80000) != 0) {
      local_8 = 0x1000;
      uVar4 = _AfxInitCommonControls((tagINITCOMMONCONTROLSEX *)&local_c,0x80000);
      uVar6 = uVar6 | uVar4;
    }
    *(uint *)(pAVar1 + 0x18) = *(uint *)(pAVar1 + 0x18) | uVar6;
    if ((*(uint *)(pAVar1 + 0x18) & 0x3fc0) == 0x3fc0) {
      uVar6 = uVar6 | 0x10;
      *(uint *)(pAVar1 + 0x18) = *(uint *)(pAVar1 + 0x18) | 0x10;
    }
    uVar5 = (uint)((uVar6 & uVar5) == uVar5);
  }
  return uVar5;
}

