// rea decompile_all
// name: FUN_1001bf90
// address: 0x1001bf90
// body: available
// range: 0x1001bf90-0x1001c3ba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_1001bf90(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint in_ECX;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uStack_8;
  
  uStack_8 = in_ECX & 0xffffff;
  bVar1 = false;
  iVar2 = (**(code **)(*DAT_10249d10 + 0xc0))(0x6666,(int)&uStack_8 + 3);
  if (iVar2 != 0) {
    return iVar2;
  }
  if ((uStack_8 & 0x8000000) == 0) {
    if ((uStack_8 & 0x10000000) != 0) {
      bVar1 = true;
    }
  }
  else if ((((in_ECX == 0x47) || (in_ECX == 0x46)) || (in_ECX == 0x48)) ||
          ((in_ECX == 0x45 || (in_ECX == 0x4e)))) {
    if ((uStack_8 & 0x4000000) == 0) {
      if ((uStack_8 & 0x1000000) == 0) {
        if (in_ECX == 0x47) {
          iVar2 = (**(code **)(*DAT_10249d10 + 0xc4))(0x1024,4);
          if (iVar2 != 0) {
            return iVar2;
          }
          goto LAB_1001c10a;
        }
        if (in_ECX == 0x46) {
          iVar2 = (**(code **)(*DAT_10249d10 + 0xc4))(0x100f,6);
          if (iVar2 != 0) {
            return iVar2;
          }
          goto LAB_1001c10a;
        }
        if ((in_ECX == 0x48) || (in_ECX == 0x4e)) {
          iVar2 = (**(code **)(*DAT_10249d10 + 0xc4))(0x107c,8);
          if (iVar2 != 0) {
            return iVar2;
          }
          goto LAB_1001c10a;
        }
        if (in_ECX == 0x45) {
          uVar4 = 5;
          goto LAB_1001c0cf;
        }
      }
      else {
        if (in_ECX == 0x47) {
          uVar4 = 3;
          uVar5 = 0x1024;
        }
        else if (in_ECX == 0x46) {
          uVar4 = 5;
          uVar5 = 0x100f;
        }
        else {
          if ((in_ECX == 0x48) || (in_ECX == 0x4e)) {
            iVar2 = (**(code **)(*DAT_10249d10 + 0xc4))(0x107c,7);
            if (iVar2 != 0) {
              return iVar2;
            }
            goto LAB_1001c10a;
          }
          if (in_ECX != 0x45) goto LAB_1001c10d;
          uVar4 = 4;
LAB_1001c0cf:
          uVar5 = 0x1006;
        }
        iVar2 = (**(code **)(*DAT_10249d10 + 0xc4))(uVar5,uVar4);
        if (iVar2 != 0) {
          return iVar2;
        }
LAB_1001c10a:
      }
LAB_1001c10d:
      iVar2 = (byte)-((uStack_8._3_1_ & 2) != 0) + 2;
      if (((in_ECX == 0x47) || (in_ECX == 0x48)) || (in_ECX == 0x4e)) {
        iVar2 = (**(code **)(*DAT_10249d10 + 0xd0))(0x7f53,0xfc,iVar2);
        if (iVar2 != 0) {
          return iVar2;
        }
      }
      else if (in_ECX == 0x45) {
        iVar2 = (**(code **)(*DAT_10249d10 + 0xd0))(0x7f54,0xfc,iVar2);
        if (iVar2 != 0) {
          return iVar2;
        }
      }
      else {
        iVar2 = (**(code **)(*DAT_10249d10 + 0xd0))(0x7f53,0xf3,(char)iVar2 << 2);
        if (iVar2 != 0) {
          return iVar2;
        }
      }
      iVar2 = (**(code **)(*DAT_10249d10 + 0xd0))(0x7f50,0x7a,0x84);
      if (iVar2 != 0) {
        return iVar2;
      }
    }
    else {
      iVar2 = (**(code **)(*DAT_10249d10 + 0xd0))(0x7f50,0xbe,0x40);
      if (iVar2 != 0) {
        return iVar2;
      }
    }
    iVar2 = (**(code **)(*DAT_10249d10 + 0xd0))(0x6668,0xfe,1);
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  uStack_8 = uStack_8 & 0xffffff;
  iVar2 = FUN_1001c3c0();
  if (iVar2 == 1) {
    iVar2 = (**(code **)(*DAT_10249d10 + 0xc0))(0x6c66);
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  else {
    iVar2 = (**(code **)(*DAT_10249d10 + 0xc0))(0x7666,(int)&uStack_8 + 3);
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  uVar3 = uStack_8 >> 0x18;
  if ((uStack_8 & 0x8000000) == 0) {
    if ((uStack_8 & 0x10000000) != 0) goto LAB_1001c3a4;
  }
  else if (((in_ECX == 0x47) || (in_ECX == 0x48)) || (in_ECX == 0x4e)) {
    if ((uStack_8 & 0x4000000) == 0) {
      if ((uStack_8 & 0x1000000) == 0) {
        if (in_ECX == 0x47) {
          uVar4 = 4;
          goto LAB_1001c2b2;
        }
        if ((in_ECX == 0x48) || (in_ECX == 0x4e)) {
          iVar2 = (**(code **)(*DAT_10249d10 + 0xc4))(0x1077,5);
          if (iVar2 != 0) {
            return iVar2;
          }
          goto LAB_1001c2f7;
        }
      }
      else {
        if (in_ECX == 0x47) {
          uVar4 = 3;
LAB_1001c2b2:
          iVar2 = (**(code **)(*DAT_10249d10 + 0xc4))(0x109d,uVar4);
          if (iVar2 != 0) {
            return iVar2;
          }
        }
        else {
          if ((in_ECX != 0x48) && (in_ECX != 0x4e)) goto LAB_1001c2fa;
          iVar2 = (**(code **)(*DAT_10249d10 + 0xc4))(0x1077,4);
          if (iVar2 != 0) {
            return iVar2;
          }
        }
LAB_1001c2f7:
        uVar3 = uStack_8 >> 0x18;
      }
LAB_1001c2fa:
      iVar2 = (byte)-((uVar3 & 2) != 0) + 2;
      if (in_ECX == 0x47) {
        iVar2 = (**(code **)(*DAT_10249d10 + 0xd0))(0x7f94,0xfc,iVar2);
        if (iVar2 != 0) {
          return iVar2;
        }
      }
      else if (((in_ECX == 0x48) || (in_ECX == 0x4e)) &&
              (iVar2 = (**(code **)(*DAT_10249d10 + 0xd0))(0x7f94,0xcf,(char)iVar2 << 4), iVar2 != 0
              )) {
        return iVar2;
      }
      iVar2 = (**(code **)(*DAT_10249d10 + 0xd0))(0x7f90,0x7a,0x84);
      if (iVar2 != 0) {
        return iVar2;
      }
    }
    else {
      iVar2 = (**(code **)(*DAT_10249d10 + 0xd0))(0x7f90,0xbf,0x40);
      if (iVar2 != 0) {
        return iVar2;
      }
    }
    iVar2 = (**(code **)(*DAT_10249d10 + 0xd0))(0x6c68,0xfe,1);
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  if (!bVar1) {
    return 0;
  }
LAB_1001c3a4:
  AfxMessageBox(L"Warning !! TypeC port is keeping providing Vbus under ISP mode. Please AC OFF / ON, or there exists a risk of damaging the port partner !"
                ,0,0);
  return 0;
}

