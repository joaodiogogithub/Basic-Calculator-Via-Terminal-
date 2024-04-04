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

        cout << "Choose the calculation you want to perform:\n"<< endl;

        cout << "1- Addition\n2- Subtraction\n3- Multiplication\n4- Division\n5- Previous results\n6- Exit"<< endl;
        
        cin >> choose;

        switch(choose){
            case 1:
                system("clear");

                cout << "Enter the first value: "<< endl;
                cin >> a;
                cout << "Enter the second value: "<< endl;
                cin >> b;

                c = a + b;

                handler[i] = c;

                cout << "The result of the sum is: " << c << endl;

                system("sleep 2");

                break;
            
            case 2:
                system("clear");

                cout << "Enter the first value: "<< endl;
                cin >> a;
                cout << "Enter the second value: "<< endl;
                cin >> b;

                c = a - b;

                handler[i] = c;

                cout << "The result of the subtraction is: " << c << endl;

                system("sleep 2");

                break;
            
            case 3:
                system("clear");

                cout << "Enter the first value: "<< endl;
                cin >> a;
                cout << "Enter the second value: "<< endl;
                cin >> b;

                c = a * b;

                handler[i] = c;

                cout << "The result of the multiplication is: " << c << endl;

                system("sleep 2");
                break;
            
            case 4:
                system("clear");

                cout << "Enter the first value: "<< endl;
                cin >> a;
                cout << "Enter the second value: "<< endl;
                cin >> b;

                c = a / b;

                handler[i] = c;

                cout << "The result of the division: " << c << endl;

                system("sleep 2");

                break;
            
            case 5:
                system("clear");

                cout << "Previous results: " << endl;

                for(int j = 0; j < i; j++){
                    cout << "Result " << j+1 << ": " << handler[j] << endl;
                }

                system("sleep 5");

                break;

            case 6:
                loop = false;
                break;

            default:
                cout << "\nInvalid option" << endl;

                system("sleep 2");

                break;
        }

        i++;
    }
    
    cout << "\nThank you for using the program" << endl;

    return 0;
}