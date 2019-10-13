int uniqueMorseRepresentations(char** words, int wordsSize) {
		char comp[26][6]={".-", "-..." , "-.-.", "-..", "." ,
                          "..-.", "--.","....","..",".---","-.-",
                          ".-..","--","-.","---",".--.","--.-",".-.",
                          "...","-","..-","...-",".--","-..-","-.--",
                          "--.."};
    char steak[100][50];
    char tmp[50];
    
    int sindex=0,flag=0;
    
    for(int i=0;i<wordsSize;i++){
        
    	strcpy(tmp,"");
		for(int j=0;j<strlen(words[i]);j++)
        {
    		strcat(tmp,comp[words[i][j]-'a']);
		}
        
		for(int k=0;k<sindex;k++)
        {
		    if(strcmp(steak[k],tmp)==0)
            {
		        flag=1;
		        break;
            }
		}
        
		if(flag==0)
		    strcpy(steak[sindex++],tmp);
        
		flag=0;
	}
	return sindex;
}
int uniqueMorseRepresentations(char** words, int wordsSize) {
		char alpha[26][6]={".-", "-..." , "-.-.", "-..", "." ,
                          "..-.", "--.","....","..",".---","-.-",
                          ".-..","--","-.","---",".--.","--.-",".-.",
                          "...","-","..-","...-",".--","-..-","-.--",
                          "--.."};
						  
		int flag=0, sindex=0;
		char tmp[30];
		char steak[100][30];
		
		for(int i=0;i<wordsSize;i++)
		{
			strcpy(tmp,"");
			for(int j=0;j<strlen(words[i]);j++)
				strcat(tmp,alpha[words[i][j]-'a']);
			
			for(int k=0;k<sindex;k++)
			{
				if(!strcmp(steak[k],tmp))
				{
					flag=1;
					break;
				}
			}
			
			if(flag==0)
				strcpy(steak[sindex++],tmp);
			
			flag=0;
		}
		return sindex;
}
			
int uniqueMorseRepresentations(char** words, int wordsSize) {
		char alpha[26][6]={".-", "-..." , "-.-.", "-..", "." ,
                          "..-.", "--.","....","..",".---","-.-",
                          ".-..","--","-.","---",".--.","--.-",".-.",
                          "...","-","..-","...-",".--","-..-","-.--",
                          "--.."};
						  
						  
		int flag=0, sindex=0;
		char tmp[30];
		char steak[100][30];
		
		for(int i=0;i<wordsSize;i++)
		{
			strcpy(tmp,"");
			
			for(int j=0;j<strlen(words[i]);j++)
				strcat(tmp,alpha[words[i][j]-'a']);
			
			for(int k=0;k<sindex;k++)
			{
				if(!strcmp(tmp,steak[k]))
				{
					flag=1;
					break;
				}
			}
			
			if(flag==0)
				strcpy(steak[sindex++],tmp);
			
			flag=0;
		}
		return sindex;
}












