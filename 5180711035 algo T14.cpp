#include<iostream>
#include<stdlib.h>
#include<windows.h>
using namespace std;

main(){
system("color a");
char mem;
float dis,ku,disc,hs,tu,total1,total2=0;
string id,idn,nm,nb[20];
int du,jumlah,hb[20],jb[30];
string nama[10];
nama[0]="Bayu";
nama[1]="Irvan";
nama[2]="Susiati";
nama[3]="Diana";
nama[4]="Roni";

cout<<"apakah Anda member atau non : ";cin>>mem;
system("cls");
if(mem=='y'||mem=='Y')
{
    cout<<"inputkan No identitas : ";cin>>idn;


 if(idn=="A001"){
    cout<<"No. identitas : "<<idn<<endl;
    cout<<"Nama          : "<<nama[0]<<endl;
}
else if(idn=="A002"){
    cout<<"No. identitas : "<<idn<<endl;
    cout<<"Nama          : "<<nama[1]<<endl;
}
else if(idn=="A003"){
    cout<<"No. identitas : "<<idn<<endl;
    cout<<"Nama          : "<<nama[2]<<endl;
}
else if(idn=="A007"){
    cout<<"No. identitas : "<<idn<<endl;
    cout<<"Nama          : "<<nama[3]<<endl;
}
else if(idn=="A008"){
    cout<<"No. identitas : "<<idn<<endl;
    cout<<"Nama          : "<<nama[4]<<endl;
}

}

else if(mem=='t'||mem=='T')
{
    cout<<"Masukkan Nama : ";cin>>nama[0];
    cout<<"No Identitas  : ";cin>>idn;
    cout<<endl;
}

cout<<"Berapa Jumlah Barang : ";cin>>jumlah;cout<<endl;
for(int i=0;i<jumlah;i++){
    cout<<"Barang ke - "<<i+1<<endl;
    cout<<"Masukkan Nama Barang   : ";cin>>nb[i];
    cout<<"Masukkan Jumlah barang : ";cin>>jb[i];
    cout<<"masukkan Harga Barang  : ";cin>>hb[i];
    cout<<endl;

total1=jb[i]*hb[i];
total2=total2+total1;
}
cout<<"Total Harga : "<<total2<<endl;
if(mem=='y'||mem=='Y'){
    dis=5/(float)100;
  disc=total2*dis;
  hs=total2-disc;
  tu=du-hs;
    cout<<"Diskon Anda Adalah : "<<disc<<endl;
    cout<<"Total Yang Harus Dibayar :"<<hs<<endl;
cout<<"Masukkan Uang : ";cin>>du;
cout<<"kembalian     : "<<tu;

}

else if(mem=='t'||mem=='T'){
    cout<<"Anda tidak Dapat Discon "<<endl;
    cout<<"Masukkan Uang : ";cin>>ku;
    cout<<"kembalian     : "<<ku-total2;
}

}
