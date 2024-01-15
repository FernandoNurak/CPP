#include<iostream>
#include<math.h>

using namespace std;

int main(){

    int x,y;

    cout <<"##############################\n";
    cout << "masukan nilai X :";
    cin>>x;
    cout << "masukan nilai Y :";
    cin>>y;
    
    x=x%2;
    y=y%2;
    cout <<"------------------------------\n";

    if (x ==1 && y ==1)
    {
        cout<<"keduanya bilangan ganjil\n";
    }else if (x != 0 && y == 0)//A bilangan ganjil dan B bilangan genap
    {
        cout << "x adalah bilangan ganjil \n";
        cout << "y adalah bilangan genap \n";
    }else if (x == 0 && y != 0)//A bilangan genap dan B bilangan ganjil
    {
        cout << "x adalah bilangan genap \n";
        cout << "y adalah bilangan ganjil \n";
    }else{
        cout <<"keduanya bilangan genap\n";
    }
    cout <<"##############################\n";
    return 0;
}