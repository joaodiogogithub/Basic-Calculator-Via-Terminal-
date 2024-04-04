#include <iostream>
#include <chrono>
#include <string>
#include <thread>

using namespace std;

int main() {

    float a = 0, b = 0, c = 0;

    float handler[99];

    int i = 0;

    int choose = 0;

    bool loop = true;

    while(loop){

        system("clear");

        cout << "Escolha o calculo que deseja fazer:\n"<< endl;

        cout << "1- Soma\n2- Subtracao\n3- Multiplicacao\n4- Divisao\n5- Resultados anteriores\n6- Sair"<< endl;
        
        cin >> choose;

        switch(choose){
            case 1:
                system("clear");

                cout << "Digite o primeiro valor: "<< endl;
                cin >> a;
                cout << "Digite o segundo valor: "<< endl;
                cin >> b;

                c = a + b;

                handler[i] = c;

                cout << "O resultado da soma é: " << c << endl;

                system("sleep 2");

                break;
            
            case 2:
                system("clear");

                cout << "Digite o primeiro valor: "<< endl;
                cin >> a;
                cout << "Digite o segundo valor: "<< endl;
                cin >> b;

                c = a - b;

                handler[i] = c;

                cout << "O resultado da subtracao é: " << c << endl;

                system("sleep 2");

                break;
            
            case 3:
                system("clear");

                cout << "Digite o primeiro valor: "<< endl;
                cin >> a;
                cout << "Digite o segundo valor: "<< endl;
                cin >> b;

                c = a * b;

                handler[i] = c;

                cout << "O resultado da multiplicacao é: " << c << endl;

                system("sleep 2");
                break;
            
            case 4:
                system("clear");

                cout << "Digite o primeiro valor: "<< endl;
                cin >> a;
                cout << "Digite o segundo valor: "<< endl;
                cin >> b;

                c = a / b;

                handler[i] = c;

                cout << "O resultado da divisao é: " << c << endl;

                system("sleep 2");

                break;
            
            case 5:
                system("clear");

                cout << "Resultados anteriores: " << endl;

                for(int j = 0; j < i; j++){
                    cout << "Resultado " << j+1 << ": " << handler[j] << endl;
                }

                system("sleep 5");

                break;

            case 6:
                loop = false;
                break;

            default:
                cout << "\nOpcao invalida" << endl;

                system("sleep 2");

                break;
        }

        i++;
    }
    
    cout << "\nObrigado por usar o programa" << endl;

    return 0;
}