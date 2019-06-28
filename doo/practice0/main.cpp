#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Person {
  public:
    string name;
    string direccion;
    vector <int> numbers;
    vector <string> emails;

    Person(string name, string direccion, vector<int>  numbers, vector<string> emails) {
      this-> name = name;
      this-> direccion = direccion;
      this-> numbers = numbers;
      this-> emails = emails;
    }

    void showName() {
      cout << name;
    }

    string getName() {
      return this->name;
    }
};

class Agenda {
  public:
    vector <Person> personas;

    void showPersonas() {
      for (int i = 0; i < personas.size(); i++)
        personas[i].showName();
        cout << '\n';
    }

    Person findPerson(string name) {
      for (int i = 0; i < personas.size(); i++) {
        if (name == personas[i].getName()) {
          return personas[i];
        }
      }
    }
};

int main(void) 
{
  Person luciano = Person("luciano sejudo", "ocampo 1079", vector<int>{1221, 13213}, vector<string>{"luciano@asd.com", "asd@asd.com"}); 
  Person guillermo = Person("guillermo sejudo", "ocampo 1079", vector<int>{1221, 13213}, vector<string>{"luciano@asd.com", "asd@asd.com"}); 
  vector <Person> personas;
  personas.push_back(luciano);
  personas.push_back(guillermo);
  Agenda myAgenda;
  myAgenda.personas = personas;
  myAgenda.findPerson("luciano sejudo").showName();
  return 0;
}

