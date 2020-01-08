#include<stdio.h>
#include<string.h>
int main()
{
char str[50];
 int begin, end,
gets(str);
printf("%s",str);

int i;
while(str[i]!='\0'){
i++;
}

printf("%d",i);


while (s[i] != '\0')
      i++;

   end = i - 1;

   for (begin = 0; begin < i; begin++) {
      r[begin] = s[end];
      end--;
   }

   r[begin] = '\0';

   printf("%s\n", r);
return 0;
}
