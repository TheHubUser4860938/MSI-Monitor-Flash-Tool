// rea decompile_all
// name: <lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c>::operator()
// address: 0x101b86d1
// body: available
// range: 0x101b86d1-0x101b8794 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    public: void __thiscall <lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c>::operator()(void)const 
   
   Library: Visual Studio 2015 Release */

void __thiscall
<lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c>::operator()
          (<lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c> *this)

{
  int iVar1;
  
  _DAT_10249ca0 = *(undefined4 *)(*(int *)(**(int **)this + 0x48) + 4);
  _DAT_10249ca4 = *(undefined4 *)(*(int *)(**(int **)this + 0x48) + 8);
  _DAT_10249c9c = *(undefined4 *)(*(int *)(**(int **)this + 0x48) + 0x21c);
  _memcpy_s(&DAT_10249ca8,0xc,(void *)(*(int *)(**(int **)this + 0x48) + 0xc),0xc);
  _memcpy_s(&DAT_1023e558,0x101,(void *)(*(int *)(**(int **)this + 0x48) + 0x18),0x101);
  _memcpy_s(&DAT_1023e660,0x100,(void *)(*(int *)(**(int **)this + 0x48) + 0x119),0x100);
  LOCK();
  iVar1 = *(int *)PTR_DAT_1023e980;
  *(int *)PTR_DAT_1023e980 = iVar1 + -1;
  UNLOCK();
  if ((iVar1 + -1 == 0) && ((undefined4 *)PTR_DAT_1023e980 != &DAT_1023e760)) {
    FID_conflict__free(PTR_DAT_1023e980);
  }
  PTR_DAT_1023e980 = *(undefined **)(**(int **)this + 0x48);
  LOCK();
  **(int **)(**(int **)this + 0x48) = **(int **)(**(int **)this + 0x48) + 1;
  UNLOCK();
  return;
}

