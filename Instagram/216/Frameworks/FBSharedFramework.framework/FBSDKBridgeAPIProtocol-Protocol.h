//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class NSDictionary, NSString, NSURL;

@protocol FBSDKBridgeAPIProtocol <NSObject>
- (NSDictionary *)responseParametersForActionID:(NSString *)arg1 queryParameters:(NSDictionary *)arg2 cancelled:(_Bool *)arg3 error:(id *)arg4;
- (NSURL *)requestURLWithActionID:(NSString *)arg1 scheme:(NSString *)arg2 methodName:(NSString *)arg3 parameters:(NSDictionary *)arg4 error:(id *)arg5;
@end

