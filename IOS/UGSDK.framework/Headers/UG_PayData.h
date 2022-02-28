//
//  UG_PayData.h
//  UGSDK
//  充值参数
//  Created by me on 2020/12/29.
//  Copyright © 2020 UG. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface UG_PayData : NSObject

@property (nonatomic, strong) NSString* cpOrderID;      //游戏订单号
@property (nonatomic, strong) NSString* extra;          //游戏扩展数据，支付通知回调的时候， 原样返回
@property (nonatomic, strong) NSString* payNotifyUrl;   //支付回调地址

@property (nonatomic,assign) int price; //金额（单位：分）
@property (nonatomic,strong)  NSString* currency;   //货币单位 CNY

@property (nonatomic, strong) NSString* productID;   //商品ID
@property (nonatomic, strong) NSString* productName;    //商品名称
@property (nonatomic, strong) NSString* productDesc;    //商品描述

@property (nonatomic, strong) NSString* roleID;         //角色ID
@property (nonatomic, strong) NSString* roleName;       //角色名称
@property (nonatomic, strong) NSString* roleLevel;      //角色等级
@property (nonatomic, strong) NSString* serverID;       //服务器ID
@property (nonatomic, strong) NSString* serverName;     //服务器名称
@property (nonatomic, strong) NSString* vip;            //vip等级


@property (nonatomic, strong) NSString* orderID;       //SDK订单号

@end

NS_ASSUME_NONNULL_END
