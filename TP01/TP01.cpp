// TP01.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Calculando a media aritmetica de um aluno\n";

    string nome = "";
    double nota1 = 0;
    double nota2 = 0;
   
    cout << "Digite o nome do aluno\n";
    cin >> nome;
    cout << "Digite a primeira nota do aluno: ";
    cin >> nota1;
    cout << "Digite a segunda nota do aluno: ";
    cin >> nota2;
    double media = (nota1 + nota2) / 2;
    cout << "A media do aluno e de: " << media << endl;
      if (media >= 6) {
        cout << "Parabens, aluno aprovado";
    }
    else {
        cout << "Aluno reprovado";
    }
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
