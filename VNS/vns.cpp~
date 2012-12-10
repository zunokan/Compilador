#include <iostream>
#include <cstdlib>
#include <vector>

#define V 5

using namespace std;

int objetivo (int matriz[V][V], int sol[V]){
	int x = 0, z = 0;
	//calcula o valor da solução 1
	for (int i =0; i < (V); i++){
		if (i == V-1){
			if (matriz[sol[i]][sol[0]] > 0){
				x++;
			} else {
				break;
			}	
		} else{
			if (matriz[sol[i]][sol[i+1]] > 0){
				x++;
			} else {
				break;
			}	
		}	
	}

	return x; //retorna o valor da solucao

}

int* copia(int s[V]){
	int v[V];
	for (int i =0; i < V; i++)
		v[i] = s[i];
	return v;
}

//Shaking da vizinhança 2-adjacente
int* shaking_2adj (int s_inicial[V]){
	int* s =  copia(s_inicial);	
	int x = rand() % V;
	int aux = s[x];
	if (x == V-1){
		s[V-1] = s[0];
		s[0] = aux;
	} else{
		s[x] = s[x+1]
		s[x+1] = aux;
	}
	return s;
}

int* busca_2adj(int matriz[V][V], int s[V]){
	int val = objetivo (matriz, s);
	int* s1 = copia(s);
	int aux = 0;
	for (int i = 0; i < V; i++){
		aux = s1[i];
		if (i == V-1){
			s1[V-1] = s1[0];
			s1[0] = aux;
			if (objetivo(matriz,s1) > val){
				s = copia(s1);
			}
						
		} else{
			s1[i] = s1[i+1];
			s1[i+1] = aux;
			if (objetivo(matriz,s1) > val){
				s = copia(s1);
			}
		}
	}
	return s1;	
}

//Shaking com a vizinhança insert
int* shaking_insert(int s_inicial[V]){

}






int main(){
	int max_iteracoes = 100, k_max = 3;
	int k, i = 0;
	int matriz1[V][V] = {{1,1,0,0,1}, {1,0,1,0,0}, {0,1,0,1,0}, {0,0,1,0,1}, {1,0,0,1,0}};
	int matriz2[V][V] = {{0,1,0,0,0}, {0,0,1,0,0}, {0,0,0,1,0}, {0,0,0,0,1}};
	int S[V] = {0,1,2,3,4};
	int S1[V] = {0,0,0,0,0};
	int S2[V] = {0,0,0,0,0};
	while (i < max_iteracoes){
		k = 0;
		while (k < k_max){
			if (k == 0){
				S1 = shaking_2dj(S);
				S2 = busca_2adj(S1);
			}
		} 		
		i++;
	}

}
