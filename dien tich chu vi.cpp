#include <iostream>
using namespace std;
int main() {
	double canh, chuvi,dientich;
	// nhap do dai canh;
	cout << "nhap do dai cau canh hinh vuong:";
	cin >> canh;
	if (canh <=0) {
		cout << " do dai canh phai lon hon 0." << endl;
	}	else{
		// tinh chu vi va dien tich 
		double chuvi = 4 * canh;
		double dientich = canh * canh;
		// Xuat ket qua 
		cout << " chu vi hinh vuong:" << chuvi << endl;
		cout << " dien tich hinh vuong:" << dientich << endl;
	} 
	return 0;
}
