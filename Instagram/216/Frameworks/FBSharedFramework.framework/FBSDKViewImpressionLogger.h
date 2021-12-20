//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBSDKImpressionLogging-Protocol.h>

@class NSMutableSet, NSString;
@protocol FBSDKEventLogging, FBSDKGraphRequestFactory, FBSDKNotificationObserving;

@interface FBSDKViewImpressionLogger : NSObject <FBSDKImpressionLogging>
{
    NSString *_eventName;
    id <FBSDKGraphRequestFactory> _graphRequestFactory;
    id <FBSDKEventLogging> _eventLogger;
    id <FBSDKNotificationObserving> _notificationObserver;
    Class _tokenWallet;
    NSMutableSet *_trackedImpressions;
}

+ (id)impressionLoggerWithEventName:(id)arg1 graphRequestFactory:(id)arg2 eventLogger:(id)arg3 notificationObserver:(id)arg4 tokenWallet:(Class)arg5;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *trackedImpressions; // @synthesize trackedImpressions=_trackedImpressions;
@property(retain, nonatomic) Class tokenWallet; // @synthesize tokenWallet=_tokenWallet;
@property(retain, nonatomic) id <FBSDKNotificationObserving> notificationObserver; // @synthesize notificationObserver=_notificationObserver;
@property(retain, nonatomic) id <FBSDKEventLogging> eventLogger; // @synthesize eventLogger=_eventLogger;
@property(retain, nonatomic) id <FBSDKGraphRequestFactory> graphRequestFactory; // @synthesize graphRequestFactory=_graphRequestFactory;
@property(readonly, copy, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)logImpressionWithIdentifier:(id)arg1 parameters:(id)arg2;
- (id)initWithEventName:(id)arg1 graphRequestFactory:(id)arg2 eventLogger:(id)arg3 notificationObserver:(id)arg4 tokenWallet:(Class)arg5;

@end
