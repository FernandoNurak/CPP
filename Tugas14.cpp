#include<iostream>

using namespace std;

int main(){

    struct Rumah
    {
        string tipe_rumah;
        int jumlah_kamar;
        float luas_rumah;
        float tinggi_rumah;
        string pemilik_rumah;
    };

    Rumah rumah1;
    cout <<"inputkan tipe rumah : ";
    cin >> rumah1.tipe_rumah;
    cout <<"inputkan jumlah kamar : ";
    cin >> rumah1.jumlah_kamar;
    cout <<"inputkan luas rumah (meter) : ";
    cin >> rumah1.luas_rumah;
    cout <<"inputkan tinggi rumah (meter) : ";
    cin >> rumah1.tinggi_rumah;
    cout <<"inputkan pemilik rumah : ";
    cin >> rumah1.pemilik_rumah;
    cout << "------------------------------------------------" << endl; 
    
    cout << "tipe rumah : " + rumah1.tipe_rumah<< endl;
    cout << "jumlah kamar : " + rumah1.jumlah_kamar<< endl;
    cout << "luas rumah : " + rumah1.luas_rumah << endl;
    cout << "tinggi rumah : " + rumah1.tinggi_rumah << endl;
    cout << "nama pemilik rumah : " + rumah1.pemilik_rumah << endl;

    return 0;
}