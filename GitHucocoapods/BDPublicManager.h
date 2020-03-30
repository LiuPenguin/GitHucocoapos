//
//  BDPublicManager.h
//  CattleFarming
//
//  Created by jey on 2018/7/30.
//  Copyright © 2018年 CattleFarming. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
typedef enum : NSUInteger {
    Dictionary,
    Array,
    String,
} objectType;

@interface BDPublicManager : NSObject
/** 数据排空 */
+(id)noEmptyWithObject:(id)object;
/**
 *  验证最新手机号正则表达式
 */
+ (BOOL)valiMobile:(NSString *)mobile;

#pragma 正则匹配用户密码6-18位数字和字母组合
+ (BOOL)checkPassword:(NSString *) password;

/**
 *  验证身份证号正则表达式
 */
// 邮编
+ (BOOL)validateZipCodeNumber:(NSString *)textString;
// 银行卡
+ (BOOL)validateBankCardNumber:(NSString *)textString;
/*车牌号验证*/
+ (BOOL)validateCarNo:(NSString *)carNo;
+ (BOOL)judgeIdentityStringValid:(NSString *)identityString ;
//返回当前view的控制器
+ (UIViewController *)getCurrentViewController:(UIView*)obj;
//时间戳转换为时间
+ (NSString *)timeWithTimeIntervalString:(NSString *)timeString DateFormat:(NSString *)dateFormat;
/** 获取当前时间 */
+ (NSString *)getCurrentDate:(NSString *)dateFormat;
/** 时间 ------> 时间戳 */
+ (NSString *)transTotimeSp:(NSString *)time DateFormat:(NSString *)dateFormat;
//将本地日期字符串转为UTC日期字符串
//本地日期格式:2013-08-03 12:53:51
//可自行指定输入输出格式
+(NSString *)getUTCFormateLocalDate:(NSString *)localDate;
//将UTC日期字符串转为本地时间字符串
//输入的UTC日期格式2013-08-03T04:53:51+0000
+(NSString *)getLocalDateFormateUTCDate:(NSString *)utcDate;
+(NSString *)getLocalBeiJingDateFormateUTCDate:(NSString *)utcDate;

/** 根据文本. 字体计算Label高度 */
+ (CGSize)adapterSizeWithString:(NSString *)textStr WithMaxWidth:(CGFloat)width WithFont:(UIFont *)font;
/** 自定义行间距的文字大小计算 */
+ (CGSize)adapterSizeWithString:(NSString *)textStr WithMaxWidth:(CGFloat)width WithFont:(UIFont *)font WithLineSpacing:(CGFloat)lineSpacing;
+ (CGFloat)autoWidthString:(NSString *)string withLabel:(UILabel *)label;
/**
 *  单纯改变一句话中的某些字的颜色（一种颜色）
 *
 *  @param color    需要改变成的颜色
 *  @param totalStr 总的字符串
 *  @param subArray 需要改变颜色的文字数组(要是有相同的 只取第一个)
 *
 *  @return 生成的富文本
 */
+ (NSMutableAttributedString *)ls_changeCorlorWithColor:(UIColor *)color TotalString:(NSString *)totalStr SubStringArray:(NSArray *)subArray;
/**
 *  单纯改变句子的字间距（需要 ）
 *
 *  @param totalString 需要更改的字符串
 *  @param space       字间距
 *
 *  @return 生成的富文本
 */
+ (NSMutableAttributedString *)ls_changeSpaceWithTotalString:(NSString *)totalString Space:(CGFloat)space;
/**
 *  单纯改变段落的行间距
 *
 *  @param totalString 需要更改的字符串
 *  @param lineSpace   行间距
 *
 *  @return 生成的富文本
 */
+ (NSMutableAttributedString *)ls_changeLineSpaceWithTotalString:(NSString *)totalString LineSpace:(CGFloat)lineSpace;
/**
 *  改变某些文字的颜色 并单独设置其字体
 *
 *  @param font        设置的字体
 *  @param color       颜色
 *  @param totalString 总的字符串
 *  @param subArray    想要变色的字符数组
 *
 *  @return 生成的富文本
 */
+ (NSMutableAttributedString *)ls_changeFontAndColor:(UIFont *)font Color:(UIColor *)color TotalString:(NSString *)totalString SubStringArray:(NSArray *)subArray;

// 字典转json字符串方法
+(NSString *)convertToJsonData:(NSDictionary *)dict;
// json字符串转字典方法
+ (NSDictionary *)convertJsonToDict:(NSString *)jsonString;
/**
 *  字典,数组转 JSON
 *
 *  @param array 需要被转换的类型对象,任意类型
 *
 *  @return JSON 字符串
 */
+ (NSString *)arrayToJSONString:(NSArray *)array;
// MD5加密
+ (NSString *) md5:(NSString *) str;
+ (void)animationAlert:(UIView *)view;
+ (NSString *)filterHTML:(NSString *)html;
// HTML 转为富文本
+ (NSAttributedString *)attributeStringByHtmlString:(NSString *)htmlString;
+ (void)remove;
// 获取当前控制器
+ (UIViewController *)getCurrentViewController;
// html 图片自适应
+ (NSString *)autoWebAutoImageSize:(NSString *)html;
// label 行间距
+ (NSMutableAttributedString *)Rowspace:(NSString *)string;
// 判断是否打开了通知
+(BOOL)isUserNotificationEnable;
// 必填加*号
+ (NSAttributedString *)addWith:(NSString *)result;

@end

