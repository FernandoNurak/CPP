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

    cout <<"Rumah 1"<< endl;

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
    
    cout <<"rumah 2"<< endl;

    Rumah rumah2;
    cout <<"inputkan tipe rumah : ";
    cin >> rumah2.tipe_rumah;
    cout <<"inputkan jumlah kamar : ";
    cin >> rumah2.jumlah_kamar;
    cout <<"inputkan luas rumah (meter) : ";
    cin >> rumah2.luas_rumah;
    cout <<"inputkan tinggi rumah (meter) : ";
    cin >> rumah2.tinggi_rumah;
    cout <<"inputkan pemilik rumah : ";
    cin >> rumah2.pemilik_rumah;

    cout << "===================== Rumah 1 ===================="<< endl;

    cout << "tipe rumah : "<<rumah1.tipe_rumah << endl;
    cout <<"jumlah kamar : "<<rumah1.jumlah_kamar << endl;
    cout << "luas rumah (meter) : "<<rumah1.luas_rumah<< endl;
    cout << "tinggi rumah (meter) : "<<rumah1.tinggi_rumah <<endl;
    cout << "pemilik rumah : "<<rumah1.pemilik_rumah<< endl;

    cout << "===================== Rumah 2 ===================="<< endl;

    cout << "tipe rumah : "<<rumah2.tipe_rumah << endl;
    cout <<"jumlah kamar : "<<rumah2.jumlah_kamar << endl;
    cout << "luas rumah (meter) : "<<rumah2.luas_rumah<< endl;
    cout << "tinggi rumah (meter) : "<<rumah2.tinggi_rumah <<endl;
    cout << "pemilik rumah : "<<rumah2.pemilik_rumah<< endl;
    return 0;
}