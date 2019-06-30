// Clase Person
#include <string>
#include "Lote.h"
using namespace std;

class Person {
    private:
      string nombre;
      int id;
      int dineroDisponible;

    public:
      // constructor
      Person(); // default
      Person(string, int, int);
      
      // metodos
      string getName();
      int getId();
      void hacerOferta(Lote& lote, int cantidad);
      int getDineroDisponible();
      void setDineroDisponible(int);
};

// definicion del constructor
//default
Person::Person(){ 
  nombre = ' ';
}
// with arguments
Person::Person(string personName, int personId, int dineroInicial){ 
  nombre = personName;
  id = personId;
  dineroDisponible = dineroInicial;
}

// Definicion de getName()
string Person::getName() {
  return nombre;
}

// definicion getId()
int Person::getId() {
  return id;
}

int Person::getDineroDisponible() {
  return dineroDisponible;
}

void Person::setDineroDisponible(int dinero) {
  dineroDisponible = dinero;
}

void Person::hacerOferta(Lote& lote, int cantidad) {
  int puja = lote.getPuja();
  if (cantidad > puja) {
    lote.setPuja(cantidad);
    cout << nombre << " hizo una oferta de: $" << cantidad << endl;
  }
}
