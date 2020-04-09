/*
*  MapboxVectorStyleSetC.h
*  WhirlyGlobeLib
*
*  Created by Steve Gifford on 4/8/20.
*  Copyright 2011-2020 mousebird consulting
*
*  Licensed under the Apache License, Version 2.0 (the "License");
*  you may not use this file except in compliance with the License.
*  You may obtain a copy of the License at
*  http://www.apache.org/licenses/LICENSE-2.0
*
*  Unless required by applicable law or agreed to in writing, software
*  distributed under the License is distributed on an "AS IS" BASIS,
*  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
*  See the License for the specific language governing permissions and
*  limitations under the License.
*
*/

#import "MapboxVectorStyleSetC.h"

namespace WhirlyKit
{

MapboxVectorStyleSetImpl::MapboxVectorStyleSetImpl(Scene *inScene)
{
    scene = inScene;
    vecManage = (VectorManager *)scene->getManager(kWKVectorManager);
    wideVecManage = (WideVectorManager *)scene->getManager(kWKWideVectorManager);
    markerManage = (MarkerManager *)scene->getManager(kWKMarkerManager);
    compManage = (ComponentManager *)scene->getManager(kWKComponentManager);
}

}
