#include <iostream> 
using namespace std;

int main()
{
    system("cls");

    int bil;

    cout<<"Masukkan sebuah bilangan bulat : ";
    cin>>bil;

    if (bil % 10 == 0){
        cout<<"Bilangan ini kelipatan 5 dan 10"<<endl;
    } else if (bil % 5 == 0) {
        cout<<"Bilangan ini kelipatan 5"<<endl;
    } else {
        cout<<"Tidak habis dibagi 5 dan 10"<<endl;
    }
}