struct ListNodes 
{
	char words[100];
	int count;
	struct ListNodes *next;
};

bool isExisted(char **banned, int bannedSize, char *strCur)
{
	for(int i=0;i<bannedSize;i++)
	{
		if(strcasecmp(banned[i],strCur)==0)
			return true;
	}
	return false;
}

bool isFinded(struct ListNodes *head, struct ListNodes *strCur)
{
	struct ListNodes *cur=head;
	while(cur)
	{
		if(strcasecmp(cur->words,strCur)==0)
		{
			cur->count++;
			return true;
		}
		cur=cur->next;
	}
	return false;
}

struct ListNodes* addList(struct ListNodes *head, struct ListNodes *strCur)
{
	struct ListNodes *tmp=calloc(1,sizeof(struct ListNodes));
    strcpy(tmp->words,strCur);
	tmp->count=1;
	
	if(!head)
		return tmp;
	
	tmp->next=head;
	head=tmp;
	return head;
}

struct ListNodes* findMax(struct ListNodes *head)
{
	struct ListNodes *cur=head;
	struct ListNodes *tmp=NULL;
	int max=0;
	while(cur)
	{
		if(cur->count>max)
		{
			max=cur->count;
			tmp=cur;
		}
		cur=cur->next;
	}
	
    for(int i=0;i<strlen(tmp->words);i++)
	{
		tmp->words[i]=tolower(tmp->words[i]);
	}
	return tmp;
}

char* mostCommonWord(char* paragraph, char** banned, int bannedSize)
{
	char *marker=" ,.!?;:'";
	char* strCur=strtok(paragraph,marker);
	struct ListNodes *head=NULL;
	while(strCur)
	{
		if(!isExisted(banned, bannedSize, strCur))
		{
			if(!isFinded(head,strCur))
				head=addList(head,strCur);
		}
		strCur=strtok(NULL,marker);
	}
	struct ListNodes* maxList=findMax(head);
	return maxList->words;
}
