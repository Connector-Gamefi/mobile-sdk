//
//  UGSDKPlatform.h
//  UGSDK
//  对外暴露的接口
//  Created by mubai on 2020/8/7.
//

#import <Foundation/Foundation.h>
#import "UG_SDKParams.h"
#import "UG_GameRole.h"
#import "UG_UserDataModel.h"
#import "UG_PayData.h"

NS_ASSUME_NONNULL_BEGIN

//UGSDK相关回调接口， 游戏层在初始化的时候， 传入该delegate
@protocol UGSDKDelegate<NSObject>

-(void) onUGInitSuccess;
-(void) onUGInitFailed:(NSString*)msg;
-(void) onUGLoginSuccess:(UG_UserDataModel*)result;
-(void) onUGLoginFailed:(NSString*)msg;
-(void) onUGLogoutSuccess:(BOOL)fromUserCenter;
-(void) onUGLogoutFailed:(NSString*)msg;
-(void) onUGPaySuccess:(NSString*)msg;
-(void) onUGPayFailed:(NSString*)msg;
@end

@interface UGSDKPlatform : NSObject

@property (nonatomic, strong) id<UGSDKDelegate> delegate;

+ (instancetype)sharedInstance;


- (void) initWithParams:(UG_SDKParams*)params delegate:(id<UGSDKDelegate>) delegate;

- (void) login;

- (void) logout;

- (void) gameAssets:(NSString*) game_id;

- (void) nftAssets;

- (void) ftAssets;

- (void) submitGameData:(UG_GameRole*) data;

- (void) pay:(UG_PayData*) order;

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions;

- (BOOL)application:(UIApplication *)application openURL:(NSURL *)url options:(nonnull NSDictionary<UIApplicationOpenURLOptionsKey, id> *)options;

-(BOOL)application:(UIApplication *)application handleOpenURL:(NSURL *)url;

-(BOOL)application:(UIApplication *)application openURL:(NSURL *)url sourceApplication:(NSString *)sourceApplication annotation:(id)annotation;

-(void)application:(UIApplication *)application didRegisterForRemoteNotificationsWithDeviceToken:(NSData *)deviceToken;

-(void)application:(UIApplication *)application didReceiveRemoteNotification:(nonnull NSDictionary *)userInfo;

-(void)application:(UIApplication *)application didReceiveRemoteNotification:(NSDictionary *)userInfo fetchCompletionHandler:(void (^)(UIBackgroundFetchResult))completionHandler;

-(void)application:(UIApplication *)application didReceiveLocalNotification:(UILocalNotification *)notification;

- (void)applicationWillResignActive:(UIApplication *)application ;

- (void)applicationDidEnterBackground:(UIApplication *)application ;

- (void)applicationWillEnterForeground:(UIApplication *)application;

- (void)applicationDidBecomeActive:(UIApplication *)application;

- (void)applicationWillTerminate:(UIApplication *)application;
@end

NS_ASSUME_NONNULL_END
