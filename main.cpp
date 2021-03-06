#include <iostream>
#include "Test.h"
#include <iostream>
#include <cmath>

using namespace std;

//Desrefencia ptr (dado) y devuelve su valor
int obtenerValor(int *ptr){
     return *ptr;
}

//Desreferencia a (dado) y b (dado) y devuelve la suma de ambos
int sumar(int* a, int* b){
    return (*a + *b);
}

//Devuelve true si a (dado) y b (dado) apuntan al mismo espacio de memoria
bool compararApuntadores(string *a, string *b){
    if(a == b)
        return true;
    return false;
}

//Desrefencia a (dado) y b (dado), devuelve true si ambos valores son iguales de lo contrario devuelve false
bool comparar(string *a, string *b){
    if(*a==*b)
        return true;
    return false;
}

//Desreferencia a (dado) y devuelve su primera letra
char getPrimeraLetra(string* a){
    char vocal=a->at(0);
    return vocal;
}

//Desreferencia a (dado) y devuelve true si es palindroma de lo contrario devuelve false
//Definicion de palindromo: http://es.wikipedia.org/wiki/Pal%C3%ADndromo
//Ejemplos de palindromos: Ana, arenera, arepera, anilina, ananá, Malayalam, Neuquén, Oruro, oso, radar, reconocer, rotor, salas, seres, somos, sometemos
bool esPalindromo(string* a) {
    int longi=a->length();
    string pal=*a;
    string revez="";
    for(int c=0;c<longi;c++){
        revez=pal.substr(c,1)+revez;
    }
    if(pal.compare(revez)==0)
        return true;
    return false;
}

//Desreferencia base (dado) y exponente (dado) y devuelve la base elevado al exponente
int getExponente(int* base, int* exponente) {
         return pow(*base, *exponente);
}

int main (){
//Funcion evaluadora
    evaluar();
    return 0;
    }


