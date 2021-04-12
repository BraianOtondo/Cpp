#include "vino.h"
#include <iostream>
#include<string.h>
VINO CrearVino(int id,char etiqueta[20],char bodega[20],char segmento[20],char varietal[10],int anioCosecha,char terroir[20]){
VINO V = new StructVino;
V->id=id;
strcpy(V->etiqueta,etiqueta);
strcpy(V->bodega,bodega);
strcpy(V->segmento,segmento);
return V;

}
VINO CrearVinoPorTeclado();
