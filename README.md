# evalunidad3-forze_meloni_vive_le_mussolini_italia
1. Utilizamos Visual Paradigm para realizar diagramas que nos permitieran comprender y estructurar el código en c#, para poder visualizar las estructuras que empezamos a construir en C. También hemos recurrido a la documentación del problema y a los ejercicios realizados en clase, en especial el ejercicio de la pistola y el de los animales. 

![Strategy_CS vpd-Page-1](https://user-images.githubusercontent.com/83185513/196596990-7bbdd697-b32e-466a-ac0e-ac6d504ba043.png)
![DIagrama C - Parcial 3](https://user-images.githubusercontent.com/93880973/197918652-2dbb3ea1-e772-44bc-9e35-abcbea34743e.png)

El programa contiene 3 estrategias para organizar una cadena de carácteres, la primera estrategia los imprime en pantalla en su orden original, la segunda estrategia los imprime en orden alfabético comparando el valor ASCII de los carácteres, la tercera estrategia consiste en imprimirlos en el orden contrario, valiéndose de la misma estrategia pero comparando que el código ASCII vaya de mayor a menor. Cada estrategia hereda de la interfaz el poder de castear un algoritmo, un destructor y un constructor.

Los algoritmos de B y C recorren el arreglo de carácteres mediante dos índices, "i" y "j", permitiendo comparar los valores ASCII de dos espacios del arreglo consecutivos.

void _AlgoB(void * data){
    printf("Context: Sorting data using the strategy (not sure how it'll do it)\n");
    char string [20];
    strcpy(string,(char *)data);
    char temp;
    int i, j;
    int n = strlen(data);

    for(i = 0; i < n-1; i++){
        for(j = i+1; j < n; j++){  
            if (string[i] > string[j]){
                temp = string[i];
                string[i] = string[j];
                string[j] = temp;
            }
        }
    }
    printf("%s\n", string);
}


