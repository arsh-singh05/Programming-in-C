#include <stdio.h>

int boothMultiply(int x, int y) // Function to perform Booth's multiplication
{
  int result = 0; // initialize result
  int i;
  for (i = 31; i >= 0; i--) // process each bit of y
  {
   if (y & (1 << i))  // check if the current bit of y is set (1)
   {
     result += x << i;  // add x to result if the current bit of y is set
   }
  }
  return result;
}

void main()
{
  int x, y;
  printf("Enter the two numbers to multiply: ");
  scanf("%d%d", &x, &y);
  printf("Product: %d\n", boothMultiply(x, y));
}
