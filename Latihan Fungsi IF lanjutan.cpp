#include <stdio.h>
#include <conio.h>
#include <iostream.h>

main()
{
char id,nambar[30];
long ubyr,ukmbl,h=0;

 clrscr();
 cout<<endl<<"Data Pembelian Barang"<<endl
 <<"========================"<<endl;
 cout<<"Masukan Kode Barang {01/02/03}:";
 cin>>id;
 //proses
if(id=='01')
{ strcpy(nambar,"Buku");
  h=1000;
	}
else if(id=='02')
{ strcpy(nambar,"Pensil");
  h=2000;
   }
else if(id=='03')
{ strcpy(nambar,"TipeX");
  h=3000;
	}
else
{cout<<"salah kode golongan"<<endl;}

 cout<<"Kode Barang"<<id<<endl;
 cout<<"Nama Barang"<<nambar<<endl;
 cout<<"Harga"<<h<<endl;

 cout<<"Uang Bayar:";
 cin>>ubyr;
 ukmbl=ubyr-h
 cout<<"Uang Kembali:";<<ukmbl<<endl;
getch();
}
