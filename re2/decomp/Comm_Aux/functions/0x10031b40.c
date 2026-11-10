// rea decompile_all
// name: FUN_10031b40
// address: 0x10031b40
// body: available
// range: 0x10031b40-0x10031eec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_10031b40(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  DWORD DVar3;
  undefined1 local_a0 [4];
  undefined1 local_9c [4];
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_84;
  undefined4 local_80;
  HLOCAL local_2c;
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  int local_20;
  int local_1c [3];
  HLOCAL local_10;
  SIZE_T local_c;
  int local_8;
  
  local_1c[1] = 0;
  local_1c[0] = 0;
  local_1c[2] = 0;
  local_10 = (HLOCAL)0x0;
  local_8 = 0;
  local_2c = (HLOCAL)0x0;
  local_20 = 0;
  SetLastError(0);
  iVar1 = FUN_10031ef0(param_1);
  if (iVar1 == 0) {
    SetLastError(0x7e);
  }
  else {
    if ((DAT_1020bc2c == (HMODULE)0x0) &&
       (DAT_1020bc2c = (HMODULE)FUN_10030a40(u_crypt32_dll_10205144,0), DAT_1020bc2c != (HMODULE)0x0
       )) {
      DAT_1020bc30 = GetProcAddress(DAT_1020bc2c,s_CryptMsgClose_1020515c);
      DAT_1020bc34 = GetProcAddress(DAT_1020bc2c,s_CertCloseStore_1020516c);
      DAT_1020bc38 = GetProcAddress(DAT_1020bc2c,s_CertFreeCertificateContext_1020517c);
      DAT_1020bc3c = GetProcAddress(DAT_1020bc2c,s_CertFindCertificateInStore_10205198);
      DAT_1020bc40 = GetProcAddress(DAT_1020bc2c,s_CryptMsgGetParam_102051b4);
      DAT_1020bc44 = GetProcAddress(DAT_1020bc2c,s_CryptQueryObject_102051c8);
      DAT_1020bc48 = GetProcAddress(DAT_1020bc2c,s_CertGetNameStringA_102051dc);
      DAT_1020bc4c = GetProcAddress(DAT_1020bc2c,s_CryptDecodeObject_102051f0);
    }
    if (((((DAT_1020bc30 == (FARPROC)0x0) || (DAT_1020bc34 == (FARPROC)0x0)) ||
         (DAT_1020bc38 == (FARPROC)0x0)) ||
        ((DAT_1020bc3c == (FARPROC)0x0 || (DAT_1020bc40 == (FARPROC)0x0)))) ||
       ((DAT_1020bc44 == (FARPROC)0x0 ||
        ((DAT_1020bc48 == (FARPROC)0x0 || (DAT_1020bc4c == (FARPROC)0x0)))))) {
      return 0;
    }
    local_20 = (*DAT_1020bc44)(1,param_1,0x400,2,0,local_28,local_a0,local_24,local_1c,local_1c + 2,
                               0);
    if (local_20 == 0) {
      GetLastError();
    }
    else {
      local_20 = (*DAT_1020bc40)(local_1c[2],6,0,0,&local_c);
      if (local_20 == 0) {
        GetLastError();
      }
      else {
        local_10 = LocalAlloc(0x40,local_c);
        if (local_10 == (HLOCAL)0x0) {
          GetLastError();
        }
        else {
          local_20 = (*DAT_1020bc40)(local_1c[2],6,0,local_10,&local_c);
          if (local_20 == 0) {
            GetLastError();
          }
          else {
            local_84 = *(undefined4 *)((int)local_10 + 4);
            local_80 = *(undefined4 *)((int)local_10 + 8);
            local_98 = *(undefined4 *)((int)local_10 + 0xc);
            local_94 = *(undefined4 *)((int)local_10 + 0x10);
            local_8 = (*DAT_1020bc3c)(local_1c[0],0x10001,0,0xb0000,local_9c,0);
            if (local_8 == 0) {
              GetLastError();
            }
            else {
              if (param_2 != (undefined4 *)0x0) {
                uVar2 = FUN_100320e0(local_8);
                *param_2 = uVar2;
                DVar3 = GetLastError();
                if (DVar3 != 0) goto LAB_10031ea0;
              }
              iVar1 = FUN_100322c0(local_10,&local_2c);
              if (iVar1 != 0) {
                local_84 = *(undefined4 *)((int)local_2c + 4);
                local_80 = *(undefined4 *)((int)local_2c + 8);
                local_98 = *(undefined4 *)((int)local_2c + 0xc);
                local_94 = *(undefined4 *)((int)local_2c + 0x10);
                local_8 = (*DAT_1020bc3c)(local_1c[0],0x10001,0,0xb0000,local_9c,0);
                if (local_8 == 0) {
                  GetLastError();
                }
                else {
                  local_20 = 1;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_10031ea0:
  LocalFree(local_10);
  LocalFree(local_2c);
  if (local_8 != 0) {
    (*DAT_1020bc38)(local_8);
  }
  if (local_1c[0] != 0) {
    (*DAT_1020bc34)(local_1c[0],0);
  }
  if (local_1c[2] != 0) {
    (*DAT_1020bc30)(local_1c[2]);
  }
  return local_20;
}

