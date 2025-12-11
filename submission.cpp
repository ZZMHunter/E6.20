/*
    Author: Zhao Zhang
    Course: CSCI-135
    Instructor: Tong Yi
    Assignment: E6.20

    Write a function vector<int> merge_sorted(vector<int> a, vector<int> b)
    that merges two sorted vectors, producing a new sorted vector
*/
#include <vector>
using namespace std;

vector<int> merge_sorted(vector<int> a, vector<int> b){
    int indA = 0;
    int indB = 0;
    vector<int> x;
    for (int i = 0; i < a.size()+b.size(); i++){
        if (a[indA]<=b[indB]){
            x.push_back(a[indA]);
            if (indA != -1){
                indA++;
            }
            if (indA == a.size()){
                indA = -1;
            }
        }else{
            x.push_back(b[indB]);
            if (indB != -1){
                indA++;
            }
            if (indA == b.size()){
                indB = -1;
            }
        }
    }
    return x;
}