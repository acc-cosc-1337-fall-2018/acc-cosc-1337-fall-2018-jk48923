vector<int> get_dna_count(string dna)
{

	vector<int> result;

	int a{ 0 };
	int c{ 0 };
	int g{ 0 };
	int t{ 0 };

	for (int i = 0; i < dna.length(); i++)
	{
		if (dna[i] == 'A')
		{
			a += 1;

		}
		else if (dna[i] == 'C')
		{
			c += 1;
		}
		else if (dna[i] == 'G')
		{
			g += 1;
		}
		else if (dna[i] == 'T')
		{
			t += 1;
		}
		
	}

	result.push_back(a);
	result.push_back(c);
	result.push_back(g);
	result.push_back(t);

	return result;
}
