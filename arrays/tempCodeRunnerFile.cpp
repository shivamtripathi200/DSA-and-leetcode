void removesymbols(string &name){
    string temp="";
    int i=0;
    while(i<name.length()){
        if((name[i]>='a' && name[i]<='z')|| (name[i]>='A' && name[i]<='Z')|| (name[i]>=0 && name[i]<=9)){
            temp+=name[i];
        }
        i++;
    }
   
    name=temp;
}