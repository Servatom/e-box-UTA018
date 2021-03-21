#include <iostream>
#include <string>

using namespace std;

class Donor{
    private:
        string name;
        int age;
        float height;
        float weight;
        string gender;
        string bloodGroup;
    
    public:
        string getName(){
            return name;
        }

        void setName(string name){
            this->name = name;
        }

        int getAge(){
            return age;
        }

        void setAge(int age){
            this->age = age;
        }

        float getHeight(){
            return height;
        }

        void setHeight(float height){
            this->height = height;
        }

        float getWeight(){
            return weight;
        }

        void setWeight(float weight){
            this->weight = weight;
        }

        string getGender(){
            return gender;
        }

        void setGender(string gender){
            this->gender = gender;
        }

        string getBloodGroup(){
            return bloodGroup;
        }

        void setBloodGroup(string bloodGroup){
            this->bloodGroup = bloodGroup;
        }
        void search(Donor donors[], string bloodGroup, int n){
            for(int i = 0; i < n; i++){
                if(donors[i].getBloodGroup() == bloodGroup){
                    //Found
                    cout<<donors[i].name<<endl;
                }
                else{
                    continue;
                }
            }
        }
};