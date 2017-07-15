#include <iostream>
#include <stdio.h>

using namespace std;

class subject
{
public:
    int Full_score;
    int choice_num;
    int right_choice_num;
    char right_choices[5] = {0,0,0,0,0};
    void set_subject()
    {
        cin >> this->Full_score >> this->choice_num>>this->right_choice_num;
        char c;
        int i=0;

        while((c=getchar())!='\n')
            if (c != ' ') {
                right_choices[i]=c;
                i+=1;
            }
        scanf("\n",&c);
    }
    int judge()
    {
        int right_num;
        int flag2=0;
        char a;
        scanf("(%d",&right_num);
        while((a=getchar())!=')')
            if(a!=' '){
                int flag1=0;
                for(int i=0;i<5;i++){
                    if(a == right_choices[i]){
                        flag2+=1;
                    }
                }
            }
        if(flag2 == right_choice_num && right_num == right_choice_num){
            return this->Full_score;
        }else{
            return 0;
        }
    }

};

int main()
{
    int i,j,stuNum,subNum;
    subject * subjects;
    cin >> stuNum >> subNum;
    int wrong_list[subNum]={0};
    subjects = new subject [subNum];
    for(i=0;i<subNum;i++){
        subjects[i].set_subject();
    }
    for(i=0;i<stuNum;i++){
        int score=0;
        scanf("\n");
        for(j=0;j<subNum;j++){
            if(j!=0)
                scanf(" ");
            if((subjects[j].judge())!=0) {
                score += subjects[j].Full_score;
            }else{
                wrong_list[j]++;
            }
        }
        cout << score <<endl;
    }

    int maxWrong=0;
    for(i=0;i<subNum;i++){
        if(wrong_list[i]>maxWrong)
            maxWrong = wrong_list[i];
    }
    if(maxWrong == 0)
        cout << "Too simple" <<endl;
    else{
        printf("%d",maxWrong);
        for(i=0;i<subNum;i++)
            if(wrong_list[i] == maxWrong)
                printf(" %d",i+1);
    }
    return 0;
}
