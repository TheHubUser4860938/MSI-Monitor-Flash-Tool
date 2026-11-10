// rea decompile_all
// name: find_or_allocate_unused_stream_nolock
// address: 0x101b1dc6
// body: available
// range: 0x101b1dc6-0x101b1e88 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    class __crt_stdio_stream __cdecl find_or_allocate_unused_stream_nolock(void)
   
   Library: Visual Studio 2015 Release */

void __cdecl find_or_allocate_unused_stream_nolock(void)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  FILE *_File;
  int *piVar6;
  bool bVar7;
  undefined4 *in_stack_00000004;
  
  piVar6 = (int *)(DAT_1024960c + 0xc);
  piVar2 = piVar6 + DAT_10249608 + -3;
  do {
    if (piVar6 == piVar2) {
LAB_101b1e2e:
      *in_stack_00000004 = 0;
      return;
    }
    _File = (FILE *)*piVar6;
    if (_File == (FILE *)0x0) {
      iVar5 = __calloc_base(1,0x38);
      *piVar6 = iVar5;
      FID_conflict__free((void *)0x0);
      if (*piVar6 != 0) {
        *(undefined4 *)(*piVar6 + 0x10) = 0xffffffff;
        ___acrt_InitializeCriticalSectionEx_12(*piVar6 + 0x20,4000,0);
        _File = (FILE *)*piVar6;
        LOCK();
        _File->_flag = _File->_flag | 0x2000;
        UNLOCK();
        __lock_file(_File);
LAB_101b1e3b:
        *in_stack_00000004 = _File;
        return;
      }
      goto LAB_101b1e2e;
    }
    if (((uint)_File->_flag >> 0xd & 1) == 0) {
      __lock_file(_File);
      piVar1 = &_File->_flag;
      uVar3 = *piVar1;
      do {
        LOCK();
        uVar4 = *piVar1;
        bVar7 = uVar3 == uVar4;
        if (bVar7) {
          *piVar1 = uVar3 | 0x2000;
          uVar4 = uVar3;
        }
        UNLOCK();
        uVar3 = uVar4;
      } while (!bVar7);
      if ((~(byte)(uVar4 >> 0xd) & 1) != 0) goto LAB_101b1e3b;
      __unlock_file(_File);
    }
    piVar6 = piVar6 + 1;
  } while( true );
}

