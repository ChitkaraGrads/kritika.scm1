#include<stdio.h>
int main(){
    int n, i=1, sum=0; // Initialize i to 1
    printf("Enter the value of n:");
    scanf("%d", &n);
    while(i<=n){
        sum+=i;
        i++;
    }
    printf("Sum of first %d natural numbers is: %d\n",n,sum);
    return 0;
}