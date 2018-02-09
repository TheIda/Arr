#include<iostream>
using namespace std;

class Average{
private:
	float array[100];
	float sum = 0;
	float avg = 0;
	int size;
public:
	float getSum();
	float getAverage();
	void readArray();
	void displayArray();
	float getLargestElement();
	float getSmallestElement();
};

//method to handle user input. 
void Average::readArray(){
	cout << "Enter the size of the array: ";
	cin >> size;
	cout << "Enter the value in the array: " << endl;
	for (int i = 0;i < size;i++){
		cin >> array[i];
	}
}
//method to sum all numbers in array
float Average::getSum(){
	for (int i = 0;i < size;i++){
		sum = sum + array[i];
	}
	return sum;
}
//method to output all the numbers input by the user. 
void Average::displayArray(){
	cout << "The elements entered by the user are: " << endl;
	for (int i = 0;i < size;i++){
		cout << array[i] << endl;
	}
}
float Average::getLargestElement(){
	float largest = array[0];
	for (int i = 1;i < size;i++){
		if (largest < array[i]){
			largest = array[i];
		}
	}
	return largest;
}
float Average::getSmallestElement(){
	float smallest = array[0];
	for (int i = 1;i < size;i++){
		if (smallest > array[i]){
			smallest = array[i];
		}
	}
	return smallest;
}
//method to output the average of all numbers input by the user.
float Average::getAverage(){
	float total = getSum();
	avg = total / (float)size;
	return avg;
}


int main(){
	Average a;
	a.readArray();
	a.displayArray();
	cout << "The average of the array elements is: " << a.getAverage() << endl;
	cout << "The largest of the array elements is: " << a.getLargestElement() << endl;
	cout << "The smallest of the array elements is: " << a.getSmallestElement() << endl;
	return 0;
}