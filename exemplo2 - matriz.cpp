#include <iostream>

using namespace std;

int const COLUMN = 2;
int const ROW = 3;

void show(int matriz[ROW][COLUMN]);

int main()
{
    int matriz[ROW][COLUMN] = {{1,2}, {3,4}, {5,6}};
    
    show(matriz);
    return 0;
}

void show(int matriz[ROW][COLUMN]){
    matriz[0][0] = 10;
    for(int i = 0; i < ROW; i++){
        for (int j = 0; j < COLUMN; j++){
           cout << matriz[i][j] << "  "; 
        }
        cout << endl;
    }
}