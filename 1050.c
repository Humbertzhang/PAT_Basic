//Refer to http://www.cnblogs.com/zhengkang/p/5730503.html
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int comp(const void* a,const void* b)
{
    return  *(int*)b-*(int*)a;
}

int main()
{
	int i,j,k,num;
	scanf("%d",&num);
	int list[num];
	int temp;
	//input num numbers
	for(i=0;i<num;i++){
		scanf("%d",&list[i]);
	}
	
	qsort(list,num,sizeof(int),comp);

	//find the m and n  The Quick Way
	int m,n;
	for(i=1;i<=sqrt(num);i++){
        if(num%i==0){
            n=i;
        }
    }
    m=num/n;
	

	/*	My own way
	Time Out....So I change the way to find m and n...
	int mt=num,nt=1,m,n;
	for(mt = num ;mt > 0;mt--){
		for(nt = 1;nt <= mt;nt++){
			if(mt*nt == num){
				m = mt;
				n = nt;
			}
		}
	}	*/
	

	//fill the spiral matrix
	int list2[m+1][n+1];
	int cnt = 0;
	
	for(i=1;i<=n/2;i++){
		for(j=i;j<=n-i;j++)
			list2[i][j] = list[cnt++];
		for(j=i;j<=m-i;j++)
			list2[j][n-i+1] = list[cnt++];
		for(j=n-i+1;j>i;j--)
			list2[m-i+1][j] = list[cnt++];
		for(j=m-i+1;j>i;j--)
			list2[j][i] = list[cnt++];
	}
	if(n%2 == 1){
		for(i = ((n/2)+1);i<=m-(n/2);i++){
			list2[i][(n/2)+1] = list[cnt++];
		}
	}
	
	//print the spiral matrix
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			printf("%d",list2[i][j]);
			if(j!=n){
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
/*

About qsort in <stdlib.h>

qsort（即，quicksort）主要根据你给的比较条件给一个快速排序，主要是通过指针移动实现排序功能。排序之后的结果仍然放在原来数组中。

qsort(base,num,sizeof(s[0]),cmp);
参数意义如下:

第一个参数 base 是 需要排序的目标数组名（或者也可以理解成开始排序的地址，因为可以写&s[i]这样的表达式）

第二个参数 num 是 参与排序的目标数组元素个数

第三个参数 width 是单个元素的大小（或者目标数组中每一个元素长度），推荐使用sizeof(s[0]）这样的表达式

第四个参数 compare 就是让很多人觉得非常困惑的比较函数啦。

 
我们来简单讨论compare这个比较函数（写成compare是我的个人喜好，你可以随便写成什么，比如 cmp 什么的，在后面我会一直用cmp做解释）。 
典型的compare的定义是int compare(const void *a,const void *b);
返回值必须是int，两个参数的类型必须都是const void *，那个a,b是随便写的，个人喜好。假设是对int排序的话，如果是升序，那么就是如果a比b大返回一个正值，小则负值，相等返回0，其他的依次类推，后面有例子来说明对不同的类型如何进行排序。



int cmp ( const void *a , const void *b )

{
//return *(int *)a - *(int *)b;  //升序排序
//return *(int *)b - *(int *)a;  //降序排序
}



/*
	可见：参数列表是两个空指针，现在他要去指向你的数组元素。所以转型为你当前的类型，然后取值。

        升序排列时，若第一个参数指针指向的“值”大于第二个参数指针指向的“值”，则返回正；若第一个参数指针指向的“值”等于第二个参数指针指向的“值”，则返回零；若第一个参数指针指向的“值”小于第二个参数指针指向的“值”，则返回负。

        降序排列时，则刚好相反。

*/




