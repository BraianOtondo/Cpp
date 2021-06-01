#include <cstdlib>
#include <iostream>
using namespace std;
struct Nodo {
  void *valor;
  Nodo *siguiente;
};
struct MiLista {
  Nodo *inicial, *nodo;
  void mostrarLista(Nodo *inicial);
};
void MiLista::mostrarLista(Nodo *inicial) {
  std::string finalizo = "::Termina::";
  std::string abro = "[ ";
  std::string cierro = " ] - ";
  if (inicial == NULL) {
      std::cout << finalizo << std::endl;
  } else {
      std::cout << abro << inicial->valor << cierro;
      mostrarLista(inicial);
  }
};
int main(int argc, char *argv[]) {
  MiLista *miLista = new MiLista();
  Nodo *nodo=new Nodo;
  miLista->inicial=nodo;
  // Cargo mi lista
  miLista->mostrarLista(miLista->inicial);
  delete miLista;
  return 0;
}
