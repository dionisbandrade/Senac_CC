int main() {
    float lado1, lado2, lado3;

    printf("--- Verificador de Triângulo ---\n");

    // Lendo os três números
    printf("Digite o primeiro lado: ");
    scanf("%f", &lado1);

    printf("Digite o segundo lado: ");
    scanf("%f", &lado2);

    printf("Digite o terceiro lado: ");
    scanf("%f", &lado3);

    // Regra matemática: a soma de dois lados deve ser SEMPRE maior que o terceiro
    if ((lado1 + lado2 > lado3) && (lado1 + lado3 > lado2) && (lado2 + lado3 > lado1)) {
        printf("\nParabéns! Esses números podem formar um triângulo. 🔺\n");
    } else {
        printf("\nInfelizmente, esses números NÃO formam um triângulo. ❌\n");
    }

    return 0;
}