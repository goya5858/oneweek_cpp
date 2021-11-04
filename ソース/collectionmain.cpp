#include <iostream>
#include "../ヘッダ/collection.h"

int main(void){
	int array[] = { 1, 5, 4, 2, 3 };
    double array2[] = { 1.2, 5.3, 4.2, 2.7, 3.4 };

	Collection<int> *c = new Collection<int>(array, 5);
	c->showArray();
	cout << "整数" << c->getMax() << endl;
	cout << "小数" << c->getMin() << endl;
	delete c;

    Collection<double> *d = new Collection<double>(array2, 5);
	d->showArray();
	cout << "整数" << d->getMax() << endl;
	cout << "小数" << d->getMin() << endl;
	delete d;
	return 0;
}