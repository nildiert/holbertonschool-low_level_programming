# Linked Lists

----
## What is linked Lists?
see [Carnegie Mellon University](https://www.cs.cmu.edu/~adamchik/15-121/lectures/Linked%20Lists/linked%20lists.html)

> Markdown is a lightweight markup language, originally created by John Gruber and Aaron Swartz allowing people "to write using an easy-to-read, easy-to-write plain text format, then convert it to structurally valid XHTML (or HTML)".

----
## Types of Linked Lists
1. A singly linked list is described above.
2. A doubly linked list is a list that has two references, one to the next node and another to previous node. 

![](https://www.cs.cmu.edu/~adamchik/15-121/lectures/Linked%20Lists/pix/doubly.bmp)

----
## Examples 

     head = head.next;
![](https://www.cs.cmu.edu/~adamchik/15-121/lectures/Linked%20Lists/pix/linkedlist2.bmp)

    head.next = head.next.next;
![](https://www.cs.cmu.edu/~adamchik/15-121/lectures/Linked%20Lists/pix/linkedlist3.bmp)

    head.next = head.next.next;
![](https://www.cs.cmu.edu/~adamchik/15-121/lectures/Linked%20Lists/pix/linkedlist4.bmp)

## Linked List Operations
### addFirst

>The method creates a node and prepends it at the beginning of the list.  
![](https://www.cs.cmu.edu/~adamchik/15-121/lectures/Linked%20Lists/pix/prepend.bmp)

    public void addFirst(AnyType item)
    {
       head = new Node<AnyType>(item, head);
    }

### Traversing

>Start with the head and access each node until you reach null. Do not change the head reference. 


![](https://www.cs.cmu.edu/~adamchik/15-121/lectures/Linked%20Lists/pix/traverse.bmp)

    Node tmp = head;

    while(tmp != null) tmp = tmp.next;

### addLast 

>The method appends the node to the end of the list. This requires traversing, but make sure you stop at the last node 

![](https://www.cs.cmu.edu/~adamchik/15-121/lectures/Linked%20Lists/pix/append.bmp)

    public void addLast(AnyType item)
    {
       if(head == null) addFirst(item);
       else
       {
          Node<AnyType> tmp = head;
          while(tmp.next != null) tmp = tmp.next;
    
          tmp.next = new Node<AnyType>(item, null);
       }
    }

--

----
## Changelog
* 21-Mar-2019 Nildiert Jimenez

----
## Thanks
* [GeeksforGeeks](https://www.geeksforgeeks.org/data-structures/)