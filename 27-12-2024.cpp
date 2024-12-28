unordered_map<int, int> mp;
        int n = arr.size();
        int count = 0;
        for(int i = 0; i < n; i++){
            int com = target - arr[i];
            count += mp[com];
            mp[arr[i]]++;
        }
        
        return count;