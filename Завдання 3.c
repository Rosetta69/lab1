#include <stdio.h>
#include <math.h>

int main() {
    // Вхідні дані
    float x1 = 0, y1 = 0, x2 = 0, y2 = 3, x3 = 4, y3 = 0;
    
    // Обчислення відстані між точками
    float a = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
    float b = sqrt(pow(x3-x2,2) + pow(y3-y2,2));
    float c = sqrt(pow(x3-x1,2) + pow(y3-y1,2));
    
    // Обчислення периметру
    float P = a + b + c;
    
    // Обчислення площі за формулою Герона
    float p = P / 2; // Півпериметр
    float S = sqrt(p*(p-a)*(p-b)*(p-c));
    
    // Виведення результатів
    printf("Периметр трикутника: %f\n", P);
    printf("Площа трикутника: %f\n", S);
    
    return 0;
}