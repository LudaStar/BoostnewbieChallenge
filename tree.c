
//이진 검색 트리의 노드 구조체
typedef struct node
{
    //노드의 값
    int number;
    
    //왼쪽 자식 노드
    struct node *left;
    
    //오른쪽 자식 노드
    struct node *right;
}
node;

bool search(node *tree)
{
    if(tree == NULL)
    {
        return false;
    }
    
    else if(50 < tree -> number)
    {
        return search(tree -> left);
    }
    
    else if(50 > tree -> number)
    {
        return search(tree->right);
    }
    
    else
    {
        return true;
    }
}