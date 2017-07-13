/*
   jep - Java Embedded Python

   Copyright (c) JEP AUTHORS.

   This file is licensed under the the zlib/libpng License.

   This software is provided 'as-is', without any express or implied
   warranty. In no event will the authors be held liable for any
   damages arising from the use of this software.

   Permission is granted to anyone to use this software for any
   purpose, including commercial applications, and to alter it and
   redistribute it freely, subject to the following restrictions:

   1. The origin of this software must not be misrepresented; you
   must not claim that you wrote the original software. If you use
   this software in a product, an acknowledgment in the product
   documentation would be appreciated but is not required.

   2. Altered source versions must be plainly marked as such, and
   must not be misrepresented as being the original software.

   3. This notice may not be removed or altered from any source
   distribution.
*/

/*
 * Contains functions for converting java primitives to java boxed primitives
 */

#include "jep_platform.h"

#ifndef _Included_jbox
#define _Included_jbox

jobject JBox_Boolean(JNIEnv*, jboolean);
jobject JBox_Byte(JNIEnv*, jbyte);
jobject JBox_Short(JNIEnv*, jshort);
jobject JBox_Int(JNIEnv*, jint);
jobject JBox_Long(JNIEnv*, jlong);
jobject JBox_Float(JNIEnv*, jfloat);
jobject JBox_Double(JNIEnv*, jdouble);
jobject JBox_Char(JNIEnv*, jchar);

#endif // ifndef _Included_jbox
