#include <iostream>

using namespace std;

char letras[8][4] = {{'a','b','c'}, {'d','e','f'}, {'g','h','i'}, {'j','k','l'}, {'m','n','o'}, {'p','q','r', 's'}, {'t','u','v'}, {'w','x','y','z'}}; // Matriz para armazenar as letras

string resultadoFinal;

int main ()
{
  int qnt;

  cout << "Informar a quantidade de teclas:";
  cin >> qnt;

  while (qnt > 0)
  {
    string tecla;
    getline (cin, tecla);

    int nTecla = (tecla [1] - '0') - 2; // conertendo para inteiro e acesando a matriz.

    int vezesTecla = (tecla [3] - '0') - 1; // conertendo para inteiro e acesando a matriz.

    resultadoFinal += letras[nTecla][vezesTecla];

    qnt--;
  }

  cout<< resultadoFinal << endl;
}