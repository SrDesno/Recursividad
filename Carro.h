//Edmundo Ruelas Angulo - A01742824

#include "Vehiculo.h"

class Carro : public Vehiculo{
  public:
    Carro();
    Carro(std::string, std::string, std::string, int);
    void mosotrarInformacion();
};