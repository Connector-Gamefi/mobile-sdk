//
//  UG_SDKParams.h
//  UGSDK
//
//  Created by me on 2020/12/28.
//  Copyright © 2020 UG. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface UG_SDKParams : NSObject

@property (nonatomic, strong) NSString* appID;          //appID
@property (nonatomic, strong) NSString* appKey;             //appKey
@property (nonatomic, strong) NSString* orientation;      //横竖屏， portrait|landscape

-(id)initWithAppID:(NSString*)appID appKey:(NSString*)appKey orientation:(NSString*)orientation;

@end

NS_ASSUME_NONNULL_END
