// rea decompile_all
// name: CMFCVisualManagerOffice2007::OnEraseTabsFrame
// address: 0x100d15ed
// body: available
// range: 0x100d15ed-0x100d1786 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CMFCVisualManagerOffice2007::OnEraseTabsFrame(class CDC *,class
   CRect,class CMFCBaseTabCtrl const *)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCVisualManagerOffice2007::OnEraseTabsFrame
          (CMFCVisualManagerOffice2007 *this,CDC *param_1,int param_3,int param_4,int param_5,
          LONG param_6,int *param_7)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  AFX_GLOBAL_DATA *pAVar4;
  HBRUSH hbr;
  CPen *pCVar5;
  undefined1 local_28 [8];
  undefined **local_20 [2];
  CMFCVisualManagerOffice2007 *local_18;
  CDC *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  piVar2 = param_7;
  uStack_4 = 0x18;
  local_8 = 0x100d15f9;
  local_14 = param_1;
  local_18 = this;
  iVar3 = CanDrawImage(this);
  if ((iVar3 != 0) && (piVar2[0x4d] == 0)) {
    pcVar1 = *(code **)(*piVar2 + 0x288);
    guard_check_icall();
    iVar3 = (*pcVar1)();
    if (iVar3 == 0) {
      pcVar1 = *(code **)(*piVar2 + 0x2a8);
      guard_check_icall();
      iVar3 = (*pcVar1)();
      if (iVar3 == 0) {
        pcVar1 = *(code **)(*piVar2 + 0x28c);
        guard_check_icall();
        iVar3 = (*pcVar1)();
        if (iVar3 == 0) {
          pcVar1 = *(code **)(*piVar2 + 0x290);
          guard_check_icall();
          iVar3 = (*pcVar1)();
          if (iVar3 == 0) {
            pcVar1 = *(code **)(*piVar2 + 0x280);
            guard_check_icall();
            iVar3 = (*pcVar1)();
            if (iVar3 != 0) {
              pAVar4 = GetGlobalData();
              hbr = (HBRUSH)0x0;
              if (pAVar4 != (AFX_GLOBAL_DATA *)0xffffff38) {
                hbr = *(HBRUSH *)(pAVar4 + 0xcc);
              }
              FillRect(*(HDC *)(param_1 + 4),(RECT *)&param_3,hbr);
              if (piVar2[0x24] != 0) {
                CPen::CPen((CPen *)local_20,0,1,*(ulong *)(local_18 + 0x9064));
                local_8 = 0;
                pCVar5 = CDC::SelectObject(param_1,(CPen *)local_20);
                pcVar1 = *(code **)(*piVar2 + 0x17c);
                guard_check_icall();
                (*pcVar1)();
                CDC::MoveTo(local_14,(int)local_28,param_3);
                pcVar1 = *(code **)(*piVar2 + 0x17c);
                guard_check_icall();
                iVar3 = (*pcVar1)();
                CDC::LineTo(local_14,param_5,iVar3 + param_4 + 1);
                CDC::SelectObject(local_14,pCVar5);
                local_20[0] = CPen::vftable;
                CImageList::~CImageList((CImageList *)local_20);
              }
              return 1;
            }
            return 0;
          }
        }
      }
    }
  }
  iVar3 = CMFCVisualManagerOffice2003::OnEraseTabsFrame
                    ((CMFCVisualManagerOffice2003 *)local_18,local_14,param_3,param_4,param_5,
                     param_6,piVar2);
  return iVar3;
}

