#include <iostream>

using namespace std;

int main()
{
	int D, M, Y, DI, MI, YI;

	cout << "inserisci il giorno" << endl;
	cin >> D;
	cout << "inserisci il mese" << endl;
	cin >> M;
	cout << "inserisci l'anno" << endl;
	cin >> Y;

	MI = M;
	DI = D;
	YI = Y;

	M = M - 2;

	if (M <= 2)
	{
		Y = Y - 1;
		M = M + 12;
	}

	D = D + Y + (int)(Y / 4) - (int)(Y / 100) + (int)(Y / 400) + (int)(31 * M / 12);
	D = D - (int)(D / 7)*7;
	
	cout << "il " << DI << "/" << MI << "/" << YI << " era/e'/sara':" << endl;

	if (D == 0)
	{
		cout << "domenica" << endl;
	}else{
		if (D == 1)
		{
			cout << "lunedi'" << endl;
		}else{
			if (D == 2)
			{
				cout << "martedi'" << endl;
			}else{
				if (D == 3)
				{
					cout << "mercoledi'" << endl;
				}else{
					if (D == 4)
					{
						cout << "giovedi'" << endl;
					}else{
						if (D == 5)
						{
							cout << "venerdi'" << endl;
						}else{
							if (D == 6)
							{
								cout << "sabato" << endl;
							}
						}
					}
				}
			}
		}

	}
	system("pause");
}
