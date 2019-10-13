bool repeatedSubstringPattern(char * s){

    int len=strlen(s);
    for(int i=len/2;i>=1;i--)
    {
        if(len%i==0)
        {
            int m=len/i;
            char *sub=calloc(i+1,sizeof(char *));
            for(int j=0;j<i;j++)
            {
                sub[j]=s[j];
            }
            
            char *sb=calloc(strlen(s)+1,sizeof(char *));
            for(int j=0;j<m;j++)
            {
                strcat(sb,sub);
            }
            
            if(strcmp(sb,s)==0)
                return true;
        }
    }
    return false;
}

bool repeatedSubstringPattern(char *s)
{
	int len=strlen(s);
	for(int i=len/2;i>=1;i--)
	{
		if(len%i==0)
		{
			int m=len/i;
			char *sub=calloc(i+1,sizeof(char));
			for(int j=0;j<i;j++)
			{
				sub[j]=s[j];
			}
			char *sb=calloc(len+1,sizeof(char));
			for(int j=0;j<m;j++)
			{
				strcat(sb,sub);
			}
			if(strcmp(sb,s)==0)
				return true;
		}
	}
	return false;
}

bool repeatedSubstringPattern(char *s)
{
	int len=strlen(s);
	for(int i=len/2;i>=1;i--)
	{
		if(len%i==0)
		{
			int m=len/i;
			char *sub=calloc(i+1,sizeof(char));
			for(int j=0;j<i;j++)
				sub[j]=s[j];

			char *sb=calloc(len+1,sizeof(char));
			for(int j=0;j<m;j++)
				strcat(sb,sub);
			
			if(strcmp(sb,s)==0)
				return true;
		}
	}
	return false;
}

bool repeatedSubstringPattern(char *s)
{
	int len=strlen(s);
	for(int i=len/2;i>=1;i--)
	{
		if(len%i==0)
		{
			int m=len/i;
			char *sub=calloc(i+1,sizeof(char));
			for(int j=0;j<i;j++)
				sub[j]=s[j];
			
			char *sb=calloc(len+1,sizeof(char));
			for(int j=0;j<m;j++)
				strcat(sb,sub);
			
			if(strcmp(sb,s)==0)
				return true;
		}
	}
	return false;
}























