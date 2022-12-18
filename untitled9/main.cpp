#include <iostream>
#include <vector>

int main() {
    std::vector <int> vec(20);
    int position =0;
    int num;
    std::cout<<"Enter number: ";
    std::cin>>num;
    while (num!=-2) {
        if (num==-1) {
            for (int i=position; i<vec.size(); i++) {
                std::cout<<vec[i]<<" ";
            }
            for (int i=0; i<position; i++) {
                std::cout<<vec[i]<<" ";
            }
        }
        else {
            vec[position] = num;
            position++;
            if (position == 20) {
                position = 0;
            }
        }
        std::cout<<"Enter number: ";
        std::cin>>num;
    }
}
