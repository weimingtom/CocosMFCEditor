/****************************************************************************
 Copyright (c) 2014 Chukong Technologies Inc.

 http://www.cocos2d-x.org

 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:

 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 ****************************************************************************/

#ifndef __CCGL_H__
#define __CCGL_H__

#include "platform/CCPlatformConfig.h"
#if CC_TARGET_PLATFORM == CC_PLATFORM_TIZEN

#define GL_WRITE_ONLY GL_WRITE_ONLY_OES
#define glMapBuffer glMapBufferOES
#define GL_BGRA GL_BGRA_EXT
#define glClearDepth glClearDepthf

//fixme, if Tizen 2.4, don't need these define, but Tizen 2.3 need them
//#define glGenVertexArrays glGenVertexArraysOES
//#define glDeleteVertexArrays glDeleteVertexArraysOES
//#define glUnmapBuffer glUnmapBufferOES
//#define glBindVertexArray glBindVertexArrayOES
//#define GL_DEPTH24_STENCIL8 GL_DEPTH24_STENCIL8_OES

#include <Elementary_GL_Helpers.h>

ELEMENTARY_GLVIEW_GLOBAL_DECLARE();

#endif // CC_TARGET_PLATFORM == CC_PLATFORM_TIZEN

#endif // __CCGL_H__

