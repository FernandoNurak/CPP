#include<iostream>

using namespace std;

int main (){

    int x,z;

    cout << "#######################" <<endl;
    cout << "masukan nilai X : ";
    cin >> x;
    cout << "masukan nilai z : ";
    cin >>z;
    
    if (x>=z)
    {
        cout << "hasil : "<< x + z << endl;
    }
    else{
        cout << "Hasil : " << x - z << endl;
    }
    
    cout << "#######################" <<endl;
    



    return 0;
}