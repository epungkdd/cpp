#include<conio.h>
#include<stdio.h>
#include<iostream.h>
main( )
{
struct data
{
char nim[10],nama[15];
int nilai;
};
clrscr( );
data mahasiswa;
cout<<"masukan NIM : ";cin>>mahasiswa.nim;
cout<<"masukan NAMA : ";cin>>mahasiswa.nama;
cout<<"masukan NILAI AKHIR : ";cin>>mahasiswa.nilai;
cout<<"\n\n Data yang Anda Inputkan Adalah : "<<endl<<endl;
cout<<"NIM : "<<mahasiswa.nim<<endl;
cout<<"NAMA: "<<mahasiswa.nama<<endl;
cout<<"NILAI AKHIR: "<<mahasiswa.nilai<<endl;
getch( );
}