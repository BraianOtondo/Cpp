#ifndef AUDIOVISUAL_H_INCLUDED
#define AUDIOVISUAL_H_INCLUDED
#include <iostream>
// TODO ESTO DESPUES LOS PASO A UNA LISTA DINAMICA POR SI SE AGREGAN MAS REPORTES
//LISTADO.H HACE LOS ORDENAMIENTOS
//LISTA.H CONTIENE LOS REPORTES QUE SE VAN LLENANDO
#include "director.h"
#include "actor.h"
#include"estudio.h"
#include"usuario.h"
struct StructAudioVisual{
bool tipo;//Serie o película)" TRUE PELICULA FALSE SERIE
char nombre[30];
int genero;
int anio;
int ranking;
bool visto; //(true or false)"]
char fechaVista[12];//"Fecha de Visualización"]-
DIRECTOR director; //CREO UN TDA CON DIRECTOR ASI NO REPITO PONER LOS DATOS TODO EL TIEMPO
ACTOR actor;        // LO MISMO PARA ACTOR,ESTUDIO, USUARIO
ESTUDIO estudio;
USUARIO usuario;
};
typedef struct StructAudioVisual *AUDIOVISUAL;
AUDIOVISUAL CrearReporte(bool tipo,char nombre[],int genero,int anio,int ranking,bool visto,char fechaVista[],DIRECTOR idDirector,ACTOR idActor,ESTUDIO idEstudio,USUARIO usuario);
void SetTipoAudioVi(bool tipo,AUDIOVISUAL audiovisual);
void SetGeneroAudioVi(int genero,AUDIOVISUAL audiovisual);
void SetAnioAudioVi(int anio,AUDIOVISUAL audiovisual);
void SetRankingAudioVi(int ranking, AUDIOVISUAL audiovisual);
void SetVistoAudioVi(bool visto,AUDIOVISUAL audiovisual);
void SetFechaAudioVi(char fechaVista,AUDIOVISUAL audiovisual);
void SetIdActorAudioVi(ACTOR actor,AUDIOVISUAL audiovisual);
void SetEstudioAudioVi(ESTUDIO estudio,AUDIOVISUAL audiovisual);
void SetUsuarioAudioVi(USUARIO usuario,AUDIOVISUAL audiovisual);

bool GetTipoAudioVi(AUDIOVISUAL audiovisual);
int GetGeneroAudioVi(AUDIOVISUAL audiovisual);
int GetAnioAudioVi(AUDIOVISUAL audiovisual);
int GetRankingAudioVi(AUDIOVISUAL audiovisual);
bool GetVistoAudioVi(AUDIOVISUAL audiovisual);
char *GetFechaAudioVi(AUDIOVISUAL audiovisual);
ACTOR GetIdActorAudioVi(AUDIOVISUAL audiovisual);
ESTUDIO GetEstudioAudioVi(AUDIOVISUAL audiovisual);
USUARIO GetUsuarioAudioVi(AUDIOVISUAL audiovisual);
void AgregarActor(ACTOR actor,AUDIOVISUAL audiovisual);
void AgregarEstudio(ESTUDIO estudio,AUDIOVISUAL audiovisual);
void AgregarUsuario(USUARIO usuario,AUDIOVISUAL audiovisual);



// CREARIA UN VOID MOSTRAR
#endif // AUDIOVISUAL_H_INCLUDED
