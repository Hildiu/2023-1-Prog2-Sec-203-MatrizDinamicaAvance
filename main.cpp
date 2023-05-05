#include <iostream>
#include <iomanip>
using namespace std;

void imprimirMatriz(int **pMatriz, int filas, int col);
void llenarMatriz( int * *pMatriz, int filas, int col);

int main()
{
    int filas, col;
    int **pMat = nullptr;

    srand(time(nullptr));
    cout << "Numero de Filas: ";
    cin >> filas;
    cout << "Numero de columnas : ";
    cin >> col;
   //--- dimensionamos la matriz
   pMat = new int*[filas];
   for(int f=0; f<filas; f++)
       pMat[f] = new int[col];
   llenarMatriz(pMat, filas, col);
   cout << "\n";
   imprimirMatriz(pMat, filas, col);

    return 0;
}

void imprimirMatriz(int **pMatriz, int filas, int col)
{
    for(int f=0; f<filas; f++) {
        for (int c = 0; c < col; c++)
            cout << setw(5) << pMatriz[f][c];
        cout << "\n";
    }

}


void llenarMatriz( int * *pMatriz, int filas, int col)
{
    for(int f=0; f<filas; f++)
        for(int c=0; c<col; c++)
            pMatriz[f][c] = rand() % 50 + 1;
}