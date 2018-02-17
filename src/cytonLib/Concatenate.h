/*
Copyright 2018 XIAOLIN WANG (xiaolin.wang@nict.go.jp; arthur.xlw@google.com)

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#ifndef _CYTONLIB_CONCATENATE_H_
#define _CYTONLIB_CONCATENATE_H_

#include "DeviceMatrix.h"
#include "Variable.h"
#include "Layer.h"

namespace cytonLib
{

class Concatenate:public Layer
{
public:
	Variable* x0;
	Variable* x1;
	Variable y;

public:
	Variable* init(string tag_, Variable* x0_, Variable* x1_);

	void forward();

	void backward();


};

} /* namespace cytonLib */

#endif /* CONCATENATE_H_ */
