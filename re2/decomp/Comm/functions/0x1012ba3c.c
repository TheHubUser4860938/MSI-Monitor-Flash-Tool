// rea decompile_all
// name: COleIPFrameWnd::OnSetMessageString
// address: 0x1012ba3c
// body: available
// range: 0x1012ba3c-0x1012baea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __thiscall COleIPFrameWnd::OnSetMessageString(unsigned int,long)
   
   Library: Visual Studio 2015 Release */

long __thiscall COleIPFrameWnd::OnSetMessageString(COleIPFrameWnd *this,uint param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x1012ba48;
  if (*(int *)(this + 0x138) == 0) goto LAB_1012bad1;
  uVar3 = FUN_10013071();
  FUN_10003190(uVar3);
  local_8 = 0;
  if (param_2 == 0) {
    if (param_1 != 0) {
      pcVar1 = *(code **)(*(int *)this + 0x174);
      guard_check_icall(param_1,local_14);
      (*pcVar1)();
      param_2 = (long)local_14[0];
      if (local_14[0] != (undefined *)0x0) goto LAB_1012ba97;
    }
    param_2 = (long)&DAT_101b5ebc;
  }
LAB_1012ba97:
  puVar4 = (undefined4 *)FUN_100037c0(param_2);
  local_8 = CONCAT31(local_8._1_3_,1);
  pcVar1 = *(code **)(**(int **)(this + 0x138) + 0x30);
  guard_check_icall(*(int **)(this + 0x138),*puVar4);
  (*pcVar1)();
  FUN_10003460();
  FUN_10003460();
LAB_1012bad1:
  lVar2 = *(long *)(this + 0xd8);
  *(uint *)(this + 0xd8) = param_1;
  *(uint *)(this + 0xd4) = param_1;
  return lVar2;
}

