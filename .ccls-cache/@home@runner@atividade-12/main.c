//1
// #include <stdio.h>
// #include <stdlib.h>

// int main(void) {
//   int matriz [4][4];
//   int i,j,contador=0;
//   printf("Digite os valores da matriz\n");
//   for(i=0;i<4;i++){
//     for(j=0;j<4;j++){
//       scanf("%d",&matriz[i][j]);
//     }
//   }
//   for(i=0;i<4;i++){
//     for(j=0;j<4;j++){
//       if(matriz[i][j]>10){
//         contador++;
//       }
//     }
//   }
//   printf("Quantidade de valor >10",contador);
//   return 0;
// }
//2
// #include<stdio.h>
// #include<stdlib.h>
// int main (){
//   int matriz [5][5];
//   int i,j;
//   for(i=0;i<5;i++){
//     for(j=0;j<5;j++){
//        if(i==j){
//         printf("1");
//        }if(j==4){
//          printf("\n");
//        } 
//        else{
//         printf("o");
//        }
//     }
//   }
// }
//3
// #include<stdio.h>
// #include<stdlib.h>
// int main (void){
//   int matriz[3][3];
//   int i,j;
//   for (i=0;i<3;i++){
//     for(j=0;j<3;j++){
//       matriz[i][j]=(i+1)*(j+1);
//     }
//   }
//   for(i=0;i<3;i++){
//     for(j=0;j<3;j++){
//       printf("%d",matriz[i][j]);
//       if(j==2){
//         printf("\n");
//       }
//     }
//   }
// }
//4
// #include <stdio.h>
// #include <stdlib.h>
// int main (void){
//   int matriz[4][4];
//     int i, j;
//     int maiorValor = matriz[0][0];
//     int linhaMaiorValor = 0;
//     int colunaMaiorValor = 0;
//     printf("Digite os elementos da matriz 4x4:\n");
//     for (i = 0; i < 4; i++) {
//       for (j = 0; j < 4; j++) {
//         scanf("%d", &matriz[i][j]);
//         if (matriz[i][j] > maiorValor) {
//           maiorValor = matriz[i][j];
//           linhaMaiorValor = i;
//           colunaMaiorValor = j;
//         }
//     }
//   }
//     printf("Matriz lida:\n");
//     for (i = 0; i < 4; i++) {
//       for (j = 0; j < 4; j++) {
//         printf("%d\t", matriz[i][j]);
//         }
//         printf("\n");
//     }
//     printf("O maior valor (%d) está na linha %d e coluna %d.\n", maiorValor, linhaMaiorValor, colunaMaiorValor);
//     return 0;
// }
//5
// #include <stdio.h>
// #include <stdlib.h>
// int main() {
//     int matriz[5][5];
//     int i, j;
//     int valorX;
//     int encontrado = 0;
//     printf("Digite os elementos da matriz 5x5:\n");
//     for (i = 0; i < 5; i++) {
//       for (j = 0; j < 5; j++) {
//         scanf("%d", &matriz[i][j]);
//         }
//     }
//     printf("Digite o valor a ser procurado (X):\n");
//     scanf("%d", &valorX);
//     for (i = 0; i < 5; i++) {
//       for (j = 0; j < 5; j++) {
//         if (matriz[i][j] == valorX) {
//         printf("O valor %d foi encontrado na linha %d e coluna %d.\n", valorX, i, j);
//           encontrado = 1;
//       }
//     }
//   }
//     if (!encontrado) {
//         printf("O valor %d não foi encontrado na matriz.\n", valorX);
//     }
//     return 0;
// }