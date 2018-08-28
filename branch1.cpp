#include <iostream>
using namespace std;

int main(){
    int angka;
    string jawab = "ya";
    cout << "Gunakan : gcc input.cpp -o output/input.o -lstdc++";
    while(jawab == "ya"){
    cout << "tuliskan angka\n";
    cin >> angka;
    cout << "angka yang anda tuliskan adalah : " << angka << "\n";
    if(angka % 2==0){
        cout << angka << "genap \n";
    }
    else{
        cout << angka << " adalah bilangan ganjil \n";
    }
    cout << "Anda akan mengulangi lagi ?";
    cin >> jawab;}
}