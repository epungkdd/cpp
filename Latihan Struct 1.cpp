#include <stdio.h>
#include <conio.h>
#include <iostream.h>


main()
{
	struct
   {
   	char nim[5];
      char nama[15];
      int nilai;
   } mahasiswa;

clrscr();
cout<<"masukan NIM		=";
	cin>>mahasiswa.nim;
cout<<"Masukan Nama		=";
	cin>>mahasiswa.nama;
cout<<"Masukan Nilai Akhir	=";
	cin>>mahasiswa.nilai;

cout<<"\n\n Data Yang di Input Adalah: \n\n";
cout<<"NIM		="<<mahasiswa.nim<<endl;
cout<<"Nama		="<<mahasiswa.nilai<<endl;
cout<<"Nilai Akhir	="<<mahasiswa.nilai<<endl;
getch();
}
