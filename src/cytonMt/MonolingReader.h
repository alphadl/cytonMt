/*
Copyright 2018 XIAOLIN WANG (xiaolin.wang@nict.go.jp; arthur.xlw@gmail.com)

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

#ifndef _CYTONMT_MONOLINGREADER_H_
#define _CYTONMT_MONOLINGREADER_H_

#include "basicHeads.h"
#include "HostMatrix.h"
#include "Vocabulary.h"

using namespace cytonLib;

namespace cytonMt
{

class MonolingReader
{
	ifstream file;
public:
	Vocabulary* vocab;
	string fileName;

	void init(const string& file_name_, Vocabulary* vocab_);

	void reset();

	void closeFile();

	int read_mini_batch(int batchSize, bool ignoreUnk, HostMatInt& matrix, string* raw);


};

} /* namespace cudaRnnTrans */

#endif /* MONOLINGREADER_H_ */
