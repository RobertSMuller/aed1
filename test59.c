#include<stdio.h>
#include<stdlib.h>

int** generateMatrix(int n);

int main(){
   int numero=4;

   generateMatrix(numero);
    return 0;
}

int** generateMatrix(int n) {
    int matriz[n][n];
    int **arr = malloc(n * sizeof *arr);
    int cont=1,total=n*n;
    int cima=0, baixo=n-1;
    int esq=0, dir=n-1;

    for(int i = 0; i < n; i++){
        arr[i] = malloc(n * sizeof *arr[i]);
    }

     
    while(cont<=total){
        //pra direita
        for(int i=cima;i<=dir;i++){
            matriz[cima][i]=cont;
            cont++;
        }
        cima++;
        //pra baixo
        for(int i=cima;i<=baixo;i++){
            matriz[i][dir]=cont;
            cont++;
        }
        dir--;
        //pra esquerda
        for (int i = dir; i >= esq; i--){
            matriz[baixo][i]=cont;
            cont++;
        }
        baixo--;
        //pra cima
        for(int i= baixo;i>=cima;i--){
            matriz[i][esq]=cont;
            cont++;
        }
        esq++;
        


    }
        
for(int i=0;i<n;i++){
    for (int y=0; y<n; y++){
        printf("%d ", matriz[i][y]);
        arr[i][y]=matriz[i][y];
    }
    printf("\n");
}
for(int i=0;i<n;i++){
    for (int y=0; y<n; y++){
        printf("%d ", arr[i][y]);
       
    }
    printf("\n");
}


   
return 0;
}