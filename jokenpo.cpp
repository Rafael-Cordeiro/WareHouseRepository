#include <bits/stdc++.h>
#include <time.h>

#define PEDRA 0
#define PAPEL 1
#define TESOURA 2

using namespace std;
int main() {
    bool playAgain = false;
    
    do {
        srand(time(NULL));
        int machineAttempt = rand() % 3;
        int yourAttempt;
        bool wrongOption;

        do {
            wrongOption = false;
            cout
                << "Escolha:\n"
                << "0: Pedra\n"
                << "1: Papel\n"
                << "2: Tesoura\n"
                << "\n>_ ";
            cin >> yourAttempt;
            system("clear");
            switch(yourAttempt) {
                case PEDRA:
                    cout << "Você escolheu Pedra | ";
                    switch(machineAttempt) {
                        case PEDRA:
                            cout << "A máquina escolheu Pedra\n\n";
                            cout << "EMPATE\n\n";
                            break;
                        case PAPEL:
                            cout << "A máquina escolheu Papel\n\n";
                            cout << "DERROTA\n\n";
                            break;
                        case TESOURA:
                            cout << "A máquina escolheu Tesoura\n\n";
                            cout << "VITÓRIA\n\n";
                            break;
                    }
                    break;
                case PAPEL:
                    cout << "Você escolheu Papel | ";
                    switch(machineAttempt) {
                        case PEDRA:
                            cout << "A máquina escolheu Pedra\n\n";
                            cout << "VITÓRIA\n\n";
                            break;
                        case PAPEL:
                            cout << "A máquina escolheu Papel\n\n";
                            cout << "EMPATE\n\n";
                            break;
                        case TESOURA:
                            cout << "A máquina escolheu Tesoura\n\n";
                            cout << "DERROTA\n\n";
                            break;
                    }
                    break;
                case TESOURA:
                    cout << "Você escolheu Tesoura | ";
                    switch(machineAttempt) {
                        case PEDRA:
                            cout << "A máquina escolheu Pedra\n\n";
                            cout << "DERROTA\n\n";
                            break;
                        case PAPEL:
                            cout << "A máquina escolheu Papel\n\n";
                            cout << "VITÓRIA\n\n";
                            break;
                        case TESOURA:
                            cout << "A máquina escolheu Tesoura\n\n";
                            cout << "EMPATE\n\n";
                            break;
                    }
                    break;
                default:
                    system("clear");
                    cout << "ERRO: Opção inválida!\n\n";
                    wrongOption = true;
                    break;
            }
        } while(wrongOption);

        cout 
            << "Quer jogar de novo?\n"
            << "0: Não\n"
            << "1: Sim\n"
            << "\n_> ";
        cin >> playAgain;
        system("clear");
    } while(playAgain);

    return 0;
}