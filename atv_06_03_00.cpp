#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>
//Para testar só remover os caracteres de comentário de cada atividade da lista, obrigado.
typedef struct {
		char sobrenome[49];
		int nascimento;
		int matricula;
	} registro;
int verificar (int **matriz, int l, int c, int v){
	int i, j;
	
	for (i = 0; i < l; i++){
		for (j = 0; j < c; j++){
			if (matriz[i][j] == v){
				printf("O valor %d esta na matriz na posicao [%d][%d]\n ",v, i + 1, j + 1
				);
				return 1;
			}
		}
	}
	printf("O valor nao esta na matriz.");
	return 0;
}
int main(){
/*atividade 1
	int i, n, r;
	
	int *vetor;
	
	vetor = (int*) malloc(5 * sizeof(int));
	
	if (vetor == NULL){
		printf("Erro na alocação de memória.");
		return 1;
	}
	for (i = 0; i < 5; i++){
		printf("Digite o %i elemento: ", i + 1);
		scanf("%d", &vetor[i]);
	}
	
	for (i = 0; i < 5; i++){
		printf("Elemento: %d  \n", vetor[i]);
		
	}
	free(vetor);
	return 0;
*/
/*atividade 2
    int i, n, n1;
    int *vetor;

    printf("Digite a quantidade de elementos: ");
    scanf("%d", &n);

    vetor = (int*) malloc(n * sizeof(int));
    if (!vetor) {
        printf("Erro na alocação de memória!\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Novo tamanho do vetor: ");
    scanf("%d", &n1);

    if (n1 > n) {
        for (i = n; i < n1; i++) {
            printf("Novo elemento %d: ", i + 1);
            scanf("%d", &vetor[i]);
        }
    }
    
     for (i = 0; i < n1; i++) {
        printf(" %d ", vetor[i]);
	}
	return 0;
	*/	
/*atividade 3
    int i, n, par = 0, impar = 0;
    int *vetor;

    printf("Digite a quantidade de elementos: ");
    scanf("%d", &n);

    vetor = (int*) malloc(n * sizeof(int));
    if (!vetor) {
        printf("Erro na alocação de memória!\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
        if (vetor[i] % 2 == 0) {
            par++;
        } else {
            impar++;
        }
    }

    printf("\nTotal de números pares: %d\n", par);
    printf("Total de números ímpares: %d\n", impar);

    free(vetor);
    return 0;
    */ 
/*atividade 4
    int tamanho, i, j = 0;
    
    printf("Digite o tamanho da string: ");
    scanf("%d", &tamanho);
    getchar();

    char string[tamanho + 1], semVogais[tamanho + 1];

    printf("Digite a string: ");
    fgets(string, tamanho + 1, stdin);

    for (i = 0; string[i] != '\0'; i++) {
        if (string[i] == '\n')
            string[i] = '\0';
    }

    for (i = 0; string[i] != '\0'; i++) {
        char c = string[i];
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' &&
            c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U') {
            semVogais[j++] = c;
        }
    }
    semVogais[j] = '\0';

    printf("String sem vogais: %s\n", semVogais);

    return 0;
    */
/*atividade 5
	int i, n, m, multiplo = 0;
	int *vetor;
	
	printf("Digite o numero de elementos: ");
	scanf("%d", &n);
	
	vetor = (int*) malloc(n * sizeof(int));
	
	if( vetor == NULL){
		printf("Erro na alocação de memoria");
		return 1;
	}
	
	for (i = 0; i < n; i++){
		printf("Digite o %d elemento: ", i + 1);
		scanf("%d", &vetor[i]);
		
	}
	
	for (i = 0; i < n; i++){
		printf("%d", vetor[i]);
	}
	printf("\n");
	
	printf("Informe o numero para verificar os multiplos: ");
	scanf("%d", &m);
	
	for (i = 0; i < n; i++){
		if (vetor[i] % m == 0 ){
			printf("Este elemento e multiplo: %d \n", vetor[i]);
			multiplo++;
		
		}
	}
	printf("Numero de multiplos: %d", multiplo);
	
	free(vetor);
*/
/*atividade 6
	int i,p,c, b;
	
	int *vetor;
	
	for(i = 0; i < 1; i++){
	printf("Digite o numero de bytes desejados: ");
	scanf("%d", &b);
		if( b  % 4 != 0 ){
			printf("Digite um numero multiplo de 4 \n");
			i--;
		}
	}
	
	
	
	vetor = (int*) malloc(b);
	if (!vetor){
		printf("Erro na alocação de memoria");
		return 1;
	}
	
	for(i = 0; i < 1; i++){
		printf("-------------------------------------------------\n");
		printf("Se deseja inserir um valor no array digite: 1 \n");
		printf("Se consultar um valor no array digite: 2 \n");
		printf("Digite 3 para sair: ");
		scanf("%d", &c);
		if (c > 3){
			printf("Digite um numero valido");
			i--;
		}
		if (c == 1){
			printf("Digite a posicao e o valor: ");
			scanf("%d", &p);
			scanf("%d", &vetor[p]);
			i--;
		}
		if (c == 2){
			printf("Digite a posicao do elemento a ser consultado: ");
			scanf("%d", &p);
			printf("O elemento na posicao %d tem o valor:  %d \n ",p , vetor[p]);
			i--;
		}
		if( c == 3){
			printf("Saindo do programa...");
			return 1;
		}
	}	
	free(vetor);
	*/
/*atividade 7
    int sorteados[6], bilhete[6], i, j, acertos = 0;

    printf("Digite os 6 números sorteados:\n");
    for (i = 0; i < 6; i++) {
        scanf("%d", &sorteados[i]);
    }

    printf("Digite os 6 números do seu bilhete:\n");
    for (i = 0; i < 6; i++) {
        scanf("%d", &bilhete[i]);
    }

    int *corretos = (int*) malloc(6 * sizeof(int));

    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            if (bilhete[i] == sorteados[j]) {
                corretos[acertos] = bilhete[i];
                acertos++;
                break;
            }
        }
    }

    corretos = realloc(corretos, acertos * sizeof(int));

    printf("\nNúmeros sorteados: ");
    for (i = 0; i < 6; i++) {
        printf("%d ", sorteados[i]);
    }

    printf("\nNúmeros corretos (%d): ", acertos);
    for (i = 0; i < acertos; i++) {
        printf("%d ", corretos[i]);
    }

    printf("\n");

    free(corretos);
    return 0;
}
	*/
/*atividade 8
	int i;
	
	int *vetor;
	
	vetor = (int*) calloc(1500, sizeof(int));
	
	for ( i = 0; i < 1500; i++){
		if (vetor[i] != 0){
			printf("Esta memoria não iniciou corretamente");
			return 1;
		}
	}
	
	for ( i = 0; i < 1500; i++){
		vetor[i] = i;
	}
	
	for (i = 0; i < 10; i++){
		printf(" | %d | \n", vetor[i]);
		
	}
	for (i = 1490; i < 1500; i++){
		printf(" | %d | \n", vetor[i]);
		
	}
	free (vetor);
	return 0;
*/
/*atividade 9

    int *vetor = NULL;
    
    int numero, tamanho = 0, i;

    while (1) {
        printf("Digite um número (negativo para parar): ");
        scanf("%d", &numero);

        if (numero < 0) {
            break;
        }

        vetor = (int*) realloc(vetor, (tamanho + 1) * sizeof(int));
        if (!vetor) {
            printf("Erro na alocação de memória!\n");
            return 1;
        }

        vetor[tamanho] = numero;
        tamanho++;
    }

    printf("\nNúmeros digitados:\n");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    free(vetor);
    return 0;
    */    
/*atividade 10
    int i, tamanho;
    double *vetor;

    srand(time(NULL));

    for(i = 0; i < 1; i++) {
        printf("Quantos valores deseja armazenar? ");
        scanf("%d", &tamanho);

        if (tamanho < 10) {
            printf("Por favor informe um valor maior ou igual a 10.\n");
            i--;
            tamanho = 0;
        }
    }

    vetor = (double*) malloc(tamanho * sizeof(double));
    if (!vetor) {
        printf("Erro na alocação de memória!\n");
        return 1;
    }

    for (i = 0; i < 10; i++) {
        vetor[i] = (double)(rand() % 101);
    }

    printf("Os 10 primeiros valores sao: \n");
    for(i = 0; i < 10; i++) {
        printf(" | %.2lf | \n", vetor[i]);
    }

    free(vetor);
    return 0;
    */  
/*atividade 11
	int i, n;
	
	registro *r;
		
	printf("Informe o numero de alunos: ");
	scanf("%d", &n);
	getchar();
	
	r = (registro*) malloc(n * sizeof(registro));
	
	if( r == NULL){
		printf("Erro na alocacao de memoria!");
		return 1;
	}

	for (i = 0; i < n; i++){
		printf("Digite o sobre-nome do aluno %d:  ", i + 1);
		fgets(r[i].sobrenome,49,stdin);
		
	size_t len = strlen(r[i].sobrenome);
    if (len > 0 && r[i].sobrenome[len - 1] == '\n') {
        r[i].sobrenome[len - 1] = '\0';
        }
	
		printf("Digite a data de nascimento do %d aluno: ", i + 1);
		scanf("%d", &r[i].nascimento);
		getchar();	
		
		printf("Digite a matricula do %d aluno :", i + 1);
		scanf("%d", &r[i].matricula);
		getchar();
	}
	printf("\n=== Lista de Alunos ===\n");
	for(i = 0; i < n; i++){
		printf("Nome do %d aluno: %s \n",i + 1, r[i].sobrenome);
		printf("Ano de nascimento do %d aluno: %d \n",i + 1, r[i].nascimento);
		printf("Matricula do %d aluno: %d \n",i + 1, r[i].matricula);
		printf("===================================\n");
	}
	
	free(r);
	
	return 0;
*/
/*atividade 12
	typedef struct {
   		int id;
    	char nome[50];
    	int quant;
    	float valor;
	} produto;
	
	int i, n, IndiceMaiorValor = 0, IndiceMaiorQuant = 0;
    produto *c;

    printf("Informe a quantidade de produtos a cadastrar: ");
    scanf("%d", &n);
    getchar();

    c = (produto*) malloc(n * sizeof(produto));
    if (c == NULL) {
        printf("Erro na alocação de memória.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("Informe o id do %d produto: ", i + 1);
        scanf("%d", &c[i].id);
        getchar();

        printf("Informe o nome do %d produto: ", i + 1);
        fgets(c[i].nome, 50, stdin);
        size_t len = strlen(c[i].nome);
        if (len > 0 && c[i].nome[len - 1] == '\n') {
            c[i].nome[len - 1] = '\0';
        }

        printf("Informe a quantidade disponivel do %d produto: ", i + 1);
        scanf("%d", &c[i].quant);

        printf("Informe o preco da venda do %d produto: ", i + 1);
        scanf("%f", &c[i].valor);
        printf("=========================================\n");
        getchar();

        if (c[i].valor > c[IndiceMaiorValor].valor) {
            IndiceMaiorValor = i;
        }
        if (c[i].quant > c[IndiceMaiorQuant].quant) {
            IndiceMaiorQuant = i;
        }
    }

    printf("\nProduto com maior preco: %s (R$ %.2f)\n", c[IndiceMaiorValor].nome, c[IndiceMaiorValor].valor);
    printf("Produto com maior quantidade: %s (%d unidades)\n", c[IndiceMaiorQuant].nome, c[IndiceMaiorQuant].quant);

    free(c);
    return 0;
*/
/*atividade 13
	int i, j, l, c, v;
	
	int **matriz;
	
	printf("Informe o numero de linhas e colunas que deseja usar: ");
	scanf("%d", &l);
	scanf("%d", &c);
	
	matriz = (int**) malloc(l * sizeof(int*));
	if( matriz == NULL){
		printf("Erro na alocacao de memoria.");
		return 1;
		
	}
	for( i = 0; i < l; i ++){
		matriz[i] = (int*) malloc( c * sizeof(int));
		if( matriz[i] == NULL){
			printf("Erro na alocacao de memoria.");
			return 1;
		}
	}
	
	for(i = 0; i < l; i++){
		for (j = 0; j < c; j++){
			printf("Digite o valor para matriz[%d][%d]: ", i + 1, j + 1);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	for(i = 0; i < l; i++){
		for (j = 0; j < c; j++){
			printf("%d\t",matriz[i][j]);
		}
		printf("\n");
	}
	
	printf("Informe um valor para verificar na matriz: ");
	scanf("%d", &v);
	
	verificar(matriz,l,c,v);
	
	
	for (i = 0; i < l; i++){
		free(matriz[i]);
	}
	free(matriz);
	return 0;
*/
/*atividade 14
	int  i, j, l, c;
	float **matriz;
	
	printf("Informe o numero de linhas e colunas da matriz: \n");
	scanf(" %d",&l);
	scanf(" %d", &c);
	
	matriz = (float**) malloc(l * sizeof(float*));
	if (matriz == NULL){
		printf("Erro na alocacao de memoria");
		return 1;
	}
	
	for(i = 0; i < l; i++){
		matriz[i] = (float*) malloc(c * sizeof(float));
		if(matriz[i] == NULL){
			printf("Erro na alocacao de memoria");
			return 1;
		}
	}
	
	for (i = 0; i < l; i++){
		for(j = 0; j < c; j++){
			printf("Informe o elemento [%d][%d]", i + 1, j + 1);
			scanf("%f", &matriz[i][j]);
		}
	}
	for (i = 0; i < l; i++){
		for(j = 0; j < c; j++){
			printf("%.2f\t", matriz[i][j]);
			
		}
		printf("\n");
	}
	
	for (i = 0; i < l; i++){
		free(matriz[i]);
	}
	free(matriz);
	
	
	return 0;
	*/
/*atividade 15
	int  i, j, n, m;
	
	int m1 = 0, m2 = 0, m3 = 0;
	
	int **matriz;
	
	printf("Informe o numero de linhas e colunas da matriz: \n");
	scanf(" %d",&n);
	scanf(" %d", &m);
	
	matriz = (int**) malloc(n * sizeof(int*));
	if (matriz == NULL){
		printf("Erro na alocacao de memoria");
		return 1;
	}
	
	for(i = 0; i < n; i++){
		matriz[i] = (int*) malloc(m * sizeof(int));
		if(matriz[i] == NULL){
			printf("Erro na alocacao de memoria");
			return 1;
		}
	}
	
	for (i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			printf("Informe o elemento [%d][%d]: ", i + 1, j + 1);
			scanf("%d", &matriz[i][j]);
			
			
			if(matriz[i][j] > m1){
				m3 = m2;
				
				m2 = m1;
				
				m1 = matriz[i][j];
			}else if(matriz[i][j] > m2){
				m3 = m2;
				m2 = matriz[i][j];
			}else if(matriz[i][j] > m3){
				m3 = matriz[i][j];
			}
		}
	}
	for (i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			printf("%d\t", matriz[i][j]);
			
		}
		printf("\n");
	}
	printf(" === Maiores numeros === \n");
	printf(" | %d | ", m1);
	printf(" | %d | ", m2);
	printf(" | %d | ", m3);
	
	for (i = 0; i < n; i++){
		free(matriz[i]);
	}
	free(matriz);
	return 0;
	*/
/*atividade 16
	int i, j, n, m;
	
	int **matriz, **transposta;
	
	printf("Informe o numero de linhas e colunas da matriz: ");
	scanf("%d", &n);
	scanf("%d", &m);
	
	matriz = (int**) malloc(n * sizeof(int*));
	if(matriz == NULL){
		printf("Erro na memoria");
		return 1;
	}
	
	for (i = 0; i < n; i++){
		matriz[i] = (int*) malloc(m * sizeof(int));
		if(matriz[i] == NULL){
			printf("Erro na memoria");
			return 1;
		}
	}
	transposta = (int**) malloc(n * sizeof(int*));
	if(transposta == NULL){
		printf("Erro na memoria");
		return 1;
	}
	for (i = 0; i < n; i++){
		transposta[i] = (int*) malloc(m * sizeof(int));
		if(transposta[i] == NULL){
			printf("Erro na memoria");
			return 1;
		}
	}
	
	for (i = 0; i < n; i++){
		transposta[i] = (int*) malloc(m * sizeof(int));
		if(transposta[i] == NULL){
			printf("Erro na memoria");
			return 1;
		}
	}
	
	for( i = 0; i < n; i++){
		for (j = 0; j < m; j++){
			printf("Informe o elemento [%d][%d]:", i + 1, j + 1 );
			scanf("%d", &matriz[i][j]);
			transposta [j][i] = matriz[i][j];
		
		}
	}
	printf("=== Exibindo matriz === \n");
	for( i = 0; i < n; i++){
		for (j = 0; j < m; j++){
			printf("%d\t", matriz[i][j]);
			
		}
		printf("\n");
	}
	printf(" === Exibindo matriz transposta === \n");
	for( i = 0; i < n; i++){
		for (j = 0; j < m; j++){
			printf("%d\t", transposta[i][j]);
			
		}
		printf("\n");
	}
	for (i = 0; i < n; i++){
		free(matriz[i]);
	}
	free(matriz);
	
	for (i = 0; i < n; i++){
		free(transposta[i]);
	}
	free(transposta);
	return 0;
 */	
/*atividade 17
	int i, num;
	
	int tamanho = 10;
	
	int quantidade = 0;
	
	int *vetor;
	
	vetor = (int*) malloc(tamanho * sizeof(int));
	if( vetor == NULL){
		printf("Erro na memoria");
		return 1;
		
	}
	
	while (1){
		printf("Digite um numero (0 para sair): ");
		scanf("%d", &num);
		
		if (num == 0){
			break;
		}
		
		if (quantidade == tamanho){
			int novo_tamanho = tamanho + 10;
			int *novo_vetor = (int*) malloc(novo_tamanho * sizeof(int));
			if (novo_vetor == NULL){
				printf("Erro na memoria");
				return 1;
			}
		
			for (i = 0; i < quantidade; i++){
				novo_vetor[i] = vetor[i];
			}
			free(vetor);
			vetor = novo_vetor;
			tamanho = novo_tamanho;
		
		}
		vetor[quantidade] = num;
		quantidade++;
	}
	printf("\n Numeros digitados: \n");
	for (i = 0; i < quantidade; i++){
		printf("\n |   %d   | \n", vetor[i]);
		
	}
	printf("\n");
	
	free(vetor);
	return 0;
	*/
/*atividade 18
	int i;
    
    int *vetor = (int*) malloc(256 * sizeof(int));
    
    if (vetor == NULL) {
        printf("Erro na alocação do vetor.\n");
        return 1;
    }
    
    int **matriz = (int**) malloc(10 * sizeof(int*));
    if (matriz == NULL) {
        printf("Erro na alocação da matriz.\n");
        free(vetor);
        return 1;
    }
    
    for (i = 0; i < 10; i++) {
        matriz[i] = (int*) malloc(10 * sizeof(int));
        if (matriz[i] == NULL) {
            printf("Erro na alocação da matriz.\n");
            for (int j = 0; j < i; j++) {
                free(matriz[j]);
            }
            free(matriz);
            free(vetor);
            return 1;
        }
    }
    
    registro *r = (registro*) malloc(50 * sizeof(registro));
    if (r == NULL) {
        printf("Erro na alocação dos registros.\n");
        for (i = 0; i < 10; i++) {
            free(matriz[i]);
        }
        free(matriz);
        free(vetor);
        return 1;
    }

    char **texto = (char**) malloc(100 * sizeof(char*));
    if (texto == NULL) {
        printf("Erro na alocação do texto.\n");
        free(r);
        for (i = 0; i < 10; i++) {
            free(matriz[i]);
        }
        free(matriz);
        free(vetor);
        return 1;
    }

    for (i = 0; i < 100; i++) {
        texto[i] = (char*) malloc(80 * sizeof(char));
        if (texto[i] == NULL) {
            printf("Erro na alocação da linha de texto %d.\n", i + 1);
            for (int j = 0; j < i; j++) {
                free(texto[j]);
            }
            free(texto);
            free(r);
            for (int j = 0; j < 10; j++) {
                free(matriz[j]);
            }
            free(matriz);
            free(vetor);
            return 1;
        }
    }
    return 0;
    */
/*atividade 19
#define MAX_NOMES 100  
#define MAX_CHAR 31     
    char matriz[MAX_NOMES][MAX_CHAR] = {0};  // Inicializa a matriz com strings vazias
    int opcao, linha, linhaEncontrada;
    char nome[MAX_CHAR], nomeNovo[MAX_CHAR];
    
    do {
        printf("\nEscolha uma opção:\n");
        printf("1. Gravar um nome\n");
        printf("2. Apagar um nome\n");
        printf("3. Substituir um nome\n");
        printf("4. Apagar um nome (buscando)\n");
        printf("5. Recuperar nome\n");
        printf("0. Sair\n");
        scanf("%d", &opcao);
        
        switch (opcao) {
            case 1:
                printf("Informe a linha (0 a %d): ", MAX_NOMES - 1);
                scanf("%d", &linha);
                printf("Informe o nome (máximo 30 caracteres): ");
                scanf(" %30[^\n]", nome);  // Lê o nome com espaços
                strcpy(matriz[linha], nome);  // Grava o nome na linha especificada
                break;

            case 2:
                printf("Informe a linha para apagar o nome (0 a %d): ", MAX_NOMES - 1);
                scanf("%d", &linha);
                matriz[linha][0] = '\0';  // Apaga o nome, colocando '\0' na primeira posição
                printf("Nome apagado.\n");
                break;

            case 3:
                printf("Informe o nome antigo: ");
                scanf(" %30[^\n]", nome);
                printf("Informe o nome novo: ");
                scanf(" %30[^\n]", nomeNovo);
                
                // Procura o nome antigo e substitui se encontrado
                linhaEncontrada = -1;
                for (int i = 0; i < MAX_NOMES; i++) {
                    if (strcmp(matriz[i], nome) == 0) {
                        linhaEncontrada = i;
                        break;
                    }
                }
                if (linhaEncontrada != -1) {
                    strcpy(matriz[linhaEncontrada], nomeNovo);
                    printf("Nome substituído.\n");
                } else {
                    printf("Nome não encontrado!\n");
                }
                break;

            case 4:
                printf("Informe o nome para apagar: ");
                scanf(" %30[^\n]", nome);
                
                // Procura o nome e apaga se encontrado
                linhaEncontrada = -1;
                for (int i = 0; i < MAX_NOMES; i++) {
                    if (strcmp(matriz[i], nome) == 0) {
                        linhaEncontrada = i;
                        break;
                    }
                }
                if (linhaEncontrada != -1) {
                    matriz[linhaEncontrada][0] = '\0';  // Apaga o nome
                    printf("Nome apagado.\n");
                } else {
                    printf("Nome não encontrado!\n");
                }
                break;

            case 5:
                printf("Informe a linha para recuperar o nome (0 a %d): ", MAX_NOMES - 1);
                scanf("%d", &linha);
                if (matriz[linha][0] != '\0') {
                    printf("Nome na linha %d: %s\n", linha, matriz[linha]);
                } else {
                    printf("Linha vazia!\n");
                }
                break;

            case 0:
                printf("Saindo do programa...\n");
                break;

            default:
                printf("Opção inválida!\n");
        }
    } while (opcao != 0);

    return 0;
*/
/*atividade 20
#include <stdio.h>
#include <math.h>
#define MAX_CIDADES 100
    int N, cidade1, cidade2;
    double distancias[MAX_CIDADES][MAX_CIDADES];
    char nomes[MAX_CIDADES][50];
    int coordenadasX[MAX_CIDADES], coordenadasY[MAX_CIDADES];

    printf("Informe o número de cidades: ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        printf("\nCidade %d:\n", i + 1);
        printf("Nome: ");
        scanf(" %49[^\n]", nomes[i]);
        printf("Coordenada X: ");
        scanf("%d", &coordenadasX[i]);
        printf("Coordenada Y: ");
        scanf("%d", &coordenadasY[i]);
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            distancias[i][j] = sqrt(pow(coordenadasX[j] - coordenadasX[i], 2) + pow(coordenadasY[j] - coordenadasY[i], 2));
        }
    }

    printf("\nMatriz de distâncias:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%.2f ", distancias[i][j]);
        }
        printf("\n");
    }

    while (1) {
        printf("\nInforme o número de duas cidades (1 a %d) para consultar a distância (ou 0 para sair):\n", N);
        printf("Cidade 1: ");
        scanf("%d", &cidade1);
        if (cidade1 == 0) break;
        printf("Cidade 2: ");
        scanf("%d", &cidade2);

        if (cidade1 >= 1 && cidade1 <= N && cidade2 >= 1 && cidade2 <= N) {
            printf("Distância entre %s e %s: %.2f\n", nomes[cidade1 - 1], nomes[cidade2 - 1], distancias[cidade1 - 1][cidade2 - 1]);
        } else {
            printf("Cidades inválidas. Tente novamente.\n");
        }
    }

    printf("Programa encerrado.\n");
    return 0;
}
*/
/*atividade 21
    int a, b, c, d;

    printf("Digite as dimensões das matrizes (a, b, c, d): ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (b != c) {
        printf("Não é possível multiplicar as matrizes.\n");
        return 0;
    }

    int matriz1[a][b], matriz2[c][d], produto[a][d];

    printf("\nDigite os elementos da primeira matriz %dx%d:\n", a, b);
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("\nDigite os elementos da segunda matriz %dx%d:\n", c, d);
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < d; j++) {
            scanf("%d", &matriz2[i][j]);
        }
    }

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < d; j++) {
            produto[i][j] = 0;
            for (int k = 0; k < b; k++) {
                produto[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    printf("\nPrimeira matriz %dx%d:\n", a, b);
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf("%d ", matriz1[i][j]);
        }
        printf("\n");
    }

    printf("\nSegunda matriz %dx%d:\n", c, d);
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < d; j++) {
            printf("%d ", matriz2[i][j]);
        }
        printf("\n");
    }

    printf("\nProduto das matrizes %dx%d:\n", a, d);
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < d; j++) {
            printf("%d ", produto[i][j]);
        }
        printf("\n");
    }

    return 0;
}
*/
}



