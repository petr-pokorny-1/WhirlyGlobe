/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_mousebird_maply_BillboardManager */

#ifndef _Included_com_mousebird_maply_BillboardManager
#define _Included_com_mousebird_maply_BillboardManager
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_mousebird_maply_BillboardManager
 * Method:    addBillboards
 * Signature: ([Lcom/mousebird/maply/Billboard;Lcom/mousebird/maply/BillboardInfo;Lcom/mousebird/maply/ChangeSet;)J
 */
JNIEXPORT jlong JNICALL Java_com_mousebird_maply_BillboardManager_addBillboards
  (JNIEnv *, jobject, jobjectArray, jobject, jobject);

/*
 * Class:     com_mousebird_maply_BillboardManager
 * Method:    enableBillboards
 * Signature: ([JZLcom/mousebird/maply/ChangeSet;)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_BillboardManager_enableBillboards
  (JNIEnv *, jobject, jlongArray, jboolean, jobject);

/*
 * Class:     com_mousebird_maply_BillboardManager
 * Method:    removeBillboards
 * Signature: ([JLcom/mousebird/maply/ChangeSet;)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_BillboardManager_removeBillboards
  (JNIEnv *, jobject, jlongArray, jobject);

/*
 * Class:     com_mousebird_maply_BillboardManager
 * Method:    nativeInit
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_BillboardManager_nativeInit
  (JNIEnv *, jclass);

/*
 * Class:     com_mousebird_maply_BillboardManager
 * Method:    initialise
 * Signature: (Lcom/mousebird/maply/Scene;)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_BillboardManager_initialise
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_mousebird_maply_BillboardManager
 * Method:    dispose
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_BillboardManager_dispose
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif