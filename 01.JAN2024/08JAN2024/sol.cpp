class Solution
{
public:
    Node *reverseList(Node *head)
    {
        if (head == NULL || head->next == NULL)
        {
            return head;
        }

        Node *reverseLL = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
        return reverseLL;
    }

    Node *merge(Node *head1, Node *head2)
    {
        if (head1 == nullptr)
        {
            return head2;
        }
        if (head2 == nullptr)
        {
            return head1;
        }

        Node *temp1 = head1;
        Node *temp2 = head2;
        Node *result = nullptr;
        if (temp1->data >= temp2->data)
        {
            result = temp1;
            result->next = merge(temp1->next, temp2);
        }
        else
        {
            result = temp2;
            result->next = merge(temp1, temp2->next);
        }

        return result;
    }

    struct Node *mergeResult(Node *node1, Node *node2)
    {
        // your code goes here

        Node *newLL1 = reverseList(node1);
        Node *newLL2 = reverseList(node2);

        Node *ans = merge(newLL1, newLL2);
        return ans;
    }
};