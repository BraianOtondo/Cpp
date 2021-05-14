#include <iostream>

using namespace std;
class Fecha{
private:
    int dia,mes,anio;
public:
    Fecha(int,int,int);//constructor1
    Fecha(long);//constructor2
    void MostrarFecha();// pueden existir distindos constructores
};
Fecha::Fecha(int _dia,int _mes,int _anio){
dia=_dia;
mes=_mes;
anio=_anio;
}
Fecha::Fecha(long fecha){
    anio=int(fecha/10000);
    mes=int((fecha-anio*10000)/100);
    dia=int(fecha-anio*10000-mes*100);
}
void Fecha::MostrarFecha(){
cout<<"La fecha es "<<dia<<"/"<<mes<<"/"<<anio<<endl;
}
int main(){

Fecha ayer(2,5,2021);
ayer.MostrarFecha();
Fecha hoy(20210503);
hoy.MostrarFecha();
    return 0;
}
