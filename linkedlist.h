#pragma once
#include<iostream>

typedef struct LinkedList{
    char data;
    struct LinkedList *next;

	static LinkedList* addToList(LinkedList* head, char n){
		struct LinkedList *temp2 = (LinkedList*)malloc(sizeof(LinkedList));
		temp2->data = n;
		temp2->next = NULL;
		if(head == NULL){
			return temp2;
		}
		LinkedList* temp = head;
		while(temp->next != NULL){
			temp = temp->next;
		}
		temp->next = temp2;
		return head;
	}

	static void displayList(LinkedList* head){
		while(head){
			std::cout<<head->data<<" -> ";
			head=head->next;
		}
		std::cout<<"CURRENT ROUND\n";
		return;
	}
}LinkedList;





