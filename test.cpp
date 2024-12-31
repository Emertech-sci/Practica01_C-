#include <iostream>
#include <iomanip>



int main()
{
    std::cout << "P R A C T I C A  1.\n";

    std::cout << "Calcula el precio total de los articulos según el precio uinitario\n";

    int num_articulos = 25;
    float precio_unitario = 15.49;
    float precio_total = num_articulos * precio_unitario;

    std::cout << "Numero de articulos: " << num_articulos << "\n";
    std::cout << "Precio unitario " << precio_unitario << "\n";
    std::cout << "El precio total es: " << precio_total << "\n\n";

    std::cout << "Calcula el precio con IVA incluido de los articulos previamente calculados.\n";

    const float IVA = 0.16;
    float precioDeIva = precio_total * IVA;
    float precioFinalIVA = precio_total + precioDeIva;

    std::cout << "El precio final con IVA incluido es: " << precioFinalIVA << "\n\n";

    std::cout << "Define constantes o variables para representar los siguientes datos:\n\n";
    std::cout << "El numero de lados de una figura geometrica\n";
    float numLados = 1234;
    std::cout << numLados << "\n";

    std::cout << "¿Eres menor de edad?\n";
    bool edad = true;
    std::cout << edad << "\n";

    std::cout << "El numero 34567.236789\n";
    double num1 =  34567.236789;
    std::cout << std::fixed << std::setprecision(6) << num1 << "\n";

    std::cout << "El simbolo $\n";
    char signo = '$';
    std::cout << signo << "\n";

    std::cout << "El numero 14506783914\n";
    long num2 = 14506783914;
    std::cout << num2 << "\n";

    std::cout << "El area de un cuadrdo con a lo mas lados de 100 unidades\n";
    int lado1 = 43;
    int lado2 = 12;
    int area = lado1 * lado2;
    std::cout << area << "\n";

    std::cout << "El valor de PI\n";
    const float PI = 3.14159;
    std::cout << PI << "\n";

    return 0;

}