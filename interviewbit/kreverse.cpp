
  #include<bits/stdc++.h>
  using namespace std;
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };

ListNode* reverseList(ListNode* A, int B) {
    int i=1;
    if(B==1)
        return A;
    ListNode* prev;
    ListNode* curr=A;
    ListNode* next;
    ListNode* temp;
    ListNode* head=A;
    bool flag = true;
    int val =0;
    while(curr)
    {
        val++;
        if(i%B==1)
            temp = curr;
        next = curr->next;
        if(i%B!=1)
            curr->next = prev;
        prev = curr;
        curr = next;

        if(i%B==0)
        {
            cout<<"step1"<<endl;
            temp->next = next;
            //i = 1;
            cout<<temp->val<<endl;
            if(flag){
                A = prev;
                //cout<<head->val;
                flag = false;}
        }

        if(i%B!=0)
          i++;
        else
          i =1;

    }
    //cout<<val<<endl;
    return A;
}
ListNode *newNode(int key)
{
    ListNode *temp = new ListNode(key);

    temp->next = NULL;
    return temp;
}
int main()
{
    ListNode *head1 = newNode(1);
    head1->next = newNode(2);
    head1->next->next = newNode(3);
    head1->next->next->next = newNode(4);
    head1->next->next->next->next = newNode(5);
    head1->next->next->next->next->next = newNode(6);
    head1->next->next->next->next->next->next = newNode(7);
    head1->next->next->next->next->next->next->next = newNode(8);
    cout << "Given linked list\n";
    //printlist(head1);
    head1 = reverseList(head1,2);
    cout << "\nReversed linked list\n";
    //printlist(head1);
    while(head1)
    {
      cout<<head1->val<<endl;
      head1 = head1->next;
    }
    return 0;
}
