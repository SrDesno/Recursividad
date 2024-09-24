//Edmundo Ruelas Angulo - A01742824

#include "Carro.h"

Carro::Carro(){
  setMarca("N/A");
  setModelo("N/A");
  setColor("N/A");
  setAño(0);
}

Carro::Carro(std::string _marca, std::string _modelo, std::string _color, int _año){
  setMarca(_marca);
  setModelo(_modelo);
  setColor(_color);
  setAño(_año);
}

void Carro::mosotrarInformacion(){
  std::cout << "El carro es Marca: " << getMarca() << ", Modelo: " << getModelo() << ", Color: " << getColor() << ", Año: " << getAño() << std::endl;
}
