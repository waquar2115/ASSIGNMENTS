#include <stdio.h>
int main()  
{
    int n , n1, i , pal, rev=0,d;
    printf("enter the number\n");   
    scanf("%d",&n);
    n1=n;   
    while ( n!=0 )  
    {    
        d=n%10;    
        rev=rev*10 + d;    
        n=n/10;    
    }
    if(n1==rev)  
    {  
        printf("The number is a palindrome\n");  
    }  
    else  
    {  
        printf("The number is not a palindrome\n");  
    }
    return 0;
}