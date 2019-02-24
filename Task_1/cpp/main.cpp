#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

int main()
{
	int n[20];
	int i = 0;
	ifstream file("file.txt");
	while(!file.eof())
	{
		file >> n[i];	
		int max_n = n[i], min_n = n[i];
		for (int k = 0; k < i; k++) // нашли максимум и минимум
		{
			if(n[k] >= max_n)
				max_n = n[k];
			if(n[k] <= min_n)
				min_n = n[k];
		}
		cout << i+1 <<") Min = " << min_n << " Max = " << max_n << "\t";
		i++;
		int counter = 0;
		for(int l = min_n; l < max_n; l++)
		{
			bool result = 0;
			for(int t = 0; t < i; t++)
			{
				if(l == n[t])
					result = 1;
			}
			if (!result)
			{
				counter++;
				cout << l << " ";			
			}
		}
		if(counter == 0)
			cout << "Full list.";
		cout << endl;
	}
	_getch();
	return 0;
}
