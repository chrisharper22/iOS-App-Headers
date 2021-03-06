//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBSDKImpressionLoggerFactory-Protocol.h>

@protocol FBSDKEventLogging, FBSDKGraphRequestFactory, FBSDKNotificationObserving;

@interface FBSDKImpressionLoggerFactory : NSObject <FBSDKImpressionLoggerFactory>
{
    id <FBSDKGraphRequestFactory> _graphRequestFactory;
    id <FBSDKEventLogging> _eventLogger;
    id <FBSDKNotificationObserving> _notificationCenter;
    Class _accessTokenWallet;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) Class accessTokenWallet; // @synthesize accessTokenWallet=_accessTokenWallet;
@property(readonly, nonatomic) id <FBSDKNotificationObserving> notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly, nonatomic) id <FBSDKEventLogging> eventLogger; // @synthesize eventLogger=_eventLogger;
@property(readonly, nonatomic) id <FBSDKGraphRequestFactory> graphRequestFactory; // @synthesize graphRequestFactory=_graphRequestFactory;
- (id)makeImpressionLoggerWithEventName:(id)arg1;
- (id)initWithGraphRequestFactory:(id)arg1 eventLogger:(id)arg2 notificationCenter:(id)arg3 accessTokenWallet:(Class)arg4;

@end

