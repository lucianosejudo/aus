// Clase Person
#include <string>
#include "Lote.h"
using namespace std;

class Person {
    private:
      string nombre;
      int id;

    public:
      // constructor
      Person(string, int);
      
      // metodos
      string getName();
      void hacerOferta(Lote lote, float cantidad);
};

// definicion del constructor
Person::Person(string personName, int personId){ 
  nombre = personName;
  id = personId;
}

// Definicion de getName()
string Person::getName() {
  return nombre;
}

void Person::hacerOferta(Lote lote, float cantidad) {
  float puja = lote.getPuja();

  if (cantidad > puja) {
    lote.setPuja(cantidad);
    cout << nombre << "hizo una oferta de " << cantidad << endl;
  }
}