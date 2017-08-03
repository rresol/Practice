void MorrisTraversal(root)
{
  if(root==NULL)
    return;
  current = root;
  while(current!=NULL)
  {
      if(current->left==NULL)
      {
        current = current->right;
      }
      else
      {
      pre = current->left;
      while(pre->right!=NULL || pre->right!=current)
      {
        pre = pre->right;
      }
      if(pre->right==NULL)
      {
        pre->right = current;
        current = current->left;
      }
      if(pre->right==current)
      {
        pre->right = NULL;
        cout<<current->data;
        current = current->right;
      }
    }
  }
}
