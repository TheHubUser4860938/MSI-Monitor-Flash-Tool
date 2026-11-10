// rea decompile_all
// name: COleControlSite::CreateOrLoad
// address: 0x442b02
// body: available
// range: 0x442b02-0x442ef9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual long __thiscall COleControlSite::CreateOrLoad(struct _GUID const &,class
   CFile *,int,wchar_t *)
   
   Library: Visual Studio 2015 Release */

long __thiscall
COleControlSite::CreateOrLoad
          (COleControlSite *this,_GUID *param_1,CFile *param_2,int param_3,wchar_t *param_4)

{
  COleControlSite *pCVar1;
  code *pcVar2;
  undefined4 *puVar3;
  _func_5261 *p_Var4;
  int iVar5;
  undefined4 uVar6;
  SIZE_T dwBytes;
  LPVOID pvVar7;
  CFile *pCVar8;
  int *piVar9;
  long lVar10;
  IStorage *pIVar11;
  COleControlSite *pCVar12;
  undefined8 uVar13;
  CArchive local_80 [72];
  int local_38;
  CFile *local_34;
  IStorage *local_30;
  CArchiveStream local_2c [4];
  CFile *local_28;
  CFile *local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  COleControlSite *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x70;
  local_8 = 0x442b0e;
  pCVar1 = this + 0x50;
  lVar10 = 0;
  local_14 = this;
  if ((*(void **)pCVar1 == (void *)0x0) &&
     (lVar10 = _AfxCoCreateInstanceLic
                         (param_1,(IUnknown *)0x0,3,(_GUID *)&DAT_005db9a0,(void **)pCVar1,param_4),
     lVar10 < 0)) {
    return lVar10;
  }
  local_1c = (int *)0x0;
  local_20 = (int *)0x0;
  local_18 = (int *)0x0;
  GetEventIID(this,(_GUID *)(this + 0x40));
  pcVar2 = *(code **)(*(int *)this + 0xc0);
  guard_check_icall();
  local_38 = (*pcVar2)();
  if (local_38 == 0) {
    pCVar12 = local_14 + 0x70;
    pcVar2 = *(code **)(**(int **)pCVar1 + 0x58);
    guard_check_icall(*(int **)pCVar1,1,pCVar12);
    (*pcVar2)();
    if ((*(uint *)pCVar12 & 0x20000) == 0) goto LAB_00442bb4;
    pcVar2 = *(code **)(**(int **)(local_14 + 0x50) + 0xc);
    guard_check_icall(*(int **)(local_14 + 0x50),local_14 + 0xcc);
    lVar10 = (*pcVar2)();
    if (-1 < lVar10) goto LAB_00442bb4;
  }
  else {
LAB_00442bb4:
    if (param_2 == (CFile *)0x0) {
      if (param_3 == 0) goto LAB_00442c5f;
LAB_00442ce6:
      puVar3 = (undefined4 *)**(undefined4 **)(local_14 + 0x50);
      guard_check_icall(*(undefined4 **)(local_14 + 0x50),&DAT_005dba70,&local_20);
      iVar5 = (*(code *)*puVar3)();
      if (-1 < iVar5) {
        if (param_2 == (CFile *)0x0) {
          local_28 = param_2;
          lVar10 = CreateILockBytesOnHGlobal((HGLOBAL)0x0,1,(LPLOCKBYTES *)&local_28);
          piVar9 = local_20;
          if (-1 < lVar10) {
            local_24 = param_2;
            lVar10 = StgCreateDocfileOnILockBytes
                               ((ILockBytes *)local_28,0x1012,0,(IStorage **)&local_24);
            pCVar8 = local_28;
            if (-1 < lVar10) {
              pcVar2 = *(code **)(*local_20 + 0x14);
              guard_check_icall(local_20,local_24);
              lVar10 = (*pcVar2)();
              pcVar2 = *(code **)(*(int *)local_24 + 8);
              guard_check_icall(local_24);
              (*pcVar2)();
              pCVar8 = local_28;
            }
LAB_00442e40:
            pcVar2 = *(code **)(*(int *)pCVar8 + 8);
            guard_check_icall(pCVar8);
            (*pcVar2)();
            piVar9 = local_20;
          }
        }
        else if (param_3 == 0) {
          lVar10 = -0x7fff0001;
          piVar9 = local_20;
        }
        else {
          pcVar2 = *(code **)(*(int *)param_2 + 0x34);
          guard_check_icall();
          uVar13 = (*pcVar2)();
          dwBytes = (SIZE_T)uVar13;
          if (((((int)((ulonglong)uVar13 >> 0x20) == 0) && (dwBytes != 0xffffffff)) &&
              (local_30 = GlobalAlloc(0,dwBytes), local_30 != (IStorage *)0x0)) &&
             (pvVar7 = GlobalLock(local_30), pvVar7 != (LPVOID)0x0)) {
            pcVar2 = *(code **)(*(int *)param_2 + 0x38);
            guard_check_icall(pvVar7,dwBytes);
            (*pcVar2)();
            pIVar11 = local_30;
            GlobalUnlock(local_30);
          }
          else {
            lVar10 = -0x7ff8fff2;
            pIVar11 = (IStorage *)0x0;
          }
          local_34 = (CFile *)0x0;
          piVar9 = local_20;
          if ((pIVar11 != (IStorage *)0x0) &&
             (lVar10 = CreateILockBytesOnHGlobal(pIVar11,1,(LPLOCKBYTES *)&local_34),
             piVar9 = local_20, -1 < lVar10)) {
            local_30 = (IStorage *)0x0;
            lVar10 = StgOpenStorageOnILockBytes
                               ((ILockBytes *)local_34,(IStorage *)0x0,0x12,(SNB)0x0,0,&local_30);
            pCVar8 = local_34;
            if (-1 < lVar10) {
              pcVar2 = *(code **)(*local_20 + 0x18);
              guard_check_icall(local_20,local_30);
              lVar10 = (*pcVar2)();
              p_Var4 = local_30->lpVtbl->Release;
              pIVar11 = local_30;
              guard_check_icall();
              (*p_Var4)(pIVar11);
              pCVar8 = local_34;
            }
            goto LAB_00442e40;
          }
        }
LAB_00442e59:
        pcVar2 = *(code **)(*piVar9 + 8);
        guard_check_icall(piVar9);
        (*pcVar2)();
        goto LAB_00442e68;
      }
    }
    else {
      if (param_3 != 0) goto LAB_00442ce6;
      puVar3 = (undefined4 *)**(undefined4 **)(local_14 + 0x50);
      guard_check_icall(*(undefined4 **)(local_14 + 0x50),&DAT_005dbb20,&local_18);
      iVar5 = (*(code *)*puVar3)();
      if (iVar5 < 0) {
LAB_00442c5f:
        puVar3 = (undefined4 *)**(undefined4 **)(local_14 + 0x50);
        guard_check_icall(*(undefined4 **)(local_14 + 0x50),&DAT_005dbb30,&local_1c);
        iVar5 = (*(code *)*puVar3)();
        if (iVar5 < 0) goto LAB_00442ce6;
        if (param_2 == (CFile *)0x0) {
          pcVar2 = *(code **)(*local_1c + 0x20);
          guard_check_icall(local_1c);
          lVar10 = (*pcVar2)();
          piVar9 = local_1c;
        }
        else {
          CArchive::CArchive(local_80,param_2,1,0x1000,(void *)0x0);
          local_8 = 0;
          CArchiveStream::CArchiveStream(local_2c,local_80);
          pcVar2 = *(code **)(*local_1c + 0x14);
          guard_check_icall(local_1c,local_2c);
          lVar10 = (*pcVar2)();
          local_8 = 0xffffffff;
          CArchive::~CArchive(local_80);
          piVar9 = local_1c;
        }
        goto LAB_00442e59;
      }
      pcVar2 = *(code **)(*(int *)param_2 + 0x54);
      guard_check_icall(3,0,0,0);
      iVar5 = (*pcVar2)();
      if (iVar5 == 0) goto LAB_00442c5f;
      iVar5 = *(int *)param_2;
      local_28 = (CFile *)0x0;
      guard_check_icall(0,0xffffffff,&local_28,&local_24);
      uVar6 = (**(code **)(iVar5 + 0x54))();
      pcVar2 = *(code **)(*local_18 + 0x14);
      guard_check_icall(local_18,local_28,uVar6);
      lVar10 = (*pcVar2)();
      pcVar2 = *(code **)(*local_18 + 8);
      guard_check_icall(local_18);
      (*pcVar2)();
      local_18 = (int *)0x0;
LAB_00442e68:
      if (lVar10 < 0) goto LAB_00442e9c;
      if ((local_38 == 0) && ((*(uint *)(local_14 + 0x70) & 0x20000) == 0)) {
        pcVar2 = *(code **)(**(int **)(local_14 + 0x50) + 0xc);
        guard_check_icall(*(int **)(local_14 + 0x50),local_14 + 0xcc);
        lVar10 = (*pcVar2)();
      }
    }
    if (-1 < lVar10) goto LAB_00442ecd;
  }
LAB_00442e9c:
  pCVar1 = local_14;
  piVar9 = *(int **)(local_14 + 0x50);
  if (piVar9 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar9 + 0x18);
    guard_check_icall(piVar9,1);
    (*pcVar2)();
    piVar9 = *(int **)(pCVar1 + 0x50);
    pcVar2 = *(code **)(*piVar9 + 8);
    guard_check_icall(piVar9);
    (*pcVar2)();
    *(undefined4 *)(pCVar1 + 0x50) = 0;
  }
LAB_00442ecd:
  if (local_18 != (int *)0x0) {
    pcVar2 = *(code **)(*local_18 + 8);
    guard_check_icall(local_18);
    (*pcVar2)();
  }
  if ((local_38 != 0) && (-1 < lVar10)) {
    lVar10 = 1;
  }
  return lVar10;
}

