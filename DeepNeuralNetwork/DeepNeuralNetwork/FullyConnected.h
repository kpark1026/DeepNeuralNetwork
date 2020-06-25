#pragma once

#include <Eigen\Core>
#include <vector>
#include <stdexcept>
#include "Config.h"
#include "Layer.h"

template<typename Activation> <T>
class FullyConnected :public Layer{
	
private:
	typedef Eigen::Matrix<Scalar, Eigen::Dynamic, Eigen::Dynamic> Matrix;
	typedef Eigen::Matrix<Scalar, Eigen::Dynamic, 1> Vector;

	Matrix m_weight;
};