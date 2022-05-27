#include <bits/stdc++.h>
using namespace std;
int minMoves(vector <int> nums) {
    int mn = min_element(nums.begin() , nums.end()) , moves = 0;
    for(int &i : nums)
        moves += i - mn;
    return moves;
}
int main() {
    vector <int> nums = {1 , 2 , 3};
    cout << minMoves(nums) << endl;
    return 0;
}
