class CBox {
protected: //private���� �ϰ� ������ �ش� Ŭ���� ���� �Լ��� ���� �����ϵ��� ��
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
