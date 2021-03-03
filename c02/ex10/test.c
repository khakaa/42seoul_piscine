#include <stdio.h>

#include <string.h>

int main( ){

        size_t temp;

   char src[] = "good morning" ;

   char dst[] = "hello"; 
   int i = 0;

   printf("src sizeof = %lu, src = %s\n",sizeof(src),src);

   printf("dst sizeof = %lu, dst = %s\n",sizeof(dst),dst);

   temp = strlcat(dst,src,7);

   printf("dst sizeof = %lu, dst = %s\n",sizeof(dst),dst);

   printf(" Cat_dst = ");

   while(dst[i]){                //null 종료여부 확인

        printf("%c", dst[i]); i++;

   }

        printf("\n");

        printf("temp is %zu\n",temp);

}
