// Clase Subasta
#include <vector>
#include <unistd.h>
using namespace std;

class Subasta {
    private:
      vector<Lote> lotes;
      int cantLotes;
      vector<Person> participantes;

    public:
      // constructor
      Subasta(vector<Lote>, int, vector<Person>);
      //metodos
      void iniciarSubasta();
      vector<Lote> getLotes();
      void setOfertador(Person ofertadorr);
};

Subasta::Subasta(vector<Lote> lotesSubasta, int cantidad, vector<Person> participantesSubasta) {
  lotes = lotesSubasta;
  cantLotes = cantidad;
  participantes = participantesSubasta;
}

vector<Lote> Subasta::getLotes() {
  return lotes;
}

void Subasta::iniciarSubasta() {
  for(int i = 5; i > 0; i = i - 1) {
    cout << "La subasta comienza en "<< i << endl;
    sleep(1);
  }

  vector<Lote> lotes = getLotes();

  for(int i = 0; i < lotes.size(); ++i) {
    cout << "asd";
    int azar = 1;
    while(azar != 0) {
      Person ofertador = participantes[rand() % participantes.size()];
      int puja = rand() % 1000 + lotes[i].getPuja();
      ofertador.hacerOferta(lotes[i], puja);
      sleep(1);      
    }
  }
}
