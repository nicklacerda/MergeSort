#include <stdio.h>

void intercalarListas(int *vetorFinal, int *lista1, int tam1, int *lista2, int tam2){
    
    int index1 = 0;
    int index2 = 0;
    int i = 0;
    while(index1 < tam1 && index2 < tam2){
        
        if(lista1[index1] < lista2[index2]){
            vetorFinal[i] = lista1[index1];
            index1++;
            i++;
        }
        if(lista2[index2] < lista1[index1]){
            vetorFinal[i] = lista1[index2];
            index2++;
            i++;
        }
    }
}


int main()
{
    printf("Hello World");

    return 0;
}
