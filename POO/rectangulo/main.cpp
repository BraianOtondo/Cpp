#include <iostream>

using namespace std;
class Rectangulo{
private:
    float largo,ancho;
public:
    Rectangulo(float,float);//constructor
    void Perimetro();
    void Area();
};
Rectangulo::Rectangulo(float _largo,float _ancho){
largo=_largo;
ancho=_ancho;
}
void Rectangulo::Perimetro(){
float perimetro;
perimetro=(2*largo)+(2*ancho);
cout<<"El perimetro es: "<<perimetro<<endl;
}
void Rectangulo::Area(){
float area;
area=largo*ancho;
cout<<"El area es: "<<area<<endl;
}
int main(){
Rectangulo r1(11,7);
r1.Perimetro();
r1.Area();

    return 0;
}
