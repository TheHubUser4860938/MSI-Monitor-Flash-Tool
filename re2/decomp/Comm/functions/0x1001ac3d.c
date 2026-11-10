// rea decompile_all
// name: CRuntimeClass::Load
// address: 0x1001ac3d
// body: available
// range: 0x1001ac3d-0x1001acc7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001acc7 with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: static struct CRuntimeClass * __stdcall CRuntimeClass::Load(class CArchive &,unsigned
   int *)
   
   Library: Visual Studio 2015 Release */

CRuntimeClass * CRuntimeClass::Load(CArchive *param_1,uint *param_2)

{
  code *pcVar1;
  uint uVar2;
  CRuntimeClass *pCVar3;
  uint uVar4;
  ushort local_4c [2];
  undefined1 local_48 [64];
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  if (param_2 != (uint *)0x0) {
    FUN_1001a655(local_4c);
    *param_2 = (uint)local_4c[0];
    FUN_1001a655(local_4c);
    if (local_4c[0] < 0x40) {
      uVar4 = (uint)local_4c[0];
      uVar2 = FUN_1001acc8(local_48,uVar4);
      if (uVar2 == uVar4) {
        if (0x3f < uVar4) {
          ___report_rangecheckfailure();
          pcVar1 = (code *)swi(3);
          pCVar3 = (CRuntimeClass *)(*pcVar1)();
          return pCVar3;
        }
        local_48[uVar4] = 0;
        FUN_1001abec(local_48);
      }
    }
  }
  pCVar3 = (CRuntimeClass *)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return pCVar3;
}

