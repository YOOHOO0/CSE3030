#include <stdio.h>

int main(){
	int i = 0;
	while(1) {
		char c;
		scanf("%c", &c);
		if (c == '\n') {
			printf("%c", c);
			break;
		}
		printf("%c", c);
		i++;
	}
}