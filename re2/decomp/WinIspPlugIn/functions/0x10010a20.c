// rea decompile_all
// name: std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::_Rep
// address: 0x10010a20
// body: available
// range: 0x10010a20-0x10010a87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: class std::ostreambuf_iterator<char,struct std::char_traits<char> > __cdecl
   std::num_put<char,class std::ostreambuf_iterator<char,struct std::char_traits<char> >
   >::_Rep(class std::ostreambuf_iterator<char,struct std::char_traits<char> >,char,unsigned
   int)const 
   
   Library: Visual Studio 2019 Release */

void __thiscall
std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::_Rep
          (undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,int *param_5
          ,byte param_6,int param_7)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  
  do {
    if (param_7 == 0) {
      param_3[1] = param_5;
      *param_3 = param_4;
      return;
    }
    if (param_5 == (int *)0x0) {
LAB_10010a6f:
      uVar3 = (uint)param_4 >> 8;
      param_4 = CONCAT31((int3)uVar3,1);
    }
    else {
      if (*(int *)param_5[8] == 0) {
LAB_10010a5c:
        uVar3 = (**(code **)(*param_5 + 0xc))(param_6);
      }
      else {
        iVar1 = *(int *)param_5[0xc];
        if (iVar1 < 1) goto LAB_10010a5c;
        *(int *)param_5[0xc] = iVar1 + -1;
        pbVar2 = *(byte **)param_5[8];
        *(byte **)param_5[8] = pbVar2 + 1;
        *pbVar2 = param_6;
        uVar3 = (uint)param_6;
      }
      if (uVar3 == 0xffffffff) goto LAB_10010a6f;
    }
    param_7 = param_7 + -1;
  } while( true );
}

