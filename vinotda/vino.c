#include "vino.h"
#include <iostream>
#include<string.h>
using namespace std;
VINO CrearVino(int id,const char etiqueta[],const char bodega[],const char segmento[],const char varietal[],int anioCosecha,const char terroir[]){
VINO vino = new StructVino;
SetIDVino(vino,id);
SetEtiquetaVino(vino,etiqueta);
SetBodegaVino(vino,bodega);
SetSegmentoVino(vino,segmento);
SetVarietalVIno(vino,varietal);
SetAnioCosechaVino(vino,anioCosecha);
SetTerroirVino(vino,terroir);
return vino;
}
void EliminarVino(VINO vino){
delete vino;
}
void SetIDVino(VINO vino,int id){
vino->id=id;
}
void SetEtiquetaVino(VINO vino,const char etiqueta[]){
strcpy(vino->etiqueta,etiqueta);
}
void SetBodegaVino(VINO vino,const char bodega[]){
strcpy(vino->bodega,bodega);
}
void SetSegmentoVino(VINO vino,const char segmento[]){
strcpy(vino->segmento,segmento);
}
void SetVarietalVIno(VINO vino,const char varietal[]){
strcpy(vino->varietal,varietal);
}
void SetAnioCosechaVino(VINO vino,int anioCosecha){
vino->anioCosecha=anioCosecha;
}
void SetTerroirVino(VINO vino,const char terroir[]){
strcpy(vino->terroir,terroir);
}
int GetIDVino(VINO vino){
return vino->id;
}
char *GetEtiquetaVino(VINO vino){
return vino->etiqueta;
}
char *GetBodegaVino(VINO vino){
return vino->bodega;
}
char *GetSegmentoVino(VINO vino){
return vino->segmento;
}
char *GetVarietalVIno(VINO vino){
return vino->varietal;
}
int GetAnioCosechaVino(VINO vino){
return vino->anioCosecha;
}
char *GetTerroirVino(VINO vino){
return vino->terroir;
}
void MostrarVino(VINO vino){
cout<<"ID: "<<GetIDVino(vino)<<endl;
cout<<" Etiqueta: "<<GetEtiquetaVino(vino)<<endl;
cout<<"Bodega: "<<GetBodegaVino(vino)<<endl;
cout<<"Segmento: "<<GetSegmentoVino(vino)<<endl;
cout<<"Varietal: "<<GetVarietalVIno(vino)<<endl;
cout<<"Anio de cosecha: "<<GetAnioCosechaVino(vino)<<endl;
cout<<"Terroir: "<<GetTerroirVino(vino)<<endl;

}

