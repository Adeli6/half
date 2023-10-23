#include <cs50.h>
#include <stdio.h>

float half(float bill, float tax, int tip);

int main(void)
{
    float bill_amount = get_float("Bill before tax and tip: ");
    float tax_percent = get_float("Sale Tax Percent: ");
    int tip_percent = get_int("Tip percent: ");

    printf("You will owe $%.2f each!\n", half(bill_amount, tax_percent, tip_percent));
}

// TODO: Complete the function
float half(float bill, float tax, int tip)
{
    float tax_value = (bill / 100) * tax;
    float bill_with_tax_value = (bill + tax_value);

    float tip_value = (bill_with_tax_value / 100) * tip;
    float bill_with_tax_and_tip_value = (bill_with_tax_value + tip_value);

    float half = (bill_with_tax_and_tip_value/2);
    return half;
}
