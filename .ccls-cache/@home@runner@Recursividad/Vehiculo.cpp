//Edmundo Ruelas Angulo - A01742824

#include "Vehiculo.h"

Vehiculo::Vehiculo(){
  marca = "N/A";
  modelo = "N/A";
  color = "N/A";
  año = 0;
}

Vehiculo::Vehiculo(std::string _marca, std::string _modelo, std::string _color, int _año){
  marca = _marca;
  modelo = _modelo;
  color = _color;
  año = _año;
}

std::string Vehiculo::getMarca(){
  return marca;
}

std::string Vehiculo::getModelo(){
  return modelo;
}

std::string Vehiculo::getColor(){
  return color;
}

int Vehiculo::getAño(){
  return año;
}

void Vehiculo::setMarca(std::string _marca){
  marca = _marca;
}

void Vehiculo::setModelo(std::string _modelo){
  modelo = _modelo;
}

void Vehiculo::setColor(std::string _color){
  color = _color;
}

void Vehiculo::setAño(int _año){
  año = _año;
}

void Vehiculo::mosotrarInformacion(){
  std::cout << "El vehiculo es Marca: " << marca << ", Modelo: " << modelo << ", Color: " << color << ", Año: " << año << std::endl;;
}