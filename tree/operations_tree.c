#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node *insert(struct node *head)
{
    struct node *temp, *parent, *current;

    while(1)
    {
        temp = (struct node *)malloc(sizeof(struct node *));
        printf("Enter the node to be inserted into the tree\n");
        scanf("%d", &temp->data);

        if(temp->data == 0)
            break;
        
        else
        {
            if(head == NULL)
                head = temp;
            
            else
            {
                current = head;
                while(current){
                    parent = current;

                    if(temp->data > current->data)
                    {
                        current = current->right;
                    }
                    else
                    {
                        current = current->left;
                    }
                }

                if(temp->data > parent->data)
                        parent->right = temp;
                
                else
                        parent->left = temp;
            }
        }
    }

    return head;

}

int count_nodes(struct node *temp)
{
    int x, y;

    if(temp != NULL)
    {
        x = count_nodes(temp->left);
        y = count_nodes(temp->right);

        return x+y+1;
    }

    return 0;
}

int count_internal_node(struct node *temp)
{
    int x,y;

    if(temp != NULL)
    {
        x = count_internal_node(temp->left);
        y = count_internal_node(temp->right);

        if(temp->left != NULL || temp->right != NULL)
        {
            return x+y+1;
        }
    }

    return 0;
}
int count_degree2_node(struct node *temp)
{
    int x, y;

    if(temp != NULL)
    {
        x = count_degree2_node(temp->left);
        y = count_degree2_node(temp->right);

        if(temp->left != NULL && temp->right != NULL)
            return x+y+1; 
        
    }

    return 0;
}

int count_leaf_node(struct node *temp)
{
    if(temp == NULL)
        return 0;
    
    if(temp->left == NULL && temp->right == NULL)
        return 1;
    
    return count_leaf_node(temp->left) + count_leaf_node(temp->right);

}

int total_sums(struct node *temp)
{
    int x, y;

    if(temp != NULL)
    {
        x = total_sums(temp->left);
        y = total_sums(temp->right);

        return x + y + temp->data;
    }

    return 0;
}

int count_degree1_node(struct node *temp)
{
    int x, y;

    if(temp != NULL)
    {
        x = count_degree1_node(temp->left);
        y = count_degree1_node(temp->right);

        if((temp->left == NULL || temp->right != NULL) && (temp->left != NULL || temp->right == NULL))
        {
            return x+y+1;
        }
    }

    return 0;
}
void traverse(struct node *temp)
{
    if(temp != NULL)
    {
        traverse(temp->left);
        printf("%d ", temp->data);
        traverse(temp->right);
    }
}
int main()
{
    struct node *head = NULL;
    int count = 0;

    head = insert(head);
    traverse(head);
    printf("\n");

    count = count_nodes(head);
    printf("Total Nodes are :::: %d\n", count);

    count = count_degree2_node(head);
    printf("Total Node with 2 Degree are :::: %d\n", count);

    count = count_internal_node(head);
    printf("Total Internal Nodes are :: %d\n", count);

    count = count_degree1_node(head);
    printf("Total Number of node with degree 1 :::: %d\n", count);

    count = count_leaf_node(head);
    printf("Total Number of Leaf Nodes are :::: %d\n", count);
    
    count = total_sums(head);
    printf("Sum of the nodes are :::: %d\n", count);
    return 0;

}