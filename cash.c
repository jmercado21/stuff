//cash.c by J.D. Mercado

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float money;
    do
    {
        money = get_float("how much change do you owe?");
    }
    while (money < 0);
    
    int change = (money + 0.005) * 100;
    
    int quarter = change / 25;
    
    int dime = change % 25 / 10;
    
    int nickel = change % 25 % 10 / 5;
    
    int penny = % 25 % 10 % 5;
    
    printf("%i\n", nickel + quarter + dime + penny);
}
