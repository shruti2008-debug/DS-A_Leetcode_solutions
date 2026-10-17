class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> ans;
        vector<int> rem_arr;

        for (int i = 0; i < arr2.size(); i++) {
            for (int j = 0; j < arr1.size(); j++) {
                if (arr2[i] == arr1[j]) {
                    ans.push_back(arr1[j]);
                }
            }
        }

        for (int j = 0; j < arr1.size(); j++) {
            bool found = false;

            for (int i = 0; i < arr2.size(); i++) {
                if (arr1[j] == arr2[i]) {
                    found = true;
                    break;
                }
            }

            if (!found) {
                rem_arr.push_back(arr1[j]);
            }
        }

        sort(rem_arr.begin(), rem_arr.end());

        for (int i = 0; i < rem_arr.size(); i++) {
            ans.push_back(rem_arr[i]);
        }

        return ans;
    }
};