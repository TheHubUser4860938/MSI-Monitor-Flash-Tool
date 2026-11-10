// rea decompile_all
// name: ATL::CDynamicAccessor::FreeRecordMemory
// address: 0x443382
// body: available
// range: 0x443382-0x44343e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall ATL::CDynamicAccessor::FreeRecordMemory(struct IRowset *)
   
   Library: Visual Studio 2015 Release */

void __thiscall ATL::CDynamicAccessor::FreeRecordMemory(CDynamicAccessor *this,IRowset *param_1)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uchar *puVar5;
  int iVar6;
  uint local_8;
  
  local_8 = 0;
  if (*(int *)(this + 0xc) != 0) {
    iVar6 = 0;
    do {
      if ((*(int *)(this + 0x10) == 0) || (*(char *)(*(int *)(this + 0x10) + local_8) != '\x01')) {
        iVar3 = *(int *)(this + 0x14);
        uVar2 = *(ushort *)(iVar6 + 0x14 + iVar3);
        if ((uVar2 == 0xd) || (uVar2 == 9)) {
          iVar4 = *(int *)(iVar6 + 4 + iVar3);
          if (*(int *)((*(int *)(iVar6 + 0x10 + iVar3) + 3 + iVar4 & 0xfffffffcU) + 4 +
                      *(int *)(this + 8)) != 0) goto LAB_00443423;
          puVar5 = (uchar *)(iVar4 + *(int *)(this + 8));
        }
        else {
          puVar5 = (uchar *)(*(int *)(iVar6 + 4 + iVar3) + *(int *)(this + 8));
        }
        CAccessorBase::FreeType(uVar2,puVar5,param_1);
      }
      else {
        iVar3 = *(int *)(iVar6 + 4 + *(int *)(this + 0x14));
        if (((*(int *)((*(int *)(iVar6 + 0x10 + *(int *)(this + 0x14)) + 3 + iVar3 & 0xfffffffcU) +
                       4 + *(int *)(this + 8)) != 3) &&
            (piVar1 = (int *)(iVar3 + *(int *)(this + 8)), piVar1 != (int *)0x0)) && (*piVar1 != 0))
        {
          CoTaskMemFree((LPVOID)*piVar1);
          *piVar1 = 0;
        }
      }
LAB_00443423:
      iVar6 = iVar6 + 0x30;
      local_8 = local_8 + 1;
    } while (local_8 < *(uint *)(this + 0xc));
  }
  return;
}

