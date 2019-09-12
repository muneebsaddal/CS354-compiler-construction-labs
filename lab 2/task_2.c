#include<stdio.h>
#include<string.h>

int main(){

    char str[50];
    int check_0 = 0;
    int check_1 = 0;
    printf("Enter a string:");
    scanf("%s", str);

    if (((str[0] >= 'a' && str[0] <= 'z') || (str[0] >= 'A' && str[1] <= 'Z') || str[0] == '_')){
        check_0 = 1;
    }
    if (check_0 == 1){
        for (int i = 1; i < strlen(str); i++) { 
            if (((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9') || str[i] == '_')){
                check_1 = 1;
                
            }
        } 
    } else{
        printf("Not a valid identifier!");
        return 0;
    }
    if(check_0 == 1 && check_1 == 1){
        printf("String is a valid identifier!");
    }
    else{
        printf("Not a valid identifier!");
    }

    return 0;
}