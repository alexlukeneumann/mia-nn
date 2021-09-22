#pragma once

#include <Layers/Layer.h>

namespace mia
{
    namespace Tests
    {
        class LayerManipulator
        {
        public:
            static Matrix & GetWeightsMatrix(layers::Layer & layer);
            static Matrix & GetBiasesMatrix(layers::Layer & layer);
            static Matrix & GetValuesMatrix(layers::Layer & layer);
        };
    }
}
