// rea decompile_all
// name: ShadeRect
// address: 0x10138f9a
// body: available
// range: 0x10138f9a-0x1013905d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void __stdcall ShadeRect(class CDC *,class CRect,int)
   
   Library: Visual Studio 2015 Release */

void ShadeRect(CDC *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  CPen *pCVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  ulong local_20 [2];
  undefined **local_18 [4];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x20;
  local_8 = 0x10138fa6;
  local_20[0] = 0xc6c6c6;
  local_20[1] = 0xcecece;
  InflateRect((LPRECT)&param_2,-1,-1);
  iVar3 = 0;
  do {
    CPen::CPen((CPen *)local_18,0,1,local_20[iVar3]);
    local_8 = 0;
    pCVar1 = CDC::SelectObject(param_1,(CPen *)local_18);
    if (param_6 == 0) {
      CDC::MoveTo(param_1,(int)local_30,param_2);
      iVar2 = param_3 + iVar3;
      iVar4 = param_4;
    }
    else {
      CDC::MoveTo(param_1,(int)local_28,param_2 + iVar3);
      iVar4 = param_2 + iVar3;
      iVar2 = param_5;
    }
    CDC::LineTo(param_1,iVar4,iVar2);
    CDC::SelectObject(param_1,pCVar1);
    local_8 = 0xffffffff;
    local_18[0] = CPen::vftable;
    CImageList::~CImageList((CImageList *)local_18);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 2);
  return;
}

