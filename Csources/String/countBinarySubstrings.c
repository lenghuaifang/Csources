int countBinarySubstrings(char * s){
    int pre=0, cur=1, res=0;
    for(int i=1;i<strlen(s);i++)
    {
        if(s[i]==s[i-1])
            cur++;
        else
        {
            res+=(cur>pre)?pre:cur;
            pre=cur;
            cur=1;
        }
    }
    res+=(cur>pre)?pre:cur;
    return res;
}



int countBinarySubstrings(char *s)
{
	int pre=0, cur=1, res=0, len=strlen(s);
	
	for(int i=1;i<len;i++)
	{
		if(s[i-1]==s[i])
			cur++;
		else
		{
			res+=(cur>pre)?pre:cur;
			pre=cur;
			cur=1;
		}
	}
	res+=(cur>pre)?pre:cur;
	return res;
}

int countBinarySubstrings(char* s)
{
	int pre=0,cur=1,res=0,len=strlen(s);
	
	for(int i=1;i<len;i++)
	{
		if(s[i-1]==s[i])
			cur++;
		else
		{
			res+=(cur>pre)?pre:cur;
			pre=cur;
			cur=1;
		}
	}
	res+=(cur>pre)?pre:cur;
	return res;
}










