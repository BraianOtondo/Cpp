#ifndef LISTADO_H_INCLUDED
#define LISTADO_H_INCLUDED
#include "lista.h" // Es UNA LISTA CON LOS REPORTES AUDIOVISUALES, todos
// que se van llenando segun se carguen nuevos
//AC� TRAIGO LA LISTA CON MIS REPORTES AUDIOVISUALES
//Y LOS ORDENO Y LOS MUESTRO SI ES NECESARIO

void CrearListaDePel�culasPorGenero(LISTA lista);
void CrearListaDePel�culasPorAnio(LISTA lista);
void CrearListaDePel�culasPorRanking(LISTA lista);

void CrearListaDeSeriesPorGenero(LISTA lista);
void CrearListaDeSeriePorAnio(LISTA lista);
void CrearListaDeSeriesPorRanking(LISTA lista);

void CrearListaDeSeriesYPeliPorFechaDes(LISTA lista);
void CrearListaDeSeriesYPeliPorRanking(LISTA lista);

// CREARIA UN VOID MOSTRAR TAMBIEN ABAJO PARA CADA UNO TAMBIEN ABAJO

#endif // LISTADO_H_INCLUDED
