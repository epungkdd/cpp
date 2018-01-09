#include <stdio.h>
#include <conio.h>
#include <iostream.h>
main( )
{
int a, t, ls;      //variable yg digunakan dalam program
clrscr( );
cout<<"Masukan Nilai Alas Segitiga="; cin>>a;
cout<<"Masukan Nilai Tinggi segitiga="; cin>>t;
ls=a*t/2;          // proses hitung atau rumus yg tdk di tampilkan
cout<<"Jadi Nilai Luas Segitiga adalah " <<ls<<ends;   //hasil akan ditampilkan setelah di proses dngn rumus
getch( );          // untuk menahan tampilan agar tidak langsung hilang setelah muncul
}
