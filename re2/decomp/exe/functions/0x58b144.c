// rea decompile_all
// name: FUN_0058b144
// address: 0x58b144
// body: available
// range: 0x58b144-0x58b32a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float10 FUN_0058b144(double param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  float10 fVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int local_8;
  
  uVar1 = __ctrlfp(0x133f,0xffff);
  uVar6 = (undefined4)((ulonglong)param_1 >> 0x20);
  uVar5 = SUB84(param_1,0);
  if ((param_1._6_2_ & 0x7ff0) == 0x7ff0) {
    iVar2 = __sptype(uVar5,uVar6);
    if (0 < iVar2) {
      if (iVar2 < 3) goto LAB_0058b1eb;
      if (iVar2 == 3) {
        fVar3 = (float10)FUN_0058bc18(uVar5,uVar6,(double)param_2);
        return fVar3;
      }
    }
    dVar4 = param_1 + 1.0;
    uVar5 = 8;
    goto LAB_0058b31d;
  }
  if (param_1 == 0.0) {
LAB_0058b1eb:
    __ctrlfp(uVar1,0xffff);
    return (float10)param_1;
  }
  fVar3 = (float10)FUN_0058c00a(uVar5,uVar6,&local_8);
  if (param_2 < 0) {
    if (local_8 < -0x80000000 - param_2) {
LAB_0058b27c:
      fVar3 = (float10)0 * fVar3;
LAB_0058b291:
      dVar4 = (double)fVar3;
      uVar5 = 0x12;
      goto LAB_0058b31d;
    }
LAB_0058b233:
    local_8 = local_8 + param_2;
    if (0xa00 < local_8) goto LAB_0058b2eb;
    if (local_8 < 0x401) {
      if (local_8 < -0x9fd) goto LAB_0058b27c;
      if (-0x3fe < local_8) {
        fVar3 = (float10)__set_exp((double)fVar3,local_8);
        __ctrlfp(uVar1,0xffff);
        return (float10)(double)fVar3;
      }
      fVar3 = (float10)__set_exp((double)fVar3,local_8 + 0x600);
      goto LAB_0058b291;
    }
    fVar3 = (float10)__set_exp((double)fVar3,local_8 + -0x600);
    dVar4 = (double)fVar3;
  }
  else {
    if (local_8 <= 0x7fffffff - param_2) goto LAB_0058b233;
LAB_0058b2eb:
    dVar4 = __copysign(INFINITY,(double)fVar3);
  }
  uVar5 = 0x11;
LAB_0058b31d:
  fVar3 = (float10)FUN_0058b956(uVar5,0x19,param_1,(double)param_2,dVar4,uVar1);
  return fVar3;
}

