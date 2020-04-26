// 排序 8ms
class Solution {
public:
    vector<int> intersect(vector<int>& n1, vector<int>& n2) {
        sort(n1.begin(), n1.end());
        sort(n2.begin(), n2.end());
        int i = 0, j = 0, count = 0;
        vector<int> res;
        while (i < n1.size() && j < n2.size())
        {
            if (n1[i] == n2[j])
            {
                res.push_back(n2[j]); // 压入
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


// hash 8ms
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> hash;
        vector<int> res;
        for(int i=0;i<nums1.size();i++){
            hash[nums1[i]]++;
        }
        for(int i =0;i<nums2.size();i++){
            if(hash.count(nums2[i])>0){
                res.push_back(nums2[i]);
                hash[nums2[i]]--;
                if(hash[nums2[i]] == 0){
                    hash.erase(nums2[i]);
                }
            }
        }
        return res;
    }
};

// 12ms
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> hash;
        vector<int> res;
        for(int i=0;i<nums1.size();i++){
            hash[nums1[i]]++;
        }
        for(int i =0;i<nums2.size();i++){
            if(hash[nums2[i]]>0){
                res.push_back(nums2[i]);
                hash[nums2[i]]--;
            }
        }
        return res;
    }
};