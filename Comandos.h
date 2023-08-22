#ifndef COMANDOS_H
#define COMANDOS_H

#include "string"
#include <vector>
#include "Risk.h"

using namespace std;

class Comandos {
public:
    void inicializarJuego();
    void inicializar(string nombre_archivo);
    void turnoJugador(int jugadorId, Risk& risk);
    void salirJuego();
    void guardarEstadoJuego(const string &nombreArchivo);
    void guardarEstadoComprimido(const string &nombreArchivo);
    string costoConquista(const string &territorio,const vector<string> &territorios);
    string conquistaMasBarata(const vector<string> &territorios);

    bool getIsGameInitialized() const; 
    void setIsGameInitialized(bool value); 
    bool getIsGameOver() const; 
    void setIsGameOver(bool value);  
    int obtenerNuevasUnidades(Jugador& jugador, Risk& risk);
    int obtenerCantidadTerritoriosOcupados(int jugadorId, const vector<string> &territorios);
    int obtenerUnidadesPorContinentes(int jugadorId);
    int obtenerUnidadesPorCartas(int jugadorId); 
    vector <string> obtenerTerritoriosJugador(int jugadorId, const vector<string> &territorios);
    int obtenerPropietarioTerritorio(const string &territorio, const vector<string> &territorios);
    vector<int> lanzarDados(int cantidad);
    vector<int> calcularPerdidas(const vector<int>& resultadosA, const vector<int>& resultados);
    void eliminarPerdidas(Territorio& territorio, int infanteria, int caballaria, int artilleria, int valorPerido);
    void eliminarPropiedadConColor(Risk& risk, const string& color, string nombreTerritorio);
    void fortificarPosicion(Jugador& jugador, Risk& risk);
};


#endif //COMANDOS_H