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
      Person(); // default
      Person(string, int);
      
      // metodos
      string getName();
      int getId();
      void hacerOferta(Lote& lote, int cantidad);
};

// definicion del constructor
//default
Person::Person(){ 
  nombre = ' ';
}
// with arguments
Person::Person(string personName, int personId){ 
  nombre = personName;
  id = personId;
}

// Definicion de getName()
string Person::getName() {
  return nombre;
}

// definicion getId()
int Person::getId() {
  return id;
}

void Person::hacerOferta(Lote& lote, int cantidad) {
  int puja = lote.getPuja();
  if (cantidad > puja) {
    lote.setPuja(cantidad);
    cout << nombre << " hizo una oferta de: $" << cantidad << endl;
  }
}