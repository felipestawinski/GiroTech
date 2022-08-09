// GiroTech.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <math.h>
using namespace std;

//Função que calcula o capital ao final do período de tempo
float calcularCapital(float capital, int tempo, float taxa_de_juros) {
     
    float capitalFinal = pow((1 + (taxa_de_juros/100)), tempo) * capital;
    return capitalFinal;
}


//Função que exibe o capital, mês a mês
void exibirResultadoMes(float capital, int tempo, float taxa_de_juros)
{
    for (int i = 1; i <= tempo; i++)
    {
        cout<<"Mes "<< i << ":" << calcularCapital(capital, i, taxa_de_juros) << endl;
    }
}

//Função que calcula o total de juros
float taxaDeJurosFinal(float capital, int tempo, float taxa_de_juros)
{
    return calcularCapital(capital, tempo, taxa_de_juros) - capital;
}

//Função que printa as opções na tela para o usuário
void printarOpcoes() {

    cout << "Insira 1 para exibir o valor final do capital investido apos o periodo informado " << endl;
    cout << "Insira 2 para exibir o resultado mes a mes" << endl;
    cout << "Insira 3 para exibir quanto representa a taxa de juros no valor final" << endl;
    cout << "Insira 0 para encerrar o programa" << endl;
}
int main()
{       
      
        //variáveis para a solução do problema
        float capital;
        int tempo;
        float taxa_de_juros;
        int opcao; //variável para capturar a escolha do usuário

        
            
            cout << "Insira o capital" << endl;
            cin >> capital;

            cout << "Insira o tempo" << endl;
            cin >> tempo;

            cout << "Insira a taxa de juros" << endl;
            cin >> taxa_de_juros;

            system("cls");

            do {
            
            printarOpcoes();
            cin >> opcao;

             

                if (opcao == 1)
                {
                    system("cls");
                    cout << "Apos o periodo informado, o valor do capital investido sera de: " << calcularCapital(capital, tempo, taxa_de_juros) << endl;
                    cout << "---------------------------------------------------------------"<<endl;
                }

                else if (opcao == 2)
                {
                    system("cls");
                   exibirResultadoMes(capital, tempo, taxa_de_juros);
                   cout << "---------------------------------------------------------------" << endl;
                }

                else if (opcao == 3)
                {
                    system("cls");
                    cout << "A taxa de juros no valor final foi de:" << taxaDeJurosFinal(capital, tempo, taxa_de_juros) << endl;
                    cout << "---------------------------------------------------------------" << endl;
                }

                else if (opcao == 0)
                {
                    exit(0);
                }

                else {
                    system("cls");
                    cout << "Por favor, insira um valor valido" << endl;
                    
                }

        } while (opcao != 0);
    
}

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
