/***********************************************************************
  * Copyright (c) 2012, Baidu Inc. All rights reserved.
  * 
  * Licensed under the BSD License
  * you may not use this file except in compliance with the License.
  * You may obtain a copy of the License at
  * 
  *      license.txt
  *********************************************************************/

/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class bgcc_Transaction */

#ifndef _Included_bgcc_Transaction
#define _Included_bgcc_Transaction
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     bgcc_Transaction
 * Method:    create
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_bgcc_Transaction_create
  (JNIEnv *, jobject);

/*
 * Class:     bgcc_Transaction
 * Method:    destroy
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_bgcc_Transaction_destroy
  (JNIEnv *, jobject);

/*
 * Class:     bgcc_Transaction
 * Method:    getCurrentTicketId
 * Signature: (Lbgcc/Protocol;ILjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_bgcc_Transaction_getCurrentTicketId
  (JNIEnv *, jobject, jobject, jint, jstring);

/*
 * Class:     bgcc_Transaction
 * Method:    getTicketId
 * Signature: (Lbgcc/Protocol;ILjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_bgcc_Transaction_getTicketId
  (JNIEnv *, jobject, jobject, jint, jstring);

#ifdef __cplusplus
}
#endif
#endif
