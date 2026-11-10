// rea decompile_all
// name: COleDispatchException::Process
// address: 0x1013a717
// body: available
// range: 0x1013a717-0x1013a8a6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: static void __stdcall COleDispatchException::Process(struct tagEXCEPINFO *,class
   CException const *)
   
   Library: Visual Studio 2015 Release */

void COleDispatchException::Process(tagEXCEPINFO *param_1,CException *param_2)

{
  int iVar1;
  CStringData *pCVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  AFX_MODULE_STATE *pAVar5;
  undefined2 uVar6;
  undefined1 *puVar7;
  undefined1 *local_20c;
  undefined1 local_208 [512];
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  _memset(param_1,0,0x20);
  puVar7 = local_208;
  iVar1 = FUN_100250d6(&PTR_s_COleDispatchException_101ce2a0);
  if (iVar1 == 0) {
    iVar1 = FUN_100250d6(&PTR_s_CMemoryException_101a7b80);
    if (iVar1 == 0) {
      uVar6 = 0xf108;
    }
    else {
      uVar6 = 0xf10a;
    }
    FUN_1001de50(uVar6,local_208,0x100);
    *(undefined2 *)param_1 = uVar6;
  }
  else {
    puVar7 = *(undefined1 **)(param_2 + 0xc);
    *(undefined2 *)param_1 = *(undefined2 *)(param_2 + 8);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    if (*(int *)(*(int *)(param_2 + 0x14) + -0xc) != 0) {
      pCVar2 = (CStringData *)FUN_100187a0(*(int *)(param_2 + 0x14) + -0x10);
      uVar3 = Ordinal_2(pCVar2 + 0x10);
      *(undefined4 *)(param_1 + 0xc) = uVar3;
      ATL::CStringData::Release(pCVar2);
    }
    local_20c = puVar7;
    if (*(int *)(*(int *)(param_2 + 0x18) + -0xc) != 0) {
      pCVar2 = (CStringData *)FUN_100187a0(*(int *)(param_2 + 0x18) + -0x10);
      uVar3 = Ordinal_2(pCVar2 + 0x10);
      *(undefined4 *)(param_1 + 4) = uVar3;
      ATL::CStringData::Release(pCVar2);
    }
  }
  puVar4 = (undefined4 *)FUN_100185a0(puVar7);
  uVar3 = Ordinal_2(*puVar4);
  *(undefined4 *)(param_1 + 8) = uVar3;
  ATL::CStringData::Release((CStringData *)(local_20c + -0x10));
  if (*(int *)(param_1 + 4) == 0) {
    pAVar5 = AfxGetModuleState();
    puVar4 = (undefined4 *)FUN_100185a0(*(undefined4 *)(pAVar5 + 0x10));
    uVar3 = Ordinal_2(*puVar4);
    *(undefined4 *)(param_1 + 4) = uVar3;
    ATL::CStringData::Release((CStringData *)(local_20c + -0x10));
  }
  if ((*(int *)(param_1 + 0xc) == 0) && (*(int *)(param_1 + 0x10) != 0)) {
    pAVar5 = AfxGetModuleState();
    puVar4 = (undefined4 *)FUN_100185a0(*(undefined4 *)(*(int *)(pAVar5 + 4) + 0x68));
    uVar3 = Ordinal_2(*puVar4);
    *(undefined4 *)(param_1 + 0xc) = uVar3;
    ATL::CStringData::Release((CStringData *)(local_20c + -0x10));
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

