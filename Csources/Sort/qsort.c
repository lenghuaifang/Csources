int num[100];
int cmp_int(const void* _a , const void* _b)　　//参数格式固定
{
    int* a = (int*)_a;    //强制类型转换
    int* b = (int*)_b;
    return *a - *b;　　
}

qsort(num,100,sizeof(num[0]),cmp_int);


char word[100];
int cmp_char(const void* _a , const void* _b)　　//参数格式固定
{
    char* a = (char*)_a;    //强制类型转换
    char* b = (char*)_b;
    return *a - *b;　　
}

qsort(word,100,sizeof(word[0]),cmp_char);



double in[100];
int cmp_double(const void* _a , const void* _b)　　//参数格式固定
{
    double* a = (double*)_a;    //强制类型转换
    double* b = (double*)_b;
    return *a > *b ? 1 : -1;　  //特别注意
}

qsort(in,100,sizeof(in[0]),cmp_double); 



char word[100][10];
int cmp_string(const void* _a , const void* _b)　　//参数格式固定
{
    char* a = (char*)_a;　　//强制类型转换
    char* b = (char*)_b;
    return strcmp(a,b);
}

qsort(word,100,sizeof(word[0]),cmp_string); 





int num[100];

int fun(const void *a, const void *b)
{
	int *tmp1=(int *)a;
	int *tmp2=(int *)b;
	return *tmp1-*tmp2;
}

void main()
{
	qsort(num,100,sizeof(int),fun);
}


int intCmp(const void *a,const void *b)
{
	return *(int *)a-*(int *)b;
}





