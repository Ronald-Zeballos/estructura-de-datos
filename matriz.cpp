#include "Matriz.h"
#include <iostream>

#define MAX 10
using namespace std;

Matriz::Matriz(void) {

}
Matriz::~Matriz(void) {

}
void Matriz::set_fil(int fila) {
	fil = fila;
}
int Matriz::get_fil() {
	return fil;
}
void Matriz::set_col(int columna) {
	col = columna;
}
int Matriz::get_col() {
	return col;
}
void Matriz::cargar(int m[MAX][MAX]) {
	for (int i = 0; i < fil; i++) {
		for (int j = 0; j < col; j++) {
			cout << "M[ " << i << j << "]= ";
			cin >> m[i][j];
		}
	}
}
void Matriz::mostrar(int m[MAX][MAX]) {
	for (int i = 0; i < fil; i++) {
		for (int j = 0; j < col; j++) {
			cout << "M[ " << i << j << "]= " << m[i][j] << endl;

		}
	}
}
void Matriz::promedio(int m[MAX][max]) {
	int prom, s = 0;
	for (int i = 0; i < fil; i++) {
		for (int j = 0; j < col; j++) {
			s = s + M[i][j];
			prom = s / (fil * col);
		}
	}
	cout << "el promedio de las matrices es:" << prom << endl;

}

void Matriz::mayor(int m[max][max]) {
	int mayor = 0;
	for (int i = 0; i < fil; i++) {
		for (int j = 0; j < col; j++) {
			if (m[i][j] > max) {
				mayor = m[i][j];
			}
		}
		cout << "el digito mayor es: " << mayor << endl;
	}
}
