#include <stdio.h>
#include <conio.h>
#include <iostream.h>


char ket(float n);

main()
{

 int i;
 	struct
 	{
   char nama [15];
   float nilai1;
   float nilai2;
   float hasil;
   }mhs[5];

 clrscr();
 for (i=1;i<2;i++)
 	{
 	cout<<"Data Ke- "<<i++<<endl;
   cout<<"Masukan Nama ="; cin>>mhs[i].nama;
   cout<<"Masukan Nilai UTS=";cin>>mhs[i].nilai1;
   cout<<"Masukan Nilai UAS=";cin>>mhs[i].nilai2;
   cout<<endl;
   }
   clrscr();
   for(i=1;i<2;i++)
   {
 	cout<<"Data Ke- " <<i++<<endl;
 	cout<<"Nama ="<<mhs[i].nama<<endl;
 	cout<<"Nilai UTS ="<<mhs[i].nilai1<<endl;
   cout<<"Nilai UAS ="<<mhs[i].nilai2<<endl;
   mhs[i].hasil = (mhs[i].nilai1*0.4)+(mhs[i].nilai2*0.6)
 	cout<<"Keterangan yang di dapat =";
 	cout<<ket(mhs[i].hasil)<<endl;
 	cout<<endl;
   }

 	getch();
 }



 char ket(float n)
 {
 if(n>=80)
 return "A";
 if(n>=70)
 return 'B';
 if(n>=56)
 return 'C';
 else
 return 'E';
 }