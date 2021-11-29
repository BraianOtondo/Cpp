#include<stdlib.h>
#include<iostream>
enum EnumZona{
norte=1,sur=2,este=3,oeste=4,centro=5
};
typedef enum EnumZona ENUMZONA;
int main(){
    ENUMZONA zona;
cout<<"Ingrese de que zona pertenece la sucursal: "<<endl;
cout<<"1.Norte\n2.Sur\n3.Este\n4.Oeste\n5.Centro\n"<<;
cin>>zona;
cout<<zona<<endl;
    return 0;
}

