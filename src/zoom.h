// This program is free software: you can use, modify and/or redistribute it
// under the terms of the simplified BSD License. You should have received a
// copy of this license along this program. If not, see
// <http://www.opensource.org/licenses/bsd-license.html>.
//
// Copyright (C) 2012, Javier Sánchez Pérez <jsanchez@dis.ulpgc.es>
// All rights reserved.


#ifndef OF_ZOOM_H
#define OF_ZOOM_H

#include "of.h"

/**
 *
 * Compute the size of a zoomed image from the zoom factor
 *
 **/
void zoom_size(int nx,      // width of the orignal image
               int ny, // height of the orignal image
               int *nxx, // width of the zoomed image
               int *nyy, // height of the zoomed image
               double factor // zoom factor between 0 and 1
               );

/**
 *
 * Downsample an image
 *
 **/
void zoom_out(const ofpix_t *I,    // input image
              ofpix_t *Iout, // output image
              const int nx, // image width
              const int ny, // image height
              const double factor // zoom factor between 0 and 1
              );


/**
 *
 * Function to upsample the image
 *
 **/
void zoom_in(const ofpix_t *I, // input image
             ofpix_t *Iout, // output image
             int nx, // width of the original image
             int ny, // height of the original image
             int nxx, // width of the zoomed image
             int nyy // height of the zoomed image
             );


#endif // OF_ZOOM_H