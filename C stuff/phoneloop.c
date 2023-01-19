#include <stdio.h>
#include <stdlib.h>

int phoneloop()
{
    char phone[11];
    int num;

    printf(">>> ");
    scanf("%s", &phone[0]);

    while(1)
    {
        printf(">>> ");
        scanf("%d", &num);

        if(num < -1 || num > 9)
        {
            return 1;
        }
        else if(num == -1)
        {
            printf("%s\n", phone);
        }
        else
        {
            printf("%c\n", phone[num]);
        }
    }
    return 0;
}
int main(int argc, char const *argv[]) {
  int error;
  error = phoneloop();
  return error;
}