#include <iostream>
using namespace std;

int main (){
    int arrayA[3][3] = {{5, 1, 3},
                        {2, 6, 7}, 
                        {9, 4, 8}};
    // menggunakan nested loop
    // untuk mengakses elemen di dalam array 2D
    for(int i = 0; i < 3; i++){
        // akses kolom dari array
        for(int j = 0; j < 3; j++){
            cout << "arrayA ["<< i <<"] "<<" ["<< j <<"] = " <<
                arrayA[i][j]<<endl;
        }
    }

    return 0; 
}