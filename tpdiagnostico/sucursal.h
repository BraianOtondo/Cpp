#ifndef SUCURSAL_H_INCLUDED
#define SUCURSAL_H_INCLUDED

struct StructSucursal{
int id;
char direccion[40];
char zonaChar[30];
float factura;
int zona;
};
typedef struct StructSucursal *SUCURSAL;
SUCURSAL CrearSucursal(int id,const char direccion[],const char zonaChar[],float factura,int zona);
SUCURSAL CrearSucursalPorTeclado();
void SetIdSucursal(SUCURSAL sucursal, int id);
void SetDirecionSucursal(SUCURSAL sucursal,const char direccion[]);
void SetZonaCharSucursal(SUCURSAL sucursal,const char zonaChar[]);
void SetFacuraSucursal(SUCURSAL sucursal, float factura);
void SetZonaSucursal(SUCURSAL sucursal,int zona);
int GetIdSucursal(SUCURSAL sucursal);
char *GetDireccionSucursal(SUCURSAL sucursal);
char *GetZonaCharSucursal(SUCURSAL sucursal);
float GetFacturaSucursal(SUCURSAL sucursal);
int GetZonaSucursal(SUCURSAL sucursal);
void DestruirSucursal(SUCURSAL sucursal);
void MostrarSucursal(SUCURSAL sucursal);


#endif // SUCURSAL_H_INCLUDED
