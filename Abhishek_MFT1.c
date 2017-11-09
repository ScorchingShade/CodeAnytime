#include<stdio.h>
int chars[128];
void check(char c) {
	chars[c]++;
}
int main() {
	char c;
	printf("Enter a String\n");
	while((c=getchar())!='\n')
		check(c);
	for(int i=0;i<128;i++)
		if(chars[i]!=0)
			printf("%c : %0d\n",i,chars[i]);
}