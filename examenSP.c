#include<stdio.h>

int main(){
int list[6], n = 0;
n = (sizeof(list)/4);

	for(int i = 0; i < n; i++){
		printf("Ingrese un numero: \n");
		scanf("%d", &list[i]);
	}
	
	printf("Numeros ingresados: \n");
	for(int i = 0; i < n-1; i++){
		printf("%d, ", list[i]);
	}
	printf("%d\n", list[n-1]);

	for(int i = 0; i < n; i++){
		int min = i; //Poner el elemento al minimo

		//checar si el elemento es el minimo

		for(int j = i+1; j < n; j++){
			if(list[j] < list[min]){
				min = j;
			}
		}
		if(min != i){ //intercambio del minimo elemento con el actual
			int aux = list[min];
			list[min] = list[i];
			list[i] = aux;
		}
	}

	//SALIDA DE LOS DATOS
	printf("Ordenamiento: \n");
	for(int i = 0; i < n-1; i++){
		printf("%d, ", list[i]);
	}
	printf("%d\n", list[n-1]);
}
