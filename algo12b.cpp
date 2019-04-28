#include<iostream>
#include<string.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
using namespace ::std;
struct mhs{
int nim;
char nama[20],prodi;};
mhs uty[100];
char x;
mhs temp;
int a,nilai,b{20},c,d,j,t,p,r,hasil,indeks[10];
bool status=false;
int main()
{     int pilih, k,l,j;
  awal:
  cout<<"\n=============Pilihan==============";
  cout<<"\n1)Input data";
  cout<<"\n2)Hapus Data";
  cout<<"\n3)Lihat Data";
  cout<<"\n4)Edit Data";
  cout<<"\n5)Sorting data";
  cout<<"\n5)Serching data";
  cout<<"\nInput Pilihan : ";
  cin>>pilih;
  if(pilih==1)
   {system("CLS");cout<<"\nJumlah Data Yang Akan diinput : ";cin>>b;
   d=0;
   for(c=0;c<b;c++){
   d=d+1;
   cout<<"\nData ke-"<<d<<endl;
   cout<<"NIM    : ";cin>>uty[a].nim;
   cout<<"Nama   : ";cin>>uty[a].nama;
   cout<<"Prodi  : ";cin>>uty[a].prodi;
   a++;}system("CLS");;goto awal;}
  if(pilih==2)
   {system("CLS");int x,y;
 cout<<"Hapus data ke-";cin>>x;
 y=x-1;
 a--;
 for(int i=y;i<a;i++)
 {uty[i]=uty[i+1];}
 system("CLS");;goto awal;}
  if(pilih==3)
   {system("CLS");int i,j;
 cout<<"\n=======Data=============";
 j=0;
 for(i=0;i<a;i++)
 {j=j+1;
  cout<<"=========================";
  cout<<"\nData "<<j<<": ";cout<<endl;
  cout<<"NIM    : ";cout<<uty[i].nim;cout<<endl;
  cout<<"Nama   : ";cout<<uty[i].nama;cout<<endl;
  cout<<"Prodi  : ";cout<<uty[i].prodi;cout<<endl;
  }
  cout<<"========================";getch();system("CLS");;goto awal;}
  if(pilih==4)
   {system("CLS");int k,l;
cout<<"Data yang akan diedit : ";cin>>k;
l=k-1;
cout<<"NIM   : ";cin>>uty[l].nim;
cout<<"Nama  : ";cin>>uty[l].nama;
cout<<"Prodi : ";cin>>uty[l].prodi;
;system("CLS");;goto awal;}

if(pilih==5)
    {system("CLS");
    for(int i=0;i<b;i++){
for(int r=0;r<b-1;r++){
    if(uty[r].nim>uty[r+1].nim){
temp.nim=uty[r].nim;
uty[r].nim=uty[r+1].nim;
uty[r+1].nim=temp.nim;

strcpy(temp.nama,uty[r].nama);
strcpy(uty[r].nama,uty[r+1].nama);
strcpy(uty[r+1].nama,temp.nama);

temp.prodi=uty[r].prodi;
uty[r].prodi=uty[r+1].prodi;
uty[r+1].prodi=temp.prodi;
}
}
    }
    cout<<"setelah data di sorting :\n";
for(b=0;b<c;b++)
{
    cout<<"===========================\n";
    cout<<"Nim   :"<<uty[b].nim<<endl;
    cout<<"Nama  :"<<uty[b].nama<<endl;
    cout<<"Prodi :"<<uty[b].prodi<<endl;
}
;getch();system("CLS");;goto awal;
}
if(pilih==6)
   {;getch();system("CLS");j=0;
cout<<"Cari data nim : ";cin>>x;
for(int t=0;t<b;t++){
    if (x==uty[t].nim)
    {cout<<t;}
}
;getch();system("CLS");;goto awal;}
}



