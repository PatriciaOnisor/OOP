#include "Functii.h"

int movie_compare_name(Movie a, Movie b)
{
	if (a.get_name() > b.get_name())
		return 1;
	if (a.get_name() < b.get_name())
		return -1;
	return 0;
}
int movie_compare_year(Movie a, Movie b) {
	if (a.get_year() > b.get_year())
		return 1;
	if (a.get_year() < b.get_year())
		return -1;
	return 0;
}
int movie_compare_score(Movie a, Movie b) {
	if (a.get_score() > b.get_score())
		return 1;
	if (a.get_score() < b.get_score())
		return -1;
	return 0;
}
int movie_compare_length(Movie a, Movie b) {
	if (a.get_length() > b.get_length())
		return 1;
	if (a.get_length() < b.get_length())
		return -1;
	return 0;
}
int movie_compare_passed_years(Movie a, Movie b) {
	if (a.get_years() > b.get_years())
		return 1;
	if (a.get_years() < b.get_years())
		return -1;
	return 0;
}
