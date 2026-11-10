// rea decompile_all
// name: CMFCAutoHideBar::DoPaint
// address: 0x1012cd5f
// body: available
// range: 0x1012cd5f-0x1012ce43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CMFCAutoHideBar::DoPaint(class CDC *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCAutoHideBar::DoPaint(CMFCAutoHideBar *this,CDC *param_1)

{
  code *pcVar1;
  CDC *pCVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int local_54;
  CMemDC local_50 [4];
  CDC *local_4c;
  int local_48;
  CDC local_40 [56];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x48;
  local_8 = 0x1012cd6b;
  CMemDC::CMemDC(local_50,param_1,(CWnd *)this);
  local_8 = 0;
  pCVar2 = local_40;
  if (local_48 == 0) {
    pCVar2 = local_4c;
  }
  CBasePane::DoPaint((CBasePane *)this,pCVar2);
  local_54 = *(int *)(this + 700);
  piVar5 = (int *)0x0;
  if (local_54 != 0) {
    do {
      piVar3 = (int *)FUN_100972dc(&local_54);
      piVar3 = (int *)*piVar3;
      piVar6 = piVar3;
      if (piVar3[1] == 0) {
        pcVar1 = *(code **)(*piVar3 + 0x14);
        guard_check_icall();
        iVar4 = (*pcVar1)();
        piVar6 = piVar5;
        if (iVar4 != 0) {
          pCVar2 = local_40;
          if (local_48 == 0) {
            pCVar2 = local_4c;
          }
          pcVar1 = *(code **)(*piVar3 + 0x20);
          guard_check_icall(pCVar2);
          (*pcVar1)();
        }
      }
      piVar5 = piVar6;
    } while (local_54 != 0);
    if (piVar6 != (int *)0x0) {
      pcVar1 = *(code **)(*piVar6 + 0x14);
      guard_check_icall();
      iVar4 = (*pcVar1)();
      if (iVar4 != 0) {
        pCVar2 = local_40;
        if (local_48 == 0) {
          pCVar2 = local_4c;
        }
        pcVar1 = *(code **)(*piVar6 + 0x20);
        guard_check_icall(pCVar2);
        (*pcVar1)();
      }
    }
  }
  CMemDC::~CMemDC(local_50);
  FUN_10154478();
  return;
}

