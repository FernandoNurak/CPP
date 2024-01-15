#include<iostream>
using namespace std;

int main(){
    int x;
    cout <<"##################################\n";
    cout << "masukan nilai X : ";
    cin >>x;

    switch (x)
    {
    case 10000:
        cout <<"Sepuluh Ribu Rupiah";
        break;
    case 20000:
        cout <<"Dua Puluh Ribu Rupiah";
        break;    
    case 30000:
        cout <<"Tiga Puluh Ribu Rupiah";
        break;    
    case 40000:
        cout <<"Empat Puluh Ribu Rupiah";
        break;
    case 50000:
        cout <<"Lima puluh Ribu Rupiah";
        break;
    default:
        cout <<"Tidak Terdaftar di program";
        break;
    }
    cout <<"\n##################################";

    return 0;
}