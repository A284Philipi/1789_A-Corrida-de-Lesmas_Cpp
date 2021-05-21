#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int cont = 0, casos, numero, resultado, valor;
    while (cin >> casos){
        resultado = 0;
        cont = 0;
        while (cont < casos){
            cin >> numero;
            if (numero > 19){
                valor = 3;
            }else{
                if (numero > 9){
                    valor = 2;
                }else{
                    valor = 1;
                }
            }
            if (valor > resultado){
                resultado = valor;
            }
            cont++;
        }
        cout << resultado <<endl;
    }
    return 0;
}
