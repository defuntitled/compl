#include "ComplexNumbers.h"
using namespace std;
int main() {
    ComplexNumbers a = {1,5};
    ComplexNumbers b,c;
    cin>>b;
    cout<<a<<'\n';
    c = a+b;
    cout<<c<<'\n';
    c = a-b;
    cout<<c<<'\n';
    c = a*b;
    cout<<c<<'\n';
    c = a/b;
    cout<<c<<'\n';
}