#include<iostream>
#include<string>
#include<vector>
#include<list>
using namespace std;
class ChatRoom{
	string RoomId;
	vector<User>users;
	list<Message>messages;
	user admin;


	void usersInfo() {
		for ( User user1 : users) {
			user1.display();
		}
	}
	void addUser( User user) {
		users.push_back(user);
	}
	void diplayMsg() {
		for ( Message msg : messages) {
			msg.display();
		}

	}
	void appendMsg( Message msg) {
		messages.push_back(msg);
	}
	void deleteMsg(list<Message>::iterator it) {
			messages.erase(it);
	}
	void editMsg(list<Message>::iterator it, string newContent) {
			it->editContent(newContent);
		
	}



};
