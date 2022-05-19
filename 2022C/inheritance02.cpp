class CBox {
protected: //private으로 하고 싶으면 해당 클래스 내에 함수를 통해 접근하도록 함
	double width;
};

class ChildBox : CBox {
public:
	void setWidth(double w) {
		width = w;
	}
};

class Phone {
	void call();
	void receive();
	void sendMessage();
};

class Music {
	void soundoff();
	void soundon();
};

class SmartPhone : public Music {

};

class SmartPhone : public Phone {

};
