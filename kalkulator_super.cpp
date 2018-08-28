#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    /* code */
    int X = 0;
    int inputan;
    int menu = 6;
    cout << "*****KALKULATOR SUPER*****\n";
    while(menu!=-1){
        cout << "Pilihlah menu (1 Penjumlahan,2 Pengurangan, 3 Perkalian, 4 Pembagian, 5 Sisa Bagi, 6 Reset, -1 exit): \n";
        cin >> menu >> inputan;
        switch(menu){
            case 1:
                X = X+inputan;
                cout << "Hasil : " << X << "\n";
            break;
            case 2:
                X = X-inputan;
                cout << "Hasil : " << X << "\n";
            break;
            case 3:
                X = X*inputan;
                cout << "Hasil : " << X << "\n";
            break;
            case 4:
                X = X/inputan;
                cout << "Hasil : " << X << "\n";
            break;
            case 5:
                X = X%inputan;
                cout << "Hasil : " << X << "\n";
            break;
            case 6:
                X = 0;
                cout << "Hasil : " << X << "\n";
            break;
            default:
                cout << "Pilih Menu dari 1 sampai 6 , diikuti dengan bilangan ...\n";
            break;
        }
    }
    return 0;
}
