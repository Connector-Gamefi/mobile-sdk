//
//  UG_GameRole.h
//  UGSDK
//  游戏中角色信息
//  Created by me on 2020/12/28.
//  Copyright © 2020 UG. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, UG_GameRoleOPType)
{
    UG_OP_CREATE_ROLE = 1,
    UG_OP_ENTER_GAME,
    UG_OP_LEVEL_UP,
    UG_OP_EXIT
};

/// 游戏角色信息
@interface UG_GameRole : NSObject

@property (nonatomic,assign) int type;               //调用时机，上面UG_GameRoleOPType中的值
@property (nonatomic, copy) NSString *serverID;        //服务器ID
@property (nonatomic, copy) NSString *roleID;          //角色ID

@property (nonatomic, copy) NSString *roleName;        //角色名称
@property (nonatomic, copy) NSString *roleLevel;       //角色等级

@property (nonatomic, copy) NSString *serverName;      //服务器名称
@property (nonatomic, copy) NSString *vip;             //VIP等级
@property (nonatomic, assign) long createTime;       //时间戳，Unix秒
@property (nonatomic, assign) long lastLevelUpTime;  //最后升级时间，Unix秒
@property (nonatomic, copy) NSString *extraData;        //其他扩展数据
@end

NS_ASSUME_NONNULL_END
