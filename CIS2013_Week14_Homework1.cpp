#include <iostream>
#include <string>
using namespace std;

typedef unsigned char* ByteArray;

class game{

	private:

		string name;
		int score=0;

	public:
	
		game(string b){
			name=b;
		}

		void set_name(string b){
			name=b;
			
			}
		string get_name(){
			return name;
		}
		void set_score(){
			score++;
		}
		int get_score(){
			return score;
		}
};

class minesweeper: public game{

	private:

		int x,y;
		int board_size;
		ByteArray *selected_squares;
		int* bomb_sq;
		int mines_amount;

	public:

		minesweeper(string name, int width, int height, int mines_count) : game(name)
		{
			x=width;
			y=height;
			board_size=x*y;
			mines_amount=mines_count;
			selected_squares= new ByteArray[height];
			
			for(int i=0; i<height; i++)
			{
				unsigned char *t = new unsigned char[width];
				for (int j=0; j<width; j++)
				{
					t[j]=' ';
				}
				selected_squares[i]=t;
			}
		}
};
			

int main(){
	string name;
	int width, height;
	int x,y;
	int mines_count;
	
	cout<<" Please select a name for your board: " << endl;
	cin>> name;
	cout<<"Please enter the width of your board: " << endl;
	cin>> width;
	cout<<"Please enter the height of your board: " << endl;
	cin>> height;
	cout<<"Please enter the amount of bombs between 1 and 10 you like on your board: " << endl;
	cin>> mines_count;
	cout<< endl;



	return 0;
}