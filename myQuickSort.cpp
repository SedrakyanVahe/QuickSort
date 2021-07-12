#include <iostream>
#include <stack>
using namespace std;


int main(){

    const int N = 15;
    int arr[N] = {4, 9, 7, 6, 876, 2, 3, 8, 12, 99, 22, 1, 192, 221, 5};

    int i = 0, j = N -1;
    int left = 0, right = N -1;
    int pivot;
    stack <int> stk;
    stk.push(i);
    stk.push(j);
    
    for(int i = 0; i < N; i++){
        cout << arr[i] << " ";
    }

        cout <<  "\n";
    do{
        right = stk.top();
        stk.pop();
        left = stk.top();
        stk.pop();

        i = left;
        j = right;
        pivot = (i + j) / 2;

        do{
            while(arr[i] < arr[pivot]){
                i++;
            }

            while(arr[j] > arr[pivot]){
                j--;
  4         }

            if(i <= j){
                int t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
                i++;
                j--;
            }
        }
        while(i <= j);
    

        if(left < j){
            stk.push(left);
            stk.push(j);
        }

        if(i < right){
            stk.push(i);
            stk.push(right);
        }
    }
    while(!stk.empty());

    for(int i = 0; i < N; i++){
        cout << arr[i] << " ";
    }

//    system("pause");
    return 0;
}


