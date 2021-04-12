#ifndef VINO_H_INCLUDED
#define VINO_H_INCLUDED
#include <iostream>
struct StructVino{
int id;
char etiqueta[20];
char bodega[20];
char segmento[20];
char varietal[10];
int anioCosecha;
char terroir[20];
};
typedef struct StructVino *VINO;
VINO CrearVino(int id,char etiqueta[20],char bodega[20],char segmento[20],char varietal[10],int anioCosecha,char terroir[20]);
VINO CrearVinoPorTeclado();
void EliminarVino(VINO vino);
void SetIDVino(VINO vino,int id);
void SetEtiquetaVino(VINO vino,char etiqueta[20]);
void SetBodegaVino(VINO vino,char bodega[20]);
void SetSegmentoVino(VINO vino,char segmento[20]);
void SetVarietalVIno(VINO vino,char varietal[10]);
void SetAnioCosechaVino(VINO vino,int anioCosecha);
void SetTerroirVino(VINO vino,char terroir[20]);
int GetIDVino(VINO vino);
char *GetEtiquetaVino(VINO vino);
char *GetBodegaVino(VINO vino);
char *GetSegmentoVino(VINO vino);
char *GetVarietalVIno(VINO vino);
int GetAnioCosechaVino(VINO vino);
char *GetTerroirVino(VINO vino);







#endif // VINO_H_INCLUDED
