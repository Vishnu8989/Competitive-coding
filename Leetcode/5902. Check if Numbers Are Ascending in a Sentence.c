bool areNumbersAscending(char * s){
    int a = strlen(s);
    int now,last=-1;
    for(int i = 0;i<a;i++){
        if(s[i]>='0'&&s[i]<='9'){
            printf("%c->%d\t",s[i],s[i]);
            now = (int)s[i];
            if(s[i+1]>='0'&&s[i+1]<='9'){
                now = 10*now + (int)s[i+1];
                i++;
            }
            printf("%d,%d\n",now,last);
            if(last>=now){
                return 0;
            }
            else{
                last = now;
            }
        }
    }
    return true;
}
