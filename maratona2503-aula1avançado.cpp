/*Vector - Representação de um array, lista de valores de mesmo tipo, estrutura dinamica */

#include<iostream>
#include<vector>
#include<algorithm>     	//Ordenar vetor,etc
#include<stack>         	//Pilha
#include<queue>         	//fila
#include<map>           	//Map
#include<set>           	//Vetor que guarda somento elementos distintos

using namespace std;

int main () {
  vector <int>*A;

  int N = 10;
  vector <int> B(N);
  vector <int> C(N, -1);

  int tam =  A.size();

  A.push_back(1);

  vector <int> B(5,2);
  B.insert(B.begin(), A.begin(), A.end())   //

  sort(B.begin(), B.end());             	//ORDENAR VETOR, BIBLIOTECA ALGORITHM


  if (A.empty())
	cout << "Vazio\n";

  stack <int> C;
  C.push(4);  	//ADICIONA ELEMENTO A PILHA
  C.pop();    	//RETIRA O ULTIMO ELEMENTO DA PILHA
  C.top();    	//RETORNA O VALOR DO TOPO

  stack <int> D;
  vector <int> vB(5,1);
  stack <int, vector <int>> B(vB);  //PILHA COM ESTRUTURA DE UM VETOR, COPIANDO DAODS DO VETOR DE vB

  //queue
  queue <int> E;  	//POde utilizar push, pop, e o novo é o front

  //Priority queue - Uma fila que ela sempre vai estar ordenada decrescentemente
  //Utiliza Push, Pop, e top
  priority_queue <int> F;

  //MAP Vetor em que o indice não é um inteiro
  map <string, double> m;
  m["Henna"] = 10.05;
  m["Jhonatan"] = 17.05;
  if (m.find("Henna") != m.end())
	m.erase(m.find("Jhonatan"));

  set <int> s;
  set<int>::iterator it;
  s.insert(10);
  s.insert(20);
  s.insert(10);



  return 0;
}
/*A.erase(A.begin() + 9) Deleta o elemento de indice 10
A.erase(A.bein(), A.begin() + 2) -  arg1 = inicio do apagamento, arg2 =  final aberto que nao sera apagado da lista
A.insert(A.begin() + 2, 5) - Adiciona o valor 5 na posição de indice 2 no A


