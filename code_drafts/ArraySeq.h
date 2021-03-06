/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
#include "../global/basics.hpp"
/* Header for class org_algo4j_collections_ArraySeq */

#ifndef _Included_org_algo4j_collections_ArraySeq
#define _Included_org_algo4j_collections_ArraySeq

#ifdef __cplusplus
extern "C" {
#endif /// __cplusplus

#undef org_algo4j_collections_ArraySeq_INITiAL_LENGTH
#define org_algo4j_collections_ArraySeq_INITiAL_LENGTH 5L

/**
 * Class:     org_algo4j_collections_ArraySeq
 * Method:    getInitValue
 * Signature: ()I
 */
JNIEXPORT auto JNICALL Java_org_algo4j_collections_ArraySeq_getInitPtr(
		JNIEnv *,
		jclass
) -> jint;


/**
 * Class:     org_algo4j_collections_ArraySeq
 * Method:    setElement
 * Signature: (IILjava/lang/Object;)V
 */
JNIEXPORT auto JNICALL Java_org_algo4j_collections_ArraySeq_setElement(
		JNIEnv *,
		jclass,
		jint,
		jint,
		jobject
) -> void;

/**
 * Class:     org_algo4j_collections_ArraySeq
 * Method:    expandSize
 * Signature: (II)V
 */
JNIEXPORT auto JNICALL Java_org_algo4j_collections_ArraySeq_expandSize(
		JNIEnv *,
		jclass,
		jint,
		jint
) -> void;

///**
// * Class:     org_algo4j_collections_ArraySeq
// * Method:    contains
// * Signature: (IILjava/lang/Object;)B
// */
//JNIEXPORT auto JNICALL Java_org_algo4j_collections_ArraySeq_contains(
//		JNIEnv *,
//		jclass,
//		jint,
//		jint,
//		jobject
//) -> jboolean;

/**
 * Class:     org_algo4j_collections_ArraySeq
 * Method:    getAll
 * Signature: (II)[Ljava/lang/Object;
 */
JNIEXPORT auto JNICALL Java_org_algo4j_collections_ArraySeq_getAll(
		JNIEnv *,
		jclass,
		jint,
		jint
) -> jobjectArray;


#ifdef __cplusplus
}
#endif /// __cplusplus

#endif /// _Included_org_algo4j_collections_ArraySeq

