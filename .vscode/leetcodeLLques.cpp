ListNode *solve(ListNode *list1, ListNode *list2)
{
    if (list1->next == NULL)
    {
        list1->next = list2;
        return list1;
    }

    ListNode *curr1 = list1;
    ListNode *curr2 = list2;
    ListNode *next1 = curr1->next;
    ListNode *next2 = curr2->next;

    if (curr2->next == NULL)
    {
        while (curr1->next != NULL)
        {
            curr1 = curr1->next;
        }
        curr1->next = curr2;
        return list1;
    }

    if (next2 == NULL)
    {

        while (next1 != NULL)
        {
            if ((curr2->val >= curr1->val) && (curr2->val <= next1->val))
            {
                curr1->next = curr2;
                curr2->next = next1;
                curr1 = curr2;
            }
            else
            {
                curr1 = next1;
                next1 = next1->next;
                if (next1 == NULL)
                {
                    curr1->next = curr2;
                }
            }
        }
        return list1;
    }


        while (next1 != NULL && next2 != NULL)
        {

            if ((curr2->val >= curr1->val) && (curr2->val <= next1->val))
            {
                curr1->next = curr2;
                next2 = curr2->next;
                curr2->next = next1;
                curr1 = curr2;
                curr2 = next2;
            }
            else
            {
                curr1 = next1;
                next1 = next1->next;
                if (next1 == NULL)
                {
                    curr1->next = curr2;
                }
            }
        }
        return list1;
}