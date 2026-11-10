// rea decompile_all
// name: FID_conflict:operator()
// address: 0x1015e0a7
// body: available
// range: 0x1015e0a7-0x1015e1a4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Multiple Matches With Different Base Names
    public: void __thiscall <lambda_b57350f2640456a0859d250846f69caf>::operator()(void)const 
    public: void __thiscall <lambda_e378711a6f6581bf7f0efd7cdf97f5d9>::operator()(void)const 
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

void FID_conflict_operator__(void)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  uint uVar4;
  undefined4 *in_ECX;
  ushort *puVar5;
  bool bVar6;
  
  __copytlocinfo_nolock(*(undefined4 *)*in_ECX,*(undefined4 *)(*(int *)in_ECX[1] + 0x4c));
  iVar2 = FUN_1015ea07(*(undefined4 *)*in_ECX,*(undefined4 *)in_ECX[3],*(undefined4 *)in_ECX[4]);
  *(int *)in_ECX[2] = iVar2;
  if (iVar2 == 0) {
    ___acrt_release_locale_ref(*(undefined4 *)*in_ECX);
    ___acrt_free_locale(*(undefined4 *)*in_ECX);
  }
  else {
    puVar3 = *(ushort **)in_ECX[4];
    if (puVar3 != (ushort *)0x0) {
      puVar5 = &DAT_101d4278;
      do {
        uVar1 = *puVar3;
        bVar6 = uVar1 < *puVar5;
        if (uVar1 != *puVar5) {
LAB_1015e118:
          uVar4 = -(uint)bVar6 | 1;
          goto LAB_1015e11c;
        }
        if (uVar1 == 0) break;
        uVar1 = puVar3[1];
        bVar6 = uVar1 < puVar5[1];
        if (uVar1 != puVar5[1]) goto LAB_1015e118;
        puVar3 = puVar3 + 2;
        puVar5 = puVar5 + 2;
      } while (uVar1 != 0);
      uVar4 = 0;
LAB_1015e11c:
      if (uVar4 != 0) {
        LOCK();
        DAT_101de9bc = 1;
        UNLOCK();
      }
    }
    __updatetlocinfoEx_nolock(*(int *)in_ECX[1] + 0x4c,*(undefined4 *)*in_ECX);
    ___acrt_release_locale_ref(*(undefined4 *)*in_ECX);
    if (((*(byte *)(*(int *)in_ECX[1] + 0x350) & 2) == 0) && (((byte)DAT_101d42b0 & 1) == 0)) {
      __updatetlocinfoEx_nolock(&DAT_101de9c0,*(undefined4 *)(*(int *)in_ECX[1] + 0x4c));
      PTR_PTR_101d4198 = (undefined *)DAT_101de9c0[0x22];
      PTR_DAT_101d41a0 = (undefined *)*DAT_101de9c0;
      _DAT_101d41b4 = DAT_101de9c0[1];
      return;
    }
  }
  return;
}

