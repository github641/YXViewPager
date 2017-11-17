//
//  YXViewPagerDefine.h
//  Pods
//
//  Created by yixiang on 17/3/29.
//
//
/* lzy171117注:
 框架 通用宏定义
 */
#ifndef YXViewPagerDefine_h
#define YXViewPagerDefine_h

#define rm(view,x,y,width,height) view.frame = CGRectMake(x,y,width,height)
#define STRING_IS_BLANK(str) (str==nil ||![str isKindOfClass:[NSString class]]|| [str length]<1)
#define STRING_DEFAULT_BLANK(str) ((str==nil)?@"":str)
#define STRING_DEFAULT_IF_BLANK(str,defaultStr)  STRING_IS_BLANK(str) ? (defaultStr):str
#define DICTIONARY_IS_EMPTY(dic) ((dic)==nil || ![(dic) isKindOfClass:[NSDictionary class]] || (dic).count < 1)
#define ARRAY_IS_EMPTY(array) ((array)==nil || ![(array) isKindOfClass:[NSArray class]] || (array).count < 1)

#define SCREEN_WIDTH    [[UIScreen mainScreen] bounds].size.width
#define SCREEN_HEIGHT    [[UIScreen mainScreen] bounds].size.height
#define STATUSBAR_HEIGHT                     [UIApplication sharedApplication].statusBarFrame.size.height

#endif /* YXViewPagerDefine_h */
