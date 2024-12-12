#include <stdio.h>
#include <stdlib.h>

float	ft_average(int std[][2], int n,int m)
{
	int s = 0;
	float av = 0;
	while (s < n)
	{
		av += std[s][m];
		s++;
	}
	return (av / n);
}
float	ft_single_average(int res[][2],int student)
{
	int i = -1;
	float av = 0;
	while (++i < 3)
		av += res[student][i];
	return(av / 3);
}
int	main ()
{
	int n;
	int i = -1;
	int x = 0;
	printf("give me the number of students : ");
	scanf("%d", &n);
	int std[n][2];
	char name[n][50];
	while (x < n)
	{
		printf("give me the name of the student number %d :" , x + 1);
		scanf("%s", name[x++]);
	}
	x = 0;
	while (x < n)
	{
		printf("give me the result of the %d subject for the student %s:", i + 2, name[x]);
		scanf("%d", &std[x][++i]);
		if (i == 2) x++, i = -1;
	}
	i = -1;
	while (++i < 3)
		printf("the average of the subject number %d  is  %.2f \n",i+1 , ft_average(std, n,i));
	i = -1;
	x = 0;
	while (++i < n)
	{
		printf("the average of %s is %f \n" , name[x], ft_single_average(std,x));
		x++;
	}
}
