#include <stdio.h>  
#include <stdlib.h>  

#define SIZE 10  

typedef struct tagNode{
	int value;
	struct tagNode* left;
	struct tagNode* right;
}treeNode;

//��ӡ����  
void displayArray(int array[], int size){
	printf("the array is:");
	int i;
	for (i = 0; i<size; i++){
		printf("%d ", array[i]);
	}
	printf("\n");
}

//��������˳�������  
void displayTree(treeNode* node){
	if (node == NULL) return;

	if (node->left != NULL){
		displayTree(node->left);
	}

	printf("%d ", node->value);

	if (node->right != NULL){
		displayTree(node->right);
	}
}

//������nodeΪ�ڵ���������Ƿ����vlaue�Ľڵ�  
treeNode* searchTree(treeNode* node, int value){
	if (node->value == value){
		return node;
	}
	else if (node->value > value){
		if (node->left != NULL){
			return searchTree(node->left, value);
		}
		else{
			return NULL;
		}
	}
	else{
		if (node->right != NULL){
			return searchTree(node->right, value);
		}
		else{
			return NULL;
		}
	}
}

//������nodeΪ�ڵ���������Ƿ����vlaue�Ľڵ�,parentΪ���ҵ��Ľڵ�ĸ��ڵ㡣  
//dirΪ1��ʾparent�ڵ����ڵ�Ϊ���ҽ��  
//dirΪ2��ʾparent�ڵ���ҽڵ�Ϊ���ҽ��  
treeNode* searchTreeWithParent(treeNode* node, treeNode** parent, int* dir, int value){
	if (node->value == value){
		return node;
	}
	else if (node->value > value){
		if (node->left != NULL){
			*dir = 1;
			*parent = node;
			return searchTreeWithParent(node->left, parent, dir, value);
		}
		else{
			return NULL;
		}
	}
	else{
		if (node->right != NULL){
			*dir = 2;
			*parent = node;
			return searchTreeWithParent(node->right, parent, dir, value);
		}
		else{
			return NULL;
		}
	}
}

//��iNode���뵽��nodeΪ���ڵ������  
void insertNode(treeNode* node, treeNode* iNode){
	if (iNode->value >= node->value && node->right != NULL){
		insertNode(node->right, iNode);
		return;
	}

	if (iNode->value < node->value && node->left != NULL){
		insertNode(node->left, iNode);
		return;
	}

	if (iNode->value >= node->value && node->right == NULL){
		node->right = iNode;
	}

	if (iNode->value < node->value && node->left == NULL){
		node->left = iNode;
	}
}

//����rootΪ���ڵ������ɾ��ֵΪvalue�Ľڵ�  
void deleteNode(treeNode** root, int value){
	treeNode* parent = NULL;
	int dir = -1;
	treeNode* deleteNode = searchTreeWithParent(*root, &parent, &dir, value);
	if (deleteNode == NULL){
		printf("%s\n", "node not found");
	}
	else{
		if (deleteNode->left == NULL && deleteNode->right == NULL)
		{
			//��Ӧ˵���е�a  
			if (parent != NULL){
				if (dir == 1)
					parent->left = NULL;
				else
					parent->right = NULL;
			}
			else{//��Ӧ˵���е�b  
				*root = NULL;
			}
		}
		else if (deleteNode->left != NULL && deleteNode->right == NULL){
			//��Ӧ˵���е�c  
			if (parent != NULL){
				if (dir == 1)
					parent->left = deleteNode->left;
				else
					parent->right = deleteNode->left;
			}
			else{//��Ӧ˵���е�d  
				*root = deleteNode->left;
			}
		}
		else if (deleteNode->left == NULL && deleteNode->right != NULL){
			//��Ӧ˵���е�e  
			if (parent != NULL){
				if (dir == 1)
					parent->left = deleteNode->right;
				else
					parent->right = deleteNode->right;
			}
			else{//��Ӧ˵���е�f  
				*root = deleteNode->right;
			}
		}
		else{
			insertNode(deleteNode->left, deleteNode->right);
			//��Ӧ˵���е�g  
			if (parent != NULL){
				if (dir == 1)
					parent->left = deleteNode->left;
				else
					parent->right = deleteNode->left;
			}
			else{//��Ӧ˵���е�h  
				*root = deleteNode->left;
			}
		}
		free(deleteNode);
		deleteNode = NULL;
	}
}

//ʹ��array�����е�����������rootΪ���ڵ������  
void createTree(treeNode** root, int array[], int size){
	int i;

	*root = (treeNode*)malloc(sizeof(treeNode));
	(*root)->value = array[0];
	(*root)->left = NULL;
	(*root)->right = NULL;

	for (i = 1; i<size; i++){
		treeNode* child = (treeNode*)malloc(sizeof(treeNode));
		child->value = array[i];
		child->left = NULL;
		child->right = NULL;
		insertNode(*root, child);
	}
}

//ɾ����nodeΪ���ڵ����  
void deleteTree(treeNode* node){
	if (node == NULL) return;

	if (node->left != NULL){
		deleteTree(node->left);
	}

	if (node->right != NULL){
		deleteTree(node->right);
	}

	if (node->left == NULL && node->right == NULL){
		free(node);
		node = NULL;
	}
}

int main()
{

	int array[SIZE] = { 4, 1, 45, 78, 345, 23, 12, 3, 6, 21 };
	displayArray(array, SIZE);

	treeNode *root = NULL;

	createTree(&root, array, SIZE);

	printf("the tree is(left->middle->right):");
	displayTree(root);
	printf("\n");
	treeNode* parent = NULL;
	int dir = -1;
	int value = 21;
	if (searchTree(root, value) != NULL){
		printf("%s\n", "exist");
	}
	else{
		printf("%s\n", "not exist");
	}

	printf("delete value:%d ", value);
	deleteNode(&root, value);
	printf("\n");
	printf("the tree is(left->middle->right):");
	displayTree(root);
	printf("\n");

	deleteTree(root);
	return 0;
}