#include<bits/stdc++.h>
using namespace std;

vector <string> recursion(vector <string> &arr, int cap, int start){
    if(cap <= 1){
        arr.pop_back();
        return arr;
    }
    else if(cap == 2){
        return arr;
    }
    else{
        if(arr[arr.size() - 1].size() == (int)(cap / 2) * 2){
            return arr; 
        }
        else{
            int inputArrSize = arr.size();
            int inputStart = start; 
            for(int i = inputStart; i < inputArrSize; i ++){
                string temp1 = arr[i] + "()";
                //cout << temp1 << " ";
                string temp2 = "()" + arr[i];
                string temp3 = "(" + arr[i] + ")";
                //cout << temp2; 
                arr.push_back(temp1);
                if(temp1 != temp2){
                    arr.push_back(temp2);
                }
                arr.push_back(temp3);
                start ++;
            }
            return recursion(arr, cap, start);
        }
    }
}

int main(){
    vector <string> arr;
    arr.push_back(" ");
    arr.push_back("()");
    const int start = 1;
    int cap;
    cap = 8; 
    vector <string> temp = recursion(arr, cap, start);
    for(int i = 0; i < temp.size() - 1; i ++)
    {
        cout << temp[i] << " , ";
    }
    cout << temp[temp.size() - 1] << ".";
    return 0;
}
