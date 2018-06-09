#include <ctest.h>

#include "players.h"
#include "stroke.h"
#include "win.h"

CTEST(players, WHO_FIRST)
{
	//Given
	char name_1[20] = "Аркадий";
	char name_2[20] = "Василий";

	//When
	int real = who_first(name_1, name_2);

	//Then
	const int expected_1 = 1;
	const int expected_2 = 2;

	ASSERT_EQUAL(expected_1, real);
	ASSERT_EQUAL(expected_2, real);
}