#include "Harl.hpp"

int	main(void)
{
	Harl harlOnlyKnowOneThing;

	harlOnlyKnowOneThing.complain("DEBUG");
	harlOnlyKnowOneThing.complain("INFO");
	harlOnlyKnowOneThing.complain("WARNING");
	harlOnlyKnowOneThing.complain("ERROR");
	return 0;
}