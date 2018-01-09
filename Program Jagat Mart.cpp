#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <iomanip.h>
garis()
{
                cout<<"=====================================================\n";
}
bintang()
{
                cout<<"*****************************************************\n";
}
minimarket()
{
                cout<<"------------PROGRAM PENJUALAN JAGAT MART-------------\n";
}
main()
{
                int i,j;
   char kode_k,kasir[20],lagi;
   long int total_byr=0,bayar,kembali;
   char kode_brg[30],*barang[30];
   int harga[30];
   int jml_bel[30];
   long int sub_total[30];
   atas:
   clrscr();
   garis();
   bintang();
   minimarket();
   bintang();
   garis();
   cout<<"KODE KASIR\n";
   cout<<"     1. Erwin\n";
   cout<<"     2. Saiful\n";
   cout<<"     3. Fitri\n";
   cout<<"     4. Egy\n";
   cout<<"Masukkan Kode Kasir[1/2/3/4]  : "; cin>>kode_k;
   switch(kode_k)
   {
   	case'1':
      strcpy(kasir,"Erwin");
      break;
      case'2':
      strcpy(kasir,"Saiful");
      break;
      case'3':
      strcpy(kasir,"Fitri");
      break;
      case'4':
      strcpy(kasir,"Egy");
      break;
      default:
      strcpy(kasir,"Kode Salah");
      break;
   }
   cout<<"Jumlah item               	: ";cin>>j;

   clrscr();
   minimarket();
   cout<<"KODE BARANG\n";
   garis();
   cout<<"1. Shampoo        [S]\n";
   cout<<"2. Sikat Gigi     [G]\n";
   cout<<"3. Sabun Mandi    [M]\n";
   garis();
   cout<<endl;
   for(i=1;i<=j;i++)
   {
                cout<<"Data Ke-"<<i<<endl;
                cout<<"Kode Barang          : ";cin>>kode_brg[i];
      cout<<"Jumlah Beli          : ";cin>>jml_bel[i];
      garis();
   }
   for(i=1;i<=j;i++)
   {
                if(kode_brg[i]=='S'||kode_brg[i]=='s')
      {
                barang[i]="Shampoo";
         harga[i]=15000;
      }
                else if(kode_brg[i]=='G'||kode_brg[i]=='g')
                {
                barang[i]="Sikat Gigi";
         harga[i]=5000;
      }
      else if(kode_brg[i]=='M'||kode_brg[i]=='m')
      {
                                                barang[i]="Sabun Mandi";
         harga[i]=9000;
      }
      else
      {
                barang[i]="Kode Salah";
                                                harga[i]=0;
      }
   }
   clrscr();
   garis();
   minimarket();
   garis();
   cout<<"Nama Kasir        : "<<kasir<<endl;
   garis();
   cout<<"No.| Nama          |  Harga  | Jumlah |    Sub       \n";
   cout<<"   | Barang        |         | Beli   |    Total     \n";
   garis();
   for(i=1;i<=j;i++)
   {
      sub_total[i]=jml_bel[i]*harga[i];
      cout<<setiosflags(ios::left)<<setw(5)<<i;
      cout<<setiosflags(ios::left)<<setw(15)<<barang[i];
      cout<<setiosflags(ios::right)<<setw(8)<<harga[i];
      cout<<setiosflags(ios::right)<<setw(6)<<jml_bel[i];
      cout<<setiosflags(ios::right)<<setw(15)<<sub_total[i]<<endl;
                                total_byr=total_byr+sub_total[i];
   }
   garis();
   cout<<"                        Total Bayar   :Rp. "<<total_byr<<endl;
   cout<<"                        Uang Bayar    :Rp. "; cin>>bayar;
   kembali=bayar-total_byr;
   cout<<"                        Uang Kembali  :Rp. "<<kembali<<endl;
   cout<<"******************Terima Kasih***********************\n";
   cout<<"Input Lagi [Y/T] : "; cin>>lagi;
   if(lagi=='Y'||lagi=='y')
                goto atas;
   else
                goto selesai;
   getch();
   selesai:
}