#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <iomanip.h>


//saiful bahri = 12173147
atas()
{
cout<<"    	LATIHAN C++			\n";
cout<<"Program Perhitungan nilai Mahasiswa \n";
cout<<"========================================\n";
}
main()
{
char ket(float n);
clrscr();
 int i,j;
 	struct
 	{
   char nim[5];
   char nama [15];
   float uts,uas,hasil;
   }mhs[5];
atas();
 cout<<"masukan jumlah siswa="; cin>>j;
 clrscr();
 for (i=1;i<=j;i++)
 	{
 	cout<<"Data Ke- "<<i<<endl;
   cout<<"Masukan NIM ="; cin>>mhs[i].nim;
   cout<<"Masukan Nama ="; cin>>mhs[i].nama;
   cout<<"Masukan Nilai UTS =";cin>>mhs[i].uts;
   cout<<"Masukan Nilai UAS =";cin>>mhs[i].uas;
   cout<<endl;
   }
   clrscr();
   for(i=1;i<=j;i++)
   {
   cout<<"Data Ke- " <<i<<endl;
 	cout<<"NIM ="<<mhs[i].nim<<endl;
 	cout<<"Nama ="<<mhs[i].nama<<endl;
 	cout<<"Nilai UTS ="<<mhs[i].uts<<endl;
   cout<<"Nilai UAS ="<<mhs[i].uas<<endl;
   cout<<"Total Hasil ="<<mhs[i].hasil<<endl;
   mhs[i].hasil=(mhs[i].uts+mhs[i].uas)/2;
 	cout<<"Keterangan yang di dapat =";
 	cout<<ket(mhs[i].hasil)<<endl;
 	cout<<endl;
   }
clrscr();
atas() ;
cout<<"No  Nim	   Nama		Nilai UTS  Nilai UAS  Ket	\n";
for(i=1;i<=j;i++)
{
cout<<setiosflags(ios::left)<<setw(3)<<i;
cout<<setiosflags(ios::left)<<setw(6)<<mhs[i].nim;
cout<<setiosflags(ios::right)<<setw(7)<<mhs[i].nama;
cout<<setiosflags(ios::right)<<setw(10)<<mhs[i].uts;
cout<<setiosflags(ios::right)<<setw(10)<<mhs[i].uas;
cout<<setiosflags(ios::right)<<setw(10)<<mhs[i].hasil;
cout<<setiosflags(ios::right)<<setw(10)<<ket(mhs[i].hasil);
}
 	getch();
 }

 char ket(float n)
 {
 if(n>70)
 return 'L';
 else
 return 'G';
 }
