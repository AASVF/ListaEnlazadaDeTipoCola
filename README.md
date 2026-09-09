Lista Enlazada de Tipo Cola (Queue)
1. Descripción
Este proyecto implementa una cola (Queue) genérica utilizando una lista enlazada simple como estructura de datos subyacente. Cada elemento de la cola se representa mediante un nodo (Node<T>) que almacena un valor y un puntero al siguiente nodo, formando una cadena enlazada. La cola mantiene dos punteros — uno al frente (top) y otro al final (tail) — para garantizar operaciones de inserción y extracción en tiempo constante O(1).
•	Estructura de datos: Lista enlazada simple (singly linked list) con política FIFO (First In, First Out).
•	Lenguaje de programación: C++.
•	Paradigma de programación: Programación orientada a objetos (encapsulamiento mediante clases con atributos privados y métodos públicos), combinada con programación genérica a través de plantillas de clase (template<typename T>), lo que permite que la cola almacene cualquier tipo de dato sin duplicar código.

2. Requerimientos de software
Para compilar y ejecutar este proyecto se necesita:
•	Compilador de C++ compatible con el estándar C++11 o superior: 
o	Windows: MinGW-w64 (provee g++.exe)
o	Linux: g++ (usualmente ya incluido; en caso contrario, instalar el paquete build-essential)
o	macOS: Command Line Tools de Xcode (xcode-select --install)
•	Editor de código (opcional, recomendado): Visual Studio Code con la extensión oficial C/C++ (ms-vscode.cpptools) para compilación y depuración integradas.
•	No se requieren librerías externas: el proyecto solo usa la biblioteca estándar de C++ (<stdexcept>, <iostream>).
Verificar la instalación del compilador con:
g++ --version

3. Cómo se ejecuta la aplicación de prueba:
El archivo main.cpp contiene un programa de prueba que ejercita todas las operaciones de la cola.

Opción A: Desde la terminal
1. Ubicarse en el escritorio, clonar el repositorio y ubicarse en la carpeta del proyecto:
  cd <nombre de su escritorio>
  git clone https://github.com/BRAYAYIN666/ListaEnlazadaDeTipoCola.git
  cd <nombre de carpeta del proyecto que desee darle>
2. Compilar el proyecto:
   g++ -std=c++11 main.cpp -o programa
3. Ejecutar el programa generado:
   ./programa        # Linux / macOS
   .\programa.exe    # Windows

Opción B: Desde Visual Studio Code
1. Abrir la carpeta del proyecto en VSCode.
2. Tener instalada la extensión C/C++ de Microsoft.
3. Abrir `main.cpp` y presionar F5 para compilar y ejecutar.
