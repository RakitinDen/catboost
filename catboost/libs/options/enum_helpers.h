#pragma once

#include "enums.h"

#include <util/generic/fwd.h>


TConstArrayRef<ELossFunction> GetAllObjectives();

bool IsSingleDimensionalError(ELossFunction lossFunction);

bool IsMultiDimensionalError(ELossFunction lossFunction);

bool IsForCrossEntropyOptimization(ELossFunction lossFunction);

bool IsForOrderOptimization(ELossFunction lossFunction);

bool IsForAbsoluteValueOptimization(ELossFunction lossFunction);

bool IsOnlyForCrossEntropyOptimization(ELossFunction lossFunction);

bool IsBinaryClassMetric(ELossFunction lossFunction);

bool IsClassificationObjective(ELossFunction lossFunction);

bool IsClassificationObjective(TStringBuf lossDescription);

bool IsRegressionObjective(ELossFunction lossFunction);

bool IsRegressionObjective(TStringBuf lossDescription);

bool IsMultiClassMetric(ELossFunction lossFunction);

bool IsGroupwiseMetric(ELossFunction lossFunction);

bool IsPairwiseError(ELossFunction lossFunction);

bool IsPlainMode(EBoostingType boostingType);

bool IsPlainOnlyModeLoss(ELossFunction lossFunction);

bool IsPairwiseScoring(ELossFunction lossFunction);

bool IsGpuPlainDocParallelOnlyMode(ELossFunction lossFunction);

bool ShouldGenerateYetiRankPairs(ELossFunction lossFunction);

bool IsPairLogit(ELossFunction lossFunction);

bool IsSecondOrderScoreFunction(EScoreFunction scoreFunction);

bool AreZeroWeightsAfterBootstrap(EBootstrapType type);

bool ShouldSkipCalcOnTrainByDefault(ELossFunction lossFunction);

