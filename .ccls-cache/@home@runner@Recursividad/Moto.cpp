//Edmundo Ruelas Angulo - A01742824

#include "Moto.h"

Moto::Moto(){
  setMarca("N/A");
  setModelo("N/A");
  setColor("N/A");
  setAño(0);
}

Moto::Moto(std::string _marca, std::string _modelo, std::string _color, int _año){
  setMarca(_marca);
  setModelo(_modelo);
  setColor(_color);
  setAño(_año);
}

void Moto::mosotrarInformacion(){
  std::cout << "La moto es Marca: " << getMarca() << ", Modelo: " << getModelo() << ", Color: " << getColor() << ", Año: " << getAño() << std::endl;
}