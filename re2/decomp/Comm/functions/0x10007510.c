// rea decompile_all
// name: I2CMasterInitial
// address: 0x10007510
// body: available
// range: 0x10007510-0x100076b0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void I2CMasterInitial(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
                    /* 0x7510  60  I2CMasterInitial */
  switch(param_1) {
  default:
    uVar6 = 0x47;
    uVar5 = 0x36;
    uVar4 = 0x22;
    uVar3 = 0x26;
    goto LAB_10007589;
  case 1:
    uVar3 = 0xc;
    uVar4 = 4;
    uVar5 = 9;
    uVar6 = 0x23;
LAB_10007589:
    uVar2 = 1;
    break;
  case 2:
    uVar3 = 0x31;
    uVar4 = 0x2e;
    uVar5 = 0x40;
    uVar6 = 0x80;
    uVar2 = 2;
    break;
  case 3:
    uVar3 = 0x38;
    uVar4 = 0x3b;
    uVar5 = 0x36;
    uVar6 = 0x80;
    uVar2 = 2;
    break;
  case 4:
    uVar3 = 0x75;
    uVar4 = 0x4e;
    uVar5 = 0x80;
    uVar6 = 0xf0;
    uVar2 = 2;
  }
  param_1 = param_1 & 0xffffff;
  iVar1 = ReadMcuReg(0xf2,(int)&param_1 + 3,uVar2,uVar3,uVar4,uVar5,uVar6);
  if (iVar1 == 0) {
    iVar1 = WriteMcuReg(0xf2,param_1._3_1_ & 0x7f);
    if (iVar1 == 0) {
      param_1._3_1_ = 0;
      iVar1 = ReadMcuReg(0x55,(int)&param_1 + 3);
      if ((iVar1 == 0) && (iVar1 = WriteMcuReg(0x55,param_1._3_1_ & 0x7f), iVar1 == 0)) {
        param_1._3_1_ = 0;
        iVar1 = ReadMcuReg(0x55,(int)&param_1 + 3);
        if ((((iVar1 == 0) &&
             ((((iVar1 = WriteMcuReg(0x55,param_1._3_1_ & 0xfe | 0x80), iVar1 == 0 &&
                (iVar1 = WriteMcuReg(0x56,uVar6), iVar1 == 0)) &&
               (iVar1 = WriteMcuReg(0x57,0), iVar1 == 0)) &&
              ((iVar1 = WriteMcuReg(0x58,0), iVar1 == 0 && (iVar1 = WriteMcuReg(0x59,3), iVar1 == 0)
               ))))) && (iVar1 = WriteMcuReg(0x5a,uVar5), iVar1 == 0)) &&
           ((iVar1 = WriteMcuReg(0x5b,uVar4), iVar1 == 0 &&
            (iVar1 = WriteMcuReg(0x5c,uVar3), iVar1 == 0)))) {
          WriteMcuReg(0x5f,uVar2);
        }
      }
    }
  }
  return;
}

