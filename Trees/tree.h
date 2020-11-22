#include<vector>
template<typename T>
class Tree
{
	public:
		T data;
		vector<Tree<T>* > child;
		
		Tree(T data)
		{
			this->data=data;
		}
};
