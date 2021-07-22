#include <stdio.h>
#include <string.h>
int questao_2();
int questao_3();
int questao_4(void);
void questao_5();
int questao_6(int n);
int questao_7();
/*  QUESTÃO 8   */
void multiplicacao(float *v1, float *v2, float *resultado);
int questao_8();


int main(){

    questao_2();
    questao_3();
    questao_4();
/*  -- Questao_5    --  */
    questao_5();
//    Erro de declaração de variavel
        printf ("\n %s", nome);

/*  -- Fim da Questao_5    --  */

// se entrar com input impar a função entra em loop
    questao_6(2);
    questao_7();

    questao_8();

    char x[100] = "Concatena duas variaveis strings: ";
    char y[10] = "Correto";

    printf(strcat(x,y));

    return 0;
}

int questao_2(){

    int mat[3][3] = {{1,2,3}, {2,1,3}, {3,2,1}};
    int i,j;
    int aux = mat[0][0];
    mat[0][0] = mat[0][1];
    mat[0][1] = aux;
    aux=mat[1][1];
    mat[1][1]=mat[2][2];
    mat[2][2]=aux;
    aux=mat[2][1];
    mat[2][1]=mat[1][2];
    mat[1][2]=aux;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%i ", mat[i][j]);
        }
    }
}

int questao_3(){
        int vetorA[5];
        int i;
        for (i=0;i<5;i++){
            printf("\nDigite o %d elemento: ", i);
            scanf("%d", &vetorA[i]);
            fflush(stdin);
        }

        for (i=0;i<10;i++){
            printf("%d - ", vetorA[i]);
        }

        return (0);
}

int questao_4(void){

//  QUESTÃO 4

    int a = 10;

    if (a = 11) {
        printf("1");
    }

    if (a == 10) {
        printf("%d", a);
    }
    printf("%d", a);

}

// Questao_5
void questao_5(){
       char nome[10];
         printf("Digite o nome: ");
         gets(nome);
     }

int questao_6(int n){
    printf("Oi");
    if((n%2)==0){
        return (2);
    }else{
    // Se descomentar vai dar loop infinito
                return (questao_6(n+2));
    }
}

int questao_7(){
    int mat[3][3];
    int i, j;

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Insira o elemento da linha %d, coluna %d (mat[%d][%d]): ", i+1, j+1, i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    for(i=0;i<3;i++){
        printf("\n");
        for(j=0;j<3;j++){
            if(i == j){
                printf("%d ", mat[i][j]);
            } else {
                printf("0 ");
            }
        }
    }
    printf("\n");
}

/*     QUESTÃO 8 */
void multiplicacao(float *v1, float *v2, float *resultado){
    *resultado = *v1 * *v2;
}
int questao_8(){

    float v1, v2, resultado;
    v1 = 10.0;
    v2 = 20.0;
    resultado = 0;

    multiplicacao(&v1, &v2, &resultado);

    printf("%f",resultado);
}

