#include<iostream>

using namespace std;


int luas(int x, int y){
    int hasil;
    hasil =(x * y) * 1/2;

    return hasil;
}
int main(){

    int a,t;
    cout << "inputkan alas segitiga :";
    cin >> a;
    cout << "inputkan tinggi segitiga :";
    cin >> t;

    luas (a,t);
    cout<< "luas segitiga adalah :" <<luas(a,t);


}