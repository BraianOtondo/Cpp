#include <iostream>
using namespace std;
int NumeroCinco(int *num){
    *num=2;
return 5;
}
int main(){
    int num=4;
    cout<<NumeroCinco(&num)<<endl;
    cout<<num<<endl;

    return 0;
}
