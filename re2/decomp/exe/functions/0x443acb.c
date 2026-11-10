// rea decompile_all
// name: COleControlSite::GetEventIID
// address: 0x443acb
// body: available
// range: 0x443acb-0x443ccb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall COleControlSite::GetEventIID(struct _GUID *)
   
   Library: Visual Studio 2015 Release */

int __thiscall COleControlSite::GetEventIID(COleControlSite *this,_GUID *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  undefined4 local_24;
  undefined1 local_20 [4];
  COleControlSite *local_1c;
  int *local_18;
  int local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  param_1->Data1 = 0;
  param_1->Data2 = 0;
  param_1->Data3 = 0;
  param_1->Data4[0] = '\0';
  param_1->Data4[1] = '\0';
  param_1->Data4[2] = '\0';
  param_1->Data4[3] = '\0';
  param_1->Data4[4] = '\0';
  param_1->Data4[5] = '\0';
  param_1->Data4[6] = '\0';
  param_1->Data4[7] = '\0';
  uVar5 = 0;
  local_10 = (int *)0x0;
  puVar2 = (undefined4 *)**(undefined4 **)(this + 0x50);
  local_1c = this;
  guard_check_icall(*(undefined4 **)(this + 0x50),&DAT_005dbae0,&local_10);
  iVar4 = (*(code *)*puVar2)();
  if (-1 < iVar4) {
    pcVar3 = *(code **)(*local_10 + 0x10);
    guard_check_icall(local_10,1,param_1);
    (*pcVar3)();
    pcVar3 = *(code **)(*local_10 + 8);
    guard_check_icall(local_10);
    (*pcVar3)();
  }
  local_18 = (int *)0x0;
  iVar4 = _memcmp(param_1,&DAT_005db8c0,0x10);
  if (iVar4 == 0) {
    puVar2 = (undefined4 *)**(undefined4 **)(local_1c + 0x50);
    guard_check_icall(*(undefined4 **)(local_1c + 0x50),&DAT_005dbad0,&local_18);
    iVar4 = (*(code *)*puVar2)();
    if (-1 < iVar4) {
      local_8 = (int *)0x0;
      pcVar3 = *(code **)(*local_18 + 0xc);
      guard_check_icall(local_18,&local_8);
      iVar4 = (*pcVar3)();
      if (-1 < iVar4) {
        pcVar3 = *(code **)(*local_8 + 0xc);
        guard_check_icall(local_8,&local_14);
        iVar4 = (*pcVar3)();
        if (-1 < iVar4) {
          if (*(short *)(local_14 + 0x30) != 0) {
            do {
              iVar4 = *local_8;
              guard_check_icall(local_8,uVar5,local_20);
              iVar4 = (**(code **)(iVar4 + 0x24))();
              if ((-1 < iVar4) && ((local_20[0] & 7) == 3)) {
                local_c = (int *)0x0;
                iVar4 = *local_8;
                guard_check_icall(local_8,uVar5,&local_24);
                iVar4 = (**(code **)(iVar4 + 0x20))();
                if (-1 < iVar4) {
                  iVar4 = *local_8;
                  guard_check_icall(local_8,local_24,&local_c);
                  iVar4 = (**(code **)(iVar4 + 0x38))();
                  if (-1 < iVar4) {
                    pcVar3 = *(code **)(*local_c + 0xc);
                    guard_check_icall(local_c,&local_1c);
                    iVar4 = (*pcVar3)();
                    if (-1 < iVar4) {
                      param_1->Data1 = *(ulong *)local_1c;
                      uVar1 = *(undefined4 *)(local_1c + 4);
                      param_1->Data2 = (short)uVar1;
                      param_1->Data3 = (short)((uint)uVar1 >> 0x10);
                      *(undefined4 *)param_1->Data4 = *(undefined4 *)(local_1c + 8);
                      *(undefined4 *)(param_1->Data4 + 4) = *(undefined4 *)(local_1c + 0xc);
                      pcVar3 = *(code **)(*local_c + 0x4c);
                      guard_check_icall(local_c,local_1c);
                      (*pcVar3)();
                    }
                    pcVar3 = *(code **)(*local_c + 8);
                    guard_check_icall(local_c);
                    (*pcVar3)();
                  }
                }
                break;
              }
              uVar5 = uVar5 + 1;
            } while (uVar5 < *(ushort *)(local_14 + 0x30));
          }
          pcVar3 = *(code **)(*local_8 + 0x4c);
          guard_check_icall(local_8,local_14);
          (*pcVar3)();
        }
        pcVar3 = *(code **)(*local_8 + 8);
        guard_check_icall(local_8);
        (*pcVar3)();
      }
      pcVar3 = *(code **)(*local_18 + 8);
      guard_check_icall(local_18);
      (*pcVar3)();
    }
  }
  iVar4 = _memcmp(param_1,&DAT_005db8c0,0x10);
  return (uint)(iVar4 != 0);
}

