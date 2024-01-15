#include<iostream>

using namespace std;

int main (){
    
    int x[3]={1,5,4};
    int y[3]={3,2,5};

    for (int i = 0; i <= 2; i++)
    {
        cout<<"array x "<< i<< " : "<<x[i]<< endl;
    }
    cout <<"\n";
    for (int i = 0; i <= 2; i++)
    {
        cout<<"array y "<< i<< " : "<<y[i]<< endl;
    }
    cout << "\npenjumlahan array 0 :"<< x[0]+y[0]<< endl;
    cout << "penjumlahan array 1 :"<< x[1]+y[1]<< endl;
    cout << "penjumlahan array 2 :"<< x[2]+y[2]<< endl;

    return 0;
}