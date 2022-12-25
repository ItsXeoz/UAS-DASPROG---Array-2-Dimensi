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
