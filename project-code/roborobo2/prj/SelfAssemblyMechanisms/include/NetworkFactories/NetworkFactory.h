#ifndef ROBOROBO2_NETWORKFACTORY_H
#define ROBOROBO2_NETWORKFACTORY_H

#include <neuralnetworks/NeuralNetwork.h>
#include <memory>
enum class ANNType{MLP};
class NetworkFactory
{
    private:
    protected:
        int _nInputNodes;
        int _nOutputNodes;

    public:
        static ANNType factoryType;
        virtual Neural::NeuralNetwork* create() = 0;
        static std::shared_ptr<NetworkFactory> createFactory(int nInputNodes, int nOutputNodes);
};


#endif //ROBOROBO2_NETWORKFACTORY_H
