#incluude < stdio.h >

/**
  *main -prints the size of many vary types
  *
  *Return:Always 0 (Success)
*/
int main(void)
{
char a;
char b;
long int c;
long long int d;
float e;
printf("Size of a char:lu byte(s)\n", sizeof(a));
printf("Size of an int:lu byte(s)\n", sizeof(b));
printf("Size of a long int:lu byte(s)\n", sizeof(c));
printf("Size of a long long int:lu byte(s)\n", sizeof(d));
printf("Size of a float:lu byte(s)\n", sizeof(e));
return (0);
}

