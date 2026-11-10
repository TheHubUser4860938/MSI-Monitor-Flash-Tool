// rea decompile_all
// name: __alloc_osfhnd
// address: 0x586104
// body: available
// range: 0x586104-0x586209 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __alloc_osfhnd
   
   Library: Visual Studio 2015 Release */

int __cdecl __alloc_osfhnd(void)

{
  LPCRITICAL_SECTION p_Var1;
  int iVar2;
  int iVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar4;
  
  ___acrt_lock(7);
  uVar4 = 0xffffffff;
  iVar3 = 0;
  do {
    if (0x7f < iVar3) {
LAB_0058617b:
      FUN_0058620d();
      return uVar4;
    }
    p_Var1 = (LPCRITICAL_SECTION)(&DAT_006190a0)[iVar3];
    if (p_Var1 == (LPCRITICAL_SECTION)0x0) {
      iVar2 = ___acrt_lowio_create_handle_array();
      (&DAT_006190a0)[iVar3] = iVar2;
      if (iVar2 != 0) {
        DAT_006192a0 = DAT_006192a0 + 0x40;
        uVar4 = iVar3 << 6;
        ___acrt_lowio_lock_fh(uVar4);
        *(undefined1 *)((&DAT_006190a0)[(int)uVar4 >> 6] + 0x28) = 1;
      }
      goto LAB_0058617b;
    }
    for (lpCriticalSection = p_Var1; lpCriticalSection != p_Var1 + 0x80;
        lpCriticalSection = lpCriticalSection + 2) {
      if (((uint)lpCriticalSection[1].LockSemaphore & 1) == 0) {
        EnterCriticalSection(lpCriticalSection);
        if (((uint)lpCriticalSection[1].LockSemaphore & 1) == 0) {
          uVar4 = iVar3 * 0x40 + ((int)lpCriticalSection - (int)p_Var1) / 0x30;
          iVar3 = (uVar4 & 0x3f) * 0x30;
          *(undefined1 *)(iVar3 + 0x28 + (&DAT_006190a0)[(int)uVar4 >> 6]) = 1;
          *(undefined4 *)(iVar3 + 0x18 + (&DAT_006190a0)[(int)uVar4 >> 6]) = 0xffffffff;
          goto LAB_0058617b;
        }
        LeaveCriticalSection(lpCriticalSection);
      }
    }
    iVar3 = iVar3 + 1;
  } while( true );
}

