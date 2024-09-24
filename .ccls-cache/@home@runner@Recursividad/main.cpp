#include <iostream>
#include "Moto.h"
#include "Carro.h"

int main() {
  Vehiculo*moto=new Moto("Kawasaki", "F200", "Rojo", 2020);
  Vehiculo*carro=new Carro("Ford","Focus", "Azul", 2025);

  moto->mosotrarInformacion();

  try {
    if (carro->getAño() > 2024 || carro->getAño() < 1920) {
      throw std::runtime_error("El año del carro es inválido.");
    }
    carro->mosotrarInformacion();
  } catch (const std::exception& e) {
    std::cerr << "Error: " << e.what() << std::endl;
  }


  return 0;
}