#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	int a[26]={0};
	char str[1001];
	int slen;
	int max=0;
	int i;
	char b;
	gets(str);
	for(i=0;(i<1001)&&(str[i]!='\0');i++){
		if(isalpha(str[i])){
			str[i] = tolower(str[i]);
			a[str[i] - 'a']++;
		}else{
			continue;
		}
	}
	for(i=1;i<26;i++){
		if(a[i]>a[max]){
			max = i;
		}
	}
	
	printf("%c %d",'a'+max,a[max]);

	return 0;
}