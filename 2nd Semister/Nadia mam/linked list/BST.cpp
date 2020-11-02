#define node struct Node
#include<iostream>
using namespace std;

node
{
    int data;
    node *left;
    node *right;
};

node *root = NULL;

void insert()
{
    int data;
    cout << "Enter data: ";
    cin >> data;

    node *tmp;
    tmp = new node;

    tmp->data = data;
    tmp->left = NULL;
    tmp->right = NULL;

    if(root == NULL) root = tmp;

    else
    {
        Node *p,*curr;
        p = root;
        curr = root;

        while(curr)
        {
            p = curr;
            if(tmp->data>curr->data) curr = curr->right;
            else curr = curr->left;
        }
        if(tmp->data>p->data) p->right = tmp;
        else p->left = tmp;
    }

}

void inorder(Node *tmp)
{
    if(!root) cout << "Tree is empty!" << endl;
    else
    {
        if(tmp->left)
            inorder(tmp->left);

        cout << tmp->data << " ";

        if(tmp->right)
            inorder(tmp->right);
    }
}

void preorder(Node *tmp)
{
    if(!root) cout << "Tree is empty!" << endl;
    else
    {

        cout << tmp->data << " ";

        if(tmp->left)
            preorder(tmp->left);

        if(tmp->right)
            preorder(tmp->right);
    }
}

void postorder(Node *tmp)
{
    if(!root) cout << "Tree is empty!" << endl;
    else
    {
        if(tmp->left)
            postorder(tmp->left);

        if(tmp->right)
            postorder(tmp->right);

        cout << tmp->data << " ";
    }
}

Node* search(int data)
{
    Node *p,*curr;
    p = root;
    curr = root;
    bool is_found = false;

    while(curr)
    {
        p = curr;
        if(data>curr->data) curr = curr->right;
        else if(data<curr->data) curr = curr->left;

        if(!curr) break;

        if(curr->data == data)
        {
            Node *child1,*child2;
            child1 = curr->left;
            child2 = curr->right;

            cout << endl << data << " found!" << endl;
            cout << "Parant of " << data << " is " << p->data << endl;

            if(child1 && child2)
                cout << "Child of " << data << " is " << child1->data << " and " << child2->data << endl;
            else if(child1)
                cout << "Child of " << data << " is " << child1->data << endl;
            else if(child2)
                cout << "Child of " << data << " is " << child2->data << endl;
            else
                cout << "No child Found!" << endl;

            return p;
        }
    }

    if(!is_found)
    {
        cout << endl << data << " not found!" << endl;
        return NULL;
    }
}

void dlt(int data)
{
    Node *p,*curr;
    p = root;
    curr = root;
    while(curr)
    {
        p = curr;
        if(data>curr->data) curr = curr->right;
        else if(data<curr->data) curr = curr->left;
        //prottekbar shift kortesi node gula.. pailei break maro
        if(!curr) break;

        if(data == curr->data) // jodi paya jay
        {
            if(curr->left==NULL && curr->right==NULL) // target node leaf node hole
            {
                if(curr==root) // tree te single node exist korle
                {
                    root = NULL;
                }
                else if(curr==p->left) // target ta parent er left e connect thakle
                {
                    p->left = NULL;
                    delete curr;
                }
                else // target ta parent er right e connect thakle
                {
                    p->right = NULL;
                    delete curr;
                }
            }

            else if(curr->left!=NULL && curr->right==NULL) // jodi single child thake connect node er && child ta shudhu left e connect thakle
            {
                if(curr == root) // jodi target root e hoy
                {
                    root = curr->left;
                    curr->left = NULL;
                    delete curr;
                }
                else if(curr==p->left) //target ta parent er left e connect thakle
                {
                    p->left = curr->left;
                    curr->left = NULL;
                    delete curr;
                }
                else // target ta parent er right e connect thkle
                {
                    p->right = curr->left;
                    curr->left = NULL;
                    delete curr;
                }
            }

            else if(curr->left==NULL && curr->right!=NULL) //same..single child er khetre...
            {
                if(curr==root)
                {
                    root = curr->right;
                    curr->right = NULL;
                    delete curr;
                }
                else if(curr==p->left)
                {
                    p->left = curr->right;
                    curr->right = NULL;
                    delete curr;
                }
                else
                {
                    p->right = curr->right;
                    curr->right = NULL;
                    delete curr;
                }
            }

            else // duita child thakle....
            {
                Node *childR;
                childR = curr->right;

                if(childR->left==NULL && childR->right==NULL) //child duitai leaf node hole
                {
                    curr->data = childR->data;
                    curr->right = NULL;
                    delete childR;
                }
                else if(childR->left==NULL && childR->right!=NULL) //child er left e kono node na thakle eitai min..
                {
                    curr->data = childR->data;
                    curr->right = childR->right;
                    childR->right = NULL;
                    delete childR;
                }
                else if(childR->left!=NULL) // left e node exist korle min khuija naw...
                {
                    Node *minchild,*tmpchildR,*pofminchildR;
                    tmpchildR = childR;
                    while(tmpchildR)
                    {
                        minchild = tmpchildR;
                        tmpchildR = tmpchildR->left;
                        if(tmpchildR==NULL) break;
                        if(tmpchildR->left==NULL) pofminchildR = minchild;
                    }

                    if(minchild->right==NULL)
                    {
                        curr->data = minchild->data;
                        delete minchild;
                    }
                    else
                    {
                        curr->data = minchild->data;
                        pofminchildR->left = minchild->right;
                        minchild->right = NULL;

                        delete minchild;
                    }
                }

            }
            return;
        }
    }


}

void menu()
{
    cout << endl << "1. Insert()" << endl;
    cout << "2. Search()" << endl;
    cout << "3. Delete()" << endl;
    cout << "4. Preorder()" << endl;
    cout << "5. Inorder()" << endl;
    cout << "6. Postorder()" << endl;
    cout << "7. Exit()" << endl;
}

int main()
{
    int ch,data;

    while(true)
    {
        menu();
        cin >> ch;
        switch(ch)
        {
        case 1:
            insert();
            break;
        case 2:
            cout << "Enter keyword to search: ";
            cin >> data;
            search(data);
            break;
        case 3:
            cout << "Enter keyword to delete: ";
            cin >> data;
            dlt(data);
            break;
        case 4:
            preorder(root);
            break;
        case 5:
            inorder(root);
            break;
        case 6:
            postorder(root);
            break;
        case 7:
            return 0;

        default:
            cout << "Invalid input!" << endl;
        }

    }


    return 0;
}
