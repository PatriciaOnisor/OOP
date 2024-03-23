#include <iostream>
using namespace std;

template <class T>
class TreeNode {
public:
	TreeNode(const T& val) : value(val), first_child(nullptr), next_sibling(nullptr){}
void add_node(TreeNode<T>* node ){
	if (first_child == nullptr)
		first_child = node;

	else {
		TreeNode<T>* sibling = first_child;
		while (sibling->next_sibling != nullptr) {
			sibling = sibling->next_sibling;
		}
		sibling->next_sibling = node;
	}
}
void delete_node(TreeNode<T>* node) {
	if (first_child == node) {
		first_child = node->next_sibling;
	}
	else {
		TreeNode<T>* sibling = first_child;
		while (sibling != nullptr && sibling->next_sibling != node) {
			sibling = sibling->next_sibling;
		}
		if (sibling != nullptr) {
			sibling->next_sibling = node->next_sibling;
		}
	}
}
bool find(TreeNode<T>* node) {
    if (first_child == node) {
        return true;
    }
    else {
        TreeNode<T>* sibling = first_child;
        while (sibling != node && sibling->next_sibling != nullptr) {
            sibling = sibling->next_sibling;
        }
        if (sibling == node) {
            sibling->next_sibling = node->next_sibling;
            return true;
        }
        else {
            return false;
        }
    }
}

int count() const {
	int count = 0;
	TreeNode<T>* node = first_child;
	while (node != nullptr) {
		count++;
		node = node->next_sibling;
	}
	return count;
}

void insert(TreeNode<T>* parent, TreeNode<T>* node) {
//lalala
	if (parent == nullptr) {
		parent = node;
		return;
	}
	if (first_child == nullptr) {
		first_child = node;
		return;
	}
	TreeNode<T>* sibling = parent->first_child;
	while (sibling->next_sibling != nullptr) {
		sibling = sibling->next_sibling;
	}
	sibling->next_sibling = node;
}


void sort(bool (*callback)(const T&, const T&)) {

	bool swapped = true;
	TreeNode<T>* node;
	TreeNode<T>* last = nullptr;

	if (first_child == nullptr) {
		return;
	}

	while (swapped) {
		swapped = false;
		node = first_child;

		while (node->next_sibling != last) {
			if (callback != nullptr ? callback(node->value, node->next_sibling->value) : (node->value < node->next_sibling->value)) {
				T temp = node->value;
				node->value = node->next_sibling->value;
				node->next_sibling->value = temp;
				swapped = true;
			}
			node = node->next_sibling;
		}
		last = node;
	}
}


int get_node(int index) const {
	//lalala
	if (index == 0) {
		cout << "Value at node: " << value << endl;
	}
	else {
		TreeNode<T>* node = first_child;
		int count = 0;
		while (node != nullptr && count < index) {
			count++;
			node = node->next_sibling;
		}
		if (count == index && node != nullptr) {
			cout << "Value at node: " << node->value << endl;
		}
		else {
			cout << "Invalid index" << endl;
		}
	}

}



private:
	T value;
	TreeNode<T>* first_child;
	TreeNode<T>* next_sibling;
};



int main()
{
	TreeNode<int>* root = new TreeNode<int>(1);
	TreeNode<int>* node2 = new TreeNode<int>(2);
	TreeNode<int>* node3 = new TreeNode<int>(3);
	TreeNode<int>* node4 = new TreeNode<int>(4);

	root->add_node(node2);
	root->add_node(node3);
	node2->add_node(node4);

	int num_children = root->count();
	cout << "Number of children: " << num_children << endl;
	

	// TO DO: perform other operations on the tree

	return 0;
}

































/*void sort() {
//lalala
	bool swapped = true;
	TreeNode<T>* node;
	TreeNode<T>* last = nullptr;

	if (first_child == nullptr) {
		return;
	}

	while (swapped) {
		swapped = false;
		node = first_child;

		while (node->next_sibling != last) {
			if (node->value > node->next_sibling->value) {
				T temp = node->value;
				node->value = node->next_sibling->value;
				node->next_sibling->value = temp;
				swapped = true;
			}
			node = node->next_sibling;
		}
		last = node;
	}
	/////////////////////////////
	void sort(bool (*callback)(,)){
	if (callback == nullptr){
		if(a < b)
}
else
if (callback(node->value > node->next_sibling->value) == true) {
	T temp = node->value;
	node->value = node->next_sibling->value;
	node->next_sibling->value = temp;
	}
node = node->next_sibling;
}
}*/