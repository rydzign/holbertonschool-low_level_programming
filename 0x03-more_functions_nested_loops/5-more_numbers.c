void more_numbers(void)
{
	int num, plc;
	for (plc= 0;plc<=9;plc++)
		for (num=0; num <= 14; num ++
			{			     if(num>=10)
					_putchar((num/10) + '0');
				_putchar((num%10) + '0');
			}
			     _putchar ('\n')
