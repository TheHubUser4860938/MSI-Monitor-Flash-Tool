// rea decompile_all
// name: CMFCDynamicLayoutData::ReadResource
// address: 0x1002c32f
// body: available
// range: 0x1002c32f-0x1002c415 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CMFCDynamicLayoutData::ReadResource(void *,unsigned int)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCDynamicLayoutData::ReadResource(CMFCDynamicLayoutData *this,void *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  if ((param_1 != (void *)0x0) && (param_2 != 0)) {
    CList<tagPOINT,tagPOINT>::RemoveAll((CList<tagPOINT,tagPOINT> *)this);
    local_8 = (int)param_1 + param_2;
    if (*(short *)param_1 == 0) {
      uVar2 = (int)param_1 + 10;
      if (uVar2 <= local_8) {
        do {
          local_c = 100;
          iVar1 = (int)*(short *)((int)param_1 + 2);
          if (iVar1 < 0) {
            local_18 = 0;
          }
          else {
            local_18 = local_c;
            if (iVar1 < 0x65) {
              local_18 = iVar1;
            }
          }
          uVar2 = uVar2 + 8;
          iVar1 = (int)*(short *)((int)param_1 + 4);
          if (iVar1 < 0) {
            local_14 = 0;
          }
          else {
            local_14 = local_c;
            if (iVar1 < 0x65) {
              local_14 = iVar1;
            }
          }
          iVar1 = (int)*(short *)((int)param_1 + 6);
          if (iVar1 < 0) {
            local_10 = 0;
          }
          else {
            local_10 = local_c;
            if (iVar1 < 0x65) {
              local_10 = iVar1;
            }
          }
          param_1 = (void *)((int)param_1 + 8);
          iVar1 = (int)*(short *)param_1;
          if (iVar1 < 0) {
            local_c = 0;
          }
          else if (iVar1 < 0x65) {
            local_c = iVar1;
          }
          CList<CMFCDynamicLayoutData::Item,CMFCDynamicLayoutData::Item&>::AddTail
                    ((CList<CMFCDynamicLayoutData::Item,CMFCDynamicLayoutData::Item&> *)this,
                     (Item *)&local_18);
        } while (uVar2 <= local_8);
      }
      return (uint)(0 < *(int *)(this + 0xc));
    }
  }
  return 0;
}

