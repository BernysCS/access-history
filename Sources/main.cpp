#include "../Headers/list.h"
#include <iostream>

void menu(List &list);

int main() {
  List list;
  menu(list);
  return 0;
}

void menu(List &list) {
/*
-----------------------------------------
  GESTIÓN DE ACCESOS DEL USUARIO <ID>
-----------------------------------------

1. Registrar un nuevo acceso
2. Eliminar un acceso
3. Mostrar accesos registrados
4. Regresar al menú principal
Seleccione una opción:
*/

   
  int option;
  int number;

  do {
    std::cout << "\t.:Menu:.\n";
    std::cout << "1. Insertar elementos a la lista\n";
    std::cout << "2. Mostrar elementos de la lista\n";
    std::cout << "3. Buscar\n";
    std::cout << "4. Eliminar\n";
    std::cout << "Opción: ";
    std::cin >> option;

    switch (option)
    {
    case 1:
      std::cout << "Ingrese un numero: ";
      std::cin >> number ;
      list.insert(number);
      std::cout << "\n";
      break;

    case 2:
      std::cout << "ELEMENTOS DE LA LISTA: ";
      list.print();
      std::cout << "\n";
      break;

    case 3:
      std::cout << "Ingrese elemento a buscar: ";
      std::cin >> number;
      list.search(number);
      break;
      
      case 4:
      std::cout << "Ingrese elemento a eliminar: ";
      std::cin >> number;
      list.remove(number);


    default:
      std::cout << "Opción no válida. Intente de nuevo.\n";
      break;
    }
  } while (option != 4);
  

}