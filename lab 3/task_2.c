#include <stdio.h>

int queue[100], n = 100, top = -1, bottom = -1;
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
	int val;
	if (bottom == n - 1)
		printf("Queue Overflow\n");
	else {
		if (top == -1)
			top = 0;
		printf("Insert the element in queue: \n");
		scanf("%d", &val);
		bottom++;
		queue[bottom] = val;
	}
}

void pop() {
	if (top == -1 || top > bottom) {
		printf("Queue Underflow\n");
		return;
	}
	else {
		printf("Element deleted from queue is : %d\n", queue[top]);
		top++;;
	}
}

void display() {
	if (top == -1)
		printf("Queue is empty!\n");
	else {
		printf("Queue elements are: \n");
		for (int i = top; i <= bottom; i++)
			printf("%d\t", queue[i]);
		printf("\n");
	}
}