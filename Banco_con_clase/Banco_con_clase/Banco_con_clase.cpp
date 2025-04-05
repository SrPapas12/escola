#include <iostream>

using namespace std;

class Banco {
private:
    float saldo;

public:
    Banco(float saldoInicial) : saldo(saldoInicial) {}

    void mostrarMenu() {
        cout << "Bienvenido de vuelta, que operacion desea realizar." << endl;
        cout << "1. Consultar saldo." << endl;
        cout << "2. Depositar." << endl;
        cout << "3. Retirar saldo." << endl;
        cout << "4. Salir." << endl;
        cout << "Elige una opcion: " << endl;
    }

    void consultarSaldo() {
        cout << "Tu saldo es de: " << saldo << endl;
    }

    void depositar() {
        float deposito;
        cout << "Cuanto dinero quieres depositar? " << endl;
        cin >> deposito;
        saldo += deposito;
        cout << "Tu saldo ha sido actualizado: " << saldo << endl;
    }

    void retirar() {
        float retiro;
        cout << "Cuanto dinero quieres retirar? " << endl;
        cin >> retiro;
        if (retiro > saldo) {
            cout << "Saldo insuficiente." << endl;
        }
        else {
            saldo -= retiro;
            cout << "Tu saldo ha sido actualizado: " << saldo << endl;
        }
    }

    void ejecutarOperacion(int opcion) {
        switch (opcion) {
        case 1:
            consultarSaldo();
            break;
        case 2:
            depositar();
            break;
        case 3:
            retirar();
            break;
        case 4:
            cout << "Saliendo..." << endl;
            break;
        default:
            cout << "Opcion no valida." << endl;
        }
    }
};

int main() {
    Banco cuenta(500); // Inicializa la cuenta con un saldo de 500
    int opcion;

    do {
        cuenta.mostrarMenu();
        cin >> opcion;
        cuenta.ejecutarOperacion(opcion);
    } while (opcion != 4);

    return 0;
}
