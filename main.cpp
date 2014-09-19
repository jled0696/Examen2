#include "Evaluador.h"
#include <iostream>
#include <list>
#include "NodoBinario.h"
#include "NodoTrinario.h"
#include "NodoNario.h"

using namespace std;

//Devuelve true si encuentra num dentro del arbol raiz
//2.5pts
bool existe(NodoTrinario* raiz, int num)
{
    if(raiz==NULL)
        return false;

    if(raiz->num == num)
        return true;

    return existe(raiz->izq,num) || existe(raiz->der,num) || existe(raiz->medio,num);
    return false;
}

//Devuelve true si encuentra num dentro del arbol raiz
//2.5pts
bool existe(NodoNario* raiz, int num)
{

    return false;
}

//Devuelve la cantidad de veces que encuentre el numero "num" dentro del arbol "raiz"
//5pts


int contar(NodoBinario* raiz, int num)
{
    if(raiz==NULL)
        return 0;
    if(raiz->num == num)
        return 1+contar(raiz->izq,num)+contar(raiz->der,num);
    return contar(raiz->izq,num)+contar(raiz->der,num);
    return 0;
}

//Dado un tablero bidiensional donde:
//0 representa los pasillos donde puedo caminar
//1 representa las paredes donde no puedo caminar
//2 representa el terreno dificil (quita un paso)
//la cantidad de casillas donde me puedo desplazar "pasos"
//Devuelve true si puedo llegar desde las coordenadas [y_inicial][x_inicial] hasta [y_destino][x_destino], de lo contrario devuelve false
//Solo se puede desplazar hacia arriba, abajo, izquierda y derecha
//5pts
bool puedoLLegar(int tablero[5][5],
            int x_inicial, int y_inicial,
            int x_destino, int y_destino,
            int pasos)
{

    return false;
}



int main ()
{
    evaluar();

    return 1;
}
