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
    for (int i = 0; i < a.size() + b.size(); i++){
        if ((indA < a.size()) && (indB >= b.size() || a[indA] <= b[indB])) {
            x.push_back(a[indA]);
            indA++;
        } 
        else {
            x.push_back(b[indB]);
            indB++;
        }
    }
    return x;
}