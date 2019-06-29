// Clase Lote
#include <string>
#include <vector>
#include "Item.h"
using namespace std;

class Lote {
    private:
      string nombre;
      int numero;
      vector<Item> items;
      int puja;

    public:
      // constructor
      Lote(string, int, vector<Item>, int);
      //metodos
      vector<Item> getItems();
      string getName();
      int getNumero();
      int getPuja();
      void setPuja(int);
};

// definicion del constructor
Lote::Lote(string nombreLote, int numeroLote, vector<Item> itemsLote, int precioInicial){ 
  nombre = nombreLote;
  numero = numeroLote;
  items = itemsLote;
  puja = precioInicial;
}

vector<Item> Lote::getItems() {
  return items;
}

string Lote::getName() {
  return nombre;
}

int Lote::getNumero() {
  return numero;
}

int Lote::getPuja() {
  return puja;
}

void Lote::setPuja(int newPuja) {
  puja = newPuja;
}