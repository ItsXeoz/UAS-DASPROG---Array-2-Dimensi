# Ujian Akhir Semester 
<br>Mata Kuliah 	: Dasar Pemograman
<br> Nama		: Abidzar Giffari
<br>NIM		:	1227050001
<br>Jurusan		:[Teknik Informatika](http://if.uinsgd.ac.id/) [UIN Sunan Gunung Djati Bandung](https://uinsgd.ac.id/) 

## Deskripsi Umum
Algoritma dari source code ini yaitu :

1. User menginput banyak baris pada array 2 dimensi.
2. User menginput banyak kolom pada array 2 dimensi.
3. User menginput data dari array 2 dimensi.
4. Setelah menginput data pada array 2 dimensi, output akan ditampilkan sesuai urutan matriks.
5. Merubah Baris pada matriks menjadi kolom dan kolom menjadi baris.
6. Menampilkan output array 2 dimensi dengan baris dan kolom yang terbalik.

## Source Code
<code>
#include <iostream>
#include <conio.h>
using namespace std;

main(){

int reverse[100][100],matriks[100][100];
int a,b;

cout<<"Input Baris : ";cin>>a;
cout<<"Input Kolom : ";cin>>b;
cout<<endl;

cout<<"Input Nilai Matriks :"<<endl;
for (int x=0; x<a; x++){
    for (int y=0; y<b; y++){
        cout<<"["<<x<<"."<<y<<"] : ";cin>>matriks[x][y];
    }
}
cout<<endl;

cout<<"Matriks Sebelum Diubah : "<<endl;
for (int i=0; i<a; i++){
    for (int j=0; j<b; j++){
        cout<<matriks[i][j]<<"\t";
    }
    cout<<endl;
}
cout<<endl;

for (int k=0; k<b; k++){
    for (int l=0; l<a; l++){ 
        reverse[k][l]=matriks[l][k];
    }
}

cout<<"Matriks Sesudah Diubah : "<<endl;
for (int k=0; k<b; k++){
    for (int l=0; l<a; l++){
        cout<<reverse[k][l]<<"\t";
    }
    cout<<endl;
}
getch();
}
</code>

## Output
![image](https://user-images.githubusercontent.com/119671026/209476275-66919211-8618-40dd-8cd3-68cc41bc1aa5.png)

