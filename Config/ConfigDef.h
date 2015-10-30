using namespace std;

// Define From City.xlsx
struct CityCfg
{

	int ID; // 编号
	string Name; // 名称
	int CountryID; // 所属势力
	int StateID; // 所属州
	int Level; // 等级
	int Hp; // 耐久上限
	int Defense; // 防御
	int Soldiers; // 兵力上限
	int Populations; // 人口
	int Specialty1; // 特色1
	int Specialty2; // 特色2
	int Specialty3; // 特色3
	int Building; // 建筑上限
	int X; // 坐标X
	int Y; // 坐标Y
	int Z; // 坐标Z
	string Desc; // 说明
}


// Define From Contry.xlsx
struct ContryCfg
{

	int ID; // 编号
	string Name; // 名称
	int Color; // 代表色
	string Font; // 代表字
	int Leader; // 领袖ID
	int Flag; // 旗帜
	string Desc; // 描述
}


// Define From Question.xlsx
struct QuestionCfg
{

	int ID; // 编号
	string Desc; // 简述
	string Capital; // 问题
	string AnsowerText1; // 答案文本1
	int Ansower1; // 答案值1
	string AnsowerText2; // 答案文本2
	int Ansower2; // 答案值2
	string AnsowerText3; // 答案文本3
	int Ansower3; // 答案值3
	string AnsowerText4; // 答案文本4
	int Ansower4; // 答案值4
	string AnsowerText5; // 答案文本5
	int Ansower5; // 答案值5
	string AnsowerText6; // 答案文本6
	int Ansower6; // 答案值6
	string AnsowerText7; // 答案文本7
	int Ansower7; // 答案值7
	string AnsowerText8; // 答案文本8
	int Ansower8; // 答案值8
	string AnsowerText9; // 答案文本9
	int Ansower9; // 答案值9
	string AnsowerText10; // 答案文本10
	int Ansower10; // 答案值10
	string AnsowerText11; // 答案文本11
	int Ansower11; // 答案值11
	string AnsowerText12; // 答案文本12
	int Ansower12; // 答案值12
	string AnsowerText13; // 答案文本13
	int Ansower13; // 答案值13
	string AnsowerText14; // 答案文本14
	int Ansower14; // 答案值14
	string AnsowerText15; // 答案文本15
	int Ansower15; // 答案值15
	string AnsowerText16; // 答案文本16
	int Ansower16; // 答案值16
}


// Define From Role.xlsx
struct RoleCfg
{

	int ID; // 编号
	string Name; // 名称
	string Alias; // 字
	int Sex; // 性别
	int Type; // 类型
	int Trait; // 性格
	int State; // 州
	int Star; // 星级
	int Leading; // 统帅
	int Strength; // 武力
	int Wit; // 智力
	int Charm; // 魅力
	int politics; // 政治
	int Hp; // 生命
	int Die; // 死亡率
	int Hurt; // 受伤率
	int Skill1; // 技能1
	int Skill2; // 技能2
	int Skill3; // 技能3
	int Skill4; // 技能4
	int Skill5; // 技能5
	string Desc; // 志
}


// Define From State.xlsx
struct StateCfg
{

	int ID; // 编号
	string Name; // 名称
	string Capital; // 首府
	string Desc; // 描述
}


