// rea decompile_all
// name: GetAssocAt
// address: 0x4b13f4
// body: available
// range: 0x4b13f4-0x4b1444 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    protected: class CMap<unsigned int,unsigned int &,class CMFCToolBarButton *,class
   CMFCToolBarButton * &>::CAssoc * __thiscall CMap<unsigned int,unsigned int &,class
   CMFCToolBarButton *,class CMFCToolBarButton * &>::GetAssocAt(unsigned int &,unsigned int
   &,unsigned int &)const 
    protected: class CMap<struct HMENU__ *,struct HMENU__ * &,void *,void * &>::CAssoc * __thiscall
   CMap<struct HMENU__ *,struct HMENU__ * &,void *,void * &>::GetAssocAt(struct HMENU__ * &,unsigned
   int &,unsigned int &)const 
   
   Library: Visual Studio 2015 Release */

int GetAssocAt(HMENU__ **param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  
  uVar1 = HashKey<HMENU__*&>(param_1);
  *param_3 = uVar1;
  uVar1 = uVar1 % *(uint *)(in_ECX + 8);
  *param_2 = uVar1;
  if (*(int *)(in_ECX + 4) != 0) {
    for (iVar3 = *(int *)(*(int *)(in_ECX + 4) + uVar1 * 4); iVar3 != 0; iVar3 = *(int *)(iVar3 + 8)
        ) {
      if ((*(uint *)(iVar3 + 0xc) == *param_3) && (iVar2 = FUN_00483fe9(iVar3,param_1), iVar2 != 0))
      {
        return iVar3;
      }
    }
  }
  return 0;
}

