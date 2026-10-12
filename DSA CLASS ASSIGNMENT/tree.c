#include <stdio.h>
struct nodetype{
    int info;
    struct nodetype*right;
    struct nodetype*left;
    };
typedef struct nodetype node;
node* create_node(){
    node*newnode,*rt;
    newnode=(node*)malloc(sizeof(node));
    printf("Enter info: ");
    int n;
    scanf("%d",&n);
    newnode->info=n;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
node* addnode(node*rt,node*newnode){
    if(rt!=NULL){
        if(rt->info > newnode->info){
            if(rt->left==NULL)
                rt->left=newnode;
            else
                addnode(rt->left,newnode);
        }
        else if(rt->info < newnode->info){
            if(rt->right==NULL)
                rt->right=newnode;
            else
                addnode(rt->right,newnode);}

        else
            free(newnode);
        }

    else{
        rt=create_node();
        return rt;
    }}
void intraverse(node* rt){
    if(rt==NULL)
        return;
    else{
        intraverse(rt->left);
        printf("%d ",rt->info);
        intraverse(rt->right);
    }
}
void posttraverse(node* rt){
    if(rt==NULL)
        return;
    else{
        posttraverse(rt->left);
        posttraverse(rt->right);
        printf("%d ",rt->info);
    }
}
void pretraverse(node* rt){
    if(rt==NULL)
        return;
    else{
        printf("%d ",rt->info);
        pretraverse(rt->left);
        pretraverse(rt->right);
    }
}
int depth(node* rt){
    if(rt==NULL)
        return 0;
    else{
        int l=depth(rt->left);
        int r=depth(rt->right);
        if(r>l)
            return r+1;
        else
            return l+1;
    }

}

int main(){
    node *rt;
    int x;
    printf("Number of elements in Tree: \n");
    scanf("%d",&x);
    rt=create_node();
    for(int i=0;i<x-1;i++){
        addnode(rt,create_node());
    }
    printf("\nINORDER: ");
    intraverse(rt);
    printf("\nPOSTORDER: ");
    posttraverse(rt);
    printf("\nPREORDER: ");
    pretraverse(rt);
    printf("DEPTH: %d",depth(rt));
}
