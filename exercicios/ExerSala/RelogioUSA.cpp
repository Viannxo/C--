#include <string>
#include <iostream>

using namespace std;

class Relogio{
  private:
    int hora;
    int minuto;
    int segundo;
    string dTime;
    string dTime1 = "am";
    string dTime2 = "pm";
  public:
    Relogio(int hora, int minuto, int segundo){
      this -> hora = hora;
      this -> minuto = minuto;
      this -> segundo = segundo;
    }
    // Getters
    string getDayTime(){
      return dTime;
    }

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

    void setDayTime(string dTime){
      this -> dTime = dTime;
    }

    void setHora(int hora){
      this -> hora = hora;
    }

    void setMinuto(int minuto){
      this -> minuto = minuto;
    }

    void setSegundo(int segundo){
      this -> segundo = segundo;
    }

    void setHorario(int h, int m, int s, string dT){
      this -> hora = h;
      this -> minuto = m;
      this -> segundo = s;
      this -> dTime = dT;
    }

    string getHorario(){
        string aux;
        aux=to_string(hora)+":"+
            to_string(minuto)+":"+
            to_string(segundo) +" "+
            (dTime);
        return aux;
    }

    void avancarHora(){
      segundo++;
      if(segundo==60){
        segundo=0;
      }
      if(minuto==60){
        minuto=0;
      }
      if(hora==12){
        hora=0;
        if(dTime == "am"){
          dTime=dTime2;
        }else{
          dTime=dTime1;
        }
        
      }
    }
};

int main(){
  int h,m,s;
  string dTime;
  cout  <<"Digite a hora: "<< endl;
  cin >> h;
  cout <<"Digite os minutos: "<< endl;
  cin >> m; 
  cout <<"Digite os segundos: "<< endl; 
  cin >> s;
  cout <<"Digite ""am " "ou" " pm " "para informar o periodo do dia: "<< endl;
  cin >> dTime; 
  Relogio r(h,m,s);
  cout<<r.getHorario();
  r.avancarHora();
  cout<<r.getHorario();
};