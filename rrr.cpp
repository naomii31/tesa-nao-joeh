#include <iostream>
#include <string>
using namespace std;

bool iniciarSesion(string usuario, string password) {
    if (usuario == "admin" && password == "1234") {
        return true;
    }

    return false;
}

int main() {
    string usuario;
    string password;

    cout << "Usuario: ";
    cin >> usuario;

    cout << "Contraseña: ";
    cin >> password;

    if (iniciarSesion(usuario, password)) {
        cout << "Inicio de sesión exitoso." << endl;
    } else {
        cout << "Usuario o contraseña incorrectos." << endl;
    }

    return 0;
}

