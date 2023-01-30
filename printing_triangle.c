#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
double calc_area(triangle *tr)
{
    double q=(tr->a+tr->b+tr->c)/2;
    return sqrt(q*(q-tr->a)*(q-tr->b)*(q-tr->c));
}
void sort_by_area(triangle *tr, int n)
{
    triangle temp;
    int i,j;
    for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
      {
         if(calc_area(&tr[j])>calc_area(&tr[j+1]))
      {
          temp=tr[j+1];
          tr[j+1]=tr[j];
          tr[j]=temp;
      }
      }

    }

}
int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	printf("\n \n");
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}
