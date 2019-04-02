#include <bits/stdc++.h>

using namespace std;

int main(){
    //Compilar código: g++ -o prog -std=c++11 -02 -Wall codigo.cpp

    // Leitura e escrita c++
    int a;
    float b;
    double c;
    char d;
    string e;

    cin >> a >> b >> c >> d >> e;
    cout << a << b << c << d << e << "\n";

    // Leitura e escrita c
    int a;
    float b;
    double c;
    char d;
    char e[100];

    scanf("%d %f %lf %c %s", &a, &b, &c, &d, e);
    printf("%d %f %lf %c %s\n", a, b, c, d, e);

    // Leitura de um telfone: +55 (61) 91234-5678
    int pais,estado, telefone1, telefone2;
    scanf("+%d (%d) %d-%d", &pais, &estado, &telefone1, &telefone2);

    // Leitura de um CPF: 000.000.000-42
    int d1,d2,d3,d4;
    scanf("%d.%d.%d-%d", &d1, &d2, &d3, &d4);

    // Leitura de preço: R$ 29.99
    scanf("R$ %d.%d", &reais, &centavos);

    // Leitura de todas as letras minúsculas até uma que não seja
    // Exemplo: abcdefgh   --> ele vai ler abcde
    scanf("%[a-z]", &letras);

    // Leitura de qualquer coisa EXCETO as letras minúsculas
    // Exemplo: 123 FGH ##$$abcdeFgh   --> ele vai ler 123 FGH ##$$
    scanf("%[^a-z]", &letras);

    // Leitura das 4 primeiras letras maiúsculas
    // Exemplo: ABCDEFG --> ele vai ler ABCD
    scanf("%4[A-Z]", &abreviatura);


    return 0;
}