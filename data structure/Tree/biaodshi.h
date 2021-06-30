typedef struct treenode tree;

struct treenode
{
    char data;
    tree *Lchild;
    tree *Rchild;
};

tree *root;

