//
//  IFlyCollector.m
//  IFlyCollector
//
//  Created by KobeYuan on 2018/5/25
//  Copyright (c) 2014年 IFLYTEK. All rights reserved.
//
#import <Foundation/Foundation.h>
#import "IFlyEventInfo.h"


/**
 * IFlyCollector是统计的接口类，本身不需要实例化，所有方法以类方法的形式提供.
 */
@interface IFlyCollector : NSObject


/**
 *  初始化接口 只运行一次，多次设置无效
 *  @param appid 应用id
 */
+ (void) initWithAppid:(NSString *)appid;


/**
 *  开启CrashReport收集, 默认是关闭状态.
 *  @param isEnabled 设置成NO,就可以关闭CrashReport收集.
 */
+ (void) setCaptureUncaughtExceptionEnable:(BOOL)isEnabled;


/**
 *  设置开启Debug模式（默认关闭）
 *
 *  @param isEnabled 默认NO
 */
+ (void) setDebugModeEnable:(BOOL)isEnabled;


/**
 *  设置会话有效时间长度
 *
 *  @param mills 会话有效时间长度，单位毫秒
 */
+ (void) setSessionContinueMills:(NSTimeInterval)mills;


/**
 *  设置发送时间间隔
 *
 *  @param interval 发送间隔 ,在1～30min之内，单位毫秒
 */
+ (void) setSendInterval:(NSTimeInterval)interval;


/**
 *  设置头部参数
 *
 *  @param udp 自定义头部参数
 */
+ (void) setHeaderParam:(NSDictionary *)udp;


/**
 *  绑定用户
 *
 *  @param uid 用户id
 *  @param udmap 用户自定义信息
 */
+ (BOOL) bindUserWithUid:(NSString *)uid udmap:(NSDictionary *)udmap;


/**
 *  解绑用户
 */
+ (void) unBindUser;


#pragma mark - 立即发送数据，仅调试可用
/**
 *  立即发送数据,仅供调试使用
 */
+ (void) flush;


/**
 *  自定义事件统计
 *
 *  @param eventInfo 埋点对象信息.
 */
+ (void) onEvent:(IFlyEventInfo *)eventInfo;


/**
 *  开始事件统计
 *
 *  @param eventInfo 埋点对象信息.
 */
+ (void) onEventBegin:(IFlyEventInfo *)eventInfo;


/**
 *  结束事件统计，与onEventBegin配合使用
 *
 *  @param eventId 网站上注册的事件Id.
 */
+ (void) onEventEnd:(NSString *)eventId;


/**
 *  自定义错误统计
 *
 *  @param errorType 自定义错误类型
 *  @param errorMsg  自定义错误信息
 */
+ (void) onError:(NSString *)errorType paramMsg:(NSString *)errorMsg;


/**
 *  页面时长统计,记录某个view被打开多长时间,并计开始时间
 *
 *  @param pageName 需要记录时长的view名称.
 */
+ (void) onPageStart:(NSString *)pageName;


/**
 *  页面时长统计,记录某个view被打开多长时间,与onPageStart配合使用
 *
 *  @param pageName 需要记录时长的view名称.
 */
+ (void) onPageEnd:(NSString *)pageName;
@end





