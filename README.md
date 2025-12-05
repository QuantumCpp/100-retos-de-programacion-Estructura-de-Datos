# 🚀 100 Retos de Programación: Estructuras de Datos

Una colección completa de desafíos de programación organizados por niveles de dificultad, desde estructuras de datos medias hasta super avanzadas, con la finalidad de realizar un reto cada dia.

---

## 📚 Tabla de Contenidos

- [Nivel Medio (1-35)](#nivel-medio-1-35)
  - [Árboles y Grafos Básicos](#árboles-y-grafos-básicos)
  - [Heaps y Colas de Prioridad](#heaps-y-colas-de-prioridad)
  - [Hash Tables y Mapas](#hash-tables-y-mapas)
  - [Estructuras Especializadas](#estructuras-especializadas)
  - [Problemas de Aplicación](#problemas-de-aplicación)
- [Nivel Avanzado (36-70)](#nivel-avanzado-36-70)
  - [Árboles Avanzados](#árboles-avanzados)
  - [Grafos Complejos](#grafos-complejos)
  - [Estructuras Persistentes](#estructuras-persistentes)
  - [Estructuras Probabilísticas](#estructuras-probabilísticas)
  - [Problemas Complejos](#problemas-complejos)
- [Nivel Super Avanzado (71-100)](#nivel-super-avanzado-71-100)
  - [Estructuras Concurrentes](#estructuras-concurrentes)
  - [Estructuras Comprimidas](#estructuras-comprimidas)
  - [Geometría Computacional](#geometría-computacional)
  - [Estructuras para Big Data](#estructuras-para-big-data)
  - [Problemas Extremos](#problemas-extremos)
- [Guía de Uso](#guía-de-uso)
- [Contribuir](#contribuir)

---

## 🟢 Nivel Medio (1-35)

### Árboles y Grafos Básicos

1. **Árbol Binario de Búsqueda (BST)**  
   Implementar un árbol binario de búsqueda con operaciones de inserción, eliminación y búsqueda

2. **Ancestro Común Más Bajo (LCA)**  
   Encontrar el ancestro común más bajo de dos nodos en un árbol binario

3. **Validar BST**  
   Verificar si un árbol binario es un árbol de búsqueda binario válido

4. **Recorridos Iterativos**  
   Realizar recorridos en árbol (inorden, preorden, postorden) de forma iterativa

5. **Diámetro de Árbol**  
   Encontrar el diámetro de un árbol binario

6. **Árbol AVL**  
   Implementar un árbol AVL con rotaciones automáticas

7. **Detección de Ciclos**  
   Detectar ciclos en un grafo dirigido usando DFS

8. **BFS y DFS**  
   Implementar búsqueda en anchura (BFS) y profundidad (DFS) en grafos

9. **Todos los Caminos**  
   Encontrar todos los caminos de un grafo desde un nodo origen a un destino

10. **Serialización de Árbol**  
    Serializar y deserializar un árbol binario

### Heaps y Colas de Prioridad

11. **Heap Mínimo**  
    Implementar un heap mínimo desde cero

12. **K Elementos Más Grandes**  
    Encontrar los K elementos más grandes en un array usando un heap

13. **Fusionar K Listas**  
    Fusionar K listas ordenadas usando una cola de prioridad

14. **Mediana Móvil**  
    Implementar una mediana móvil usando dos heaps

15. **Sistema de Scheduling**  
    Diseñar un sistema de scheduling con prioridades usando heap

### Hash Tables y Mapas

16. **Tabla Hash Personalizada**  
    Implementar una tabla hash con manejo de colisiones por encadenamiento

17. **Caché LRU**  
    Diseñar un caché LRU (Least Recently Used)

18. **Primer Carácter Único**  
    Encontrar el primer carácter no repetido en un stream de caracteres

19. **Agrupar Anagramas**  
    Agrupar anagramas usando hash maps

20. **Trie para Autocompletado**  
    Implementar un sistema de autocompletado con Trie

### Estructuras Especializadas

21. **Pila con Min**  
    Implementar una pila que soporte getMin() en O(1)

22. **Cola con Pilas**  
    Diseñar una cola usando dos pilas

23. **Deque**  
    Implementar un deque (cola de doble extremo)

24. **Rangos de Tiempo**  
    Crear una estructura de datos para manejar rangos de tiempo solapados

25. **Skip List**  
    Implementar Skip List para búsqueda rápida

### Problemas de Aplicación

26. **Historial de Navegador**  
    Diseñar un sistema de historial de navegador (back/forward)

27. **Evaluador de Expresiones**  
    Implementar un evaluador de expresiones con paréntesis

28. **Paréntesis Balanceados**  
    Crear un sistema de validación de paréntesis balanceados

29. **Búsqueda en Rangos**  
    Diseñar una estructura para encontrar rangos que contienen un valor

30. **Union-Find Básico**  
    Implementar Union-Find (Disjoint Set) básico

31. **Componentes Conexos**  
    Encontrar componentes conexos en un grafo no dirigido

32. **Árbol de Segmentos**  
    Implementar un árbol de segmentos para consultas de suma en rangos

33. **Range Minimum Query**  
    Diseñar una estructura para consultas de rango mínimo (RMQ)

34. **Fenwick Tree**  
    Implementar un Fenwick Tree (Binary Indexed Tree)

35. **Sistema de Reservaciones**  
    Crear un sistema de reservaciones con verificación de disponibilidad

---

## 🟡 Nivel Avanzado (36-70)

### Árboles Avanzados

36. **Árbol Rojo-Negro**  
    Implementar un árbol Rojo-Negro con todas sus operaciones

37. **Árbol de Sufijos**  
    Construir un árbol de sufijos para búsqueda de patrones

38. **Splay Tree**  
    Implementar un Splay Tree con operaciones de splice

39. **Árbol B**  
    Diseñar un árbol B para sistemas de bases de datos

40. **Van Emde Boas Tree**  
    Implementar un árbol de Van Emde Boas para enteros

41. **Árbol de Intervalos**  
    Crear un árbol de intervalos para consultas de solapamiento

42. **Treap**  
    Implementar un Treap (árbol + heap híbrido)

43. **K-D Tree**  
    Diseñar un árbol k-d para búsquedas espaciales multidimensionales

44. **R-Tree**  
    Implementar un árbol R para indexación espacial

45. **Árbol de Merkle**  
    Crear un árbol de Merkle para verificación de integridad

### Grafos Complejos

46. **Dijkstra**  
    Implementar el algoritmo de Dijkstra para caminos más cortos

47. **Bellman-Ford**  
    Algoritmo de Bellman-Ford para grafos con pesos negativos

48. **Floyd-Warshall**  
    Implementar Floyd-Warshall para todos los pares de caminos más cortos

49. **Componentes Fuertemente Conexos**  
    Encontrar componentes fuertemente conexos (algoritmo de Tarjan)

50. **Algoritmo de Prim**  
    Implementar el algoritmo de Prim para árbol de expansión mínima

51. **Algoritmo de Kruskal**  
    Algoritmo de Kruskal con Union-Find optimizado

52. **Puentes y Puntos de Articulación**  
    Detectar puentes y puntos de articulación en grafos

53. **Flujo Máximo**  
    Implementar flujo máximo (algoritmo de Ford-Fulkerson)

54. **Emparejamiento Bipartito**  
    Resolver el problema de emparejamiento bipartito (algoritmo húngaro)

55. **A* Pathfinding**  
    Implementar algoritmo A* para pathfinding

### Estructuras Persistentes

56. **Lista Enlazada Persistente**  
    Implementar una lista enlazada persistente (inmutable)

57. **BST Persistente**  
    Crear un árbol binario de búsqueda persistente

58. **Hash Map Persistente**  
    Diseñar un hash map persistente usando HAMT

59. **Cola Persistente**  
    Implementar una cola persistente con complejidad amortizada

60. **Vector Persistente**  
    Crear un vector persistente estilo Clojure

### Estructuras Probabilísticas

61. **Bloom Filter**  
    Implementar un Bloom Filter para test de pertenencia

62. **Count-Min Sketch**  
    Diseñar un Count-Min Sketch para frecuencias aproximadas

63. **HyperLogLog**  
    Crear un HyperLogLog para cardinalidad aproximada

64. **Filtro de Cuckoo**  
    Implementar un filtro de Cuckoo con múltiples funciones hash

65. **Skip Graph**  
    Diseñar una estructura Skip Graph para redes P2P

### Problemas Complejos

66. **Sistema de Versionado**  
    Implementar un sistema de versionado de documentos con diff eficiente

67. **K-ésimo Elemento Dinámico**  
    Diseñar una estructura para consultas de k-ésimo elemento más pequeño dinámico

68. **Índice Invertido**  
    Crear un índice invertido para motor de búsqueda

69. **Rope**  
    Implementar un rope para manipulación eficiente de strings largos

70. **Autocompletado con Ranking**  
    Diseñar una estructura de datos para autocompletado con ranking

---

## 🔴 Nivel Super Avanzado (71-100)

### Estructuras Concurrentes

71. **Hash Map Lock-Free**  
    Implementar un hash map lock-free usando CAS

72. **Cola Concurrente**  
    Diseñar una cola concurrente sin bloqueos (lock-free queue)

73. **Skip List Concurrente**  
    Crear un skip list concurrente thread-safe

74. **Árbol B+ Concurrente**  
    Implementar un árbol B+ concurrente para bases de datos

75. **Pool de Memoria Lock-Free**  
    Diseñar un pool de memoria lock-free

### Estructuras Comprimidas

76. **Wavelet Tree**  
    Implementar un wavelet tree para consultas en secuencias

77. **FM-Index**  
    Crear una estructura de datos FM-Index para búsqueda comprimida

78. **Succinct Tree**  
    Diseñar un Succinct Tree para representación compacta de árboles

79. **Rank/Select**  
    Implementar Rank/Select sobre bitvectors comprimidos

80. **Patricia Trie**  
    Crear un Patricia Trie comprimido (Radix Tree)

### Geometría Computacional

81. **Árbol de Segmentos 2D**  
    Implementar un árbol de segmentos 2D para consultas rectangulares

82. **Punto Más Cercano**  
    Diseñar una estructura para punto más cercano en espacio 2D/3D

83. **Línea de Barrido**  
    Implementar un algoritmo de línea de barrido con eventos

84. **Rango Ortogonal**  
    Crear una estructura para consultas de rango ortogonal

85. **Quadtree/Octree**  
    Diseñar un Quadtree/Octree para particionamiento espacial

### Estructuras para Big Data

86. **LSM-Tree**  
    Implementar un LSM-Tree para sistemas de almacenamiento

87. **B-epsilon Tree**  
    Diseñar un B-epsilon tree para inserciones masivas

88. **Quantiles Aproximados**  
    Crear una estructura de streaming para quantiles aproximados

89. **Tango Tree**  
    Implementar un Tango Tree para búsquedas óptimas

90. **Estructura Cache-Oblivious**  
    Diseñar una estructura cache-oblivious para memoria externa

### Problemas Extremos

91. **Suffix Array Lineal**  
    Implementar un Suffix Array con construcción en tiempo linear

92. **Y-fast Trie**  
    Crear una estructura Y-fast trie para predecesor/sucesor en O(log log n)

93. **Dynamic Connectivity**  
    Diseñar un Dynamic Connectivity con link-cut trees

94. **Range Tree Multidimensional**  
    Implementar un Range Tree multidimensional con fraccional cascading

95. **LCA en O(1)**  
    Crear una estructura para LCA con preprocesamiento O(n) y query O(1)

96. **Splay Tree con Análisis**  
    Implementar un Splay Tree con análisis amortizado completo

97. **Fusion Tree**  
    Diseñar un Fusion Tree para ordenamiento en tiempo sublineal

98. **Estructura Kinetic**  
    Crear una estructura Kinetic para datos en movimiento

99. **Estructura Retroactiva**  
    Implementar una estructura de datos retroactiva (retroactive data structure)

100. **Base de Datos en Memoria**  
     Diseñar un sistema completo de base de datos en memoria con índices múltiples, transacciones ACID y recuperación ante fallos
---
## 🤝 Contribuir

Si deseas agregar más retos o mejorar los existentes:

1. Fork este repositorio
2. Crea una rama con tu feature (`git checkout -b feature/nuevo-reto`)
3. Commit tus cambios (`git commit -m 'Añade nuevo reto'`)
4. Push a la rama (`git push origin feature/nuevo-reto`)
5. Abre un Pull Request

---

## 📝 Licencia
Este proyecto está bajo la licencia MIT. Siéntete libre de usar, modificar y distribuir este contenido.
---
## ⭐ Agradecimientos
Gracias a la comunidad de programadores que constantemente busca mejorar sus habilidades y compartir conocimiento.
**¡Feliz coding! 💻🚀**
