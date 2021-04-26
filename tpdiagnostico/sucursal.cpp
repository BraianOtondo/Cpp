#include<stdlib.h>
#include <iostream>
#include"sucursal.h"
#include<string.h>
using namespace std;
int IngresarZona(char zonaChar[]){
int zona;
cout<<"Ingrese de que zona pertenece la sucursal: "<<endl;
cout<<"1.Norte\n2.Sur\n3.Este\n4.Oeste\n5.Centro\n"<<endl;
cin>>zona;
    switch(zona){
    case 1:strcpy(zonaChar,"Norte");break;
    case 2:strcpy(zonaChar,"Sur");break;
    case 3:strcpy(zonaChar,"Este");break;
    case 4:strcpy(zonaChar,"Oeste");break;
    case 5:strcpy(zonaChar,"Centro");break;
    default:printf("Ingrese bien la opcion..\n");break;
    }
    return zona;
}
SUCURSAL CrearSucursal(int id,const char direccion[],const char zonaChar[],float factura,int zona){
SUCURSAL sucursal=new StructSucursal;
SetIdSucursal(sucursal,id);
SetDirecionSucursal(sucursal,direccion);
SetZonaCharSucursal(sucursal,zonaChar);
SetFacuraSucursal(sucursal,factura);
SetZonaSucursal(sucursal,zona);
return sucursal;
}
SUCURSAL CrearSucursalPorTeclado(){
int id,zona;
char direccion[40];
char zonaChar[30];
float factura;
cout<<"Ingrese ID de la sucursal\n"<<endl;
cin>>id;
    while((id<0)||(id>99)){
    cout<<"Por favor ingrese bien las opciones...\n"<<endl;
    //system("pause");
    //system("cls");
    cout<<"Ingrese ID de la sucursal\n"<<endl;
    cin>>id;

    }
cout<<"Ingrese direccion de la sucursal:"<<endl;
cin>>direccion;

zona=IngresarZona(zonaChar);
cout<<"Ingrese de la factura: "<<endl;
cin>>factura;
return CrearSucursal(id,direccion,zonaChar,factura,zona);
}
void SetIdSucursal(SUCURSAL sucursal,int id){
sucursal->id=id;
}
void SetDirecionSucursal(SUCURSAL sucursal,const char direccion[]){
strcpy(sucursal->direccion,direccion);
}
void SetZonaCharSucursal(SUCURSAL sucursal,const char zonaChar[]){
strcpy(sucursal->zonaChar,zonaChar);
}
void SetFacuraSucursal(SUCURSAL sucursal, float factura){
sucursal->factura=factura;
}
void SetZonaSucursal(SUCURSAL sucursal,int zona){
sucursal->zona=zona;
}
int GetIdSucursal(SUCURSAL sucursal){
return sucursal->id;
}
char *GetDireccionSucursal(SUCURSAL sucursal){
return sucursal->direccion;
}
char *GetZonaCharSucursal(SUCURSAL sucursal){
return sucursal->zonaChar;
}
float GetFacturaSucursal(SUCURSAL sucursal){
return sucursal->factura;
}
int GetZonaSucursal(SUCURSAL sucursal){
return sucursal->zona;
}
void DestruirSucursal(SUCURSAL sucursal){
delete sucursal;
}
void MostrarSucursal(SUCURSAL sucursal){
cout<<"ID: "<<GetIdSucursal(sucursal)<<endl;
cout<<"Direccion: "<<GetDireccionSucursal(sucursal)<<endl;
cout<<"Zona: "<<GetZonaCharSucursal(sucursal)<<endl;
cout<<"Factura: "<<GetFacturaSucursal(sucursal)<<endl;
}
