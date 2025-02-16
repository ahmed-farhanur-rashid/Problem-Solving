// Problem:            https://leetcode.com/problems/add-two-numbers/

// Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// Solution
class Solution
{
public:
    // The method:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        int sum = 0;
        int carry = 0;

        ListNode *result = nullptr;
        ListNode *temp = nullptr;
        ListNode *latest = nullptr; // Current pointing node;

        while (l1 != nullptr || l2 != nullptr)
        {
            sum = carry + ((l1 != nullptr) ? l1->val : 0) + ((l2 != nullptr) ? l2->val : 0);

            carry = sum / 10;
            sum %= 10;

            temp = new ListNode(sum);

            // latest always points at latest added node
            if (result == nullptr)
            {
                result = temp;
                result->next = nullptr;
                latest = result;
            }
            else
            {
                latest->next = temp;
                latest = latest->next;
            }

            if (l1 != nullptr)
                l1 = l1->next;
            if (l2 != nullptr)
                l2 = l2->next;
        }

        // Wrapping up any remaining carry.
        if (carry != 0)
        {
            temp = new ListNode(carry);

            latest->next = temp;
            latest = latest->next;
        }

        return result;
    }
};
