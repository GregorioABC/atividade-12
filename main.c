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
//6
// #include <stdio.h>
// #include <stdlib.h>
// int main (void){
//   int matrizA[4][4]={{a11, a12, a13, a14},
//                   {a21, a22, a23, a24},
//                   {a31, a32, a33, a34},
//                   {a41, a42, a43, a44}};
//   int matrizB[4][4]={{b11, b12, b13, b14},
//                   {b21, b22, b23, b24},
//                   {b31, b32, b33, b34},
//                   {b41, b42, b43, b44}};
//   int C[4][4];
//   int i,j;
//   for (int i = 0; i < 4; i++) {
//         for (int j = 0; j < 4; j++) {
//             C[i][j] = (matrizA[i][j] > matrizB[i][j]) ? matrizA[i][j] : matrizB[i][j];
//         }
//     }
// printf("Matriz C com os maiores valores:\n");
//     for (int i = 0; i < 4; i++) {
//         for (int j = 0; j < 4; j++) {
//             printf("%d ", C[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }
//7
//8
#include <stdio.h>
int main() {
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int soma = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) {
            soma += matriz[i][j];
        }
    }
    printf("A soma dos elementos acima da diagonal principal é: %d\n", soma);
    return 0;
}

//9
// #include <stdio.h>
// int main() {
//     int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     int soma = 0;

//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < i; j++) {
//             soma += matriz[i][j];
//         }
//     }

//     printf("A soma dos elementos abaixo da diagonal principal é: %d\n", soma);
//     return 0;
// }
//10
// #include <stdio.h>
// int main() {
//     int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     int soma = 0;

//     for (int i = 0; i < 3; i++) {
//         soma += matriz[i][i];
//     }

//     printf("A soma dos elementos na diagonal principal é: %d\n", soma);
//     return 0;
// }
//11
// #include <stdio.h>
// int main() {
//     int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     int soma = 0;
//     for (int i = 0; i < 3; i++) {
//         soma += matriz[i][2 - i];
//     }
//     printf("A soma dos elementos na diagonal secundária é: %d\n", soma);
//     return 0;
// }
//12
// #include <stdio.h>
// int main() {
//     int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     int transposta[3][3];
//     for (int i = 0; i < 3; i++) {
//       for (int j = 0; j < 3; j++) {
//         transposta[i][j] = matriz[j][i];
//         }
//     }
//     printf("Matriz original:\n");
//     for (int i = 0; i < 3; i++) {
//       for (int j = 0; j < 3; j++) {
//         printf("%d ", matriz[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\nMatriz transposta:\n");
//     for (int i = 0; i < 3; i++) {
//       for (int j = 0; j < 3; j++) {
//         printf("%d ", transposta[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }
//13
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// int main() {
//     int matriz[4][4];
//     srand(time(NULL));
//     for (int i = 0; i < 4; i++) {
//       for (int j = 0; j < 4; j++) {
//         matriz[i][j] = rand() % 20 + 1;
//         }
//     }
//     printf("Matriz original:\n");
//     for (int i = 0; i < 4; i++) {
//       for (int j = 0; j < 4; j++) {
//         printf("%2d ", matriz[i][j]);
//         }
//         printf("\n");
//     }
//     for (int i = 0; i < 4; i++) {
//       for (int j = i + 1; j < 4; j++) {
//         matriz[i][j] = 0;
//         }
//     }
//     printf("\nMatriz transformada (triangular inferior):\n");
//     for (int i = 0; i < 4; i++) {
//       for (int j = 0; j < 4; j++) {
//         printf("%2d ", matriz[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }
//14
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// int main() {
//     int cartela[5][5];
//     srand(time(NULL));
//     for (int i = 0; i < 5; i++) {
//       for (int j = 0; j < 5; j++) {
//         cartela[i][j] = 0;
//         }
//     }
//     for (int num = 1; num <= 25; num++) {
//         int linha, coluna;
//         do {
//           linha = rand() % 5;
//           coluna = rand() % 5;
//         } while (cartela[linha][coluna] != 0);
//         cartela[linha][coluna] = num;
//     }
//     printf("Cartela de Bingo:\n");
//     for (int i = 0; i < 5; i++) {
//       for (int j = 0; j < 5; j++) {
//         printf("%2d ", cartela[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }
//15 não consegui fazer
//16
// #include <stdio.h>
// int main() {
//     int notas[10][3] = {{70, 80, 90}, {60, 75, 85}, {80, 85, 70}, {75, 70, 60}, {90, 80, 95},
//                         {75, 60, 70}, {85, 70, 60}, {70, 65, 75}, {80, 75, 85}, {65, 75, 70}};
//     int pioresProva1 = 0, pioresProva2 = 0, pioresProva3 = 0;
//     for (int i = 0; i < 10; i++) {
//         int minNota = notas[i][0];
//       for (int j = 1; j < 3; j++) {
//         if (notas[i][j] < minNota) {
//         minNota = notas[i][j];
//         }
//       }
//       if (minNota == notas[i][0]) {
//         pioresProva1++;
//       } else if (minNota == notas[i][1]) {
//           pioresProva2++;
//         } else {
//             pioresProva3++;
//         }
//     }
//     printf("Número de alunos com pior nota na prova 1: %d\n", pioresProva1);
//     printf("Número de alunos com pior nota na prova 2: %d\n", pioresProva2);
//     printf("Número de alunos com pior nota na prova 3: %d\n", pioresProva3);
//     return 0;
// }
//17
// #include <stdio.h>
// int main() {
//     int matriz[5][4] = {{5, -8, 10, 12}, {15, 25, 10, 7}, {8, 12, 15, 25},
//                         {10, 10, 12, 5}, {-8, 7, 25, 10}};
//     int somaColunas[4] = {0};
//     for (int j = 0; j < 4; j++) {
//       for (int i = 0; i < 5; i++) {
//         somaColunas[j] += matriz[i][j];
//         }
//     }
//     printf("Soma das colunas:\n");
//     for (int j = 0; j < 4; j++) {
//       printf("%d ", somaColunas[j]);
//     }
//     printf("\n");
//     return 0;
// }
//18
// #include <stdio.h>
// int main() {
//     int matriz[5][4];
//     int maiorNota = -1;
//     for (int i = 0; i < 5; i++) {
//         printf("Informe o número de matrícula do aluno %d: ", i + 1);
//         scanf("%d", &matriz[i][0]);
//         printf("Informe a média das provas do aluno %d: ", i + 1);
//         scanf("%d", &matriz[i][1]);
//         printf("Informe a média dos trabalhos do aluno %d: ", i + 1);
//         scanf("%d", &matriz[i][2]);
//         matriz[i][3] = matriz[i][1] + matriz[i][2];
//        if (matriz[i][3] > maiorNota) {
//             maiorNota = matriz[i][3];
//         }
//     }
//     printf("Matrícula do aluno com a maior nota final: %d\n", matriz[0][0]);
//     int somaNotasFinais = 0;
//     for (int i = 0; i < 5; i++) {
//         somaNotasFinais += matriz[i][3];
//     }
//     float mediaNotasFinais = (float)somaNotasFinais / 5;
//     printf("Média aritmética das notas finais: %.2f\n", mediaNotasFinais);
//     return 0;
// }
//19



