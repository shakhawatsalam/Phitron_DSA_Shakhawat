#include <stdio.h>

int main()
{
    // int x;
    // scanf("%d ", &x);

    // int daughterage = x / 4 - 4;

    // printf("%d %d\n", daughterage * 4, daughterage);
    // printf("%d\n", daughterage * 4 + daughterage);
    int x;
    scanf("%d", &x);

    // Calculate daughter's age based on the given condition
    int daughter_age = x / 5;
    // Calculate father's age based on daughter's age
    int father_age = 4 * daughter_age;

    printf("%d %d\n", father_age, daughter_age);
    return 0;
}