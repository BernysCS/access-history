#include "../Headers/list.h"
#include <iostream>

List::List() {
  list = NULL;
}

List::~List() {
  Node* current = list;
  while (current != NULL){
    Node* aux = current;
    current = current->next;
    delete aux;
  }
}

void List::insert ( int n) {
  Node *new_node = new Node();
  new_node->data = n;
  new_node->next = NULL;
  
  Node *aux1 = list;
  Node *aux2 = NULL;

  while ((aux1 != NULL) && (aux1->data < n)) {
    aux2 = aux1;
    aux1 = aux1->next;
  }

  if(aux2 == NULL) {
    new_node->next = list;
    list = new_node;
  } else {
    aux2->next = new_node;
    new_node->next = aux1;
  }

  std::cout << "Elemento ingresado correctamente" << std::endl;
}

void List::print() {
  Node *current = list;
  current = list;
  
  while (current != NULL) {
    std::cout << current->data<< " -> ";
    current = current->next;
  }
  std::cout << "NULL\n";
}

void List::search(int n) {
  Node *current = list;

  while((current != NULL)&&(current->data <= n)) {
    if(current->data == n) {
      std::cout << "Elemento " << n << " encontrado" << std::endl; 
      return;
    }
    current = current->next;
  }

    std::cout << "Elemento " << n << " no encontrado" << std::endl; 
}

void List::remove(int n) {
  if(list == NULL) {
    std::cout << "La lista esta vacia\n";
    return;
  }

  if(list != NULL) {
    Node *aux_remove;
    Node *previous = NULL;

    aux_remove = list;

    while((aux_remove != NULL) && (aux_remove->data != n)) {
      previous = aux_remove;
      aux_remove = aux_remove->next;
    }

    if(aux_remove == NULL) {
      std::cout << "El elemento no se ha encontrado";
    } else if(previous == NULL) {
      list = list->next;
      delete aux_remove;
    } else {
      previous->next = aux_remove->next;
      delete aux_remove;
    }
    
  }
}