bool checkPrime(string number)
{

	int
		num = stoi(number);

	for (
		int
			i = 2;
		i * i <= num; i++)

		if ((num % i) == 0)
			return false;
	return true;
}

int countPrimeStrings(string number)
{

	if (number.length() == 0)
		return 0;

	if (number.length() <= 6 and checkPrime(number))
		return 1;
	else
	{
		int numLen = number.length();

		int ans = 1000000;

		for (int
				 i = 1;
			 i <= 6 && i <= numLen; i++)
		{

			if (checkPrime(number.substr(0, i)))
			{

				// Recursively call the function

				// to check for the remaining string

				int
					val = splitIntoPrimes(number.substr(i));

				if (val != -1)
				{

					// Evaluating minimum splits

					// into Primes for the suffix

					ans = min(ans, 1 + val);
				}
			}
		}

		// Checks if no combination found

		if (ans == 1000000)

			return -1;

		return ans;
	}
}
