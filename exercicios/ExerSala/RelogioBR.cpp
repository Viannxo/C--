#include <string>
#include <iostream>

using namespace std;

class Relogio{
  private:
    int hora;
    int minuto;
    int segundo;
  public:
    Relogio(int hora, int minuto, int segundo){
      this -> hora = hora;
      this -> minuto = minuto;
      this -> segundo = segundo;
    }
    // Getters
    int getHora(){
      return hora;
    }

    int getMinuto(){
      return minuto;
    }

    int getSegundo(){
      return segundo;
    }

    //setters

    void setHora(int hora){
      this -> hora = hora;
    }

    void setMinuto(int minuto){
      this -> minuto = minuto;
    }

    void setSegundo(int segundo){
      this -> segundo = segundo;
    }

    void setHorario(int h, int m, int s){
      this -> hora = h;
      this -> minuto = m;
      this -> segundo = s;
    }

    string getHorario(){
        string aux;
        aux=to_string(hora)+":"+
            to_string(minuto)+":"+
            to_string(segundo);
    }

    void avancarHora(){
      segundo++;
      if(segundo==60){
        segundo=0;
      }
      if(minuto==60){
        minuto=0;
      }
      if(hora==24){
        hora=0;
      }
    }
};

int main(){
  int h,m,s;
  cout  <<"Digite a hora: "<< endl;
  cin >> h;
  cout <<"Digite os minutos: "<< endl;
  cin >> m; 
  cout <<"Digite os segundos: "<< endl; 
  cin >> s;
  Relogio r(h,m,s);
  cout<<r.getHorario();
  r.avancarHora();
  cout<<r.getHorario();
};