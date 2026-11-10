// rea decompile_all
// name: CWnd::ExecuteDlgInit
// address: 0x1002b52d
// body: available
// range: 0x1002b52d-0x1002b65f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: int __thiscall CWnd::ExecuteDlgInit(void *)
   
   Library: Visual Studio 2015 Release */

int __thiscall CWnd::ExecuteDlgInit(CWnd *this,void *param_1)

{
  ushort uVar1;
  ulong wParam;
  ushort uVar2;
  LRESULT LVar3;
  CMFCControlContainer *pCVar4;
  ushort *lParam;
  uint uVar5;
  
  uVar5 = 1;
  if (param_1 != (void *)0x0) {
    do {
      uVar1 = *(ushort *)param_1;
      if (uVar1 == 0) break;
      wParam = *(ulong *)((int)param_1 + 4);
      uVar2 = *(ushort *)((int)param_1 + 2);
      lParam = (ushort *)((int)param_1 + 8);
      if (uVar2 == 0x401) {
        uVar2 = 0x180;
LAB_1002b586:
        LVar3 = SendDlgItemMessageA(*(HWND *)(this + 0x20),(uint)uVar1,(uint)uVar2,0,(LPARAM)lParam)
        ;
        uVar5 = uVar5 & -(uint)(LVar3 != -1);
      }
      else {
        if (uVar2 == 0x403) {
          uVar2 = 0x143;
        }
        if ((uVar2 == 0x180) || (uVar2 == 0x143)) goto LAB_1002b586;
        if (uVar2 == 0x37c) {
          if (*(int *)(this + 0x78) == 0) {
            pCVar4 = (CMFCControlContainer *)FUN_10011f7d(0x38);
            if (pCVar4 == (CMFCControlContainer *)0x0) {
              pCVar4 = (CMFCControlContainer *)0x0;
            }
            else {
              pCVar4 = (CMFCControlContainer *)
                       CMFCControlContainer::CMFCControlContainer(pCVar4,this);
            }
            *(CMFCControlContainer **)(this + 0x78) = pCVar4;
            CMFCControlContainer::SubclassDlgControls(pCVar4);
          }
          LVar3 = SendDlgItemMessageA(*(HWND *)(this + 0x20),(uint)uVar1,0x37c,wParam,(LPARAM)lParam
                                     );
          uVar5 = uVar5 & -(uint)(LVar3 != -1);
          if (*(CMFCControlContainer **)(this + 0x78) != (CMFCControlContainer *)0x0) {
            CMFCControlContainer::SetControlData
                      (*(CMFCControlContainer **)(this + 0x78),uVar1,wParam,(uchar *)lParam);
          }
        }
      }
      param_1 = (void *)((int)lParam + wParam);
    } while (uVar5 != 0);
    if (uVar5 == 0) {
      return 0;
    }
  }
  SendMessageToDescendants(*(HWND__ **)(this + 0x20),0x364,0,0,0,0);
  return uVar5;
}

