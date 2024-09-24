//Edmundo Ruelas Angulo - A01742824

#include <iostream>
#pragma once

class Vehiculo{
  private:
    std::string marca;
    std::string modelo;
    std::string color;
    int año;
  public:
    Vehiculo();
    Vehiculo(std::string, std::string, std::string, int);
    std::string getMarca();
    std::string getModelo();
    std::string getColor();
    int getAño();
    void setMarca(std::string);
    void setModelo(std::string);
    void setColor(std::string);
    void setAño(int);
    virtual void mosotrarInformacion()=0;
};