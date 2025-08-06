#include<iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <ctime>
#include <random>

//常用排序算法  random_shuffle

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
    random_device rd;                       // 真随机数种子（非确定性）
    default_random_engine rng(rd());        // 随机数引擎
	//利用洗牌 算法 打乱顺序
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