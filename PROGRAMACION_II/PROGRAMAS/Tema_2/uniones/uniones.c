//
//



struct user_id{

	char nombre[16];
	
	union{
		struct NIF_t
		{
			unsigned int number;
			unsigned char ch;
		}nif;
		struct DNI_t
		{
			unsigned int number;
			unsigned char ch;
		}dni;

		char pasaporte[9];

	
		struct NIE_t
		{
			unsigned int number;
			unsigned char ch;
			unsigned int ch2;
		}nie;
	};
};

int main(int argc, char** argv){

	struct user_id user = {.nif={.number=5,.ch=0}};

	user.nuf.number = 5;

	return 0;
}
