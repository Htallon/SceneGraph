/*
  SceneGraph - 2010, PUC-Rio
  Student/Developer: Henrique d'Escragnolle-Taunay
  Teacher: Waldemar Celes
 */

#include "Utility.h"

const int Utility::MATRIX_SIZE = 16;
const int Utility::VECTOR_SIZE = 4;

int Utility::abs( int value )
{
	int aux = value;
	if( aux < 0 )
		aux *= -1;
	return aux;
}

float Utility::abs( float value )
{
	float aux = value;
	if( aux < 0 )
		aux *= -1;
	return aux;
}

double Utility::abs( double value )
{
	double aux = value;
	if( aux < 0 )
		aux *= -1;
	return aux;
}

void Utility::initVectorf( float *vec, int size, int value )
{
	for( int i = 0; i < size; i++ )
		vec[i] = value;
}

void Utility::initVectord( double *vec, int size, int value )
{
	for( int i = 0; i < size; i++ )
		vec[i] = value;
}

void Utility::initVectorgf( GLfloat *vec, int size, int value )
{
	for( int i = 0; i < size; i++ )
		vec[i] = value;
}

void Utility::copyVectorf( float *src, float* dest, int size )
{
	for( int i = 0; i < size; i++ )
		dest[i] = src[i];
}

void Utility::copyVectord( double *src, double* dest, int size )
{
	for( int i = 0; i < size; i++ )
		dest[i] = src[i];
}

void Utility::copyVectorgf( GLfloat *src, GLfloat* dest, int size )
{
	for( int i = 0; i < size; i++ )
		dest[i] = src[i];
}
