/*
 Un arbol binario de busqueda (BST) es una estructura de datos jerarquica y no lineal que organiza 
 informacion de manera que permite realizar operaciones de busqueda, insercion y eliminacion de forma eficiente.

 Estructura fundamental:
 Cada elemento en el arbol se llama Nodo, y cada nodo contiene:
  1. un valor clave
  2. Referecnias a su hijo izquierdo e hijo derecho (que podrian ser nulos)
  3. Opcionalmente, referencia al padre.

 El nodo superior se llama RAIZ y los nodos hijos se llaman RAMAS

 Propiedad principal del ordenamiento:
  1. Para cualquier nodo N:
    Todos los valores en el subarbol izquierdo de N son menores que el valor de N.
    Todos los valores en el subarbol derecho de N son mayores que el valor de N.
  2. Esta propiedad de debe de cumplirse recursivamente para todos los nodos del arbol.

 Caracteristicas Clave:
 - Generalmente no se permiten los valores repetidos.
 - Hay diversos recorridos:
   1. Inorden: visita izquierdo -> raiz -> derecho
   2. Preorden: Raiz -> izquierd0 -> derecho
   3. Postorden: izquierdo -> derecho -> raiz
*/

#include <iostream>

struct Nodo{
  int valor;
  Nodo* HijoDerecho = nullptr;
  Nodo* HijoIzquierdo = nullptr;

  Nodo(int clave): valor(clave){}
};

struct Arbol{
  Nodo* Raiz = nullptr;

  Arbol(int valor){
    Raiz = new Nodo(valor);
  }

  ~Arbol(){
    DestruirRecursivamente(Raiz);
  }

  void InsertarValor(int valor){
    Raiz = InsertarRecursivamente(valor, Raiz);
  };

  void BuscarValor(int valor){
    if(ExplorarRecursivamente(valor, Raiz)){
      std::cout<<"Valor encontrado\n";
    }
    else{
      std::cout<<"Valor no encontrado\n";
    }
  }

  private:
    
    void DestruirRecursivamente(Nodo* nodo){
      if(nodo != nullptr){
        DestruirRecursivamente(nodo->HijoDerecho);
        DestruirRecursivamente(nodo->HijoIzquierdo);
        delete nodo;
      }

    }     
    
    bool ExplorarRecursivamente(int valor, Nodo* NodoExplorador){
      if(NodoExplorador == nullptr){
        return false;
      }
      if(NodoExplorador->valor == valor){
        return true;
      }
      if(valor > NodoExplorador->valor){
        return ExplorarRecursivamente(valor, NodoExplorador->HijoDerecho);
      }
      if(valor<NodoExplorador->valor){
        return ExplorarRecursivamente(valor, NodoExplorador->HijoIzquierdo);
      }
      return false;
    }

    Nodo* InsertarRecursivamente(int nuevoValor, Nodo*& NodoNuevo){
      if(NodoNuevo == nullptr){
        NodoNuevo = new Nodo(nuevoValor);
      }
      else{
        if(nuevoValor > NodoNuevo->valor){
          InsertarRecursivamente(nuevoValor, NodoNuevo->HijoDerecho);
        }
        else if(nuevoValor < NodoNuevo->valor){
          InsertarRecursivamente(nuevoValor, NodoNuevo->HijoIzquierdo);
        }
        else{
          std::cout<<"Valor no valido o repetido";
        }
      }
      return NodoNuevo;
    };
};

int main(){
  Arbol arbolito(5);
  arbolito.InsertarValor(7);
  arbolito.BuscarValor(7);
  std::cout<<"Todo funcionando por ahora";
  return 0;
}
