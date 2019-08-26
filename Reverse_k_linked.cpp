
  node *ptr=head;
  if(ptr->next==NULL)
  return ptr;
  node*cur=ptr;
  node*prev=NULL;
  node*nex= NULL;
  while(k--)
    {
        nex=cur->next;
        cur->next=prev;
        prev=cur;
        cur=nex;
    }
    head=prev;
    ptr->next=cur;
    ptr=prev;
    while(nex!=NULL)
    {
        while(k--&&nex!=NULL)
        {
        nex=cur->next;
        cur->next=prev;
        prev=cur;
        cur=nex;   
        }
    ptr->next->next=cur;
    ptr->next=prev;
    ptr=prev;
    }
    return head;
