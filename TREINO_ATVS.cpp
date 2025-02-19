#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


// Cria uma matriz e aponta o menor número e a linha em que ele está: op1
void menor_matriz(){
	
	
	int matriz[3][3];

	int i,j, linha;
	
	
	
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){
			printf("Insira o número da %i º linha da %i º coluna da matriz: ", i + 1, j+ 1);
			scanf("%i",&matriz[i][j]);
		}
		
	}
	for (i = 0; i < 3; i++){
		
		for(j = 0; j < 3; j++){
			printf("%d", matriz[i][j]);
		}
		printf("\n");	
		
	}
	int menor = matriz[0][0];
	
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){
			if (menor > matriz[i][j]){
				menor = matriz[i][j];
				linha = i;
			}
		}
	}
	printf("O menor elemento da matriz é: %i\n", menor);
	printf("E está na linha: %i", linha + 1);
	
	
}
/*Recebe 3 notas, calcula média das notas e média de aproveitamento e depois exibe respectivamente o Conceito de acordo com a média
e as médias respectivamente
*/
void media_aproveitamento(){
	
	char aluno[49];
	
	float notas[3];
	
	int i;
	
	float *ptr;
	
	float *ptr1;
	
	float media_aprov = 0;
	
	float media_atv = 0;
	
	printf("Ola informe o nome do aluno: ");
	scanf("%49s",aluno);
	printf("%s\n" ,aluno);
	printf("---------------------------------------------------\n");
	
	
	for (i = 0; i < 3; i++){
		printf("Digite a %i nota do aluno: ", i +1);
		scanf("%f", &notas[i]);
		ptr1 = &notas[i];
		if (*ptr1 > 10 or *ptr1 < 0){
			printf("O valor nao e valido, por favor insira notas de 0 a 10\n");
			i--;	
			}
	}
	
	for (i = 0;i < 3; i++){
		ptr = &notas[i];
		media_atv = *ptr + media_atv;
		
	}
	media_atv = media_atv / 3;
	media_aprov = (notas[0] + notas[1]*2 + notas[2]*3 + media_atv) / 7;
	
	if (media_aprov >= 9){
		printf("---------------------------------------------------\n");
		printf("A o conceito do aluno: %s e A\n",aluno);
		printf("---------------------------------------------------\n");
	}
	
	if (media_aprov >= 7.5 and media_aprov < 9){
		printf("---------------------------------------------------\n");
		printf("A o conceito do aluno: %s e B\n",aluno);
		printf("---------------------------------------------------\n");
	}
	
	if (media_aprov >= 6 and media_aprov < 7.5){
		printf("---------------------------------------------------\n");
		printf("A o conceito do aluno: %s e C\n",aluno);
		printf("---------------------------------------------------\n");
	}
	
	if (media_aprov >= 4 and media_aprov < 6){
		printf("---------------------------------------------------\n");
		printf("A o conceito do aluno: %s e D\n",aluno);
		printf("---------------------------------------------------\n");
	}
	
	if (media_aprov  < 4){
		printf("---------------------------------------------------\n");
		printf("A o conceito do aluno: %s e E\n",aluno);
		printf("---------------------------------------------------\n");
	}
	printf("A media das atividades do aluno: %s e  %.2f \n",aluno,  media_atv);
	printf("---------------------------------------------------\n");
	printf("A media de aproveitamento do aluno: %s e  %.2f \n",aluno, media_aprov);
	
}
//imprimie números em piramide
void piramide() {
    int i, j;
    int num_max;

    printf("Digite um numero impar para o numero maximo: ");
    scanf("%d", &num_max);

    if (num_max % 2 == 0) {
        printf("O número deve ser impar.\n");
        return;  
    }

    for (i = 0; i < (num_max / 2 + 1); i++) {
        for (j = 0; j < i; j++) {
            printf("  ");
        }

        for (j = i + 1; j <= num_max - i; j++) {
            printf("%d ", j);
        }

        printf("\n");
    }
}
//Ordenar nomes para ordem alfabética
void nome_ordem_alfabetica(){
	
	char nome1[50], nome2[50];
	
	printf("Digite o primeiro nome: \n");
	fgets(nome1, sizeof(nome1), stdin);
	
	printf("Digite o segundo nome: \n");
	fgets(nome2, sizeof(nome2), stdin);
	
	if (strcmp(nome1,nome2) < 0 ){
		printf("Ordem alfabetica:\n%s \n%s", nome1, nome2);
	}else{
		printf("Ordem alfabetica:\n%s \n%s", nome2, nome1);
	}
	
}
// multiplica linha e coluna de matriz
void multiplica_matriz(){
	int i,j;
	
	int matriz[3][3];
	
	int linha = 0;
	
	int num = 0;
	
	int coluna = 0;
	
	int multiplica = 0;
	
	int multiplica1 = 0;
	
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){
			printf("Insira o numero da %iº linha da %iº coluna da matriz: ", i + 1, j+ 1);
			scanf("%i",&matriz[i][j]);
		}
	}
	printf("Insira o valor a multiplicar: \n");
	scanf("%i", &num);
	
	printf("Insira agora a linha desejada: \n");
	scanf("%i",&linha);
	
	printf("Insira agora a coluna desejada: \n");
	scanf("%i", &coluna);
	printf("\n");
	
	for (j = 0; j < 3; j++){
		multiplica =  matriz[linha - 1][j] * num  ;
		printf("%i ", multiplica);
	}
	printf("\n");
	for (i = 0; i < 3; i++){
		multiplica1 =  matriz[i][coluna - 1] * num  ;
		printf("%i ", multiplica1);
	}
	

}
//Cria matriz transposta pelo usuário
void transposta() {
    int m, n;
    int i, j;
    
    
    printf("Insira o numero de linhas: \n");
    scanf("%i", &m);
    printf("Insira o numero de colunas: \n");
    scanf("%i", &n);
    
    int matriz[m][n];         
    int transposta[n][m];     
    
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("Insira o valor da matriz na posição [%d][%d]: ", i + 1, j + 1);
            scanf("%i", &matriz[i][j]);
        }
    }
    
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            transposta[j][i] = matriz[i][j];
        }
    }
    
    
    printf("\nA matriz transposta é:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", transposta[i][j]);  
        }
        printf("\n");  
    }
}
//Criar struct pessoa
void pessoa(){
	int choice = 0;
	
	int num = 0;
	
	int i = 0;
	
	int id = 0;
	
	struct Pessoa{
		char nome[50];
		int idade;
		float altura;
	};
	for (i = 0; i < 1; i++){
		printf("Ola quantas pessoas voce deseja registrar? ");
		
		
		if (scanf("%i", &num) != 1){
			while(getchar() != '\n');
			printf("Registro invalido, porfavor digite um numero inteiro \n");
			i--;
		}
	}
	
	getchar();
	
	Pessoa p[num];
	for (i = 0; i < num; i ++){
		printf("Digite o nome da pessoa %i: ",i+1);
		fgets(p[i].nome, sizeof(p[i].nome), stdin);
		
		size_t len = strlen(p[i].nome);
		if (len > 0 && p[i].nome[len - 1] == '\n'){
			p[i].nome[len - 1] = '\0';
		}
		
		printf("Digite a idade de %s: ", p[i].nome);
		scanf("%i", &p[i].idade);
		
		getchar();
		printf("Digite a altura de %s: ", p[i].nome);
		scanf("%f", &p[i].altura);
		getchar();
		
		printf("\n");		
	}
	printf("Digite 1 para exibir todas as pessoas cadastradas ou digite 2 para exibir apenas uma pessoa buscada pelo ID: \n");
	scanf("%i", &choice);
	
	if (choice == 2){
	
		for (i = 0; i < 1; i++){
			printf("Digite o id da pessoa que deseja exibir: ");
		
			if (scanf("%i", &id) != 1){
				while(getchar() != '\n');
				printf("Registro invalido, porfavor digite um numero inteiro \n");
				i--;
			}
			printf("Nome :: %s\n", p[id-1].nome);
			printf("---------------------\n");
			printf("Idade :: %i\n", p[id-1].idade);
			printf("---------------------\n");
			printf("Altura :: %.2f\n", p[id-1].altura);
	}
	}
	
	if (choice == 1){
		
		for( i = 0; i < num; i++){
			printf("Nome :: %s\n", p[i].nome);
			printf("---------------------\n");
			printf("Idade :: %i\n", p[i].idade);
			printf("---------------------\n");
			printf("Altura :: %.2f\n", p[i].altura);
	}
  }
}
// opções
void menu(){
	
	int choice;
	printf("Digite a opcao desejada: \n");
	printf("Opcao 1: menor_matriz \n");
	printf("----------------------------------------\n");
	printf("Opcao 2: media_aproveitamento \n");
	printf("----------------------------------------\n");
	printf("Opcao 3: piramide \n");
	printf("----------------------------------------\n");
	printf("Opcao 4: nome_ordem_alfabetica)\n");
	printf("----------------------------------------\n");
	printf("Opcao 5: multiplica_matriz\n");
	printf("----------------------------------------\n");
	printf("Opcao 6: transposta\n");
	printf("----------------------------------------\n");
	printf("Opcao 7: pessoa\n");
	scanf("%i",&choice);
	printf("----------------------------------------\n");
	if (choice == 1){
		menor_matriz();
	}
	if (choice == 2){
		media_aproveitamento();
	}
	if (choice == 3){
		piramide();
	}
	if (choice == 4){
		nome_ordem_alfabetica();
	}
	if (choice == 5){
		multiplica_matriz();
	}
	if (choice == 6){
		transposta();
	}
	if (choice == 7){
		pessoa();
	}
}

int main() {
	setlocale(LC_ALL, "Portuguese");
    menu();
	return 0;	
}
