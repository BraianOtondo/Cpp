#include <iostream>

using namespace std;
class Punto{
private:
    int x,y;
public:
    Punto();
    void SetPuntoX(int);
    void SetPuntoY(int);
    int GetPuntoX();
    int GetPuntoY();
};
Punto::Punto(){

}
void Punto::SetPuntoX(int _x){
x=_x;
}
void Punto::SetPuntoY(int _y){
y=_y;
}
int Punto::GetPuntoX(){
return x;
}
int Punto::GetPuntoY(){
return y;
}
int main(){

    Punto punto1;
    punto1.SetPuntoX(10);
    punto1.SetPuntoY(20);
    //punto1.x=15; //No se puede hacer porque la x está  en private
                //el encapsulamiento solo puede ser llamado con funciones de la clase
    cout<<punto1.GetPuntoX()<<endl;
    cout<<punto1.GetPuntoY()<<endl;
    // GET Y SET SIRVE PARA MANIPULAR LOS ATRIBUTOS PRIVADOS
    return 0;
}
