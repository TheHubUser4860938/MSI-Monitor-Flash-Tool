// rea decompile_all
// name: FUN_10037b00
// address: 0x10037b00
// body: available
// range: 0x10037b00-0x10037eac inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __cdecl FUN_10037b00(LPCWSTR param_1,uint *param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  uint uVar2;
  DWORD DVar3;
  int iVar4;
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
  bVar1 = FUN_10037eb0(param_1);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    SetLastError(0x7e);
  }
  else {
    if ((DAT_10066b9c == (HMODULE)0x0) &&
       (DAT_10066b9c = FUN_10036a00(u_crypt32_dll_10063144,0), DAT_10066b9c != (HMODULE)0x0)) {
      DAT_10066ba0 = GetProcAddress(DAT_10066b9c,s_CryptMsgClose_1006315c);
      DAT_10066ba4 = GetProcAddress(DAT_10066b9c,s_CertCloseStore_1006316c);
      DAT_10066ba8 = GetProcAddress(DAT_10066b9c,s_CertFreeCertificateContext_1006317c);
      DAT_10066bac = GetProcAddress(DAT_10066b9c,s_CertFindCertificateInStore_10063198);
      DAT_10066bb0 = GetProcAddress(DAT_10066b9c,s_CryptMsgGetParam_100631b4);
      DAT_10066bb4 = GetProcAddress(DAT_10066b9c,s_CryptQueryObject_100631c8);
      DAT_10066bb8 = GetProcAddress(DAT_10066b9c,s_CertGetNameStringA_100631dc);
      DAT_10066bbc = GetProcAddress(DAT_10066b9c,s_CryptDecodeObject_100631f0);
    }
    if (((((DAT_10066ba0 == (FARPROC)0x0) || (DAT_10066ba4 == (FARPROC)0x0)) ||
         (DAT_10066ba8 == (FARPROC)0x0)) ||
        ((DAT_10066bac == (FARPROC)0x0 || (DAT_10066bb0 == (FARPROC)0x0)))) ||
       ((DAT_10066bb4 == (FARPROC)0x0 ||
        ((DAT_10066bb8 == (FARPROC)0x0 || (DAT_10066bbc == (FARPROC)0x0)))))) {
      return 0;
    }
    local_20 = (*DAT_10066bb4)(1,param_1,0x400,2,0,local_28,local_a0,local_24,local_1c,local_1c + 2,
                               0);
    if (local_20 == 0) {
      GetLastError();
    }
    else {
      local_20 = (*DAT_10066bb0)(local_1c[2],6,0,0,&local_c);
      if (local_20 == 0) {
        GetLastError();
      }
      else {
        local_10 = LocalAlloc(0x40,local_c);
        if (local_10 == (HLOCAL)0x0) {
          GetLastError();
        }
        else {
          local_20 = (*DAT_10066bb0)(local_1c[2],6,0,local_10,&local_c);
          if (local_20 == 0) {
            GetLastError();
          }
          else {
            local_84 = *(undefined4 *)((int)local_10 + 4);
            local_80 = *(undefined4 *)((int)local_10 + 8);
            local_98 = *(undefined4 *)((int)local_10 + 0xc);
            local_94 = *(undefined4 *)((int)local_10 + 0x10);
            local_8 = (*DAT_10066bac)(local_1c[0],0x10001,0,0xb0000,local_9c,0);
            if (local_8 == 0) {
              GetLastError();
            }
            else {
              if (param_2 != (uint *)0x0) {
                uVar2 = FUN_100380a0(local_8);
                *param_2 = uVar2;
                DVar3 = GetLastError();
                if (DVar3 != 0) goto LAB_10037e60;
              }
              iVar4 = FUN_10038280((int)local_10,(int *)&local_2c);
              if (iVar4 != 0) {
                local_84 = *(undefined4 *)((int)local_2c + 4);
                local_80 = *(undefined4 *)((int)local_2c + 8);
                local_98 = *(undefined4 *)((int)local_2c + 0xc);
                local_94 = *(undefined4 *)((int)local_2c + 0x10);
                local_8 = (*DAT_10066bac)(local_1c[0],0x10001,0,0xb0000,local_9c,0);
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
LAB_10037e60:
  LocalFree(local_10);
  LocalFree(local_2c);
  if (local_8 != 0) {
    (*DAT_10066ba8)(local_8);
  }
  if (local_1c[0] != 0) {
    (*DAT_10066ba4)(local_1c[0],0);
  }
  if (local_1c[2] != 0) {
    (*DAT_10066ba0)(local_1c[2]);
  }
  return local_20;
}

