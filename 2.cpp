#include <iostream>
#include <string>

using namespace std;

int main() {
    string texto;

    // Solicita ao usuário que insira um texto
    cout << "Insira um texto: ";
    getline(cin, texto); // Lê a linha inteira

    // Variáveis para contar ocorrências
    int contador = 0;

    // Verifica a existência da letra 'a' e 'A'
    for (char letra : texto) {
        if (letra == 'a' || letra == 'A') {
            contador++; // Incrementa o contador se encontrar 'a' ou 'A'
        }
    }

    // Imprime o resultado
    if (contador > 0) {
        cout << "A letra 'a' (maiúscula e minúscula) aparece " << contador << " vezes." << endl;
    } else {
        cout << "A letra 'a' (maiúscula e minúscula) não aparece no texto." << endl;
    }

    return 0;
}
