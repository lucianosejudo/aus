#include <iostream>
#include <iomanip>
#include <vector>
#include "Person.h"
#include "Subasta.h"
using namespace std;

void welcome() {
  cout << endl;
  cout << "-------------- BIENVENIDO A LA SUBASTA --------------" << endl;
  cout << "Los siguientes lotes estan disponible para ofertar" << endl;
  cout << endl;
}

vector<Person> inicializarParticipantes() {
  // personas iniciales
  Person luciano("Luciano", 1);
  Person sergio("Sergio", 2);
  Person sebastian("Sebastian", 3);

  // vector de personas iniciales
  vector<Person> participants {luciano, sergio, sebastian};

  return participants;
}

Person crearUsuario() {
  string nombre;
  int id;
  
  cout << "Ingrese sus datos para poder ofertar" << endl;
  cout << "Nombre: ";
  cin >> nombre;
  cout << "DNI: ";
  cin >> id;
  cout << endl;
  
  Person usuario(nombre, id);
  return usuario;
}

vector<Lote> inicializarLotes() {
    // items de lote autos
    Item mustang("Ford Mustang", 1);
    Item camaro("Chevrolet Camaro", 2);
    vector<Item> autos {mustang, camaro};
    
    //items de lote celulares
    Item iphone("Iphone 6", 2);
    Item huawei("Huawei P10", 2);
    Item nokia("Nokia 1100", 2);
    vector<Item> celulares {iphone, huawei, nokia};

    //crear lotes
    Lote loteAutos("Autos lujosos", 1, autos, 500000.0);
    Lote loteCelulares("Celulares", 2, celulares, 1000.0);

    // vector de lotes
    vector<Lote> lotes = {loteAutos, loteCelulares};

    return lotes;
}

void printLotes(vector<Lote> lote) {
  cout << left << setw(17) << setfill(' ') << "Numero de lote" << "| "
      << setw(23) <<  "Nombre" << "| "
      << setw(15) << "Puja actual" << "| "
      << setw(15) <<  "Items" 
      << endl;
  for(int i = 0; i < lote.size(); ++i) {
    vector<Item> items = lote[i].getItems();
    
    cout << left << setw(17) << lote[i].getNumero() << "| "
        << setw(23) << lote[i].getName() << "| ";

    cout << left << setw(15) << lote[i].getPuja() << "| ";

    for(int j = 0; j < items.size(); ++j) {
      cout << left << items[j].getName() << " - ";
    }
    cout << endl;
    
  }
  cout << endl;
}

int main() 
{
  //Bienvenido
  welcome();
  
  // inicializar participantes
  vector<Person> participants = inicializarParticipantes();

  // inicializar lotes
  vector<Lote> lotes = inicializarLotes();
  
  // mostrar lotes
  printLotes(lotes);
  
  // Crear subasta
  Subasta subasta(lotes, lotes.size(), participants);
  // Iniciar subasta
  string tecla;
  cout << "Para empezar la subasta, presione cualquier tecla" << endl;
  cin >> tecla;
  subasta.iniciarSubasta();

  return 0;
}