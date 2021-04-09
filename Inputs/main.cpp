#include <iostream>
#include<stdbool.h>
#include<string.h>
#include <iomanip>
using namespace std;

int main(){
int entero;
float flotante;
char letra;
char cadena[20]="";
bool booleano;
entero=10;
flotante=20.2332;
letra='A';
strcpy(cadena,"Braian");
booleano=false;

    cout<<"Entero: "<<entero<<endl;
    cout<<"Flotante: "<<setprecision(3)<<flotante<<endl;
    cout<<"Letra: "<<letra<<endl;
    cout<<"Cadena: "<<cadena<<endl;
    if(booleano==0){
        cout<<"Booleano: False"<<endl;
    }
    else if(booleano==1){
        cout<<"Booleano: True"<<endl;
    }


    return 0;
}
