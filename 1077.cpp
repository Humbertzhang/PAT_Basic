#include <iostream>
#include <math.h>

using namespace std;

double grade_average(int a[], int n, int leagl);

int main(){
    int n;
    int m;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        int leagl = n-1;
        int teacher = 0;
        int stu[n-1] = {0};
        cin >> teacher;
        for(int j = 0; j < n-1; j++){
            cin >> stu[j];
            if(stu[j] < 0 || stu[j] > m){
                leagl -= 1;
                stu[j] = -1;
            }
        }
        double ave =  grade_average(stu, n-1, leagl);
        double grade = round((ave + double(teacher))/2);
        cout << int(grade) << endl;
    }
}

double grade_average(int a[], int n, int leagl)
{
    int max=0, min = 100;
    int maxindex, minindex;
    for(int i = 0; i < n; i++){
        if (a[i] > max && a[i] != -1){
            maxindex = i;
            max = a[i];
        }
        if (a[i] < min && a[i] != -1){
            minindex = i;
            min = a[i];
        }
    }
    double grade_all = 0;
    for(int i = 0; i < n; i++){
        if(i != maxindex && i != minindex && a[i] != -1){
            grade_all += a[i];
        }
    }
    return grade_all/(leagl-2);
}
