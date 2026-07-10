#include <iostream>
#include <Eigen/Dense>
#include <Eigen/IterativeLinearSolvers>

using Eigen::MatrixXd;

int main() {
	typedef float Dtype;
	using Matrix = Eigen::Matrix<Dtype, Eigen::Dynamic, Eigen::Dynamic>;
	int n = 1000;
	Matrix x(n, 1);
	Matrix y(n, 1);
	Eigen::LeastSquaresConjugateGradient<Matrix> gd;
	gd.setMaxIterations(1000);
	gd.setTolerance(0.001);
	gd.compute(x);
	auto b = gd.solve(y);
	Eigen::MatrixXf new_x(5, 2);
	new_x << 1, 2, 4, 5, 6, 7, 8, 9, 10, 11;
	auto new_y = new_x.array().rowwise() * b.transpose().array();
	auto b2 = (x.transpose() * x).ldlt().solve(x.transpose() * y);
	std::cout << b << b2 << std::endl;
	std::cin.get();
}
