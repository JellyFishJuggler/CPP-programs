int search(string pat, string txt) {
    // code here
    int n = txt.length();
    int k = pat.length();
    int count = 0;
    vector<int>mp1(26),mp2(26);
    for(auto& ch : pat){
        mp1[ch - 'a']++;
    }
    for(int i=0;i<n;i++){
        mp2[txt[i] - 'a']++;
        if(i == k - 1){
            count += mp1 == mp2;
        }
        else if(i >= k){
            mp2[txt[i -k] - 'a']--;
            if(mp1 == mp2){
                count++;
            }
        }
    }
    return count;
}