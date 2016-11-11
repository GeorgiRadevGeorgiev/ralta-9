#include <iostream>


using namespace std;

int main()
{

	/* 
	int broqch = 0;
	int masif[10] = {};

	for (int i = 0; i < 10; i++) {

		cout << "\nInput number " << i + 1 << " : ";
		cin >> masif[i];

		if (masif[i] > 5)
			broqch++;
	}
	cout << "\n" << broqch << endl;

	*/


	int masif[15] = {};
	bool flagA = false, flagB = false;

	for (int i = 0; i < 15; i++) {
		cout << "\nInput number " << i + 1 << " : ";
		cin >> masif[i];
	}
	
	for (int j = 0; j < 14; j++) {
		if (masif[j] < masif[j + 1])
			flagA = true;
		if (masif[j] > masif[j + 1])
			flagB = true;
	}
	if (flagA&&flagB)
		cout << "\nneither up nor  down"<<endl;
	else if (flagA) cout << "\nup"<<endl;
	else if (flagB) cout << "\ndown"<<endl;
	else cout << "\nconst"<<endl;





	system("pause");
	return 0;
}

