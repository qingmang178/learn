List Merge(List L1,List L2)
{
    List L,a,b,p;

    L = (List)malloc(sizeof(struct Node));
    a = L1->Next;
    b = L2->Next;
    p = L;
    while(a && b)
    {
    	if(a->Data <= b->Data)
    	{
    		p->Next = a;
    		a = a->Next;
    		p = p->Next;

		}
		else
		{
			p->Next = b;
			b = b->Next;
			p = p->Next;
			
		}
	}
	
	if(a)
	   p->Next = a;
	else
	   p->Next = b;
    
	L1->Next = NULL; 
	L2->Next = NULL; 
	return L;
} 


/////////////////////////////////////
List Merge( List L1, List L2 ){
    List pa,pb,pc,L;
    L = (List)malloc(sizeof(struct Node)); //malloc返回void* 类型指针，它可以通过类型转换强制转换为任何其它类型的指针
    //如果在C++中，可以直接用new来分配内存，可以自动识别内存大小，并分配同类型的指针
    pa = L1->Next;
    pb = L2->Next;
    pc = L;
    while(pa && pb){
        if(pa->Data <= pb->Data){
                pc->Next = pa;
                pc = pc->Next;
                pa = pa->Next;
        }else{
                pc->Next = pb;
                pc = pc->Next;  //移动pc向后
                pb = pb->Next; //移动pc向后
        }
    }
    if(pa)
        pc->Next = pa;
    else
        pc->Next = pb;
    L1->Next = NULL;
    L2->Next = NULL; //空链表
    return L;
}

