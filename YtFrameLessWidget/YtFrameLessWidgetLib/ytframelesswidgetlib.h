#ifndef YTFRAMELESSWIDGETLIB_H
#define YTFRAMELESSWIDGETLIB_H

#include <QString>
#define YtStGetBuildTime QString("%1-%2-%3(%4)").arg(QString(__DATE__).mid(7,4))\
    .arg(QString("Jan#Feb#Mar#Apr#May#Jun#Jul#Aug#Sep#Oct#Nov#Dec").split("#").indexOf(QString(__DATE__).mid(0,3))+1)\
    .arg(QString(__DATE__).mid(4,2))\
    .arg(__TIME__)
/*
 * ʹ��YtFrameLessWidgetLib���ṩ��ȫ�ֺ�����ʾQWidget��QDialog���ڣ��ڲ��Ѿ�ʵ���ޱ߿����ʽ�������ⲿ�Ĵ��岻��Ҫ�����ޱ߿�
 * ֱ�����úò��ּ��ɡ�
 *
 * ��������в���ֱ�ӹرգ�����Ҫ�����е�ʱ����� "setWhatsThis("Running");" ��仰����������Ϊ����״̬�������ⲿ����ʾ�����ڹر�
 * ��ʱ��ͻ��ж����״̬����ֹͣ��ʱ��Running����Ϊ�����ַ������ɡ�
 *
 * ��ʾ���ڵ�ע�����
 * 1�����û�����ò��ֵĻ���ô��Ҫ����һ���������ڵ���С��С������ֻ����ʾ����������󻯺�Ż���ʾ��Ҫ��ʾ�Ĵ���
 * 2����������겼�֣�����Ҫ�������Ĳ��ֵ�LayoutSizeConstraint��ֵ��ΪSetFixedSize
 * 3�����ô��ڵ�WhatsThisֵΪRunning���������ھ��޷��رգ�һ�������������˳�ʱ���ж�
 * 4���ޱ߿򴰿ڵı����icon�������ⲿ���ڵ�windowtitle��windowicon�ṩ����Ҫ���ⲿ��ƺ�
 *
*/

#include <QWidget>

typedef enum {
    kOperator = 1,      // ����Ա
    kEngineer = 2,      // ����ʦ
    kAdministrator = 3, // ����Ա
    kSuperUser = 4      // ��������Ա
} TYP_USER_AUTHORITY;

class __declspec(dllexport) YtFrameLessWidgetLib
{
public:
    /**
     * @brief YtSetShowForm ȫ�ֺ���������Widget/Dialog��ָ�룬ֱ�ӵ����ޱ߿򴰿���ʾ���Widget/Dialog
     * @param form          Widget��Dialog��ָ��
     * @param aboutstr      ���Ͻǹ��ڰ�ť��ʾ����Ϣ�����Ϊ������ʾ�����ť
     * @param showpos       ���ƴ��ڵ���ʾλ�ã������(0,0)�������ʾ
     * @param isModality    �Ƿ�Ϊģ̬��ʾ��Ĭ��false��ʾ����������㣬�����ڲ��ɵ����true��ʾ�����ڿ��Ե����
     * @param isShowLogo    �����Ƿ���ʾ���Ͻǵ�logo�����logoֱ�����ⲿ�Ĵ������ú��Լ���windowicon
     * @param isShowTitle   �����Ƿ���ʾ���Ͻǵı��⣬�������Ҳ���ɴ����Լ������Լ���windowtitle
     * @param isShowMin     �����Ƿ���ʾ��С����ť
     * @param isShowMax     �����Ƿ���ʾ��󻯰�ť���������ʾ��˫�����������Ҳ�����
     * @param isShowClose   �����Ƿ���ʾ�رհ�ť
     * @param isFullScreen  �Ƿ�ȫ����ʾ
     * @return              �����Լ�����Ҫ����accept\reject\done�з��ص�ֵ��Ĭ�Ϲرշ���0
     */
    static int YtSetShowForm(QWidget *form, QString aboutstr = "", QPoint showpos = QPoint(0, 0), \
                             bool isModality = false, bool isShowLogo = true, bool isShowTitle = true, \
                             bool isShowMin = true, bool isShowMax = true, bool isShowClose = true, bool isFullScreen = false);
};

class __declspec(dllexport) YtMessageBox
{
public:
    // ���еĵ�������ֵֻ��������1��ʾȷ�ϣ�0��ʾȡ��
    static int YtShowSuccess(const QString &title = "", const QString &message = "");
    static int YtShowError(const QString &title = "", const QString &message = "");
    static int YtShowQuestion(const QString &title = "", const QString &message = "");
    static int YtShowWarning(const QString &title = "", const QString &message = "");
};

/// �����¼����
class __declspec(dllexport) YtPasswardDlg
{
public:
    YtPasswardDlg();

    /**
     * @brief YtShowPassword        �����¼��ֻ�������޸Ĺ��ܣ�
     * @param parent
     * @param strTargetPassword     Ŀ������
     * @param bVirtualKeyBoard      �Ƿ�ʹ���������
     * @param bDarkMode             �Ƿ����ú�ɫ����
     * @return                      �û�Ȩ�ޣ�С�ڵ���0Ϊ��Ȩ�ޣ�
     */
    static int YtShowPassword(QWidget *parent, QString strTargetPassword = "", bool bVirtualKeyBoard = false, bool bDarkMode = false);

    /**
     * @brief YtShowPasswordEx      �����¼�����û������ܣ�
     * @param parent
     * @param bVirtualKeyBoard      �Ƿ�ʹ���������
     * @param bDarkMode             �Ƿ����ú�ɫ����
     * @param bUserName             �Ƿ�ʹ��Ҫ�û�����¼����ʹ���û�����ģʽ��ֻ���������Ȩ�޵��û���
     * @return                      �û�Ȩ�ޣ�С�ڵ���0Ϊ��Ȩ�ޣ�
     */
    static int YtShowPasswordEx(QWidget *parent, bool bVirtualKeyBoard = false, bool bDarkMode = false, bool bUserName = false);
};

/// ���������
// ���ݾɵĽӿ�
bool __declspec(dllexport) toGetNewChineseQString(QString Oldstr, QString &Newstr, QString title = "");
bool __declspec(dllexport) toGetNewQStringNumberAll(QString TitleStr, QString Oldstr, QString &Newstr);
bool __declspec(dllexport) toGetNewQStringAll(QString TitleStr, QString Oldstr, QString &Newstr);

/**
* @brief YtShowInputDlg     ��ʾ���봰��
* @param InitStr            ��ʼ����ʾ���ַ���������Ҫ�༭�Ŀؼ��������Ϣ
* @param RefStr             ���봰�ڷ��ص��ַ���
* @param bIsNumber          �Ƿ�ֻ��ʾ��������
* @return
*/
bool __declspec(dllexport) YtShowInputDlg(QString InitStr, QString &RefStr, bool bIsNumber = false);

/// ��Ʒ������
class __declspec(dllexport) YtProductDlg
{
public:
    // ��Ʒ�������ý���
    static void YtShowProductDialog();
    // ���Ҳ�Ʒ��Ϣ
    static bool YtQueryProduct(const int product_recipe, QString &product_name);
    // ��ȡ��ǰ��Ʒ��Ϣ
    static void YtUpdateCurrProduct(int &product_recipe, QString &product_name);
};

#endif // YTFRAMELESSWIDGETLIB_H
