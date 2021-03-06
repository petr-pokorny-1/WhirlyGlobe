/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_mousebird_maply_Material */

#ifndef _Included_com_mousebird_maply_Material
#define _Included_com_mousebird_maply_Material
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_mousebird_maply_Material
 * Method:    setAmbient
 * Signature: (Lcom/mousebird/maply/Point4d;)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_Material_setAmbient
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_mousebird_maply_Material
 * Method:    setDiffuse
 * Signature: (Lcom/mousebird/maply/Point4d;)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_Material_setDiffuse
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_mousebird_maply_Material
 * Method:    setSpecular
 * Signature: (Lcom/mousebird/maply/Point4d;)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_Material_setSpecular
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_mousebird_maply_Material
 * Method:    setSpecularExponent
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_Material_setSpecularExponent
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     com_mousebird_maply_Material
 * Method:    nativeInit
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_Material_nativeInit
  (JNIEnv *, jclass);

/*
 * Class:     com_mousebird_maply_Material
 * Method:    initialise
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_Material_initialise
  (JNIEnv *, jobject);

/*
 * Class:     com_mousebird_maply_Material
 * Method:    dispose
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_Material_dispose
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
