bool canConstruct(char * rN, char * m){
    int d[26]={0};
    int ml = strlen(m);
    int rl = strlen(rN);
    for(int i=0;i<ml;i++){
        d[m[i]-'a']++;
    }
    for(int i=0;i<rl;i++){
        d[rN[i]-'a']--;
    }
    for(int i=0;i<26;i++){
        if(d[i]<0){
            return false;
        }
    }
    return true;
}
