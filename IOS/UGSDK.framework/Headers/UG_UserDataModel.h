//
//  UG_UserDataModel.h
//  UG_LoginSDK
//
//  Created by mubai on 2020/10/29.
//  Copyright © 2020 UG. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 *  用户信息
 */
@interface UG_UserDataModel : NSObject

@property (nonatomic, copy) NSString *uid;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *loginName;

@property (nonatomic, assign) NSInteger newAccount;
@property (nonatomic, assign) NSInteger needBind;
@property (nonatomic, assign) NSInteger needRealName;
@property (nonatomic, assign) NSInteger accountType;

@property (nonatomic, copy) NSString *token;

@property (nonatomic, assign) NSInteger age;


@end

NS_ASSUME_NONNULL_END
