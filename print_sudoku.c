
void	ft_putchar(char c);

void	print_sudoku(int arr[9][9])
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			ft_putchar(arr[i][j] + 48);
			if(j != 8)
			{	
				ft_putchar(' ');
			}
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
