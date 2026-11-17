#include <iostream>
using namespace std;

int main(){
    int nilai [5][4]; 
        
    
    for (int i = 0; i < 5 ; i++){
        for (int j = 0; j < 4; j++){
            cout << "Mahasiswa   "<< i + 1 << " nilai ke  "<<j+1 << "=";
            cin >> nilai [i][j];

        }
    }
    



    for (int i = 0; i < 5; i++){
        int total = 0;
        for (int j = 0; j < 4; j++){
            total += nilai[i][j];
        }
        float rata_rata = total / 4.0;
        cout << "Rata-rata nilai mahasiswa ke-" << i + 1 << " adalah: " << rata_rata << endl;
    }


    
    for (int i = 0; i < 5; i++){
        int total = 0;
        for (int j = 0; j < 4; j++){
            total += nilai[i][j];
        }
        float rata_rata = total / 4.0;
        bool kkm = rata_rata > 75;
        if (kkm) {
            cout << "Mahasiswa ke-" << i + 1 << " mendapat nilai di atas 75" << endl;
        }
        else {
            cout << "Mahasiswa ke-" << i + 1 << " tidak mendapat nilai di atas 75" << endl;
        }
    }

}
  