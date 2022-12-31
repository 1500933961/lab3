int main()
{
	int a = 1, b = 2, c = 3;
	if(a<b || a<c && b<c || a==b || a==c)
	{
		a = 4;
	}else{
		b=  5;
	}
	while(a > b)
	{
		a = 6;
		break;
	}
	if (a > b)
	{
		a = 6;
	}
	return 0;
	//6
	/*9*/
}

int func1(int a, int b[], int c[1], int d[][10])
{
	a = 666;
	int aa[2] = {1,2};
	return a;
}