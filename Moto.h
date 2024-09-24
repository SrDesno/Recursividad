//Edmundo Ruelas Angulo - A01742824

#include "Vehiculo.h"

class Moto : public Vehiculo{
  public:
    Moto();
    Moto(std::string, std::string, std::string, int);
    void mosotrarInformacion();
};