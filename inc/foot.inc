<script src="//ossweb-img.qq.com/images/js/jquery/jquery-1.11.3.min.js"></script>
<script src="//ossweb-img.qq.com/images/js/title.js"></script>
<script src="//ossweb-img.qq.com/images/js/foot.js"></script>
<script src="//ossweb-img.qq.com/images/js/comm/showDialog.min.js"></script>
<script src="js/share.js"></script>
<script>
TGshare({
 iconSize : 16, //����ͼ��Ĵ�С,16Ϊ16px X 16px��24Ϊ24px X 24px
 snsModule : ['wechat','qq','sina','buluo'],
 //�������� wechat,qq,qzone,weibo,pengyou,sina,douban,kaixin,renren
 //Ĭ��ȫ������
 title :'2018��Ȳ��Դ�����ԤԼ',
 //��Ҫ�Զ������ʱ���õ���Ĭ����ȡҳ�����
 url : location.href,
 //��Ҫ�Զ���ҳ��urlʱ���õ���Ĭ����ȡҳ��url
 picUrl : 'http://b.gtimg.com/res/2014/06/13/0/058e8b5f7aa4e83d.jpg',
 //��Ҫ�Զ�������ͼƬ���õ���Ĭ����ȡҳ���е�һ��ͼƬ
 snsID :'tg-sns',//�Զ���SNS����ID
 isWindow : true, //���������ͣ�trueΪ�����򿪣�falseΪ��ҳ��򿪣�Ĭ��Ϊ������
 tcss : true //�Ƿ����ӵ������trueΪ���ӣ�falseΪ�����ӣ�Ĭ������
})
//����������ڵ�ǰҳ�������. ����ǳ������� ��ֹ�޸�
 var nav={nav:document.querySelector('#nav ul.q')}
 var nav_lichide=nav.nav.children;
 var href=location.href.split('/')[location.href.split('/').length-1].split('.')[0];
 for(var i=0;i<nav_lichide.length-1;i++){
  var nav_li_achide=nav_lichide[i].children[0].href.split('/')[nav_lichide[i].children[0].href.split('/').length-1].split('.')[0];
  for(var q=0;q<nav_lichide[i].children.length;q++){
  if(nav_lichide[i].children[q].tagName.toLocaleLowerCase()=='ul'){
  for(var z=0;z<nav_lichide[i].children[q].children.length;z++){
  for(var l=0;l<nav_lichide[i].children[q].children[z].getElementsByTagName('a').length;l++){
  var childhref=nav_lichide[i].children[q].children[z].getElementsByTagName('a')[l].href.split('/')[nav_lichide[i].children[q].children[z].getElementsByTagName('a')[l].href.split('/').length-1].split('.')[0];
  if(childhref==href){addClass(nav_lichide[i],'on')}}}}}
  if(nav_li_achide==href){addClass(nav_lichide[i],'on')}}
  if(href==''){addClass(nav.nav.children[0],'on')}
function addClass(obj, cls){
 var obj_class = obj.className,//��ȡ class ����.
 blank = (obj_class != '') ? ' ' : '';//�жϻ�ȡ���� class �Ƿ�Ϊ��, �����Ϊ����ǰ��Ӹ�'�ո�'.
 added = obj_class + blank + cls;//���ԭ���� class ����Ҫ���ӵ� class.
 obj.className = added;//�滻ԭ���� class.
}
function removeClass(obj, cls){
 var obj_class = ' '+obj.className+' ';//��ȡ class ����, ������β����һ���ո�. ex) 'abc    bcd' -> ' abc    bcd '
 obj_class = obj_class.replace(/(\s+)/gi, ' '),//������Ŀ��ַ��滻��һ���ո�. ex) ' abc    bcd ' -> ' abc bcd '
 removed = obj_class.replace(' '+cls+' ', ' ');//��ԭ���� class �滻����β���˿ո�� class. ex) ' abc bcd ' -> 'bcd '
 removed = removed.replace(/(^\s+)|(\s+$)/g, '');//ȥ����β�ո�. ex) 'bcd ' -> 'bcd'
 obj.className = removed;//�滻ԭ���� class.
}
function hasClass(obj, cls){
 var obj_class = obj.className,//��ȡ class ����.
 obj_class_lst = obj_class.split(/\s+/);//ͨ��split���ַ���clsת��������.
 x = 0;
 for(x in obj_class_lst) {
   if(obj_class_lst[x] == cls) {//ѭ������, �ж��Ƿ����cls
     return true;
   }
 }
 return false;
}
function add(ele,event,fn,bool){
  if(document.addEventListener){
      return ele.addEventListener(event,fn,bool)
  }else{
      return ele.attachEvent('on'+event,fn,bool)
  }
}

function showDia(div){
	showDialog.show({
		id:div, //��Ҫ������id������ǵ���ҳ���ϵ�div�����ѡ��Ϊ��ѡ
		bgcolor:"#000",//���������֡�����ɫ����ʽΪ"#FF6600"����ѡ��Ĭ��Ϊ"#fff"
		opacity:50 //���������֡���͸���ȣ���ʽΪ��10-100������ѡ
	});
}

</script>