// rea decompile_all
// name: GetAssocAt
// address: 0x101777fb
// body: available
// range: 0x101777fb-0x1017784c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    protected: class CMap<int,int,int,int>::CAssoc * __thiscall
   CMap<int,int,int,int>::GetAssocAt(int,unsigned int &,unsigned int &)const 
    protected: class CMap<int,int,unsigned int,unsigned int>::CAssoc * __thiscall
   CMap<int,int,unsigned int,unsigned int>::GetAssocAt(int,unsigned int &,unsigned int &)const 
    protected: class CMap<unsigned int,unsigned int,int,int>::CAssoc * __thiscall CMap<unsigned
   int,unsigned int,int,int>::GetAssocAt(unsigned int,unsigned int &,unsigned int &)const 
    protected: class CMap<unsigned int,unsigned int,unsigned int,unsigned int>::CAssoc * __thiscall
   CMap<unsigned int,unsigned int,unsigned int,unsigned int>::GetAssocAt(unsigned int,unsigned int
   &,unsigned int &)const 
     18 names - too many to list
   
   Library: Visual Studio 2015 Release */

int GetAssocAt(ulong param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  
  uVar2 = HashKey<unsigned_long>(param_1);
  puVar1 = param_3;
  *param_3 = uVar2;
  uVar2 = uVar2 % *(uint *)(in_ECX + 8);
  *param_2 = uVar2;
  if (*(int *)(in_ECX + 4) != 0) {
    for (iVar4 = *(int *)(*(int *)(in_ECX + 4) + uVar2 * 4); iVar4 != 0; iVar4 = *(int *)(iVar4 + 8)
        ) {
      if ((*(uint *)(iVar4 + 0xc) == *puVar1) && (iVar3 = FUN_10084dd7(iVar4,&param_1), iVar3 != 0))
      {
        return iVar4;
      }
    }
  }
  return 0;
}

