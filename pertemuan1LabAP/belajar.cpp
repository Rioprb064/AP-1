#include <iostream>
#include <conio.h> //header untuk getche() dan getch()
using namespace std;

int main()

{
    /*untuk komentar 
    beberapa baris*/
    string nama;
    char kom,jenis;
    int nim;
    float ip;
    cout<<"Hello world"<<endl;

    cout<<"Masukkan nama : "; 
    
    //cin>>nama;
    getline(cin,nama); //agar spasi terbaca dalam imputan

    cout<<"Masukkan KOM : ";
    cin>>kom;

    cout<<"Masukkan NIM : ";
    cin>>nim;

    cout<<"Masukkan IP : ";
    cin>>ip;

    cout<<"Masukkan jenis kelamin (L/P) : ";
    jenis=getche(); //dipakai untuk menampilkan karakter tanpa menekan enter
    

    //untuk output
    cout<<"\n"<<nama<<endl;
    cout<<kom<<endl;
    cout<<nim<<endl;
    cout<<ip<<endl;
    putchar(jenis); //output karakter jenis kelamin yg diinput
    
    getch(); //karakter yang diketik tidak ditampilkan
}