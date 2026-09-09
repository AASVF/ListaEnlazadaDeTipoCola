#include <iostream>
#include "Queue.h"

int main()
{
	Queue<int> queue;
	printf(queue.isEmpty() ? "La cola esta vacia? Si (isEmpty)\n\n" : "La cola esta vacia? No (isEmpty)\n\n");

	for (int i = 1; i <= 10; i++) {
		queue.push(i);
		printf("Se agrego el numero [%d] a la fila (push)\n", i);
	}

	printf(queue.isEmpty() ? "\nLa cola esta vacia? Si (isEmpty)\n\n" : "\nLa cola esta vacia? No (isEmpty)\n\n");
	
	printf("Elemento al comienzo de la fila (peek): %d\n\n", queue.peek());

	while (!queue.isEmpty()){
		printf("Se elimino el numero [%d] de la fila (pop) \n", queue.pop());
	}

	printf(queue.isEmpty() ? "\nAhora esta vacia la fila? Si (isEmpty)\n" : " \nAhora esta vacia la fila? No (isEmpty)\n");

	try	{
		queue.pop();
	}
	catch (const std::runtime_error &e) { 
		printf("\nError capturado: %s\n", e.what());
	}
	return 0;
}