#include "2.h"

Two::ListNode* Two::addTwoNumbers(ListNode* l1, ListNode* l2)
{
	//ListNode* l3 = nullptr;
	//ListNode* start;
	//bool up = false;

	//while (l1 != nullptr || l2 != nullptr || up == true)
	//{
	//	if (l3 != nullptr)
	//	{
	//		l3->next = new ListNode();
	//		l3 = l3->next;
	//		if (up)
	//		{
	//			l3->val += 1;
	//			up = false;
	//		}
	//	}
	//	else
	//	{
	//		l3 = new ListNode();
	//		start = l3;
	//	}

	//	if (l1 != nullptr)
	//	{
	//		l3->val += l1->val;
	//		l1 = l1->next;
	//	}
	//	if (l2 != nullptr)
	//	{
	//		l3->val += l2->val;
	//		l2 = l2->next;
	//	}
	//	if (l3->val >= 10)
	//	{
	//		l3->val -= 10;
	//		up = true;
	//	}
	//}

	//return start;

	ListNode* ans = new ListNode();
	ListNode* prev = nullptr;
	ListNode* temp = ans;

	int carry = 0;
	while (l1 || l2 || carry) {
		int sum = 0;
		if (l1) {
			sum += l1->val;
			l1 = l1->next;
		}

		if (l2) {
			sum += l2->val;
			l2 = l2->next;
		}

		sum += carry;

		carry = sum / 10;
		sum = sum % 10;

		ans->val = sum;
		ans->next = new ListNode();
		prev = ans;
		ans = ans->next;

	}

	prev->next = nullptr;
	return temp;
}