/*在二维数组中查找数字*/
void Find(vector<int> vec, int target)
{
	bool isFound = false;
	if( vec.empty() || evc.at(0).empty())
		return isFound;
	
	int rows = vec.size();//所有的行数
	int cols = vec.at(0).size();//所有的列数
	
    int rowIndex = 0;//行数索引，从0 ~ rows - 1
	int colIndex = cols - 1;//列数索引，从 cols - 1 ~ 0
	
	while( rowIndex < rows && colIndex >= 0)
	{
		int result = vec[rowIndex][colIndex];
		if( target == result )
		{
			isFound = true;
			break;
		}
		else if( target < result )
			j--;
		else 
			i++;
	}
	
	return isFound;
}