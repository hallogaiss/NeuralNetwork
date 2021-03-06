
/*
	Copyright (C) 2019 Marek Zalewski aka Drwalin - All Rights Reserved
	
	Any one is authorized to copy, use or modify this file,
	but only when this file is marked as written by Marek Zalewski.
	
	No one can claim this file is originally written by them.
	
	No one can modify or remove this Copyright notice from this file.
*/

#ifndef RANDOM_H
#define RANDOM_H

namespace Random
{
	float Random( float max );
	float Random( float max, float deviation );
	float UniformRandom( float deviation = 1.0f );
};

#endif

