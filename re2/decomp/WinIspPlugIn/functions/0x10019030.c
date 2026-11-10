// rea decompile_all
// name: FUN_10019030
// address: 0x10019030
// body: available
// range: 0x10019030-0x100192c5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10019030(void)

{
  char cVar1;
  int iVar2;
  char in_CL;
  int in_EDX;
  int iVar3;
  wchar_t *pwStack_2c;
  uint uStack_1c;
  char local_18;
  byte bStack_17;
  char cStack_16;
  byte bStack_15;
  undefined5 uStack_14;
  undefined1 local_f;
  uint local_c;
  
  iVar3 = DAT_1024be74;
  local_c = DAT_1023dfec ^ (uint)&uStack_1c;
  local_18 = '\0';
  bStack_17 = 0;
  cStack_16 = '\0';
  bStack_15 = 0;
  uStack_14 = 0;
  local_f = 0;
  cVar1 = (char)in_EDX;
  if (in_CL == 'j') {
    for (; local_18 = cVar1, iVar3 != 0; iVar3 = iVar3 + -1) {
      pwStack_2c = (wchar_t *)0x0;
      (**(code **)(*DAT_10249d10 + 0x74))(0x6a,200,1,&local_18);
      Sleep(DAT_1024be70);
      pwStack_2c = (wchar_t *)((uint)pwStack_2c & 0xffffff00);
      iVar2 = (**(code **)(*DAT_10249d10 + 0x78))(0x6a,0x11,2,&pwStack_2c,0);
      pwStack_2c = (wchar_t *)(uint)bStack_17;
      FUN_10048350(&DAT_1024a13c,
                   L"Check Enable SmbusBlockReadWriteEnableCommand ErrorCode:0x%X, Data0:0x%X, Data 1:0x%X"
                   ,iVar2,local_18);
      pwStack_2c = (wchar_t *)0x10019273;
      FUN_10016860();
      if (((local_18 == -0x38) && (bStack_17 == 0)) && (iVar2 == 0)) {
        pwStack_2c = L"Check Enable SmbusBlockReadWriteEnableCommand Success";
        FUN_10048350(&DAT_1024a13c);
        pwStack_2c = (wchar_t *)0x100192af;
        FUN_10016860();
        if (iVar3 != 0) {
          if (in_EDX == 0) goto LAB_10019184;
          pwStack_2c = (wchar_t *)0xa;
          goto LAB_10019186;
        }
        break;
      }
      cVar1 = local_18;
    }
  }
  else {
    if (in_CL != 'n') {
LAB_10019194:
      pwStack_2c = (wchar_t *)0x0;
      FUN_10048350(&DAT_1024a13c,L"SendSmbusBlockReadWriteEnableCommand  Enable :%d enumError:0x%X")
      ;
      pwStack_2c = 
      L"쀳幟譛⑌㌐\xe8cc撎\x16\xe58b썝桗\xf800ဠ㱨⒡\xe810\xf179\x02쒃뤌ꄼဤ糨ￖ诿⑌謜忇孞찳巨ᙤ謀工裃⑜蔐࿶䖄\xffff诿ဍ⒝贐⑔樐刀ŪƋ졨"
      ;
      FUN_10016860();
      __security_check_cookie(local_c ^ (uint)&uStack_1c);
      return;
    }
    if (in_EDX != 0) {
      pwStack_2c = (wchar_t *)0xa;
      (**(code **)(*DAT_10249d10 + 300))();
    }
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      pwStack_2c = (wchar_t *)&local_18;
      local_18 = 'w';
      bStack_17 = 200;
      cStack_16 = (char)in_EDX;
      iVar2 = (**(code **)(*DAT_10249d10 + 0x13c))(0x6e,0x71,3);
      if (iVar2 != 0) {
        FUN_10048350(&DAT_1024a13c,L"GetCurrentFwVersionInDDCCIMode Send Command Error:0x%X",iVar2);
        FUN_10016860();
        __security_check_cookie(uStack_1c ^ (uint)&pwStack_2c);
        return;
      }
      Sleep(DAT_1024be70);
      iVar2 = (**(code **)(*DAT_10249d10 + 0x78))(0x6e,0x11,5,&stack0xffffffd8,0);
      pwStack_2c = (wchar_t *)(uint)bStack_15;
      FUN_10048350(&DAT_1024a13c,
                   L"Check Enable SmbusBlockReadWriteEnableCommand ErrorCOde:0x%X, Data2:0x%X, Data 3:0x%X"
                   ,iVar2,cStack_16);
      pwStack_2c = 
      L"粀ሤ痈耋⑼\x13ѵﾅ㑴\xee83༁宅\xffff藿瓛謐ဍ⒝樐謅！Ⲑ\x01렀൸";
      FUN_10016860();
      if (((cStack_16 == -0x38) && (bStack_15 == 0)) && (iVar2 == 0)) {
        pwStack_2c = L"Check Enable SmbusBlockReadWriteEnableCommand Success";
        FUN_10048350(&DAT_1024a13c);
        pwStack_2c = (wchar_t *)0x1001917c;
        FUN_10016860();
        if (iVar3 != 0) {
          if (in_EDX == 0) {
LAB_10019184:
            pwStack_2c = (wchar_t *)0x5;
LAB_10019186:
            (**(code **)(*DAT_10249d10 + 300))();
          }
          goto LAB_10019194;
        }
        break;
      }
    }
    if (in_EDX != 0) {
      pwStack_2c = (wchar_t *)0x5;
      (**(code **)(*DAT_10249d10 + 300))();
    }
  }
  __security_check_cookie(local_c ^ (uint)&uStack_1c);
  return;
}

