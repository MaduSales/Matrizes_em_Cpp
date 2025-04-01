#include <iostream>

using namespace std;
void show(int matriz[][2], int row);

int main()
{
    int matriz[][2] = {{1,2}, {3,4}};
    
    show(matriz, 2);
    return 0;
}

void show(int matriz[][2], int row){
    for(int i = 0; i < row; i++){
        for (int j = 0; j < 2; j++){
           cout << matriz[i][j] << "  "; 
        }
        cout << endl;
    }
}