#include <iostream>
#define NUM 9

using namespace std;

int* counter(double amt, int* unit) {
	int* n = new int[NUM];
	int iamt = int(amt * 100 + 0.5);  //�ݿø�: 0.5 ���ѵڿ� �Ҽ��� ������ ��
	for (unsigned int i = 0; i < NUM; ++i) {
		n[i] = iamt / unit[i]; // ��: int ������ int
		iamt %= unit[i];       // ������
	}
	return n;
}


int main() {	
	double amt;
	cout << "Amount = ";
	cin >> amt;

	int unit[NUM] = { 2000, 1000, 500, 200, 100, 25, 10, 5, 1 };	
	char* header[NUM] = { "20D", "10D", "5D", "2D", "1D", "25C", "10C", "5C", "1C" };
	int* rst = counter(amt, unit);
	for (unsigned int i = 0; i < NUM; ++i) {
		cout << header[i] << " = " << rst[i] << endl;
	}
	delete[] rst;
	return 0;
}