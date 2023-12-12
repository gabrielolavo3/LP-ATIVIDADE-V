#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

// Declaração de constante, funções e struct

void titulo ( ) {
    system ("cls || clear");
    printf ("CENTRO DE DISTRIBUIÇÃO LOG_SPEED! Aquisição de Materiais e Consulta de Estoque\n\n");
}

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis comuns e de acesso

  int opcao, a = 0, b = 0, c = 0;
  char nome[250][250], busca_Produto;
  int quantidade[250];
  float quantia, retirada,  quant_Atual = 0;
  float preco_do_produto[250];
  char codigo_do_produto[250][250];
  
// Solicitando dados

    do {
    titulo ( );
        printf ("Código | Descrição\n");
        printf ("   1   | Cadastrar produto\n");
        printf ("   2   | Listar produto\n");
        printf ("   3   | Adicionar localização do produto\n");
        printf ("   4   | Saída de mercadoria\n");
        printf ("   5   | Sair do algoritmo\n\n");
        printf ("Selecione a opção desejada: ");
        scanf ("%d", &opcao);

        switch (opcao) {
        case 1:
            setbuf (stdin, 0);
            printf ("\nDigite o nome do %dº produto: ", a+1);
            gets (nome[a]);
            printf ("Digite o código do produto: ");
            gets (codigo_do_produto[a]);
            printf ("Digite a quantidade adquirida: ");
            scanf ("%d", &quantidade[a]);
            printf ("Digite o preço unitário: ");
            scanf ("%f", &preco_do_produto[a]);
            quantia = quantia + quantidade[a] * preco_do_produto[a];
            a++;
            break;

// Tela de resultado

        case 2:
        titulo ( );
          for (b = 0; b < a; b++) {
             printf ("Nome do %dº produto: %s\n", b+1, nome[b]);
             printf ("Código do produto: %s\n", codigo_do_produto[b]);
             printf ("Quantidade do produto: %d\n", quantidade[b]);
            printf ("\n");
          }
             printf ("Preço total: R$ %.2f\n\n", quantia);      
            break; 

        default:
            printf ("\nOpção Inválida! Por favor, selecione uma das opções disponíveis\n\n");
            break;
        }

    } while (opcao != 2);

    return 0;
}
