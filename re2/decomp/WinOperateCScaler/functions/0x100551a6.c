// rea decompile_all
// name: CBasePane::WindowProc
// address: 0x100551a6
// body: available
// range: 0x100551a6-0x10055284 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual long __thiscall CBasePane::WindowProc(unsigned int,unsigned int,long)
   
   Library: Visual Studio 2015 Release */

long __thiscall CBasePane::WindowProc(CBasePane *this,uint param_1,uint param_2,long param_3)

{
  code *pcVar1;
  int iVar2;
  CWnd *pCVar3;
  long lVar4;
  bool bVar5;
  CBasePane *local_c;
  CBasePane *local_8;
  
  local_c = this;
  local_8 = this;
  if ((param_1 < 0x2b) ||
     ((((0x2f < param_1 && (param_1 != 0x39)) && (param_1 != 0x4e)) && (param_1 != 0x111))))
  goto LAB_10055277;
  pcVar1 = *(code **)(*(int *)this + 0x118);
  guard_check_icall(param_1,param_2,param_3,&local_c);
  iVar2 = (*pcVar1)();
  this = local_8;
  if (iVar2 != 0) {
    return (long)local_c;
  }
  pCVar3 = CWnd::GetOwner((CWnd *)local_8);
  local_c = (CBasePane *)SendMessageW(*(HWND *)(pCVar3 + 0x20),param_1,param_2,param_3);
  if (param_1 != 0x4e) {
    return (long)local_c;
  }
  if (*(int *)(param_3 + 8) == -0x208) {
    if (*(int *)(param_3 + 0x60) != 0) {
      return (long)local_c;
    }
    if (*(char **)(param_3 + 0xc) != (char *)0x0) {
      bVar5 = **(char **)(param_3 + 0xc) == '\0';
      goto LAB_10055264;
    }
  }
  else {
    if (*(int *)(param_3 + 8) != -0x212) {
      return (long)local_c;
    }
    if (*(int *)(param_3 + 0xb0) != 0) {
      return (long)local_c;
    }
    if (*(short **)(param_3 + 0xc) != (short *)0x0) {
      bVar5 = **(short **)(param_3 + 0xc) == 0;
LAB_10055264:
      if (!bVar5) {
        return (long)local_c;
      }
    }
  }
  param_1 = 0x4e;
LAB_10055277:
  lVar4 = CWnd::WindowProc((CWnd *)this,param_1,param_2,param_3);
  return lVar4;
}

