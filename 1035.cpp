#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int insert_sort(int * data, int * sorting_data,int size);
void merge_sort(int * data,int * temp, int * sorting_data,int size);

int main()
{
    int i,size;
    cin >> size;
    int data[size],sorting_data[size];
    for(i=0;i<size;i++)
        cin >> data[i];
    for(i=0;i<size;i++)
        cin >> sorting_data[i];
    int temp[100];
    for(i=0;i<size;i++)
        temp[i] = data[i];
    if(!insert_sort(temp,sorting_data,size))
        merge_sort(data,temp,sorting_data, size);
}

int insert_sort(int * data, int * sorting_data,int size)
{
    int i,j;
    for(int i = 1;i<size;i++){
        int temp = data[i];
        for(j=i;j>0 && data[j-1]>temp;j--)
            data[j] = data[j-1];
        data[j] = temp;

        for(j=0;j<size;j++)  //逐个判断元素是否一样，若都一样则证明是insert_sort
            if(data[j] != sorting_data[j])
                break;

        if(j == size){

            temp = data[i+1];
            for(j=i+1;j>0 && data[j-1]>temp;j--)
                data[j] = data[j-1];
            data[j] = temp;

            cout << "Insertion Sort" <<endl;
            for(j=0;j<size;j++)
                if(j!=size-1)
                    cout << data[j] << " ";
                else
                    cout << data[j] <<endl;

            return 1;
        }

    }
    return 0; //如果在上一步没能返回1,则在这里返回0,不是插入排序
}

void merge_sort(int * data,int * temp, int * sorting_data,int size)
{
    int step,lbegin,lend,rbegin,rend;
    for(step = 1;step < size;step *= 2)
    {
        for(lbegin = 0;lbegin < size-step;lbegin = rend + 1)
        {
            rbegin = lbegin + step;
            lend = rbegin - 1;
            rend = lend + step;
            if(rend > size-1)  //右半边不超过数组右边界下标
                rend = size - 1;
            int k = 0;  //暂存右边界下标
            while(lbegin <= lend && rbegin <= rend)
                temp[k++] = data[lbegin] < data[rbegin] ? data[lbegin++] : data[rbegin++];
            while(lbegin <= lend)
                temp[k++] = data[lbegin++];
            while(rbegin <= rend)
                temp[k++] = data[rbegin++];
            while(k>0)
                data[--rbegin] = temp[--k];
        }
        int i;
        for(i = 0;i<size;i++)
            if(data[i] != sorting_data[i])
                break; //不相等就break,进行下一轮排序

        if(i == size){  //相等就进行下一轮并输出
            step *= 2;

            for(lbegin = 0;lbegin < size-step;lbegin = rend + 1)
            {
                rbegin = lbegin + step;
                lend = rbegin - 1;
                rend = lend + step;
                if(rend > size-1)  //右半边不超过数组右边界下标
                    rend = size - 1;
                int k = 0;  //暂存右边界下标
                while(lbegin <= lend && rbegin <= rend)
                    temp[k++] = data[lbegin] < data[rbegin] ? data[lbegin++] : data[rbegin++];
                while(lbegin <= lend)
                    temp[k++] = data[lbegin++];
                while(rbegin <= rend)
                    temp[k++] = data[rbegin++];
                while(k>0)
                    data[--rbegin] = temp[--k];
            }

            cout << "Merge Sort" << endl;
            for(int j=0;j<size;j++)
                if(j!=size-1)
                    cout << data[j] << " ";
                else
                    cout << data[j] <<endl;
        }
    }
}


