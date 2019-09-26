#include<iostream>
#include<ctype.h>
using namespace std;

char ptab[6][6] = {
	'x', '+', '*', '(', ')', ']',
	'+', '>', '<', '<', '>', '>',
	'*', '>', '>', '<', '>', '>',
	'(', '<', '<', '<', '=', '#',
	')', '>', '>', '#', '>', '>',
	'[', '<', '<', '<', '#', '='
};

struct node
{
	char symbol;
	node *lptr;
	node *rptr;
};

struct stack
{
	char sign;
	struct node *optr;
};

char comp(char, char);
void postorder(struct node *);
void preorder(struct node *);
void inorder(struct node *);

void main()
{
	int i = 0, tos = 0, csf = 1;
	char str[15] = "[a*b+c+d*r/t]";
	char ans;
	node *x;
	stack s[20];

	s[tos].sign = '[';

	while (str[i] != '\0')
	{
		if (isalpha(str[csf]))
		{
			x = new node;
			x->symbol = str[csf];
			x->lptr = NULL;
			x->rptr = NULL;
			s[tos].optr = x;
		}
		else
		{
			ans = comp(s[tos].sign, str[csf]);
			while (ans == '>')
			{
				x = new node;
				x->symbol = s[tos].sign;
				x->lptr = s[tos - 1].optr;
				x->rptr = s[tos].optr;
				tos--;
				s[tos].optr = x;
				ans = comp(s[tos].sign, str[csf]);
			}

			if (ans == '<')
			{
				tos++;
				s[tos].sign = str[csf];
			}

			if (ans == '=' && s[tos].sign == '[')
			{
				break;
			}

			if (s[tos].sign == '(')
			{
				x = s[tos].optr;
				tos--;
				s[tos].optr = x;
			}
		}

		csf++;
		i++;
	}

	node *rt = s[0].optr;

	cout << endl << "The Postorder of the tree is::";
	postorder(rt);

	cout << endl << "The Preorder of the tree is::";
	preorder(rt);

	cout << endl << "The Inorder of the tree is::";
	inorder(rt);

	cout << endl;
}
char comp(char x, char y)
{
	int i = 0, j = 0;

	while (ptab[i][0] != x && i <= 18)
		i++;

	while (ptab[0][j] != y &&  j <= 18)
		j++;

	return ptab[i][j];
}

void postorder(struct node *rt)
{
	struct node *ptr = rt;
	if (ptr != NULL)
	{
		postorder(ptr->lptr);
		postorder(ptr->rptr);
		cout << ptr->symbol;
	}
}

void preorder(struct node *rt)
{
	struct  node *ptr = rt;
	if (ptr != NULL)
	{
		cout << ptr->symbol;
		preorder(ptr->lptr);
		preorder(ptr->rptr);
	}
}

void inorder(struct node *rt)
{
	struct   node *ptr = rt;
	if (ptr != NULL)
	{
		inorder(ptr->lptr);
		cout << ptr->symbol;
		inorder(ptr->rptr);
	}
}
