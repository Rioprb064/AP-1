#include <iostream>
using namespace std;

int main()
{
    float r, volume, luas;
    const float pi = 3.14;

    cout<<"Masukkan jari-jari bola : ";
    cin>>r;

    volume =  (float)4 / (float)3 * pi * r * r * r;
    luas = 4 * pi * r * r;

    cout<<"Volume adalah : "<<volume<<endl;
    cout<<"Luas permukaan adalah : "<<luas<<endl;
}