#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int str_len(char str[]) {
    int i=0,count=0;
    while(str[i] != '\0') {
        count++; 
        i++;
    }
    return count;
};
int main() {
    char str[20];
    int len;
    printf("Enter a string: ");
    scanf("%s", str);
    len=str_len(str);
    bool palindrome=true;
    int i=0,j=len-1;
    while (i<=j) {
        if (str[i] != str[j]) {
            palindrome=false;
            break;
        }
        i++;
        j--;
    }
    if (palindrome){
        printf("YES!");
    }
    else{
        printf("NO!");
    }
    return 0;
}