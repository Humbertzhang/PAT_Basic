#include<stdio.h>
#include<string.h>
int main()
{
 int students;
 char name[200][20],id[200][20];
 int grades[100];
 int i;
 int max = 0,min = 10001;
 char max_name[20],max_id[20],min_name[20],min_id[20];
 scanf("%d",&students);
 for(i=0;i<students;i++){
  scanf("%s%s%d",name[i],id[i],&grades[i]);
 }
 for(i=0;i<students;i++){
  if(grades[i]>=max){
   max = grades[i];
   strcpy(max_name,name[i]);
   strcpy(max_id,id[i]);
  }
  if(grades[i]<=min){
   min = grades[i];
   strcpy(min_name,name[i]);
   strcpy(min_id,id[i]);
  }
 }
 printf("%s %s\n",max_name,max_id);
 printf("%s %s\n",min_name,min_id);
 return 0;
}
