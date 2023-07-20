#include<stdio.h>
#include <stdbool.h>
int main(){
    int a,sum,count,average;
    sum = 0;
    count =0;
    do
    {   
        if(a>0){
        printf("enter number : ");
        scanf("%d", &a);
        }
        else{break;}
        sum = sum+a;
        count ++;
       
    } while (true);
    printf("Sum = %d\n ", sum);
    average = sum/(count-1);
    printf("average = %d\n" ,average);
   
    return 0;
}