// rea decompile_all
// name: CMFCVisualManagerOfficeXP::OnDrawMenuScrollButton
// address: 0x10144c48
// body: available
// range: 0x10144c48-0x10144d21 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CMFCVisualManagerOfficeXP::OnDrawMenuScrollButton(class CDC
   *,class CRect,int,int,int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOfficeXP::OnDrawMenuScrollButton
          (undefined4 param_1_00,CDC *param_1,undefined4 param_3,int param_4,undefined4 param_5,
          undefined4 param_6,int param_7,int param_8)

{
  code *pcVar1;
  AFX_GLOBAL_DATA *pAVar2;
  HBRUSH hbr;
  CPen *pCVar3;
  CPen *pCVar4;
  undefined4 local_20;
  undefined4 local_1c;
  undefined **local_18 [4];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x10144c54;
  param_4 = param_4 + -1;
  pAVar2 = GetGlobalData();
  hbr = (HBRUSH)0x0;
  if (pAVar2 != (AFX_GLOBAL_DATA *)0xffffff30) {
    hbr = *(HBRUSH *)(pAVar2 + 0xd4);
  }
  FillRect(*(HDC *)(param_1 + 4),(RECT *)&param_3,hbr);
  local_20 = 0;
  local_1c = 0;
  CMenuImages::Draw(param_1,(-(uint)(param_7 != 0) & 0xfffffff9) + 7,(CRect *)&param_3,0,
                    (CSize *)&local_20);
  if (param_8 != 0) {
    pAVar2 = GetGlobalData();
    CPen::CPen((CPen *)local_18,0,1,*(ulong *)(pAVar2 + 0x58));
    local_8 = 0;
    pCVar3 = CDC::SelectObject(param_1,(CPen *)local_18);
    pcVar1 = *(code **)(*(int *)param_1 + 0x24);
    guard_check_icall(5);
    pCVar4 = (CPen *)(*pcVar1)();
    InflateRect((LPRECT)&param_3,-1,-1);
    CDC::RoundRect(param_1,(tagRECT *)&param_3,(tagPOINT)0x200000002);
    CDC::SelectObject(param_1,pCVar4);
    CDC::SelectObject(param_1,pCVar3);
    local_18[0] = CPen::vftable;
    CImageList::~CImageList((CImageList *)local_18);
  }
  return;
}

