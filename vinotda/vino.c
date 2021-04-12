#include "vino.h"
#include <iostream>
#include<string.h>
VINO CrearVino(int id,char etiqueta[20],char bodega[20],char segmento[20],char varietal[10],int anioCosecha,char terroir[20]){
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
VINO CrearVinoPorTeclado();
void EliminarVino(VINO vino){
delete vino;
}
void SetIDVino(VINO vino,int id){
vino->id=id;
}
void SetEtiquetaVino(VINO vino,char etiqueta[20]){
strcpy(vino->etiqueta,etiqueta);
}
void SetBodegaVino(VINO vino,char bodega[20]){
strcpy(vino->bodega,bodega);
}
void SetSegmentoVino(VINO vino,char segmento[20]){
strcpy(vino->segmento,segmento);
}
void SetVarietalVIno(VINO vino,char varietal[10]){
strcpy(vino->varietal,varietal);
}
void SetAnioCosechaVino(VINO vino,int anioCosecha){
vino->anioCosecha=anioCosecha;
}
void SetTerroirVino(VINO vino,char terroir[20]){
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
