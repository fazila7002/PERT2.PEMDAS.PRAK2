#include <iostream>
using namespace std;

int p, l, luas;

void input (){
    cout << "Masukkan Panjang =";
    cin >> p;
    cout << "Masukkan Lebar =";
    cin >> l;
}

int luasPersegi(){
    return p * l;

}

void output(){
    cout << "Hasilnya =" << luasPersegi() << endl;
    cout << "Terimakasih";


}

int main(){
    input();
    output();

}