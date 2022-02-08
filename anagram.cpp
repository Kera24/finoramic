vector<vector<int> > Solution::anagrams(const vector<string> &A) {
    vector<vector<int>> result;
    unordered_map<string, vector<int>> hasmap;
    string temp;
    
    for (int i = 0; i < A.size(); ++i) {
        temp = A[i];
        sort(temp.begin(), temp.end());
        hasmap[temp].push_back(i+1);
    }
    
    for (auto i : hasmap)
        result.push_back(i.second);
    return result;
}