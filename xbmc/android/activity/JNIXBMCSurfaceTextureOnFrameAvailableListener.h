#pragma once
/*
 *      Copyright (C) 2016 Christian Browet
 *      http://xbmc.org
 *
 *  This Program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This Program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with XBMC; see the file COPYING.  If not, see
 *  <http://www.gnu.org/licenses/>.
 *
 */

#include "android/jni/JNIBase.h"

#include "android/jni/SurfaceTexture.h"

class CJNIXBMCSurfaceTextureOnFrameAvailableListener : public CJNISurfaceTextureOnFrameAvailableListener, public CJNIInterfaceImplem<CJNIXBMCSurfaceTextureOnFrameAvailableListener>
{
public:
  CJNIXBMCSurfaceTextureOnFrameAvailableListener();
  CJNIXBMCSurfaceTextureOnFrameAvailableListener(const CJNIXBMCSurfaceTextureOnFrameAvailableListener& other);
  CJNIXBMCSurfaceTextureOnFrameAvailableListener(const jni::jhobject &object) : CJNIBase(object) {}
  virtual ~CJNIXBMCSurfaceTextureOnFrameAvailableListener();
  
  static void RegisterNatives(JNIEnv* env);
    
  void onFrameAvailable(CJNISurfaceTexture) {}
  
protected:
  static void _onFrameAvailable(JNIEnv* env, jobject thiz, jobject surface);  
};
