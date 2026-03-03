#include <iostream>
using namespace std;

float jarijari;
float phi = 3.14159;

void awal(){
cout << "Masukkan jarijari lingkaran=";
cin >> jarijari;
}

float luas (float jari_jari,float phi){
    return phi*jarijari*jarijari;
}

void akhir (){
    cout << "Hasil luas untuk lingkaran dengan jari jari" << jarijari <<"adalah=" << luas (jarijari,phi); 
}

int main(){
    awal();
    akhir();
}
