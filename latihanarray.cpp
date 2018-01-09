#include <constrea.h>
#include <stdio.h>
#include <iomanip.h>
main()
{
char nama[10] [20];
int i, j, gol[10], jam[10], lembur[10], honor[10];
long tunjangan [10], pendapatan [10], jumji[10], pajak[10];
long total=0;
clrscr();
cout<<"==============================================================="<<endl;
cout<<"			 # Program Hitung Honor Karyawan #							 "<<endl;
cout<<"							~ PT Stay Cool ~									 "<<endl;
cout<<"==============================================================="<<endl;

cout<<"Masukan Jumlah Karyawan :"; cin>>j;
for (i=1;i<=j;i++)
{
cout<<"Karyawan ke-"<<i<<endl;
cout<<"Nama Karyawan	  		: ";cin>>nama[j];
cout<<"Golongan[1/2/3]     : ";cin>>gol[j];
cout<<"Jumlah Jam Kerja		: ";cin>>jam[j];
cout<<"----------------------------------"<<endl;
if (gol[i]==1)
	tunjangan[i]=0.05*700000;
else if (gol[i]==2)
	tunjangan [i]=0.1*700000;
else
	tunjangan [i]=0.15*700000;

lembur[i]=jam[i]-240;

if (lembur [i]>0)
	honor[i]=lembur[i]*2500;
else
	honor[i]=0;
jumji [i]=700000+tunjangan[i];
pajak [i]= 0.1*jumji[i];
pendapatan[i]=700000+tunjangan[i]+honor[i]-pajak[i];
total=total+pendapatan[i];
}
clrscr();
cout<<"-------------------------------------------------------------"<<endl;
cout<<"                 Pt. STAY COOL                               "<<endl;
cout<<"-------------------------------------------------------------"<<endl;
cout<<"no. nama tunjangan honor pajak pendapatan					 	  "<<endl;
cout<<"-------------------------------------------------------------"<<endl;
for(i=1; j>=j; i++)
         //123456789012345678901234567890123456789012345678901234567890
{
gotoxy (1,7+i);cout<<i;
gotoxy (5,7+i);cout<<nama[i];
gotoxy (15,7+i);cout<<tunjangan[i];
gotoxy (26,7+i);cout<<honor[i];
gotoxy (35,7+i);cout<<pajak[i];
gotoxy (42,7+i);cout<<pendapatan[i];
}

cout<<endl;
cout<<"-------------------------------------------------------------"<<endl;
cout<<"\n			  	Total Gaji yang Dikeluarkan Rp.				  "<<total<<endl;
getche();
}

