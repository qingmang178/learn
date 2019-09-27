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
    L = (List)malloc(sizeof(struct Node)); //malloc����void* ����ָ�룬������ͨ������ת��ǿ��ת��Ϊ�κ��������͵�ָ��
    //�����C++�У�����ֱ����new�������ڴ棬�����Զ�ʶ���ڴ��С��������ͬ���͵�ָ��
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
                pc = pc->Next;  //�ƶ�pc���
                pb = pb->Next; //�ƶ�pc���
        }
    }
    if(pa)
        pc->Next = pa;
    else
        pc->Next = pb;
    L1->Next = NULL;
    L2->Next = NULL; //������
    return L;
}

