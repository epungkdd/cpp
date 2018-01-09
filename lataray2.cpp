#include <conio.h>
#include <iostream.h>
main()
{
char nama [2][4][25]={{"Nama:","Kelas:","Nim:","Alamat:"},{"Saiful", "Manajemen Informatika", "12173147","JAGAT ARSY"}};
clrscr();
cout<<nama[0][0]<<ends<<nama[1][0]<<endl;
cout<<nama[0][1]<<ends<<nama[1][1]<<endl;
cout<<nama[0][2]<<ends<<nama[1][2]<<endl;
cout<<nama[0][3]<<ends<<nama[1][3]<<endl;
getch();
}
