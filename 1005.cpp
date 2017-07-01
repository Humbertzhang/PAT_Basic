#include <iostream>

using namespace std;

class map
{
public:
	int Num;
	int RealNum;
	int * a;
	int count;
	map(){}
	void set_map(int num)
	{
		this->Num = num;
		this->RealNum = Num;
		a = new int [100];
		count = 0;
	}
	void find_num()
	{
		while(this->Num!=1)
		{
			if(Num%2==1)
				Num = (3*Num+1)/2;
			else if(Num%2==0)
				Num = Num/2;
			a[count++] = Num;
		}
	}
};

int main()
{
	int num;
	int output[200]={0};
	int cou=0;
	int flag=0;
	int i,j,k;
	int temp;

	cin >> num;
	map maps[num];
	for(i=0;i<num;i++)
	{
		int temp;
		cin >> temp;
		maps[i].set_map(temp);
		maps[i].find_num();
	}

	for(i=0;i<num;i++)
	{
		flag=0;

		for(j=0;j<num;j++)
			for(k=0;k<maps[j].count;k++)
				if(maps[i].RealNum == maps[j].a[k])
					flag=1;

		if(flag==0)
			output[cou++]=maps[i].RealNum;
	}

	for(i=1;i<num;i++)
	{
		for(j=0;j<num-i;j++)
			if(output[j]<output[j+1]){
				temp = output[j+1];
				output[j+1] = output[j];
				output[j] = temp;
			}
	}

	for(i=0;i<cou;i++){
		if(i==cou-1)
			cout << output[i];
		else
			cout << output[i] << " ";
	}

	return 0;
}