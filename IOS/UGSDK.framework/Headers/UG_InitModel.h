//
//  UG_InitModel.h
//  UGSDK
//  初始化对象
//  Created by mubai on 2020/10/29.
//  Copyright © 2020 UG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UG_Version.h"

NS_ASSUME_NONNULL_BEGIN

/////
///// 版本信息
/////
//@interface UG_VersionModel : NSObject
//
//@property (nonatomic, strong) NSString *versionCode;
//@property (nonatomic, strong) NSString *versionName;
//@property (nonatomic, strong) NSString *url;
//@property (nonatomic, strong) NSString *versionDesc;
//@property (nonatomic, strong) NSString *forceUpdate;
//
//
//@end

///
/// 初始化配置信息
///
@interface UG_InitModel : NSObject


@property (nonatomic, assign) int loginNormalState;  //1: 开启账号密码登陆；0: 不开启
@property (nonatomic, assign) int bindState;         //1: 账号密码注册登陆后，是否弹出绑定手机号界面；0: 不开启

@property (nonatomic, strong) NSString *loginType;  //silent：静默登陆（单机游戏）；normal：正常登陆
@property (nonatomic, assign) int showFloatingView;  //1: 显示悬浮窗；0: 不显示

@property (nonatomic, assign) int onlineReportState;            //1: 开启在线时长上报；0: 不开启
@property (nonatomic, assign) int onlineReportIntervalMinutes;  //上报间隔，分钟

@property (nonatomic, assign) int rnState;          //实名认证开启状态： 1: 开启；0: 不开启
@property (nonatomic, assign) int rnLimitState;     //防沉迷开启状态： 1: 开启；0: 不开启

@property (nonatomic, assign) int coinSupport;               //平台币开启状态： 1: 开启；0: 不开启
@property (nonatomic, assign) int channelID;                 //溯源后的子渠道号

@property (nonatomic, strong) NSString *userCenterURL;       //用户中心URL
@property (nonatomic, strong) NSString *userProtocolURL;     //用户协议URL
@property (nonatomic, strong) NSString *privacyProtocolURL;  //隐私协议URL

@property (nonatomic, strong) NSString *kefuQQ;             //客服QQ

@property (nonatomic, strong) UG_Version *version;          //版本信息

@end

NS_ASSUME_NONNULL_END
