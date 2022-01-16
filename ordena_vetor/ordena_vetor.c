#include <stdio.h>

//Função que recebe um vetor e ordena seus elementos em ordem crescente


void ordenaVetor(int *ptrVetor, int n){
    int i, j=0;
    int buffer;
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(ptrVetor[i]>ptrVetor[j]){
                //O menor é o vetor[j]
                buffer=ptrVetor[j];
                ptrVetor[j]=ptrVetor[i];
                ptrVetor[i]=buffer;
            }
        }
    }
}

int main(){
    int i=0;
    int n=7;
    int vetor[]={9,8,7,6,1,2,3};
    int *ptrVetor;
    ptrVetor=vetor;
    ordenaVetor(ptrVetor, n);
    for(i=0; i<n; i++){
        printf("%d\n", ptrVetor[i]);
    }
    return 0;
}
