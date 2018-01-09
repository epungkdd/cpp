#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <iomanip.h>
#include <windows.h>

void judul()
{
cout<<"           PT THE MOST HANDSOME IN THE CLASS TRAVEL"<<endl;
}

void garis()
{
cout<<"==================================================================="<<endl;
}


main()
{
struct
{
int harga;
char kode[10],nama[10];
char *kdmas,*tujuan,*kd;
}bus[20];

int i,jumlah,n;
char ulang,lagi,jd[10],nmps[10];
char yakin,menu;
int total,bayar,k,L,sbt[10];

clrscr();
garis();
judul();
garis();
cout<<endl;
cout<<endl;
cout<<"SELAMAT DATANG DI LAYANAN PEMESANAN TIKET TRAVEL HANDSOME"<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<" PILIHAN MENU..."<<endl;
cout<<" 1. INPUT DATA"<<endl;
cout<<" 2. LOG OUT"<<endl;
cout<<" ==================================="<<endl;
cout<<" MASUKAN PILIHAN  : ",cin>>menu;
    if ( menu=='2')
      exit (2);
    else if ( menu=='1')
      goto awal;

awal:
total=0;
clrscr();
garis();
judul();
garis();
cout<<endl;
cout<<" MASUKAN NAMA PEMESAN TIKET : ",gets(nmps);
cout<<endl;
cout<<"INPUT JUMLAH DATA (MAX 10) : ",cin>>jd;
cout<<endl;
if (strcmp(jd,"1")==0)
    {
    L=1;
    }
else if (strcmp(jd,"2")==0)
    {
    L=2;
    }
else if (strcmp(jd,"3")==0)
    {
    L=3;
    }
else if (strcmp(jd,"4")==0)
    {
    L=4;
    }
else if (strcmp(jd,"5")==0)
    {
    L=5;
    }
else if (strcmp(jd,"6")==0)
    {
    L=6;
    }
else if (strcmp(jd,"7")==0)
    {
    L=7;
    }
else if (strcmp(jd,"8")==0)
    {
    L=8;
    }
else if (strcmp(jd,"9")==0)
    {
    L=9;
    }
else if (strcmp(jd,"10")==0)
    {
    L=10;
    }
else
    {
    cout<<" GAGAL MEMPROSES..."<<endl;
    cout<<" 1. Penginputan bukan dengan angka"<<endl;
    cout<<" 2. Penginputan kurang dari 1"<<endl;
    cout<<" 3. Penginputan lebih dari 10"<<endl;
    cout<<endl;
    cout<<"    0 = ULANGI "<<endl;
    cout<<"    1 = EXIT         "<<endl;
    cout<<"      MASUKAN PILIHAN [0/1] : ",cin>>ulang;
    if ( ulang=='1' || ulang=='1')
      exit (1 || 1);
    else if ( ulang=='0' || ulang=='0')
      goto awal;
    }
jumlah=L;
n=jumlah;
   for(i=1;i<=n;i++)
    {
   v:
   clrscr();
   garis();
   judul();
   garis();
   cout<<" JUMLAH DATA YANG DI INPUT : "<<jd<<endl;
   cout<<endl;
   cout<<"TIKET KE - "<<i<<endl;
   cout<<"INPUT NAMA          : ",gets(bus[i].nama);
   cout<<" BUS : 1. CAHAYA        2. BURDA         3. CAHAYA BURDA "<<endl;
   cout<<"         a. CIATER        a. AEON           a. SMS       "<<endl;
   cout<<"         b. PAMULANG      b. PAGEDANGAN     b. CIKOKOL   "<<endl;
   cout<<"         c. CIPUTAT       c. LEGOK          c. KOTA TNG  "<<endl;
   cout<<endl;
   cout<<" MASUKAN KODE MASKAPAI [1a/2c/3b] : ",cin>>bus[i].kode;
   cout<<endl;
   if ((strcmp(bus[i].kode,"1A")==0) || (strcmp(bus[i].kode,"1a")==0))
    {
    bus[i].kd="1A";
    bus[i].kdmas="CAHAYA";
    bus[i].harga=50000;
    bus[i].tujuan="CIATER";
    }
    else if ((strcmp(bus[i].kode,"1B")==0) || (strcmp(bus[i].kode,"1b")==0))
    {
    bus[i].kd="1B";
    bus[i].kdmas="CAHAYA";
    bus[i].harga=75000;
    bus[i].tujuan="PAMULANG";
    }
   else if ((strcmp(bus[i].kode,"1C")==0) || (strcmp(bus[i].kode,"1c")==0))
    {
    bus[i].kd="1C";
    bus[i].kdmas="CAHAYA";
    bus[i].harga=100000;
    bus[i].tujuan="CIPUTAT";
    }
// BUS 2
else if ((strcmp(bus[i].kode,"2A")==0) || (strcmp(bus[i].kode,"2a")==0))
    {
    bus[i].kd="2A";
    bus[i].kdmas="BURDA";
    bus[i].harga=65000;
    bus[i].tujuan="AEON";
    }
else if ((strcmp(bus[i].kode,"2B")==0) || (strcmp(bus[i].kode,"2b")==0))
    {
    bus[i].kd="2B";
    bus[i].kdmas="BURDA";
    bus[i].harga=80000;
    bus[i].tujuan="PAGEDANGAN";
    }
else if ((strcmp(bus[i].kode,"2C")==0) || (strcmp(bus[i].kode,"2c")==0))
    {
    bus[i].kd="2C";
    bus[i].kdmas="BURDA";
    bus[i].harga=95000;
    bus[i].tujuan="LEGOK";
    }
// BUS 3
else if ((strcmp(bus[i].kode,"3A")==0) || (strcmp(bus[i].kode,"3a")==0))
    {
    bus[i].kd="3A";
    bus[i].kdmas="CAHAYA BURDA";
    bus[i].harga=84000;
    bus[i].tujuan="SMS";
    }
else if ((strcmp(bus[i].kode,"3B")==0) || (strcmp(bus[i].kode,"3b")==0))
    {
    bus[i].kd="3B";
    bus[i].kdmas="CAHAYA BURDA";
    bus[i].harga=90000;
    bus[i].tujuan="CIKOKOL";
    }
else if ((strcmp(bus[i].kode,"3C")==0) || (strcmp(bus[i].kode,"3c")==0))
    {
    bus[i].kd="3C";
    bus[i].kdmas="CAHAYA BURDA";
    bus[i].harga=125000;
    bus[i].tujuan="KOTA TANGERANG";
    }
else
    {
    cout<<endl;
    cout<<" KODE SALAH "<<endl;
    cout<<" 0 = ULANGI "<<endl;
    cout<<" 1 = EXIT   "<<endl;
    cout<<" MASUKAN PILIHAN [0/1] : ",cin>>ulang;
    if ( ulang=='1')
      exit (1 || 1);
    else ( ulang=='0');
      goto v;
    }
    }
clrscr();
   garis();
   judul();
   garis();
   cout<<endl;
   cout<<" JUMLAH DATA YANG DI INPUT : "<<jd<<endl;
   cout<<endl;
for(i=1;i<=n;i++)
  {
   cout<<"TIKET KE - "<<i<<endl;
   cout<<"NAMA          : "<<bus[i].nama<<endl;
   cout<<"KODE          : "<<bus[i].kd<<endl;
   cout<<"BUS           : "<<bus[i].kdmas<<endl;
   cout<<"HARGA         : "<<bus[i].harga<<endl;
   cout<<"TUJUAN        : "<<bus[i].tujuan<<endl;
   cout<<endl;
   cout<<endl;
  sbt[i]=bus[i].harga*1;
  total=total+sbt[i];
  }
  goto c;
a:
clrscr();
garis();
judul();
garis();
cout<<endl;
c:
cout<<endl;
cout<<" TOTAL   = Rp. "<<total<<endl;
cout<<" BAYAR   = Rp. ",cin>>bayar;
if (bayar<total)
 {
 cout<<endl;
 cout<<" PEMBAYARAN ANDA KURANG "<<endl;
 cout<<" 0 = ULANGI BAYAR : "<<endl;
 cout<<" 1 = EXIT         : "<<endl;
    cout<<" MASUKAN PILIHAN [0/1] : ",cin>>ulang;
    if ( ulang=='1')
      exit (1);
    else  ( ulang=='0');
      goto a;
 }

k=bayar-total;
cout<<" KEMBALI = Rp. "<<k<<endl;
cout<<endl;
cout<<endl;
cout<<" KONFIRMASI PEMESANAN  [Y/N] ??  : ",cin>>yakin;
if ( yakin=='Y' || yakin=='y')
  goto b;
else  ( yakin=='N' || yakin=='n');
  goto awal;

b:
clrscr();
garis();
judul();
garis();
cout<<endl;
for(int i=0;i<=100;i++)
 {
  for (int k=0;k<=3000;k++)
   {
    for (int g=0;g<=8000;g++)
    {}
   }
  gotoxy(10,12);cout<<" DATA SEDANG DI PROSES... "<<i<<"%"<<endl;
 }

clrscr();
garis();
judul();
garis();
cout<<endl;
cout<<" NAMA PEMESAN TIKET         : "<<nmps;
cout<<endl;
cout<<" JUMLAH DATA                : "<<jumlah<<endl;
cout<<endl;
cout<<" DATA TIKET  "<<endl;
cout<<"------------------------------------------------------------------"<<endl;
cout<<"NO    NAMA         BUS            TUJUAN           HARGA"<<endl;
cout<<"------------------------------------------------------------------"<<endl;
  for (i=1;i<=n;i++)
   {
   cout<<setiosflags(ios::right)<<setw(2)<<i;
   cout<<setiosflags(ios::right)<<setw(7)<<bus[i].nama;
   cout<<setiosflags(ios::right)<<setw(17)<<bus[i].kdmas;
   cout<<setiosflags(ios::right)<<setw(20)<<bus[i].tujuan;
   cout<<setiosflags(ios::right)<<setw(16)<<bus[i].harga<<endl;
   }

   cout<<"------------------------------------------------------------------"<<endl;
   cout<<endl;
   cout<<"                         ";cout<<" TOTAL           : Rp. "<<total<<endl;
   cout<<"                         ";cout<<" BAYAR           : Rp. "<<bayar<<endl;
   cout<<"                         ";cout<<" KEMBALI         : Rp. "<<k<<endl;
cout<<endl;
cout<<" PESAN TIKET LAGI [Y/N] ????  : ",cin>>lagi;
if (lagi=='Y' || lagi=='y')
  goto awal;
else if (lagi=='N' || lagi=='n')
  goto akhir;
akhir:
clrscr();
garis();
judul();
garis();
cout<<endl;
cout<<"                           TERIMA KASIH     ";
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
getch();

}
