#include <stdio.h>

int stack[100], n = 100, top = -1, x;
void push();
void pop();
void display();

int main() {
    
    int choice;
    do {
		printf("Enter Choice:\t(1) to push\t(2) to pop\t(3) to display\t(4) to exit\n");
	    scanf("%d", &choice);
    	switch (choice) {
            case 1:
                push();
                break;
		    case 2:
                pop();
				break;
		    case 3:
                display();
				break;
		    case 4:
                printf("Exit\n");
                break;
		    default:
                printf("Invalid choice\n");
                return 0;
                break;
		}
	} while (choice != 4);

	return 0;
}

void push() {
	if (top >= n - 1)
        printf("Stack overflow!\n");
	else {
		printf("Enter the value to push: \n");
        scanf("%d", &x);
        top++;
		stack[top] = x;
	}
}

void pop() {
	if (top <= -1)
		printf("Stack underflow!\n");
	else {
		printf("The popped element is %d.\n", stack[top]);
		top--;
	}
}

void display() {
	if (top >= 0) {
		printf("Stack elements are: ");
		for (int i = top; i >= 0; i--)
			printf("%d\t", stack[i]);
        printf("\n");
	}
	else
		printf("Stack is empty\n");
}