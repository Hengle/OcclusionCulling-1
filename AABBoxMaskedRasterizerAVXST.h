/////////////////////////////////////////////////////////////////////////////////////////////
// Copyright 2017 Intel Corporation
//
// Licensed under the Apache License, Version 2.0 (the "License");
/////////////////////////////////////////////////////////////////////////////////////////////

#ifndef AABBOXMASKEDRASTERIZERAVXST_H
#define AABBOXMASKEDRASTERIZERAVXST_H

#include "AABBoxRasterizerAVX.h"

class MaskedOcclusionCulling;

class AABBoxMaskedRasterizerAVXST : public AABBoxRasterizerAVX
{
	public:
		AABBoxMaskedRasterizerAVXST(MaskedOcclusionCulling *moc);
		~AABBoxMaskedRasterizerAVXST();

		void TransformAABBoxAndDepthTest(CPUTCamera *pCamera, UINT idx);
		void WaitForTaskToFinish(UINT idx);
		void ReleaseTaskHandles(UINT idx);
	private:
		MaskedOcclusionCulling *mMaskedOcclusionCulling;
};

#endif //AABBOXMASKEDRASTERIZERAVXST_H