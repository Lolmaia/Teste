#include <iostream>

using namespace std;

int main() {
    // Defina um número fixo
    int user_input = 21; // Exemplo de número a ser verificado
    const int max_size = 50; // Tamanho máximo do array
    int fib_seq[max_size]; // Array para armazenar a sequência de Fibonacci
    fib_seq[0] = 0; // Primeiro número
    fib_seq[1] = 1; // Segundo número

    // Gera a sequência de Fibonacci
    for (int i = 2; i < max_size; i++) {
        fib_seq[i] = fib_seq[i - 1] + fib_seq[i - 2];
    }

    // Verifica se o número pertence à sequência de Fibonacci
    bool found = false;
    for (int i = 0; i < max_size; i++) {
        if (fib_seq[i] == user_input) {
            found = true;
            break;
        }
        if (fib_seq[i] > user_input) {
            break; // Para se o número já excedeu
        }
    }

    // Imprime o resultado
    if (found) {
        cout << "O número " << user_input << " pertence à sequência de Fibonacci." << endl;
    } else {
        cout << "O número " << user_input << " não pertence à sequência de Fibonacci." << endl;
    }

    return 0;
}
