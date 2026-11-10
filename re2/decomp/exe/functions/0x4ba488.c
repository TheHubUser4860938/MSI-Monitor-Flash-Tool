// rea decompile_all
// name: CMFCVisualManagerOffice2007::OnEraseTabsFrame
// address: 0x4ba488
// body: available
// range: 0x4ba488-0x4ba621 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
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
  local_8 = 0x4ba494;
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
                FUN_0040ee80();
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

