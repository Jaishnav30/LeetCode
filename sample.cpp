#include<iostream>
using namespace std;

template <class type1, class type2>
void swap(type1 a, type2 b)
{
  type1 tmp=a;
  a=b;
  b=tmp;
}


int main() {
    // int a=10,b=20;
    // swap(a,b);
    // cout<<a<<" "<<b;

    // char a='a',b='b';
    // swap(a,b);
    // cout<<a<<" "<<b;

    // float a=10.0,b=20.0;
    // swap(a,b);
    // cout<<a<<" "<<b;

    // string a="jai",b="niggesh";
    // swap(a,b);
    // cout<<a<<" "<<b;
    
    return 0;
}