//
//  IFlyEventInfo.h
//  IFlyEventInfo
//
//  Created by hualiang on 2018/7/20
//  Copyright (c) 2018年 IFLYTEK. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  埋点数据，业务方入参实体
 */
@interface IFlyEventInfo : NSObject

/**
 * 事件ID（用户自定义）
 */
@property(nonatomic,copy) NSString *eventId;

/**
 * 拓展信息（用户自定义）
 */
@property(nonatomic,copy) NSString *ext;

/**
 * 模块ID（用户自定义）
 */
@property(nonatomic,copy) NSString *mid;

/**
 * 行为对象，目标ID（用户自定义）
 */
@property(nonatomic,copy) NSString *oid;

/**
 * 一次Event持续时长
 */
@property(nonatomic,assign) NSTimeInterval dur;

/**
 * Event自定义参数
 */
@property(nonatomic,strong) NSDictionary<NSString *,NSString *> *udmap;

/**
 *  创建埋点对象
 *
 *  @param eventId 事件ID（用户自定义）
 *  @param ext 展信息（用户自定义）
 *  @param mid 模块ID（用户自定义）
 *  @param oid 行为对象，目标ID（用户自定义）
 *  @param dur 一次Event持续时长）
 *  @param udmap 用户自定义信息
 */
+ (IFlyEventInfo *) eventInfoWithEventId:(NSString *) eventId ext:(NSString *) ext mid:(NSString *) mid oid:(NSString *) oid dur:(NSTimeInterval) dur udmap:(NSDictionary *) udmap;
@end
