/*
*第一个只出现一次的字符
*/

char FirstNotRepeatingChar(char *pString)
{
	if(pString == nullptr)
		return '\0';
	
	const int tableSize = 256;
	unsigned int hashTable[tableSize];
	for(unsigned i = 0; i < 256; i++)
		hashTable[i] = 0;
	
	char *pHashKey = pString;
	while(*pHashKey != '\0')
	{
		char ch = *pHashKey;
		hashTable[ch]++;
		pHashKey++;
	}
	
	pHashKey = pString;
	while(*pHashKey != '\0')
	{
		char ch = *pHashKey;
		if( hashTable[ch] == 1)
			return ch;
		pHashKey++;
	}
	
	return '\0';
}

int FirstNotRepeatingChar(string str)
{
	if(str.empty())
		return -1;
	int *nums = new int[256];
	for(int i = 0; i < 256; i++)
		nums[i] = 0;
	
	int i = 0;
	int len = str.size();
	for(int i = 0; i < len; i++)
	{
		char ch = str[i];
		nums[ch]++;
		
	}
	
	i = 0;
	for(i = 0; i < len; i++)
	{
		char ch = str[i];
		if(nums[ch] == 1)
			return i;
	}
	
	return -1;
}