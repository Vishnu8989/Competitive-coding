int firstUniqChar(char * s){
    int d[26]={0};
    int l = strlen(s);
    for(int i=0;i<l;i++){
        d[s[i]-'a']++;
    }

    for(int i=0;i<l;i++){
        if(d[s[i]-'a']==1){
            return i;
        }
    }
    return -1;
}
