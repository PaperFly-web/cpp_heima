#include<iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <ctime>
#include <random>

//���������㷨  random_shuffle

void myPrint(int val)
{
	cout << val << " ";
}

void test01()
{
	srand((unsigned int)time(NULL));

	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
    random_device rd;                       // ����������ӣ���ȷ���ԣ�
    default_random_engine rng(rd());        // ���������
	//����ϴ�� �㷨 ����˳��
//	random_shuffle(v.begin(), v.end());
	shuffle(v.begin(), v.end(),rd);

	for_each(v.begin(), v.end(), myPrint);
	cout << endl;
}

int main() {

	test01();

	system("pause");

	return 0;
}