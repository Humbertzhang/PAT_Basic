#include <iostream>
#include <cstring>
#include <math.h>

using namespace std;

void get(char * a) //去除前导零
{
    int i=0,j=0,flag=0;
    char temp;
    for(i;;i++){
        scanf("%c",&temp);

        if(flag == 0) {
            if(temp != '0')
                flag = 1;
        }
        if(temp == ' ' || temp == '\n')
            break;
        if(flag ==1)
            a[j++] = temp;
    }
    a[j] = '\0';
}

int main()
{
    char A[110],B[110];
    get(A);
    get(B);

    //cin >> A >> B;

    int maxlength = max(strlen(A),strlen(B));
    int n = strlen(A) - strlen(B);
    int mid = abs(n);

    int flag = 0; //flag = 0 jishu  flag = 1 oushu

    int bitflag = 0; //0 : a> b  1 : b >a
    if(strlen(B) >= strlen(A))
        bitflag = 1;
    else
        bitflag = 0;

    for(int i=maxlength-1;i>mid-1;i--){
        int a,b;

        if(bitflag == 0)
            a = A[i] - '0',b=B[i-mid]-'0';
        else if(bitflag == 1)
            a = A[i-mid]-'0',b=B[i]-'0';

        int t=0;
        char ct;

        if(flag == 0){
            t = (a + b)%13;
            flag = 1;
        }

        else if (flag == 1){
            t = b-a;
            if(t < 0)
                t+=10;
            flag =0;
        }

        if (t == 10)
            ct = 'J';
        else if(t == 11)
            ct = 'Q';
        else if(t == 12)
            ct = 'K';
        else
            ct = '0' + t;

        if(bitflag == 1)
            B[i] = ct;
        else if(bitflag == 0)
            B[i-mid] = ct;
    }

    cout << B <<endl;

    return 0;
}

