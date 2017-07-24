#include <iostream>

using namespace std;

int handnum=0,eyenum=0,mouthnum=0;

int getit(char ** arr)
{
    char a;
    int i=0;
    while((a=getchar())!='\n'){
        if(a=='[') {
            int j = 0;
            while ((a = getchar()) != ']') {
                arr[i][j++] = a;
            }
            arr[i][j] = '\0';
            i++;
        }
    }
    return i;
}

int main()
{

    char **hands,**eyes,**mouthes;
    hands = new char * [10];
    eyes = new char * [10];
    mouthes = new char * [10];
    for(int i=0;i<10;i++)
        hands[i] = new char [20];
    for(int i=0;i<10;i++)
        eyes[i] = new char [20];
    for (int i=0;i<10;i++)
        mouthes[i] = new char [20];

    handnum =  getit(hands);
    eyenum = getit(eyes);
    mouthnum = getit(mouthes);

    int n;
    cin >> n;
    for (int j = 0; j < n ; j++) {

        int c[5]={0},wrong=0;

        for(int k = 0;k<5;k++) {
            cin >> c[k];

            if(k == 0 || k == 4)
                if(c[k]<=0 || c[k] >handnum)
                    wrong = 1;

            if(k == 1 || k == 3)
                if(c[k]<=0 || c[k] > eyenum)
                    wrong = 1;

            if(k == 2)
                if(c[k]<=0 || c[k] > mouthnum)
                    wrong = 1;
        }
        if(wrong == 0) {
            cout << hands[c[0]-1] << "(" << eyes[c[1]-1] << mouthes[c[2]-1] << eyes[c[3]-1] << ")" << hands[c[4]-1] << endl;
        }else{
            cout << "Are you kidding me? @\\/@" <<endl;
        }
    }

    return 0;
}

