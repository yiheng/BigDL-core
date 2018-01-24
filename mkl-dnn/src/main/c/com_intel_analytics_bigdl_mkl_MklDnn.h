/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_intel_analytics_bigdl_mkl_MklDnn */

#ifndef _Included_com_intel_analytics_bigdl_mkl_MklDnn
#define _Included_com_intel_analytics_bigdl_mkl_MklDnn
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_intel_analytics_bigdl_mkl_MklDnn
 * Method:    setNumThreads
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_intel_analytics_bigdl_mkl_MklDnn_setNumThreads
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_intel_analytics_bigdl_mkl_MklDnn
 * Method:    EngineCreate
 * Signature: (II)J
 */
JNIEXPORT jlong JNICALL Java_com_intel_analytics_bigdl_mkl_MklDnn_EngineCreate
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_intel_analytics_bigdl_mkl_MklDnn
 * Method:    EngineDestroy
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_intel_analytics_bigdl_mkl_MklDnn_EngineDestroy
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_intel_analytics_bigdl_mkl_MklDnn
 * Method:    StreamCreate
 * Signature: (I)J
 */
JNIEXPORT jlong JNICALL Java_com_intel_analytics_bigdl_mkl_MklDnn_StreamCreate
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_intel_analytics_bigdl_mkl_MklDnn
 * Method:    StreamSubmit
 * Signature: (JI[J)V
 */
JNIEXPORT void JNICALL Java_com_intel_analytics_bigdl_mkl_MklDnn_StreamSubmit
  (JNIEnv *, jclass, jlong, jint, jlongArray);

/*
 * Class:     com_intel_analytics_bigdl_mkl_MklDnn
 * Method:    StreamWait
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_com_intel_analytics_bigdl_mkl_MklDnn_StreamWait
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_intel_analytics_bigdl_mkl_MklDnn
 * Method:    StreamRerun
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_intel_analytics_bigdl_mkl_MklDnn_StreamRerun
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_intel_analytics_bigdl_mkl_MklDnn
 * Method:    StreamDestroy
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_intel_analytics_bigdl_mkl_MklDnn_StreamDestroy
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_intel_analytics_bigdl_mkl_MklDnn
 * Method:    MemoryDescInit
 * Signature: (I[III)J
 */
JNIEXPORT jlong JNICALL Java_com_intel_analytics_bigdl_mkl_MklDnn_MemoryDescInit
  (JNIEnv *, jclass, jint, jintArray, jint, jint);

/*
 * Class:     com_intel_analytics_bigdl_mkl_MklDnn
 * Method:    MemoryPrimitiveDescCreate
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_com_intel_analytics_bigdl_mkl_MklDnn_MemoryPrimitiveDescCreate
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     com_intel_analytics_bigdl_mkl_MklDnn
 * Method:    MemoryGetDataHandle
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_intel_analytics_bigdl_mkl_MklDnn_MemoryGetDataHandle
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_intel_analytics_bigdl_mkl_MklDnn
 * Method:    MemorySetDataHandle
 * Signature: (J[FI)J
 */
JNIEXPORT jlong JNICALL Java_com_intel_analytics_bigdl_mkl_MklDnn_MemorySetDataHandle
  (JNIEnv *, jclass, jlong, jfloatArray, jint);

/*
 * Class:     com_intel_analytics_bigdl_mkl_MklDnn
 * Method:    MemoryReleaseDataHandle
 * Signature: ([FJ)V
 */
JNIEXPORT void JNICALL Java_com_intel_analytics_bigdl_mkl_MklDnn_MemoryReleaseDataHandle
  (JNIEnv *, jclass, jfloatArray, jlong);

/*
 * Class:     com_intel_analytics_bigdl_mkl_MklDnn
 * Method:    PrimitiveCreate0
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_intel_analytics_bigdl_mkl_MklDnn_PrimitiveCreate0
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_intel_analytics_bigdl_mkl_MklDnn
 * Method:    PrimitiveCreate2
 * Signature: (J[J[II[JI)J
 */
JNIEXPORT jlong JNICALL Java_com_intel_analytics_bigdl_mkl_MklDnn_PrimitiveCreate2
  (JNIEnv *, jclass, jlong, jlongArray, jintArray, jint, jlongArray, jint);

/*
 * Class:     com_intel_analytics_bigdl_mkl_MklDnn
 * Method:    PrimitiveDescCreate
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_com_intel_analytics_bigdl_mkl_MklDnn_PrimitiveDescCreate
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     com_intel_analytics_bigdl_mkl_MklDnn
 * Method:    PrimitiveDescDestroy
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_intel_analytics_bigdl_mkl_MklDnn_PrimitiveDescDestroy
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_intel_analytics_bigdl_mkl_MklDnn
 * Method:    PrimitiveDestroy
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_intel_analytics_bigdl_mkl_MklDnn_PrimitiveDestroy
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_intel_analytics_bigdl_mkl_MklDnn
 * Method:    EltwiseForwardDescInit
 * Signature: (IIJFF)J
 */
JNIEXPORT jlong JNICALL Java_com_intel_analytics_bigdl_mkl_MklDnn_EltwiseForwardDescInit
  (JNIEnv *, jclass, jint, jint, jlong, jfloat, jfloat);

/*
 * Class:     com_intel_analytics_bigdl_mkl_MklDnn
 * Method:    EltwiseBackwardDescInit
 * Signature: (IJJFF)J
 */
JNIEXPORT jlong JNICALL Java_com_intel_analytics_bigdl_mkl_MklDnn_EltwiseBackwardDescInit
  (JNIEnv *, jclass, jint, jlong, jlong, jfloat, jfloat);

/*
 * Class:     com_intel_analytics_bigdl_mkl_MklDnn
 * Method:    LinearForwardDescInit
 * Signature: (IJJJJ)J
 */
JNIEXPORT jlong JNICALL Java_com_intel_analytics_bigdl_mkl_MklDnn_LinearForwardDescInit
  (JNIEnv *, jclass, jint, jlong, jlong, jlong, jlong);

/*
 * Class:     com_intel_analytics_bigdl_mkl_MklDnn
 * Method:    LinearBackwardDataDescInit
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_com_intel_analytics_bigdl_mkl_MklDnn_LinearBackwardDataDescInit
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     com_intel_analytics_bigdl_mkl_MklDnn
 * Method:    LinearBackwardWeightsDescInit
 * Signature: (JJJJ)J
 */
JNIEXPORT jlong JNICALL Java_com_intel_analytics_bigdl_mkl_MklDnn_LinearBackwardWeightsDescInit
  (JNIEnv *, jclass, jlong, jlong, jlong, jlong);

/*
 * Class:     com_intel_analytics_bigdl_mkl_MklDnn
 * Method:    BatchNormForwardDescInit
 * Signature: (IJFJ)J
 */
JNIEXPORT jlong JNICALL Java_com_intel_analytics_bigdl_mkl_MklDnn_BatchNormForwardDescInit
  (JNIEnv *, jclass, jint, jlong, jfloat, jlong);

/*
 * Class:     com_intel_analytics_bigdl_mkl_MklDnn
 * Method:    BatchNormBackwardDescInit
 * Signature: (IJJFJ)J
 */
JNIEXPORT jlong JNICALL Java_com_intel_analytics_bigdl_mkl_MklDnn_BatchNormBackwardDescInit
  (JNIEnv *, jclass, jint, jlong, jlong, jfloat, jlong);

/*
 * Class:     com_intel_analytics_bigdl_mkl_MklDnn
 * Method:    SoftMaxForwardDescInit
 * Signature: (IJI)J
 */
JNIEXPORT jlong JNICALL Java_com_intel_analytics_bigdl_mkl_MklDnn_SoftMaxForwardDescInit
  (JNIEnv *, jclass, jint, jlong, jint);

/*
 * Class:     com_intel_analytics_bigdl_mkl_MklDnn
 * Method:    ConvForwardDescInit
 * Signature: (IIJJJJ[I[I[II)J
 */
JNIEXPORT jlong JNICALL Java_com_intel_analytics_bigdl_mkl_MklDnn_ConvForwardDescInit
  (JNIEnv *, jclass, jint, jint, jlong, jlong, jlong, jlong, jintArray, jintArray, jintArray, jint);

/*
 * Class:     com_intel_analytics_bigdl_mkl_MklDnn
 * Method:    ConvBackwardWeightsDescInit
 * Signature: (IJJJJ[I[I[II)J
 */
JNIEXPORT jlong JNICALL Java_com_intel_analytics_bigdl_mkl_MklDnn_ConvBackwardWeightsDescInit
  (JNIEnv *, jclass, jint, jlong, jlong, jlong, jlong, jintArray, jintArray, jintArray, jint);

/*
 * Class:     com_intel_analytics_bigdl_mkl_MklDnn
 * Method:    ConvBackwardDataDescInit
 * Signature: (IJJJ[I[I[II)J
 */
JNIEXPORT jlong JNICALL Java_com_intel_analytics_bigdl_mkl_MklDnn_ConvBackwardDataDescInit
  (JNIEnv *, jclass, jint, jlong, jlong, jlong, jintArray, jintArray, jintArray, jint);

/*
 * Class:     com_intel_analytics_bigdl_mkl_MklDnn
 * Method:    PoolingForwardDescInit
 * Signature: (IIJJ[I[I[I[II)J
 */
JNIEXPORT jlong JNICALL Java_com_intel_analytics_bigdl_mkl_MklDnn_PoolingForwardDescInit
  (JNIEnv *, jclass, jint, jint, jlong, jlong, jintArray, jintArray, jintArray, jintArray, jint);

/*
 * Class:     com_intel_analytics_bigdl_mkl_MklDnn
 * Method:    PoolingBackwardDescInit
 * Signature: (IJJ[I[I[I[II)J
 */
JNIEXPORT jlong JNICALL Java_com_intel_analytics_bigdl_mkl_MklDnn_PoolingBackwardDescInit
  (JNIEnv *, jclass, jint, jlong, jlong, jintArray, jintArray, jintArray, jintArray, jint);

/*
 * Class:     com_intel_analytics_bigdl_mkl_MklDnn
 * Method:    ReorderPrimitiveDescCreate
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_com_intel_analytics_bigdl_mkl_MklDnn_ReorderPrimitiveDescCreate
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     com_intel_analytics_bigdl_mkl_MklDnn
 * Method:    MemoryPrimitiveDescEqual
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_com_intel_analytics_bigdl_mkl_MklDnn_MemoryPrimitiveDescEqual
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     com_intel_analytics_bigdl_mkl_MklDnn
 * Method:    PrimitiveGetPrimitiveDesc
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_intel_analytics_bigdl_mkl_MklDnn_PrimitiveGetPrimitiveDesc
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_intel_analytics_bigdl_mkl_MklDnn
 * Method:    PrimitiveDescQueryPd
 * Signature: (JII)J
 */
JNIEXPORT jlong JNICALL Java_com_intel_analytics_bigdl_mkl_MklDnn_PrimitiveDescQueryPd
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     com_intel_analytics_bigdl_mkl_MklDnn
 * Method:    PrimitiveDescQueryMemory
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_intel_analytics_bigdl_mkl_MklDnn_PrimitiveDescQueryMemory
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_intel_analytics_bigdl_mkl_MklDnn
 * Method:    PrimitiveDescGetSize
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_intel_analytics_bigdl_mkl_MklDnn_PrimitiveDescGetSize
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_intel_analytics_bigdl_mkl_MklDnn
 * Method:    LRNForwardDescInit
 * Signature: (IIJIFFF)J
 */
JNIEXPORT jlong JNICALL Java_com_intel_analytics_bigdl_mkl_MklDnn_LRNForwardDescInit
  (JNIEnv *, jclass, jint, jint, jlong, jint, jfloat, jfloat, jfloat);

/*
 * Class:     com_intel_analytics_bigdl_mkl_MklDnn
 * Method:    LRNBackwardDescInit
 * Signature: (IJJIFFF)J
 */
JNIEXPORT jlong JNICALL Java_com_intel_analytics_bigdl_mkl_MklDnn_LRNBackwardDescInit
  (JNIEnv *, jclass, jint, jlong, jlong, jint, jfloat, jfloat, jfloat);

/*
 * Class:     com_intel_analytics_bigdl_mkl_MklDnn
 * Method:    getFormat
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_intel_analytics_bigdl_mkl_MklDnn_getFormat
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_intel_analytics_bigdl_mkl_MklDnn
 * Method:    getSize
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_intel_analytics_bigdl_mkl_MklDnn_getSize
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif
