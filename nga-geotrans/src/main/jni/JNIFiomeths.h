// CLASSIFICATION: UNCLASSIFIED

/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class geotrans3_jni_JNIFiomeths */

#ifndef _Included_geotrans3_jni_JNIFiomeths
#define _Included_geotrans3_jni_JNIFiomeths
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     geotrans3_jni_JNIFiomeths
 * Method:    jniFiomethsCreate
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_geotrans3_jni_JNIFiomeths_jniFiomethsCreate
  (JNIEnv *, jobject, jstring);

/*
 * Class:     geotrans3_jni_JNIFiomeths
 * Method:    jniFiomethsCreate
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_geotrans3_jni_JNIFiomeths_jniFiomethsCreateExampleFile
  (JNIEnv *, jobject);

/*
 * Class:     geotrans3_jni_JNIFiomeths
 * Method:    jniFiomethsDestroy
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_geotrans3_jni_JNIFiomeths_jniFiomethsDestroy
  (JNIEnv *, jobject, jlong);

/*
 * Class:     geotrans3_jni_JNIFiomeths
 * Method:    jniCloseInputFile
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_geotrans3_jni_JNIFiomeths_jniCloseInputFile
  (JNIEnv *, jobject, jlong);

/*
 * Class:     geotrans3_jni_JNIFiomeths
 * Method:    jniCloseOutputFile
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_geotrans3_jni_JNIFiomeths_jniCloseOutputFile
  (JNIEnv *, jobject, jlong);

/*
 * Class:     geotrans3_jni_JNIFiomeths
 * Method:    jniConvertFile
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_geotrans3_jni_JNIFiomeths_jniConvertFile
  (JNIEnv *, jobject, jlong);

/*
 * Class:     geotrans3_jni_JNIFiomeths
 * Method:    jniGetDatumCode
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_geotrans3_jni_JNIFiomeths_jniGetDatumCode
  (JNIEnv *, jobject, jlong);

/*
 * Class:     geotrans3_jni_JNIFiomeths
 * Method:    jniGetCoordinateSystemParameters
 * Signature: (J)Lgeotrans3/parameters/CoordinateSystemParameters;
 */
JNIEXPORT jobject JNICALL Java_geotrans3_jni_JNIFiomeths_jniGetCoordinateSystemParameters
  (JNIEnv *, jobject, jlong);

/*
 * Class:     geotrans3_jni_JNIFiomeths
 * Method:    jniGetNumErrors
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_geotrans3_jni_JNIFiomeths_jniGetNumErrors
  (JNIEnv *, jobject, jlong);

/*
 * Class:     geotrans3_jni_JNIFiomeths
 * Method:    jniGetNumProcessed
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_geotrans3_jni_JNIFiomeths_jniGetNumProcessed
  (JNIEnv *, jobject, jlong);

/*
 * Class:     geotrans3_jni_JNIFiomeths
 * Method:    jniGetNumWarnings
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_geotrans3_jni_JNIFiomeths_jniGetNumWarnings
  (JNIEnv *, jobject, jlong);

/*
 * Class:     geotrans3_jni_JNIFiomeths
 * Method:    jniGetElapsedTime
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_geotrans3_jni_JNIFiomeths_jniGetElapsedTime
  (JNIEnv *, jobject, jlong);

/*
 * Class:     geotrans3_jni_JNIFiomeths
 * Method:    jniSetOutputFilename
 * Signature: (JLjava/lang/String;Ljava/lang/String;Lgeotrans3/parameters/CoordinateSystemParameters;)J
 */
JNIEXPORT jlong JNICALL Java_geotrans3_jni_JNIFiomeths_jniSetOutputFilename
  (JNIEnv *, jobject, jlong, jstring, jstring, jobject);

/*
 * Class:     geotrans3_jni_JNIFiomeths
 * Method:    jniUseNSEW
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_geotrans3_jni_JNIFiomeths_jniSetUseNSEW
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     geotrans3_jni_JNIFiomeths
 * Method:    jniUseMinutes
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_geotrans3_jni_JNIFiomeths_jniSetUseMinutes
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     geotrans3_jni_JNIFiomeths
 * Method:    jniUseSeconds
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_geotrans3_jni_JNIFiomeths_jniSetUseSeconds
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     geotrans3_jni_JNIFiomeths
 * Method:    jniSetLatLongPrecision
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_geotrans3_jni_JNIFiomeths_jniSetLatLongPrecision
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     geotrans3_jni_JNIFiomeths
 * Method:    jniSetSeparator
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_geotrans3_jni_JNIFiomeths_jniSetSeparator
  (JNIEnv *, jobject, jlong, jchar);

/*
 * Class:     geotrans3_jni_JNIFiomeths
 * Method:    jniSetLonRange
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_geotrans3_jni_JNIFiomeths_jniSetLonRange
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     geotrans3_jni_JNIFiomeths
 * Method:    jniShowLeadingZeros
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_geotrans3_jni_JNIFiomeths_jniShowLeadingZeros
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     geotrans3_jni_JNIFiomeths
 * Method:    jniWriteExampleCoord
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_geotrans3_jni_JNIFiomeths_jniWriteExampleCoord
  (JNIEnv *, jobject, jlong);

/*
 * Class:     geotrans3_jni_JNIFiomeths
 * Method:    jniSetGeodeticCoordinateOrder
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_geotrans3_jni_JNIFiomeths_jniSetGeodeticCoordinateOrder
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif

// CLASSIFICATION: UNCLASSIFIED
