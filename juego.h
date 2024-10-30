#pragma once
#include <string>

int tirarDado();
void tiradaDeDados(int vDados[], int cantidad);
void mostrarDados(int vDados[], int cantidad);
int calcularPuntaje(int vDados[], int dadosBloqueadores[], int &cantidad);
void jugar(int &puntajeGanador, std::string &nombreGanador);

void pedirNombre(std::string &name);
void mostrarNombre(std::string name);

void mostrarPuntajeDeRonda(int vec[],int cantidad);
void puntajeTotal(int vec[],int cantidad);
void finDelaPartida(int dadosPuntajes[],int cantidadDeRondas, int cantidadDeDados);
bool sonTodosIguales(int vec[],int tam);

void calcularEstadistica(int resultado[], std::string nombre, int &puntajeGanador, std::string &nombreGanador);
