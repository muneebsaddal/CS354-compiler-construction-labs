#include<stdio.h>
#include<string.h>

int main(){

    char str[50];
    int check_0 = 0;
    int check_1 = 0;
    char operators[50];
    char identifiers[50];
    int j = 0;
    int k = 0;

    printf("Enter a string: ");
    //scanf("%s" ,str);
    while(scanf("%[^\n]",str)==1){
        printf("%s",str);
    }
    for (int i = 0; str[i]!='\0'; i++) {
        if(str[i] == ' '){
            continue;
        }
        else if (((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9') || str[i] == '_')){
            identifiers[j] = str[i];
            j++;
        } 
        else if(str[i] == '+'){
            operators[k] = str[i];
            k++;
        }
        else if(str[i] == '-'){
            operators[k] = str[i];
            k++;
        }
        else if(str[i] == '*'){
            operators[k] = str[i];
            k++;
        }
        else if(str[i] == '/'){
            operators[k] = str[i];
            k++;
        }
        else if(str[i] == '='){
            operators[k] = str[i];
            k++;
        }
    }
    for (int i = 0; i < strlen(identifiers); i++){
        printf("%c is an identifier.", identifiers[i]);
    }
    for (int i = 0; i < strlen(operators); i++){
        printf("%c is an operator.", operators[i]);
    }

    return 0;
}