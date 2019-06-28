// Clase Item
#include <iostream>
#include <string>
using namespace std;

class Item {
    private:
      string name;
      int id;

    public:
      // constructor
      Item(string, int);
      
      // metodos
      string getName();
};

// definicion del constructor
Item::Item(string itemName, int itemId){ 
  name = itemName;
  id = itemId;
}

// Definicion de getName()
string Item::getName() {
  return name;
}