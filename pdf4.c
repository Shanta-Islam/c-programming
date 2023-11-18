#include <stdio.h>
int main() {

 int days =1329;
 int years= days/365;
 int weeks={(days%365)/7};
 int day={(days%365)%7};
  

  printf("%d\n%d\n%d",years,weeks,day);



return 0;


}