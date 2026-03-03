#include <iostream>
using namespace std;

int p, l;

void input(){
    cout << "Masukkan Panjang = ";
    cin >> p;

    cout << "Masukkan Lebar = ";
    cin >> l;
}

float jumlah(float a, float b, float c){
    return a + b + c;
}

int luasPersegiP(int a, int b){
    return a * b;
}

int luasPersegiP(){
    cout << "Hasilnya = " << luasPersegiP(p, l) << endl;
    cout << "Terimakasih" << endl;

}

void output(){
    cout << "Hasilnya = " << luasPersegiP(p, l) << endl;
    cout << "Terima kasih" << endl;
}

int main(){
    input();
    output();
    cout << "Hasil Penjumlahan = " << jumlah(15.1, 24.9, 67);
}
