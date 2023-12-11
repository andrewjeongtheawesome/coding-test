#include <iostream>

int main()
{
	int caseNum = 0;
	int m = 0;
	int n = 0;
	int num[50];
	int count = 0;
	for(int i = 0; i<=caseNum; i++)
	{
		std::cin >> m >> n;
		for(int start  = 1; start<=m; start++)
		{
			for(int end = 1; end<=m; end++)
			{
				if(start == end)
				{
					
				}
				else if(start < end)
				{

				}
				else
				{
					break;
				}
			}
		}
	}
	std::cin >> caseNum;
	std::cout << caseNum << std::endl;
	return 0;
}