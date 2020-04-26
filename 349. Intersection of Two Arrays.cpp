// sort + 双指针
class Solution {
public:
    vector<int> intersection(vector<int>& n1, vector<int>& n2) {
        sort(n1.begin(), n1.end());
        sort(n2.begin(), n2.end());
        int i = 0, j = 0;
        vector<int> res;
        while (i < n1.size() && j < n2.size())
        {
            while (i < n1.size()-1 && n1[i] == n1[i+1])
            {
                i++;
            }
            while (j < n2.size()-1 && n2[j] == n2[j+1])
            {
                j++;
            }
            if (n1[i] == n2[j])
            {
                res.push_back(n1[i]);
                i++;
                j++;
            }
            else if (n1[i] < n2[j])
            {
                i++;
            }
            else
            {
                j++;
            }
        }
        return res;
    }
};

// hash
class Solution {
public:
    vector<int> intersection(vector<int>& n1, vector<int>& n2) {
        unordered_map<int,int> hash;
        vector<int> res;
        for(auto i:n1)
            hash[i]++;
        for(auto i:n2){
            if(hash[i] != 0)
            {
                res.push_back(i);
                hash[i] = 0;
            }
        }
        return res;
    }
};