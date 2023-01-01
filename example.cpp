#include "example.h"

vector<double> square(vector<double>vec){

	for (int i=0; i<vec.size(); i++){
		vec[i]=vec[i]*vec[i];
	}

	return vec;
}
