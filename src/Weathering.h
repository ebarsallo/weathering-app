#pragma once
// ---------------------------------------------------------------------------
// Weathering.h
// Appearance Editing by on weathering based on [XU11].
//
// author. ebarsall
//
//
// References:
// [XU11] Xue, S., Dorsey, J., & Rushmeier, H. (2011, June). Stone weathering 
//   in a photograph. In Computer Graphics Forum (Vol.30, No.4, pp. 189-1196). 
//   Blackwell Publishing Ltd.
//
// Remarks
// Header file
// ---------------------------------------------------------------------------
#include <time.h>

#include "ip.h"
#include "Picture.h"
#include "patch-segmentation.h"
#include "silhouette-erosion.h"

class Weathering
{
private:
	Picture* _pic;

public:
	Weathering(void);
	Weathering(std::wstring filename);
	~Weathering(void);

	// Operations
	void apply(void);
};

