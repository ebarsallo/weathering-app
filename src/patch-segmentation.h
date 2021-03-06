#pragma once
// ---------------------------------------------------------------------------
// patch-segmentation.h
// Tools to patch segment an image based on [FH04] method.
//
// author. ebarsall
//
//
// References:
// [FH04] Felzenswalb, P; Huttenlocher, D. Efficient graph-based image segmentation. 
//   Int. J. Comput. Vision 59 (September 2004), 167-181, 3
//
// Remarks
// Header file
// ---------------------------------------------------------------------------
#include <algorithm>
#include <hash_map>
#include <unordered_map>

#include "ip.h"
#include "Picture.h"
#include "DisjointSet.h"
#include "tools.h"
#include "params.h"



// ---------------------------------------------------------------------------
// Data structures
// ---------------------------------------------------------------------------

struct patch_s {
	int head;
	float weight;
	int size;
	DWORD c;
};
typedef patch_s patch_t;


// ---------------------------------------------------------------------------
// Routines
// ---------------------------------------------------------------------------

///<summary>Patch segment an image.</summary>
void segmentImg (Picture*, int *);

/// <summary>Segmentation algorithm of a graph</summary>
DisjointSet *segmentGraph(Graph*);

/// <summary>Get threshold based on the size of the components</summary>
float getThreshold(int, int);

