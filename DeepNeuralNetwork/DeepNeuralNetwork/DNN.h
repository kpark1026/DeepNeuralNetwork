#pragma once

#include <Eigen\Core>
#include "Config.h"
#include "RNG.h"

#include "Layer.h"
#include "Layer\FullyConnected.h"
#include "Layer\Convolutional.h"
#include "Layer\Pooling.h"

#include "Output.h"
#include "Output\MSE.h"
#include "Output\CrossEntropy.h"

#include "Optimizer.h"
#include "Optimizer\SGD.h"
#include "Optimizer\AdaDelta.h"
#include "Optimizer\AdaGrad.h"
#include "Optimizer\Adam.h"
#include "Optimizer\AdaMAX.h"
#include "Optimizer\AMSGrad.h"
#include "Optimizer\Nadam.h"
#include "Optimizer\NAG.h"
#include "Optimizer\RMSProp.h"
#include "Optimizer\Momentum.h"