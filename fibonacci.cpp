#include <iostream>
using namespace std;

int main ()
{
  int i, num1, num2;
  int sum = 0;
  int even_sum = 0;
  num1 = 0;
  num2 = 1;
  i = 0;
  while ((num1 + num2) < 4000000){
      sum = num1 + num2;
      num1 = num2;       
      num2 = sum;
     // cout << sum << endl;

      if (sum % 2 == 0){
         even_sum = even_sum + sum;
      }
  }
cout << even_sum << endl;
return 0;
}



