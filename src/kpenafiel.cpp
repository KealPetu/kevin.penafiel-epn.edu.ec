#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <string>
#include <fstream>

int const KP_CEDULA = 1755968169;
std::string const KP_NOMBRE_COMPLETO = "Kevin Alexander Peñafiel Tuz";

struct kpcoordenada{
    int kp_capacidadbelica;
    int kp_geolocalizacion;
    char kp_detalledelArsenal[10];

    kpcoordenada* izq;
    kpcoordenada* der;
};


int main(int argc, char *argv[])
{
    std::cout << "Hello world!" << std::endl;
}
