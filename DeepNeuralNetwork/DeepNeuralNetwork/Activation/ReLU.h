#pragma once

#include <Eigen/Core>
#include "../Config.h"

class xx
{
private:
	typedef Eigen::Matrix<Scalar, Eigen::Dynamic, Eigen::Dynamic> Matrix;

public:
	static inline void activate(const Matrix& Z, Matrix& A){

	}

	static inline void apply_jacobian(const Matrix& Z, Matrix& A, Matrix& F, Matrix& G){

	}
};