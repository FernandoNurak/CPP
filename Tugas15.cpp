#include<iostream>
using namespace std;

void tangkap(int *a,int *s){
    cout << "hasil :"<< *a * *s;
}
int main(){
    int x,y;
    cout << "input nilai x : ";
    cin >> x;
    cout << "input nilai y : ";
    cin >> y;
    
    tangkap(&x,&y);

return 0;
}