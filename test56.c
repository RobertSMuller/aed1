#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int** generateMatrix(int n);

int main(){
   int numero=3;

   generateMatrix(numero);
    return 0;
}

int** generateMatrix(int n) {
    int matriz[n][n];
    int cont=1;
    for(int i=0;i<n;i++){
        for(int y=0;y<n;y++){
            matriz[i][y]=0;
        }}

    for(int i=0;i<n;i++){
        for(int y=0;y<n;y++){
            if(i==0){
                matriz[i][y]=cont;
                cont++;
            }else if(i>0&&y==n-1){
                printf("aqui \n");
                matriz[i][y]=cont;
                cont++;
            }
            }
            if(i==n-1){
            for(int z=n-2;z>=0;z--){
                matriz[i][z]=cont;
                 cont++;

        }}

        }




    for(int i=0;i<n;i++){
        for(int y=0;y<n;y++){
        printf("%d", matriz[i][y]);;
        }
        printf("\n");
    }
return 0;
}