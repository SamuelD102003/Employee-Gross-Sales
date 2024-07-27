#include <stdio.h>

int main(void) {
  int counter[9]={0},index;
  float sales,comm;

  while(1)
  {
  printf("Enter employee gross sales (-1 to end) :");
  scanf("%f",&sales);
    if(sales == -1)
    {
      break;
    }
  comm = 200 + sales*(.09);
  index = ((int)comm/100)-2;
    if(index > 8)
      index = 8;
  counter[index]++;

  printf("Employee Commission is %.2f\n",comm);
  }
  for (int i=0;i<8;i++)
    {
      printf("$%d00 - $%d99: %d\n",i+2,i+2,counter[i]);
    }
  printf("Over $1000 %d\n",counter[8]);
  return 0;
}