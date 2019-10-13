struct TreeNode
{
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
};

char* tree2str(struct TreeNode* t)
{
	if(t==NULL)
		return "";
	
	char *tmp=NULL;
	
	if(!t->left&&!t->right)
	{
		tmp=calloc(10,sizeof(char));
		sprintf(tmp,"%d",t->val);
	}
	else if(t->left&&!t->right)
	{
		char *left=tree2str(t->left);
		tmp=calloc(strlen(left)+10,sizeof(char));
		sprintf(tmp,"%d(%s)",t->val,left);
	}
	else if(!t->left&&t->right)
	{
		char *right=tree2str(t->right);
		tmp=calloc(strlen(right)+10,sizeof(char));
		sprintf(tmp,"%d()(%s)",t->val,right);
	}
	else if(t->left&&t->right)
	{
		char *left=tree2str(t->left);
		char *right=tree2str(t->right);
		tmp=calloc(strlen(left)+strlen(right)+10,sizeof(char));
		sprintf(tmp,"%d(%s)(%s)",t->val,left,right);
	}
	return tmp;
}

char* tree2str(struct TreeNode* t)
{
	if(!t)
		return "";
	
	char *str=NULL;
	
	if(!t->left&&!t->right)
	{
		str=calloc(10,sizeof(char));
		sprintf(str,"%d",t->val);
	}
	else if(t->left&&!t->right)
	{
		char* left=tree2str(t->left);
		str=calloc(strlen(left)+10,sizeof(char));
		sprintf(str,"%d(%s)",t->val,left);
	}
	else if(!t->left&&t->right)
	{
		char* right =tree2str(t->right);
		str=calloc(strlen(right)+10,sizeof(char));
		sprintf(str,"%d()(%s)",t->val,right);
	}
	else if(t->left&&t->right)
	{
		char* left=tree2str(t->left);
		char* right=tree2str(t->right);
		str=calloc(strlen(left)+strlen(right)+10,sizeof(char));
		sprintf(str,"%d(%s)(%s)",t->val,left,right);
	}
	return str;
}










