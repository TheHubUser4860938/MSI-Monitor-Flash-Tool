// rea decompile_all
// name: compute_year
// address: 0x101b4bd9
// body: available
// range: 0x101b4bd9-0x101b4c7c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    int __cdecl compute_year(__int64 &,bool &)
   
   Library: Visual Studio 2015 Release */

int __cdecl compute_year(__int64 *param_1,bool *param_2)

{
  __int64 _Var1;
  __int64 _Var2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  iVar6 = *(int *)((int)param_1 + 4);
  uVar7 = (uint)*param_1;
  iVar4 = __alldiv(uVar7,iVar6,0x1e13380,0);
  iVar8 = iVar4 + 0x46;
  uVar5 = (uint)((longlong)iVar4 * 0x1e13380);
  *(uint *)param_1 = uVar7 - uVar5;
  *(uint *)((int)param_1 + 4) =
       (iVar6 - (int)((ulonglong)((longlong)iVar4 * 0x1e13380) >> 0x20)) - (uint)(uVar7 < uVar5);
  iVar6 = __crt_time_elapsed_leap_years<int>(iVar8);
  uVar7 = (uint)((longlong)iVar6 * 0x15180);
  _Var1 = *param_1;
  *(uint *)param_1 = (int)*param_1 - uVar7;
  _Var2 = *param_1;
  *(int *)((int)param_1 + 4) =
       (*(int *)((int)param_1 + 4) - (int)((ulonglong)((longlong)iVar6 * 0x15180) >> 0x20)) -
       (uint)((uint)_Var1 < uVar7);
  iVar6 = *(int *)((int)param_1 + 4);
  if ((iVar6 < 1) && (iVar6 < 0)) {
    *(uint *)param_1 = (uint)_Var2 + 0x1e13380;
    iVar8 = iVar4 + 0x45;
    *(uint *)((int)param_1 + 4) = iVar6 + (uint)(0xfe1ecc7f < (uint)_Var2);
    bVar3 = __crt_time_is_leap_year<int>(iVar8);
    if (bVar3) {
      _Var1 = *param_1;
      *(int *)param_1 = (int)*param_1 + 0x15180;
      *(int *)((int)param_1 + 4) = *(int *)((int)param_1 + 4) + (uint)(0xfffeae7f < (uint)_Var1);
      *param_2 = true;
    }
  }
  else {
    bVar3 = __crt_time_is_leap_year<int>(iVar8);
    if (bVar3) {
      *param_2 = true;
    }
  }
  return iVar8;
}

