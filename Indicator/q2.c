#include"my_function2.c"
void main()
{
	int r,c,a[r][c];
    r = getint("row");
    c = getint("column");
    arrayinput(a,r,c);
    cubeofarray((int *)a,r,c);

}
