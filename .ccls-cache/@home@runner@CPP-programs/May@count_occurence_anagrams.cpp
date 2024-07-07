int search(string pat, string txt) {
    // code here
    int n = txt.length();
    int k = pat.length();
    int count = 0;
    unordered_map<char,int>mp1,mp2;
    int l = 0, r = 0;
    
    for(int i=0; i<k; i++){
        mp2[pat[i]]++;
    }

    while(r < n){
        mp1[txt[r]]++;
        int len = r - l + 1;
        if(len == k){
            if(mp1 == mp2)    count++;
            mp1[txt[l]]--;
            if(mp1[txt[l]] == 0)    mp1.erase(txt[l]);
            l++;
        }

        r++;
    }
    
    return count;
}