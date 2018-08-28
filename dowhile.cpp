#include <iostream>
using namespace std;

void addrows(){
    cout << "\n";
}
int main(int argc, char const *argv[])
{
    int angka;
    /* code */
    do{
        addrows();
        cout << "Masukkan angka yang lebih dari 0:";
        cin >> angka;
        cout << "kuadrat dari angka ini adalah : " << angka*angka << "\n\n";
        addrows();
    }
    while(angka>0);
    cout << "Terimakasih telah menggunakan program ini ...";
    return 0;
}
