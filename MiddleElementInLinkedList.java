package LinkedListPractice.Questions;

import java.util.Objects;

public class MiddleElementInLinkedList
{
    static class Node
    {
        int data;
        Node next;

        Node(int d)
        {
            data = d;
            next = null;
        }
    }
    
    static int getMiddle(Node head)
    {
        // Your code here.
        Node slow = head;
        Node fast = head;
        while (fast != null && fast.next != null)
        {
            slow = slow.next;
            fast = fast.next.next;
        }
        return Objects.requireNonNull(slow).data;
    }

    public static void main(String[] args)
    {
        Node head = new Node(5);
        head.next = new Node(10);
        Node ref = head.next;
        ref.next = new Node(20);
        
        System.out.println(getMiddle(head));
    }
}
