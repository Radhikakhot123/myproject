class HomeOwner {
private:
    string name;

public:
    // Constructor
    HomeOwner(string& name) : name(name) {}

    // Getter and setter methods
    string getName()  { return name; }
    void setName(string& newName) { name = newName; }

    // Additional methods specific to HomeOwner can be added here
};
