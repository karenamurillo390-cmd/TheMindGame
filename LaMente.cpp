#include <iostream>
#include <string>

using namespace std;

class Jugador{
private:
    string nombre;
    int cantCartas;

public:
    Jugador(string nombre, int cartas){
        this->nombre = nombre;
        cantCartas = cartas;
    }

    void lanzarCarta(){
        cout << nombre << " lanza una carta" << endl;
    }

    void recibirCarta(){
        cantCartas++;
    }
};

class Partida{
private:
    int nivel;
    int cartasEnJuego;
    int jugadores;
    int vidas;
    int shuriken;

public:
    Partida(int n,int c,int j,int v,int s){
        nivel = n;
        cartasEnJuego = c;
        jugadores = j;
        vidas = v;
        shuriken = s;
    }

    void repartirCartas(){
        cout<<"Repartiendo cartas..."<<endl;
    }
};

int main(){

    Jugador jugador1("Ana",3);

    jugador1.lanzarCarta();

    return 0;
}
