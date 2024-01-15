#include<iostream>

using namespace std;

int main (){

    int x,z;

    cout << "inputkan nilai X :";
    cin >>x;
    z=0;
  for (int i = 1; i <= x; i++)
  {
    cout << z << endl;
    z=z+5;
  }
     
    return 0;
}