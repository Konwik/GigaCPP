#include <iostream>
#include <Eigen/Dense>

using Eigen::MatrixXd;

int main() {
	int data[] = { 1,2,3,4,5,6 };
	Eigen::Map<Eigen::RowVectorXi> v(data, 3); // will map first three objects of array
	std::cout << v << std::endl; //gives out starting 3 elements of data array
}