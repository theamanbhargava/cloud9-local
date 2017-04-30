#include <stdio.h>

//defining type
typedef struct list
{
int rec;
struct list *next;
}node;

node *start = NULL;


void main()
{
int max, response, search, delete;
printf("\nEnter number of elements in linked list");
scanf("%d", &max);
start = create(max); //creates linked list
while(1)
{
printf("\n\tMenu");
printf("1.Display all elements\n2.Search through the list\n3. Delete an element\n4.Exit");
scanf("%d", &response);
switch(response)
{
case 1 :
printf("Elements are : ")
traverse(start);	//traverses nodes of linked list 
break;
case 2 : printf("Enter element to be searched");
		scanf("%d", &search);
		if(search(start, ele)!=NULL)
		printf("Element found");
		else
		printf("Element not found");
break;
case 3 : printf("Enter element to be deleted")
break;
case 4 :
break; 
}


//insert function using max also
}
}

node create(int max)
{
node *link, *linker;
int i, data;
printf("\nEnter elements of array in order");
for(i=1; i<=max; i++) //1 through n elements 
{
	link = (node*)malloc(sizeof(node));	//Dynamically allocates memory
	start = link;
	scanf("%d",&data);
	node- >rec= data;
	link ->NULL;
	if(start==NULL)
	{
	start = link;
	}
	else
	{
	linker->next=link;
	linker=link;
	}
return start;
}

node traverse(int *link)
{
//traveres until pointer doesn't point to anything
while(link!=NULL)
	{
	printf("%d", link->rec);
	link=link->next;
	}
}

node search(node *p, int x)
{
while((p!=NULL) && (p->rec!=x))
{
p=p->next;
}
return p;
}

node delete(int ele)
{
node *p, *q, *r;
p=start;
	q=search(int, ele)

while((q!=NULL) && (q->rec!=ele))
	{
	p=q;
	q=q->next;
	}
	if(q==NULL)
	printf("Element not found");
	else
	{
		if(q==start)
		start=start->next;
		else
		r=q->next;
		p->next=r;
	}	
	q->next=NULL;
	free(q);
	return start;
}

void insert(int ele, int pos/*, int max*/)
{
/*if(pos>max+1)
printf("\nInvalid position entered");*/
int x;
node *p, *n, *r;
p=search(p, ele);
if(p==NULL)
	printf("\nElement not found");
else
{
	n=(node*)malloc(sizeof(node));
	printf("\nEnter element to be inserted");
	scanf("%d", &x);
	n->rec=x;
	r=p->next;
	n->next=r;
	p->next=n;	
}
}
