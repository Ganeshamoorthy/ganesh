#include <stdio.h>

void main() {
	char a[5]={'a','e','i','o','u'};
	int c,i;
	printf("enter the characters");
	scanf("%c",&c);
    for(i=0;i<=4;i++)
    {
        if(a[i]==c)
    	 printf("vowel");
        else
    	 printf("consonent");
    }
    
     return 0;
}
