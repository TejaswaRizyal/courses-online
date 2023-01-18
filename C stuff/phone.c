#include <stdio.h>
#include <stdlib.h>
int phone_loop(){
  int num;
  char phone[11];
  int error = 0;
  scanf("%s\n", &phone[0]);
  while (scanf("%d", &num)!=EOF){
    if (num == -1){
      printf("%s\n", phone);
    }
    else if (num >= 0 && num < 10){
      printf("%c\n", phone[num]);
    }
    else{
      printf("ERROR\n");
      error = 1;
    }
  }
  return error;
}
int main(int argc, char const *argv[]) {
  int error;
  error = phone_loop();
  return error;
}