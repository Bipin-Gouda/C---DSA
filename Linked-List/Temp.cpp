#include <iostream>
using namespace std;

// Both are call by refference

void ref1(int* x){        // C has only this and call by value

    *x=12;
}

void ref2(int& x){
     
     x=11;
}

int main()
{
    int x=10;
    ref1(&x);
    cout<<x<<"\n";
    ref2(x);
    cout<<x;
}