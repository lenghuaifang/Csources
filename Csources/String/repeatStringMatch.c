int repeatedStringMatch(char * A, char * B)
{

    int alen=strlen(A);
    int blen=strlen(B);
    int count=0;
    
    char *sb=calloc(blen+alen+alen,sizeof(char));
    
    while(strlen(sb)<blen)
    {
        strcat(sb,A);
        count++;
    }
    
    if(strstr(sb,B)!=0)
        return count;
    
    strcat(sb,A);
    
    if(strstr(sb,B)!=0)
        return ++count;
    
    return -1;
}

int repeatedStringMatch(char *A, char* B)
{
	int alen=strlen(A);
	int blen=strlen(B);
	int count=0;
	
	char *sb=calloc(blen+alen+alen,sizeof(char));
	
	while(strlen(sb)<blen)
	{
		strcat(sb,A);
		count++;
	}
	
	if(strstr(sb,B))
		return count;
	
	strcat(sb,A);
	
	if(strstr(sb,B))
		return ++count;
	
	return -1;
}

int repeatedStringMatch(char* A,char* B)
{
	int alen=strlen(A);
	int blen=strlen(B);
	int count=0;
	
	char* sb=calloc(blen+alen+alen,sizeof(char));
	while(strlen(sb)<blen)
	{
		strcat(sb,A);
		count++;
	}
	
	if(strstr(sb,B))
		return count;
	
	strcat(sb,A);
	if(strstr(sb,B))
		return ++count;
	
	return -1;
}













