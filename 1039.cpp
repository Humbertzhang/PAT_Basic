#include <iostream>
#include <string.h>

using namespace std;

class balls
{
public:
	int ch[123];
	balls(char *str)
	{
		int i;
		
		for(i=0;i<123;i++)
			ch[i] = 0;

		for(i=0;i<strlen(str);i++)
			ch[str[i]] +=1;
	}	

};

int main()
{
	char * instr,*needstr;
	instr = new char [1001];
    needstr = new char [1001];

    cin >> instr >> needstr;

	
	balls inballs(instr);
	balls needballs(needstr);

	int count_more=0,count_less=0,flag=1;

	for(int i=0;i<123;i++){
		if(inballs.ch[i] >= needballs.ch[i])
			count_more += (inballs.ch[i]-needballs.ch[i]);
		else
		{
			flag=0;
			count_less+=(needballs.ch[i]-inballs.ch[i]);
		}
	}

	if(flag == 0)
		cout << "No " << count_less <<endl;
	else if(flag == 1)
		cout << "Yes " << count_more <<endl; 
	return 0;
}
