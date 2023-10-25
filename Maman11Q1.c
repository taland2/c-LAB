#include <stdio.h>
#include <stdlib.h>

int main(void) {
  /*input dollar- shekel ratio*/ 
  float dollar_rate;
  scanf("%f", &dollar_rate);

  float dollar_amounts[100];
  int num_dollar_amounts = 0;
  while (1) {
    float dollar_amount;
    scanf("%f", &dollar_amount);
    if (dollar_amount == 0) {
      break;
    }
    dollar_amounts[num_dollar_amounts++] = dollar_amount;
  }
    float shekel_amount;
  /*for every dollar amount*/
  for (int i = 0; i < num_dollar_amounts; i++) {
    /*compute shekel amount*/ 
    float shekel_amount = dollar_amounts[i] * dollar_rate;

    printf("%10.2f | %10.2f\n", dollar_amounts[i], shekel_amount);
  }

  /*print sums*/ 
  float total_dollars = 0;
  float total_shekels = 0;
  for (int i = 0; i < num_dollar_amounts; i++) {
    total_dollars += dollar_amounts[i];
    total_shekels += shekel_amounts[i];
  }
  printf("DOLLAR: %.2f\nSHEKEL: %.2f\n", total_dollars, total_shekels);

  return 0;
}
