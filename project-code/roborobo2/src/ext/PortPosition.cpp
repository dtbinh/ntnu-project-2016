//
// Created by christopher on 05.02.16.
//

#include "SelfAssembly/PortPosition.h"
#include "Utilities/Vector2.h"
#include "SelfAssembly/WorldModels/GroupRobotWorldModel.h"
#include <stdlib.h>



PortPosition::PortPosition(GroupRobotWorldModel *sourceRobotModel, double orientation) {
    _wm = sourceRobotModel;
    this->orientation = orientation;
}

Vector2<double> PortPosition::getPosition() const
{
    Vector2<double> pos;
    pos.x = _wm->_xReal + cos((_wm->getConnectionMechanism().getOrientation() + orientation) * M_PI / 180)*(gRobotWidth*0.5);
    pos.y = _wm->_yReal + sin((_wm->getConnectionMechanism().getOrientation() + orientation) * M_PI / 180)*(gRobotWidth*0.5);
    return pos;
}
double PortPosition::getOrientation() const
{
    return orientation + _wm->getConnectionMechanism().getOrientation();
}


