// rea decompile_all
// name: CMenuImages::SetColor
// address: 0x100795b4
// body: available
// range: 0x100795b4-0x100796e5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: static void __stdcall CMenuImages::SetColor(enum CMenuImages::IMAGE_STATE,unsigned long)
   
   Library: Visual Studio 2015 Release */

void CMenuImages::SetColor(IMAGE_STATE param_1,ulong param_2)

{
  AFX_GLOBAL_DATA *pAVar1;
  int iVar2;
  CMFCToolBarImages *pCVar3;
  undefined8 uVar4;
  CMFCToolBarImages local_12c [84];
  int local_d8;
  int local_d4;
  HBITMAP__ *local_a0 [38];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x11c;
  local_8 = 0x100795c3;
  FUN_100793f8();
  CMFCToolBarImages::CMFCToolBarImages(local_12c);
  local_d8 = 9;
  uVar4 = 0;
  local_8 = 0;
  local_d4 = local_d8;
  pAVar1 = GetGlobalData();
  iVar2 = AFX_GLOBAL_DATA::Is32BitIcons(pAVar1);
  CMFCToolBarImages::Load
            (local_12c,(-(uint)(iVar2 != 0) & 0x3b7) + 0x3f01,(HINSTANCE__ *)uVar4,
             (int)((ulonglong)uVar4 >> 0x20));
  CMFCToolBarImages::SetTransparentColor(local_12c,0xff00ff);
  if (DAT_101daecc != 0) {
    CMFCToolBarImages::MirrorBitmap(local_a0,local_d8);
  }
  if (param_1 == 0) {
    pCVar3 = (CMFCToolBarImages *)&DAT_101dbca8;
  }
  else if (param_1 == 1) {
    pCVar3 = (CMFCToolBarImages *)&DAT_101dbed8;
  }
  else if (param_1 == 4) {
    pCVar3 = (CMFCToolBarImages *)&DAT_101dbdc0;
  }
  else if (param_1 == 2) {
    pCVar3 = (CMFCToolBarImages *)&DAT_101dbff0;
  }
  else {
    pCVar3 = (CMFCToolBarImages *)&DAT_101dc108;
    if (param_1 != 3) {
      pCVar3 = (CMFCToolBarImages *)&DAT_101dc220;
    }
  }
  if (param_2 != 0xffffffff) {
    CMFCToolBarImages::MapTo3dColors(local_12c,1,0,param_2);
  }
  if (DAT_101dbc94 == 0) {
    pAVar1 = GetGlobalData();
    if (*(int *)(pAVar1 + 0x1e8) == 0) {
      uVar4 = 0x3ff0000000000000;
    }
    else {
      uVar4 = *(undefined8 *)(pAVar1 + 0x1e0);
    }
    FUN_10052724(uVar4);
  }
  FUN_1004ebad();
  CMFCToolBarImages::CopyTo(local_12c,pCVar3);
  CMFCToolBarImages::~CMFCToolBarImages(local_12c);
  FUN_101490fe();
  return;
}

