#include<stdio.h>
#include<string.h>

int main()
{
    char str[50];
    char arr[50];
    printf("Enter a string without spaces!\n");
    scanf("%s", str);
    int j = 0;
    for (int i = 0; i < strlen(str); i++){
        if(str[i] == '+'){
            arr[j] = '+';
            j++;
        } 
        else if(str[i] == '-'){
            arr[j] = '-';
            j++;
        }
        else if(str[i] == '*'){
            arr[j] = '*';
            j++;
        }
        else if(str[i] == '/'){
            arr[j] = '/';
            j++;
        }
        else if(str[i] == '='){
            arr[j] = '=';
            j++;
        }
    }
    if(strlen(arr) == 0){
        printf("Not an operator!\n");
    }
    else{
        for (int i = 0; i < strlen(arr); i++){
            if(arr[i] == '+'){
                printf("Addition!\n");
            }
            else if(arr[i] == '-'){
                printf("Subtraction!\n");
            }
            else if(arr[i] == '*'){
                printf("Multiplication!\n");
            }
            else if(arr[i] == '/'){
                printf("Division!\n");
            }
            else if(arr[i] == '='){
                printf("Equals!\n");
            }
        }
    }

    return 0;
}