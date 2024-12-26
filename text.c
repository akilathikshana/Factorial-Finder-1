#include<stdio.h>

int fact(int n){
        
        if(n > 0)
        {
            return n * fact(n-1);
        }
        else
        {
           return 1;
        }

}

int main(){
    
    int num,result=0;
    
    printf("Enter the number : ");
    scanf("%d",&num);
    
    result=fact(num);
    
    printf("The factorial of %d number is %d",num,result);
    
    return 0;
    
}
