#include <stdio.h>

int main() {

	char str[50];
	printf("Enter a string: ");
	scanf("%s", str);

	if(str[0] == '/') {
		if (str[1] == '/' || str[1] == '*') {
			printf("Comment!");
		}
		else {
			printf("Not a Comment!");
		}
	}
	else {
		printf("Not Comment!");
	}

	return 0;
}