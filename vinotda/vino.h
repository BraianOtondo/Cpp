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
VINO CrearVino(int id,const char etiqueta[],const char bodega[],const char segmento[],const char varietal[],int anioCosecha,const char terroir[]);
void EliminarVino(VINO vino);
void SetIDVino(VINO vino,int id);
void SetEtiquetaVino(VINO vino,const char etiqueta[]);
void SetBodegaVino(VINO vino,const char bodega[]);
void SetSegmentoVino(VINO vino,const char segmento[]);
void SetVarietalVIno(VINO vino,const char varietal[]);
void SetAnioCosechaVino(VINO vino,int anioCosecha);
void SetTerroirVino(VINO vino,const char terroir[]);
int GetIDVino(VINO vino);
char *GetEtiquetaVino(VINO vino);
char *GetBodegaVino(VINO vino);
char *GetSegmentoVino(VINO vino);
char *GetVarietalVIno(VINO vino);
int GetAnioCosechaVino(VINO vino);
char *GetTerroirVino(VINO vino);
void MostrarVino(VINO vino);






#endif // VINO_H_INCLUDED
