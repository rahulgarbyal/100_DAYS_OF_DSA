#include<stdio.h>
int len_str(char str[]) {
    int count=0;
    while(str[count] != '\0') {
        count++;
    }
    return count;
}
int main() {
    char str[20];
    printf("enter a lowercase string with alphabetic characters only(no spaces): ");
    scanf("%s", str);
    int len=len_str(str);
    for (int i=len-1;i>=0;i--) {
        printf("%c", str[i]);
    }
    return 0;
}