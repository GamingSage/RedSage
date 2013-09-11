#ifndef _INSTANCE_H_
#define _INSTANCE_H_

class Template;

class Instance
{
private:
	int _id;
	Template _template;

public:
	int getId() { return _id; }
	int getTemplate() { return _template; }
}

#endif