//
//  UG_Analytics.h
//  UGSDK
//
//  Created by me on 2021/1/20.
//  Copyright © 2021 UG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UG_PayData.h"
#import "UG_GameRole.h"

NS_ASSUME_NONNULL_BEGIN

@protocol UG_IAnalytics

/**
 * 自定义事件： SDK初始化开始
 */
- (void) onInitBegin;

/**
 * 自定义事件： SDK初始化成功
 */
-(void) onInitSuc;

/**
 * 自定义事件： SDK登陆开始
 */
-(void) onLoginBegin;

/**
 * 登陆成功的时候 上报
 * af_login
 */
-(void) onLogin;

/**
 * 注册成功的时候 上报
 * af_complete_registration
 */
-(void) onRegister:(int)regType;

/**
 * 自定义事件， 开始购买（SDK下单成功）
 * price：分为单位
 */
-(void) onPurchaseBegin:(UG_PayData*)order;

/**
 * 购买成功的时候，调用
 * af_purchase
 * price: 分为单位
 */
-(void) onPurchase:(UG_PayData*)order;



/**
 * 自定义事件， 创建角色成功
 */
-(void) onCreateRole:(UG_GameRole*)role;

/**
 * 自定义事件， 进入游戏成功
 */
-(void) onEnterGame:(UG_GameRole*)role;

/**
 * 角色等级 升级的时候，调用
 * af_level_achieved
 */
-(void) onLevelup:(UG_GameRole*)role;

/**
 * 完成新手教程的时候 执行
 * af_tutorial_completion
 */
-(void) onCompleteTutorial:(int)tutorialID content:(NSString*)content;

/**
 * 自定义上报
 */
-(void) onCustomEvent:(NSString*)eventName params:(NSDictionary*) params;

@end


@interface UG_Analytics : NSObject

@property (nonatomic, nonatomic) NSMutableArray* plugins;

+ (instancetype)sharedInstance;

/**
 * 注册新的插件实现
 */
-(void) registerPlugin:(NSObject<UG_IAnalytics>*)plugin;

/**
 * 自定义事件： SDK初始化开始
 */
- (void) onInitBegin;

/**
 * 自定义事件： SDK初始化成功
 */
-(void) onInitSuc;

/**
 * 自定义事件： SDK登陆开始
 */
-(void) onLoginBegin;

/**
 * 登陆成功的时候 上报
 * af_login
 */
-(void) onLogin;

/**
 * 注册成功的时候 上报
 * af_complete_registration
 */
-(void) onRegister:(int)regType;

/**
 * 自定义事件， 开始购买（SDK下单成功）
 * price：分为单位
 */
-(void) onPurchaseBegin:(UG_PayData*)order;

/**
 * 购买成功的时候，调用
 * af_purchase
 * price: 分为单位
 */
-(void) onPurchase:(UG_PayData*)order;



/**
 * 自定义事件， 创建角色成功
 * @param role
 */
-(void) onCreateRole:(UG_GameRole*)role;

/**
 * 自定义事件， 进入游戏成功
 */
-(void) onEnterGame:(UG_GameRole*)role;

/**
 * 角色等级 升级的时候，调用
 * af_level_achieved
 */
-(void) onLevelup:(UG_GameRole*)role;

/**
 * 完成新手教程的时候 执行
 * af_tutorial_completion
 */
-(void) onCompleteTutorial:(int)tutorialID content:(NSString*)content;

/**
 * 自定义上报
 */
-(void) onCustomEvent:(NSString*)eventName params:(NSDictionary*) params;

@end

NS_ASSUME_NONNULL_END
