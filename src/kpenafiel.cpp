#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <string>
#include <fstream>

using namespace std;

int const KP_CEDULA = 1755968169;
string const KP_NOMBRE_COMPLETO = "Kevin Alexander Peñafiel Tuz";

struct kpcoordenada{
    int kp_capacidadbelica;
    char kp_geolocalizacion[4];
    char kp_detalledelArsenal[10];

    kpcoordenada* izq;
    kpcoordenada* der;
};

void kpleertxt() {
    ifstream kpfile("../files/kpcoordenadas.txt");

    if (kpfile.is_open()) {
        string line;
        int line_num = 1;

        while (getline(kpfile, line)) {

            string kpload = "\\|/-";
            for (int i = 0; i <= 100; i++)
            {   
                cout<<kpload[i]<<i<<'%'<<"\r\r\r\r";
                Sleep(10);
            }
            cout <<"100 % "<< line << endl;
        }

        kpfile.close();
    }
    else {
        cout << "Unable to open kpfile" << endl;
    }
}

int main()
{
    kpleertxt();
    return 0;
}
