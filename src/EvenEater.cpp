//
// Created by Harrison Baker on 8/5/24.
//

#include "../include/EvenEater.h"
#include "../include/OddFoodException.h"


string EvenEater::eat(int num) {
		if (num % 2 == 0)
		{
			return "Yum";
		}
		else
		{
			throw OddFoodException();
		}


}
