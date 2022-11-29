#include <stdio.h>

int main()
{
    int fahr;
    int cel;
    for (fahr = 300; fahr >= 0; fahr = fahr - 20)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    for (cel = 300; cel >= 0; cel = cel - 20)
        printf("%3d %6.1f\n", cel, (1.8 * cel)+32);
}