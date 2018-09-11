 #include <stdio.h> //included header libraries
 #include <math.h>

int main()
{
	
	char operator;
	int num1, num2;
	
	printf("enter an operation: "); //can be +, -, *, /, %, <<, >>, &, ^, |, ~
	scanf("%c", &operator);
	
	printf("enter two numbers: "); //enter two integers
	scanf("%d %d", &num1, &num2);
	
	switch(operator) //switch statement which carries out different mathematical operation based on operator entered by user
	{                //prints result of operation using printf statements
		case '+':
			printf("%d + %d = %d", num1, num2, num1 + num2);
			break;
		
		case '-':
			printf("%d - %d = %d", num1, num2, num1 - num2);
			break;
			
		case '*':
			printf("%d * %d = %d", num1, num2, num1 * num2);
			break;
	
		case '/':
			printf("%d / %d = %d", num1, num2, num1 / num2);
			break;

		case '%':
			printf("%d Remainder %d = %d", num1, num2, num1 % num2);
			break;

		case '<':
			printf("%d << %d = %d", num1, num2, num1 << num2);
			break;

		case '>':
			printf("%d >> %d = %d", num1, num2, num1 >> num2);
			break;

		case '&':
			printf("%d & %d = %d", num1, num2, num1 & num2);
			break;

		case '|':
			printf("%d | %d = %d", num1, num2, num1 | num2);
			break;

		case '^':
			printf("%d ^ %d = %d", num1, num2, num1 ^ num2);
			break;

		case '~':
			printf("~%d", num1, num2, ~num1);
			break;
			
	}
	
	return 0;
}
