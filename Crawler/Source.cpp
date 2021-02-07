#include<iostream>

using namespace std;

int main()
{
	int choice = 0;
	int dimension;
	int key;
	int step, _step;
	int firstSpace;

	cout << "Enter Your Choice\n";
	cout << "1. Rectangle 1\n";
	cout << "2. Rectangle 2\n";
	cout << "3. Rectangle 3\n";
	cout << "4. Rectangle 4\n";
	cout << "5. Rhomb (Only Odd)\n";
	cout << "6. Circle\n";
	cout << "7. Close Application\n";

	while (true)
	{
		
		cin >> choice;
		cout << "Enter Your dimension\n";
		cin >> dimension;

		switch (choice)
		{
		case 1:
			try
			{
				for (int i = 0; i < dimension; i++)
				{
					for (int k = 0; k < i; k++)
					{
						cout << "*";
					}
					cout << "\n";
				}
			}
			catch (exception e)
			{
				cout << e.what();
			}		
			break;
		case 2:
			try
			{
				for (int i = dimension - 1; i >= 0; i--)
				{
					for (int k = 0; k < i; k++)
					{
						cout << "*";
					}
					cout << "\n";
				}
			}
			catch (exception e)
			{
				cout << e.what();
			}		
			break;
		case 3:
			try
			{
				for (int i = 0; i < dimension; i++)
				{
					for (int k = 0; k < dimension - i + 1; k++)
					{
						cout << " ";
					}
					for (int j = 0; j < i + 1; j++)
					{
						cout << "*";
					}
					cout << "\n";
				}
			}
			catch (exception e)
			{
				cout << e.what();
			}	
			break;
		case 4:
			try
			{
				if (dimension % 2 == 0)
					dimension = dimension - 1;

				step = (dimension + 1) / 2;
				firstSpace = (dimension - 1) / 2;

				for (int i = 0; i < step; i++)
				{
					for (int k = 0; k < firstSpace; k++)
					{
						cout << " ";
					}
					for (int j = 0; j < ((i + 1) * 2) - 1; j++)
					{
						cout << "*";
					}
					for (int t = 0; t < firstSpace; t++)
					{
						cout << " ";
					}
					firstSpace--;
					cout << "\n";
				}
			}
			catch (exception e)
			{
				cout << e.what();
			}
			break;
		case 5:
			try
			{
				if (dimension % 2 == 0)
					dimension = dimension - 1;

				step = (dimension + 1) / 2;
				firstSpace = (dimension - 1) / 2;

				_step = dimension - 2;

				for (int i = 0; i < dimension; i++)
				{
					for (int k = 0; k < firstSpace; k++)
					{
						cout << " ";
					}

					if (i < step)
					{
						for (int j = 0; j < ((i + 1) * 2) - 1; j++)
						{
							cout << "*";
						}
					}
					else
					{
						for (int j = 0; j < _step; j++)
						{
							cout << "*";
						}
						_step -= 2;
					}
					for (int t = 0; t < firstSpace; t++)
					{
						cout << " ";
					}
					if (i < step - 1)
						firstSpace--;
					else
						firstSpace++;
					cout << "\n";
				}
			}
			catch (exception e)
			{
				cout << e.what();
			}
			break;
		case 6:
			try
			{

			}
			catch (exception e)
			{
				cout << e.what();
			}
			break;
		case 7:
			try
			{

			}
			catch (exception e)
			{
				cout << e.what();
			}
			break;
		default:
			try
			{

			}
			catch (exception e)
			{
				cout << e.what();
			}
			break;
		}

		cout << "Enter any key";
		cin >> key;
	}
	
	return 0;
}