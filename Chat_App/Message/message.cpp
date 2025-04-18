#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Group : public Receiver {
private:
    string groupName;
public:
    Group(string groupName) {
        this->groupName = groupName;
    }

    void display() override {
        cout << groupName << endl;
    }

    string getGroupName(){
        return groupName;
    }
};


class Message {
private:
    string content;
    string senderId;
    string receiverId;
public:
    Message(string senderId, string receiverId, string content) {
        this->senderId = senderId;
        this->receiverId = receiverId;
        this->content = content;

    }
    Message(string content) {
        this->content = content;
    }
      
    

    string getContent(){
        return content;
    }
    string getSenderId(){
        return senderId; 
    }
    string getReceiverId(){
        return receiverId; 
    }


    void setContent(string Content){
        content = Content; 
    }
    void setSenderId(string SenderId){
        senderId = SenderId;
    }
    void setReceiverId(string ReceiverId){
        receiverId = ReceiverId; 
    }
    

    void editContent(string newContent) {
        content = newContent;
    }
    void display(){
        cout << content << endl;
    }